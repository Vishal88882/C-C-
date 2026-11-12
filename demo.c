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

// SWAPING ==================================================

// #include <stdio.h>

// void add(int *n, int *m)
// {
//     int temp;
//     temp = *n;
//     *n = *m;
//     *m = temp;
// }

// int main()
// {
//     int n = 6, m = 7;
//     int *ptr1 = &n;
//     int *ptr2 = &m;

//     printf("n : %d\nm : %d\n", n, m);
//     add(ptr1, ptr2);
//     printf("n : %d\nm : %d", n, m);
//     return 0;
// }

// MIN MAX AVG=============================================

// #include <stdio.h>

// void fun(int *array, int length, int *min, int *max, int *avg)
// {
//     int sum = 0;
//     *min = array[0];
//     *max = array[0];

//     for (int i = 1; i < length; i++)
//     {
//         if (array[i] > *max)
//         {
//             *max = array[i];
//         }
//         if (array[i] < *min)
//         {
//             *min = array[i];
//         }
//     }

//     for (int i = 0; i < length; i++)
//     {
//         sum += array[i];
//     }
//     *avg = sum / length;
// }

// int main()
// {
//     int arr[] = {3, 4, 54, 6, 7, 86};
//     int length = sizeof(arr) / sizeof(arr[0]);
//     int min, max, avg;

//     fun(arr, length, &min, &max, &avg);

//     printf("min : %d\nmax : %d\navg : %d\n", min, max, avg);

//     return 0;
// }

// Calculator using pointers=====================================================

// #include <stdio.h>

// void fun(int n, int m, int *sum, int *sub, int *mul, double *div, int cmd)
// {
//     if (cmd == 1)
//     {
//         *sum = n + m;
//     }
//     if (cmd == 2)
//     {
//         *sub = n -m;
//     }
//     if (cmd == 3)
//     {
//         *mul = n * (m);
//     }
//     if (cmd == 4)
//     {
//         *div = n / (m);
//     }
// }

// int main()
// {
//     int sum, sub, mul, cmd;
//     double div;
//     int x, y;
//     printf("Enter first number : ");
//     scanf("%d", &x);
//     printf("Enter second number : ");
//     scanf("%d", &y);

//     printf("Chosse Operation\n");
//     printf("Add ->1\nSub  ->2\nMultiplication ->3\nDivision ->4\n");
//     scanf("%d", &cmd);

//     fun(x, y, &sum, &sub, &mul, &div, cmd);

//     if(cmd == 1){
//         printf("sum : %d",sum);
//     }
//     if(cmd ==2){
//         printf("sub : %d",sub);
//     }
//     if(cmd ==3){
//         printf("mul : %d",mul);
//     }
//     if(cmd ==4){
//         printf("div : %f",div);
//     }

//     return 0;
// }

// Length of a string without using strlen()=======================
// #include <stdio.h>

// int main()
// {
//     char str[] = "HELLO WORLD";
//     int len = sizeof(str) / sizeof(str[0]) - 1;
//     printf("%d", len);
// }

// Reverse the string =============================================
// #include <stdio.h>

// int main()
// {
//     char str[] = "HELLO WORLD";
//     int len = sizeof(str) / sizeof(str[0]);
//     char temp;
//     char *start = &str[0];
//     char *end = &str[len-1];
//     while (start < end)
//     {
//         temp = *start;
//         *start = *end;
//         *end = temp;
//         start++;
//         end--;
//     }
//     for(int i=0;i<len;i++){
//         printf("%c", str[i]);
//     }
// }

// Count vowel and cosnonent==================================
// #include <stdio.h>

// int main()
// {
//     char str[] = "Count vowel and consonent";
//     int len = sizeof(str) / sizeof(str[0]);
//     int temp_len = len;
//     int vow = 0;
//     for (int i = 0; i < len; i++)
//     {
//         char word = str[i];
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
//         {
//             vow++;
//         }
//         if (str[i] == 'E' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'I')
//         {
//             vow++;
//         }else if(word == ' '){
//             temp_len--;
//             continue;
//         }

//     }
//     printf("length of string %d\n",len);
//     printf("vowels : %d\n", vow);
//     printf("Consonent : %d", temp_len - vow);
// }

// To count number of words in a sentence===============================================

// #include <stdio.h>

// int main()
// {
//     char str[] = "Black wolf jump over healthy hello bro can i help that sheep first!";
//     int len = sizeof(str) / sizeof(str[0]);
//     int temp=0;
//     for (int i = 0; i < len; i++)
//     {
//         if(str[i] == ' '){
//             temp++;
//         }
//     }
//     printf("Total words : %d",temp+1);

