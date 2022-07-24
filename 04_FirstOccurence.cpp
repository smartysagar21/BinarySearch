#include <iostream>
#include <vector>

using namespace std;

int bs_first(vector<int> &v, int element){
  int lo=0, hi=v.size()-1;
  int result=-1;
  
    while(hi>=lo){
      int mid=lo+(hi-lo)/2;
  
      if(v[mid]==element){
        result=mid;
        hi=mid-1;
      }
      else if(v[mid]>element){
        hi=mid-1;
      }else{
        lo=mid+1;
      }
    }
    
  return result;
}

int main() {
  	int n;
  	cin>>n;
  
  	vector<int> v(n);
  	for(int i=0; i<n; i++){
    	cin>>v[i];
  	}
  
  	int to_find;
  	cin>>to_find;
  
  	int first_occur=bs_first(v, to_find);
    cout<<first_occur<<endl;
  
  	return 0;
}
