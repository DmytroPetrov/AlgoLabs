#include <stdio.h>
#include <string.h>
#include <ctype.h>
//replacing words
void repl(char word_1[], char word_2[])
{
    int len_1 = strlen(word_1);
    int len_2 = strlen(word_2);
    char buff[len_1];
    int i;

    for (i = 0; i < len_1; i++)
    {
        buff[i]= word_1[i];
    }

    for (i = 0; i < len_2; i++)
    {
        word_1[i] = word_2[i];
    }
//clearing the other characters if there is ones
    for (i =0; i< len_1 - len_2; i++ )
    {
        word_1[len_2+i]= ' ';
    }
//END
    for (i = 0; i < len_1; i++)
    {
        word_2[i] = buff[i];
    }
//clearing the other characters if there is ones
    for (i =0; i< len_2 - len_1; i++ )
    {
        word_2[len_1+i]= ' ';
    }
//END
}
//END

//function that repairs my mistakes
void sort (char word_1[], char word_2[], int min, int y)
{

 if ((int) tolower(word_1[y]) > (int) tolower(word_2[y]))
    {
        repl(word_1, word_2);
    }else if ((int) tolower(word_1[y]) == (int) tolower(word_2[y]))
    {
        y++;
        sort(word_1, word_2, min, y);
    }
}
//END

int main()
{

    char s[255];
    char word[255][255];
    gets(s);
    int y, i, delim = 0, k = 0, n, j;
// split string to words
    for ( i=0 , n = strlen(s) ; i <= n ; i++)
    {
        if ( (s[i] == ' ' && isalpha(s[i+1]) )|| i == n)
        {
            for(y = delim, j = 0; y < i; y++, j++)
            {
                word[k][j] = s[y];
            }

            k++;
            printf("%d \n", k);
            delim = i;

            while(s[delim] == ' ')
            {
                delim ++;
            }
        }
    }
//END

//printing tokens of sentence
    for(i = 0; i< k; i++)
    {
        printf("%s\n", word[i]);
    }
//END

//sorting
int min;
 for(int u =0; u<k; u++)
    {
        for (i = 0; i < k -1; i++)
        {
            if (strlen(word[i]) < strlen(word[i+1]))
            {
                min = strlen(word[i]);
            }else
            {
                min = strlen(word[i+1]);
            }

            y=0;
            sort(word[i], word[i+1], min, y);
        }

    }
//END

printf("\n");
for(i = 0; i< k; i++)
    {
        printf("%s\n", word[i]);
    }
return 0;
}
