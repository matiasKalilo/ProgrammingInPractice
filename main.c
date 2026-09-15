#include <stdio.h>
#include <string.h>
int main() {
    char municipality_name[100];
    char Mayer_name[100];
    int population;
    printf("==========================================\n");
    printf("   MUNICIPAL FINANCIAL MANAGEMENT SYSTEM  \n");
    printf("==========================================\n");
    printf("    Welcome to Windhoek Municipality      \n");
    printf("Enter your the Municipality name: " );
    fgets(municipality_name,sizeof(municipality_name),stdin);
    municipality_name[strcspn(municipality_name,"\n")]= '\0';
    printf("\nEnter Mayer's name:   ");
    fgets(Mayer_name,sizeof(Mayer_name),stdin);
    Mayer_name[strcspn(Mayer_name, "\n")]='\0';
    
    printf("\nEnter the Population: ");
    scanf("%d",&population);

    printf("\n===========================================");
    printf("\n          Formatted report                 ");
    printf("\n===========================================");
    printf("\nMunicipality name: %s",municipality_name);
    printf("\nMayer's name : %s",Mayer_name);
    printf("\nTotal population :%d",population);
    printf("\n===========================================");
    return 0;
}
