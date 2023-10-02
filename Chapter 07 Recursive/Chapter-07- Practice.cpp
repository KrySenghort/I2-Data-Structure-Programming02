// #include<iostream>
// #include<cstring>
// #include<cmath>
// using namespace std;
// //1***************************************************
// int computeFactorial(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     else{
//         return n*computeFactorial(n-1);
//     }
// }
// //2***************************************************
// int xth_fibonacci(int x){
//     if(x==1||x==2){
//         return 1;
//     }
//     else if(x>2){
//         return xth_fibonacci(x-1) + xth_fibonacci(x-2);
//     }
// }
// //3***************************************************
// void display(int n){
//     if(n==1){
//         cout<<1<<endl;
//     }
//     else{
//         cout<<"\t"<<n;
//         display(n-1);
//     }
// }
// //4***************************************************
// void Display_Fibonacci(int n){    
//     static int n1=0, n2=1, n3;    
//         if(n>0){    
//             n3 = n1+n2;    
//             n1 = n2;    
//             n2 = n3;    
//             cout<<n3<<" ";    
//         Display_Fibonacci(n-1);    
//     }    
// }    
// //5***************************************************
// void QuadraticEquationSolution(int a, int b, int c){
//     int root1, root2, delta;
//         delta = pow(b,2) - 4*a*c;
//             root1 = (-b+sqrt(delta))/(2*a);
//             root2 = (-b-sqrt(delta))/(2*a);
//     if(delta<0){
//         cout<<"there is no real root."<<" The roots are imaginary roots"<<endl;
//     }
//     else{
//         cout<<"The roots of this equation are such as : "<<endl;
//         cout<<"root1 = "<<root1<<endl;
//         cout<<"root2 = "<<root2<<endl;
//     }
// }
// //6***************************************************
// int multiply(int c,int d){
// 	if(c==1||d==0)
// 		return 1;
// 	else
// 		return pow(c,d); 
// }
// //7***************************************************
// int sum(int n){
// 	if(n==1)
// 		return 1;
// 	else
// 		return n*(n+1)*(2*n+1)/6;	
// }
// //8***************************************************
// int count_digit(int x){
// 	if(x<10)
// 		return 1;
// 	else
// 		return count_digit(x/10)+1; }
// //9***************************************************
// void displayStar(){
// 	int n;
// 	cout<<"Enter number: ";	cin>>n;
// 	if(n==1)
// 		cout<<"\t*"<<endl;
// 	else{
// 		for(int i=1;i<=n;i++){
// 			cout<<"\t*"<<endl;
// 		}
// 	}	
// }
// //10**************************************************

