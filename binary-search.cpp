#include <iostream>
using namespace std;
int binarySearch(int arr[],int l,int r,int element){
    
    if(r+1==0){
        return -1;
    }
    while(l<=r){
        long int mid=l+(r-l)/2;
        
        //cout<<"mid: "<<mid<<" "<<arr[mid]<<endl;
        if(arr[mid]==element){
            return 1;
        }
        if(arr[mid]<element){
            l=mid+1;
            r=r;
        }
        else{
            l=l;
            r=r-1;
        }
    }
    return -1;
}
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    int element;
	    int arr[n];
	    cin>>n;
	    cin>>element;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cout<<binarySearch(arr,0,n-1,element)<<endl;
	}
	return 0;
}
