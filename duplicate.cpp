#include <iostream>
#include<unordered_set>
#include<unordered_map>

using namespace std;
unordered_map<int ,int> mymap;
unordered_set<int  > myset;
int main() {
    int n;
    cin>>n;
    int arr[5]={3,3,-3,-3,3};
    for(int i=0;i<n;i++){
        if(mymap.find(-arr[i]!=mymap.end()){
            mymap.insert(arr[i]);

        else{
            cout<<arr[i]<<-arr[i]<<endl;
            mymap.second--;

        }
    }

    return 0;
}

