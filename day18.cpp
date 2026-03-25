// #include<iostream>
// #include<cstring>
// #include<vector>
// using namespace std;
// class complex{
//     int real;
//     int img;
//     public:
//      complex(int real, int img){
//      this->real=real;
//      this->img=img;
//      }
//      void showno(){
//         cout<<real<<"+"<<img<<"i\n";
//      }
//      complex operator +(complex & c2){
//         int rereal=this->real+c2.real;
//         int reimg=this->img+c2.img;
//         complex c3(rereal,reimg);
//             return c3;
        
//      }
// };

// int main (){
// complex c1(1,2);
// complex c2(3,4);
// c1.showno();
// c2.showno();
//  complex c3=c1+c2;
// c3.showno();
//     return 0;
// }



#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
class count{
    public:
    static int x;
  count(){
    cout<<"hello world\n";
  }
};

int count::x=0;

int main (){
 count c1;
 count c2;
 count c3;
 cout<<c1.x++<<endl;
 cout<<c2.x++<<endl;
 cout<<c3.x++<<endl;


    return 0;
}