#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T; // Input the number of test cases

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z; // Input: X (assignments), Y (minutes per assignment), Z (days)

        // Calculate total time needed and total time available
        int total_time = X * Y;
        int available_time = Z * 1440; // 1440 minutes in a day

        // Check if Chef can complete all assignments
        if (total_time <= available_time) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }



    // int t;
    // cin>>t;
    // while(t--){
    //     int x, y,z;
    //     cin>>x>>y>>z;
        
    //     if(x*y<=z){
    //         cout<<"YES"<<endl;
    //     }

    //     else{
    //         cout<<"NO"<<endl;
    //     }
    // }
    return 0;
}