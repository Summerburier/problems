#include<bits/stdc++.h>
using namespace std;
int  m[10000][10000];
int vis[10000];
int p,len;
long long ans=0;
void dfs(int n,int mode,int step){
    if(step==2){
    ans++;
    return;
    }
    if(vis[n]==0){
        step==0?:vis[n]=1;
        if(mode==1){
        for(int i=1;i<=p;i++){
          if(m[i][p]==1){
             dfs(i,-mode,++step);
          }
        }
        }
       if(mode==-1){
        for(int i=1;i<=p;i++){
          if(m[p][i]==1){
             dfs(i,-mode,++step);
          
          }  
       }
       }
       vis[n]=0;
    }
}
int main(){
cin >> p >> len;

for (int i = 1;i <= len ; i++){
  int x,y;
  cin >> x >> y;
  m[x][y]=m[y][x]=1;
}
for (int i = 0;i < len ; i++){
  dfs(1,1,0);
}
cout<<ans;
return 0;
}