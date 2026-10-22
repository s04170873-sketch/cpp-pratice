
#include<iostream>
using namespace std;

class counter{
    public:
        int value;

        counter(int v=0){
            value=v;
        }

        void operator++(int){
            value++;
        }

        counter& operator++(){
            value++;
            return *this;
        }

        void operator--(int){
            value--;
        }

        counter& operator--(){
            value--;
            return *this;
        }

        void operator!(){
            value=!value;
        }

        counter operator-(){
            return counter(-value);
        }

        void display(){
            cout<<"counter value "<<value<<endl;
        }
};

int main(){
    counter c1(5);

    ++++++c1;
    c1.display();

    ------c1;
    c1.display();

    c1++;
    c1.display();

    ++c1;
    c1.display();

    c1--;
    c1.display();

    --c1;
    c1.display();

    cout<<"Unary minus: "<<(-c1).value<<endl;

    !c1;
    c1.display();

    return 0;
}
