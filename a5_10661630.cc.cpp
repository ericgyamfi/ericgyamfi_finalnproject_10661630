#include <iostream>

using namespace std;

int GCD( int a,int b){
    if((a>=b) && ((a%b)==0))
        return b;


    else
    GCD(a,(a%b) );
}

int main(){
int a,b,result;
cout<<"please enter first number :"<<endl;
cin>>a;
cout<<"please enter second number :"<<endl;
cin>>b;
result=GCD(a,b);
cout<<"the GCD of" << a <<"and"<< b << "is :" <<result;
return 0;
}

