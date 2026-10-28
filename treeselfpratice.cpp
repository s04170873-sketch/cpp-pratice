#include<iostream>
#include<queue>
using namespace std;
// int main()
// {
//     int a[7]={10,20,30,40,50,60,70};
//     int i=2;
//     cout<<"Parent: "<<a[i]<<endl;
//     cout<<"Left: "<<a[2*i+1]<<endl;
//     cout<<"Right: "<<a[2*i+2];
// }
struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* createNode(int val){
    Node* newNode=new Node;
    newNode->data=val;
    newNode->right=nullptr;
    newNode->left=nullptr;
    return newNode;
}
void insert(Node* &root,int x){
    Node* NewNode=createNode(x);
    if (root==nullptr){
        root=NewNode;
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp->left==nullptr){
            temp->left=NewNode;
            return;
        }
        else {
            q.push(temp->left);
        }
        if(temp->right==nullptr){
            temp->right=NewNode;
            return;
        }
        else{
            q.push(temp->right);
        }
    }

}

void display(Node* root)
{
    if (root == nullptr)
        return;

    cout << root->data << " ";
    display(root->left);
    display(root->right);
}
int main(){
    // Node* root=createNode(10);
    // Node* root->left=createNode(20);
    // Node* root->right=createNode(30);
    Node* root = nullptr;
    int x;

    for (int i = 0; i < 7; i++)
    {
        cin >> x;
        insert(root, x);
    }
    display(root);

    return 0;
}

// #include <iostream>
// #include <queue>
// using namespace std;

// struct Node
// {
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* createNode(int x)
// {
//     Node* n = new Node;
//     n->data = x;
//     n->left = nullptr;
//     n->right = nullptr;
//     return n;
// }

// void insert(Node* &root, int x)
// {
//     Node* n = createNode(x);

//     if (root == nullptr)
//     {
//         root = n;
//         return;
//     }

//     queue<Node*> q;
//     q.push(root);

//     while (!q.empty())
//     {
//         Node* temp = q.front();
//         q.pop();

//         if (temp->left == nullptr)
//         {
//             temp->left = n;
//             return;
//         }
//         else
//         {
//             q.push(temp->left);
//         }

//         if (temp->right == nullptr)
//         {
//             temp->right = n;
//             return;
//         }
//         else
//         {
//             q.push(temp->right);
//         }
//     }
// }

// void preorder(Node* root)
// {
//     if (root == nullptr)
//         return;

//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }

// int main()
// {
//     Node* root = nullptr;
//     int x;

//     cout << "Enter 7 values: ";

//     for (int i = 0; i < 7; i++)
//     {
//         cin >> x;
//         insert(root, x);
//     }

//     cout << "Preorder: ";
//     preorder(root);

//     return 0;
// }