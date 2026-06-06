#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<iostream>
#include<cmath>
#include<random>
#include<algorithm>
#include<queue>
#include<vector>
#include<set>
#include<map>
#include<numeric>
#include<climits>
#include<string>
#include<stack>
#include<array>
#include<limits>
#define __builtin_popcount _mm_popcnt_u32
#define MAX_SIZE 2000009
#define HASHMOD 47
#define HASH_SIZE 1000000
typedef long long ll;
typedef int ii;
#define MOOD 998244353
// const ll Inf = 0x3f3f3f3f3f3f3f3f;
#define int ll 
#define int128 __int128
//。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。//
//     。         .          .         .          .
//    。。       . .        . .       . .        .
//   。  。     。  .      .   .     .   .      .
//  。    。   。    .    .     .   .     .    .
// 。      。 。      .  . . . . . .       .  .
//。        。         .          .         .
//。。。。。。。。。。。。。。。。。。。。。。。。。。。。。。//
#define MAXN 9100091
#define MOD 1000000007
// #define MOD  998244353
#define LON 62
using M=std::vector<std::vector<int>>;




void sovle() {
    //排序，去重，离散化，查找目标点的华丽操作
    int n;std::cin>>n;std::vector<std::pair<int,int>>v;
    for(int i=1;i<=n;i++){
        int sum,cnt;
        std::cin>>sum>>cnt;
        v.push_back({sum,cnt});
    }
    std::sort(v.begin(),v.end(),[](auto a,auto b){return a.first==b.first?a.second<b.second:a.first<b.first;});//排序
    v.erase(std::unique(v.begin(),v.end(),[](auto a,auto b){return a.first==b.first;}),v.end());//去重
    int target;std::cin>>target;//目标点
    //当前数组v是从小到大排序的，所以要写a.first<b
    auto pos=std::lower_bound(v.begin(),v.end(),target,[](auto a,int b){return a.first<b;})-v.begin();//找到目标点的位置，也就是这个目标点在这个数组rank
    //用处就是可以相对于map更快的查找某个数的次数
    //暑假前集训-dp-B就用到这个方法去优化map 
}
signed main() {
     std::ios::sync_with_stdio(false);
     std::cin.tie(nullptr);
     // int T;std::cin>>T;while(T--)sovle();
     sovle();
    return 0;
}
