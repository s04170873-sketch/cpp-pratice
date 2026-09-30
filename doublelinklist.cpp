// #include <iostream>
// using namespace std;
// class Node{
//     public:
//         int data;
//         Node* next;
//         Node* prev;
//     Node(int val){
//         data=val;
//         next=nullptr;
//         prev=nullptr;
//     }
// };
// class Linklist{
//     Node* head;
//     Node* tail;
//     public:
//         Linklist(){
//             head=nullptr;
//             tail=nullptr;
//         }
//     void insertatbegin(int val){
//         Node* newNode=new Node(val);
//         if(head==nullptr){
//             head=tail=newNode;
//             return;
//         }
//         newNode->next=head;
//         head->prev=newNode;
//         head=newNode;
//     }
//     void insertatend(int val){
//         Node* newNode=new Node(val);
//         tail=head;
//         while(tail->next!=nullptr){
//             tail=tail->next;
//         }
//         tail->next=newNode;
//         newNode->prev=tail;
//         tail=newNode;
//     }
//     void insertatposition(int val,int key){
//         Node* newNode =new Node(val);
//         Node* temp=head;
//         for(int i=1;i<key-1;i++){
//             temp=temp->next;
//         }
//         // newNode->next=temp->next;
//         // newNode->prev=temp;
//         // temp->next=newNode;
//         // temp->next->prev=temp->next;
//         newNode->next=temp->next;
//         newNode->prev=temp;
//         temp->next->prev=newNode;
//         temp->next=newNode;
//     }
//     void display(){
//         Node* temp=head;
//         while(temp!=nullptr){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//     }
//     void nodedelete(int val){
//         Node* temp=head;
//         while(temp!=nullptr){
//             if(temp->data==val){
//                 if(temp==head){
//                     head=head->next;
//                     if(head!=nullptr){
//                         head->prev=nullptr;
//                     }
//                     delete temp;
//                     return;
//                 }
//                 else if(temp==tail){
//                     tail=tail->prev;
//                     tail->next=nullptr;
//                     delete temp;
//                     return;
//                 }
//                 else{
//                     temp->prev->next=temp->next;
//                     temp->next->prev=temp->prev;
//                     delete temp;
//                     return;
//                 }
//             }
//             temp=temp->next;
//         } 
        
// };
// int main() {
//     Linklist list;
//     list.insertatbegin(20);
//     list.insertatbegin(30);
//     list.insertatbegin(300);
//     list.insertatbegin(40);
//     list.insertatend(10);
//     list.insertatposition(50,2);
//     list.nodedelete(20);
//     list.display();
//     return 0;
// }