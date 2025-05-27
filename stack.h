#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

constexpr int STACK_SIZE = 100;

class Stack {
private:
    char arr[STACK_SIZE];
    int topIndex;

public:
    Stack();  
    bool isEmpty() const;
    bool isFull() const;
    void push(char item);
    char pop();
    char top() const;
};

#endif

