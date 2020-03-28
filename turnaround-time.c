#include<stdio.h>
int main()
{
    int burst_time[10],process[10],n,temp,i,j,waiting_time[10],sum=0;
    float average;
    printf("enter total number of process: ");
    scanf("%d",&n);
    printf("\n enter burst time for each process: ");
    for(i=0;i<n;i++)
    {
        printf("\n burst time of process p%d: ",i);
        scanf("%d",&burst_time[i]);
        process[i]=i;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
            {
                if(burst_time[i]>burst_time[j])
                {
                    temp=burst_time[i];
                    burst_time[i]=burst_time[j];
                    burst_time[j]=temp;
                    temp=process[i];
                    process[i]=process[j];
                    process[j]=temp;
                 }
            }
     }
     waiting_time[0]=0;
     for(i=1;i<n;i++)
     {
         waiting_time[i]=waiting_time[i-1]+burst_time[i-1];
     }
     for(i=0;i<n;i++)
     {
          sum+=waiting_time[i];
     }
     average=(float)sum/n;
     printf("\n waiting timing for each process: ");
     for(i=0;i<n;i++)
     {
          printf("waiting time for process p%d id %d",process[i],waiting_time[i]);
     }
     printf("average waiting time is %f",average);
     return 0;
}
               
