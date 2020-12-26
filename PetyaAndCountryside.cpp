#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ans=1;
    for(int i=0;i<n;i++){
        int temp=1;
        for(int j=i-1;j>-1;j--){
            if(a[j+1]>=a[j]) temp++;
            else
            {
                break;
            }
            
        }
        for(int j=i+1;j<n;j++){
            if(a[j-1]>=a[j]) temp++;
            else
            {
                break;
            }
            
        }
        ans=max(ans,temp);
    }
    cout<<ans<<endl;
return 0;
}