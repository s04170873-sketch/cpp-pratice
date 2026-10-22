#include <iostream>
#include<string>
#include<cctype>
using namespace std;
int aukat(char s){
    if(s=='+'||s=='-'){
        return 0;
    }
    else if(s=='*'||s=='/'||s=='%'){
        return 1;
    }
    else if(s=='^'){
        return 2;
    }
    else if(s=='('){
        return 3;
    }
    else{
        return 4;
    }
}
int main() {
    string s,r="";
    getline(cin,s);
    int q=s.length();
    char st[q];
    int top=-1;
    for(int i=0;i<s.length();i++){
        if(isalpha(s[i])){
            r=r+s[i];
        }
        else{
            char ch;
            if(top==-1){
                top++;
                st[top]=s[i];
            }
            else{
                int curnt=aukat(s[i]);
                int prev=aukat(st[top]);
                while(curnt==prev||curnt<prev){
                    r=r+st[top];
                    if(top==-1){
                        break;
                    }
                    else{
                        prev=aukat(st[top--]);
                    }
                }
                st[top]=s[i];
                if(curnt!=prev|){
                    top++;
                    st[top]=s[i];
                }
            }
        }
    }
    for(int i=top;i>=0;i--){
        r=r+st[i];
    }
    cout<<r;
    return 0;
}