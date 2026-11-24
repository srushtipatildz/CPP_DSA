//Butterfly pattern:
#include <iostream>
using namespace std;
int main(){
int n=4;
//First half:
for(int i=1;i<=n;i++){
    //star 01
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    //spaces
    for(int k=1;k<=(2*(n-i));k++){
        cout<<" ";
    }
    //star 02
    for(int l=1;l<=i;l++){
        cout<<"*";
    }
    cout<<endl;
}
//Lower Half:
for(int i=n;i>=1;i--){
    //star 01
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    //spaces
    for(int k=1;k<=(2*(n-i));k++){
        cout<<" ";
    }
    //star 02
    for(int l=1;l<=i;l++){
        cout<<"*";
    }
    cout<<endl;
}

}
