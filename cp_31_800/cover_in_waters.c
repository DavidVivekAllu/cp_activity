#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void finder (int t, int i, int answer[t], int n)
{
    char string[n+1];
    scanf("%s", string);  //taking input of the string

    int count = 0;
    int j;
    while (string[j] != '\0')
    {
        if ( (string[j]=='.') && (string[j+1]=='.') && (string[j+2]=='.') )
        {
            count = 2;
            break;
        }

        else
        {
            if (string[j]=='#')
            {
                count++;
            }
        }
        count = strlen(string) - count;
       
    }
    answer[i] = count;
}

int main ()
{
    int t; // number of test cases 
    scanf("%d", &t);

    int answer[t]; //array for storing answers for all the test cases

    int i; //loop variable
    for (i=0; i<t; i++)
    {
        int n; //length of the string
        scanf("%d", &n);
        finder (t, i, answer, n); //calling function which calculates the minimum number of operations
    }

    for (i=0; i<t; i++)
    {
        printf("%d\n", answer[i]);
    }
}