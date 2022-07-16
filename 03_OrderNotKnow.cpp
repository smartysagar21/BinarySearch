#include <iostream>
#include <vector>

using namespace std;

int binary_search_reverse_sorted(vector<int> &v, int element){
	int lo=v.size()-1, hi=0;
  
  	while(hi<=lo){
		int mid=lo+(hi-lo)/2;
  
  		if(v[mid]==element){
			return mid;
		}else if(v[mid]>element){
    		hi=mid+1;
  		}else{
    		lo=mid-1;
  		}
  	}
	  
	return -1;
}

int binary_search(vector<int> &v, int element){
  int lo=0, hi=v.size()-1;
  
    while(hi>=lo){
    int mid=lo+(hi-lo)/2;
  
      if(v[mid]==element){
      return mid;
    }else if(v[mid]>element){
        hi=mid-1;
      }else{
        lo=mid+1;
      }
    }
    
  return -1;
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
  
  	if(n==1){
      if(v[0]==to_find){
        cout<<0<<endl;
      }
      else{
        cout<<-1<<endl;
      }
    }
    else if(v[0]<v[1]){
      cout<<binary_search(v, to_find)<<endl;
    }
    else{
      cout<<binary_search_reverse_sorted(v, to_find)<<endl;
    }
  
  	return 0;
}
