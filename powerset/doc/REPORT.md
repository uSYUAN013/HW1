# HW1 超集

## 1.解題說明

使用遞迴計算一個集合的超集，先計算出一個集合的子集合，再將所有子集合合併成一個大集合，即為超集

以下為實作`HW102.cpp`的遞迴函式:

```cpp
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
然後，我們排除當前元素，並使用下一個index遞迴計算子集.*/
```

## 2.演算法設計與實作

```cpp
int main(){
    char Set[100];
    int n;
    cout<<"S is set of N elements.Input N:";
    while(cin>>n){ //輸入集合中有幾個元素
        char currentset[n]; //儲存當前子集的陣列
        for(int i=0;i<n;i++){ //輸入集合
            cin>>Set[i];
        }
        cout<<"{";
        powerset(Set,n,currentset,0,0); //呼叫遞迴函式
        cout<<"}\n";
    }
    return 0;
}
```

## 3.效能分析

### Worst Case

時間複雜度T(n)=O(n*2^n)

空間複雜度S(n)=O(n)

### Best Case

時間複雜度T(n)=O(n*2^n)

空間複雜度S(n)=O(n)

### Average Case

時間複雜度T(n)=O(n*2^n)

空間複雜度S(n)=O(n)

## 4.測試

### Input

```
a b c
```
### Output

```
{( a b c )( a b )( a c )( a )( b c )( b )( c )( )}
```
