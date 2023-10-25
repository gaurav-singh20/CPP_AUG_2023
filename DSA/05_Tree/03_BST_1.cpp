#include <iostream>
using namespace std;

/*
Rule 1 - the left subtree of a node contain only nodes with keys less than the node's key

Rule 2 - The right subtree of a node contains only nodes with keys greater than the node* key.

Rule 3 - the left and right subtree must also be a binary search tree. there must be no duplicate nodes.
*/

class Node{
  public:
  int data;
  Node* left;
  Node* right;

  Node(int val){
    data=val;
    left=NULL;
    right=NULL;
  }
};

Node* insertBST(Node* root,int val){
  if(root==NULL){
    return new Node(val);
  }

  if(val< root->data){
    root->left = insertBST(root->left,val);
  }

  else{
    root->right = insertBST(root->right,val);
  }
  return root;
}

Node* searchInBst(Node* root,int key){
  if(root==NULL) return NULL;

  if(root->data==key) return root;

  if(root->data > key){
    return searchInBst(root->left,key);
  }

  return searchInBst(root->right, key);
}

int countNode(Node* root){
  if(root==NULL) return 0;
  int count=1;
  if(root->left!=NULL){
    count+=countNode(root->left);
  }

  if(root->right!=NULL){
    count+=countNode(root->right);
  }

  return count;
}

int main(){

  int a,b;
  Node* root = NULL;
  cin >> a;
  while(a--){
    cin >> b;
    root = insertBST(root,b);
  }

  if(searchInBst(root,7)){
    cout << "yes";
  }
  else{
    cout << "NO";
  }

  cout << countNode(root) << endl;
}