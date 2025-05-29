#include <iostream>
using namespace std;

int main(){

long a;
long b=1;
cout<<"Enter number : ";
cin>>a;

for( int i=0 ; i<=10 ; i++){
    b=i;
b*=a;
cout<<a<<"x"<<i<<" = "<<b<<endl;
}

cout<<"Your table is done.";

}