/*#include<iostream>
using namespace std;
struct node{
    int data;
    node *left, *right;
};
node *insertTree(node *root, int newData){
    if(root == NULL){
        root = new node;
        root->data = newData;
        root->left = NULL;
        root->right = NULL;
    }
    else if(newData > root->data){
        root->right = insertTree(root->right, newData);
    }
    else if(newData < root->data){
        root->left = insertTree(root->left, newData);
    }
    return root;
}
void PreOrder(node *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
}
void InOrder(node *root){
    if(root!=NULL){
        InOrder(root->left);
        cout<<root->data<<" ";
        InOrder(root->right);
    }
}
void searchDataInTree(node *root, int searchData){
    if(root==NULL){
        cout<<"the number "<<searchData<<" is not found !"<<endl;
    }
    else{
        if(searchData == root->data){
            cout<<"the number "<<searchData<<" is found"<<endl;
        }
        else if(searchData > root->data){
            searchDataInTree(root->right, searchData);
        }
        else if(searchData < root->data){
            searchDataInTree(root->left, searchData);
        }
    }
}
int main(){
    node *r1;
    r1 = NULL;
    r1 = insertTree(r1,5);
    r1 = insertTree(r1,0);
    r1 = insertTree(r1,9);
    r1 = insertTree(r1,6);
    
    cout<<"data which represent as pre-order such that :"<<endl;
    PreOrder(r1); // 5 0 9 6
    
    cout<<endl<<"data which represent as in-order such that :"<<endl;
    InOrder(r1); // 0 5 6 9
    
    cout<<endl<<"the result for searching data in tree"<<endl;
    searchDataInTree(r1,9);  // the number 9 is found
    searchDataInTree(r1,0);  // the number 0 is found 
    searchDataInTree(r1,-1); // the number -1 is not found !
    return 0;
} */
/*==> Output: 
                    data which represent as pre-order such that :
                    5 0 9 6
                    data which represent as in-order such that :
                    0 5 6 9
                    the result for searching data in tree
                    the number9 is found
                    the number0 is found
                    the number-1 is not found !     */
//*********************************************************************************************************
#include<iostream>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
};
node *insert(node *root, int newData){
    if(root==NULL){
        root=new node;
        root->data = newData;
        root->left = NULL;
        root->right = NULL;
    }
    else if(newData<root->data){
        root->left=insert(root->left, newData);
    }
    else if(newData>root->data){
        root->right = insert(root->right, newData);
    }
    return root;
}
bool search(node *root, int data){
    if(root==NULL){
        return false;
    }
    else if(data==root->data){
        return true;
    }
    else if(data>root->data){
        return search(root->right, data);
    }
    else if(data<root->data){
        return search(root->left, data);
    }
}
void searchDataInTree(node *root, int searchData){
    if(root==NULL){
        cout<<"the number "<<searchData<<" is not found !"<<endl;
    }
    else{
        if(searchData == root->data){
            cout<<"the number "<<searchData<<" is found"<<endl;
        }
        else if(searchData > root->data){
            searchDataInTree(root->right, searchData);
        }
        else if(searchData < root->data){
            searchDataInTree(root->left, searchData);
        }
    }
}
void PreOrder(node *root){
    if(root!=NULL){
        cout<<root->data<<" ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
}
void InOrder(node *root){
    if(root!=NULL){
        InOrder(root->left);
        cout<<root->data<<" ";
        InOrder(root->right);
    }
}
void PostOrder(node *root){
    if(root!=NULL){
        PostOrder(root->left);
        PostOrder(root->right);
        cout<<root->data<<" ";
    }
}
int main(){
    node *root1;
    root1 = NULL;
    root1=insert(root1,50);
    root1=insert(root1,17);
    root1=insert(root1,72);
    root1=insert(root1,12);
    root1=insert(root1,23);
    root1=insert(root1,54);
    root1=insert(root1,76);
    root1=insert(root1,9);
    root1=insert(root1,14);
    root1=insert(root1,19);
    root1=insert(root1,67);
    
    cout<<"Data which represent as pre-order are such that: "<<endl;
    PreOrder(root1);
    cout<<endl;
    
    cout<<"Data which represent as in-order are such that: "<<endl;
    InOrder(root1);
    cout<<endl;
    
    cout<<"Data which represent as post-order are such that: "<<endl;
    PostOrder(root1);
    cout<<endl;

    cout<<"the result of searching data in tree struct list such that: "<<endl; 
    searchDataInTree(root1,50);
    searchDataInTree(root1,72);
    searchDataInTree(root1,99);   
    return 0;
}
/*Output:
            Data which represent as pre-order are such that:  
            50 17 12 9 14 23 19 72 54 67 76
            Data which represent as in-order are such that:   
            9 12 14 17 19 23 50 54 67 72 76
            Data which represent as post-order are such that: 
            9 14 12 19 23 17 67 54 76 72 50
            the result of searching data in tree struct list such that: 
            the number 50 is found
            the number 72 is found
            the number 99 is not found !       */























