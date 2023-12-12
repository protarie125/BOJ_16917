#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

ll a, b, c, x, y;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> a >> b >> c >> x >> y;

  const auto q = min(x, y);
  const auto r = 2 * max(x, y);

  const auto sum1 = x * a + y * b;
  const auto sum2 = (x - q) * a + (y - q) * b + c * q * 2;
  const auto sum3 = c * r;

  auto ans = min(sum1, sum2);
  ans = min(ans, sum3);

  cout << ans;

  return 0;
}