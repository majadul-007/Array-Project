#include <stdio.h>
int max();
int min();
int avg();
// int max(void);
int i, arr[10], num;
int max(){
    int maxV;
     maxV = arr[0];
    for(i=1;i<num; i++){
        if(maxV<arr[i]){
            maxV = arr[i];

        }

    }
    printf("%d ", maxV);

    
}
int min(){
    int minV;
    minV = arr[0];
    for(i=1;i<num; i++){
        if(minV>arr[i]){
            minV = arr[i];
        }
        
    }
    printf("%d", minV);
}
int avg(){
    int avgV, sum = 0;
    for(i=0; i<num; i++){
        sum += arr[i];
    }
    avgV = sum /num;
    printf("%d", avgV);


}
int main(){
    
    printf("How much number of element you want to store in your array: "); scanf("%d", &num);
    for(i=0; i<num; i++){
        printf("Please enter the number %d value: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("want to to find the the maxium value of your array?It's: ");
    max();
    printf("\nThe minimum value of your array is: ");
    min();
    printf("\n");
    printf("Average vlaue of all the element is: ");
    avg();
    printf("\n");

    return 0;
}