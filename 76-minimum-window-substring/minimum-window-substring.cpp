class Solution {
public:
    string minWindow(string s, string t) {
        int l=0,r=0,n=s.size(),m=t.size(),minl=1e9,start=-1,cnt=0;
        int hash[256]={0};
        for(int i=0;i<m;i++){
            hash[t[i]]++;
        }

        while(r<n){
            if(hash[s[r]]>0) 
            {
            cnt++;
            }
            hash[s[r]]--;

            while(cnt==m){
                if(r-l+1<minl){
                    minl=r-l+1;
                    start=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0){cnt--;}
                l++;
            }
            r=r+1;

        }
        return start==-1? "":s.substr(start,minl); 
    }
};