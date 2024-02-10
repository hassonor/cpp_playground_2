//
// Created by Or on 2/10/2024.
//

#include "headers/StackC1.h"


StackC1::StackC1() {
    _maxsize = 10;
    _size = 0;
    _data = new int[_maxsize];
}

bool StackC1::isEmpty() {
    return this->_size == 0;
}

void StackC1::push(int value) {
    if (_size < _maxsize) {
        _data[_size++] = value;
    } else {
        _maxsize += 20;
        int* temp = new int[_maxsize];
        for (int i = 0; i < _size; i++)
            temp[i] = _data[i];
        temp[_size++] = value;
        delete[] _data;
        _data = temp;
    }

}

StackC1::~StackC1() {
    delete[] _data;
}

void testStackC1() {
    StackC1 s1;
    StackC1* s2 = new StackC1();
    delete s2;
}