// #include <stdio.h>

// int multiply(int x, int y);

// int main() {
//     int product = multiply(4, 5); 
    
//     printf("The product is: %d\n", product);
//     return 0;
// }

// int multiply(int x, int y) {
//     return x * y;
// }



#include <stdio.h>
#include <string.h>

void printGreeting(char name[],char letter[]) {
    printf("Hello, %s %s is your letter you're looking for!",name,letter)    
}

int main() {
    char entr_name[20];
    int indx;    
    printf("Enter a string : ");
    scanf("%s",entr_name);

    printf("Enter a index : ");
    scanf("%d",&indx);

    size_t length = strlen(entr_name); 

    for(int i=0;i<length;i++){
        if(entr_name[i] = entr_name[indx]){
            printf("");
        }
    }
    
    printGreeting(entr_name,indx);
    return 0;
}

