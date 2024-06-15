#include <iostream>

using namespace std;

int main() {
    int i,n,isComp;
    isComp=0;
    
    cout<<"enter a number"<<endl;
    cin>>n;
    if(n==1){
        cout<<n<<" is neither prime nor composite"<< endl;
    }
    else{
    for(i=2;i<n;i++){
        if(n%i==0){
            isComp=1;

    } }
        
    if(isComp==0){
        cout<<n<<" is a prime number"<<endl;
        
    }   
    else{
        cout<<n<<" is a composite number"<<endl;
    }
    } 
    
    
    return 0;
}