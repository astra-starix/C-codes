#include<iostream>
using namespace std;

class Node{

    public:
    int data;

    Node* prev;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    // ~Node(){
    //     int val = this -> data;
    //     if(next != NULL){
    //         delete next;
    //         next = NULL;
    //     }
    // }
};


void print (Node* head){

    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;

    }
    cout<<endl;
}


int getLength(Node* head){
    Node* temp = head;
    int len = 0;

    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

void insertAtHead(Node* &head, int d){
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;

}

void insertAtTail(Node* &tail, int d){
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
}


// void insertAtPosition(Node* &head, Node* &tail, int position, int d){

//     if(position == 1){
//         insertAtHead(head, d);
//         return;
//     }
//     Node* temp = head;
//     int count = 1;

//     while(count < position - 1){
//         temp = temp -> next;
//         count++;
//     }

//     if(temp -> next = NULL){
//         insertAtTail(tail, d);
//         return;
//     }

//     Node* nodeToInsert = new Node(d);
//     nodeToInsert -> next = temp -> next;
//     temp -> next -> prev = nodeToInsert;
//     temp -> next = nodeToInsert;
//     nodeToInsert -> prev = temp;

// }
// void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    
//     if(position == 1){
//         insertAtHead(head, d);
//         return;
//     }

//     Node* temp = head;
//     int count = 1;

//     while (count < position - 1)
//     {
//         temp = temp -> next;
//         count++;
//     }

//         if(temp -> next == NULL){
//         insertAtTail(tail, d);
//         return;
//     }

    

//     Node* nodeToInsert = new Node(d);
//     nodeToInsert -> next = temp -> next;
//     temp -> next -> prev = nodeToInsert;
//     temp -> next = nodeToInsert;
//     nodeToInsert -> prev = temp;
    
// }


// void deletenode(int position, Node* &head){
//     if(position == 1){
//         Node* temp = head;
//         head = head -> next;
//         temp -> next = NULL;
//         delete temp;
//     }
//     else{
//         Node* curr = head;
//         Node* prev = NULL;

//         int cnt = 1;
//         while(cnt < position){
//             prev = curr;
//             curr = curr -> next;
//             cnt++;
//         }

//         curr -> prev = NULL;
//         prev -> next = curr -> next;
//         curr -> next = NULL;
//         delete curr;
//     }
// }

void reverse(Node* &head, Node* & tail){
    Node* curr = head;
    Node* forward = NULL;

    while(curr != 0){
        forward = curr -> next;
        curr -> next = curr -> prev;
        curr -> prev = forward;
        curr = forward;
    }

    curr = head;
    head = tail;
    tail = curr;
}


int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);

    //cout<<getLength(head)<<endl;

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 18);
    print(head);

    insertAtTail(tail, 9);
    print(head);

    insertAtTail(tail, 36);
    print(head);

    insertAtTail(tail, 29);
    print(head);

    insertAtTail(tail, 79);
    print(head);

    // insertAtPosition(head, tail, 3, 25);
    // print(head);

    // deletenode(5, head);
    // print(head);

    reverse(head, tail);
    print(head);
}