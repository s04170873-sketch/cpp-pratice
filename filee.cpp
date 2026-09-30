#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream my_file("example.txt",ios::out);
    if(my_file){
        my_file<<"some example data"<<endl;
        my_file.close();
    }
    else{
        cout<<"Unable to open file"<<endl;
        return 1;
    }
    string line;
    my_file.open("example.txt",ios::in);
    if(my_file){
        while(!my_file.eof()){
            getline(my_file,line);
            cout<<line<<endl;
        }
    my_file.close();
    }
    else{
        cout<<"Unable to opne"<<endl;
        my_file.close();
    }
    //read-get;
    //write-put;
    // seekg(modifiy the position of read pointer) and tellg(current position of read pointer) for get part;
    // seekp and tellp for put part;
}