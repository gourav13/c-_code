#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

map<int,vector<pair<int,int>> > m;
map<int,vector<pair<int,int>> >:: iterator it;
map<int,int> dist;
map<int,int> parent;
map<int,bool> visited;
int src;
void dj()
{
	queue<int> q;
	for(it=m.begin();it!=m.end();it++)
	{
		dist[it->first]=1000;
		parent[it->first]=it->first;
		visited[it->first]=false;
	}
    dist[src]=0;
	q.push(src);
	while(!q.empty())
	{
		int fi=q.front();
		q.pop();

		if(!visited[fi])
            {
			visited[fi]=true;
			cout<<m[fi].size()<<"size"<<endl;
                for(int i=0;i<m[fi].size();i++)
             { // cout<<fi<<" fi "<<dist[fi] <<" " <<dist[m[fi][i].s]<<" -> "<<dist[m[fi][i].f]<<endl;
                if(dist[fi]+m[fi][i].s<dist[m[fi][i].f])
                {dist[m[fi][i].f]=dist[fi]+m[fi][i].s;
                  q.push(m[fi][i].f);
                parent[m[fi][i].f]=fi;
                }
                //q.push(m[fi][i].f);
               // if(!visited[m[fi][i].f])

			 }
		    }
	}
	for(it=m.begin();it!=m.end();it++)
	{
		cout<<dist[it->first]<<" "<<it->first<<endl;	}

}
void addEdge(int x,int y,int w)
{
	m[x].push_back({y,w});
	m[y].push_back({x,w});
}

int main() {
     src=0;	// your code goes here
    addEdge( 0, 1, 4);
    addEdge( 0, 7, 8);
    addEdge( 1, 2, 8);
    addEdge( 1, 7, 11);
    addEdge( 2, 3, 7);
    addEdge( 2, 8, 2);
    addEdge( 2, 5, 4);
    addEdge( 3, 4, 9);
    addEdge( 3, 5, 14);
    addEdge( 4, 5, 10);
    addEdge( 5, 6, 2);
    addEdge( 6, 7, 1);
    addEdge( 6, 8, 6);
    addEdge( 7, 8, 7);
    dj();
}
