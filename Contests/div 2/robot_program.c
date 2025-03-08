#include <stdio.h>

int traverser (int count, char *string, int x, int k )
{
    int i; //loop variable

    if ((x != 0) && (k != 0))
        {
            while (string[i] != '\0')
            {
                if (string[i] == 'L')
                {
                    x--;
                    k--;

                    if (x == 0)
                    {
                        count++;
                        traverser(count, string, x, k);
                        
                    }
                }

                if (string[i] == 'R')
                {
                    x++;
                    k--;

                    if (x == 0)
                    {
                        count++;
                        traverser(count, string, x, k);
                    }
                }

                i++;
            }
            
        }

        if (k==0)
        {
            return count;
        }
}   
    

void f1 (int i, int answer[])
{
    int n, x, k;
    scanf("%d %d %d", &n, &x, &k);

    char string[n];
    scanf("%s", string);

    int count = 0;
    answer[i] = traverser(count, string, x, k);
}

int main ()
{
    int t;
    scanf("%d", &t);

    int answer[t];

    int i; //loop variable
    for (i=0; i<t; i++)
    {
        f1 (i, answer);
    }

    for (i=0; i<t; i++)
    {
        printf("%d\n", answer[i]);
    }
}
