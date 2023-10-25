#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* left;
  Node* right;

  Node(int data){
    this->data=data;
    left=NULL;
    right=NULL;
  }

};

Node* insertBST(Node* &root, int val){
  if(root==NULL)
  return new Node(val);

  if(val < root->data ){
    root->left=insertBST(root->left,val);
  }

  else{
    root->right=insertBST(root->right,val);
  }

  return root;
}

Node* searchBST(Node* &root, int key){
  if(root==NULL){
    return NULL;
  }

  if(key==root->data)
  return root;

  if(key < root->data ){
    return searchBST(root->left,key);
  }

  return searchBST(root->right,key);

}

void preOrder(Node* root){
  if(root==NULL){
    return;
  }

  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
}

int main(){
  Node* root=NULL;
  int a,b;
  cout << "no. of nodes : " << endl;
  cin >> a;

  while(a--){
    cin >> b;
    root=insertBST(root,b);
  }

  cout << endl;

  if(searchBST(root,7)){
    cout << "found" << endl;
  }

  else{
    cout << "not";
  }
}