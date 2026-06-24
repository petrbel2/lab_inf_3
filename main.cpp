#include "Queue.hpp"
#include "Deque.hpp"
#include "Stack.hpp"
#include "Vector.hpp"
#include "tests.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

static void clear_input_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main()
{
    int choice;
    int buffer;
    
    test_LinkedList();
    test_Queue();
    test_Stack();
    test_Deque();
    test_Vector();
    std::cout<<"Enter queue length: ";
    std::cin>>buffer; 
    int* arr = new int[buffer];
    for (int i = 0; i < buffer; i++) {
        std::cout<<"Element: ";
        std::cin>>arr[i];
    }
    Queue<int> test_1(arr, buffer);
    delete[] arr;
    std::cout<<"Enter Stack length: ";
    std::cin>>buffer;
    int* arr1 = new int[buffer];
    for (int i = 0; i < buffer; i++) {
        std::cout<<"Element: ";
        std::cin>>arr1[i];
    }
    Stack<int> test_2(arr1, buffer);
    delete[] arr1;
    std::cout<<"Enter Deque length: ";
    std::cin>>buffer;
    int* arr2 = new int[buffer];
    for (int i = 0; i < buffer; i++) {
        std::cout<<"Element: ";
        std::cin>>arr2[i];
    }
    Deque<int> test_3(arr2, buffer);
    delete[] arr2;
        std::cout<<"Enter vector length: ";
    std::cin>>buffer;
    int* arr4 = new int[buffer];
    for (int i = 0; i < buffer; i++) {
        std::cout<<"Element: ";
        std::cin>>arr4[i];
    }
    Vector<int> test_4(arr4, buffer);
    delete[] arr4;
    printf(" [1] Get Queue length\n");
    printf(" [2] Get Steque length\n");
    printf(" [3] Get Deque length\n");
    printf(" [4] Append Queue element\n");
    printf(" [5] Append Steque element\n");
    printf(" [6] Append Deque element\n");
    printf(" [7] Prepend Deque element\n");
    printf(" [8] Get Queue element\n");
    printf(" [9] Get Steque element\n");
    printf(" [10] Get Deque element\n");
    printf(" [11] Get Vector length\n");
    printf(" [12] Get Vector norm\n");
    printf(" [13] Sum vectors\n");
    printf(" [14] Subtract vectors\n");
    printf(" [15] Multiply vectors\n");
    printf(" [16] Multiply vector \n");
    printf(" [0] Exit\n");
    printf("----------------------------\n");
    while (1) {
        
        printf("Choose: ");

        if (scanf("%d", &choice) != 1) {
            printf("Ошибка: введено не число.\n");
            clear_input_buffer();
            continue;
        }

        switch (choice) {
            case 1:
                std::cout<<test_1.GetLength()<<"\n";
                break;
            case 2:
                std::cout<<test_2.GetLength()<<"\n";
                break;
            case 3:
                std::cout<<test_3.GetLength()<<"\n";
                break;
            case 4:
                std::cout<<"New element: ";
                std::cin>>buffer;
                test_1.Append(buffer);
                clear_input_buffer();
                break;
            case 5:
                std::cout<<"New element: ";
                std::cin>>buffer;
                test_2.Append(buffer);
                clear_input_buffer();
                break;
            case 6:
                std::cout<<"New element: ";
                std::cin>>buffer;
                test_3.Append(buffer);
                clear_input_buffer();
                break;
            case 7:
                std::cout<<"New element: ";
                std::cin>>buffer;
                test_3.Prepend(buffer);
                clear_input_buffer();
                break;
            case 8:
                std::cout<<test_1.Pop()<<"\n";
                break;
            case 9:
                std::cout<<test_2.Pop()<<"\n";
                break;
            case 10:
                std::cout<<test_3.PopFront()<<"\n";
                break;
            case 11:
                std::cout<<test_4.GetLength()<<"\n";
                break;
            case 12:
                std::cout<<test_4.vector_norm()<<"\n";
                break;
            case 13:
                {
                std::cout<<"Length: ";
                std::cin>>buffer;
                int* arr3 = new int[buffer];
                for (int i = 0; i < buffer; i++) {
                    std::cout<<"Element: ";
                    std::cin>>arr3[i];
                }
                Vector<int> test_7(arr3, buffer);
                delete[] arr3;
                test_4 = test_4 + test_7;
                break;
                }
            case 14:
                {
                std::cout<<"Length: ";
                std::cin>>buffer;
                int* arr4 = new int[buffer];
                for (int i = 0; i < buffer; i++) {
                    std::cout<<"Element: ";
                    std::cin>>arr4[i];
                }
                Vector<int> test_5(arr4, buffer);
                delete[] arr4;
                test_4 = test_4 - test_5;
                break;
                }
            case 15:
                {
                std::cout<<"Length: ";
                std::cin>>buffer;
                int* arr5 = new int[buffer];
                for (int i = 0; i < buffer; i++) {
                    std::cout<<"Element: ";
                    std::cin>>arr5[i];
                }
                Vector<int> test_6(arr5, buffer);
                delete[] arr5;
                int multiresult = test_4 * test_6;
                std::cout<<multiresult<<"\n";
                break;
                }
            case 16:
                {
                std::cout<<"Skalar: ";
                std::cin>>buffer;
                test_4 = test_4 * buffer;
                break;
                }
            default:
                std::cout<<"Wrong number.\n";
                break;
            case 0:
                std::cout<<"Leaving\n";
                return 0;
        }
    }
};