#include <iostream>

using namespace std;

int main() {
    int a[5]={23,56,41,94,15};
    int i,max;
    max=a[0];
    for(i=0;i<5;i++){
        if (a[i]>max){
            max=a[i];
            break;
        }
    }
    cout<<"The largest element in the array is "<<max<<" at position "<<i+1<<endl;
    
    return 0;
}