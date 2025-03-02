#include <stdio.h>
#include <math.h>

int main() {

    //problem 1
    int a;
    printf("Enter a number: "); 
    scanf("%d", &a);
    printf("You entered: %d\n", a);  

    //problem 2
    float b;
    printf("\nEnter a number: "); 
    scanf("%f", &b);
    printf("You entered: %f\n", b);

    //problem 3
    char c;
    printf("\nEnter a character : ");
    scanf("%c",&d);
    printf("Your entered :%d\n",c);

    //problem 4
    int d;
    int e;
    printf("\nEnter first number: ");
    scanf("%d", &d);
    printf("Enter second number: ");
    scanf("%d", &e);
    printf("Sum of entered numbers: %d\n", d + e);

    //problem 5
    int f;
    int g;
    printf("\nEnter first number: ");
    scanf("%d", &f);
    printf("Enter second number: ");
    scanf("%d", &g);
    printf("Difference of entered numbers: %d\n", f - g);

    //problem 6      
    int h;
    int i;
    printf("\nEnter first number: ");
    scanf("%d", &h);
    printf("Enter second number: ");
    scanf("%d", &i);
    printf("Product of entered numbers: %d\n", h * i);

    //problem 7
    int j;
    int k;
    printf("\nEnter first number: ");
    scanf("%d", &j);
    printf("Enter second number: ");
    scanf("%d", &k);
    printf("Division of entered numbers: %d\n", j / k);

    //problem 8
    int l;
    int m;
    printf("\nEnter first number: ");    
    scanf("%d", &l);
    printf("Enter second number: ");
    scanf("%d", &m);    
    printf("Remainder of entered numbers: %d\n", l % m);

    //problem 9
    int n;
    int o;
    printf("\nEnter first number: ");
    scanf("%d", &n);    
    printf("Enter second number: ");
    scanf("%d", &o);
    printf("%d + %d = %d\n", n, o, n + o);
    printf("%d - %d = %d\n", n, o, n - o);
    printf("%d * %d = %d\n", n, o, n * o);
    printf("%d / %d = %d\n", n, o, n / o);
    printf("%d %% %d = %d\n", n, o, n % o);

    //problem 10
    int p;
    int q;
    printf("Enter two numbers: ");
    scanf("%d %d", &p, &q);
    printf("%d  %d \n", q,p );

    //problem 11
    int r;
    int s;
    printf("Base: ");
    scanf("%d", &r);
    printf("Height: ");
    scanf("%d",&s);
    printf("Area of triangle: %d", 1/2 * r *s);

    //problem 12
    float pie = 3.14;
    int t;
    printf("Radius:");
    scanf("%d",&t);
    printf("Area of circle:%f",pie*t*t);

    //problem 13
    double a, b, c, s, area;
    printf("Enter three sides of the triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of the triangle is: %.2lf\n", area);

    //problem 14
    int a,b;
    float pie = 3.14;
    printf("Radius:");
    scanf("%d",&a);
    printf("Height:");
    scanf("%d",&b);
    printf("volume of cylinder:%f",pie*a*a*b);

    //problem 15
    float pie = 3.14;
    int r;
    printf("Enter radius: ");
    scanf("%d",&r);
    printf("volume of sphere:%f",4/3*pie*r*r*r);

    //problem 16
    int a, b, temp;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap: a = %d, b = %d\n", a, b);
    

    




    return 0;
}
