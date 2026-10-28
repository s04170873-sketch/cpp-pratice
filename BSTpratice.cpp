#include<iostream>
#include<queue>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
Node* createNode(int val){
    Node* n=new Node;
    n->data=val;
    n->left=nullptr;
    n->right=nullptr;
    return n;
}
Node* Minimum(Node* root){
    while(root->left!=nullptr){
        Minimum(root->left);
    }
    return root;
}
void insert(Node* &root,int x){
    Node* NewNode=createNode(x);
    if(root==nullptr){
        root=NewNode;
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(x<temp->data){
            if(temp->left==nullptr){
                temp->left=NewNode;
                return;
            }
            q.push(temp->left);
        }
        else{
            if(temp->right==nullptr){
                temp->right=NewNode;
                return;
            }
            q.push(temp->right);
        }
    }
}


// insertion without queue in BST!!!

// void insert(Node* &root, int x) {
//     if (root == nullptr) {
//         root = createNode(x);
//         return;
//     }

//     if (x < root->data) {
//         insert(root->left, x);
//     }
//     else {
//         insert(root->right, x);
//     }
// }



void serachh(Node* root,int key){
    if(root==nullptr){
        cout<<"Not found";
        return;
    }
    if(key<root->data){
        serachh(root->left,key);
    }
    else if(key>root->data){
        serachh(root->right,key);
    }
    else{
        cout<<"Found";
        return;
    }
}

void deleteNode(Node* &root,int key){
    if(root==nullptr){
        return;
    }
    if(key<root->data){
        deleteNode(root->left,key);
    }
    else if(key>root->data){
        deleteNode(root->right,key);
    }
    else{
        if(root->left==nullptr){
            Node* temp=root;
            root=root->right;
            delete temp;
        }
        else if(root->right==nullptr){
            Node* temp=root;
            root=root->left;
            delete temp;
        }
        else{
            Node* temp=Minimum(root->right);
            root->data=temp->data;
            deleteNode(root->right,temp->data);
        }
    }
}
void display(Node* root){
    if(root==nullptr){
        return;
    }
    cout<<root->data<<" ";
    display(root->left);
    display(root->right);
}
int main(){
    Node* root=nullptr;
    int x;
    for(int i=0;i<7;i++){
        cin>>x;
        insert(root,x);
    }
    serachh(root,40);
    deleteNode(root,40);
    display(root);
}
