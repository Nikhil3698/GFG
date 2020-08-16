#include<iostream>
#include<map>
#include<algorithm>
#include<set>
#include<limits.h>
#include<unordered_set>
using namespace std;
int a[1000];
int main()
{
  int n;
   cin>>n;
   unordered_set<int>s;
   
   for(int i=0;i<n;i++)
    cin>>a[i];
   int maxim=*max_element(a,a+n);

   for(int i=0;i<n;i++)
   {
   	if(s.find(a[i])==s.end())
   		s.insert(a[i]);
   	else
   	{
   		a[i]=maxim+1;
   		maxim++;
   		s.insert(maxim);
   	}
   } 

   for(int i=0;i<n;i++)
   	cout<<a[i]<<' ';
}