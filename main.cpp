/*
 بسم الله الرحمن الرحيم

 Code by SerajOmar :)


     ███████ ███████ ██████   █████      ██████
     ██      ██      ██   ██ ██   ██       ██
     ███████ █████   ██████  ███████       ██
          ██ ██      ██   ██ ██   ██ ██    ██
     ███████ ███████ ██   ██ ██   ██ ████████
                                    ⠀    -HIM-
    LETS GOOOOO
 */
#include <bits/stdc++.h>
#define SerajOmar    ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define OneTest     solve();
#define MultipleTests     int t;cin>>t;while(t--){solve();}
#define ll  long long
#define vi   vector<ll>
#define vt(v,n,m)   vector<vector<int>> v(n, vector<int>(m));
#define pi  pair<ll,ll>
#define vp  vector<pi>
#define yes  cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;
#define input(n)    for(auto& i:n)cin>>i;
#define loop(from,to)   for(int i=from;i<to;i++)
#define loop2(from2,to2)   for(int j=from2;j<to2;j++)
#define all(v)  v.begin(),v.end()
#define STFU    return;
using namespace std;
void solve()
{
    ll n,m;
    cin>>n>>m;

    vi x,y;
    char c;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin>>c;
            if(c == '#')
            {
                x.push_back(i);
                y.push_back(j);
            }
        }
    }
    std::sort(x.begin(), x.end());
    std::sort(y.begin(), y.end());

    cout<<x[x.size()/2]<<" "<<y[y.size()/2]<<endl;

    STFU
}
int main()
{
    SerajOmar
    MultipleTests
}
/*
  CONSISTENCY.
  Nice To Meet U ^_^
*/