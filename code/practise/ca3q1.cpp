#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i:a){
        sum=sum+n*i;
    }
    sum=sum*2;
    cout<<"Sum= :"<<sum<<endl;
}