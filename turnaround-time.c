#include<stdio.h>
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
               }
            
           }
                 wt[0]=0;
                   for(i=1;i<n;i++)
                   {
                       wt[i]=wt[i-1]+bt[i-1];
                   }
                   for(i=0;i<n;i++)
                   {
                       sum+=wt[i];
                   }
                   avg=(float)sum/n;
                   printf("waiting timing for each process: );
                           for(i=0;i<n;i++)
                           {
                               printf("waiting time for process p%d id %d",p[i],wt[i]);
                           }
                           printf("average waiting time is %f",avg);
                           return 0;
                           }
               
