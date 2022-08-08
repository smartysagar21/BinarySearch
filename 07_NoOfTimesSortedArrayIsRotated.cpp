#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

int main () {
  int n;
  cin>>n;

  int a[n];
  for(int i=0; i<n; i++){
    cin>>a[i];
  }

  int to_find;
  cin>>to_find;

  int ans=0;

  int lo=0, hi=n-1;
  while(hi>=lo){
    int mid=(hi+lo)/2;
    int next=(mid+1)%n;
    int prev=(mid+n-1)%n;

    if(a[mid]<=a[next] && a[mid]<=a[prev]){
      ans=mid;
      break;
    }
    if(a[0]<=a[mid]){
      lo=mid+1;
    }
    else if(a[mid]<=a[n-1]){
      hi=mid-1;
    }
  }

  cout<<ans<<endl;

  return 0;
}