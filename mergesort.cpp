#include<iostream>
using namespace std;
void sort(int a[],int m){
    for(int i=0;i<10;i++){
        for(int j=1+i;j<m;j++){
            if(a[i]>a[j]){
                int m1=a[j];
                a[j]=a[i];
                a[i]=m1;
            }
        }
    }
}
void mergesort(int a[10],int l,int r){
    int m=(r+l)/2;
    int l1[m];
    int r1[m];
    for(int i=0;i<m;i++){
        l1[i]=a[l+i];
        r1[i]=a[m+i];
    }
    sort(l1,m);
    sort(r1,m);
    int i=0,j=0,k=0;
    while(i<m && j<m){
        if(l1[i]<=r1[j]){
            a[k++]=l1[i++];
        }
        else{
            a[k++]=r1[j++];
        }
    }
    while(i<m){
        a[k++]=l1[i++];
    }
    while(j<m){
        a[k++]=r1[j++];
    }
}
int main(){
    int a[10]={1,3,5,7,9,2,4,6,8,10};
    mergesort(a,0,10);
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
}
