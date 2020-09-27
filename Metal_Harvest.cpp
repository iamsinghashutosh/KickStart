#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int         long long
#define mod         1000000007
#define FAST        ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define f(i,n)      for(int i=0;i<n;i++)
#define fp(i,k,n)   for(int i=k;i<=n;i++)
#define fr(i,k,n)   for(int i=k;i>=n;i--)
#define pb          push_back
#define pii         pair<int,int>
#define vi          vector<int>
#define vii         vector<pii>
#define dbg(x)      cout << (#x) << " is " << (x) << '\n' 
#define F           first
#define S           second
#define sz(x)       (int)(x).size()
#define lb          lower_bound
#define ub          upper_bound
#define mems(x)     memset(x,0,sizeof(x))
#define all(a)      a.begin(),a.end()
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;

/*---------------------------------------------------------------------------------------------------*/

void solve(int T)
{
  int n,k;
	cin >> n >> k;
	vii tmp;
	f(i,n)
	{
		int z,y;
		cin >> z >> y;
		tmp.pb({z,y});
	}
	sort(all(tmp));
	vi v1,v2;
  f(i,sz(tmp))
	{
		v1.pb(tmp[i].F);
		v2.pb(tmp[i].S);
	}
	int ans=0;
	int st=v1[0];
	int pos=0;
	int flg=0;
	while(1)
	{
		if(pos==0)
		{
			int c=((v2[pos]-v1[pos]+k-1)/k);
			ans+=c;
			st+=(c*k);
		 if(ub(all(v1),st)==v1.end())
			{
			  if(pos==n-1 || v2[n-1]<=st)
					break;
				else
				{
						pos=n-1;
				}	
			}
			else
		   {
				 pos=ub(all(v1),st)-v1.begin();
				 pos--;
				 if(v2[pos]>st)
				 	continue;
				 else
				 	pos++;
			 }
		}
		else
		{
			if(v1[pos]>st)
				st=v1[pos];
			int c=((v2[pos]-st+k-1)/k);
			ans+=c;
			st+=(c*k);
			if(ub(all(v1),st)==v1.end())
			{
			  if(pos==n-1 || v2[n-1]<=st)
					break;
				else
				{
						pos=n-1;
				}	
			}
			else
		   {
				 pos=ub(all(v1),st)-v1.begin();
				 pos--;
				 if(v2[pos]>st)
				 	continue;
				 else
				 	pos++;
			 }
		}
	}
	cout << "Case #"<<T<<": "<<ans << '\n';
 return;
} 
signed main()
{
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  FAST
  int T=1;
  cin >> T;
  fp(i,1,T)
  {
    solve(i);
  }
  return 0;
}
