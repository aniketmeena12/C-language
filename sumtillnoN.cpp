#include<iostream>
using namespace std;
int main(){
    int n , sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        sum=sum + a;
    }
    cout<<sum;

    return 0;

}