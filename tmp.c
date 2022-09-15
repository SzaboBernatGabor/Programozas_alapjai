#include <stdio.h>
#include <math.h>

int main()
{
    int a = 5, b = 10;
    printf("K = %d \n", 2*a + 2*b);
    printf("T= %d \n", a*b);

    printf("\nSzamologep\n");
    printf("%d * %d = %d\n", 7, 3, 7*3);

    double c;
    c = a / b;
    printf("%d / %d = %.2f\n", a, b, c);
    scanf("%d, %d", &a, &b);
    printf("%d %% %d = %d\n", a, b, c);

    int r;
    double k, t, t2, s, pi = 3.14;
    printf("\nAdja meg a kor sugarat: ");
    scanf("%d", &r);
    t = r*r*pi;
    k = 2*pi*r;
    printf("\nA kor terulete: %f\n", t);
    printf("\nA kor kerulete: %f\n", k);

    printf("\nA háromszög oldalai: ");
    scanf("%d, %d, %d", &a, &b, &c);
    s = (double)(a + b + c) / 2;
    t2 = s*(s-a)*(s-b)*(s-c);
    t = sqrt(t2);
    printf("\nA haromszog terulete: %.2f, kerulete: %d\n", t, a+b+c);

    printf("\nA háromszög 2 befogója: ");
    scanf("%d, %d", &a, &b);
    c = sqrt(pow(a,2)+pow(b,2));
    printf("\nA háromszög átfogója: %lf", c);

    int x, tmp;
    printf("\nAdj meg egy számot: ");
    scanf("%d", &x);
    printf("\n%d abszolút értéke: %d", x, fabs(x));

    printf("\n Adj meg két számot:\n");
    printf("a : ");
    scanf("%d", &a);
    printf("b : ");
    scanf("%d", &b);
    tmp = a;
    a = b;
    b = tmp;
    printf("\nCsere után a = %d, b = %d\n", a, b);

    return 0;
}