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
// #define pb          push_back
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
  int s,ra,pa,rb,pb,c;
	cin >> s >> ra >> pa >> rb >> pb >> c;
  int mat[100][100];
	mems(mat);
	f(i,c)
	{
		int x,y;
		cin >> x >> y;
		mat[x][y]=1;
	}
	if(mat[2][2]==1)
	{
		cout << "Case #"<<T <<": 0\n";return;
	}
  if((ra==1 && pa==1 && rb==2 && pb==2) || (ra==2 && pa==1 && rb==2 && pb==2) || (ra==2 && pa==3 && rb==2 && pb==2))
	{
		cout << "Case #"<<T <<": ";
		if(c==0 || c==1)
		{
		    cout << -1 << '\n';
		}
		else
		{
		    cout << 0 << '\n';
		}
		return;
	}
	if((rb==1 && pb==1 && ra==2 && pa==2) || (rb==2 && pb==1 && ra==2 && pa==2) || (rb==2 && pb==3 && ra==2 && pa==2))
	{
		cout << "Case #"<<T <<": ";
		if(c==0 || c==1)
		{
		    cout << 1 << '\n';
		}
		else
		{
		    cout << 0 << '\n';
		}
		return;
	}
  cout << "Case #"<<T <<": "<< 2-c;
  cout << '\n';
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
