#include<iostream>
#include<vector>
#include<climits>
#include<list>
using namespace std;
vector<int>ans;
list<int>l;
void maxWindowSubarray(int arr[], int n, int k){
    int i=0,j=0;
    while (j<n)
    {   //remove all the elements from list which are less the elm at j
        while(!l.empty() && l.back()<arr[j]){
            l.pop_back();
        }
        //push the curr max and elems after it...i.e. potential max elems
        l.push_back(arr[j]);
        if (j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            //push the max to ans array (which is stored in front of list)
            ans.push_back(l.front());
            //check if max elm is getting lost when moving the window
            if (l.front()==arr[i]){
                l.pop_front();
                //l.shift()
            }
            i++;
            j++;
        }
    }
    for(auto it: ans) cout<<it<<" ";
    
}
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    maxWindowSubarray(arr,n,k);
    return 0;
}