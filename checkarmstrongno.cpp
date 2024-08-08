#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter any no"<<endl;
    cin>>n;
    int sum=0;
    int orginaln=n;
    while(n>0){
        int lastdigit= n%10;
        sum = sum + lastdigit*lastdigit*lastdigit;
        n=n/10;
    }
    if(orginaln==sum){
        cout<<"This no is Armstrong"<<endl;
    }
    else{
        cout<<"this no is not an Armstrong"<<endl;
    }
    return 0;
}