/* 
 * File: Project 3
 * Author: Gabriel Hurtado
 * Instructor: Dr. Hwang
 * Course: Data Structures
 * Created on September 28, 2017, 9:04 AM
 */
#include <cstdlib>
#include"student.h"
#include"stack.h"
#include<cstring>
#include <iostream>

using namespace std;

//This function takes in a a pointer to test scores and then calulates 
//and returns average
double testAverage(int *num){
    int numScores = 10;
    int total = 0;
    double average;
    
    //The parentheses makes it so that it will advance to the next index in 
    //array
    for (int i = 0; i < numScores; i++){
        total += (*(num + i)); 
    }
    average = total / numScores;
    
    return average;
}
/*
 * 
 */
int main(int argc, char** argv) {
    int testScores1[10] = {98, 68, 69, 48, 97, 85, 79, 97, 97, 69};
    int *scores1 = testScores1;
    
    for (int i = 0; i < 3; i++) {
        cout << "This is i: " << i << endl;
        cout << "This is scores[i]: " << scores1[i] << endl;
        cout << "This is scores1: " << scores1 << endl;
    }
    cout << "After for loop, scores1: " << scores1 << endl;
    int testScores2[10] = {97, 97, 69, 79, 79, 69, 79, 78, 69, 79};
    int *scores2 = testScores2; 
    
    int testScores3[10] = {93, 92, 63, 76, 71, 60, 78, 72, 62, 74};
    int *scores3 = testScores3;
    
    int testScores4[10] = {72, 29, 82, 96, 73, 62, 71, 74, 62, 74};
    int *scores4 = testScores4;
    
    int testScores5[10] = {94, 91, 64, 73, 69, 39, 79, 48, 89, 99};
    int *scores5 = testScores5;
    
    int testScores6[10] = {57, 87, 29, 89, 39, 79, 29, 98, 29, 89};
    int *scores6 = testScores6;
    
    int testScores7[10] = {37, 77, 79, 99, 49, 89, 59, 98, 59, 89};
    int *scores7 = testScores7;
    
    int testScores8[10] = {57, 77, 79, 59, 99, 99, 49, 88, 69, 99};
    int *scores8 = testScores8;
    
    int testScores9[10] = {67, 37, 99, 79, 59, 99, 49, 88, 99, 79};
    int *scores9 = testScores9;
    
    int testScores10[10] = {67, 77, 37, 99, 39, 99, 59, 68, 89, 69};
    int *scores10 = testScores10;
    
    int testScores11[10] = {87, 97, 58, 89, 49, 79, 79, 74, 89, 49};
    int *scores11 = testScores11;
    
    int testScores12[10] = {87, 47, 99, 69, 89, 65, 75, 58, 49, 49};
    int *scores12 = testScores12;
    
    int testScores13[10] = {77, 57, 69, 49, 59, 79, 99, 48, 59, 49};
    int *scores13 = testScores13;
    
    int testScores14[10] = {67, 97, 59, 59, 49, 59, 49, 58, 49, 39};
    int *scores14 = testScores14;
    
    int testScores15[10] = {57, 57, 89, 59, 49, 39, 79, 58, 39, 99};
    int *scores15 = testScores15;
    
    int size = 15;
    //read about key word new
    //Its convention to where if you create a new array of objects, you're going
    //to have a pointer point to this new array of objects
    //READ ABOUT THAT!
    
    //Here we are creating a new student object, but there was not any
    //matching constructor for a new object with no parameters
    student *studentArray = new student[size];
    studentArray[0]=student("Bob B.",1,"49 Hi Rd",testAverage(scores1), 
                            scores1);
    studentArray[1]=student("Mark Mot",23,"123 blah st.",testAverage(scores2), 
                            scores2);
    studentArray[2]=student("Sam Sosa",21,"1234 vegas st.",testAverage(scores3), 
                            scores3 );
    studentArray[3]=student("Bill Beeter",91,"22 ford st",testAverage(scores4), 
                            scores4);
    studentArray[4]=student("Jesse Jot",66,"45 string st.",testAverage(scores5), 
                            scores5);
    studentArray[5]=student("Tim Trunk",234,"909 hill st.",testAverage(scores6), 
                            scores6);
    studentArray[6]=student("Mike Jordan",421,"834 cherry st.",
                            testAverage(scores7), scores7);
    studentArray[7]=student("Elvis Pres",83,"092 love st.",testAverage(scores8),
                            scores8);
    studentArray[8]=student("George Wash",43,"123 run st.",testAverage(scores9),
                            scores9);
    studentArray[9]=student("John Jones",72,"1934 hide st.",
                            testAverage(scores10), scores10);
    studentArray[10]=student("Sam Cassidy",32,"502 hider st.",
                            testAverage(scores11), scores11);
    studentArray[11]=student("Ryan Rooter",909,"678 circle st.",
                             testAverage(scores12), scores12);
    studentArray[12]=student("Chris Cryer",192,"432 avenue st.",
                            testAverage(scores13), scores13);
    studentArray[13]=student("Phil Foots",8472,"839 grave st.",
                            testAverage(scores14), scores14);
    studentArray[14]=student("Madison Monto",55,"303 winter st.",
                            testAverage(scores15), scores15);
    
    stack newStack(15);
    
    for (int i = 0; i<15; i++){
        cout << studentArray[i].getStudentName() << "," << 
                studentArray[i].getStudentID()
             << "," << studentArray[i].getStudentAddress() << ","
             << studentArray[i].getscoreAverage() << endl;
        newStack.push(studentArray[i]);
    }
    
    cout << endl;
    
    //You're returning a student object here so you can't just display an object,
    //you have to display the parts of that object
    cout <<"This student record is at the top of the stack: " << endl;
    cout << newStack.stackTop().getStudentName() << "," 
            << newStack.stackTop().getStudentID() 
            << "," << newStack.stackTop().getStudentAddress() << "," 
            << newStack.stackTop().getscoreAverage() << endl;
    
    newStack.pop();
    cout << endl;
    
    cout <<"The previous record was popped and this record is now at the top: " 
            << endl;
    cout << newStack.stackTop().getStudentName() << "," 
            << newStack.stackTop().getStudentID() 
            << "," << newStack.stackTop().getStudentAddress() << "," 
            << newStack.stackTop().getscoreAverage() << endl;
    
    newStack.pop();
    cout << endl;
    
    cout <<"The previous record was popped and this record is now at the top: " 
            << endl;
    cout << newStack.stackTop().getStudentName() << "," 
            << newStack.stackTop().getStudentID() 
            << "," << newStack.stackTop().getStudentAddress() << "," 
            << newStack.stackTop().getscoreAverage() << endl;
    
    newStack.pop();
    cout << endl;
    
    cout <<"The previous record was popped and this record is now at the top: "
            << endl;
    cout << newStack.stackTop().getStudentName() << "," 
            << newStack.stackTop().getStudentID() 
            << "," << newStack.stackTop().getStudentAddress() << "," 
            << newStack.stackTop().getscoreAverage() << endl;
    
    newStack.pop();
    cout << endl;
    
    cout <<"The previous record was popped and this record is now at the top: "
            << endl;
    cout << newStack.stackTop().getStudentName() << "," 
            << newStack.stackTop().getStudentID() 
            << "," << newStack.stackTop().getStudentAddress() << "," 
            << newStack.stackTop().getscoreAverage() << endl;
    
    cout << endl;
    cout << "Here are the remaining records in the stack: " << endl;
    newStack.display();
   
    
    
    

    
    
    
    
    
    return 0;
}

