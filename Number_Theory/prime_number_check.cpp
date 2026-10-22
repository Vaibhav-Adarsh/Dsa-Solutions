#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPrime(int n) {
         if (n <= 1) {
            return false;
        }
        for(int i = 2; i<n; i++){
            if(n % i == 0) return false;
        }
        return true;
    }
};

int main(){
    Solution obj;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(obj.isPrime(n)){
        cout<< n << "is a prime number" << endl;

    } else{
        cout << n << "is not a prime number." << endl;
    }

    return 0;
}