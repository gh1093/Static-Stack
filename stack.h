
#ifndef STACK_H
#define STACK_H
#include "student.h"
#include<cstring>
#include <iostream>


using namespace std;

class stack {
    
private:
    student *stackArray; 
    int stackSize;
    int topStack;
     
public:    
    stack(int);
    void push(student x);
    void pop(); 
    student stackTop();
    void display();
};



#endif /* STACK_H */

