#include "Vector.h"
#include <iostream>

Vector::Vector() {
    Vec_ptr = nullptr;
    Vec_size = 0;
    Vec_capacity = 0;
}

Vector::~Vector() {
    delete[] Vec_ptr;
}

void Vector::reserve(int n) {
    if (n <= Vec_capacity) return;
    int *temp = new int[n];
    for (int i = 0; i < Vec_size; i++) {
        temp[i] = Vec_ptr[i];
    }
    delete[] Vec_ptr;
    Vec_ptr = temp;
    Vec_capacity = n;
}

void Vector::push_back(int element) {
    if (Vec_size == Vec_capacity) {
        int new_cap = (Vec_capacity == 0) ? 1 : Vec_capacity * 2;
        reserve(new_cap);
    }
    Vec_ptr[Vec_size] = element;
    Vec_size++;
}

int& Vector::operator[](unsigned int index) {
    return Vec_ptr[index];
}

Vector::Vector(const Vector &other) {
    Vec_size = other.Vec_size;
    Vec_capacity = other.Vec_capacity;
    Vec_ptr = new int[Vec_capacity];
    for (int i = 0; i < Vec_size; i++) {
        Vec_ptr[i] = other.Vec_ptr[i];
    }
}

Vector& Vector::operator=(const Vector &other) {
    if (this != &other) {
        delete[] Vec_ptr;
        Vec_size = other.Vec_size;
        Vec_capacity = other.Vec_capacity;
        Vec_ptr = new int[Vec_capacity];
        for (int i = 0; i < Vec_size; i++) {
            Vec_ptr[i] = other.Vec_ptr[i];
        }
    }
    return *this;
}

int Vector::size() { return Vec_size; }
int Vector::capacity() { return Vec_capacity; }
