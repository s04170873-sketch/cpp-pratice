// //Q1. Implement a Singly Linked List in C++ with operations to insert a node at the beginning, insert at the end, insert at a given position, delete from the beginning, delete from the end, display the list, find an element, and calculate the size of the list.
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int value) {
//         data = value;
//         next = nullptr;
//     }
// };

// class LinkedList {
// private:
//     Node* head;
//     Node* tail;

// public:
//     LinkedList() {
//         head = nullptr;
//         tail = nullptr;
//     }

//     void insertAtBeginning(int value) {
//         Node* newNode = new Node(value);

//         if (head == nullptr) {
//             head = tail = newNode;
//             return;
//         }

//         newNode->next = head;
//         head = newNode;
//     }

//     void insertAtEnd(int value) {
//         Node* newNode = new Node(value);

//         if (head == nullptr) {
//             head = tail = newNode;
//             return;
//         }

//         tail->next = newNode;
//         tail = newNode;
//     }

//     void insertAtPosition(int value,int position) {
//         if (position <= 0) {
//             cout << "Invalid Position" << endl;
//             return;
//         }

//         if (position == 1) {
//             insertAtBeginning(value);
//             return;
//         }

//         Node* current = head;

//         for (int i = 1; i < position - 1 && current != nullptr; i++)
//             current = current->next;

//         if (current == nullptr) {
//             cout << "Invalid Position" << endl;
//             return;
//         }

//         Node* newNode = new Node(value);
//         newNode->next = current->next;
//         current->next = newNode;

//         if (newNode->next == nullptr)
//             tail = newNode;
//     }

//     void deleteFromBeginning() {
//         if (head == nullptr)
//             return;

//         Node* temp = head;
//         head = head->next;

//         if (head == nullptr)
//             tail = nullptr;

//         delete temp;
//     }

//     void deleteFromEnd() {
//         if (head == nullptr)
//             return;

//         if (head->next == nullptr) {
//             delete head;
//             head = tail = nullptr;
//             return;
//         }

//         Node* current = head;

//         while (current->next->next != nullptr)
//             current = current->next;

//         delete current->next;
//         current->next = nullptr;
//         tail = current;
//     }

//     void display() {
//         Node* current = head;

//         while (current != nullptr) {
//             cout << current->data << " -> ";
//             current = current->next;
//         }

//         cout << "NULL" << endl;
//     }

//     int find(int target) {
//         Node* current = head;
//         int position = 0;

//         while (current != nullptr) {
//             if (current->data == target)
//                 return position;

//             position++;
//             current = current->next;
//         }

//         return -1;
//     }

//     int size() {
//         Node* current = head;
//         int length = 0;

//         while (current != nullptr) {
//             length++;
//             current = current->next;
//         }

//         return length;
//     }

//     ~LinkedList() {
//         while (head != nullptr)
//             deleteFromBeginning();
//     }
// };

// int main() {
//     LinkedList list;

//     list.insertAtBeginning(10);
//     list.insertAtEnd(20);
//     list.insertAtBeginning(0);
//     list.insertAtPosition(15,2);

//     cout << "Linked List: ";
//     list.display();

//     cout << "Size: " << list.size() << endl;
//     cout << "Position of 20: " << list.find(20) << endl;

//     list.deleteFromBeginning();
//     cout << "After deleting from beginning: ";
//     list.display();

//     list.deleteFromEnd();
//     cout << "After deleting from end: ";
//     list.display();

//     return 0;
// }
// //Q2. Implement a Doubly Linked List in C++ with operations to insert nodes at the beginning and end, delete the middle node, and display the list in both forward and reverse directions.
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int value,Node* previous = nullptr,Node* nextNode = nullptr) {
//         data = value;
//         prev = previous;
//         next = nextNode;
//     }
// };

// void displayForward(Node* head) {
//     while (head != nullptr) {
//         cout << head->data << " ";
//         head = head->next;
//     }

//     cout << endl;
// }

// void displayReverse(Node* tail) {
//     while (tail != nullptr) {
//         cout << tail->data << " ";
//         tail = tail->prev;
//     }

//     cout << endl;
// }

// class DoublyLinkedList {
// private:
//     Node* head;
//     Node* tail;

// public:
//     DoublyLinkedList() {
//         head = nullptr;
//         tail = nullptr;
//     }

//     void insertAtBeginning(int value) {
//         Node* newNode = new Node(value,nullptr,head);

//         if (head != nullptr)
//             head->prev = newNode;
//         else
//             tail = newNode;

//         head = newNode;
//     }

//     void insertAtEnd(int value) {
//         Node* newNode = new Node(value,tail,nullptr);

//         if (tail != nullptr)
//             tail->next = newNode;
//         else
//             head = newNode;

//         tail = newNode;
//     }

//     void deleteFromBeginning() {
//         if (head == nullptr)
//             return;

//         Node* temp = head;
//         head = head->next;

//         if (head != nullptr)
//             head->prev = nullptr;
//         else
//             tail = nullptr;

//         delete temp;
//     }

//     void deleteMiddle() {
//         if (head == nullptr)
//             return;

//         Node* slow = head;
//         Node* fast = head;

//         while (fast != nullptr && fast->next != nullptr) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         if (slow->prev != nullptr)
//             slow->prev->next = slow->next;

//         if (slow->next != nullptr)
//             slow->next->prev = slow->prev;

//         if (slow == head)
//             head = slow->next;

//         if (slow == tail)
//             tail = slow->prev;

//         delete slow;
//     }

//     void display() {
//         cout << "Forward: ";
//         displayForward(head);

//         cout << "Reverse: ";
//         displayReverse(tail);
//     }

//     ~DoublyLinkedList() {
//         while (head != nullptr)
//             deleteFromBeginning();
//     }
// };

// int main() {
//     DoublyLinkedList list;

//     list.insertAtEnd(10);
//     list.insertAtEnd(20);
//     list.insertAtEnd(30);
//     list.insertAtEnd(40);

//     cout << "Doubly Linked List" << endl;
//     list.display();

//     list.deleteMiddle();

//     cout << "After deleting middle node" << endl;
//     list.display();

//     return 0;
// }
// //Q3. Implement a Circular Linked List in C++ with operations to insert a node, insert a node at the middle, delete from the beginning, delete from the end, and display the circular list.
// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int value) {
//         data = value;
//         next = nullptr;
//     }
// };

// class CircularLinkedList {
// private:
//     Node* head;

// public:
//     CircularLinkedList() {
//         head = nullptr;
//     }

//     void insert(int value) {
//         Node* newNode = new Node(value);

//         if (head == nullptr) {
//             head = newNode;
//             newNode->next = head;
//             return;
//         }

//         Node* current = head;

//         while (current->next != head)
//             current = current->next;

//         current->next = newNode;
//         newNode->next = head;
//     }

//     void insertAtMiddle(int value) {
//         if (head == nullptr) {
//             insert(value);
//             return;
//         }

//         Node* newNode = new Node(value);
//         Node* slow = head;
//         Node* fast = head;

//         while (fast->next != head && fast->next->next != head) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         newNode->next = slow->next;
//         slow->next = newNode;
//     }

//     void deleteFromBeginning() {
//         if (head == nullptr)
//             return;

//         if (head->next == head) {
//             delete head;
//             head = nullptr;
//             return;
//         }

//         Node* current = head;

//         while (current->next != head)
//             current = current->next;

//         Node* temp = head;
//         head = head->next;
//         current->next = head;

//         delete temp;
//     }

//     void deleteFromEnd() {
//         if (head == nullptr)
//             return;

//         if (head->next == head) {
//             delete head;
//             head = nullptr;
//             return;
//         }

//         Node* current = head;

//         while (current->next->next != head)
//             current = current->next;

//         Node* temp = current->next;
//         current->next = head;

//         delete temp;
//     }

//     void display() {
//         if (head == nullptr) {
//             cout << "List is empty" << endl;
//             return;
//         }

//         Node* current = head;

//         do {
//             cout << current->data << " -> ";
//             current = current->next;
//         } while (current != head);

//         cout << "(head)" << endl;
//     }

//     ~CircularLinkedList() {
//         while (head != nullptr)
//             deleteFromBeginning();
//     }
// };

// int main() {
//     CircularLinkedList list;

//     list.insert(10);
//     list.insert(20);
//     list.insert(30);
//     list.insertAtMiddle(25);

//     cout << "Circular Linked List: ";
//     list.display();

//     list.deleteFromBeginning();
//     cout << "After deleting from beginning: ";
//     list.display();

//     list.deleteFromEnd();
//     cout << "After deleting from end: ";
//     list.display();

//     return 0;
// }
// //Q4. Implement a Stack using an Array in C++ with operations push, pop, peek, checking whether the stack is empty, and finding the current size of the stack. Also handle stack overflow and underflow conditions.
// #include <iostream>
// using namespace std;

// class Stack {
// private:
//     int* arr;
//     int top;
//     int capacity;

// public:
//     Stack(int size) {
//         arr = new int[size];
//         capacity = size;
//         top = -1;
//     }

//     ~Stack() {
//         delete[] arr;
//     }

//     void push(int value) {
//         if (top == capacity - 1) {
//             cout << "Stack Overflow" << endl;
//             return;
//         }

//         arr[++top] = value;
//     }

//     void pop() {
//         if (top == -1) {
//             cout << "Stack Underflow" << endl;
//             return;
//         }

//         top--;
//     }

//     int peek() {
//         if (top == -1) {
//             cout << "Stack is Empty" << endl;
//             return -1;
//         }

//         return arr[top];
//     }

//     bool isEmpty() {
//         return top == -1;
//     }

//     int size() {
//         return top + 1;
//     }
// };

// int main() {
//     Stack stack(5);

//     stack.push(10);
//     stack.push(20);
//     stack.push(30);

//     cout << "Top element: " << stack.peek() << endl;
//     cout << "Stack size: " << stack.size() << endl;

//     stack.pop();

//     cout << "Top element after pop: " << stack.peek() << endl;

//     return 0;
// }
// unit 2
// #include<iostream>
// #include<string>
// #include<iomanip>
// using namespace std;

// class Student
// {
//     int marks;
//     string name;
//     int arr[2][2];

// public:
//     Student()
//     {
//         marks=0;
//         name="Unknown";
//     }

//     void setData(string name,int marks)
//     {
//         this->name=name;
//         this->marks=marks;
//     }

//     void show()
//     {
//         cout<<"Name: "<<name<<endl;
//         cout<<"Marks: "<<marks<<endl;
//     }

//     void setMatrix()
//     {
//         for(int i=0;i<2;i++)
//             for(int j=0;j<2;j++)
//                 cin>>arr[i][j];
//     }

//     void showMatrix()
//     {
//         for(int i=0;i<2;i++)
//         {
//             for(int j=0;j<2;j++)
//                 cout<<arr[i][j]<<" ";
//             cout<<endl;
//         }
//     }
// };

// int main()
// {
//     int a=10;
//     int *p=&a;

//     cout<<"Value: "<<a<<endl;
//     cout<<"Pointer Value: "<<*p<<endl;
//     cout<<"Address: "<<p<<endl;

//     int arr[5]={10,20,30,40,50};
//     int *ptr=arr;

//     cout<<"Array: ";
//     for(int i=0;i<5;i++)
//         cout<<*(ptr+i)<<" ";
//     cout<<endl;

//     int **pp=&p;
//     cout<<"Pointer to Pointer: "<<**pp<<endl;

//     void *vp=&a;
//     cout<<"Void Pointer: "<<*(int*)vp<<endl;

//     int &ref=a;
//     ref=50;
//     cout<<"Reference: "<<a<<endl;

//     Student s;
//     s.setData("Prafull",90);
//     s.show();

//     Student *sp=&s;
//     sp->show();

//     Student students[2];
//     students[0].setData("Aman",80);
//     students[1].setData("Rahul",85);

//     cout<<"Array of Objects:"<<endl;

//     for(int i=0;i<2;i++)
//         students[i].show();

//     string str="Hello";
//     string str2="World";

//     cout<<"String: "<<str<<endl;
//     cout<<"Length: "<<str.length()<<endl;

//     str.append(" ");
//     str.append(str2);

//     cout<<"After Append: "<<str<<endl;

//     str.push_back('!');
//     cout<<"After Push Back: "<<str<<endl;

//     str.pop_back();
//     cout<<"After Pop Back: "<<str<<endl;

//     cout<<"Substring: "<<str.substr(0,5)<<endl;

//     int Student::*memberPtr=&Student::marks;
//     s.setData("Prafull",95);

//     cout<<"Pointer To Data Member: "<<s.*memberPtr<<endl;

//     Student *objPtr=&s;
//     cout<<"Using Object Pointer: "<<objPtr->*memberPtr<<endl;

//     int matrix[2][3]={{1,2,3},{4,5,6}};

//     cout<<"2D Array:"<<endl;

//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<3;j++)
//             cout<<matrix[i][j]<<" ";
//         cout<<endl;
//     }
// }