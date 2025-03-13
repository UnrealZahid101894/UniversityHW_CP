#include <stdio.h>
#include <math.h>

int main() {


    // Problem 1
    int x;
    scanf("%d", &x);
    
    if (x >= 0)
        printf("Non-negative\n");
    else
        printf("Negative\n");


    // Problem 2
    scanf("%d", &x);
    
    if (x > 0)
        printf("Positive\n");
    else if (x < 0)
        printf("Negative\n");
    else
        printf("Zero\n");


    // Problem 3
    int y;
    scanf("%d %d", &x, &y);
    
    printf("%d\n", (x > y) ? x : y);


    // Problem 4
    scanf("%d", &x);
    
    printf("%s\n", (x % 2 == 0) ? "Even" : "Odd");


    // Problem 5
    scanf("%d", &x);

    int sqrt_x = sqrt(x);
    printf("%s\n", (sqrt_x * sqrt_x == x) ? "Yes" : "No");


    // Problem 6.1
    char ch;
    scanf(" %c", &ch);
    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("Vowel\n");
    else
        printf("Consonant\n");


    // Problem 6.2
    scanf(" %c", &ch);
    
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("%s\n", (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') ? 
                        "Vowel" : "Consonant");
    else
        printf("Others\n");


    // Problem 7
    int z;
    scanf("%d %d %d", &x, &y, &z);
    
    printf("%d\n", (x < y && x < z) ? x : (y < z) ? y : z);


    // Problem 8
    scanf("%d %d %d", &x, &y, &z);
    
    printf("%d\n", (x > y && x < z) || (x > z && x < y) ? x :
                   (y > x && y < z) || (y > z && y < x) ? y : z);


    // Problem 9
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a + b > c && a + c > b && b + c > a)
        printf("Triangle\n");
    else
        printf("Not a triangle\n");


    // Problem 10
    scanf("%d %d %d", &a, &b, &c);
    
    if (a + b > c && a + c > b && b + c > a) {
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
            printf("Right angled triangle\n");
        else
            printf("Triangle\n");
    } else {
        printf("Not a triangle\n");
    }


    // Problem 11
    int year;
    scanf("%d", &year);
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("Leap Year\n");
    else
        printf("Not a Leap Year\n");


    // Problem 12
    scanf(" %c", &ch);
    
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("Alphabet\n");
    else if (ch >= '0' && ch <= '9')
        printf("Number\n");
    else
        printf("Others\n");


    // Problem 13
    int n;
    scanf("%d", &n);
    
    long long sum = (long long)n * (n + 1) / 2;
    printf("%lld\n", sum);


    // Problem 14
    scanf("%d", &n);
    
    printf("%d\n", n / 2);


    // Problem 14 (Variant)
    scanf("%d", &n);
    
    printf("%d\n", (n * 2) / 2 + 1);


    // Problem 15
    scanf("%d", &n);
    
    printf("%d\n", (n + 1) / 2);

    return 0;
}

