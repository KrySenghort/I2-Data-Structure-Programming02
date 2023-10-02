#include<stdio.h>
#include<stdlib.h>
#define HASHTABLE_SIZE 11
typedef struct node{
    int value;
    struct node *next;
}node;
void insert_new_node(node **head, int new_value){
    node *new_node = malloc(sizeof(node*));
    new_node->value = new_value;
    new_node->next = NULL;
    if(*head==NULL){
        *head = new_node;
    }
    else{
        node *current = *head;
        while (current->next != NULL){
            current = current->next;
        }
        current->next = new_node;
    }
}
int get_location(new_value){
    return new_value % HASHTABLE_SIZE;
}
void insert_into_table(node** hashtable,int new_value){
    int location = get_location(new_value);
    if(hashtable[location]==NULL){
        hashtable[location] = malloc(sizeof(node*));    
        node *head = NULL;
        insert_new_node(&head,new_value);
        hashtable[location] = head;
    }
    else{
        node *head = hashtable[location];
        insert_new_node(&head, new_value); 
        hashtable[location] = head;
    }
}
void display_table(node **hashtable){
	int i;
    for(i=0;i<HASHTABLE_SIZE;i++){
        node *head = hashtable[i];
        printf("%d: ",i);
        if(head == NULL){
            printf("NULL");
        }
        else{
            node *current = head;
            while(current!=NULL){
                printf("%d ",current->value);
                current = current->next;
            }
        }
        printf("\n");
    }
}
node **get_hashtable(){
    node **HashTable = calloc(HASHTABLE_SIZE,sizeof(node*));
    return HashTable;
}
int main(){
    node **table = get_hashtable();
//==========================================
    insert_into_table(table,3);
    insert_into_table(table,5);
    insert_into_table(table,6);
    insert_into_table(table,7);
    insert_into_table(table,9);
//==========================================
    display_table(table);
    return 0;
}
