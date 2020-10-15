#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
// #ifndef ONLINE_JUDGE
//     // for getting input from input.txt
//     freopen("input1.txt", "r", stdin);
//     // for writing output to output.txt
//     freopen("output2.txt", "w", stdout);
// #endif
	// cout<<"Hello World \n";
	// int amount1;
	// int amount2;
	// cin>>amount1;
	// cin>>amount2;
	// int sum = amount2 + amount1;
	// cout<<sum;
	// return 0;


//using namespace std;


    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    if(n==1){
        printf("one");
    }else if(n==2){
        printf("two");
    }else if(n==3){
        printf("three");
    }else if(n==4){
        printf("four");
    }else if(n==5){
        printf("five");
    }else if(n==6){
        printf("six");
    }else if(n==7){
        printf("seven");
    }else if(n==8){
        printf("eight");
    }else if(n==9){
        printf("nine");
    }else if(n>9){
        printf("Greater than 9");
    }
    return 0;
}
