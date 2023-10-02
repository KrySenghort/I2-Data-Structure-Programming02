#include<iostream>
using namespace std;
class student{
public:
    int ID;
    string name;
    float score;
public:
    void displayInfo();
    void fillData();
};
void student::displayInfo(){
    cout<<ID<<"\t"<<name<<"\t"<<score<<endl;
}
void student::fillData(){
    ID = yourname;
    name = yourname;
    score = yourscore;
}
#include<iostream>
using namespace std;
class student{
public:int ID;
       string name;
       float score;
public:
    void displayInfo();
    void fillData(int, string, float);
};
void student::displayInfo(){
    cout<<ID<<"\t"<<name<<"\t"<<score<<endl;
}
void student::fillData(int yourID, string yourName, float yourScore){
    ID = yourID;
    name = yourName;
    score = yourScore;
}
class A{
    int ID;
    int reference;
    student st;
};
int main(){
    student s1,s2,s3;
    // s1 = new student();
    s1.fillData(1,"Vichea",85);
    s1.displayInfo();
    s1.fillData(2,"Dara",80);
    s1.displayInfo();
    // 2    Dara    80
    //Remark: OOP display result cannot show the recent result so it show just new result. 
    //we can show other result by let take more variable for representation or the same variable with 
    // specific position.
    s2.fillData(3,"John",90);
    s2.displayInfo();
    s3.fillData(4,"Hort",100);
    s3.displayInfo();
    cout<<s1.ID<<endl;
    return 0;
}*/
/* Output: 
            1       Vichea  85
            2       Dara    80
            3       John    90
            4       Hort    100
            2      */
//*********************************************************************************************************
#include<iostream>
using namespace std;
class student{
public:int ID;
       string name;
       float score;
public:
    void displayInfo();
    void fillData(int, string, float);
};
void student::displayInfo(){
    cout<<ID<<"\t"<<name<<"\t"<<score<<endl;
}
void student::fillData(int yourID, string yourName, float yourScore){
    ID = yourID;
    name = yourName;
    score = yourScore;
}
class A{
    int ID;
    int reference;
    student st;
};
// Inheritance case: mystudent is parent, student is child class.
class mystudent:public student{
    string contact;
    int grade;
    public: 
   // void getMyIdentity();
    void displayInfo();  //overriding function to the parent class.
};
void mystudent::displayInfo(){
    cout<<"Hello Mr., "<<name<<endl;
}
int main(){
    student s1,s2,s3;
    student s[100];
    s1.fillData(1,"Vichea",85);
    s1.displayInfo();
    s1.fillData(2,"Dara",80);
    s1.displayInfo();
    s2.fillData(3,"John",90);
    s2.displayInfo();
    s3.fillData(4,"Hort",100);
    s3.displayInfo();
    cout<<s1.ID<<endl;
    mystudent ms;
    ms.fillData(12,"Jack",75);
    ms.displayInfo();
    cout<<ms.ID<<endl;
    return 0;
}
/*Output:
                1       Vichea  85
                2       Dara    80
                3       John    90
                4       Hort    100
                2
                12      Jack    75
                12                      */
















