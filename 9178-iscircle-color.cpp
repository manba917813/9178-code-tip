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



//对于有向图，判断环,可以判断状态环以及颜色环


struct isCir{
    std::vector<std::vector<int>>g;
    std::vector<int>vi;int n;
    bool is1(int u){
        vi[u]=1;
        for(auto v:g[u]){
            if(vi[v]==0){if(!is1(v))return false;}
            else if(vi[v]==1)return false;
        }
        vi[u]=2;
        return true;
    }
    bool is(){
        for(int i=1;i<=n;i++)vi[i]=0;
        for(int i=1;i<=n;i++){
            if(vi[i]==0){if(!is1(i))return false;}
        }
        return  true;
    }
};



void sovle() {
    
}
signed main() {
     std::ios::sync_with_stdio(false);
     std::cin.tie(nullptr);
     // int T;std::cin>>T;while(T--)sovle();
     sovle();
    return 0;
}
