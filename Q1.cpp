//WAP TO PRINT PRIME NUMBERS OF 1 TO N USING WHILE LOOP.
//WAP TO PRINT FIBBONACHI SERIES TILL N TIMES USING DO WHILE LOOP.
//WAP TO PRINT ONLY BOUNDARIES ELEMENTS OF NxN Pattern.


#include <iostream>
using namespace std;

int main() {
    int n, i = 1, c;

    
    
    cout << "Enter the value of N: ";
    cin >> n;

    
    while (i <= n) {
        c = 1;  

        
        int j = 2;
        while (j <= i / 2) {
            if (i % j == 0) {
                c = 0;  
                break;
            }
            j++;
        }

       
        if (c == 1) {
            cout << i << " ";
        }

        i++;
    }

    return 0;
}

 
