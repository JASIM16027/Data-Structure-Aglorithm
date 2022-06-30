#include<bits/stdc++.h>
using namespace std;

vector<vector<string>>ans;

void permute(vector<string>&v, int index){

    if(index == v.size())
    {
        ans.push_back(v);
        return ;
    }
    //tc - 0(n!n) space - 0(1) omit au 

    for(int i=index;i<v.size(); i++){
        cout<<"first : "<<v[i]<<" "<<v[index]<<endl;
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
    vector<string>v(n);

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