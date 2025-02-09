#include <iostream>
using namespace std;

int prime_check(int n) {
    int p_check = 0;
    for (int i = 2; i <= n / 2; i++) 
    {
        if (n % i == 0) {
            p_check++;
            break;
        }
    }
    return p_check; 
}

// Function to print factors of the number
void print_factors(int n) {
    cout << "Factors of " << n << " are: 1";
    for (int i = 2; i <= n / 2; i++) 
    {
        if (n % i == 0) {
            cout << ", " << i;
        }
    }
    cout << ", " << n << endl;
}

// Function to find the next prime number
int next_prime(int n) {
    int value = n + 1;
    while (prime_check(value) != 0) 
    { 
        value++;
    }
    return value;
}

int main() {
    int num;
    cout << "Enter a number greater than 0: ";
    cin >> num;

    if (num == 1) 
    {
        cout << "Factor is 1." << endl;
        return 0;
    }

    if (prime_check(num) == 0) 
    {  
        cout << "Given number is a prime number." << endl;
        cout << "The next greater prime number is: " << next_prime(num) << endl;
    } 
    
    else 
    {  
        cout << "Given number is not a prime number." << endl;
        print_factors(num);
    }

    return 0;
}
