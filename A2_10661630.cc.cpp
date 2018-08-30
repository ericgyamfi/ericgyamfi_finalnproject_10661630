#include <iostream>
using namespace std;

int main(){

int i,n;
bool prime =true;

cout<<"please enter an integer: "<<endl;
cin >> n;

for( i=2; i<=n/2; ++i){
    if( n % i == 0)
        prime = false;
        break;
}if(prime){
cout<<"your number is prime";

}else{
cout<<"your number is not prime";
}

return 0;
}
