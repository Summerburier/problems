#include<bits/stdc++.h>
using namespace std;

int const maxn =100;
bool vis[maxn][maxn];
long long ans=0;
int dir[8][2]={{2,1},{1,2},{-2,1},{1,-2},{-1,2},{2,-1},{-1,-2},{-2,-1}};

bool check(int a,int b,int m,int n){
    if(!vis[a][b]&&a>=0&&a<=m&&b>=0&&b<=n){
        return 1;
    }
    else{
        return 0;
    }
}

void DFS(int a,int b ,int m,int n){
    
    if(a==m&&b==n){
        ans++;
        
    }
   if(check(a+1,b,m,n)){
        DFS(a+1,b,m,n);
   }
    if(check(a,b+1,m,n)){
        DFS(a,b+1,m,n);
    } 
    
}


int main(){
    int m,n;
    int a,b ;
    cin>>m>>n>>a>>b;
    memset(vis,0,sizeof(vis));
    vis[a][b]=1;
    for (int i=0 ;i<8;i++){
        if(check(a+dir[i][0],b+dir[i][1],m,n)){
            vis[a+dir[i][0]][b+dir[i][1]]=1;
        }
        
    }
    DFS(0,0,m,n);
    cout<<ans;
    return 0;
}




//在两个点TLE，这种题建议使用dp，不要使用DFS。