#include "list.hpp"

template <typename data_type>
class Queue
{
private:
    LinkedList<data_type> list;
public:
    Queue(data_type* items, int length) : list(items, length) {}

    Queue() : list() {}

    Queue(const Queue <data_type> & old_list) : list(old_list.list) {}

    Queue& operator=(const Queue& src) {
        Queue tmp(src); 
        swap(tmp); 
        return *this;
    }

    int GetLength() {
        return list.GetLength();
    }

    data_type Pop() {
        data_type result = list.GetFirst();
        list.DeleteFirst();
        return result;
    }

    Queue<data_type>* Append(data_type new_elem) {
        this->list.Append(new_elem);
        return this;
    }
};



