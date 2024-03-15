#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    ~Node(){
        int val = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
    }
};


void insertNode(Node* &tail, int element, int d){
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        tail -> next = tail;
    }

    else{
        Node* curr = tail;
        while(curr -> data != element){
            curr = curr -> next;
        }

        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}


void print(Node* tail){
    Node* temp = tail;

    if(tail == NULL){
        cout<<"Linked list is empty"<<endl;
        return;
    }
    do
    {
        cout<<tail -> data<<" ";
        tail = tail -> next;
    } while (tail != temp);
    cout<<endl;
    
}

void deleteNode(Node* &tail, int value){
    if(tail == NULL){
        cout<<"error"<<endl;
        return;
    }

    else{
        Node* prev = tail;
        Node* curr = prev -> next;

        while (curr -> data != value)
        {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        if(curr == prev){
            tail = NULL;
        }


        if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
        
    }
}

bool isCircular(Node* head){
    if(head == NULL){
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next;
    }
    if(temp == head){
        return true;
    }
    return false;
}

bool detectLoop(Node* head){
    if(head == NULL){
        return false;
    }
    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;

        if(slow == fast){
            return true;
        }
    }
    return false;
}


int main(){

    Node* tail = NULL;
    Node* head = NULL;


    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 10);
    print(tail);

    insertNode(tail, 10, 20);
    print(tail);
    insertNode(tail, 20, 45);
    print(tail);

    insertNode(tail, 45, 65);
    print(tail);

    insertNode(tail, 65, 105);
    print(tail);

    deleteNode(tail, 5);
    print(tail);

    if(isCircular(head)){
        cout<<"Linked list is circular"<<endl;
    }
    else{
        cout<<"Linked list is not circular"<<endl;
    }
    if(detectLoop(head)){
        cout<<"Loop is present"<<endl;
    }
    else{
        cout<<"Loop is not present"<<endl;
    }
}