/*
Number of Digits
Given the code to find out and return the number of digits present in a number recursively. But it contains few bugs, that you need to rectify such that all the test cases should pass.
Input Format :
Integer n
Output Format :
Count of digits
Constraints :
1 <= n <= 10^6
Sample Input :
 156
Sample Output :
3
*/
#include <iostream>
using namespace std;
int no_digits(int n)
{
    if(n/10==0)
        return 1;
    return 1+no_digits(n/10);
    
}
int main(){
    int n;
    cin>>n;
    cout<<no_digits(n);
}
