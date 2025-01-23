#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
//Chamar funções
int count_l(string t);
int count_w(string t);
int count_s(string t);

int main(void)
{
//input para o user
string t = get_string("Text:");
// letras
int l = count_l(t);
// palvras
int w = count_w(t);
// frases
int s = count_s(t);






    //Calcular L  e S
     float L = (float)l / w * 100;
     float S = (float)s / w * 100;
    //Calcular
    float ix =  0.0588 *  L - 0.296 * S - 15.8;

    int g = round(ix);


    //nivel de leitura
if (g < 1)
    {
        printf("Before grade 1");
    }
    else if (g >= 16)
    {
        printf("Grade 16+");
    }
    else
    {
     printf("Grade %i\n", g);
    }

return 0;
}
//função para contar letras
int count_l(string t)
{
    int count = 0;
    for (int i = 0, n = strlen(t); i < n; i++)
    {
        if (isalpha(t[i]))
        {
            count++;
        }
    }
    return count;
}

//função para contar palavras
int count_w(string t)
{
    int count = 1;
    for (int i = 0, n = strlen(t); i < n; i++)
    {
        if (isspace(t[i]))
        {
            count++;
        }
    }
    return count;
}

//função para contar frases
int count_s(string t)
{
    int count = 0;
    for (int i = 0, n = strlen(t); i < n; i++)
    {
        if (t[i] == '.' || t[i] == '!' || t[i] == '?')
        {
            count++;
        }
    }
    return count;
} 
