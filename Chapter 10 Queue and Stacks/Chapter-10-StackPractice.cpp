//======================================Stack as Array Implementation======================================
/*#include<iostream>
using namespace std;
const int size = 7;
struct MyStack{
    int mystack[size];
    int top;
};
struct MyStack s1;
void push(int newData){
    s1.top++;
    s1.mystack[s1.top] = newData;
}
void pop(){
    s1.mystack[s1.top] = 0; //reset initialize data to the list
    s1.top--;
}
void displayStack(){
    for(int i=s1.top;i>=0;i--){
        cout<<s1.mystack[i]<<" ";
    }
    cout<<endl;
}
int main(){
    s1.top = -1;
    push(3);
    push(4);
    push(9);
    displayStack(); // 9 4 3
    pop();
    displayStack(); // 4 3
    return 0;
} */
/*==> Output :
                9 4 3
                4 3           */
//**********************************Stack as Linked List Implementation************************************
#include<iostream>
using namespace std;
struct element{
    int data;
    element *next;
};
struct stack{
    int n;
    element *top;
};
stack *CreateEmptyStack(){
    stack *s;
    s = new stack;
    s->n=0;
    s->top=NULL;
    return s;
}
void push(stack *s, int newData){
    element *e;
    e = new element;
    e->data = newData;
    if(s->n==0){
        e->next = NULL;
        s->top = e;
        s->n = s->n+1;
    }
}
void pop(stack *s){
    if(s->n==0){
        cout<<"Can not delete ! Stack is empty"<<endl;
    }
    else{
        element *t;
        t = s->top;
        s->top = s->top->next;
        cout<<"\tDeleted: "<<t->data<<endl;
        delete t;
        s->n = s->n-1;
    }
}
void displayStack(stack *s){
    element *e;
    e = s->top;
    while(e!=NULL){
        cout<<e->data<<" ";
        e = e->next;
    }
    cout<<endl;
}
int main(){
    stack *s1;
    s1 = CreateEmptyStack();
    push(s1,7);
    push(s1,9);
    push(s1,4);
    push(s1,-5);
    displayStack(s1);
    pop(s1);
    pop(s1);
    displayStack(s1);
    return 0;
}
