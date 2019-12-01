/*
test	verdict	time (s)	
#1	ACCEPTED	0.20 / 1.00
*/

#include <iostream>
using namespace std;
int main(){
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
        // for(long long int i=0;i<largest;i++){mid_number += 2*i;}
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
