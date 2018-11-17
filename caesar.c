#include<cs50.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//ToDo:
        //Get key
        //Get plaintext message
        //Encipher
        //Print ciphertext

int main(int argc, string argv[])
{
    if (argc != 2) //argument count must = 2 otherwise prompt user for key
    {
        printf("./caesar + i\n");
        return 1; //if argument does NOT = 2 return false
    }

    int i = atoi(argv[1]); //converts string element argv[1] & converts to string

    printf("plaintext: "); //prompt user for plaintext string
    string plaintext = get_string(); //store string in variable plaintext

    printf("ciphertext: "); //output encoded message

    for (int a = 0; a < strlen(plaintext); a++) //iterate over every element in plaintext string (array)
    {
        if (isupper(plaintext[a])) //lowercase string array + key(i) -Ascii value % 26 + Ascii value of letter
        {
            printf("%c", (((plaintext[a] + i) - 65) % 26) + 65);
        }
        else if (islower(plaintext[a])) //uppercase string array + key(i) -(Av) % 26 + (Av) of letter
        {
            printf("%c", (((plaintext[a] + i) - 97) % 26) + 97);
        }
        else
        {
            printf("%c", plaintext[a]); //everything else print as is.
        }
    }

    printf("\n");

}