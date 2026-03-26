/*Відомість про результати зимової сесії містить інформацію:
прізвище та ініціали студента, номер групи, оцінки із 3-х предметів
а) мат аналізу
б) програмування
в) алгебри
написати програму що вводить інформацію  із відомомті друкує студентів що вчатся  на 4, 5
та друкує їхнє процентне співвіднощення з іншими */

#include <stdio.h>

   struct info{
        char PIB[15];
        int matan;
        int programming;
        int algebra;
    };
    
    
int main()
{
   int n;
    printf("Введіть кількість студентів:");
    scanf("%d",&n);
    
    struct info data[n];
    int grade[n];
    int count;
    
 
   for(int i = 0; i<n; i++){
       printf("Прізвище ініціали: ");
       scanf("%c",&data[i].PIB);
       printf("Матаналіз: ");
       scanf("%d",&data[i].matan);
       printf("Прізвище ініціали: ");
       scanf("%d",&data[i].programming);
       printf("Прізвище ініціали: ");
       scanf("%d",&data[i].algebra);
       
       grade[i] = (  data[i].algebra + data[i].matan + data[i].programming )/3;
   }
   for(int i = 0; i<n; i++){
       printf("студент %c порівняння з іншими:",data[i].PIB);
       for(int j = i+1; j<n; j++){
           int result = (  (grade[i] - grade[j]) / grade[j]  ) * 100;
           printf("%c",)
       }
   }
   
   

   
    return 0;
}