// //main function****************************************
// int main(){
//     cout<<"=====================Welcome to Recursive Function Programming======================"<<endl;
//     cout<<"[1] . Compute Factorial"<<endl;
//     cout<<"[2] . Display Number from 1 until you input"<<endl;
//     cout<<"[3] . Display the xth of Fibonnaci Series"<<endl;
//     cout<<"[4] . Display fibonacci series"<<endl;
//     cout<<"[5] . Quardratic Equation Solution"<<endl;
//     cout<<"[6] . The multiplication times"<<endl;
//     cout<<"[7] . Square Number Summation"<<endl;
//     cout<<"[8] . Count digit of number"<<endl;
//     cout<<"[9] . Display the star"<<endl;
//     cout<<"[10]. Summation of array element"<<endl;
//     int option;
//     string choice;
//     do{
//         cout<<"Please select your options above."<<endl<<"Click one to playing : ";
//         cin>>option;
//         switch(option){
//             int number;
//             case 1:
//                 cout<<"welcome to program [1]. Compute Factorial"<<endl;
//                 cout<<"Enter number : ";    cin>>number;
//                 cout<<computeFactorial(number)<<endl;
//                 break;
//             case 2:
//                 cout<<"welcome to program [2]. Display number from 1 until you input."<<endl;
//                 cout<<"Enter number : ";    cin>>number;
//                 display(number);
//                 cout<<endl;    
//                 break;   
//             case 3: 
//                 cout<<"welcome to program [3]. Display the xth of Fibonacci Sequence"<<endl;
//                 cout<<"Enter kth-number : ";       cin>>number;
//                 cout<<xth_fibonacci(number)<<endl;
//                 break;
//             case 4:  
//                 cout<<"welcome to program [4]. Display fibonacci series"<<endl;
//                 cout<<"Enter the number of elements: ";     cin>>number;    
//                 cout<<"Fibonacci Series: ";    
//                 cout<<"0 "<<"1 ";  
//                 Display_Fibonacci(number-2);  //n-2 because 2 numbers are already printed
//                 cout<<endl;    
//                 break;  
//             case 5:
//                 int a, b,c;
//                 cout<<"welcome to program [5]. Quadratic Equation Solution"<<endl;
//                 cout<<"Enter a : ";    cin>>a;
//                 cout<<"Enter b : ";    cin>>b;
//                 cout<<"Enter c : ";    cin>>c;
//                 QuadraticEquationSolution(a,b,c);
//                 break;
//             case 6:
//                 int time;
//                 cout<<"welcome to program [6]. Multiplication time"<<endl;
//                 cout<<"Enter number : ";    cin>>number;
//                 cout<<"Enter time : ";    cin>>time;
//             cout<<"the multiplication of "<<number<<" for "<<time<<" time is : "<<multiply(number, time)<<endl;
//                 break;
//             case 7:
//                 cout<<"welcome to program [7]. Sqare number summation."<<endl;
//                 cout<<"Enter number : ";    cin>>number;
//                 cout<<sum(number)<<endl;
//                 break;
//             case 8:
//                 cout<<"welcome to program [8]. Count digits of number."<<endl;
//                 cout<<"Enter number : ";    cin>>number;
//                 cout<<"the nubmer of digit is "<<count_digit(number)<<endl;
//                 break;
//             case 9:
//                 cout<<"welcome to program [9]. Count digits of number."<<endl;
//                 cout<<"Enter number : ";    cin>>number;
//                 cout<<"the nubmer of digit is "<<count_digit(number)<<endl; 
//                 break;     
//             case 10:
//                 break;
//             default:
//                cout<<"It is invalid choice"<<endl;
//         }
//         cout<<"Do you want to play again ?"<<endl;
//         cout<<"Please enter your choice yes/no :";  cin>>choice;
//     } 
//     while(choice == "yes");
//     return 0;
// }






