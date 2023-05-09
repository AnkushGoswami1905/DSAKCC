#include<iostream>
using namespace std;
int main(){
    int i,n,sum1=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
        }
        for(i=0; i<n; i++){
        sum1+=a[i];
    }
    cout<<sum1<<endl;
    return 0;
}
