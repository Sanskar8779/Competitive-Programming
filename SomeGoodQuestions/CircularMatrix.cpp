//Print matrix in circular manner
// i.e. if matrix is    1  2  3  4 
//                      5  6  7  8
//                      9  10 11 12 
//                      13 14 15 16
//
//You have to print 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, n;
    m = 2, n = 2;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    int p = 0;
    int q = 0;
    int count = 0;
    while((p<m) && (q<n) && (count < m*n)){
        for(int j=q; j<n-q; j++){
            int i = p;
            cout<<arr[i][j]<<" ";
            count++;
        }
        p++;
        q++;
        for(int i=p; i<=m-p; i++){
            int j = n-q;
            cout<<arr[i][j]<<" ";
            count++;
        }
        for(int j=n-q-1; j>=n-(n-q)-1; j--){
            int i = m-p;
            cout<<arr[i][j]<<" ";
            count++;
        }
        for(int i=m-p-1; i>=m-(m-p); i--){
            int j = n-(n-q)-1;
            cout<<arr[i][j]<<" ";
            count++;
        }

    }
    

    return 0;
}