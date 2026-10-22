
// #include<iostream>
// using namespace std;

// class counter{
//     public:
//         int value;

//         counter(int v=0){
//             value=v;
//         }

//         void operator++(int){
//             value++;
//         }

//         counter& operator++(){
//             value++;
//             return *this;
//         }

//         void operator--(int){
//             value--;
//         }

//         counter& operator--(){
//             value--;
//             return *this;
//         }

//         void operator!(){
//             value=!value;
//         }

//         counter operator-(){
//             return counter(-value);
//         }

//         void display(){
//             cout<<"counter value "<<value<<endl;
//         }
// };

// int main(){
//     counter c1(5);

//     ++++++c1;
//     c1.display();

//     ------c1;
//     c1.display();

//     c1++;
//     c1.display();

//     ++c1;
//     c1.display();

//     c1--;
//     c1.display();

//     --c1;
//     c1.display();

//     cout<<"Unary minus: "<<(-c1).value<<endl;

//     !c1;
//     c1.display();

//     return 0;
// }


// Question of distance in feet and inclhes;

#include<iostream>
using namespace std;

class Distance{
    public:
        int feet;
        int inches;

        Distance(int f=0,int i=0){
            feet=f;
            inches=i;
        }

        Distance operator+(Distance d){
            Distance temp;
            temp.feet=feet+d.feet;
            temp.inches=inches+d.inches;

            if(temp.inches>=12){
                temp.feet++;
                temp.inches-=12;
            }

            return temp;
        }

        void operator++(int){
            inches++;
            if(inches>=12){
                feet++;
                inches-=12;
            }
        }

        Distance& operator++(){
            inches++;
            if(inches>=12){
                feet++;
                inches-=12;
            }
            return *this;
        }

        void display(){
            cout<<"Distance: "<<feet<<" feet "<<inches<<" inches"<<endl;
        }
};

int main(){
    Distance d1(5,10);
    Distance d2(3,8);

    Distance d3=d1+d2;
    d3.display();

    d1++;
    d1.display();

    ++d2;
    d2.display();

    return 0;
}
