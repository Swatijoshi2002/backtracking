
#include<bits/stdc++.h>
using namespace std;

void permutation(string str,int l,int h)
{
    if(l==h)
    {
        cout<<str<<" ";
    }
    else{
        for(int i=l;i<=h;i++)
        {
            swap(str[i],str[l]);
            permutation(str,l+1,h);
            swap(str[i],str[l]);
        }
    }
}
int main()
{
   string s;
   cin>>s;
   int l=0;
   int h=s.length()-1;
   permutation(s,l,h);
    return 0;
}
