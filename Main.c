
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    //Declare Variables

    char S[100];
    char R='*';
    int  i,j;
    int k=0;
    int n;

    //getting user Input
    printf("Enter the string(S): ");
    gets(S);
    int len=strlen(S);

    for(int i = 0; i < len; ++i)
    {
         if( S[i] >= 'A' && S[i] <= 'Z')
         {
              printf("\nOnly lowercase characters are valid\n");
              return -1;
         }

         else
         {
           continue;
         }
    }

//Replacing all repeated characters with *

    for(i=0;S[i];i++)   //For loop iterates through the string until the character of the string is null.
     {
       if(!(S[i]==R))   //If the first character not equal to "*"
         {
          for(j=i+1;S[j];j++)   //Then compare the first character with the next characters to it.
            {                    //If matched then replace the matched elements with “*”
              if(S[i]==S[j])
               S[j]=R;
            }
         }

       }

//Remove all *  from the string

    for(i=0;S[i];i++){  //for loop iterates through the string until s[i] becomes to null,
        S[i]=S[i+k]; //initialize s[i]=s[i+k]

         if(S[i]==R)    //If s[i]  is matched with  ‘*’ then increase the k and decrease the index value i.
            {           //Here we are shifting the elements to left by removing ‘*’.
              k++;
              i--;
            }

      }


            printf("\n_______________________________________\n\n\n");
            printf("string after removing all duplicates: %s\n",S);    //Print the string.
            printf("\n\n_______________________________________\n");


    return 0;
}