//     return 0;
// }

// To check a string palindrome===========================================================

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[] = "NITTIN";
//     // int len = sizeof(str) / sizeof(str[0]);
//     int len = strlen(str);
//     char temp_str[50];
//     strcpy(temp_str, str);

//     char *start = &str[0];
//     char *end = &str[len - 1];
//     char temp;

//     printf("Original string : %s\n", temp_str);
//     while (start < end)
//     {
//         temp = *start;
//         *start = *end;
//         *end = temp;
//         start++;
//         end--;
//     }

//     printf("Reversed string : ");
//     for (int i = 0; i < len; i++)
//     {
//         printf("%c", str[i]);
//     }

//     if (strcmp(temp_str, str) == 0)
//     {
//         printf("\nYes it's a palindorme string!");
//     }
//     else
//     {
//         printf("\nIt's not a palindorme string!");
//     }

//     return 0;
// }

// To copy a string in another without using stcpy=======================================================

// #include <stdio.h>

// int main()
// {
//     char str[] = "Hello world!";
//     char copy_str[50];
//     int i = 0;
//     while (str[i] != '\0'){
//         copy_str[i] =str[i];
//         i++;
//     }
//     copy_str[i] ='\0';

//     printf("%s\n", str);
//     printf("%s\n", copy_str);

//     return 0;
// }

// To count character in the string================================================================

// #include <stdio.h>
// #include <string.h>

// int main()
// {

//     char str[] = "Hello world";
//     int len = strlen(str);
//     int temp = 0;

//     for (int i = 0; i < len; i++)
//     {
//         if (str[i] == 'l' || str[i] == 'L')
//         {
//             temp++;
//         }
//     }
//     printf("L repeates %d times!", temp);
//     return 0;
// }

// To rempve white spaces from a string======================================================

// #include <stdio.h>

// int main()
// {
//     char str[] = "Hello World";

//     int i = 0, j = 0;

//     while (str[i] != '\0')
//     {
//         if (str[i] != ' ')
//         {
//             str[j] = str[i];
//             j++;
//         }
//         i++;
//     }
//     str[j] = '\0';

//     printf(str);
//     return 0;
// }

// To change case of characters===================================================
// see line number 1

// To remove the repeaating character froma word in a string=========================

// #include <stdio.h>

// int main(){
//     char str[] = "helllllo worllldddd ppytthonnn";
//     int i=0,j=0;

//     while(str[i] != '\0'){
//         if(str[i] != str[i+1]){
//             str[j] = str[i];
//             j++;
//         }
//         i++;
//     }
//     str[j] = '\0';

//     printf(str);
//     return 0;
// }

// To find the longest word in a string =======================================

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[50] = "a ab abc abcd abcde";
//     char word[50], longest_word[50];
//     int j = 0, i = 0;
//     while (str[i]  != '\0')
//     {
//         if (str[i] != ' ' && str[i] != '\0')
//         {
//             word[j] = str[i];
//             j++;
//         }
//         else
//         {
//             word[j] = '\0';
//             if (strlen(word) > strlen(longest_word))
//             {
//                 strcpy(longest_word,word);
//             }
//             j = 0;
//         }
//         if(str[i] == '\0'){
//             break;
//         }
//         i++;

//     }
//     printf(longest_word);

//     return 0;
// }

// to check angram ============================================================
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str1[100], str2[100];
//     int anagram = 1;

//     printf("Enter first word: ");
//     scanf("%99s", str1);

//     printf("Enter second word: ");
//     scanf("%99s", str2);

//     int len1 = strlen(str1);
//     int len2 = strlen(str2);

//     if (len1 != len2)
//     {
//         anagram = 0;
//     }
//     else
//     {
//         for (int i = 0; i < len1; i++)
//         {
//             int found = 0;
//             for (int j = 0; j < len2; j++)
//             {
//                 if (str1[i] == str2[j])
//                 {
//                     found = 1;
//                     str2[j] = '*';
//                     break;
//                 }
//             }

//             if (found == 0)
//             {
//                 anagram = 0;
//                 break;
//             }
//         }
//     }

//     if (anagram == 1)
//     {
//         printf("Result: 1 (They are anagrams!)\n");
//     }
//     else
//     {
//         printf("Result: 0 (Not anagrams.)\n");
//     }

//     return 0;
// }

