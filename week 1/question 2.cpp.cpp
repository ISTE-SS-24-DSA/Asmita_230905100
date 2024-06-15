#include <iostream>

using namespace std;

int main() {
    int a,rem,rev,n;
    cout<<"enter a number"<<endl;
    cin>>n;
    a=n;
    while(a!=0){
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    cout<<"the reversed number is "<<rev<<endl;
    return 0;
}