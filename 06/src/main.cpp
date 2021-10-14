#include "main.h"
#include <mutex>

std::mutex m1_mutex;

void pcout (const int thread_number) {
    std::lock_guard m1_lock_guard(m1_mutex);
    std::cout << "This thread is: " << thread_number << std::endl;
}

bool isPrime(uint64_t candidate) {
    if (candidate == 2)
        return true;
    if (candidate < 2 || candidate % 2 == 0)
        return false;
    for (uint64_t i = 3; i <= sqrt (candidate); ++i) {
        if (candidate % i == 0)
            return false;
    }
    return true;
}

uint64_t findPrime(uint32_t n, uint32_t &count) {
    uint64_t current = 0;
    while (count < n) {
        ++current;
        if (isPrime(current))
            ++count;
    }
    return current;
}

uint64_t asyncFindPrime(uint32_t n) {
    uint32_t count = 0;
    std::future<uint64_t> prime_number = std::async(std::launch::async, findPrime, n, std::ref(count));
    while (count * 100 / n < 100) {
        std::cout << count * 100 / n << "% " << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return prime_number.get();
}

struct Item {
    size_t m_id;
    int32_t m_price;
    Item(size_t id, int32_t price): m_id(id), m_price(price) {}
};

bool operator< (const Item &lhs, const Item &rhs) {
    return lhs.m_price < rhs.m_price;
}

std::mutex m2_mutex;
std::priority_queue<Item> house;
const size_t num_of_items = 10;
bool end;

void Put() {
    for (size_t i = 0; i < num_of_items; ++i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        {
            std::lock_guard m2_lock_guard(m2_mutex);
            const std::pair<size_t, int32_t> item {i + 1, rand()% 10000};
            house.push(Item(item.first, item.second));
            std::cout << "Owner puts item:   " << item.first << " with price: " << item.second << std::endl;
        }
        std::lock_guard m2_lock_guard(m2_mutex);
        end = true;
    }
}

void Steal() {
    for (size_t i = 0; i < num_of_items; ++i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(1500));
        {
            std::lock_guard m2_lock_guard(m2_mutex);
            house.pop();
            std::cout << "Theef stolls item: " << house.top().m_id << " with price: " << house.top().m_price << std::endl;
        }
    }
}

int main(int argc, char** args) {
    std::cout << "Exercise 1" << std::endl;
    std::thread thread_1(pcout, 1);
    thread_1.join();
    std::thread thread_2(pcout, 2);
    thread_2.join();

    std::cout << "Exercise 2" << std::endl;
    const auto prime_number = asyncFindPrime(1'000'000);
    std::cout << "Prime number = " << prime_number << std::endl;
    
    std::cout << "Exercise 3" << std::endl;
    std::thread owner (Put);
    std::thread theef (Steal);
    owner.join();
    theef.join();

    return EXIT_SUCCESS;
}
