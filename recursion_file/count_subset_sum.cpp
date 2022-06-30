#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>ans;
int subseq(int ind, vector<int>&v,int sm){
        if (sm<0) return 0;
        // condition satisfied
        if(ind>=v.size()){ 
            if (sm==0)
                return 1;
            //condition not satisfied
            else return 0;
        }
        
        int left  = subseq(ind+1,v,sm-v[ind]);
        int right = subseq(ind+1,v,sm);
        return left+right;
}
int main(){
    vector<int>v={1,2,3};
    int sm=3;
    int cnt = subseq(0,v,sm);
    cout<<"count = "<<cnt<<endl;
    
    return 0;
}