#include<bits/stdc++.h>
using namespace std;
int a[10];
void fill(int num){
  int ge=0;
  while(num!=0){
   ge=num%10;
   a[ge]=1;
    num/=10;
 }
}
bool judge (){
   if(a[0]&&a[1]&&a[2]&&a[3]&&a[4]&&a[5]&&a[6]&&a[7]&&a[8]&&a[9]){
    return 1;
    }
   else{
    return 0;
    }
 }  

int main(){
    
	int num;
    cin>>num;
    memset(a,0,sizeof(a));
  	for(int i=0;i<num;i++){
      int x,y;
      cin>>x>>y;
      for(int i=x;i<=y;i++){
      fill(i);
      }
      if(judge()){
        cout<<"Yes"<<endl;
        a[10]={0};
      }
      else{cout<<"No"<<endl;
    }
    }
return 0;
}
