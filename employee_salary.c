# include<stdio.h>

int main(){
 double grossSalary;
 double netSalary;
 double houseAllowance;
 double transportAllowance;
 double vatTAX;

printf("Enter grossSalary:");
    scanf("%lf",&grossSalary);
    printf("\nEnter houseAllowance:");
    scanf("%lf",&houseAllowance);
 printf("\nEnter transport allowence:");
    scanf("%lf",&transportAllowance);
    vatTAX= grossSalary*0.25;

netSalary = grossSalary-(vatTAX+houseAllowance+transportAllowance);

    printf("\n ==========================\n");
    if(netSalary>=20000.00){
        printf("vatTAX:%.2f\n",vatTAX);
        printf("High Salary:%.2f",netSalary);
    }else{ printf("vatTAX:%.2f\n",vatTAX); printf("Stardand Salary:%.2f",netSalary);}
    return 0;
}