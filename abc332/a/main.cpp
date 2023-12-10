// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>

#define rep(i, s, n) for (int i = s; i <= (int)(n); i++)
#define  all(v) v.begin(),  v.end()
#define rall(v) v.rbegin(), v.rend()
#define arrout(a, s, n) rep(i, s, n)cout<<a[i]<<" "; cout<<endl;
#define vecout(v) for(auto elm : (v))cout<<elm<<" "; cout<<endl;

using namespace std;

typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

int main(){
    cin.tie(nullptr);

    i32 N, S, K;
    cin >> N >> S >> K;

    i32 P, Q;
    i64 sum = 0;
    rep(i, 1, N){
        cin >> P >> Q;
        sum += P * Q;
    }

    if(sum < S){
        sum += K;
    }

    cout << sum << endl;
    return(0);
}