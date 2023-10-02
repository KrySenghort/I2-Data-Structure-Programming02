#include<iostream>
using namespace std;
struct element{
    int data;
    element *next;
};
//*******************************************************************
struct list{
    int n;
    element *head;
    element *tail;
};
//*******************************************************************
list *create_empty_list(){
    list *l1;
    l1 = new list;
    l1 -> head = NULL;
    l1 -> tail = NULL;
    l1 -> n = 0;
    return l1;
}
//*******************************************************************
void insert_to_begin(list *ls, int new_data){
    element *e;
    e = new element;
    e -> data = new_data;
    if(ls->n==0){
        ls -> head = e;
        ls -> tail = e;
        e -> next = NULL;
    }
    else{
        e -> next = ls -> head;
        ls -> head = e;
    }
    ls -> n = ls -> n+1;
}
//*******************************************************************
void display_list(list *ls){
    element *t;
    t = ls->head;
    while(t!=NULL){
        cout<<t->data<<" ";
        t = t->next;
    }
}
//*******************************************************************
void delete_begin(list *ls){
    if(ls->n==0){
        cout<<"Sorry you cannot delete !"<<endl<<"the list is empty"<<endl;
    }
    else{
        element *p;
        p = ls->head;
        ls->head = ls->head->next;
        delete p;
        ls->n = ls->n-1;
    }
}
//*******************************************************************
int main(){
    list *l1;
    l1=create_empty_list();
    insert_to_begin(l1,2);
    insert_to_begin(l1,5);
    insert_to_begin(l1,7);
    display_list(l1);
//*******************************************************************
//     insert_to_begin(l1,-1);
//     insert_to_begin(l1,0);
//     insert_to_begin(l1,5);
//     cout<<endl;
//     display_list(l1);
// //*******************************************************************
//     delete_begin(l1);
//     delete_begin(l1);
//     cout<<endl;
//     display_list(l1);
    return 0;
} 

//******************************************************************************************************





















