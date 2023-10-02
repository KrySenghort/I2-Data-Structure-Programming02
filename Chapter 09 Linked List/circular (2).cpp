#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;
int size = 0;
class link_list{
private:
    struct node{
        int data;
        node *next;
    };
    node *head = NULL;
    node *tail = NULL;
public:
    void insert(int &n);
    void diplay();
    void search();
    void update();
    void del();
};
void link_list::insert(int &n){
    node *new_ptr = new node;
    new_ptr->data = n;
    new_ptr->next = NULL;
    size++;
    if(head == NULL){
        head = new_ptr;
        tail = new_ptr;
        new_ptr->next = head;
    }
    else{
        tail->next = new_ptr;
        tail = new_ptr;
        tail->next = head;
    }
}
void link_list::diplay(){
    system("cls");
    cout<<"\n\n\t\t\t Display Record ";
    int c = 0;
    if(head == NULL){
        cout<<"\n\nCircular is empty...";
    }else{
        node *ptr = head;
        while(c != size){
            cout<<"\n\n Value : "<<ptr->data;
            ptr = ptr->next;
            c++;
        }
    }
}
void link_list::search(){
    system("cls");
    int c = 0, n,found=0;
    cout<<"\n\n\t\t\t  Search Record   ";
    if(head == NULL){
        cout<<"\n\n Circular is empty...";
    }
    else{
        cout<<"\n\n Enter Value : ";
        cin>>n;
        node *ptr = head;
        while( c !=size){
            if(n == ptr->data){
                cout<<"\n\n Value "<<n<<" is found...";
                found++;
                break;
            }
            ptr= ptr->next;
            c++;
        }
    }
    if(found==0){
        cout<<"\n\n Value "<<n<<" can not found...";
    }
}
void link_list::update(){
    system("cls");
    int c = 0, n,found=0;
    cout<<"\n\n\t\t\t  Update Record   ";
    if(head == NULL){
        cout<<"\n\n Circular is empty...";
    }
    else{
        cout<<"\n\n Enter value : ";
        cin>>n;
        node *ptr = head;
        while(c != size){
            if(n == ptr->data){
                cout<<"\n\n New value : ";
                cin>>n;
                ptr->data = n;
                found++;
                break;
                cout<<"\n\n Update value successfully...";
            }
            ptr = ptr->next;
            c++;
        }
    }
    if(found==0){
        cout<<"\n\n Value "<<n<<" Update not successfully...";
    }
}
void link_list::del(){
    system("cls");
    int n,c=1,found=0;
    cout<<"\n\n\t\t\t Delete Record ";
    if(head == NULL){
        cout<<"\n\n Circular is empty...";
    }else{
        node *ptr = head;
        cout<<"\n\n Enter value :";
        cin>>n;
        if(size == 1 && n == head->data){
            head = NULL;
            tail = NULL;
            size--;
            cout<<"\n\n Node Delete Successfully... ";
            found++;
            delete ptr;
        }else if(n == head->data){//first node
            head = head->next;
            tail->next = head;
            size--;
            cout<<"\n\n Node Delete Successfully... ";
            found++;
            delete ptr;
        }else if(n == tail->data){//last node
            while(ptr->next != tail){
                ptr = ptr->next;
            }
            node *pre = tail;
            tail = ptr;
            tail->next = head;
            size--;
            cout<<"\n\n Node Delete Successfully... ";
            found++;
            delete pre;

        }else{//position node
            node *pre_ptr = head;
            ptr = head->next;
            while( c != size){
                if(n == ptr->data){
                    pre_ptr->next = ptr->next;
                    size--;
                    cout<<"\n\n Node Delete Successfully... ";
                    found++;
                    delete ptr;
                    break;
                }
                pre_ptr = ptr;
                ptr = ptr->next;
                c++;

            }
        }

    }
    if(found==0){
        cout<<"\n\n Value "<<n<<" Delete not successfully...";
    }

}
int main(){
    link_list l;
    p:
    int choice,n;
    cout<<"\n\n\t\t\t Control Panel";
    cout<<"\n\n 1. Insert Record   ";
    cout<<"\n\n 2. Display Record   ";
    cout<<"\n\n 3. Search Record   ";
    cout<<"\n\n 4. Update Record   ";
    cout<<"\n\n 5. delete Record   ";
    cout<<"\n\n 6. Quiz Program   ";
    cout<<"\n\n Your choice : ";
    cin>>choice;
    switch(choice){
        case 1:{
            system("cls");
            cout<<"\n\n\n\t\t\t Insert Record ";
            cout<<"\n\n Enter value : ";
            cin>>n;
            l.insert(n);
        }break;
        case 2:{
            l.diplay();
        }break;
        case 3:{
            l.search();
        }break;
        case 4:{
            l.update();
        }break;
        case 5:{
            l.del();
        }break;
        case 6:{
            exit(0);
        }break;
        default:{
            cout<<"\n\n Invalid Choice...";
        }
    }
    goto p;
    getch();
    return 0;
}
