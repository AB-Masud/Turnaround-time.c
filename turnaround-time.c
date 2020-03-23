#include<stdio.h>
#include<conio.h>
int main()
{
    int burst_time[10],process[10],n,temp,i,j,waiting_time[10],sum=0;
    float average;
    printf("enter total number of process: );
    printf("enter burst time for each process: );
    for(i=0;i<n;i++)
    {
        printtf("burst time of process p%d: ",i);
        scanf("%d",&burst_time[i]);
        process[i]=i;
    }
     for(i=0;i<n-1;i++)
           {
               for(j=i+1;j<n;j++)
               {
                   if(bt[i]>bt[j])
                   {
                       temp=bt[i];
                       bt[i]=bt[j];
                       bt[j]=temp;
                       temp=p[i];
                       p[i]=p[j];
                       p[j]=temp;
                    }
               
