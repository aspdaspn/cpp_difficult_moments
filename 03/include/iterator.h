#pragma once
#include <ostream>

//
// Iterator Class
//
template <class T>
class Iterator {
    private:
        T it;
    public:
        Iterator(const T position = 0): it(position) {}
        bool operator!= (const Iterator<T> &rhs) const {return it != rhs.it;}
        bool operator== (const Iterator<T> &rhs) const {return it == rhs.it;}
        Iterator& operator++ () {++it; return *this;}
        T operator* () const {return it;}
};

//
// Range class for ranged for
//
template <class T>
class inRange {
    private:
        T m_from;
        T m_to;
    public:
        inRange(T from, T to): m_from(from), m_to(to) {}
        Iterator<T> begin() const {return Iterator<T> (m_from);}
        Iterator<T> end() const {return Iterator<T> (m_to);}
};
