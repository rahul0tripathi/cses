/*
test	verdict	time (s)	
#1	ACCEPTED	0.14 / 1.00
*/

#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int  iteration = 0;
    cin>>iteration;
    while(iteration--){
       long long int x,y ;
        long long int mid_number = 0;
        cin>>x>>y;
        x -=1;
        y -=1;
       long long int largest = (x>y?x:y);
         mid_number=(largest*largest)+(largest+1);
        if(largest%2 == 0){
            if (x < y) {
                cout<<mid_number + (y - x)<<endl;
            } else {
                cout<< mid_number - (x - y)<<endl;
            }

        }
    else {
            if (x < y) {
               cout<<mid_number - (y - x)<<endl;
            } else {
                cout << mid_number + (x - y)<<endl;
            }

        }
    }

    return 0;
}
