#include<bits/stdc++.h>

using namespace std;

#define max 100005
vector<int> graph[max];
double aleluia=0.0;
void dfs(int inicio,int pai,double prob,int alt){
    
        int filhos=0;
        for(auto p:graph[inicio]){
            if(p!=pai){
                filhos++;
            }
        }
        for(auto p:graph[inicio]){
            if(p!=pai){
                dfs(p,inicio,(prob*1.0)/filhos,alt+1);
            }
        }
        if(filhos==0){
            aleluia+=prob*alt;
        }

}


int main(){
    

    int n;
    cin >> n;
    
    for(int i=0;i<n-1;i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(0,0,1,0);
    cout <<fixed<<setprecision(7)<< aleluia << endl;

    return 0;
}