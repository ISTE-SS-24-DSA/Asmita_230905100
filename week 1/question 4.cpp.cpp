#include <iostream>

using namespace std;

int main() {
    int i,j,k;
   k=1;
    
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j<=i){
                cout<<k;
                cout<<" ";
                k++;
            }
            
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}