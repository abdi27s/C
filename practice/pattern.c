#include<stdio.h>
#include<stdbool.h>
void print_right_triangle(int n);
void print_pyramid(int n);
void print_inverted_rt(int n);
void print_inverted_pyramid(int n);

int main(){
    int n,pattern;
    bool isValid=false;
    printf("Enter no of rows in the pattern: ");
    scanf("%d",&n);

    do{
        printf("\nPlease select one :\n");
        printf("1. Right Angled Triangle\n");
        printf("2. Pyramid\n");
        printf("3. Inverted Right Angled Triangle\n");
        printf("4. Inverted Pyramid\n");
        scanf("%d",&pattern);
        switch(pattern){
            case 1:
                print_right_triangle(n);
                isValid=true;
                break;
            case 2:
                print_pyramid(n);
                isValid=true;
                break;
            case 3:
                print_inverted_rt(n);
                isValid=true;
                break;
            case 4:
                print_inverted_pyramid(n);
                isValid=true;
                break;
            default:
                printf("Invalid selection. Try Again...\n");
                break;
        }
    } while(isValid==0);
    return 0;
}

void print_right_triangle(int n){
    printf("Printing Right angles triangle of rows: %d\n",n);
    for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}

void print_pyramid(int n){
    printf("Printing Pyramid of rows: %d\n",n);
    for(int i=1;i<=n;i++){
        for(int s=0;s<(n-i);s++){
            printf(" ");
        }
        for(int j=0;j<(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
}

void print_inverted_rt(int n){
    printf("Printing Inverted Right angled triangle of rows: %d\n",n);
    for (int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }

}

void print_inverted_pyramid(int n){
    printf("Printing Inverted Pyramid of rows: %d\n",n);
    for(int i=n;i>0;i--){
        for(int s=n;s>i;s--){
            printf(" ");
        }

        for(int j=2*i-1;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
}
