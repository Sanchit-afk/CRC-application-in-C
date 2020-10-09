#include<stdio.h>
#include<conio.h>

void main(){
int in[50],in1[50],div[10],i,n,d,temp,j,r[10],q[50],r1[10];

printf("Enter the number of bits in the dataword"); 
scanf("%d",&n);
printf("Enter the number of bits in the divisor"); 
scanf("%d",&d);
printf("Enter the dataword");
    for(i=0;i<n;i++){
        scanf("%d",&in[i]);
    }
    for(i=0;i<n;i++){
        in1[i]=in[i];
    }
printf("Enter the divisor");
    for(i=0;i<d;i++){
        scanf("%d",&div[i]);
    }
/*adding the zeros*/
    for ( i = n; i < n+d-1; i++)
    {
        in[i]=0;
        /*printf("%d\n",in[i]);*/
    }
    
/*division*/
    for(i=0;i<n;i++){                                                    /*iterates over every number*/
        temp=i;
        if (in[i]==1)                                                    /*dividing the number into begining with 1 or 0 */
        {
            for (j=0;j<d;j++)                                            /*iterates over those d numbers*/ 
            {
                if(in[temp]==div[j]){                                    /* xor division */
                    in[temp]=0;
                    r[j]=0;
                    temp+=1;
                }
                else{
                    in[temp]=1;
                    r[j]=1;
                    temp+=1;
                }
            q[i]=1;
 
            }
        }
        else
        {
            q[i]=0;
        }
            
            
    }

    /*copy the input*/
     j=1;
        
        for ( i = n; i < n+d-1; i++)
    {
        in1[i]=r[j];
        /*printf("%d\n",r[j]);*/
        j++;
        /*printf("%d\n",in[i]);*/
    }
    
    printf("The remainder is\t");
    for(i=1;i<d;i++){  
        printf("%d",r[i]);       
    }

    printf("\nThe quotient is\t ");
    for(i=0;i<n;i++){
        printf("%d",q[i]);
    }

        for(i=0;i<n;i++){                                                    /*iterates over every number*/
        temp=i;
        if (in1[i]==1)                                                    /*dividing the number into begining with 1 or 0 */
        {
            for (j=0;j<d;j++)                                            /*iterates over those d numbers*/ 
            {
                if(in1[temp]==div[j]){                                    /* xor division */
                    in1[temp]=0;
                    r1[j]=0;
                    temp+=1;
                }
                else{
                    in1[temp]=1;
                    r1[j]=1;
                    temp+=1;
                }
            q[i]=1;
 
            }
        }
        else
        {
            q[i]=0;
        }
            
            
    }
    printf("\n\nOn the reciever side\n");
        printf("\nThe remainder is\t");
    for(i=1;i<d;i++){  
        printf("%d",r1[i]);       
    }

    printf("\nThe quotient is\t ");
    for(i=0;i<n;i++){
        printf("%d",q[i]);
    }


}