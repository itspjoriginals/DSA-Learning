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

void insertAthead(Node* &head, int d){

    
    Node* temp = new Node(d); //create a new node
    temp->next = head;
    head=temp;
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
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node* head = node1;
    print(head);
    insertAthead(head, 10);
    print(head);
    insertAthead(head, 5);
    print(head);
    return 0;
}