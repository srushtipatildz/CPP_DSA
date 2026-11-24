//Diamond Pattern!
#include <iostream>
using namespace std;
int main(){
int n=4;
for(int i=1;i<=n;i++){
    //spaces
    for(int j=1;j<=(n-i);j++){
        cout<<" ";
    }
    // star
    for(int k=1;k<=(i*2-1);k++){
        cout<<"*";
    }
    cout<<endl;
}
//inverted:
for(int i=n-1;i>=1;i--){
    //spaces
   for(int j=1;j<=(n-i);j++){
    cout<<" ";
}
    // star
    for(int k=1;k<=(i*2-1);k++){
        cout<<"*";
    }
    cout<<endl;
}
}
