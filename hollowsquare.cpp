#include<iostream>
using namespace std;
int main(){
    int row,colm;
    cin>>row>>colm;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=colm;j++){
            if(i==1||i==row||j==1||j==colm){
                cout<<'*';
            }
            else{
                cout<<' ';
            }
        }
        cout<<endl;
    }
}