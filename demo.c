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
// #include <stdio.h>
// #include <string.h>

// char *toUpper(char ch[])
// {
//     int i = 0;

//     while (ch[i] != 0) // Better use '\0'
//     {
//         if (ch[i] > 96 && ch[i] < 123)
//         {
//             ch[i] = ch[i] - 32;
//         }
//         i++;
//     }
//     return ch;
// }

// char *toLower(char ch[])
// {
//     int i = 0;

//     while (ch[i] != 0) // Better use '\0'
//     {
//         if (ch[i] < 90 && ch[i] > 64)
//         {
//             ch[i] = ch[i] + 32;
//         }
//         i++;
//     }
//     return ch;
// }

// char *toSwipe(char ch[])
// {
//     int i = 0;

//     while (ch[i] != 0) // Better use '\0'
//     {
//         if (ch[i] > 96 && ch[i]<123)
//         {
//             ch[i] = ch[i] - 32;
//         }
//         else if (ch[i] < 90 && ch[i] > 64)
//         {
//             ch[i] = ch[i] + 32;
//         }
//         i++;
//     }
//     return ch;
// }

// int main()
// {
//     char character[500];

//     printf("Enter a string : ");
//     if (fgets(character,sizeof(character),stdin) != NULL) {
//         character[strcspn(character, "\n")] = '\0';
//     }

//     // fgets(character,sizeof(character),stdin);

//     printf("Your swiped string is : %s\n", toSwipe(character));
//     printf("Your Upper case string is : %s\n", toUpper(character));
//     printf("Your lower case string is : %s\n", toLower(character));

//     return 0;
// }

#include <stdio.h>

// int main()
// {

// int txt = 10;

// int *ptr1 = &txt;
// printf("%d\n",txt);
// printf("%d\n", *ptr1);
// printf("%p", ptr1);

// int a = 20;
// int b = 70;
// int c = 30;

// int *ptr1 = &a;
// int *ptr2 = &b;
// int *ptr3 = &c;

// printf("a = %d\n", a);
// printf("b = %d\n", b);

// Swaping

// *ptr1 +=*ptr2;
// *ptr2 = *ptr1-*ptr2;
// *ptr1 = *ptr2-*ptr1;

// printf("a = %d\n", a);
// printf("b = %d\n", b);

// if (*ptr1 > *ptr2 && *ptr1 > *ptr3)
// {
//     printf("%d is bigger", a);
// }
// else if (*ptr2 > *ptr1 && *ptr2> *ptr3)
// {
//     printf("%d is bigger", b);
// }
// else
// {
//     printf("%d is bigger", c);
// }

// int arr[] = {20, 30, 40, 50, 10, 90, 0};

// int length = sizeof(arr) / sizeof(arr[0]);
// int i = 0, temp;
// for(int i =0;i<length;i++){
//     printf("%d ",(arr[i]));
// }

// int *ptr1 = &arr[0];
// int *ptr2 = &arr[length - 1];

// while (ptr1 < ptr2)
// {
//     temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;

//     ptr1++;
//     ptr2--;
// }
// for (int i = 0; i < length; i++)
// {
//     printf("%d ", arr[i]);
// }

// int arr[] = {2, 31, 41, 50, 15, 90, 0};

// int length = sizeof(arr) / sizeof(arr[0]);
// int i = 0, even = 0, odd = 0;
// int *ptr1 = arr;

// for (int i = 0; i < length; i++)
// {
//     if (ptr1[i] % 2 == 0)
//     {
//         even++;
//     }
//     else
//     {
//         odd++;
//     }

// }
// printf("EVEN : %d\nODD : %d", even, odd);

// int arr[] = {2, 31, 41, 50, 15, 90, 0};

// int length = sizeof(arr) / sizeof(arr[0]);
// int *ptr1 = arr;
// int min, max;

// double a = 2.2;
// min = ptr1[0];
// max = ptr1[0];

// for (int i = 1; i < length; i++)
// {
//     if (ptr1[i] > max)
//     {
//         max = ptr1[i];
//     }
//     if (ptr1[i] < min)
//     {
//         min = ptr1[i];
//     }
// }

// printf("Minimum : %d\nMaximum : %d\n", min, max);

// int a = 5;
// int *ptr1 =&a;
// int **ptr2 = &ptr1;

// printf("%d\n",a);
// printf("%d\n",*ptr1);
// printf("%d\n",**ptr2);

//     return 0;
// }

// #include <stdio.h>

// void sortarr(int *array, int length)
// {
//     int new_arr[100];
//     int temp;

//     for (int i = 0; i < length - 1; i++)
//     {
//         for (int j = i+1; j < length; j++)
//         {
//             if (array[j] < array[i])
//             {
//                 temp = array[i];
//                 array[i] = array[j];
//                 array[j] = temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int arr[] = {2, 31, 41, 50, 15, 90, 0};
//     int length = sizeof(arr) / sizeof(arr[0]);
//     sortarr(arr, length);

//     for (int i = 0; i < length; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>

// int factorial(int n)
// {
//     int value;
//     if (n <= 1)
//     {
//         return 1;
//     }
//     value = n * factorial(n - 1);

//     return value;
// }
// int main()
// {
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);

//     int result = factorial(n);
//     printf("Result : %d", result);

//     return 0;
// }

// #include <stdio.h>

// int add(int n)
// {
//     int value;
//     if (n <=1)
//     {
//         return 1;
//     }
//     value = n + add(n - 1);

//     return value;
// }

// int main(){

//      int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);

//     int result = add(n);
//     printf("Result : %d", result);
//     return 0;
// }

// #include <stdio.h>

// int add(int n)
// {
//     int value;

//     if(n == 0){
//         return 0;
//     }
//     value  = n%10 + add(n/10);
//     return value;
// }

// int main(){

//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);

//     int result = add(n);
//     printf("Result : %d", result);
//     return 0;
// }

#include <stdio.h>

void add(int n, int m)
{
    int temp;
    temp = n;
    n = m;
    m = temp;
}

int main()
{
    int n = 6, m = 7;
    int *ptr1 = &n;
    int *ptr2 = &m;

    add(*ptr1, *ptr1);
    printf("n : %d\nm : %d", n, m);
    return 0;
}