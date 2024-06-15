#include <iostream>

using namespace std;

int main() {
    int i,j,k,n;
    k=1;
    cout<<"enter the number of rows "<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
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