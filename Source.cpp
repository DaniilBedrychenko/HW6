#include <iostream>
using namespace std;

int square(int x) {
    return x * x;
}

bool isEven(int x) {
    return x % 2 == 0;
}

int maxOfTwo(int a, int b) {
    return (a > b) ? a : b;
}

int sumToN(int n) {
    return n * (n + 1) / 2;
}

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int sumOfDigits(int n) {
    n = abs(n);
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int reverseNumber(int n) {
    int reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

void toBinary(int n, char* result) {
    if (n == 0) {
        result[0] = '0';
        result[1] = '\0';
        return;
    }
    char temp[32];
    int i = 0;
    while (n > 0) {
        temp[i++] = (n % 2) + '0';
        n /= 2;
    }
    for (int j = 0; j < i; j++) {
        result[j] = temp[i - j - 1];
    }
    result[i] = '\0';
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int a = 0, b = 1, fib;
    for (int i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return b;
}

int arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
