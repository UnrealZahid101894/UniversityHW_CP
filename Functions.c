#include <stdio.h>
#include <math.h>

// Problem 1: Check if number is non-negative
int dec_value(int number);
int main() {
    int number, plus_minus;
    printf("Enter a number - ");
    scanf("%d", &number);
    plus_minus = dec_value(number);
    if (plus_minus == 1) {
        printf("non_negative\n");
    } else {
        printf("negative\n");
    }
    return 0;
}
int dec_value(int number) {
    return (number >= 0) ? 1 : -1;
}

// Problem 2: Check if number is positive, negative, or zero
int check_number(int x);
int main() {
    int x, result;
    printf("Enter a number - ");
    scanf("%d", &x);
    result = check_number(x);
    if (result == 1) printf("Positive\n");
    else if (result == -1) printf("Negative\n");
    else printf("Zero\n");
    return 0;
}
int check_number(int x) {
    return (x > 0) ? 1 : (x < 0) ? -1 : 0;
}

// Problem 3: Find the bigger of two numbers
int find_bigger(int x, int y);
int main() {
    int x, y;
    printf("Enter two numbers - ");
    scanf("%d %d", &x, &y);
    printf("%d\n", find_bigger(x, y));
    return 0;
}
int find_bigger(int x, int y) {
    return (x > y) ? x : y;
}

// Problem 4: Check if number is even or odd
int check_even_odd(int x);
int main() {
    int x;
    printf("Enter a number - ");
    scanf("%d", &x);
    printf("%s\n", check_even_odd(x) ? "Even" : "Odd");
    return 0;
}
int check_even_odd(int x) {
    return (x % 2 == 0);
}

// Problem 5: Check if number is a perfect square
int check_square(int x);
int main() {
    int x;
    printf("Enter a number - ");
    scanf("%d", &x);
    printf("%s\n", check_square(x) ? "Yes" : "No");
    return 0;
}
int check_square(int x) {
    int root = sqrt(x);
    return (root * root == x);
}

// Problem 6: Check if a character is a vowel, consonant, or other
int check_character(char ch);
int main() {
    char ch;
    printf("Enter a character - ");
    scanf(" %c", &ch);
    int result = check_character(ch);
    if (result == 1) printf("Vowel\n");
    else if (result == 2) printf("Consonant\n");
    else printf("Others\n");
    return 0;
}
int check_character(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') return 1;
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) return 2;
    return 0;
}

// Problem 7: Find the smallest of three numbers
int find_smallest(int x, int y, int z);
int main() {
    int x, y, z;
    printf("Enter three numbers - ");
    scanf("%d %d %d", &x, &y, &z);
    printf("%d\n", find_smallest(x, y, z));
    return 0;
}
int find_smallest(int x, int y, int z) {
    return (x < y && x < z) ? x : (y < z ? y : z);
}

// Problem 8: Find the middle number of three
int find_middle(int x, int y, int z);
int main() {
    int x, y, z;
    printf("Enter three numbers - ");
    scanf("%d %d %d", &x, &y, &z);
    printf("%d\n", find_middle(x, y, z));
    return 0;
}
int find_middle(int x, int y, int z) {
    if ((x > y && x < z) || (x < y && x > z)) return x;
    else if ((y > x && y < z) || (y < x && y > z)) return y;
    return z;
}

// Problem 9: Check if three sides form a triangle
int check_triangle(int a, int b, int c);
int main() {
    int a, b, c;
    printf("Enter three sides of a triangle - ");
    scanf("%d %d %d", &a, &b, &c);
    if (check_triangle(a, b, c)) printf("Triangle\n");
    else printf("Not a triangle\n");
    return 0;
}
int check_triangle(int a, int b, int c) {
    return (a + b > c && a + c > b && b + c > a);
}

// Problem 10: Check if a triangle is right-angled
int check_right_triangle(int a, int b, int c);
int main() {
    int a, b, c;
    printf("Enter three sides of a triangle - ");
    scanf("%d %d %d", &a, &b, &c);
    if (check_right_triangle(a, b, c)) printf("Right angled triangle\n");
    else printf("Triangle or Not a triangle\n");
    return 0;
}
int check_right_triangle(int a, int b, int c) {
    return (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a);
}

// Problem 11: Check if a year is a leap year
int check_leap_year(int year);
int main() {
    int year;
    printf("Enter a year - ");
    scanf("%d", &year);
    if (check_leap_year(year)) printf("Leap Year\n");
    else printf("Not a Leap Year\n");
    return 0;
}
int check_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Problem 12: Identify character type
int identify_character(char ch);
int main() {
    char ch;
    printf("Enter a character - ");
    scanf(" %c", &ch);
    int result = identify_character(ch);
    if (result == 1) printf("Alphabet\n");
    else if (result == 2) printf("Number\n");
    else printf("Others\n");
    return 0;
}
int identify_character(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) return 1;
    else if (ch >= '0' && ch <= '9') return 2;
    return 0;
}

// Problem 13: Sum of first n natural numbers
long long sum_natural(int n);
int main() {
    int n;
    printf("Enter a number - ");
    scanf("%d", &n);
    printf("%lld\n", sum_natural(n));
    return 0;
}
long long sum_natural(int n) {
    return (long long)n * (n + 1) / 2;
}

// Problem 14: Count even numbers from 0 to n
int count_even_numbers(int n);
int main() {
    int n;
    printf("Enter a number - ");
    scanf("%d", &n);
    printf("%d\n", count_even_numbers(n));
    return 0;
}
int count_even_numbers(int n) {
    return n / 2;
}

// Problem 15: Count odd numbers from 0 to n
int count_odd_numbers(int n);
int main() {
    int n;
    printf("Enter a number - ");
    scanf("%d", &n);
    printf("%d\n", count_odd_numbers(n));
    return 0;
}
int count_odd_numbers(int n) {
    return (n + 1) / 2;
}