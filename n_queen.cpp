#include<iostream>
using namespace std;
bool is_safe(int arr[8][8],int x,int y){
    for(int i=x, j=y;i<8&&i>=0&&j<8&&j>=0;i++){
            if(arr[i][j]==1){
                return false;
            }

    }

    for(int i=x, j=y;i<8 &&i>=0&&j<8&&j>=0;j++){
            if(arr[i][j]==1){
                return false;
            }

    }
    for(int i=x, j=y;i<8 &&i>=0&&j<8&&j>=0;j--){
            if(arr[i][j]==1){
                return false;
            }

    }
     for(int i=x, j=y;i<8 &&i>=0&&j<8&&j>=0;i--){
            if(arr[i][j]==1){
                return false;
            }

    }

     for(int i=x,j=y;i<8 &&i>=0&&j<8&&j>=0;j++,i++){
            if(arr[i][j]==1){
                return false;
            }

    }
    for(int i=x, j=y;i<8 &&i>=0&&j<8&&j>=0;j--,i++){
            if(arr[i][j]==1){
                return false;
            }

    }

    for(int i=x, j=y;i<8 &&i>=0&&j<8&&j>=0;j++,i--){
            if(arr[i][j]==1){
                return false;
            }

    }

    for(int i=x, j=y;i<8 &&i>=0&&j<8&&j>=0;j--,i--){
            if(arr[i][j]==1){
                return false;
            }

    }

    return true;


}
bool nqueen(int arr[8][8],int row, int collum){
    if(row==7&&collum==7){
        if(is_safe(arr,row,collum)){
            arr[row][collum]=1;
            for(int i=0;i<8;i++){
                for(int j=0;j<8;j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
            return true;
        }
        return false;
    }

    if(row>7||collum>7){
        return false;
    }
    for(int i=0;i<8;i++){
        if(is_safe(arr,i,collum)){
            arr[i][collum]=1;
            bool done=nqueen(arr,row+1,collum);
            if(done){
                return true;

            }
            bool k=nqueen(arr,row,collum+1);
            if(k){
                return true;
            }

            arr[i][collum]=0;

        }

    }
   return false;
}
int main(){

int arr[8][8]={0};




cout<<endl<<nqueen(arr,0,0);

return 0;



}
