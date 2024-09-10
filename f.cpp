#include <bits/stdc++.h>
int majorityElement(vector<int> v) {
	int n=v.size();
	 map<int,int>count;
    int maxcount=0;
    int maxele=0;
    for(int i=0;i<n;i++)
    {
        count[v[i]]++;
    
    if(count[v[i]]>maxcount)
    {
        maxcount=count[v[i]];
        maxele=v[i];
    }
    }
    return maxele;
}
