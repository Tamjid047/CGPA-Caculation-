  #include<stdio.h>
main()
{
    //CGPA CALCULATION
    float c=0,g=0,t=0,tc=0,s;//C=CREDIT G=GRADE TC=TOTAL CREDIT T=TOTAL GRADE
    int i,j;
    int x;
    for(i=1;i<=70;i++)
    {

        printf("enter credit no of %d subject=",i);
        scanf("%f",&c);
        printf("enter grade of %d subject=",i);
        scanf("%f",&g);

        t=t+c*g;

        tc=tc+c;

        printf("\nChoose: y(1)/n(0)");//1=add more subject or continue loop, 0=end loop
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        else
        {
            printf("successful\n\n");
        }


    }
            s=t/tc;
            printf("\n\ntotal credit=%f\n",tc);
            printf("total GP=%f\n",t);
            printf("CGPA=%.4f",s);
}
