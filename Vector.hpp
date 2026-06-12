#include "array.hpp"
#include <cmath>
#include "Stack.hpp"

template <typename data_type>
class Vector
{
private:
    DynamicArray<data_type> array;
public:

    Vector(data_type* items, int length) : array(items, length) {}

    Vector() : array() {}

    Vector(Vector <data_type> & old_vector) : array(old_vector.array) {}

    int GetLength() {
        return array.GetLength();
    }

    double vector_norm() {
        data_type result = 0;
        for (int i = 0; i < array.GetLength(); i++) {
            result += (array.Get(i) * array.Get(i));
        }
        return sqrt(result);
    }

    Vector operator + (Vector& new_vector) 
    {
    if (array.GetLength() == new_vector.GetLength()) {
        Vector res(*this);
        for (int i = 0; i < array.GetLength(); i++) {
            res.array.Set(i, array.Get(i) + new_vector.Get(i));
        }
        return res;
        }
        else {
            std::cout<<"Wrong lengths, first vector copy returned\n";
            Vector res(*this);
            return res;
        }
    }

    data_type Get(int index) {
        return (array.Get(index));
    }

    Vector operator - (Vector& new_vector) 
    {
        if (array.GetLength() == new_vector.GetLength()) {
        Vector res(*this);
        for (int i = 0; i < array.GetLength(); i++) {
            res.array.Set(i, array.Get(i) - new_vector.Get(i));
        }
        return res;
        }
        else {
            std::cout<<"Wrong lengths, first vector copy returned\n";
            Vector res(*this);
            return res;
        }
    }

    data_type operator * (Vector& new_vector) 
    {
        if (array.GetLength() == new_vector.GetLength()) {
        data_type result = 0;
        for (int i = 0; i < array.GetLength(); i++) {
            result += array.Get(i) * new_vector.Get(i);
        }
        return result;
        }
        else {
            std::cout<<"Wrong lengths, zero returned\n";
            return 0;
        }
    }

    Vector operator * (data_type skalar)
    {
        Vector<data_type> res(*this);
        for (int i = 0; i < array.GetLength(); i++) {
            res.array.Set(i, array.Get(i) * skalar);
        }
        return res;
    }

    bool operator == (Vector& new_vector) 
    {
        if (array.GetLength() == new_vector.GetLength()) {
            bool flag = true;
            for (int i = 0; i < this->GetLength(); i++) {
                if (array.Get(i) != new_vector.array.Get(i)) {
                    flag = false;
                }
            }
            return flag;
            }
        else {
            return false;
        }
    }
};
