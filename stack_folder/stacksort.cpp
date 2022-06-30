#include<bits/stdc++.h>
using namespace std;

void insertstack(vector<int>&v ,int temp){
    if(v.size()==0 || v[v.size()-1]<=temp){
        v.push_back(temp);
        return ;
    }

    int val = v[v.size()-1];
    v.pop_back();
    insertstack(v,temp);
    v.push_back(val);
    

}

void sortfunc(vector<int>&v,int n){
    if (v.size()==0){
        return ;
    }
    int val = v[v.size()-1];
    v.pop_back();
    sortfunc(v,n-1);
    insertstack(v,val);
}

int main(){
    vector<int>v{3,2,1,4,7,9,6,7};
    sortfunc(v,v.size());
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    return 0;
}