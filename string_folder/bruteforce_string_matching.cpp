#include<bits/stdc++.h>
using namespace std;

int String_match(string txt, string p) {
        
        //check for all edge cases
        if(p.size()>txt.size())
            return -1;
        if(txt.size()==0 && p.size()==0)
            return 0;
        if(txt.size()==0)
            return -1;
        int n = txt.size()-p.size()+1;
        //apply brute force string matching algorithm
        for(int i=0;i<n;i++)
        {
            int j=0;
            while(txt[i+j]==p[j] && j<p.size())
            {
                j++;
            }
            if(j==p.size())
                return i;
            else
            {
                j=0;
            }
        }
        return -1;
    }

    int main(){
        string txt = "aaababbbababab";
        string p = "ababab";
        int res = String_match(txt,p);
        cout<<res<<endl;

        return 0;
    }