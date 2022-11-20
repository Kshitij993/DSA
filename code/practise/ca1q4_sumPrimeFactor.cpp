#include<iostream>
#include<set>

using namespace std;

int isPrime(int n){
    int c=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
            c++;
    }
    if(c==0)
        return 1;
    else
        return 0;
}
int sumPrimeFactors(int n){
    set<int> s;
    int sum=0;
    for(int i=2;i<=n/2;i++){
        if(isPrime(i)){
            if(n%i==0){
                s.insert(i);
                cout<<i<<" ";
            }
        }
    }
    for(int i:s)
        sum=sum+i;
    return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<"Sum Prime factors : "<<sumPrimeFactors(n);
}