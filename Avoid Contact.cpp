#include <iostream>
#include <vector>
#include <set>
#include <numeric>
#include <cmath>

using namespace std;
#define pb push_back
#define mod 1000000007
#define ll          long long
#define endl        '\n'
#define vi          vector<int>

int main() {
   
    int tc; cin >> tc;
    while(tc--) {
       
         ll x, y;
 cin >> x >> y;

 ll ans = 0;
 if (x == y) {
    
  cout << y * 2 - 1<<endl;
 }

 else cout << y * 2 + (x - y)<<endl;
    }
}