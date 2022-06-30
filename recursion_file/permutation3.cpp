#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>ans;

void permute(vector<int>&v,vector<int>&temp,int visited[]){

    if(temp.size() == v.size())
    {
        ans.push_back(temp);
        return ;
    }

    for(int i=0;i<v.size();i++){
        if (visited[i]==0){
            
            temp.push_back(v[i]);
            visited[i]  = 1;
            permute(v,temp,visited);
            temp.pop_back();
            visited[i] = 0;

        }
    }


}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int> temp;

    for(auto &i: v){
        cin>>i;
    }
    int visited[v.size()]={0};

    for(int i=0;i<v.size();i++)
        visited[i]=0;

    permute(v,temp,visited);

    for(auto temp: ans){
        for(auto i: temp){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}