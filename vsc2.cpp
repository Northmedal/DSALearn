#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","a",stdout);
    #endif
    int savings;
    cin>>savings;
    if(savings>5000){
        cout<<"NEHA\n";
    }else if(savings>2000 && savings<5000){
        cout<<"SOWMYA\n";
    }else{
        cout<<"ZOMATO\n";
    }
}