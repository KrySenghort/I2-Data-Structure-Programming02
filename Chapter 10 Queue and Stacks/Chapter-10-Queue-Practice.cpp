//*************************************Queue as Array Implementation***************************************
#include<iostream>
using namespace std;
const int size = 10;
struct queue{
    int rear, front;
    int q[size];
};
struct queue q1;
void CreateEmptyQueue(){
    q1.front = -1;
    q1.rear = -1;
}
void enqueue(int data){
    if(q1.rear == size-1){
        cout<<"Cannot add data. Data is overflow";
    }
    else if(q1.front == -1){
        q1.q[0] = data;
        q1.front = 0;
        q1.rear = 0;
    }
    else{
        q1.rear++;
        int index = q1.rear;
        q1.q[index] = data;
    }
}
void dequeue(){   //delete data from begining of queue list.
    if(q1.rear>=0 && q1.front<=q1.rear){
        q1.q[q1.front] = 0;
        q1.front++;
    }
    else{
        cout<<"we cannot dequeue. Data is underflow"<<endl;
    }
}
void displayQueue(struct queue q1){
    for(int i=q1.front; i<=q1.rear;i++){
        cout<<q1.q[i]<<" ";
    }
    cout<<endl;
}
int main(){
    CreateEmptyQueue();
    enqueue(3);
    enqueue(5);
    enqueue(7);
    displayQueue(q1); // 3 5 7
//==========================================  
    cout<<endl;
    enqueue(0);
    displayQueue(q1); // 3 5 7 0
//==========================================
    dequeue();
    displayQueue(q1); // 5 7 0
//==========================================
    dequeue();
    displayQueue(q1); // 7 0
//==========================================
    dequeue();
    displayQueue(q1); // 0
//==========================================
    dequeue();
    displayQueue(q1); // we cannot dequeue. Data is underflow.
//==========================================
    dequeue();
    displayQueue(q1); // it has no result because queue is empty.
    return 0;
}
/*==> Output:   
                3 5 7
                3 5 7 0
                5 7 0
                7 0
                0
                we cannot dequeue. Data is underflow  */
//*************************************Queue as Linked List Implementation*********************************
/*#include<iostream>
using namespace std;
struct element{
    int data;
    element *next;
};
struct MyQueue{
    int n;
    element *front_;
    element *rear_;  
};
MyQueue *CreateEmptyQueue(){
    MyQueue *mq;
    mq = new MyQueue;
    mq->n=0;
    mq->front_ = NULL;
    mq->rear_ = NULL;
    return mq;
}
void enqueue(MyQueue *q, int newData){
    element *e;
    e = new element;
    e->data = newData;
    e->next = NULL;
    if(q->n==0){
        q->front_ = e;
        q->rear_ = e;
    }
    else{
        q->rear_->next = e;
        q->rear_ = e;
    }
    q->n = q->n+1;
}
void dequeue(MyQueue *q){
    element *e;
    if(q->n == 0){
        cout<<"Cannot delete. Data is underflow!!!";
    }
    else{
        e = q->front_;
        q->front_ = q->front_->next;
        delete e;
        q->n = q->n+1;
    }
}
void displayQueue(MyQueue *q){
    element *tmp;
    tmp = q->front_;
    while(tmp != NULL){
        cout<<tmp->data<<" ";
        tmp = tmp->next;
    }
}
int main(){
    MyQueue *q1;
    q1 = CreateEmptyQueue();
    enqueue(q1,2);
    enqueue(q1,4);
    enqueue(q1,6);
    enqueue(q1,7);
    displayQueue(q1);// 2 4 6 7    
    cout<<endl;

    enqueue(q1,4);
    enqueue(q1,7);
    displayQueue(q1);//2 4 6 7 4 7
    cout<<endl;

    dequeue(q1);
    dequeue(q1);
    displayQueue(q1);//6 7 4 7  
    cout<<endl;
    
    dequeue(q1);
    displayQueue(q1);//7 4 7
    cout<<endl;

    dequeue(q1);
    displayQueue(q1);// 4 7
    return 0;
} */
/*==> Output: 
                2 4 6 7     
                2 4 6 7 4 7 
                6 7 4 7     
                7 4 7       
                4 7                */
//*******************************************************************************************************************



























