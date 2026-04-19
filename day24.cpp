



                                                            // // permuntion problem


// #include<iostream>
// #include<cstring>
// #include<vector>
// using namespace std;
// void permuntion(string str,string ans){
//     int n=str.size();
//     if(n==0){
//         cout<<ans<<"\n";
//         return;
//     }
//     for(int i=0;i<n;i++){
//         char ch=str[i];
//         string nextstr=str.substr(0,i)+str.substr(i+1,n-i-1);
//         permuntion(nextstr,ans+ch);
//     }
// }

// int main (){
// string str="abc";
// string ans="";
// permuntion(str,ans);
//     return 0;
// }


      //n queens probleam; 

// #include<iostream>
// #include<cstring>
// #include<vector>
// using namespace std;

// void printboard(vector<vector<char>>board){
//     int n=board.size();
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<board[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"--------------"<<endl;
//     return ;
    
// }
// bool issafe(vector<vector<char>>board,int row,int col){
//     int n=board.size();
//     for(int j=0;j<n;j++){
//         if(board[row][j]=='Q'){
//             return false;
//         }
//     }

//     for(int i=0;i<n;i++){
//         if(board[i][col]=='Q'){
//             return false;
//         }
//     }
  
//        for(int i=row,j=col;i>=0 &&j<n;i--,j++){
//         if(board[i][j]=='Q'){
//             return false;
//         }
//     }


//        for(int i=row, j=col;i>=0 &&j>=0;i--,j--){
//         if(board[i][j]=='Q'){
//             return false;
//         }
//     }
//        return true;
// }

// void nqueens(vector<vector<char>>board,int row){
//     int n =board.size();
//     if(row==n){
//         printboard(board);
        
//         return;
//     }
   
//     for(int j=0;j<n;j++){
//          if(issafe(board,row,j)){
//         board[row][j]='Q';
//         nqueens(board,row+1);
//         board[row][j]='.';
        
//     }
// }
// }


// int main (){
// vector<vector<char>>board;
// int n=4;
// for(int i=0;i<n;i++){
//     vector<char>newrow;
//     for(int j=0;j<n;j++){
//         newrow.push_back('.');
//     }
//     board.push_back(newrow);
// }
// nqueens(board,0);
// // printboard(board);
//     return 0;
// }



                                      // grid problem


// #include<iostream>
// #include<cstring>
// #include<vector>
// using namespace std;
// int ways(int r,int c,int n, int m,string ans){
//     if(r==n-1 && c==m-1){
//         cout<<ans<<endl;
//         return 1;
//     }
//     if(r>n-1 || c>m-1){
//         return 0;
//     }
//     int count=ways(r,c+1,n,m,ans+'r')+ways(r+1,c,n,m,ans+'d');
//     return count;
    
// }

// int main (){
//    int n=3;
//    int m=3;
//    string ans="";
//    cout<<ways(0,0,n,m,ans)<<"\n";

//     return 0;
// }





// #include<iostream>
// #include<cstring>                                                           wrong code of optimise version
// #include<vector>
// using namespace std;
// int ways(int n,int m,int y){
// if(y==0){
    
//     return 1;
// }
// if(n==0||m==0){
//     return 1;
// }

// int fact1=(y)*ways( n,m,y-1);
// int fact2=n*ways(n-1,m,y);
// int fact3=m*ways(n,m-1,y);
// int value=fact1/(fact2*fact3);
//  return value;
// }

// int main (){
// int n=3;
// int m=3;
// int y=n+m-2;
//  cout<<ways(n-1,m-1,y);
//     return 0;
// }





// suduku solver code


// #include<iostream>
// #include<cstring>
// #include<vector>
// using namespace std;
// void print(int arr[][9]){
//     int n =9;
// for(int i=0;i<n;i++){
    
//        for(int j=0;j<n;j++){
//         cout<<arr[i][j]<<" | ";
//        } 
//      cout<<endl;
//      cout<<"----------------------------------------"<<endl;  
// }
// }


//   bool issafe(int arr[9][9],int row,int col,int digit){
//     for(int i=0;i<9;i++){
//         if(arr[i][col]==digit){
//             return false;
//         }
//     }
//      for(int j=0;j<9;j++){
//         if(arr[row][j]==digit){
//             return false;
//         }
//     }
//     int sr=(row/3)*3;
//     int sc=(col/3)*3;
//        for(int i=sr;i<sr+3;i++){
//         for(int j=sc;j<sc+3;j++){
//            if (arr[i][j]==digit){
//             return false;
//            }
//         }
//        }
//   return true;
//    }


// int suduko(int arr[9][9],int row,int col){
//     if(row==9){
//         print(arr);
//         return true;
//     }
 

//     int nextrow=row;
//     int nextcol=col+1;
//     if(nextcol==9){
//       nextrow=row+1;
//       nextcol=0;
//     }
//     if(arr[row][col]!=0){
//        return suduko(arr,nextrow,nextcol);
//     }
//     for(int digit=1;digit<=9;digit++){
//         if(issafe(arr,row,col,digit)){
//             arr[row][col]=digit;
//           if(  suduko(arr,nextrow,nextcol)){
//             return true;
//           }
//           arr[row][col]=0;
//         }   
//     }
//     return false;
// }

// int main (){
// int arr[9][9]={ {0,0,8,0,0,0,0,0,0},
//                  {4,9,0,1,5,7,0,0,2},
//                 {0,0,3,0,0,4,1,9,0},
//                  {1,8,5,0,6,0,0,2,0},
//                   {0,0,0,0,2,0,0,6,0},
//                     {9,6,0,4,0,5,3,0,0},
//                      {0,3,0,0,7,2,0,0,4},
//                      {0,4,9,0,3,0,0,5,7},
//                       {8,2,7,0,0,9,0,1,3} };

//          suduko(arr,0,0)   ;                              
//     return 0;
// }





// knight arrangement

#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
void print( vector<vector<char>> board){
    int n=board.size();
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++) {
        cout<<board[i][j]<<" ";
      } 
      cout<<endl;
    }
    cout<<"-----------"<<endl;
}
bool issafe(vector<vector<char>> board,int row,int col){
    int n=board.size();
  while(col>=2 && row>=1){
    if(board[row-1][col-2]=='k'){
        return false;
    }
}
  while(row<n-1 && col>=2){
    if(board[row+1][col-2]=='k'){
        return false;
    }
}
    while(row>=2 && col>=1){
    if(board[row-2][col-1]=='k'){
        return false;
    }
}
 while(row<n-2 && col>=1){
    if(board[row+2][col-1]=='k'){
        return false;
    }
}
    return true;
}

void knight(vector<vector<char>> board,int row){
    int n=board.size();
    if(row==n){
        print(board);
        return  ;
    }
    for(int j=0;j<n;j++){
   if(issafe(board,row,j)){
       board[row][j]='k';
       
    }
    knight(board,row+1);
    board[row][j]='.';
  }
}
int main (){
    vector<vector<char>> board;
    int n=4;
    for(int i=0;i<n;i++){
        vector<char> newrow;
        for(int j=0;j<n;j++){
            newrow.push_back('.');
        }
        board.push_back(newrow);
    }
    // print(board);
    knight(board,0);

    return 0;
}