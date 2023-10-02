/*#include<iostream>
using namespace std;
const int size = 7;
int ht[size];
int hashFunction(int n){
    return n%size;
}
void insertData(int value){
    int index;
    index = hashFunction(value);
    ht[index] = value;
}
void displayHT(){
    for(int i=0;i<size;i++){
        cout<<i<<"\t-->"<<ht[i]<<endl;
    }
}
int main(){
    insertData(7);
    insertData(8);
    insertData(25);
    insertData(15);
    insertData(22);
    insertData(25);
    displayHT();
    return 0;
}*/
/*Output:
            0       -->7
            1       -->8
            2       -->0
            3       -->0
            4       -->25
            5       -->0
            6       -->0        */
//*************************************************************************************************************
#include<iostream>
using namespace std;
const int size = 7;
int h[size];
void initializeArray(){
    for(int k=0;k<size;k++){
        h[k] = -9999;
    }
}
int hashFunction(int value){
    return value%size;
}
void insertData(int data){
    int index;
    index = hashFunction(data);
    h[index] = data;
}
void displayHashTable(){
    for(int k=0;k<size;k++){
        cout<<k<<"\t"<<h[k]<<endl;
    }
}
int main(){
    initializeArray();
    insertData(5);
    insertData(7);
    insertData(10);
    displayHashTable();
    return 0;
}
/*Output:
            0       7    
            1       -9999
            2       -9999
            3       10
            4       -9999
            5       5
            6       -9999       */
//*************************************************************************************************************



































