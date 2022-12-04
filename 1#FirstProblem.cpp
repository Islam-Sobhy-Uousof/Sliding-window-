/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<pair<int,int>> vp;
#define SUPERPOWER ios_base::sync_with_stdio(false); cout.tie(0);
#define cin(v) for(auto &i:v)cin>>i
#define cout(v) for(auto &i:v)cout<<i<< " "
#define ll long long
#define  el "\12"
#define format(n) fixed<<setprecision(n)
const int sz = 1e5 + 7;
int Lecture_Sleep(int arr[],bool sleep[],int n,int k)
{
    int window = 0;
    for(int i = 0; i < k; i++)
    {
        if(!sleep[i]) // 1 1 0 1 0 0
            window+=arr[i]; // 5
    }
    int l = 0, r = k;
    int res = window;
    while(r < n)
    {
        if(!sleep[r]) // 0 -> 1
            window+=arr[r];
        if(!sleep[l]) // 0 -> 1
            window-=arr[l];
        res = max(res,window);
        r++,l++;
    }
    for(int i = 0; i < n; i++)
    {
        if(sleep[i])
        {
            res+= arr[i];
        }
    }
    return res;
}

int main() {
int n,k;cin >> n >> k;
int arr[n];
bool sleep[n];
for(int i = 0; i < n; i++)cin >> arr[i];
for(int i = 0; i < n; i++)cin >> sleep[i];
cout << Lecture_Sleep(arr,sleep,n,k) << el;
  return 0;
}





