#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>ans;
bool subseq(int ind, vector<int>&v, vector<int>&temp,int sm){
        
        if(ind>=v.size()){
             // condition satisfied
            if (sm==0){
                ans.push_back(temp);
                return true;
            }
            //condition not satisfied
            else return false;
        }
        

        temp.push_back(v[ind]);
        if (subseq(ind+1,v,temp,sm-v[ind])==true) return true;
        temp.pop_back();
        if (subseq(ind+1,v,temp,sm)==true) return true;

        return false;
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