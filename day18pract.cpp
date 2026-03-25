// #include<iostream>
// #include<cstring>
// #include<vector>
// using namespace std;
// class complex{
// int real;
// int img;
// public:
// complex(int real,int img){
//     this->real=real;
//     this->img=img;
// }
// void show(){
//     cout<<real<<"-"<<img<<"i"<<endl;
// }
// complex operator -(complex & c2){
// int rereal=this->real-c2.real;
// int reimg=this->img-c2.img;
// complex c3(rereal,reimg);
// return c3;

// }
// };

// int main (){
// complex c1(3,2);
// complex c2(1,3);
// complex c3=c1-c2;
// c1.show();
// c2.show();
// c3.show();
//     return 0;
// }




// #include<iostream>
// #include<cstring>
// #include<vector>
// using namespace std;
// class sbi{
//     int accountno;
//     int balance;
//     public:
//    int deposit( int deposit){
//     return balance=balance+deposit;
//    }
//    int withdraw(int with){
//     return balance=balance-with;
//    }
//    sbi(int accountno,int balance){
//     this->accountno=accountno;
//     this->balance=balance;
//    }
//    int getbalance(){
//     return balance;
//    }
//    int setaccountno(){
//     return accountno;
//    }
// };

// int main (){
//  sbi s1(9870093,300);
//  cout<<s1.getbalance()<<endl;
//  s1.deposit(300);
//  cout<<s1.getbalance()<<endl;
//  s1.withdraw(200);
//  cout<<s1.getbalance()<<endl;
//  cout<<s1.setaccountno()<<endl;
//     return 0;
// }




#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(string name,int age){
        this->name=name;
        this->age=age;
    }
};
class student : public person {
    public:
int studentid;
  student (string name,int age, int studentid) : person(name,age){
   
    this->studentid=studentid;
  }
};

int main (){
student s1("amit",19,2025107207);
cout<<s1.name<<endl;
cout<<s1.age<<endl;
cout<<s1.studentid<<endl;
    return 0;
}