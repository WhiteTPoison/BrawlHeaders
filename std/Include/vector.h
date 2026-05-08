#pragma once

#include <stddef.h>
#include <types.h>
#include <memory.h>
#include <sr/sr_common.h>

template <typename T>
class Vector {

    // arr is the integer pointer
    // which stores the address of our vector
    T* arr;

    // capacity is the total storage
    // capacity of the vector
    int capacity;

    // current is the number of elements
    // currently present in the vector
    int current;

public:
    Vector()
    {
        arr = new T[1];
        capacity = 1;
        current = 0;
    }

    ~Vector()
    {
        delete[] arr;
    }

    void clear()
    {
        delete[] arr;
        arr = new T[1];
        current = 0;
    }

    // Function to add an element at the last
    void push(T data)
    {

        // if the number of elements is equal to the
        // capacity, that means we don't have space to
        // accommodate more elements. We need to double the
        // capacity
        if (current == capacity)
        {
            T* temp = new T[2 * capacity];

            // copying old array elements to new array
            for (int i = 0; i < capacity; i++)
            {
                memmove(&temp[i], &arr[i], sizeof(T));
            }

            // deleting previous array
            delete[] arr;
            capacity *= 2;
            arr = temp;
        }

        // Inserting data
        memmove(&arr[current], &data, sizeof(T));
        current++;
    }

    // function to add element at any index
    void push(T data, int index)
    {

        // if index is equal to capacity then this
        // function is same as push defined above
        if (index == capacity)
        {
            push(data);
        }
        else
        {
            arr[index] = data;
            current++;
        }
    }
    void erase(int index) {
        if(index < 0 || index >= current)
        {
            return;
        }
        arr[index];
        for (int i = index; i < current - 1; ++i)
        {
            arr[i] = arr[i + 1];
            arr[i + 1] = NULL;
        }
        current--;
    }

    // function to extract element at any index
    T get(int index)
    {
        // if index is within the range
        if (index < current)
            return arr[index];
    }

    // function to delete last element
    void pop() { current--; }

    // function to get size of the vector
    int size() { return current; }

    // function to get capacity of the vector
    int getcapacity() { return capacity; }

    void setsize(int new_size)
    {
        if(new_size > capacity)
        {
            return;
        }
        current = new_size;
    }

    void assign(size_t count, const T& value) {
        clear(); // Clear existing
        if (count > capacity) {
            delete[] arr;
            arr = new T[count];
            capacity = count;
        }
        for (size_t i = 0; i < count; ++i) {
            arr[i] = value;
        }
        current = count;
    }

    T* data() { return arr; }

    T& operator[](int index)
    {
        return arr[index];
    }
};