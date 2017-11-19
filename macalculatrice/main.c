#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Les variables de la calculatrice
    float nombre1, nombre2, resultat;
    char operateur, question = 'o';

    // La boucle
    do
    {

        // Les saisies
        fflush(stdin);
        printf("\nSaisissez un premier nombre : ");
        scanf("%f", &nombre1);
        fflush(stdin);
        printf("\nSaisissez un deuxieme nombre : ");
        scanf("%f", &nombre2);
        fflush(stdin);
        printf("\nSaisissez un operateur : ");
        scanf("%c", &operateur);
        fflush(stdin);

        // Les verifications
        if (operateur == '+')
        {
            resultat = nombre1 + nombre2;
            printf("\%d + %d = %d", nombre1, nombre2, resultat);
        }
        else if (operateur == '-')
        {
            resultat = nombre1 - nombre2;
            printf("\%f - %f = %f", nombre1, nombre2, resultat);
        }
        else if (operateur == '*')
        {
            resultat = nombre1 * nombre2;
            printf("\%f * %f = %f", nombre1, nombre2, resultat);
        }
        else if (operateur == '/')
        {
            resultat = nombre1 - nombre2;
            if (nombre2 == 0)
            {
                printf("\nErreur. Veuillez saisir un denominateur non nul.");
            }
            else
            {
                printf("\%f / %f = %f", nombre1, nombre2, resultat);
            }
        }
        else
        {
            printf("\nErreur, vous devez saisir un operateur correct : +, -, * ou /.");
        }

        printf("\nSouhaitez vous faire un autre calcul ? (o ou n) : ");
        scanf("%c", &question);
    }
    while (question == 'o');
    return 0;
}

