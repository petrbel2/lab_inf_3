#ifndef DEQUE_H
#define DEQUE_H
#include "list.hpp"

template <typename data_type>
class Deque
{
private:
    LinkedList<data_type> list;
public:
    Deque(data_type* items, int length) : list(items, length) {}

    Deque() : list() {}

    Deque(const Deque <data_type> & old_list) : list(old_list.list) {}

    Deque& operator=(const Deque& src) {
        Deque tmp(src); 
        swap(tmp); 
        return *this;
    }

    int GetLength() {
        return list.GetLength();
    }

    data_type PopFront() {
        data_type result = list.GetFirst();
        list.DeleteFirst();
        return result;
    }

    Deque<data_type>* Append(data_type new_elem) {
        this->list.Append(new_elem);
        return this;
    }

    Deque<data_type>* Prepend(data_type new_elem) {
        this->list.Prepend(new_elem);
        return this;
    }

     data_type PopBack() {
        data_type result = list.GetLast();
        list.DeleteLast();
        return result;
    }
};

#endif