//*****************Data member creating as public does not follow Abstraction Law***************************
/*#include<iostream>
using namespace std;
class test{
    public:
    int x;
    int y;
    int z;
};
int main(){
    test obj;
    cout<<"Input x= ";  cin>>obj.x;
    cout<<"Input y= ";  cin>>obj.y;
    cout<<"Input z= ";  cin>>obj.z;
    cout<<obj.x<<"\t"<<obj.y<<"\t"<<obj.z;
    return 0;
} */
/*Output:
                Input x= 11
                Input y= 22
                Input z= 33
                11      22      33      */
//********************************************Abstraction Rule*********************************************
/*#include<iostream>
using namespace std;
class test{
    private:
    int x;
    int y;
    int z;
};
int main(){
    test obj;
    cout<<"Enter x= ";  cin>>obj.x;
    cout<<"Enter y= ";  cin>>obj.y;
    cout<<"Enter z= ";  cin>>obj.z;
    return 0;
}*/
// Output:  Error cannot accessing because private can only use in the own class function.
//******************************************Function Member************************************************
/*#include<iostream>
using namespace std;
class test{
    private:
    int x;
    int y;
    int z;
    public:
    void input(){
        cout<<"Enter x = "; cin>>x;
        cout<<"Enter y = "; cin>>y;
        cout<<"Enter z = "; cin>>z;
    }
    int sum(){
        return x+y+z;
    }
};
int main(){
    test obj;
    obj.input();
    cout<<"sum = "<<obj.sum();
    return 0;
}*/
/*Output:
            Enter x = 11
            Enter y = 22
            Enter z = 33
            sum = 66           */
//*******************************************Inheritance method********************************************
/*#include<iostream>
using namespace std;
class student{
    public:
    int ID;
    string name;
    int password;
    char sex;
    void displayInfo(int, string, char, float, double);
};
class teacher:public student{
    public:
    void displayInfo(){
        cout<<"Enter your name : ";     cin>>name;
        cout<<"Enter your ID : ";       cin>>ID;
        cout<<"Enter your password : "; cin>>password;
        cout<<"Enter your sex : ";      cin>>sex;
        cout<<"\tName"<<"\t\t"<<"ID"<<"\tpassword"<<"\tsex"<<endl;
        cout<<"\t"<<name<<"\t"<<ID<<"\t"<<password<<"\t\t"<<sex;
    }
};
int main(){
    teacher s1;
    s1.displayInfo();
    return 0;
} */
//*******************************************Object and Class**********************************************
/*#include<iostream>
using namespace std;
class employee{
public:
    int code;
    string name;
    char sex;
    float salary;
    void input(){
        cout<<" Enter your code     : ";    cin>>code;
        cout<<" Enter your name     : ";    cin>>name;
        cout<<" Enter your sex      : ";    cin>>sex;
        cout<<" Enter your salary   : ";    cin>>salary;
    }
    void output(){
        cout<<"\tcode"<<"\t\tname"<<"\t\tsex"<<"\t\tsalary"<<endl;
        cout<<"\t"<<code<<"\t\t"<<name<<"\t"<<sex<<"\t\t"<<salary;
    }
};
int main(){
    employee e1;
    e1.input();
    e1.output();
    return 0;
} */
//************************************Get and Set ways using on private element #01*************************
/*#include<iostream>
using namespace std;
class student{
    private:
        int ID;
        string name;
        string sex;
        float score;
        string department;
    public:
        void setID(int i){
            this->ID = i;
        }
        int setName(string n){
            this->name = n;
        }
        int getID(){
            return ID;
        }
        string getName(){
            return name;
        } 
};
int main(){
    student st;
    st.setID(1001);
    st.setName("Kry Senghort");
    cout<<"\tID\t: "<<st.getID()<<endl;
    cout<<"\tName\t: "<<st.getName()<<endl;
    return 0;
}*/
//************************************Get and Set ways using on private element #02*************************
/*#include<iostream>
using namespace std;
class student{
    private:
        int ID;
        string name;
        string sex;
        string department;
        float score;
    public:
        void setID(int i){
            this->ID = i;
        }
        void setName(string n){
            this->name = n;
        }
        void setSex(string s){
            this->sex = s;
        }
        void setDepartment(string d){
            this->department = d;
        }
        void setScore(float s1){
            this->score = s1;
        }
        int getID(){
            return ID;
        }
        string getName(){
            return name;
        }
        string getsex(){
            return sex;
        }
        string getDepartment(){
            return department;
        }
        int getScore(){
            return score;
        }
};
int main(){
    student st;
    st.setDepartment("AMS");
    st.setScore(100);
    st.setSex("male");
    st.setName("Kry Senghort");
    st.setID(8102);
    cout<<"\tName"<<"\t\t\tID"<<"\tDepartment"<<"\tScore"<<endl;
    cout<<"\t"<<st.getName()<<"\t\t"<<st.getID()<<"\t"<<st.getDepartment()<<"\t\t"<<st.getScore()<<endl;
    return 0;
}*/
/*Output:
    Name			    ID	    Department	    Score
	Kry Senghort		8102	AMS		        100        */
//************************************************Constructor way******************************************
/*#include<iostream>
using namespace std;
class student{
    private:
        string ID;
        string name;
        string sex;
        float score;
    public:
        student(){     //constructor way
            ID = "e20200706";
            name = "Kry Senghort";
            sex = "male";
            score = 100;
        }
        void output(){
            cout<<"\tName"<<"\t\t\tID"<<"\t\tsex"<<"\tscore"<<endl;
            cout<<"\t"<<name<<"\t\t"<<ID<<"\t"<<sex<<"\t"<<score;
        }
};
int main(){
    student st;
    st.output();
    return 0;
}*/
/*Output:
        Name                    ID              sex     score
        Kry Senghort            e20200706       male    100         */
//**********************************************Get and Set way*********************************************
/*#include<iostream>
using namespace std;
class visalsigle{
    private:
        int id;
        string name;
        string sex;
        string department;
    public:
        visalsigle(){
            id = 0;
            name = "visal";
            sex = "male";
            department = "AMS";
        }
    public: visalsigle(string n, int id, string s, string d){
            this->name = n;
            this->id   = id;
            this->sex  = s;
            this->department = d;
        }
            string getData(){
                return name;
                return sex;
                return department;
            }
            int getID(){
                return id;
            }
    public: void input(){
            cout<<"Enter name       : ";      cin>>name;
            cout<<"Enter id         : ";      cin>>id;
            cout<<"Enter sex        : ";      cin>>sex;
            cout<<"Enter department : ";      cin>>department;
        }
        void output(){
            cout<<"\tName"<<"\t\tID"<<"\t\tsex"<<"\t\tdepartment"<<endl;
            cout<<"\t"<<name<<"\t"<<id<<"\t\t"<<sex<<"\t\t"<<department<<endl;
        }
};
class ngimpahna: public visalsigle{
    private:
        float java;
        int python;
        int Cpp;
        double C;
    public:
        ngimpahna(){
            visalsigle:visalsigle();
            java = 0;
            C=0;
            python = 0;
        }
};
int main(){
    visalsigle v;
    v.input();
    v.output();
    return 0;
} */
/*Output:
Enter name       : senghort
Enter id         : 1234
Enter sex        : male
Enter department : AMS
        Name            ID              sex             department
        senghort        1234            male            AMS                 */
//**********************************************************************************************************







