//  #pragma once  
//  #include<conio.h> //For_getch()_function  
//  #include<math.h>  
//  double ans, a, b;  
//  int flag=0;  
//  using namespace std;  
//  namespace Calculator {  
//      using namespace System;  
//      using namespace System::ComponentModel;  
//      using namespace System::Collections;  
//      using namespace System::Windows::Forms;  
//      using namespace System::Data;  
//      using namespace System::Drawing;  
//      /// <summary>  
//      /// Summary for Form1  
//      /// </summary>  
//      public ref class Form1 : public System::Windows::Forms::Form  
//      {  
//      public:  
//         Form1(void)  
//         {  
//             InitializeComponent();  
//             //  
//             //TODO: Add the constructor code here  
//             //  
//         }  
//      protected:  
//         /// <summary>  
//         /// Clean up any resources being used.  
//         /// </summary>  
//         ~Form1()  
//         {  
//             if (components)  
//             {  
//                delete components;  
//             }  
//         }  
//      private: System::Windows::Forms::TextBox^ txtb;  
//      private: System::Windows::Forms::Button^ button1;  
//      private: System::Windows::Forms::Button^ button2;  
//      private: System::Windows::Forms::Button^ button3;  
//      private: System::Windows::Forms::Button^ button4;  
//      private: System::Windows::Forms::Button^ button5;  
//      private: System::Windows::Forms::Button^ button6;  
//      private: System::Windows::Forms::Button^ button7;  
//      private: System::Windows::Forms::Label^ label1;  
//      private: System::Windows::Forms::MenuStrip^ menuStrip1;  
//      private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;  
//      private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;  
//      protected:  
//      protected:  
//      protected:  
//      private:  
//         /// <summary>  
//         /// Required designer variable.  
//         /// </summary>  
//         System::ComponentModel::Container ^components;  
//  #pragma region Windows Form Designer generated code  
//         /// <summary>  
//         /// Required method for Designer support - do not modify  
//         /// the contents of this method with the code editor.  
//         /// </summary>  
//         void InitializeComponent(void)  
//         {  
//             System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));  
//             this->txtb = (gcnew System::Windows::Forms::TextBox());  
//             this->button1 = (gcnew System::Windows::Forms::Button());  
//             this->button2 = (gcnew System::Windows::Forms::Button());  
//             this->button3 = (gcnew System::Windows::Forms::Button());  
//             this->button4 = (gcnew System::Windows::Forms::Button());  
//             this->button5 = (gcnew System::Windows::Forms::Button());  
//             this->button6 = (gcnew System::Windows::Forms::Button());  
//             this->button7 = (gcnew System::Windows::Forms::Button());  
//             this->label1 = (gcnew System::Windows::Forms::Label());  
//             this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());  
//             this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());  
//             this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());  
//             this->menuStrip1->SuspendLayout();  
//             this->SuspendLayout();  
//             // txtb  
//             this->txtb->BackColor = System::Drawing::Color::White;  
//             this->txtb->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;  
//             this->txtb->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,  
//                static_cast<System::Byte>(0)));  
//             this->txtb->ForeColor = System::Drawing::Color::Black;  
//             this->txtb->Location = System::Drawing::Point(32, 44);  
//             this->txtb->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);  
//             this->txtb->Name = L"txtb";  
//             this->txtb->Size = System::Drawing::Size(300, 48);  
//             this->txtb->TabIndex = 0;  
//             this->txtb->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;  
//             this->txtb->WordWrap = false;  
//             this->txtb->TextChanged += gcnew System::EventHandler(this, &Form1::txtb_TextChanged);  
//             // button1  
//             this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,  
//                static_cast<System::Byte>(0)));  
//             this->button1->Location = System::Drawing::Point(32, 108);  
//             this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);  
//             this->button1->Name = L"button1";  
//             this->button1->Size = System::Drawing::Size(98, 49);  
//             this->button1->TabIndex = 1;  
//             this->button1->Text = L"+";  
//             this->button1->UseVisualStyleBackColor = true;  
//             this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);  
//             // button2  
//             this->button2->Font = (gcnew System::Drawing::Font(L"Letterman-Solid", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,  
//                static_cast<System::Byte>(0)));  
//             this->button2->Location = System::Drawing::Point(234, 108);  
//             this->button2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);  
//             this->button2->Name = L"button2";  
//             this->button2->Size = System::Drawing::Size(98, 49);  
//             this->button2->TabIndex = 2;  
//             this->button2->Text = L"=";  
//             this->button2->UseVisualStyleBackColor = true;  
//             this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);  
//             // button3  
//             this->button3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,  
//                static_cast<System::Byte>(0)));  
//             this->button3->Location = System::Drawing::Point(32, 160);  
//             this->button3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);  
//             this->button3->Name = L"button3";  
//             this->button3->Size = System::Drawing::Size(98, 49);  
//             this->button3->TabIndex = 3;  
//             this->button3->Text = L"-";  
//             this->button3->UseVisualStyleBackColor = true;  
//             this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);  
//             // button4  
//             this->button4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,  
//                static_cast<System::Byte>(0)));  
//             this->button4->Location = System::Drawing::Point(32, 212);  
//             this->button4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);  
//             this->button4->Name = L"button4";  
//             this->button4->Size = System::Drawing::Size(98, 49);  
//             this->button4->TabIndex = 4;  
//             this->button4->Text = L"x";  
//             this->button4->UseVisualStyleBackColor = true;  
//             this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);  
//             // button5  
//             this->button5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,  
//                static_cast<System::Byte>(0)));  
//             this->button5->Location = System::Drawing::Point(32, 264);  
//             this->button5->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);  
//             this->button5->Name = L"button5";  
//             this->button5->Size = System::Drawing::Size(98, 49);  
//             this->button5->TabIndex = 5;  
//             this->button5->Text = L"/";  
//             this->button5->UseVisualStyleBackColor = true;  
//             this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);  
//             // button6  
//             this->button6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,  
//                static_cast<System::Byte>(0)));  
//             this->button6->Location = System::Drawing::Point(234, 161);  
//             this->button6->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);  
//             this->button6->Name = L"button6";  
//             this->button6->Size = System::Drawing::Size(98, 49);  
//             this->button6->TabIndex = 6;  
//             this->button6->Text = L"ROOT";  
//             this->button6->UseVisualStyleBackColor = true;  
//             this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);  
//             // button7  
//             this->button7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,  
//                static_cast<System::Byte>(0)));  
//             this->button7->Location = System::Drawing::Point(234, 212);  
//             this->button7->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);  
//             this->button7->Name = L"button7";  
//             this->button7->Size = System::Drawing::Size(98, 49);  
//             this->button7->TabIndex = 7;  
//             this->button7->Text = L"SQUARE";  
//             this->button7->UseVisualStyleBackColor = true;  
//             this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);  
//             // label1  
//             this->label1->AutoSize = true;  
//             this->label1->BackColor = System::Drawing::SystemColors::HighlightText;  
//             this->label1->Font = (gcnew System::Drawing::Font(L"KabobExtrabold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,  
//                static_cast<System::Byte>(0)));  
//             this->label1->Location = System::Drawing::Point(123, 3);  
//             this->label1->Name = L"label1";  
//             this->label1->Size = System::Drawing::Size(135, 18);  
//             this->label1->TabIndex = 8;  
//             this->label1->Text = L"Simple Calculator";  
//             this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);  
//             // menuStrip1  
//             this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^ >(1) {this->menuToolStripMenuItem});  
//             this->menuStrip1->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::Flow;  
//             this->menuStrip1->Location = System::Drawing::Point(0, 0);  
//             this->menuStrip1->Name = L"menuStrip1";  
//             this->menuStrip1->Size = System::Drawing::Size(360, 23);  
//             this->menuStrip1->TabIndex = 10;  
//             this->menuStrip1->Text = L"menuStrip1";  
//             this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::menuStrip1_ItemClicked);  
//             // menuToolStripMenuItem  
//             this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^ >(1) {this->exitToolStripMenuItem});  
//             this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";  
//             this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 19);  
//             this->menuToolStripMenuItem->Text = L"Menu";  
//             this->menuToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::menuToolStripMenuItem_Click);  
//             // exitToolStripMenuItem  
//             this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";  
//             this->exitToolStripMenuItem->Size = System::Drawing::Size(92, 22);  
//             this->exitToolStripMenuItem->Text = L"Exit";  
//             this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);  
//             // Form1  
//             this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);  
//             this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;  
//             this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^ >(resources->GetObject(L"$this.BackgroundImage")));  
//             this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;  
//             this->ClientSize = System::Drawing::Size(360, 324);  
//             this->Controls->Add(this->label1);  
//             this->Controls->Add(this->button7);  
//             this->Controls->Add(this->button6);  
//             this->Controls->Add(this->button5);  
//             this->Controls->Add(this->button4);  
//             this->Controls->Add(this->button3);  
//             this->Controls->Add(this->button2);  
//             this->Controls->Add(this->button1);  
//             this->Controls->Add(this->txtb);  
//             this->Controls->Add(this->menuStrip1);  
//             this->DoubleBuffered = true;  
//             this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,  
//                static_cast<System::Byte>(0)));  
//             this->ForeColor = System::Drawing::Color::Black;  
//             this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;  
//             this->MainMenuStrip = this->menuStrip1;  
//             this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);  
//             this->Name = L"Form1";  
//             this->Text = L"Form1";  
//             this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);  
//             this->menuStrip1->ResumeLayout(false);  
//             this->menuStrip1->PerformLayout();  
//             this->ResumeLayout(false);  
//             this->PerformLayout();  
//         }  
//  #pragma endregion  
//      private: System::Void txtb_TextChanged(System::Object^ sender, System::EventArgs^ e) {  
//                int temp;  
//                       if(Int32::TryParse(txtb->Text, temp))  
//                  a = float::Parse(txtb->Text);  
//             }  
//      private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {  
//                flag=1;  
//                b = double::Parse(txtb->Text);  
//                ans=a+b;  
//             }  
//  private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {  
//             flag=2;  
//              b = float::Parse(txtb->Text);  
//          }  
//      private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {  
//                if(a==0 && b==0)  
//                {  
//                    txtb->Text = "Enter Numbers";  
//                }  
//                if(flag==1)  
//                {  
//                ans=a+b;  
//                    txtb->Text = Convert::ToString(ans);  
//                }  
//                else if(flag==2)  
//                {  
//                   ans=b-a;  
//                   txtb->Text = Convert::ToString(ans);  
//                }  
//                else if(flag==3)  
//                {  
//                   ans=b*a;  
//                   txtb->Text = Convert::ToString(ans);  
//                }  
//                else if(flag==4)  
//                {  
//                   if(a==0)  
//                   {  
//                       MessageBox::Show("Divided By Zero Error");  
//                   }  
//                   ans=b/a;  
//                   txtb->Text = Convert::ToString(ans);  
//                }  
//             }  
//  private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {  
//             flag=3;  
//              b = double::Parse(txtb->Text);  
//          }  
//  private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {  
//             flag=4;  
//             b = double::Parse(txtb->Text);  
//          }  
//  private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {  
//             ans=sqrt(a);  
//             txtb->Text = Convert::ToString(ans);  
//          }  
//  private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {  
//          ans=a*a;  
//             txtb->Text = Convert::ToString(ans);  
//          }  
//  private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {  
//             MessageBox::Show("Created By :nn Muhammed Afsal.vn e-mail : Afsalashyana@gmail.com");  
//          }  
//  private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {  
//             a=b=0;  
//          }  
//  private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {  
//             Application::Exit();  
//          }  
//  private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {  
//          }  
//  private: System::Void menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {  
//          }  
//  private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {  
//          }  
//  };  
//  }  
// // Calculator.cpp : main project file.  
//  #include "stdafx.h"  
//  #include "Form1.h"  
//  using namespace Calculator;   
//  int main(array<System::String ^> ^args)  
//  {  
//      // Enabling Windows XP visual effects before any controls are created  
//      Application::EnableVisualStyles();  
//      Application::SetCompatibleTextRenderingDefault(false);  
//      // Create the main window and run it  
//      Application::Run(gcnew Form1());  
//      return 0;  
//  }  





