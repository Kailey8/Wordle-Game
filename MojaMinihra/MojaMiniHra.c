#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    char Word[6] = "apple";
    char Guess[6];

    printf ("Hello and Welcome to my version of the Worlde Game, really its just a learning Project and i wanna try learning from it as much as i can!\n");
    printf ("Rules : u try to Guess the Word that is 5 letters, if u get the letter right its (1), its in the word but badly place (0) and isnt in the word (-1)\n");
    printf ("Goodluck!\n");

    printf ("\n");
    
    for (int i = 0; i < 5; i++)
    {
        printf ("Your %d try: ", i + 1);

        for (int j = 0; j < 5; j++) {
            scanf (" %c", &Guess[j]);
        }

        for (int u = 0; u < 5; u++){
            if (Guess[u] == Word[u]) {
                printf("1,");
            }
            else {
                bool found = false;
                for (int k = 0; k < 5; k++) {
                    if (Guess[u] == Word[k]) {
                        found = true;
                        break;
                    }
                }
                if (found) {
                    printf ("0,");
                }

                else {
                    printf ("-1,");
                }



            }
            
        }
        printf("\n");
    }

    return 0;
}