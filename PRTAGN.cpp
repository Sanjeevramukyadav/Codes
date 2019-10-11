#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;
void fastscan(long long &number) 
{ 
    bool negative = false; 
    register long long c; 
  
    number = 0; 
  
    c = getchar(); 
    if (c=='-') 
    { 
        
        negative = true; 
  
        c = getchar(); 
    } 
  
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
  
    if (negative) 
        number *= -1; 
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    fastscan(t);
    while(t--)
    {
        long long n,x;
        lli p,q,even=0,odd=0;
        fastscan(n);
        
        set<lli> s1; // declaring a set
	    set<lli> :: iterator it;
	    set<lli> :: iterator itr;
	    std::set<lli>::reverse_iterator itp;
	    for(int i=0;i<n;i++)
	    {
	        
	        
	        fastscan(x);
	        //z=s1.size();
	        set<lli>::iterator it = s1.find(x);
            if (it == s1.end())
            {
   
            
	        for ( itp = s1.rbegin(); itp != s1.rend(); itp++ )
            {
               
              
                      p=(*itp)^x;
                      itr= s1.find(p);
                      if(itr==s1.end())
                      {
                          q= __builtin_popcount(p);
                    
	                      if( q%2==0)
                          {
                             even++;
                          }
                          else
                          {
                             odd++;
                          }
                      }
                      s1.insert(p);
                
                       
            }
                s1.insert(x);
                q= __builtin_popcount(x);
                    
	            if( q%2==0)
                {
                    even++;
                }
                else
                {
                     odd++;
                 }
                      
            
            }
            printf("%lld\t%lld\n",even,odd) ; 
	    }
    }
   
	return 0;
}
