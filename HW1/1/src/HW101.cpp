#include <iostream>
using namespace std;

int funA(int m,int n){
    if(m==0){
        return n+1;
    }
    else if(n==0){
        return funA(m-1,1);
    }
    else{
        return funA(m-1,funA(m,n-1));
    }
}

int main(){
    int m,n;
    while(cin>>m>>n){
        int ans=funA(m,n);
        cout<<ans<<"\n";
    }
    return 0;
}
