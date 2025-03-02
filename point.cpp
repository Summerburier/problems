#include<bits/stdc++.h>
using namespace std;
void ArrayInvers1(int arr[],int n){
    for(int i=0 ;i<=n/2;i++){
        int temp;
        temp = arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    for(int i=0 ;i<n;i++){
       cout<<arr[i];
    }
    cout<<endl;
}
void ArrayInvers2(int *p,int n){
    for(int i=0 ;i<=n/2;i++){
        int temp;
        temp = *(p+i);
        *(p+i)=*(p+n-1-i);
        *(p+n-1-i)= temp;
    }
    for(int i=0 ;i<n;i++){
       cout<<*(p+i);
    }
    cout<<endl;
}
int main(){
    int array[10] ={ 3,7,9,11,0,6,7,5,4,2};
    ArrayInvers1(array,10);
    int *p = array;
    ArrayInvers1(p,10);
    ArrayInvers2(array,10);
}