#include <iostream>
#include <conio.h>
#include <graphics>
#include <stdlib>
#include <string>
#include <dos>

// Window
#define TITLEBARHEIGHT 21
#define BORDERWIDTH 1
#define ADD 1
#define SUBTRACT 2
#define MULTIPLY 3
#define DIVIDE 4
/*--------------------- Global Data ---------------------*/
int ButtonId;
enum bool{false,true};
enum BUTTON{MOUSE_NORMAL = 0,MOUSE_LBUTTON=1,MOUSE_RBUTTON=2,MOUSE_MBUTTON=4};
enum BUTTON_STATUS{
   BUTTON_STATUS_NORMAL,
   BUTTON_STATUS_DOWN
};
/*------------------------------------------------------
       Mouse Class
------------------------------------------------------*/
class Mouse{
  private:
   int MouseXpos, MouseYpos;
   BUTTON MouseBtn;
   union REGS in,out;
  public:

   int InstallMouse();
   int ShowMouse();
   int HideMouse();
   void GetMouseStatus();
   BUTTON GetButton();
   int GetPosX();
   int GetPosY();
   void SetMousePosi(int &xpos, int &ypos);
   int MouseInside(int x1, int y1, int x2, int y2);
   void RestrictMousePtr(int x1, int y1, int x2, int y2);
};
 int Mouse::InstallMouse(){
  in.x.ax = 0;
  int86(51,&in,&out);
  return out.x.ax;
 }
 int Mouse::ShowMouse(){
  in.x.ax = 1;
  int86(51,&in,&out);
  return 1;

 }
 int Mouse::HideMouse()
 {

  in.x.ax = 2;
  int86(51,&in,&out);
  return 1;

 }
 void Mouse::GetMouseStatus()
 {

  in.x.ax = 3;
  int86(51,&in,&out);
  MouseXpos = out.x.cx;
  MouseYpos = out.x.dx;
  MouseBtn = out.x.bx;

 }
 BUTTON Mouse::GetButton()
 {
  return MouseBtn;
 }

 int Mouse::GetPosX()
 {
  return MouseXpos;
 }

 int Mouse::GetPosY()
 {
  return MouseYpos;
 }

 void Mouse::SetMousePosi(int &xpos, int &ypos)
 {
  in.x.ax = 4;
  in.x.cx = xpos;
  in.x.dx = ypos;
  int86(51,&in,&out);
 }
 int Mouse::MouseInside(int x1, int y1, int x2, int y2)
 {
  int x_pos, y_pos;
  in.x.ax = 3;
  int86(51,&in,&out);
  x_pos = out.x.cx;
  y_pos = out.x.dx;

  if(x_pos >= x1 && y_pos >= y1 && x_pos <= x2 && y_pos <= y2)
   return 1;
  else
   return 0;

 }
 void Mouse::RestrictMousePtr(int x1, int y1, int x2, int y2)
 {

  in.x.ax = 7;
  in.x.cx = x1;
  in.x.dx = x2;
  int86(51,&in,&out);

  in.x.ax = 8;
  in.x.cx = y1;
  in.x.dx = y2;
  int86(51,&in,&out);

 }


