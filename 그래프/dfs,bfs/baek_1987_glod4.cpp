#include <iostream>
#include <string>
#define MAX 21
using namespace std;

int r,c;
string road;
char field[MAX][MAX];
bool visited[26];
int dy[4]={0,1,0,-1};
int dx[4]={1,0,-1,0};
int result=1;

int Big(int a, int b){
    if(a>b)
        return a;
    return b;
}

void Input(){
    cin>>r>>c;
    for(int i=0; i<r; i++){
        cin>>road;
        for(int j=0; j<c; j++){
            field[i][j]=road[j];
        }
    }
}

void DFS(int y, int x, int cnt){
    result=Big(result, cnt);
    for(int i=0; i<4; i++){
        int ny=y+dy[i];
        int nx=x+dx[i];
        
        if(ny>=0&&nx>=0&&ny<r&&nx<c){
            if(!visited[field[ny][nx]-'A']){
                visited[field[ny][nx]-'A']=true;
                DFS(ny, nx, cnt+1);
                visited[field[ny][nx]-'A']=false;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    Input();
    visited[field[0][0]-'A']=true;
    DFS(0,0,1);
    cout<<result<<endl;
    return 0;
}