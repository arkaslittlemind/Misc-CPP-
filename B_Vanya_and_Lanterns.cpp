#include <iostream>
#include <iosfwd>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cassert>
#include <cctype>
#include <climits>
#include <vector>
#include <bitset>
#include <set>
#include <queue>
#include <math.h>
#include <stack>
#include <map>
#include <deque>
#include <string>
#include <list>
#include <iterator>
#include <sstream>
#include <complex>
#include <fstream>
#include <functional>
#include <numeric>
#include <utility>
#include <algorithm>
#include <assert.h>
#include <unordered_map>
#pragma GCC optimize ("-O3")

using namespace std;

#define watch(x) cout << (#x) << " = " << (x) << endl
#define PI double(2 * acos(0.0))
#define LL long long
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define INF 1e15
#define nline "\n"


int main()  {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

   int a,b,i,m=0;

    cin>>a>>b;

    int ar[100005];

    for(i=0; i<a; i++)

    {

        cin>>ar[i];

    }

    sort(ar,ar+a);

    for(i=0; i<a-1; i++)

    {

        if(ar[i+1]-ar[i]>m)

        {

            m=ar[i+1]-ar[i];

        }

    }

    double p,q,r,ans,ld;

    p=ar[0];

    q=(double)m/2;

    r=max(p,q);

    ld=b-ar[a-1];

    ans=max(r,ld);

    cout<<fixed<<setprecision(10)<<ans<<endl;
}