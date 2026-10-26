
#include <iostream>
#include <string>
using namespace std;

string toBinary(int n) {
    if (n == 0) return "0";

    string binary = "";

    while (n > 0) {
        int remainder = n % 2;
        binary = to_string(remainder) + binary;
        n /= 2;
    }

    return binary;
}

string convertDateToBinary(string date) {
    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 2));
    int day = stoi(date.substr(8, 2));

    return toBinary(year) + "-" +
           toBinary(month) + "-" +
           toBinary(day);
}

int  main(){
   string date = "2080-02-29";
 cout << convertDateToBinary(date) << endl;

    return 0;
}