/*------------------------------------------------------
       End of Mouse Class
------------------------------------------------------*/


/*------------------------------------------------------
       TextBox Class
------------------------------------------------------*/

class TextBox
{

 private:

 int Alignment;

 int Left,Top,Width,Height;
 char Caption[50];

 public:

 TextBox(int left, int top, int width, int height, char caption[],int Align);
 void Draw();
 void SetText(char text[]);
 char *GetText();
 void Clear();
};
 TextBox::TextBox(int left, int top, int width, int height, char caption[],int Align){
  Left = left;
  Top = top;
  Width = width;
  Height = height;
  strcpy(Caption,caption);
  Alignment = Align;
    }


    void TextBox::Draw()
   {
  setfillstyle(SOLID_FILL,WHITE);
  bar(Left,Top,Left+Width,Top+Height);

  setcolor(DARKGRAY);
  rectangle(Left,Top,Left+Width,Top+Height);

  setcolor(BLACK);

  settextjustify(Alignment,TOP_TEXT);
  if(Alignment==LEFT_TEXT)
   outtextxy(Left+2,Top+1+((Height/2)-(textheight(Caption)/2)),Caption);
  else
   if(Alignment==RIGHT_TEXT)
    outtextxy(Left+Width-2,Top+1+((Height/2)-(textheight(Caption)/2)),Caption);
  else
   outtextxy(Left+(Width/2),Top+1+((Height/2)-(textheight(Caption)/2)),Caption);


   }


 void TextBox::SetText(char text[])
 {
  if (Left + textwidth(Caption) <= Left + Width - textwidth(" "))
  {
   strcat(Caption,text);
   Draw();
  }
 }

 char *TextBox::GetText()
 {
  return Caption;
 }

 void TextBox::Clear()
 {
  strcpy(Caption,"");
  Draw();
 }


