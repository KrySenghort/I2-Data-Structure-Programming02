/*#include<iostream>
using namespace std;
// A method to swap or exchange values of two variables
void swap(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
void selectionSort(int a[], int n){
    for(int i=0;i<n;i++){
        //find position of min element
        int minPosition=i;
        for(int k=i+1;k<n;k++){
            if(a[minPosition]>a[k]){
                minPosition = k;
            }
        }
        //swap min with position i
        swap(&a[minPosition],&a[i]);
    }
}
void exchange(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
void bubbleSort(int a[], int n){
    for(int k=0;k<n-1;k++){
        for(int m=0;m<n-1;m++){
            if(a[m]>a[m+1]){     //when not in order
                exchange(&a[m], &a[m+1]); //swap
            }
        }
    }
}
void bubbleSortLargestToSmallest(int a[], int n){
    int state;
    for(int k=0;k<n-1;k++){
        state = 0;
        for(int m=0;m<n-1;m++){
            if(a[m]<a[m+1]){
                exchange(&a[m], &a[m+1]);
                state = 1;
            }
        }
        if(state==0){  //meaning that no swap happened
            break;
        }
    }
}
void printArray(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl;
}
int main(){
    int a1[] = {1,9,-5,0,7,20};
    printArray(a1,6);
    selectionSort(a1,6);
    printArray(a1,6);
    int b[] = {3,8,0,-100,500,9,1};
    printArray(b,7);
    printArray(b,7);
    printArray(b,7);
    bubbleSortLargestToSmallest(b,7);
    printArray(b,7);
    return 0;
}   */
//**************************************************************************************************************************
#include<iostream>
using namespace std;
void swap(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
void selectionsort(int a[], int n){ // n is the number of element in the list.
    for(int i=0;i<n-1;i++){
        // find min location index
        int minPosition = i;
        for(int j=i+1;j<n;j++){
            if(a[minPosition]>a[j]){
                minPosition = j;
            }
        }
        swap(&a[minPosition], &a[i]);
    }
}
void displayArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}
int main(){
    int a1[] = {1,9,-5,0,7,20};
    cout<<"The element of array before sorting algorithm are : "<<endl;
    displayArray(a1,6);
    selectionsort(a1,6);
    cout<<"The element of array after sorting algorithm are : "<<endl;
    displayArray(a1,6);
    return 0;
}
/* Output:
    The element of array before sorting algorithm are : 
    1       9       -5      0       7       20
    The element of array after sorting algorithm are :  
    -5      0       1       7       9       20         */




















