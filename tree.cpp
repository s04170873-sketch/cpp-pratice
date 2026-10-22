#include<iostream>
using namespace std;
// struct  Node
// {
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         data=val;
//         left=nullptr;
//         right=nullptr;
//     }
// };


// int main(){
//     Node* root=new Node(5);
//     root->left=new Node(4);
//     root->right=new Node(6);
//     root->left->left=new Node(2);
//     root->left->right=new Node(3);
//     root->right->left=new Node(4);
//     root->right->right=new Node(2);
//     return 0;
// }

// represnation of tree;
// 1.Linked representation:- store in linked list
// 2.sequential representation:- store in the array
// right child :- 2*i +1
// left child :- 2*i -1
// parent index=(i-1)/2
int main(){
    int tree[7]={10,20,30,40,50,60,70};
    int n=7;
    for(int i=0;i<n;i++){
        cout<<"Node: "<<tree[i]<<" ";
        int leftc=2*i+1;
        int rightc=2*i-1;
        if(leftc<n){
            cout<<tree[leftc]<<" ";
        }
        if(rightc<n){
            cout<<tree[rightc]<<" ";
        }
        cout<<endl;
    }
}