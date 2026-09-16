// // // #include<iostream>
// // // using namespace std;

// // // int main()
// // // {
// // //     cout << "Hello, World!" << endl;
// // //     return 0;
// // // }
// // // #include <iostream>
// // // using namespace std;
// // // class NODE{
// // //     public:
// // //         int data;
// // //         NODE *link;
// // //         NODE(int value){
// // //             data=value;
// // //             link=NULL;
// // //         }
// // // };
// // // int main()
// // // {
// // //     NODE *n1=new NODE(10);
// // //     NODE *n2=new NODE(20);
// // //     NODE *n3=new NODE(30);
// // //     n1->link=n2;
// // //     n2->link=n3;
// // //     cout << n1->data << endl;
// // //     cout << n2->data << endl;
// // //     cout << n3->data << endl;
// // //     return 0;
// // // }
// // #include<iostream>
// // using namespace std;
// // // struct NodeStruc{
// // //         int data;
// // //         NodeStruc* next;
// // //         NodeStruc(int d){
// // //             data = d;
// // //             next = nullptr;
// // //         }
// // // };


// // // void display(Node* head){
// // //     Node* current = head;
// // //     while(current != NULL){
// // //         cout << current->data << " -> ";
// // //         current = current->next;
// // //     }
// // // }
// // // int getSize(Node* head){
// // //     Node* current = head;
// // //     int size=0;
// // //     while(current != NULL){
// // //         size++;
// // //         current = current->next;
// // //     }
// // //     return size;
// // // }
// // class Node{
// //     public:
// //         int data;
// //         Node* link;
// //         Node(int d){
// //             data = d;
// //             link = nullptr;
// //         }
// // };
// // class LL{
// //     Node* head;
// //     Node* tail;
// //     public:
// //         LL(){
// //             head = NULL;
// //             tail = NULL;
// //         }
// //         // create a function to insert at beginning
// //         void insertAtBeginning(int x){
// //             //1. create a new node
// //             Node* newNode = new Node(x);
// //             //2. head == null
// //                 // head=tail=newNode
// //                 if(head == NULL){
// //                     head = tail = newNode;
// //                     return;
// //                 }
// //                 else{
// //                     newNode->link = head;
// //                     head = newNode;
// //                 }
// //         }
// //         void insertAtEnd(int val){
// //              Node* newNode = new Node(val);
// //                  if(head == NULL){
// //                     head = tail = newNode;
// //                     return;
// //                 }
// //                 else{
// //                     tail->link = newNode;
// //                      tail = newNode;
// //                 }      
// //         }
// //         void insertAtKPosition(int val,int k){
// //             //list is null
// //             // k is greater than size
// //             if(k<=0){
// //                 cout << "Invalid Position" << endl;
// //                 return;
// //             }  
// //             Node* temp = head;
// //             Node* newNode = new Node(val);
// //             if(k == 1){
// //                 newNode->link = head;
// //                 head = newNode;
// //                 return;
// //             } 
// //             while(temp != NULL){
// //                 int c = 0;
// //                 c = c + 1;
// //                 if(c == k-1){
// //                     Node* curr = temp->link;
// //                     temp->link = newNode;
// //                     newNode->link = curr;
// //                     break;
// //                 }
// //                 temp = temp->link;
// //             }
// //             if(temp == NULL){
// //                 cout << "Invalid Position" << endl;
// //                 return;
// //             }
// //         }
// //         void popFront(){
// //             if(head == NULL) return;
// //             Node* temp = head;
// //             head = head->link;
// //             delete temp;
// //         }
// //         void popBack(){
// //             //case 1: Empty list
// //             if(head== NULL) return;
// //             if(head->link == NULL){
// //                 delete head;
// //                 head = NULL;
// //                 return;
// //             }//find target element 20 in given linklist
// //             Node* temp = head;
// //             //temp.next.next != null
// //             while(temp->link->link != NULL){
// //                 temp=temp->link;
// //             }
// //             tail = temp;
// //             delete temp->link;
// //             temp->link = nullptr;
// //         }
// //         void display(){
// //             Node* temp = head;
// //             while(temp!=NULL){
// //                 cout << temp->data << " -> ";
// //                 temp = temp->link;
// //             }
// //         }
// //         int find(int target){
// //             Node* temp = head;
// //             int k=0;
// //             while(temp!=NULL){
// //                 if(temp->data==target) return k;
// //                 k++;
// //                 temp = temp->link;
// //             }
// //             return -1;
// //         }
// //         int size(){
// //             Node* temp = head;
// //             int length=0;
// //             while(temp!=NULL){
// //                 length++;
// //                 temp = temp->link;
// //             }
// //             return length;
// //         }
// // };
// // //write a function to find the size of linked list
// // int main(){
// //     // linked list is a linear ds used to store data in non -contigous memory locations
// //     // linked lists store elements dynamically in memory
// //     // each element is called a node
// //     // nodes are connecting using pointers
// //     // Data - > stores the actual value
// //     // next pointer: stores the address of next node
// //     LL list;
// //     list.insertAtBeginning(10);
// //     list.insertAtEnd(20);
// //     list.insertAtBeginning(0);
// //     // list.display();
// //     list.insertAtKPosition(15,0);
// //     // list.display();
// //     // cout<<endl;
// //     // list.popFront();
// //     // list.display();
// //     // Node* n1 = new Node(10);
// //     // Node* n2 = new Node(20);
// //     // Node* n3 = new Node(30);
// //     // Node* n4 = new Node(40);
// //     // // (*n1).next = n2;
// //     // n1->next = n2;
// //     // n2->next = n3;
// //     // n3->next = n4;
// //     // // display(n1);
// //     // cout << n1->next->data << "->"<< n1->next->next->data<<endl;
// //     // // create 4 nodes and print data of them after linking
// //     //we have to use first node for traversal only
// //     // write a function to create multiple nodes
// //     return 0;
// // }
// #include<iostream>
// using namespace std;
// class node{
//     public:
//         int data;
//         node* next;
//         node* prev;
//     node(int val){
//         data=val;
//         prev=nullptr;
//         next=nullptr;
//     }
//     node(int val,node* prevnode,node* nextnode){
//         data=val;
//         next=nextnode;
//         prev=prevnode;
//     }
// };
// void display(node* head,bool isReverse=false){
//     if(head==nullptr) return;
//     if(isReverse){
//         display(head->next,isReverse);
//         cout<<head->data<<" ";
//     }
//     else{
//         cout<<head->data<<" ";
//         display(head->next,isReverse);
//     }
// }
// class DLL{
//     private:
//         node* head;
//         node* tail;
//     public:
//         DLL():head(nullptr),tail(nullptr){}
//         void insertatbegin(int val){
//             node* newnode=new node(val,nullptr,head);
//             if(head!=nullptr){
//                 head->prev=newnode;
//             }
//             else{
//                 tail=newnode;
//             }
//             head=newnode;
//         }
//         void insertatback(int val){
//             node* newnode=new node(val,tail,nullptr);
//             if(tail!=nullptr){
//                 tail->next=newnode;
//             }
//             else{
//                 head=newnode;
//             }
//             tail=newnode;
//         }
//         void deletehead(){
//             if(head == nullptr){
//                 return;
//             }
//             else{
//                 node* temp = head;
//                 head = head->next;
        
