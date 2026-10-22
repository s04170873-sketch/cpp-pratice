#include<iostream>
#include<fstream>
using namespace std;
class Students{
    public:
        int id;
        char c[20];
        int salary; 
};
int main(){
    Students s;
    int search;
    cout<<"enter the search id";
    cin>>search;
    ofstream
}
// int main(){
    // int a[5];
    // ofstream file("bin.dat",ios::binary);
    // for(int i=0;i<5;i++){
    //     cin>>a[i];
    //     file.write((char*)&a[i],sizeof(a[i]));
    // }
    // file.close();
    // int x;
    // ifstream file1("bin.dat",ios::binary);
    // for(int i=0;i<5;i++){
    //     file1.read((char*)&x,sizeof(x));
    //     cout<<x<<" ";
    // }
    // file1.close();
    // int x=25;
    // float y=5.5;
    // ofstream file("bin.dat",ios::binary);
    // file.write((char*)&x,sizeof(x));
    // file.write((char*)&y,sizeof(y));
    // file
// }