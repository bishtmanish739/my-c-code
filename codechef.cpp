#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t>0){

        int n=0;
        int k=0;;
        cout<<n<<k<<t;

        cin>>n;

        cin>>k;

      cout<<n<<k<<t;

        int * arr1 =new int [k];
        int * arr2=new int [k];
        int i=0;
        for(int i=0;i<k;i++){
            arr1[i]=arr2[i]=0;


        }
        int l=0;
         for(int i=0;i<n;i++){

            if(i<k){
                arr1[i]+=1;
            }
            if(i>=k){
                arr1[l++]+=1;
            }
            cout<<arr1[i]<<" ";

        }
        l=0;
        for(int i=0;i<n;i+k){
            if(i<n){
                arr2[l++]+=k;
            }
        }


        t--;
    }
	// your code goes here
	return 0;
}
