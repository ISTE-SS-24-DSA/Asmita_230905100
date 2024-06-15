#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int i;
    vector<int> v;
    int n,val;
    cout<<"Type the number of elements in the vector: "<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        //accepting user inputs as elements in vector
        cout<<"enter the value at "<<i+1<<" position"<<endl;
        cin>>val;
        v.push_back(val);
    }
    //sorting the vector using inbuilt function
    sort(v.begin(),v.end());
    
   //printing the sorted vector 
   cout<<"The vector after sorting is: "<<endl;
   for(i=0;i<n;i++){
       cout<<v[i]<<endl;
   }
   
   //reversing the sorted vector
   reverse(v.begin(),v.end());
   
   //printing the reveresed vector
   cout<<"The reversed sorted vector is: "<<endl;
   for(i=0;i<n;i++){
       cout<<v[i]<<endl;
       
   }

    return 0;
}
