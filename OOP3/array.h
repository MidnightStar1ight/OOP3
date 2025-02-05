#ifndef ARRAY_H
#define ARRAY_H
#include "number.h"

class Array
{
private:
    int size = 0;
    int capacity = 0;
    number* array = nullptr;
public:
    Array();
    Array(int initCapacity);
    ~Array();
    int getSize();
    void clear();
    void resize(int newCapacity);
    void add(number value);
    void remove();
    void fill(string& input);
    void show(ostream& output);
    number& operator[](int index);
    number average();
    number MSD();
    int partition(int low, int high);
    void quickSort(int low, int high);
    void reverse();
    void sort(bool isReversed = false);
};

#endif // ARRAY_H
