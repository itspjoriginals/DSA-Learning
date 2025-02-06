#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    //Construcutor
    Node(int data){
        this-> data =data;
        this-> next=NULL;
    }
};

void insertAtTail(Node* &tail, int d){

    
    Node* temp = new Node(d); //create a new node
    tail->next = temp;
    tail=tail->next;
}

void insertAtPosition(Node* &head, int position, int d){
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;

    }

    //creating new node
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next=temp->next;
    temp->next= nodeToInsert;
}

void print(Node* &head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}


int main(){

    Node* node1= new Node(12);
    Node* head= node1;
    Node* tail = node1;
    print(tail);
    insertAtTail(tail, 10);
    print(tail);
    insertAtTail(tail, 8);
    print(head);
    insertAtTail(tail, 4);
    print(head);
    insertAtPosition(head, 4, 6);
    print(head);
    return 0;
} 