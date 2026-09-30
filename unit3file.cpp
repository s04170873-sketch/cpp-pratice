//write a code to write and read data from a file using fstream in C++14
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    // ofstream file("unit3.txt");
    fstream file1;
    file1.open("unit3.txt",ios::out|ios::in|ios::app);
    // file<<"prafull"<<endl;
    // file<<10<<endl;
    // file<<2304<<endl;
    // string x;
    // int m,mn;
    // file>>x;
    // file>>m;
    // file>>mn;
    // cout<<x<<endl;
    // cout<<m<<endl;
    // cout<<mn<<endl;

    // //Reading Character by Character — get()
    // char ch;
    // while (file.get(ch))
    // {
    //     cout<<ch;
    // }
    // //Writing Character by Character — put()
    // file.put('a')<<endl;

    // file.put('v');
    //writing combination of word from the line;
    // string x;
    // char ch;
    // int c=1;
    // while(file.get(ch)){
    //     if(ch==' '){
    //         cout<<" "<<endl;
    //         c=1;
    //         continue;
    //     }
    //     else{
    //         if(c%4==0){
    //             cout<<ch<<endl;;
    //         }
    //         else{
    //             cout<<ch;
    //         }
    //         c++;
    //     }
    // }

    // use of eof()
    // string line;
    // while(!file.eof()){
    //     getline(file,line);
    //     cout<<line<<endl;
    // }

    //each word reverse same position
    // file1<<".";
    file1.close();
    fstream file("unit3_1.txt",ios::in|ios::out);
    // char ch;
    // string s1="";
    // string s2="";
    // string reverser_word="";
    // while(file.get(ch)){
    //     if(ch!=' '&&ch!='.'){
    //         s1=s1+ch;
    //     }
    //     else{
    //         for(int i=0;i<s1.length();i++){
    //             s2=s1[i]+s2;
    //         }
    //         reverser_word=reverser_word+s2+" ";
    //         s1="";
    //         s2="";
    //     }
    // }
    // cout<<reverser_word;

    //position reverser with same word;
    // char ch;
    // string s1="";
    // string reverser_word="";
    // string answer="";

    // if(file.is_open()){
    //     cout<<"file is open"<<endl;

    //     while(file.get(ch)){

    //         if(ch!=' '&&ch!='.'&&ch!='\n'){
    //             s1=s1+ch;
    //         }

    //         else if(ch=='\n'){
    //             reverser_word=reverser_word+s1;
    //             answer=answer+reverser_word+'\n';
    //             reverser_word="";
    //             s1="";
    //         }

    //         else{
    //             reverser_word=s1+" "+reverser_word;

    //             if(ch=='.'){
    //                 answer=answer+reverser_word;
    //                 reverser_word="";
    //             }

    //             s1="";
    //         }
    //     }
    // }

    // cout<<answer;
    // string s;
    // int x;
    // while(file>>x){
    //     cout<<x;
    // }

    //tellg and seekg
    // char ch;
    // string line;
    // getline(file,line);
    // cout<<file.tellg();
    // file.seekg(14);
    // file.get(ch);
    // cout<<ch;

    //tellp and seekp
    // file.seekp(11);
    // file<<"rishi";
    // cout<<file.tellg()<<endl;
    // cout<<file.tellp()<<endl;

    //writing
    // string name;
    // int roll;
    // float marks;
    // cout<<"Enter name: ";
    // cin>>name;
    // cout<<"Enter roll: ";
    // cin>>roll;
    // cout<<"Enter marks: ";
    // cin>>marks;
    // file<<name<<" "<<roll<<" "<<marks;


    //reading
    file.close();
}