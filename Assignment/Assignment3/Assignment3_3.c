///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name       : Assignment3_3.c
//  Description     : Accept the number from user and print Even factors of that number
//  Author          : Rutuja Bharat Varal
//  Date            : 21/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
    if (iNo <= 0)
    {
        return;
    }
int iCnt = 0 ;
for (iCnt =1 ; iCnt <= iNo/2 ; iCnt++)
{
    if ((iNo%iCnt)==0)
    {
        if ((iCnt % 2)==0)
        {
        printf("%d\t",iCnt);
        }

    }
 }
}
int main()
{
    int iValue = 0 ;
    
    printf("Enter your number\n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);


return 0;

}
