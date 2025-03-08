#include <stdio.h>
#include <string.h>



int main ()
{
    long long int answer;

    int n; //number of questions
    scanf("%d", &n);

    long long int j; //loop variable
    
    int options[n];
    for (j=0; j<n; j++)
    {
        scanf("%d", &options[j]);
    }

    if (n==1)
    {
        answer = options[0];
    }

    if (n != 1)
    {
        long long int product[n];
        for (j=0; j<n; j++)
        {
            // product = 1;
            // product = j*options[j];
            // sum = sum + product - 1;
            if (j==0)
            {
                product[j]=options[j];
            }

            else
            {
                product[j] = (j+1)*(options[j]);
            }
        }

        long long int sum = 0;
        for (j=0; j<n; j++)
        {
            sum = sum + product[j];
        }

        

        answer = sum-n+1;
    }

    printf("%lli", answer);
    
}
