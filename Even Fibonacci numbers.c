//Program to find EVEN FIBONACCI NUMBERS.
int main() 
{
    int x=1,y=2,sum,limit;    // declare variable.
    int evensum=2;            // declare variable. 
    printf("Enter Limit: ");  
    scanf("%d",&limit);
    while( (x+y)<limit )     // using while loop.
    {
        sum=x+y;
        x=y;
        y=sum;
        if (sum%2==0)
        evensum+=sum;
    }
    printf("%d \n",evensum); // for print final output.
    return 0;
}
