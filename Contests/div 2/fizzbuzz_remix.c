#include <stdio.h>

int countfb(int n)
{
    int count = (n/15)*3; 

    int rem = n%15;
    for (int i = 0; i <= rem; i++)
    {
        if (i % 3 == i % 5) count++;
    }

    return count;
}

int main()
{
    int t;
    scanf("%d", &t); 

    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%d\n", countfb(n));
    }

    return 0;
}
