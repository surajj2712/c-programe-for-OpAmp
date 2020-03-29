#include<stdio.h>
#include<math.h>
void main()
{
    float Ad, ACM, R1, R2, R3, Rf, Vo, Vi, A, res, res1, res2, res3, a, b, c, res6;
    char op;
    printf("enter the valid operation: \n");
    scanf("%c", &op);
    switch (op)
    {
    case 'C': printf("enter the open loop voltage gain & common mode voltage gain \n");
                 scanf("%f %f", &Ad, &ACM);
                 res=(Ad/ACM);
                 printf("CMRR= %f \n ",res); 
                 //double res;
                 res=20*(log(res));
                 printf("CMRR in decibels is %f db\n",res);   
        break;
    case 'O' : printf("enter R1, Rf & input voltage \n");
                 scanf("%f%f%f", &R1, &Rf, &Vi);
                 res=((Rf/R1)*(-1)*(Vi));
                 printf("Vo = %f\n",res);
        break;
    case 'A':printf("enter the coefficients of V1, V2, V3\n");
                 scanf("%f%f%f",&a,&b,&c);
                 Rf=1000;
                 res1=(Rf/a);
                 res2=(Rf/b);
                 res3=(Rf/c);
                 printf("R1= %f , R2= %f, R3= %f\n",res1,res2,res3);         
        break;
    default:     printf("invalid operation");
        break;
    }

    getchar();

}