#include <iostream>
#include <vector>
#include <set>
#include <numeric>

#include <cmath>
#include <algorithm>
using namespace std;

#define pb push_back
#define mod 1000000007
#define ll          long long
#define endl        '\n'

#define vi          vector<int>
#define foi(n) for(ll i=0;i<n;i++)

#define vll    vector<ll>
#define all(a)               (a).begin(), (a).end()

void solve()
{
ll n;

 cin >> n;
 string st;

 cin >> st;
 if (n % 2 == 1) {
    
  cout << "No"<<endl;
  return;
 }

 vll cnt(26, 0);
 set <pair<ll, char>>s;

 foi(n) {
  cnt[st[i] - 'a']++;
  if (cnt[st[i] - 'a'] > n / 2) {
     
   cout << "No"<<endl;
   return;
  }
 
 }
 string ans = "", fin = "";
 foi(26) {
    
  s.insert({cnt[i], char(i + 'a')});
 }

 if (s.size() <= 1) {
  cout << "No"<<endl;
 
  return;
 }

 for (auto x : s) {
  foi(x.first) {
     
   if (ans.size() < n / 2)
  
    ans += char(x.second);
   else
  
    fin += char(x.second);
  }
 }

 reverse(all(fin));
 ans += fin;

 foi(n / 2) {
  if (ans[i] == ans[n - i - 1]) {
     
   cout << "No"<<endl;
   return;
  }
 
 }
 cout << "Yes" << endl;
 cout << ans<<endl;

}

int main() {
    
    int tc; cin >> tc;
   
    while(tc--) {
        
          solve();
    }
}
