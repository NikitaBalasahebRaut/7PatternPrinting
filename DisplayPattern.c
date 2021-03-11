/*
 Problem statement :
 Write a program which accept number from user and display below pattern:
 
 Input :   (Row = 4 Columns = 4)
Output :
 
 *  *   *   *
 *  *   *   *
 *  *   *   *
 *  *   *   *
 
Input :    4, 5    ->  (Row = 4 Columns = 5)
Output :
  
  *  *   *   *  *
  *  *   *   *  *
  *  *   *   *  *
  *  *   *   *  *

 Input :    2, 6    ->  (Row = 2 Columns = 6)
 Output :
  
  *  *   *   *  *   *
  *  *   *   *  *   *

 printf("Roj 2 tas study");


 for(i = 1; i< = 31; i++)
 {
     printf("Roj 2 tas study");
 }


 for(j = 1; j<=8; j++)
 {
     for(i = 1; i< = 31; i++)
     {
         printf("Roj 2 tas study");
     }
 }

  ---------------------------------------------
  Display 1 * on screen          *
         
  printf("*");

  ---------------------------------------------
  
 Display 4 * on screen
 *   *   *   *

  for(i = 1; i<= 4; i++)
  {
     printf("*\t");
  }
  
  ---------------------------------------------
 
 Display below pattern
 *  *   *   *
 *  *   *   *
 *  *   *   *
 *  *   *   *
 
 
for(iCnt = 1; iCnt<= 4; iCnt++)
 {
    for(i = 1; i<= 4; i++)
    {
       printf("*\t");
    }
 }
 
 */
 
 
 #include<stdio.h>
 
 void DisplayPattern(int iValue1,int iValue2)
 {
   int i = 0;
   int j = 0;
   
   for(i = 1; i <= iValue1;i++)
   {
    for(j = 1; j <= iValue2; j++)
	{
	   printf("*\t");
	}
	printf("\n");       //new line after first row complete
   }
 }
 

 
 int main()
 {
   int iRow = 0;
   int iCol = 0;
   
   printf("Enter The No of rows \n");
   scanf("%d",&iRow);
   printf("Enter The No of colums \n");
   scanf("%d",&iCol);
   
   DisplayPattern(iRow,iCol);
 
 return 0;
 }
 
 /*
 
 output
 
 D:\ProgramTopicWise\LB\PatternPrinting\Pattern7>gcc DisplayPattern.c -o myexe

D:\ProgramTopicWise\LB\PatternPrinting\Pattern7>myexe
Enter The No of rows
4
Enter The No of colums
4
*       *       *       *
*       *       *       *
*       *       *       *
*       *       *       *

D:\ProgramTopicWise\LB\PatternPrinting\Pattern7>myexe
Enter The No of rows
2
Enter The No of colums
9
*       *       *       *       *       *       *       *       *
*       *       *       *       *       *       *       *       *

D:\ProgramTopicWise\LB\PatternPrinting\Pattern7>myexe
Enter The No of rows
3
Enter The No of colums
5
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *

D:\ProgramTopicWise\LB\PatternPrinting\Pattern7>myexe
Enter The No of rows
6
Enter The No of colums
2
*       *
*       *
*       *
*       *
*       *
*       *

*/