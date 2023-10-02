//The recursive function is an algorithm which calls itself with smaller(or simpler) input values.
#include<iostream>
using namespace std;
	int computeFac(int n){
		if(n==0||n==1)
			return 1;
		else
			return n*computeFac(n-1);
}
//***********************************************************
	void display_1_to_n(int n){
		if(n==1)
			cout<<" "<<1;
		else{
			cout<<" "<<n;
			display_1_to_n(n-1);
	}
}//***********************************************************
	int fibo(int num){
		if(num==1||num==2)
			return 1;
		else
			return fibo(num-1) + fibo(num-2);
}//***********************************************************
int main(){
	display_1_to_n(10);
	cout<<endl<<"the factorial of 10 first numbers is :"<<computeFac(10)<<endl;
//***********************************************************
	int result,n;
		cout<<"\nEnter a number: ";	cin>>n;
			result = computeFac(n);
		cout<<"\n\t Factorial of "<<n<<"! = "<<result<<endl;
//***********************************************************	
	int fibonaci,num;
		cout<<"\nInput number: ";	cin>>num;
			fibonaci = fibo(num);
	cout<<"\n\t Fibonaci of "<<n<<"! are "<<fibonaci<<endl;
	return 0; */
} 
//*****************************************************************************************************
//*****************************************************************************************************
//Write in C++ program that can do some operations below.(make a menu for your program so that users can test any functions. Run
//it as infinite loop.
//a. A function to display n star(*)
#include<iostream>
using namespace std;
void displayStar(){
	int a,b;
		cout<<"Enter num: ";	cin>>a;
			if(a==1)
	cout<<"\n"<<b<<endl;
}
int main(){
	char option;
	do{
		int choice;
			cout<<" Welcome to our program "<<"\n 1. function to display n star(*)"<<endl; 
			cout<<"2. function to display number from n to 1"<<endl;;
			cout<<" Enter your choice: ";	cin>>choice;
		if(choice==1){
			displayStar();
		}
		else if(choice==2){
			displayNumber();
		}
		else{
			cout<<"It is invalid";
		}
	cout<<"Do you want to play again or not ?"<<"\nEnter y/n: "; cin>>option;
}
	while(option == 'y');	
	return 0;
} 
//3. Write a recursive function to find multiplication of all elements in an array, where the array and its size are passed as 
//parameters of function.
#include<iostream>
using namespace std;
int multiplyArrayElement(int arr[],int size){
	if(arr[i])
	for(int i=0;i<=n;i++)
		multiply = multiply[i]*i;
	cout<<"The multiplication of all elements in this array is "<<multiply<<endl;
}
int main(){

	return 0;
}















































