#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<limits>
#include<algorithm>
#include<map>
#include<cmath>
using namespace std;
#define endl "\n"
#define ll long long
const int N = 1e5 + 5;
const unsigned int M = 1000000007;
ll a[N]; 
 
int main ()
{
  ios_base::sync_with_stdio (false);
  cin.tie (NULL);
  ll n; cin>>n;
  while(n!=1)
  { cout<<n<<' ';
    if(n%2==0)
      n/=2;
    else
      n*=3,n+=1;
  }
  cout<<1;


  return 0;
}