//                 if(head != nullptr){
//                     head->prev = nullptr;
//                 }
        
//             delete temp;
//             }
//         }
//         // write a program to delete the middle node of a doubly linked list;
//         void deletemiddle(){
//             if(head == nullptr){
//                 return;
//             }
//             else{
//                 node* slow = head;
//                 node* fast = head;
//                 while(fast != nullptr && fast->next != nullptr){
//                     slow = slow->next;
//                     fast = fast->next->next;
//                 }
//                 // slow is now pointing to the middle node
//                 if(slow->prev != nullptr){
//                     slow->prev->next = slow->next;
//                 }
//                 if(slow->next != nullptr){
//                     slow->next->prev = slow->prev;
//                 }
//                 delete slow;
//             }
//         }
// };
// int main(){
//     node* newnode=new node(10,nullptr,nullptr);
//     node* newnode1=new node(20,nullptr,newnode);
//     node* newnode2=new node(30,nullptr,newnode1);
//     newnode1->prev=newnode2;
//     newnode->prev=newnode1;
//     display(newnode2);
//     cout<<endl;
//     display(newnode2,true);
//     return 0;
// }
//create a node class with data and next pointer
// create a class for circular link list
// #include<iostream>
// using namespace std;
// class CNode {
//     public:
//         int data;
//         CNode* next;
//         CNode(int val) {
//             data = val;
//             next = nullptr;
//         }
// };
// class CircularLinkedList {
//     private:
//         CNode* head;
//     public:
//         CircularLinkedList() {
//             head = nullptr;
//         }
//         void insert(int val) {
//             CNode* newNode = new CNode(val);
//             if (head == nullptr) {
//                 head = newNode;
//                 newNode->next = head;
//             } else {
//                 CNode* temp = head;
//                 while (temp->next != head) {
//                     temp = temp->next;
//                 }
//                 temp->next = newNode;
//                 newNode->next = head;
//             }
//         }
//         void display() {
//             if (head == nullptr) return;
//             CNode* temp = head;
//             do {
//                 cout << temp->data << " -> ";
//                 temp = temp->next;
//             } while (temp != head);
//             cout << "(head)" << endl;
//         }
//         void insertatmiddle(int val) {
//             if (head == nullptr) {
//                 insert(val);
//                 return;
//             }
//             CNode* newNode = new CNode(val);
//             CNode* slow = head;
//             CNode* fast = head;
//             while (fast->next != head && fast->next->next != head) {
//                 slow = slow->next;
//                 fast = fast->next->next;
//             }
//             newNode->next = slow->next;
//             slow->next = newNode;
//         }
//         void deletefrombegin() {
//             if (head == nullptr) return;
//             if (head->next == head) {
//                 delete head;
//                 head = nullptr;
//                 return;
//             }
//             CNode* temp = head;
//             while (temp->next != head) {
//                 temp = temp->next;
//             }
//             CNode* toDelete = head;
//             head = head->next;
//             temp->next = head;
//             delete toDelete;
//         }
//         void deletefromend() {
//             if (head == nullptr) return;
//             if (head->next == head) {
//                 delete head;
//                 head = nullptr;
//                 return;
//             }
//             CNode* temp = head;
//             while (temp->next->next != head) {
//                 temp = temp->next;
//             }
//             CNode* toDelete = temp->next;
//             temp->next = head;
//             delete toDelete;
//         }
// };
// int main() {
//     CircularLinkedList cll;
//     cll.insertatmiddle(25);
//     cll.display();
//     return 0;
// }
// create a class stack and implement using array;
#include <iostream>
using namespace std;
class Stack {
    
    private:
        int* arr;
        int top;
        int capacity;
    public:
        Stack(int size) {
            arr = new int[size];
            capacity = size;
            top = -1;
        }
        Stack() {
            delete[] arr;
        }
        void push(int x) {
            if (top == capacity - 1) {
                cout << "Stack Overflow" << endl;
                return;
            }
            arr[++top] = x;
        }
        void pop() {
            if (top == -1) {
                cout << "Stack Underflow" << endl;
                return;
            }
            top--;
        }
        int peek() {
            if (top == -1) {
                cout << "Stack is Empty" << endl;
                return -1; // or throw an exception
            }
            return arr[top];
        }
        bool isEmpty() {
            return top == -1;
        }
        int size() {
            return top + 1;
        }
};
int main (){
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top element: " << s.peek() << endl;
    cout << "Stack size: " << s.size() << endl;
    s.pop();
    cout << "Top element after pop: " << s.peek() << endl;
    return 0;
}
