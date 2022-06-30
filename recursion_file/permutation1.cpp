#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>ans;
set<vector<int>>s;

void permute(vector<int>&v, int index){

    if(index == v.size()&& s.find(v)==s.end())
    {
        ans.push_back(v);
        s.insert(v);
        return ;
    }

    for(int i=index;i<v.size(); i++){
        //cout<<"first : "<<v[i]<<" "<<v[index]<<endl;
        swap(v[i],v[index]);
        permute(v,index+1);
        //cout<<" 2nd : "<<v[i]<<" "<<v[index]<<endl;
        swap(v[i],v[index]);
    }
    return ;

}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);

    for(auto &i: v){
        cin>>i;
    }
    permute(v,0);

    for(auto v: ans){
        for(auto i: v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}