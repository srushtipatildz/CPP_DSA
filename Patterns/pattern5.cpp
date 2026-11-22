//character pyramid pattern
#include<iostream>
using namespace std;
int main(){
int n=5;
char ch='A';
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<ch;
        ch++;
    }
    cout<<endl;
}
char character='A';
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<character; 
    }
     character++;
    cout<<endl;
}

}