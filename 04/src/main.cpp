#include "main.h"
#include "insert_sorted.h"

int main(int argc, char** args) {
    std::cout << "Exercise 1" << std::endl;
    srand(time(NULL));
    std::vector<int> sorted_vector(20);
    
    std::generate(sorted_vector.begin(), sorted_vector.end(), [] () {return rand() % 100;});
    std::sort(sorted_vector.begin(), sorted_vector.end());
    printContainer(sorted_vector);

    int insertion = 33;
    insert_sorted(sorted_vector, insertion);
    printContainer(sorted_vector);


    std::cout << "Exercise 2" << std::endl;
    std::vector<double> analog_signal(100);
    std::vector<int> digital_signal(100);
    const double voltage = 3;
    auto sinus = [i = 0, &voltage]() mutable {
        return (voltage * sin(++i * 2.0 * 3.14 / 100));
    };

    generate(analog_signal.begin(), analog_signal.end(), sinus);
    printContainer(analog_signal);

    copy (analog_signal.begin(), analog_signal.end(), digital_signal.begin());
    printContainer(digital_signal);

    auto sampling_error = std::inner_product(analog_signal.begin(), analog_signal.end(), digital_signal.begin(), 0.0, std::plus<double> {}, 
            [] (double a, double b) {return pow(a - b, 2);});

    std::cout << "Sampling Error: " << sampling_error << std::endl;

    return EXIT_SUCCESS;
}
