#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i< n;i++)
            cin >> v[i];
        int i=0,j=n-1;
        while(v[j]!=1)j--;
        while(v[i]!=1)i++;
        if(i == j){
            printf("0\n");
        }else{
            int ans = 0;
            for(int k = i;k < j;k++){
                if(v[k]==0) ans++;
            }
            printf("%d\n",ans);
        }
 
    }
    return 0;
}