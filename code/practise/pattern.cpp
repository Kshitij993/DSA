#include<iostream>

using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=n;j>=1;j--)
            for(int k=1;k<=i;k++)
                cout<<j<<" ";
        cout<<endl;
    }
}