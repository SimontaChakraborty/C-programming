#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX 1000
#define PI 3.14159

//int global_helper;

int main()
{
    system("@cls||clear");
    printf("\t\t\t\tWELCOME TO SCIENTIFIC CALCULATOR\n\n\n");
    printf("\t\t\t\tPlease choose an option:\n");
    printf("\t\t\t\tPress 1. For Calculate\n");
    printf("\t\t\t\tPress 2. For Result\n");
    printf("\t\t\t\tPress 3. For Exit\n\n");
    int a;
    FILE *pt1, *pt2;
    printf("Enter Your Choice: ");
    scanf("%d", &a);
    if(a == 1)
    {
        calculate();
    }
    else if(a == 2)
    {
        pt2=fopen("results.txt","r");
        char res[500];
 //       global_helper++;
        while(fgets(res, 50, (FILE *)pt2))
        {
           // fgets(res, 50, (FILE *)pt2);
            printf("%s\n", res);
//            fscanf(pt2,"%s\n",res);
//            printf("%s\n",res);
            //i++;
//            if(feof(pt2))
//                break;
        }
        fclose(pt2);


        ///Edited Last Night from Here
        int c;
        printf("Do you wish to make more calculation? 1.YES 2.NO\n");
        scanf("%d", &c);
        if(c == 1) main();
        else printf("\nThank you for using the calculator\n\n\n");
    }
    else if(a==3){
        printf("\nThank you for using the calculator\n\n\n");
    }
    else{
        printf("Wrong Input!..Please Enter a valid Choice..\n");
        int c;
        printf("\nDo you wish to make more calculation? 1.YES 2.NO\n");
        scanf("%d", &c);
        if(c == 1) main();
        else printf("\nThank you for using the calculator\n\n\n");
    }
    ///Edited Last Night Till Here


    return 0;
}
void calculate()
{
    system("@cls||clear");
    printf("\t\t\tChoose any calculating option\n\n\t\t\tPress 1. For Numeric conversions\n\t\t\tPress 2. For Trigonometric function\n\t\t\tPress 3. For Factorial\n\t\t\tPress 4. For Permutation & Combination\n\t\t\tPress 5. For Polynomial Equation\n\t\t\tPress 6. For Simple operations\n\t\t\tPress 7. For Simple scientific operations\n");
    printf("\t\t\tPress 8. For Matrix Operations\n\t\t\tPress 9. For Vector Operations\n\t\t\tPress 10.For Solving Equations\n\t\t\tPress 11.For Main Menu\n");
    int a;
    printf("Enter Your Choice: ");
    scanf("%d", &a);
    if(a == 1)
    {
        Numeric();// global_helper++;
    }
    else if(a == 2)
    {
        Trigono();// global_helper++;
    }
    else if(a == 3)
    {
        Factorial();// global_helper++;
    }
    else if(a == 4)
    {
        pandc();// global_helper++;
    }
    else if(a == 5)
    {
        poly();// global_helper++;
    }
    else if(a == 6)
    {
        samop();// global_helper++;
    }
    else if(a == 7)
    {
        ssmo();// global_helper++;
    }
    else if(a == 8)
    {
     matrix(); // global_helper++;
    }
    else if(a == 9)
    {
     vectors(); // global_helper++;
    }
    else if(a == 10)
    {
     equations(); // global_helper++;
    }

    ///Edited Last Night From Here
    else if(a == 11)
    {
        main();
    }
    else
    {
        printf("Wrong Input!..Please Enter a valid Choice..\n");
    }
    int b;
    printf("Do you wish to make more calculation? 1.YES 2.NO\n");
    scanf("%d", &b);
    if(b == 1) calculate();
    else main();
    ///Edited Last Night Till Here
}
void Numeric()
{
    system("@cls||clear");

    /// Edited Last Night
    /// Added a previous Menu option in print.

    printf("\n\t\t\tPress 1.  For Binary to decimal\n\t\t\tPress 2.  for Binary to octal\n\t\t\tPress 3.  For Binary to hexadecimal\n\t\t\tPress 4.  For Decimal to binary\n\t\t\tPress 5.  For Decimal to octal\n\t\t\tPress 6.  For Decimal to hexadecimal\n\t\t\tPress 7.  For Octal to binary\n\t\t\tPress 8.  For Octal to decimal\n\t\t\tPress 9.  For Octal to hexadecimal\n\t\t\tPress 10. For Hexadecimal to binary\n\t\t\tPress 11. For Hexadecimal to octal\n\t\t\tPress 12. For Hexadecimal to decimal\n\t\t\tPress 13. For Previous Menu \n\n");
    int a;
    FILE *pt1, *pt2;
    pt1=fopen("results.txt","a");
    printf("Enter Your Choice: ");
    scanf("%d", &a);
    if(a == 1)
    {
        int  num, binary_val, decimal_val = 0, base = 1, rem;
        printf("Enter a binary number(1 and 0): \n");
        scanf("%d", &num); /* maximum five digits */
        binary_val = num;
        while (num > 0)
        {
            rem = num % 10;
            decimal_val = decimal_val + rem * base;
            num = num / 10 ;
            base = base * 2;
        }
        printf("Its decimal equivalent is = %d \n\n", decimal_val);
        fprintf(pt1,"Its decimal equivalent is = %d \n\n", decimal_val);
    }
    else if(a == 2)
    {
        long int binarynum, octalnum = 0, j = 1, remainder;
        printf("Enter the value for  binary number(1 and 0): \n");
        scanf("%ld", &binarynum);
        while (binarynum != 0)
        {
            remainder = binarynum % 10;
            octalnum = octalnum + remainder * j;
            j = j * 2;
            binarynum = binarynum / 10;
        }
        printf("Equivalent octal value: %lo\n\n", octalnum);
        fprintf(pt1,"Equivalent octal value: %lo\n\n", octalnum);
    }
    else if(a == 3)
    {
        long int binaryval, hexadecimalval = 0, i = 1, remainder;
        printf("Enter the binary number: ");
        scanf("%ld", &binaryval);
        while (binaryval != 0)
        {
            remainder = binaryval % 10;
            hexadecimalval = hexadecimalval + remainder * i;
            i = i * 2;
            binaryval = binaryval / 10;
        }
        printf("Equivalent hexadecimal value: %lX\n\n", hexadecimalval);
        fprintf(pt1,"Equivalent hexadecimal value: %lX\n\n", hexadecimalval);
    }
    else if(a == 4)
    {
        int number,cnt,i;
        int bin[32];
        printf("Enter decimal number: ");
        scanf("%d",&number);
        cnt=0;              /*initialize index to zero*/
        while(number>0)
        {
            bin[cnt]=number%2;
            number=number/2;
            cnt++;
        }
        /*print value in reverse order*/
        printf("Binary value is: ");
        for(i=(cnt-1); i>=0; i--)
            printf("%d",bin[i]);
        fprintf(pt1,"%d",bin[i]);
        printf("\n\n");
    }
    else if(a == 5)
    {
        int number,cnt,i;
        int oct[32];
        printf("Enter decimal number: ");
        scanf("%d",&number);
        cnt=0;              /*initialize index to zero*/
        while(number>0)
        {
            oct[cnt]=number%8;
            number=number/8;
            cnt++;
        }
        /*print value in reverse order*/
        printf("Octal value is: ");
        for(i=(cnt-1); i>=0; i--)
            printf("%d",oct[i]);
        fprintf(pt1,"%d",oct[i]);
        printf("\n\n");
    }
    else if(a == 6)
    {
        long int decimalNumber,remainder,quotient;
        int i=1,j,temp;
        char hexadecimalNumber[100];
        printf("Enter any decimal number: ");
        scanf("%ld",&decimalNumber);
        quotient = decimalNumber;
        while(quotient!=0)
        {
            temp = quotient % 16;
            //To convert integer into character
            if( temp < 10)
                temp =temp + 48;
            else
                temp = temp + 55;
            hexadecimalNumber[i++]= temp;
            quotient = quotient / 16;
        }
        printf("Equivalent hexadecimal value of decimal number %d: ",decimalNumber);
        for (j = i -1 ; j> 0; j--)
            printf("%c",hexadecimalNumber[j]);
        fprintf(pt1,"%c",hexadecimalNumber[j]);
        printf("\n\n");
    }
    else if(a == 7)
    {
        char octalnum[MAX];
        long i = 0;
        printf("Enter any octal number: ");
        scanf("%s", octalnum);
        printf("Equivalent binary value: ");
        fprintf(pt1,"Equivalent binary value: ");
        while (octalnum[i])
        {
            switch (octalnum[i])
            {
            case '0':
                printf("000");
                break;
            case '1':
                printf("001");
                break;
            case '2':
                printf("010");
                break;
            case '3':
                printf("011");
                break;
            case '4':
                printf("100");
                break;
            case '5':
                printf("101");
                break;
            case '6':
                printf("110");
                break;
            case '7':
                printf("111");
                break;
            default:
                printf("\n Invalid octal digit %c ", octalnum[i]);
            }
            i++;
        }
        printf("\n\n");
    }
    else if(a == 8)
    {
        long int octal, decimal = 0;
        int i = 0;
        printf("Enter any octal number: ");
        scanf("%ld", &octal);
        while (octal != 0)
        {
            decimal =  decimal +(octal % 10)* pow(8, i++);
            octal = octal / 10;
        }
        printf("Equivalent decimal value: %ld\n\n",decimal);
        fprintf(pt1,"Equivalent decimal value: %ld\n\n",decimal);
    }
    else if(a == 9)
    {
        int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};
        long long octal, tempOctal, binary, place;
        char hex[65] = "";
        int rem;
        place = 1;
        binary = 0;
        /* Input octal number from user */
        printf("Enter any octal number: ");
        scanf("%lld", &octal);
        tempOctal = octal;
        //Octal to binary conversion
        while(tempOctal > 0)
        {
            rem = tempOctal % 10;
            binary = (OCTALVALUES[rem] * place) + binary;
            tempOctal /= 10;
            place *= 1000;
        }
        //Binary to hexadecimal conversion
        while(binary > 0)
        {
            rem = binary % 10000;
            switch(rem)
            {
            case 0:
                strcat(hex, "0");
                break;
            case 1:
                strcat(hex, "1");
                break;
            case 10:
                strcat(hex, "2");
                break;
            case 11:
                strcat(hex, "3");
                break;
            case 100:
                strcat(hex, "4");
                break;
            case 101:
                strcat(hex, "5");
                break;
            case 110:
                strcat(hex, "6");
                break;
            case 111:
                strcat(hex, "7");
                break;
            case 1000:
                strcat(hex, "8");
                break;
            case 1001:
                strcat(hex, "9");
                break;
            case 1010:
                strcat(hex, "A");
                break;
            case 1011:
                strcat(hex, "B");
                break;
            case 1100:
                strcat(hex, "C");
                break;
            case 1101:
                strcat(hex, "D");
                break;
            case 1110:
                strcat(hex, "E");
                break;
            case 1111:
                strcat(hex, "F");
                break;
            }
            binary /= 10000;
        }
        strrev(hex);
        printf("Hexadecimal number: %s\n\n", hex);
        fprintf(pt1,"Hexadecimal number: %s\n\n", hex);
    }
    else if(a == 10)
    {
        char binarynum[MAX], hexa[MAX];
        long int i = 0;
        printf("Enter the value for hexadecimal: ");
        scanf("%s", hexa);
        printf("\nEquivalent binary value: ");
        fprintf(pt1,"\nEquivalent binary value: ");
        while (hexa[i])
        {
            switch (hexa[i])
            {
            case '0':
                printf("0000");
                break;
            case '1':
                printf("0001");
                break;
            case '2':
                printf("0010");
                break;
            case '3':
                printf("0011");
                break;
            case '4':
                printf("0100");
                break;
            case '5':
                printf("0101");
                break;
            case '6':
                printf("0110");
                break;
            case '7':
                printf("0111");
                break;
            case '8':
                printf("1000");
                break;
            case '9':
                printf("1001");
                break;
            case 'A':
                printf("1010");
                break;
            case 'B':
                printf("1011");
                break;
            case 'C':
                printf("1100");
                break;
            case 'D':
                printf("1101");
                break;
            case 'E':
                printf("1110");
                break;
            case 'F':
                printf("1111");
                break;
            case 'a':
                printf("1010");
                break;
            case 'b':
                printf("1011");
                break;
            case 'c':
                printf("1100");
                break;
            case 'd':
                printf("1101");
                break;
            case 'e':
                printf("1110");
                break;
            case 'f':
                printf("1111");
                break;
            default:
                printf("\n Invalid hexa digit %c ", hexa[i]);
            }
            i++;
        }
        printf("\n\n");
    }
    else if(a == 11)
    {
        char hex[20];
        printf("Enter Hexadecimal Number : ");
        scanf("%s",hex);
        printf("Equivalent Octal Value = %d\n\n",h2o(hex));
        fprintf(pt1,"Equivalent Octal Value = %d\n\n",h2o(hex));
    }
    else if(a==12)
    {
        long long decimalNumber=0;
        char hexDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8','9', 'A', 'B', 'C', 'D', 'E', 'F'};
        char hexadecimal[30];
        int i, j, power=0, digit;
        printf("Enter a Hexadecimal Number\n");
        scanf("%s", hexadecimal);
        /* Converting hexadecimal number to decimal number */
        for(i=strlen(hexadecimal)-1; i >= 0; i--)
        {
            /*search currect character in hexDigits array */
            for(j=0; j<16; j++)
            {
                if(hexadecimal[i] == hexDigits[j])
                {
                    decimalNumber += j*pow(16, power);
                }
            }
            power++;
        }
        printf("Decimal Number : %ld\n\n", decimalNumber);
        fprintf(pt1,"Decimal Number : %ld\n\n", decimalNumber);
    }

    ///Edited Last Night From Here
    else if(a == 13)
    {
        calculate();
    }
    else
    {
        printf("Wrong Input!..Please Enter a valid Choice..\n");
    }
    ///Edited Last Night Till Here

    fclose(pt1);
}
int h2o(char hex[])
{
    int i,len, dec=0, oct=0;
    for(len=0; hex[len]!='\0'; len++);
    for(i=0; hex[i]!='\0'; i++,len--)
    {
        if(hex[i]>='0' && hex[i]<='9')
        {
            dec= dec + (hex[i]-'0')*pow(16,len-1);
        }
        if(hex[i]>='A' && hex[i]<='F')
        {
            dec = dec + (hex[i]-55)*pow(16,len-1);
        }
        if(hex[i]>='a' && hex[i]<='f')
        {
            dec = dec + (hex[i]-87)*pow(16,len-1);
        }
    } /* Now dec contains the decimal value of given hexadecimal number. */
    i=1;
    while(dec!=0)
    {
        oct = oct + (dec%8)*i;
        dec = dec/8;
        i = i*10;
    }
    return oct;
}
void Trigono()
{
    system("@cls||clear");
    printf("\n\t\t\tPress 1. For Sin\n\t\t\tPress 2. For Cos\n\t\t\tPress 3. For Tan\n\t\t\tPress 4. For Sin Inverse\n\t\t\tPress 5. For Cos Inverse\n\t\t\tPress 6. For Tan Inverse\n\t\t\tPress 7. For Previous Menu\n\n");
    int a;
    FILE *pt1, *pt2;
    pt1=fopen("results.txt","a");
    printf("Enter Your Choice :  ");
    scanf("%d", &a);
    if(a==1)
    {
        float x;
        printf("Input x : ");
        scanf("%f",&x);
        x=x*PI/180;
        x=sin(x);
        printf("%2.4f\n\n",x);
        fprintf(pt1,"%2.4f\n\n",x);
    }
    else if(a==2)
    {
        float x;
        printf("Input x : ");
        scanf("%f",&x);
        x=x*PI/180;
        x=cos(x);
        printf("%2.4f\n\n",x);
        fprintf(pt1,"%2.4f\n\n",x);
    }
    else if(a==3)
    {
        float x;
        printf("Input x : ");
        scanf("%f",&x);
        x=x*PI/180;
        x=tan(x);
        printf("%2.4f\n",x);
        fprintf(pt1,"%2.4f\n",x);
    }
    else if(a==4)
    {
        float x;
        printf("Input x : ");
        scanf("%f",&x);
        x=asin(x);
        x=x*(180/PI);
        printf("%2.2f\n",x);
        fprintf(pt1,"%2.2f\n",x);
    }
    else if(a==5)
    {
        float x;
        printf("Input x : ");
        scanf("%f",&x);
        x=acos(x);
        x=x*180/PI;
        printf("%2.2f\n",x);
        fprintf(pt1,"%2.2f\n",x);
    }
    else if(a==6)
    {
        float x;
        printf("Input x : ");
        scanf("%f",&x);
        x=atan(x);
        x=x*180/PI;
        printf("%2.2f\n",x);
        fprintf(pt1,"%2.2f\n",x);
    }
    ///Edited Last Night From Here
    else if(a == 7)
    {
        calculate();
    }
    else
    {
        printf("Wrong Input!..Please Enter a valid Choice..\n");
    }
    ///Edited Last Night Till Here

    fclose(pt1);
}
void Factorial()
{
    FILE *pt1, *pt2;
    pt1=fopen("results.txt","a");
    int i,n;
    int fact=1;
    printf("Input n : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        fact=fact*i;
    printf("Factorial of this number is: %d\n\n",fact);
    fprintf(pt1,"Factorial of this number is: %d\n\n",fact);
    fclose(pt1);
}
void pandc()
{
    FILE *pt1, *pt2;
    pt1=fopen("results.txt","a");
    int n, r, ncr( int, int);
    long npr( int, int);
    long double fact( int);
    printf("Enter value of n & r (n>r):\n");
    scanf("%d %d",&n, &r);
    if( n>= r)
    {
        printf("%dC%d is %d\n", n,r,ncr(n,r));
        fprintf(pt1,"%dC%d is %d\n", n,r,ncr(n,r));
        printf("%dP%d is %ld\n\n", n,r,npr(n,r));
        fprintf(pt1,"%dP%d is %ld\n\n", n,r,npr(n,r));
    }
    else
    {
        printf("WRONG INPUT. Enter the correct input.\n\n");
    }
    fclose(pt1);
}
long double fact( int p)
{
    long double facts = 1;
    int i;
    for ( i = 1; i<= p; i++)
        facts = facts * i;
    return( facts);
}
int ncr ( int n, int r)
{
    return( fact( n) / (fact( r) * fact(n- r) ) ) ;
}
long npr( int n, int r)
{
    return( fact( n) / fact( n- r));
}
void poly()
{
    FILE *pt1, *pt2;
    pt1=fopen("results.txt","a");
    double a, b, c, determinant, root1,root2, realPart, imaginaryPart;
    printf("Enter coefficients a, b and c: \n");
    scanf("%lf %lf %lf",&a, &b, &c);
    determinant = b*b-4*a*c;
    // condition for real and different roots
    if (determinant > 0)
    {
        // sqrt() function returns square root
        root1 = (-b+sqrt(determinant))/(2*a);
        root2 = (-b-sqrt(determinant))/(2*a);
        printf("root1 = %.2lf and root2 = %.2lf\n\n",root1, root2);
        fprintf(pt1,"root1 = %.2lf and root2 = %.2lf\n\n",root1, root2);
    }
    //condition for real and equal roots
    else if (determinant == 0)
    {
        root1 = root2 = -b/(2*a);
        printf("root1 = root2 = %.2lf\n\n", root1);
        fprintf(pt1,"root1 = root2 = %.2lf\n\n", root1);
    }
    // if roots are not real
    else
    {
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-determinant)/(2*a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi\n\n", realPart, imaginaryPart, realPart, imaginaryPart);
        fprintf(pt1,"root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi\n\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
    fclose(pt1);
}
void samop()
{
    FILE *pt1, *pt2;
    pt1=fopen("results.txt","a");
    system("@cls||clear");
    printf("\n\t\t\tPress 1. For Addition\n\t\t\tPress 2. For Subtraction\n\t\t\tPress 3. For Multiply\n\t\t\tPress 4. For Division\n\t\t\tPress 5. For Previous Menu\n\n");
    int a;
    printf("Enter Your Choice : ");
    scanf("%d", &a);
    if(a==1)
    {
        int i,e;
        float f,sum=0;
        printf("Enter the no you want to add\n");
        scanf("%d",&e);
        printf("Enter the no:\n");
        for(i=0; i<e; i++)
        {
            scanf("%f",&f);
            sum=sum+f;
        }
        printf("The sum is %f\n\n",sum);
        fprintf(pt1,"The sum is %f\n\n",sum);
    }
    else if(a==2)
    {
        float sub,g,h;
        printf("Enter two no you want sub\n");
        scanf("%f %f",&g,&h);
        sub=g-h;
        printf("sub=%f-%f=%f\n\n",g,h,sub);
        fprintf(pt1,"sub=%f-%f=%f\n\n",g,h,sub);
    }
    else if(a==3)
    {
        int e,i;
        float f,mul=1;
        printf("Enter the no you want to multiply\n");
        scanf("%d",&e);
        printf("Enter the numbers:\n");
        for(i=1; i<=e; i++)
        {
            scanf("%f",&f);
            mul=mul*f;
        }
        printf("The multiple is: %f\n\n",mul);
        fprintf(pt1,"The multiple is: %f\n\n",mul);
    }
    else if(a==4)
    {
        float div,g,h;
        printf("Enter two no you want Division:\n");
        scanf("%f %f",&g,&h);
        div=g/h;
        printf("Division is=%f/%f=%f\n\n",g,h,div);
        fprintf(pt1,"Division is=%f/%f=%f\n\n",g,h,div);
    }
    ///Edited Last Night From Here
    else if(a == 5)
    {
        calculate();
    }
    else
    {
        printf("Wrong Input!..Please Enter a valid Choice..\n");
    }
    ///Edited Last Night Till Here
    fclose(pt1);
}
void ssmo()
{
    FILE *pt1, *pt2;
    pt1=fopen("results.txt","a");
    system("@cls||clear");
    printf("\n\t\t\tPress 1. For log\n\t\t\tPress 2. For ln\n\t\t\tPress 3. For x to the power n\n\t\t\tPress 4. For e to the power x\n\t\t\tPress 5. For Square root\n\t\t\tPress 6. For Previous Menu\n\n");
    int a;
    printf("Enter Your Choice : ");
    scanf("%d", &a);
    if(a==1)
    {
        float x;
        printf("Input x : ");
        scanf("%f",&x);
        printf("%f\n\n",log10(x));
        fprintf(pt1,"%f\n\n",log10(x));
    }
    else if(a==2)
    {
        float x;
        printf("Input x : ");
        scanf("%f",&x);
        printf("%f\n\n",log(x));
        fprintf(pt1,"%f\n\n",log(x));
    }
    else if(a==3)
    {
        int a,n,result=1;
        printf("Enter base:\n");
        scanf("%d",&a);
        printf("Enter power:\n");
        scanf("%d",&n);
        result=a*pow(a,n-1);
        printf("%d^%d = %d\n\n", a,n, result);
        fprintf(pt1,"%d^%d = %d\n\n", a,n, result);
    }
    else if(a==4)
    {
        int i;
        float x,sum,T1,T2;
        printf("Input x: ");
        scanf("%f",&x);
        sum=T1=T2=1;
        for(i=1; i<=100; i=i+1)
        {
            T1=T1*x;
            T2=T2*i;
            sum=sum+T1/T2;
        }
        printf("%f",sum);
        fprintf(pt1,"%f",sum);
    }
    else if(a==5)
    {
        float x, squareRoot;
        printf("Input x: ");
        scanf("%f",&x);
        squareRoot =  sqrt(x);
        printf("Square root of %f =  %f\n\n", x, squareRoot);
        fprintf(pt1,"Square root of %f =  %f\n\n", x, squareRoot);
    }
     ///Edited Last Night From Here
    else if(a == 6)
    {
        calculate();
    }
    else
    {
        printf("Wrong Input!..Please Enter a valid Choice..\n");
    }
    ///Edited Last Night Till Here
    fclose(pt1);
}
void matrix()
{
    system("@cls||clear");
    printf("\n\t\t\tPress 1. For Matrix Addition\n\t\t\tPress 2. For Matrix Subtraction\n\t\t\tPress 3. For Matrix Multiplication\n\n");
    int a;
    printf("Enter Your Choice : ");
    scanf("%d", &a);
    if(a==1)
    {

    }
    else if(a==2)
    {

    }
    else if(a==3)
    {

    }
    else printf("That's okay...\n");
}
void vectors()
{
    system("@cls||clear");
    printf("\n\t\t\tPress 1. \n\t\t\tPress 2.\n\t\t\tPress 3. \n\t\t\tPress 4. \n\t\t\tPress 5. \n\t\t\tPress 6. \n\t\t\t");
    int a;
    printf("Enter Your Choice : ");
    scanf("%d", &a);
    if(a==1)
    {

    }
    else if(a==2)
    {

    }
    else if(a==3)
    {

    }
    else printf("That's okay...\n");
}
void equations()
{
    system("@cls||clear");
    printf("\n\t\t\tPress 1. \n\t\t\tPress 2.\n\t\t\tPress 3. \n\t\t\tPress 4. \n\t\t\tPress 5. \n\t\t\tPress 6. \n\t\t\t");
    int a;
    printf("Enter Your Choice : ");
    scanf("%d", &a);
    if(a==1)
    {

    }
    else if(a==2)
    {

    }
    else if(a==3)
    {

    }
    else printf("That's okay...\n");
}
