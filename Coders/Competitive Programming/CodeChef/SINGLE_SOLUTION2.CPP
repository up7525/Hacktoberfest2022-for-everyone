#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   string a;
	   cin>>a;
	    int count=0;
	    for(int i=0;i<n;i++){
	       count++;
	        if(a[i+1]==49)
	         break;
	    }
	    cout<<count;
	}
	return 0;
}
