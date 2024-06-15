#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int i;
    vector<int> v={24,35,12,7,14};
    vector<int>::iterator it;
    
    //Printing the vector using iterator
    cout<<"The vector elements are:"<<endl;
    for(it=v.begin();it!=v.end();++it){
        cout<<*it<<endl;
    }
    
    //Printing the reversed vector using reverse iterator
    cout<<"The reversed vector is:"<<endl;
    for(auto rit=v.rbegin();rit!=v.rend();++rit){
        cout<<*rit<<endl;
    }
    
   

    return 0;
}
