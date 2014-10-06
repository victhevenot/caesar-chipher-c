#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, string argv[])
{ 
  int key = atoi(argv[1]);
  string words = GetString();
  
  for (int i = 0, n = strlen(words); i < n; i++)
  {        
      //DEALING WITH UPPERCASE STAYING UPPERCASE
      if (words[i] >= 65 && words[i] <= 90)
      {
        if (words[i] + key <= 90)
        { 
          // printf("GREATER THAN 90");
          printf("%c", words[i] + key);
        }
        else
        {
          if (key > 25)
            {
            int remainder = key % 25;
            
              if (words[i] + remainder <= 90)
              {

                printf("%c", words[i] + remainder);
              } 
              else
                {
                  int left_over = 90 - words[i];
                  int new_key = remainder - left_over;
                  printf("%c", 64 + new_key);
                }
              }
            else
              {
                if (words[i] + key > 90)
                {
                  int left_over = 90 - words[i];
                  int new_key = key - left_over;
                  printf("%c", 64 + new_key);
                }
              }

        } //ends else  
      }
      //DEALING WITH LOWERCASE STAYING LOWERCASE

      else if (words[i] >= 97 && words[i] <= 122)
      {
        if (words[i] + key <= 122)
        { 
          printf("%c", words[i] + key);
        }
        else
        {
          if (key > 25)
          {
            int remainder = key % 25;
            
            if (words[i] + remainder <= 122)
            {
              printf("%c", words[i] + remainder);
            } 
            else
            {
              int left_over = 122 - words[i];
              int new_key = remainder - left_over;
              printf("%c", 96 + new_key);
            }
          }
          else
            {
              if (words[i] + key > 122)
              {
                int left_over = 122 - words[i];
                int new_key = key - left_over;
                printf("%c", 96 + new_key);
              }
            }
          } //ends else  
      }

      else 
      {
        printf("%c", words[i]);
      }
  } // ends for

}

