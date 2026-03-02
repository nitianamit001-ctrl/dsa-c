#include<iostream>
using namespace std;
void dectobin(int decnum){
    int n=decnum;
    int res=0;
    int pow=1;
    while(n>0){
        int r=n%2;
         res=res+pow*r;
         pow*=10;
        n=n/2;
    }
        cout<<res;        
}
int main(){
dectobin(100);
    return 0;
}