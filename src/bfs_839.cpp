#include<bits/stdc++.h>

using namespace std;

int visited[100005];
int dist[100005];
vector<int>resp;
double prob[100005];
double soma=0.0;
void bfs(vector<vector<int>>p,int inicio,double probi){
    queue<int>fila;
    fila.push(inicio);
    visited[inicio]=1;
    dist[inicio]=0;
    prob[1]=1;
    while(!fila.empty()){
        int s = fila.front();
        fila.pop();
        //cout << s << endl;
        int count = 0;
        for(auto v:p[s]){
            if(visited[v]==0){
                fila.push(v);
                //cout << v << " ";
                visited[v]=1;
                dist[v] = dist[s]+1;
                if(s==1){
                    prob[v] = ((1.0 / p[s].size()) * prob[s]);
                }
                else{
                    prob[v] = ((1.0 / (p[s].size()-1)) * prob[s]);
                }
                
               

                //cout <<"s="<<s <<" p[s].size()= "<< p[s].size() << " prob[s]= " << prob[s] << " v="<<v<<" dist[v] " << dist[v]<< endl;
                //cout << "prob[v]= " << prob[v] << endl;
                count++;
            }
        }
        if(count ==0){
            resp.push_back(s);
            soma+=prob[s]*dist[s];
        }
       // cout << endl;


    }


}


int main(){
    

    int n;
    cin >> n;
    vector<vector<int>> p(n+1);
    for(int i=0;i<n-1;i++){
        int a,b;
        cin >> a >> b;
        p[a].push_back(b);
        p[b].push_back(a);
    }
    bfs(p,1,1.0);
    /*for(int i=0;i<=n;i++){
        cout <<i<<" "<< dist[i] << endl;
    }
    cout << endl <<endl;
    */
    
    cout << fixed << setprecision(7)<<soma << endl;
    return 0;
}