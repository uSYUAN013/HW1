#include <iostream>
using namespace std;

void powerset(char set[],int n,char currentset[],int index,int currentsize){
    if(index==n){
        cout<<"( ";
        for(int i=0;i<currentsize;++i){
            cout<<currentset[i]<<" ";
        }
        cout<<")";
        return;
    }
    currentset[currentsize]=set[index];
    powerset(set,n,currentset,index+1,currentsize+1);
    powerset(set,n,currentset,index+1,currentsize);
}/*先將當前元素set[index]放入currentSet中，並使用下一個index遞迴計算子集.
然後，我們排除當前元素，並使用下一個索引遞迴計算子集.*/

int main(){
    char Set[100];
    int n;
    cout<<"S is set of N elements.Input N:";
    while(cin>>n){
        char currentset[n];//儲存當前子集的陣列
        for(int i=0;i<n;i++){
            cin>>Set[i];
        }
        cout<<"{";
        powerset(Set,n,currentset,0,0);
        cout<<"}\n";
    }
    return 0;
}
//參考chatgpt
