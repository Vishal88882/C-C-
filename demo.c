// #include <stdio.h>

// void toUpper(char ch[], char newch[])
// {
//     int i = 0;

//     while (ch[i] != '\0')
//     {
//         if (ch[i] > 96)
//         {
//             newch[i] = ch[i] - 32;
//         }
//         else
//         {
//             newch[i] = ch[i];
//         }
//         i++;
//         newch[i] = '\0';
//     }

// }
// int main()
// {
//     char character[100];
//     char upresult[100];

//     printf("Enter a string : ");
//     scanf("%s", character);
//     toUpper(character, upresult);
//     printf("Your Upper case string is : %s", upresult);

//     return 0;
// }

// M2
#include <stdio.h>
#include <string.h>

char *toUpper(char ch[])
{
    int i = 0;

    while (ch[i] != 0) // Better use '\0'
    {
        if (ch[i] > 96 && ch[i] < 123)
        {
            ch[i] = ch[i] - 32;
        }
        i++;
    }
    return ch;
}

char *toLower(char ch[])
{
    int i = 0;

    while (ch[i] != 0) // Better use '\0'
    {
        if (ch[i] < 90 && ch[i] > 64)
        {
            ch[i] = ch[i] + 32;
        }
        i++;
    }
    return ch;
}

char *toSwipe(char ch[])
{
    int i = 0;

    while (ch[i] != 0) // Better use '\0'
    {
        if (ch[i] > 96 && ch[i]<123)
        {
            ch[i] = ch[i] - 32;
        }
        else if (ch[i] < 90 && ch[i] > 64)
        {
            ch[i] = ch[i] + 32;
        }
        i++;
    }
    return ch;
}

int main()
{
    char character[500];

    printf("Enter a string : ");
    if (fgets(character,sizeof(character),stdin) != NULL) {
        character[strcspn(character, "\n")] = '\0';
    }

    // fgets(character,sizeof(character),stdin);

    printf("Your swiped string is : %s\n", toSwipe(character));
    printf("Your Upper case string is : %s\n", toUpper(character));
    printf("Your lower case string is : %s\n", toLower(character));

    return 0;
}