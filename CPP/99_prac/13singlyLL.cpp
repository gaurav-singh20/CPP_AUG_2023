#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next; //next is a pointer that is holding an address of a Node.

  Node(int val){ //assigning value and next to newly made Node.
    data=val;
    next= NULL;
  }

};

void insertAtTail(Node* &head,int value){ //&head kyuki actual linked list mai insert krna hai na.
  Node* n= new Node(value);  //new node ka adreess/node

  if(head == NULL){     
        head = n;
        return;
    }  //for the first element being inserted kyuki regular way mai head ke pass koi head->next(temp->next) nhi hoga first element ke liye. toh temp->next=n type mai nhi hoga...direct temp=n type mai hoga insertion.

  Node* temp=head;
  while(temp->next != NULL){
    temp=temp->next;
  }
  temp->next=n; //last element ko naye wale element ka address de rhe hain. aur naye wala already have NULL as it's next. (temp is directly refering to last element as per things going dinamically, -> equals to * plus &)
}

void insertAtHead(Node* &head,int value){
  Node* n = new Node(value); 
  //Node* temp=head;
  //temp=temp->next;
  n->next=head;
  head = n;
}

void displayNode(Node* &head){
  Node* temp= head;
  while(temp!=NULL){ //temp->next likhenge toh fir iteration mai last element won't get included cause for last elemnt, temp->next is NULL. Toh loop ke andar ja he nhi payega.
    cout << temp->data << " -> ";
    temp=temp->next;
  }
  cout<<"NULL";
}

void deletion(Node* &head,int value){
  Node* temp= head;
  while(temp!=NULL){
    if(head->data==value){
      head=temp->next;
      return;
    }
    if(temp->next->data==value){
        Node* toDelete = temp->next;
        temp->next=temp->next->next;
        delete toDelete;
        return;
    }
    temp=temp->next;
  }
}

int main(){
  Node* head=NULL;
  insertAtTail(head,3);
  insertAtTail(head,4);
  insertAtTail(head,43);
  insertAtTail(head,87);
  insertAtHead(head,5);

  cout << "before deletion : ";
  displayNode(head);
  cout << endl;

  deletion(head,87);
  
  cout << "after deletion : ";
  displayNode(head);
}