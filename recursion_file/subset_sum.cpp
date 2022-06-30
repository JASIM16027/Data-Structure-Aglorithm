#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>ans;
void subseq(int ind, vector<int>&v, vector<int>&temp,int sm){
        if(ind>=v.size()){
            if (sm==0){
                ans.push_back(temp);
            }
            
            return ;
        }
        

        temp.push_back(v[ind]);
        subseq(ind+1,v,temp,sm-v[ind]);
        temp.pop_back();
        subseq(ind+1,v,temp,sm);
}
int main(){
    vector<int>v={1,2,3};
    int sm=3;
    vector<int>temp_result;
    subseq(0,v,temp_result,sm);
    
    for(int i=0; i<ans.size(); i++){
    
        for(auto it: ans[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    
    }
    return 0;
}