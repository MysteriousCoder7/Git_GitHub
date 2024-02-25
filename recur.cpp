#include<bits/stdc++.h>
using namespace std;
int func(int n){
    if(n==0){
        return 0;
    }
    func(n-1);
    cout<<n<<endl;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int N;
    cin>>N;
    func(N);
    return 0;
}