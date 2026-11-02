// #include <iostream>
// using namespace std;

// int main()
// {
// int n = 4;
// char ch = 'A';
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < i; j++)
//     {
//         cout << " ";
//     }

//     for (int j = 0; j < n - i; j++)
//     {
//         cout << ch;
//     }
//     ch++;
//     cout << endl;
// }

//     int n = 8;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = (n - i - 1); j > 0; j--)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << j + 1;
//         }
//         for (int j = i; j > 0; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }

// int n = 20;
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < (n - i - 1); j++)
//     {
//         cout << " ";
//     }
//     cout << "*";

//     for (int j = 0; j < (2 * i - 1); j++)
//     {
//         cout << " ";
//     }

//     for (int j = 0; j < i; j++)
//     {
//         if (j != 0)
//         {
//             continue;
//         }
//         cout << "*";
//     }

//     cout << endl;
// }

// for (int i = 1; i < n; i++)
// {
//     for (int j = 0; j < i; j++)
//     {
//         cout << " ";
//     }
//     cout << "*";

//     if (i != n - 1)
//     {
//         for (int j = (2 * (n - i) - 3); j > 0; j--)
//         {
//             cout << " ";
//         }
//         cout << "*";
//     }

//     cout << endl;
// }

//     int n = 20;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 0; j < 2 * (n - i - 1); j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = 0; i < 1; i++)
//     {
//         for (int j = 0; j <(2 * n); j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = n; j > i + 1; j--)
//         {
//             cout << "*";
//         }

//         for (int j = 0; j < 2 * (i + 1); j++)
//         {
//             cout << " ";
//         }

//         for (int j = n; j > i + 1; j--)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int sum(int n)
// {
//     int result = 1;
//     for (int i = n; i >=1; i--)
//     {
//         result *= i;
//     }

//     return result;
// }

// int main()
// {
//     int num;
//     cout << "Enter terms : ";
//     cin >> num;

//     cout << "factorial value of " << num << " is : " << sum(num) << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;

// // SUM OF NUMBER (Eg: "13456" = 1+3+4+5+6 )
// int sum(int n)
// {
//     int digitsum =0,lastdig;

//     while(n>0){
//         lastdig = n%10;
//         n=n/10;
//         digitsum += lastdig;
//     }
//     return digitsum;
// }

// int main()
// {
//     int num;
//     cout << "Enter term : ";
//     cin >> num;

//     cout << "sum of " << num << " is : " << sum(num) << endl;
//     return 0;
// }


// M1
// #include <iostream>
// using namespace std;

// // CALCULATE nCr;
// int sum(int n, int r)
// {
//     int nfact=1,rfact=1,n_rfact=1;
//     float result;

//     for(int i=n;i>1;i--){
//         nfact *=i;
//     }

//     for(int i=r;i>1;i--){
//         rfact *=i;
//     }

//     for(int i=(n-r);i>1;i--){
//         n_rfact *=i;
//     }

//     result = nfact/(rfact*n_rfact);

//     return result;
// }

// int main()
// {
//     int n,r;
//     cout << "Enter n : ";
//     cin >> n;

//     cout << "Enter r : ";
//     cin >> r;

//     cout << "Value of " << n << "C"<<r<<" is : "<< sum(n,r) << endl;
//     return 0;
// }


// M2
// #include <iostream>
// using namespace std;

// // CALCULATE nCr;
// int fact(int n)
// {
//     int nfact=1;
//     for(int i=n;i>1;i--){
//         nfact *=i;
//     }
//     return nfact;
// }

// int nCr(int n, int r){
//     int n_fact = fact(n);
//     int r_fact = fact(r);
//     int n_r_fact = fact(n-r);

//     return n_fact/(r_fact*n_r_fact);
// }

// int main()
// {
//     int n,r;
//     cout << "Enter n : ";
//     cin >> n;

//     cout << "Enter r : ";
//     cin >> r;

//     cout << "Value of " << n << "C"<<r<<" is : "<< nCr(n,r) << endl;
//     return 0;
// }