#include<iostream>
using namespace std;
// class Student{
//     public:
//         Student(){
//             cout<<"Constructor called";
//         }
// };
// int main(){
//     Student s;
// }

// Default Constructor
// class Student
// {
// public:
//     int roll;
//     Student()
//     {
//         roll=10;
//     }
// };
// int main()
// {
//     Student s;
//     cout<<s.roll;
//     return 0;
// }

// Constructor With Default Arguments
class student{
    public:
        int roll;
        int marks;
        student(){
            roll=10;
            cout<<roll;
        }
        student(int r){
            roll=r;
            
        }
}