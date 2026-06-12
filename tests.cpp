#include "Queue.hpp"
#include "Deque.hpp"
#include "Stack.hpp"
#include "Vector.hpp"

void test_LinkedList() {
    std::cout<<"Testing List\n";
    int arr[3] = {1, 2, 3};
    LinkedList<int> bro(arr, 3);
    if (bro.GetLength() == 3) {
        std::cout<<"Length returned correctly\n";
    }
    else {
        std::cout<<"Length request failture\n";
    }
    if (bro.GetFirst() == 1) {
        std::cout<<"GetFirst works correctly\n";
    }
    else {
        std::cout<<"GetFirst failture\n";
    }
    if (bro.Get(1) == 2) {
        std::cout<<"Get works correctly\n";
    }
    else {
        std::cout<<"Get failture\n";
    }
    if (bro.GetLast() == 3) {
        std::cout<<"GetLast works correctly\n";
    }
    else {
        std::cout<<"GetLast failture\n";
    }
    bro.Prepend(0);
    if (bro.GetFirst() == 0) {
        std::cout<<"Prepend works correctly\n";
    }
    else {
        std::cout<<"Prepend failture\n";
    }
    bro.InsertAt(9, 2);
    if (bro.Get(2) == 9) {
        std::cout<<"InsertAt works correctly\n";
    }
    else {
        std::cout<<"InsertAt failture\n";
    }
    bro.Append(4);
    if (bro.GetLast() == 4) {
        std::cout<<"Append works correctly\n";
    }
    else {
        std::cout<<"Append failture\n";
    }
    bro.DeleteFirst();
    if (bro.GetFirst() == 1) {
        std::cout<<"DeleteFirst works correctly\n";
    }
    else {
        std::cout<<"DeleteFirst failture\n";
    }
    bro.DeleteLast();
    if (bro.GetLast() == 3) {
        std::cout<<"DeleteLast works correctly\n";
    }
    else {
        std::cout<<"DeleteLast failture\n";
    }
}

void test_Queue() {
    std::cout<<"Testing Queue\n";
    int arr[3] = {1, 2, 3};
    Queue<int> bro(arr, 3);
    if (bro.GetLength() == 3) {
        std::cout<<"Length returned correctly\n";
    }
    else {
        std::cout<<"Length request failture\n";
    }
    bro.Append(8);
    if (bro.Pop() == 1) {
        std::cout<<"Pop works correctly\n";
    }
    else {
        std::cout<<"Pop failture\n";
    }
    bro.Pop();
    bro.Pop();
    if (bro.Pop() == 8) {
        std::cout<<"Append works correctly\n";
    }
    else {
        std::cout<<"Append failture\n";
    }
}

void test_Stack() {
    std::cout<<"Testing Stack\n";
    int arr[3] = {1, 2, 3};
    Stack<int> bro(arr, 3);
    if (bro.GetLength() == 3) {
        std::cout<<"Length returned correctly\n";
    }
    else {
        std::cout<<"Length request failture\n";
    }
    if (bro.Pop() == 1) {
        std::cout<<"Pop works correctly\n";
    }
    else {
        std::cout<<"Pop failture\n";
    }
    bro.Append(8);
    if (bro.Pop() == 8) {
        std::cout<<"Append works correctly\n";
    }
    else {
        std::cout<<"Append failture\n";
    }
}

void test_Deque() {
    std::cout<<"Testing Deque\n";
    int arr[3] = {1, 2, 3};
    Deque<int> bro(arr, 3);
    if (bro.GetLength() == 3) {
        std::cout<<"Length returned correctly\n";
    }
    else {
        std::cout<<"Length request failture\n";
    }
    if (bro.PopFront() == 1) {
        std::cout<<"PopFront works correctly\n";
    }
    else {
        std::cout<<"PopFront failture\n";
    }
    if (bro.PopBack() == 3) {
        std::cout<<"PopBack works correctly\n";
    }
    else {
        std::cout<<"PopBack failture\n";
    }
    bro.Prepend(9);
    if (bro.PopFront() == 9) {
        std::cout<<"Prepend works correctly\n";
    }
    else {
        std::cout<<"Prepend failture\n";
    }
    bro.Append(8);
    if (bro.PopBack() == 8) {
        std::cout<<"Append works correctly\n";
    }
    else {
        std::cout<<"Append failture\n";
    }
}

void test_Vector() {
    std::cout<<"Testing Vector\n";
    int arr[3] = {0, 3, 4};
    Vector<int> bro(arr, 3);
    int arr1[3] = {1, 2, 3};
    Vector<int> bro1(arr1, 3);
    if (bro.GetLength() == 3) {
        std::cout<<"Length returned correctly\n";
    }
    else {
        std::cout<<"Length request failture\n";
    }
    if (bro.vector_norm() == 5) {
        std::cout<<"Norm returned correctly\n";
    }
    else {
        std::cout<<"Norm request failture\n";
    }
    Vector<int> bro2 = bro + bro1;
    if (bro2.Get(1) == 5) {
        std::cout<<"Sum got correctly\n";
    }
    else {
        std::cout<<"Sum failture\n";
    }
    Vector<int> bro3 = bro - bro1;
    if (bro3.Get(1) == 1) {
        std::cout<<"Subtraction got correctly\n";
    }
    else {
        std::cout<<"Subtraction failture\n";
    }
    Vector<int> bro4 = bro * 2;
    if (bro4.Get(1) == 6) {
        std::cout<<"Multiplication on skalar got correctly\n";
    }
    else {
        std::cout<<"Multiplication on skalar failture\n";
    }
    int skalar_result = bro * bro1;
    if (skalar_result == 18) {
        std::cout<<"Scalar multiplication got correctly\n";
    }
    else {
        std::cout<<"Scalar multiplication failture\n";
    }
    int arr16[2] = {1, 2};
    Vector<int> bro10(arr16, 2);
    Vector<int> bro24 = bro + bro10;
    Vector<int> equal1(arr16, 2);
    Vector<int> equal2(arr16, 2);
    if (equal1 == equal2) {
        std::cout<<"Comparison got correctly\n";
    }
    else {
        std::cout<<"Comparison failture\n";
    }
}