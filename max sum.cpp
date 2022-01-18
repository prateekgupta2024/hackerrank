#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int arr[n],i,b;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=0;
    for(i=0;i<n;i++)
    {
        b+=arr[i];
        if(b>max)
        {
            max=b;
        }
        if(b<0)
        {
            b=0;
        }
    }
    cout<<max;
    return 0;
}
