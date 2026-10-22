
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

        // void operator--(){
        //     value--;
        // }

        // void operator!(){
        //     value=!value;
        // }

        // void operator-(){
        //     value=-value;
        // }

        // counter operator-(){
        //     return counter(-value);
        // }

        void display(){
            cout<<"counter value "<<value<<endl;
        }
};

int main(){
    // int n;
    // cin>>n;

    counter c1(5);

    ++++++c1;

    // --c1;
    // cout<<"counter value "<<(-c1).value<<endl;

    c1.display();
    cout<<c1.value<<endl;

    return 0;
}
