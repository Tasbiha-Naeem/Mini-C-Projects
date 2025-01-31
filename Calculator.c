#include<stdio.h>
#include<math.h>
#include<windows.h>
    void setColor(int color){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
    }
    int factorial(int n){
    	int factorial=1;
    	if(n==0){
    		return 1;
		}
		else{
		for(int i=1;i<=n;i++){
			factorial=factorial*i;
		}	
      }
      return factorial;
	}
	int calculatepower(int x,int y){
		return (int)pow(x,y);
	}
    int main(){
   double angle_degree;
    double angle_radian;
    int exit=1;
    setColor(14);
    printf("---------CALCULATOR----------\n");
    setColor(11);
	printf("Press 1 for addition (+).\n");
	setColor(11); 
	printf("Press 2 for subtraction (-).\n");
	setColor(11);
	printf("Press 3 for multiplication (*).\n");
	setColor(11);
	printf("Press 4 for division (/).\n");
	setColor(11);
	printf("Press 5 for factorial (!).\n");
	setColor(11);
	printf("Press 6 for square root (√x).\n");
	setColor(11);
	printf("Press 7 for cube root (3^√x).\n");
	setColor(11);
	printf("Press 8 for power (x^y).\n");
	setColor(11);
	printf("Press 9 for sine (sin x).\n");
	setColor(11);
	printf("Press 10 for cosine (cos x).\n");
	setColor(11);
	printf("Press 11 for tangent (tan x).\n");
	setColor(11);
	printf("Press 12 for modulus (%%).\n");
	setColor(11);
	printf("Press 0 for exit.\n");
	
	while(exit!=0){
	int choice;
	setColor(15);
	printf("Enter the choice:\n");
	scanf("%d",&choice);
	if(choice==0){
	printf("Program terminated".\n);
	return 1;
	}
	int total_terms;
	switch(choice){
		case 1:
			{
		total_terms=0;
		int add_number;
		setColor(10);
		printf("Enter the total no of terms you want to add:\n");
		scanf("%d",&total_terms);
		if(total_terms<=0){
			setColor(10);
			printf("Incorrect input.\n");
			return 1;
		}
		else{
			int sum=0;
			for(int i=1;i<=total_terms;i++){
				setColor(10);
				printf("Enter the number %d:\n",i);
				scanf("%d",&add_number);
				sum=sum+add_number;
			}
			setColor(10);
			printf("Sum is %d.\n",sum);
		}
		break;
			}
		case 2:{
			total_terms=0;
			int result;
			int number;
			setColor(4);
			printf("Enter the total no of terms you want to subtract:\n");
			scanf("%d",&total_terms);
			if(total_terms<=1){
			setColor(4);
			printf("Incorrect input\n");
			}
			setColor(4);
			printf("Enter the number:\n");
			scanf("%d",&result);
		   for(int i=2;i<=total_terms;i++){
			setColor(4);
				printf("Enter the number:\n");
				scanf("%d",&number);
				result=result-number;
			}
			setColor(4);
			printf("Difference is %d.\n",result);
			break;
		}
		case 3:
			{
			total_terms=0;
			int multiply_number;
			setColor(9);
			printf("Enter the total no of terms you want to multiply:\n");
			scanf("%d",&total_terms);
			if(total_terms<=0){
				setColor(9);
				printf("Incorrect input.\n");
				return 1;
			}
	        else{
	        	int product=1;
	        	for(int i=1;i<=total_terms;i++){
	        		setColor(9);
	        		printf("Enter the number %d:\n",i);
	        		scanf("%d",&multiply_number);
	        		product=product*multiply_number;
				}
				setColor(9);
				printf("Product is %d.\n",product);
			}
				break;
			}
		case 4:{
			total_terms=0;
			double result;
			setColor(6);
			printf("Enter the total no of terms you want to divide:\n");
			scanf("%d",&total_terms);
			double number;
			setColor(6);
			printf("Enter the number:\n");
			scanf("lf",result);
			for(int i=2;i<=total_terms;i++){
				setColor(6);
				printf("Enter the number:\n");
				scanf("%lf",&number);
				if(number==0){
					setColor(6);
					printf("Division is not possible by 0.");
					return 1;
				}
				result=result/number;
			}
			setColor(6);
			printf("Answer is %lf",result);
		    break;
		}
		case 5:{
		int factorial_number;
		total_terms=0;
		setColor(13);
		printf("Enter the total no of terms which you want to find the factorial:\n");
		scanf("%d",&total_terms);
		if(total_terms<=0){
			setColor(13);
			printf("Incorrect input.");
			return 1;
		}
		for(int i=1;i<=total_terms;i++){
			setColor(13);
			printf("Enter the number:\n");
			scanf("%d",&factorial_number);
			int fact=factorial(factorial_number);
			setColor(13);
			printf("The factorial of %d is %d.\n",factorial_number,fact);
		}
		break;}
		case 6:{
        double number;
        setColor(8);
        printf("Enter a positive number to find its square root:\n");
        scanf("%lf",&number);
        if(number>=0){
        double result=sqrt(number); 
        setColor(8);
        printf("Square root of %.2lf is %.2lf\n",number,result);
        }else{
        setColor(8);
        printf("Please enter a positive number.\n");
        }
        break;
      }
		case 7:{
       double number;
       setColor(10);
       printf("Enter a number to find its cube root:\n");
       scanf("%lf",&number);
       setColor(10);
       double result=cbrt(number); 
	   setColor(10);
       printf("Cube root of %.2lf is %.2lf\n",number,result);
       }
		break;
		case 8:{
			int answer=0;
			int base,power;
			setColor(4);
			printf("Enter the base:\n");
			scanf("%d",&base);
			setColor(4);
			printf("Enter the power:\n");
			scanf("%d",&power);
			answer=calculatepower(base,power);
			setColor(4);
			printf("%d raised to power %d is %d.\n",base,power,answer);
		    break;
		}
		
		case 9:{
			 angle_degree=0;
			 angle_radian=0;
			 setColor(14);
			 printf("Enter the degree:\n");
			 setColor(14);
			 scanf("%lf",&angle_degree);
			 angle_radian=angle_degree*M_PI/180;
			 setColor(14);
			 printf("Sin(%.2lf degrees)=%.4lf.\n",angle_degree,sin(angle_radian));
		     break;	
		}
		
		case 10:{
			 angle_degree=0;
			 angle_radian=0;
			 setColor(5);
		   	printf("Enter the degree:\n");
			scanf("%lf",&angle_degree);
			angle_radian=angle_degree*M_PI/180;
			setColor(5);
			printf("Cos(%.2lf degrees)=%.4lf.\n",angle_degree,cos(angle_radian));
		break;}
		case 11:{
			 angle_degree=0;
			 angle_radian=0;
			 setColor(14);
			printf("Enter the degree:\n");
			scanf("%lf",&angle_degree);
			angle_radian=angle_degree*M_PI/180;
			setColor(14);
			printf("Tan(%.2lf degrees)= %.4lf.\n",angle_degree,tan(angle_radian));
		break;}
		case 12:{
			int number1,number2;
			setColor(12);
			printf("Enter the value of number 1:\n");
			scanf("%d",&number1);
			setColor(12);
			printf("Enter the value of number 2:\n");
			scanf("%d",&number2);
			int remainder=number1%number2;
			setColor(12);
			printf("The remainder is %d.",remainder);
		    break;
		}
		default:{
		printf("Incorrect choice.\n");}
	}
	 printf("Press 1 to continue or press 0 for exit.\n");
	 scanf("%d",&exit);
	 if(exit==0){
		printf("Program terminated.\n");
	}
}
	return 0;
}
