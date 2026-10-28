// inheritence:- inheritence is a mechanism in C++ by which one class is allowed to inherit the features(fields and methods) of another class. 
// The class which inherits the properties of another class is called derived class (or child class, sub class) and 
// the class whose properties are inherited is called base class (or parent class, super class). 
// Inheritance represents the IS-A relationship between different classes.

#include<iostream>
using namespace std;
class Person{
    public:
        string name;
        int age;

        Person(string n, int a){
            name=n;
            age=a;
        }
};
class Student: public Person{
    public:
        int rollNo;
        string course;

        void display(){
            Person::display();
            cout<<"Roll No: "<<rollNo<<endl;
            cout<<"Course: "<<course<<endl;
        }
};