/*------------------------------------------------------
       End of TextBox Class
------------------------------------------------------*/

/*-------------------Mouse Object---------------------*/

static Mouse mouse;

/*------------------------------------------------------
       Button Class
------------------------------------------------------*/

class Button
{

 private:

 int Left,Top,Width,Height,ID;
 char Caption[50];
 BUTTON_STATUS btnStatus;
 void MouseDown();
 void MouseUp();
 bool State;

 public:

 Button(int left, int top, int width, int height, char caption[], int Id);
 void Draw();
 void EnableClickHandler();

};

 Button::Button(int left, int top, int width, int height, char caption[], int Id)
    {
  Left = left;
  Top = top;
  Width = width;
  Height = height;
  strcpy(Caption,caption);
  ID = Id;
  btnStatus = BUTTON_STATUS_NORMAL;
  State = false;
    }


   void Button::Draw()
   {
  setfillstyle(SOLID_FILL,LIGHTGRAY);
  bar(Left,Top,Left+Width,Top+Height);

  setcolor(WHITE);
  line(Left,Top,Left+Width,Top);
  line(Left,Top,Left,Top+Height);

  setcolor(BLACK);
  line(Left+Width,Top,Left+Width,Top+Height);
  line(Left,Top+Height,Left+Width,Top+Height);

  settextjustify(LEFT_TEXT,TOP_TEXT);
  setcolor(BLACK);
  outtextxy(Left + (Width/2) - textwidth(Caption)/2 + 1,
  Top + (Height/2) - textheight(Caption)/2 + 1, Caption);

   }

   void Button::MouseDown()
   {




    mouse.HideMouse();

    setcolor(BLACK);
    line(Left,Top,Left+Width,Top);
    line(Left,Top,Left,Top+Height);

    setcolor(WHITE);
    line(Left+Width,Top,Left+Width,Top+Height);
    line(Left,Top+Height,Left+Width,Top+Height);

    mouse.ShowMouse();




   }

   void Button::MouseUp()
   {



     mouse.HideMouse();

     setcolor(WHITE);
     line(Left,Top,Left+Width,Top);
     line(Left,Top,Left,Top+Height);

     setcolor(BLACK);
     line(Left+Width,Top,Left+Width,Top+Height);
     line(Left,Top+Height,Left+Width,Top+Height);

     mouse.ShowMouse();

   }

   void Button::EnableClickHandler()
   {

  if(State)
  {
   ButtonId = 0;
   State = false;
   return;
  }

  if( mouse.MouseInside(Left,Top,Left+Width,Top+Height) == 1)
  {

   if( mouse.GetButton() == MOUSE_LBUTTON)
   {
    MouseDown();
    btnStatus = BUTTON_STATUS_DOWN;
   }

   else if(btnStatus == BUTTON_STATUS_DOWN &&  mouse.GetButton() == MOUSE_NORMAL)
   {
    MouseUp();
    ButtonId = ID;
    btnStatus = BUTTON_STATUS_NORMAL;
    State = true;

   }

  }

 }

