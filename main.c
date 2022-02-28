#include <stdio.h>

extern float circle();
extern float triangle();
extern float trapezium();
extern float pentagon();
extern void red();
extern void reset();

int main(){
    int s;
    //Input the number of sides
    printf("\nEnter the number of sides: \n");
    scanf("%d", &s);
    
    if(s==0){
        printf("\nThe shape is a circle with '0' sides. \n");
        
        //Function call
        circle();
        main();
    }
    
    if(s==3){
        printf("\nThe shape is an equilateral triangle with '3' sides. \n");
        
        triangle();
        main();
    }
    
    if(s==4){
        printf("\nThe shape is a trapezium with '4' sides. \n");
        
        trapezium();
        main();
    }
    
    if(s==5){
        printf("\nThe shape is a regular pentagon with '5' sides. \n");
        
        pentagon();
        main();
    }
    
    else{
        red();
        printf("\nInvalid number of sides\n");
        reset();
        printf("\nEnter one of the following:\n0 - circle\n3 - equilateral triangle\n4 - trapezium\n5 - regular pentagon\n");
        main();
    }

}
