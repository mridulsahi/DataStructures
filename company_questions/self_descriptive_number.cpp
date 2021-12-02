// A self-descriptive number is an integer n in given base b is b digits long in which each digit at position p (the most significant digit being at position 0 and the least significant at position b – 1) counts how many times a digit p is in n. 
// For example in base 10, 6210001000 is a self descriptive number. 

#include <iostream>
using namespace std;

int selfdes(string s)
{
    for (int i = 0;i < s.size(); i++)
    {
        char temp_char = s.at(i);
        int b = temp_char - '0';
        int count = 0;
        for (int j = 0;
                 j < s.size(); j++)
        {
            int temp = s.at(j) - '0';
            if (temp == i)
            {
                count++;
            }
        }
        if (count != b)
            return 0;
    }
    return 1;
}

int main() {
	string s;
    cin>>s;
    cout << selfdes(s) << endl;
	return 0;
}
