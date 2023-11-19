#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    int key;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
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

Node* searchInBST(Node* root, int key){
    if(root == NULL) return NULL;

    if(root->data == key) return root;

    if(root->data > key){
        return searchInBST(root->left, key);
    }

    return searchInBST(root->right, key);

}

Node* inorderSucc(Node* root){
    Node* curr = root;
    while(curr && curr->left != NULL){
        curr = curr->left;
    }

    return curr;
}

Node* deleteInBST(Node* root, int key){

    if(key < root->data){
        root->left = deleteInBST(root->left, key);
    }

    else if(key > root->data){
        root->right = deleteInBST(root->right, key);
    }

    else{

        if(root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        else if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        //case 3
        Node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->key);
    }

    return root;

}

void inorder(Node* root){
  if(root==NULL) return;

  inorder(root->left);
  
  cout << root->data << " ";
  inorder(root->right);
}

int main(){
    int a,b,c,d,e;
    Node* root = NULL;
    cin >> a;
    while(a--){
        cin >> b;
        root = insertBST(root,b);
    }
    inorder(root);
    cout << endl;
    cin >> c;
    deleteInBST(root,c);
    // if(searchInBST(root, 15) == NULL){
    //     cout << "Key doesn't exist";
    // }
    // else{
    //     cout << "key exist";
    // }
    inorder(root);
    cout << endl << "here:" << endl;
    cin >> d;
    while(d--){
        cin >> e;
        root = insertBST(root,e);
    }
    inorder(root);
}