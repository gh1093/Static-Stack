#include <iostream>
#include<cstring>
#include"stack.h"

using namespace std;

stack::stack(int size){
    
   stackArray = new student[size]; 
   stackSize = size;
   topStack = -1; //we name it -1 because when we increment it this will
   // go to 0 which is the top of stack
}

//This push function pushes a student record onto the stack
void stack::push(student x){
    
    if (topStack == stackSize - 1){
        cout << "Stack is Full! Error!" << endl; 
        return;
    } else {
        topStack++;
        stackArray[topStack] = x;
    }  
}

void stack::pop(){
    
    if (topStack == -1){
        cout << "Stack is Empty!" << endl;
        return;
    } else {
        topStack--;
    }    
}

//What we are going to do is display what is at the top of the stack
//and then pop it to remove it
student stack::stackTop(){
    return stackArray[topStack];
}

void stack::display(){
    while (topStack > -1){
        cout << stackArray[topStack].getStudentName() << "," 
                << stackArray[topStack].getStudentID() 
            << "," << stackArray[topStack].getStudentAddress() << "," 
            << stackArray[topStack].getscoreAverage() << endl;
        topStack--;    
    }
}
