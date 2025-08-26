   #include <stdio.h>
   int main()
{
    float m,l,w,t,x,y,z,k,a,b,c,d;
    printf("ENTER PRICE OF MOBILE PHONE: ");
    scanf("%f",&m);
    printf("ENTER DISCOUNT: ");
    scanf("%f",&x);
    printf("ENTER PRICE OF LAPTOP: ");
    scanf("%f",&l);
    printf("ENTER DISCOUNT: ");
    scanf("%f",&y);
    printf("ENTER PRICE OF WATCH: ");
    scanf("%f",&w);
    printf("ENTER DISCOUNT: ");
    scanf("%f",&z);
    printf("ENTER PRICE OF TV: ");
    scanf("%f",&t);
    printf("ENTER DISCOUNT: ");
    scanf("%f",&k);
    printf("--------------------------------------------------------------------\n");
     a=m-(m*x)/100;
     b=l-(l*y)/100;
     c=w-(w*z)/100;
    d=t-(t*k)/100;
    printf("S.NO\t\tPRODUCT NAME\t\tPRICE\t\tDISCOUNT\t\tFINAL PRICE");
    printf("\n1\t\tMOBILE PHONE\t\t%f      %f             %f",m,x,a);
     printf("\n1\t\tLaptop     \t\t%f      %f             %f",l,y,b);
     printf("\n1\t\tWATCH      \t\t%f      %f             %f",w,y,c);
     printf("\n1\t\tTV         \t\t%f      %f             %f",t,k,d);
     printf("\n--------------------------------------------------------------------");
      return 0 ;
      }