/*------------------------------------------------------
                     End of Button Class
------------------------------------------------------*/

/*------------------------------------------------------
                     Window Class
------------------------------------------------------*/

class Window
{

 private:

 int Left,Top,Width,Height;
 char Caption[50];
 Button *CloseBtn;
 public:
 
 Window(int left, int top, int width, int height, char caption[]);
 void JCLogo();
 void Draw();
 void EnableClickHandler(); 
};


 Window::Window(int left, int top, int width, int height, char caption[])
 {
  Left = left;
  Top = top;
  Width = width;
  Height = height;
  strcpy(Caption,caption);
 }
 void Window::JCLogo()
 {
    /*********** Logo ************/

  setcolor(3);
  setfillstyle(SOLID_FILL,3);
  fillellipse(Left+(BORDERWIDTH)+TITLEBARHEIGHT/2,Top+TITLEBARHEIGHT/2,TITLEBARHEIGHT/2-1,TITLEBARHEIGHT/2-1);
  setcolor(15);
  setfillstyle(SOLID_FILL,15);
  circle(Left+(BORDERWIDTH)+TITLEBARHEIGHT/2,Top+TITLEBARHEIGHT/2,TITLEBARHEIGHT/2-3);
  settextstyle(SMALL_FONT,0,0);
  outtextxy(Left+6,Top+4,"JC");
  settextstyle(0,0,0);
 }
 void Window::Draw()
 {
  setfillstyle(SOLID_FILL,LIGHTGRAY);
  bar(Left,Top,Left+Width,Top+Height);

  setcolor(WHITE);
  line(Left,Top,Left+Width,Top);
  line(Left,Top,Left,Top+Height);

  setcolor(BLACK);
  line(Left,Top+Height,Left+Width,Top+Height);
  line(Left+Width,Top,Left+Width,Top+Height);

  setfillstyle(SOLID_FILL,BLUE);
  bar(Left+BORDERWIDTH,Top+BORDERWIDTH,
  Left+Width-(BORDERWIDTH*2),Top+TITLEBARHEIGHT);

  setcolor(WHITE);
  settextjustify(LEFT_TEXT,TOP_TEXT);
  outtextxy(Left+(BORDERWIDTH*2)+TITLEBARHEIGHT+2,Top+(BORDERWIDTH*2)+(TITLEBARHEIGHT/2)-(textheight(Caption)/2),Caption);
  CloseBtn = new Button(Left+Width-TITLEBARHEIGHT-1, Top+2,TITLEBARHEIGHT-2, TITLEBARHEIGHT-2, "X", 9809);
  CloseBtn->Draw();

  JCLogo();

 }
 void Window::EnableClickHandler()
 {
  CloseBtn->EnableClickHandler();
  if (ButtonId == 9809)
  exit(0);

 }


/*------------------------------------------------------
       End of Window Class
------------------------------------------------------*/


/*------------------------------------------------------
       Main Function
------------------------------------------------------*/

