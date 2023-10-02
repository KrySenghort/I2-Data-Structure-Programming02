#include<iostream>
#include<sqlite3.h>
#include "sqlite3.h"
using namespace std;

void connection();
void insertRecord();
sqlite3 *db;
sqlite3_stmt *stmt;
int result,roll;
string query,name,email;
int main(){
    // call connection function
    connection();
    insertRecord();
    sqlite3_close(db);
    return 0;
}
void connection(){
    if(sqlite3_open("demo.db",&db) == SQLITE_OK){
           result = sqlite3_prepare_v2(db, "CREATE TABLE IF NOT EXISTS user(name VARCHAR(50), roll INT,email VARCHAR(80));", -1, &stmt, NULL);
           sqlite3_step(stmt);
           sqlite3_finalize(stmt);

           if(result != SQLITE_OK){
                cout<<" Error : "<<sqlite3_errmsg(db)<<"\n";
           }
    }
}
void insertRecord(){

    cout<<" Type Your Name : \n";
    fflush(stdin);
    getline(cin,name);

    cout<<" Type Your Roll : \n";
    cin>>roll;
    getchar();
    cout<<" Type Your Email : \n";
    fflush(stdin);
    getline(cin,email);

    string quary = "INSERT INTO user(name, roll, email) VALUES(?,?,?);" ;
    result = sqlite3_prepare_v2(db, quary.c_str(), -1, &stmt, NULL);
    sqlite3_bind_text(stmt, 1, name.c_str(), name.length(), SQLITE_TRANSIENT);
    sqlite3_bind_int(stmt, 2, roll);
    sqlite3_bind_text(stmt, 3, email.c_str(), email.length(), SQLITE_TRANSIENT);

    sqlite3_step(stmt);
    sqlite3_finalize(stmt);

    if(result != SQLITE_OK){
        cout<<" ERROR : "<<sqlite3_errmsg(db)<<endl;
    }else{
        cout<<" Data Successfully \n";
    }
}
