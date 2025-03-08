#include <stdio.h>
#include <string.h>

void answer (int asnwer[], int i, int n)
{
    char string[n+1];
    scanf("%s", string);
    
}

int main ()
{
    int t; //number of test cases
    scanf("%d", &t);

    int answer[t];

    int i;
    for (i=0; i<t; i++)
    {
        int n;
        scanf("%d", &n);
        function (answer, i, n);
    }
}