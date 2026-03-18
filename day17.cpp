// #include<iostream>
// #include<string>
// using namespace std;
// class user{
//     int id;                                                                   undarstanding
//     string password;
//     public:
//     string username;
//     user(int newid){
//         cout<<"constructor"<<endl;
//         id=newid;
//         cout<<"id :"<<id<<endl;
//     }
//     // settters
//     void setpassword(string newpassword){
//         password=newpassword;
//     }
//     // getters
//    string  getpassword(){
//     return password;
//    }

// };


// int main(){
//     user u1(2025107207);
//     u1.username="amitkumar";
//     u1.setpassword("patelbabu");
//    cout<<"password :"<< u1.getpassword()<<endl;
//     cout<<"username :"<<u1.username;


//     return 0;
// }




#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
class animal{
    public:
    void eats(){
        cout<<"eat"<<endl;
    }
};
class mammal :public animal{
    public:
    string bloodtype;
    mammal(){
        bloodtype="warm";
    }
};
class student: public mammal{
    public:
    string name;
    student(string name){
        this->name=name;
    }
};
class fish : public animal{
    public:
    void swim(){
        cout<<"swims";
    }
};

int main (){
 student s1("patel");
 fish f1;
 s1.eats();
 cout<<s1.bloodtype<<endl;
 cout<<s1.name<<endl;
 f1.swim();
 cout<<endl;
 f1.eats();

    return 0;
}