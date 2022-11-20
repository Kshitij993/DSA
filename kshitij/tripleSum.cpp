#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> triple(vector<int> a, int sum){
    vector<vector<int>> r;
    int i,j,k,currentSum;
    sort(a.begin(),a.end());
    for(i=0;i<=a.size()-3;i++){
        j=i+1;
        k=a.size()-1;
        while(j<k){
            currentSum=a[i];
            currentSum+=a[j];
            currentSum+=a[k];
            if(currentSum==sum){
                r.push_back({a[i],a[j],a[k]});
                j++;
                k--;
            }
            else if(currentSum>sum)
                k--;
            else
                j++;
        }
    }
    return r;
}
int main(){
    int n,i;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> a(n);
    cout<<"Enter array element : ";
    for(i=0;i<n;i++)
        cin>>a[i];

    int s;
    cout<<"Enter Target sum : ";
    cin>>s;

    vector<vector<int>> r=triple(a,s);
    for(auto x :r){
        for(auto j:x){
            cout<<j<<", ";
        }
        cout<<endl;
    }
}
