// Pointer part 01:
//*************************************************************
#include<iostream>
using namespace std;
int main(){
	int n=10;
	int *p;
	p=&n;
	cout<<p<<endl;		cout<<&n<<endl;
	cout<<&p<<endl;		cout<<*p<<endl;
	n+=5;
	cout<<*p<<endl;
	return 0;
}
//************************************************************
/*Output: 		0x6efe8c
				0x6efe8c
				0x6efe88
				10
				15
				//*p=n: is a pointer which point to n and display the same value.
				// p=&n: is a 
				--------------------------------
				Process exited after 2.326 seconds with return value 0
				Press any key to continue . . .          */
//********************************************************************************************************
//Pointer part 02:
//************************************
#include<iostream>
using namespace std;
void swapData(int *a, int *b){
	int tmp;
		tmp=*a;
			*a=*b;
				*b=tmp;
		cout<<"Before swap is\t: "<<*b<<", "<<*a<<endl;
	cout<<"After swap is\t: "<<*a<<", "<<*b<<endl;
}
void exchange(int *c, int *d){
	int t;
		t=*c;
			*c=*d;
				*d=t;
		cout<<"Before swap is\t: "<<*d<<", "<<*c<<endl;
	cout<<"After swap is\t: "<<*c<<", "<<*d<<endl;
}
int main(){
	int s=10, t=100;
		swapData(&s,&t);
	int x,y;
		cout<<"Enter number#1: ";	cin>>x;
		cout<<"Enter number#2: ";	cin>>y;
		exchange(&x,&y);
	return 0;
} 
//************************************************
/* Output: 
		Before swap is : 10, 100
		After swap is  : 100, 10
		Enter number#1: 22
		Enter number#2: 66
		Before swap is  : 22, 66
		After swap is   : 66, 22
		--------------------------------
		Process exited after 5.27 seconds with return value 0
		Press any key to continue . . .  */
//********************************************************************************************************
//Pointer part 03:
/*#include<iostream>
using namespace std;
void exchange(){
float *p1,score;
int ID;
int *p1;
float *p2;
p1 = &ID;
p2 = &score;
cout<<""
}*/
//********************************************************************************************************
#include<iostream>
using namespace std;
int main(){
	int a[]={2,3,8,-1,0,9};
	int *p;
	p=a;
	cout<<"The address of array is\t\t:"<<p<<endl;
//*************************************************************
	cout<<"The address of first element is \t:"<<&a[0]<<endl;
	cout<<"The address of second element is \t:"<<&a[1]<<endl;
	cout<<"The address of third element is \t:"<<&a[2]<<endl;
	cout<<"The address of fourth element is \t:"<<&a[3]<<endl;
	cout<<"The address of fifth element is \t:"<<&a[4]<<endl;
//*************************************************************
	cout<<*p<<" ";
	cout<<*(p+1)<<" "<<endl;
//*************************************************************
int i;
	for(i=0;i<5;i++)
   	cout<<"The address["<<i<<"]"<<" : "<<&a[i]<<endl;
	
		
return 0;
}



















