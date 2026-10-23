// basic type to basic type
// basic type to class type
// class type to basic type
// one class type to another type
// types of conservation
// implicit and explicit



  

#include<iostream>
using namespace std;

class Number{
    public:
        int value;

        Number(int v=0){
            value=v;
        }
};

// Basic type to class type
class Distance{
    private:
        int meters;
        int centimeters;

    public:
        Distance(int m,int c=0){
            meters=m;
            centimeters=c;
        }

        void display(){
            cout<<"Distance: "<<meters<<" meters "<<centimeters<<" centimeters"<<endl;
        }
};

// Class type to basic type
class DistanceToInt{
    private:
        int meters;
        int centimeters;

    public:
        DistanceToInt(int m,int c=0){
            meters=m;
            centimeters=c;
        }

        operator int(){
            return meters;
        }
};
// class type to class type
class temperature{
    private:
        double celsius; 
    public:
        temperature(double c){
            celsius=c;
        }

        operator double(){
            return (celsius*9/5)+32;
        }
};
int main(){
    Number n=10;

    double d=12.8;   
    int y=static_cast<int>(d);
    cout<<"Converted integer: "<<y<<endl;

    Distance dist=n.value;
    dist.display();

    DistanceToInt dist1(10,50);
    int meter=dist1;
    cout<<"Meters: "<<meter<<endl;

    temperature temp(40.0);
    double fahrenheit=temp;
    cout<<"Fahrenheit: "<<fahrenheit<<endl;
    return 0;
}




