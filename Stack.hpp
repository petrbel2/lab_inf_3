#include "list.hpp"

template <typename data_type>
class Stack
{
private:
    LinkedList<data_type> list;
    int length;
public:
    Stack(data_type* items, int length) : list(items, length) {}

    Stack() : list() {}

    Stack(const Stack <data_type> & old_list) : list(old_list.list) {}

    Stack& operator=(const Stack& src) {
        Stack tmp(src); 
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

    Stack<data_type>* Append(data_type new_elem) {
        this->list.Prepend(new_elem);
        return this;
    }
};