void main()
{
 int gd=DETECT,gm,ch,errorcode;
 double opr1 = 0,opr2 = 0,result = 0,d=0;
 int Operation=0;
 double temp;
 char *chr,str[30];
 int len;
 int x = 160,y = 130;
 int w = 50, h = 40;
 char deci[]={"."};

 char btn[][3]={"AC","/","X","<-","7","8","9","-",
 "4","5","6","+","1","2","3","=","0",".","+/-"};
  // initialize graphics and local variables
  initgraph(&gd,&gm,"c://turboc3//bgi");

  // read result of initialization
  errorcode = graphresult();

  if (errorcode != grOk)// an error occurred
  {
   cout<<"Graphics error :: "<<grapherrormsg(errorcode);
   cout <<"\n press any key to halt: ";
   getch();
   exit(1);// terminate with an error code
  }

 mouse.InstallMouse();

 /* Drawing a Calculator Window */

 Window *pWindow = new Window(150,50,265,340,"Calculator");
 pWindow->Draw();

 /* Drawing Textbox */

 TextBox *pTextBox = new TextBox(160,80,243,30,"",RIGHT_TEXT);
 pTextBox->Draw();

 /* Drawing Buttons */

 Button *pButton[19];
 for (int i = 0;i<19;i++)
 {
    if(i == 15)
  h = 90;
    else
  h=40;
    pButton[i] = new Button(x,y,w,h,btn[i],i+1);
    pButton[i]->Draw();
    x = x+65;
    if(i == 3 || i == 7 || i==11 || i== 15)
    {
      y = y+50;
      x = 160;
    }
 }

 while(1){
   mouse.ShowMouse(); // To show mouse
   mouse.GetMouseStatus(); // To get position of mouse

  // Enabling click event on close button in window
  pWindow->EnableClickHandler();
  // Enabling click event on buttons
  for(int k = 0;k<19;k++)
  pButton[k]->EnableClickHandler();
  switch(ButtonId)
  {
    case 1: //AC
      pTextBox->Clear();
      d = 0;
      opr1=0;
      opr2=0;
      result = 0;
      Operation = 0;

    break;
    case 2: //Divide
      opr1 = atof(pTextBox->GetText());
      pTextBox->Clear();
      Operation = DIVIDE;
      d = 0;

    break;
    case 3: //Multiply
      opr1 = atof(pTextBox->GetText());
      pTextBox->Clear();
      Operation = MULTIPLY;
      d=0;

    break;
    case 4: //Backspace
      strcpy(chr,pTextBox->GetText());
      len=strlen(chr);
      if(chr[len-2] == deci[0])
      {
         chr[len-1]=0;
         chr[len-2]=0;
      }
      else
         chr[len-1] = 0;
      pTextBox->Clear();
      pTextBox->SetText(chr);

    break;
    case 5: //7
      pTextBox->SetText("7");

    break;
    case 6: //8
      pTextBox->SetText("8");

    break;
    case 7: //9
      pTextBox->SetText("9");

    break;
    case 8: // Subtraction
      opr1 = atoi(pTextBox->GetText());
      pTextBox->Clear();
      Operation = SUBTRACT;
      d=0;
    break;
    case 9: //4
      pTextBox->SetText("4");
    break;
    case 10: //5
      pTextBox->SetText("5");

    break;
    case 11: //6
      pTextBox->SetText("6");

    break;
    case 12: //Addition
      opr1 = atof(pTextBox->GetText());
      pTextBox->Clear();
      Operation = ADD;
      d=0;

    break;
    case 13: //1
      pTextBox->SetText("1");

    break;
    case 14: //2
      pTextBox->SetText("2");

    break;
    case 15: //3
      pTextBox->SetText("3");

    break;
    case 16: // Equal(=)
      opr2 = atof(pTextBox->GetText());

      switch(Operation)
      {
   case ADD:
   result = opr1+opr2;
   break;
   case SUBTRACT:
   result = opr1-opr2;
   break;
   case MULTIPLY:
   result = opr1*opr2;
   break;
   case DIVIDE:
   result = opr1/opr2;
   break;
      }

      pTextBox->Clear();
      pTextBox->SetText(gcvt(result,10,str));
      opr1=0;
      opr2=0;
      result = 0;
      Operation=0;

    break;
    case 17: //0
      pTextBox->SetText("0");

    break;
    case 18: // Decimal(.)
      if(d == 0)
      {
       d = 1;
       pTextBox->SetText(".");
    }
    break;
    case 19: //Plus & Minus (+/-)
   temp = atof(pTextBox->GetText());
   temp = temp* -1;
   pTextBox->Clear();
   pTextBox->SetText(gcvt(temp,10,str));
    break;
   }
       while(kbhit()){
  ch = getch();
  if (ch == 27)  //ESC key pressed
  exit(0);
    }
  }
}








