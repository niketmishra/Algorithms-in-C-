#include<iostream>
using namespace std;


void sort(int start[],int finish[],int n)
{ int temp,tempb;
                        //APPLYING BUUBLE SORT ACCORDING TO FINSIH TIME
    for(int i=1;i<n;i++)
        { for(int j=0;j<n-i;j++)
            {
                if(finish[j]>finish[j+1])         
                {  //SWAPPING ONLY IF FINISH TIME IS BIGGER,BUT SWAPPING BOTH(START AND FINISH OF THAT INDEX)
                    temp=finish[j]; 
                    tempb=start[j];
                    finish[j]=finish[j+1];
                    start[j]=start[j+1];
                    finish[j+1]=temp;
                    start[j+1]=tempb;
                }   
            
            }
        }
}



int main()
{
    int n,temp,tempb,y;
    cin>>n;
    int start[n],finish[n];
    for(int i=0;i<n;i++)  //INPUT START AND END TIME OF ALL ACTIVITIES
    {
        cin>>start[i]>>finish[i];
    }
    
    sort(start,finish,n); //CALLING SORT FUNCTION

    int result=1,x=1;
    y=finish[0];
    for(int i=0;i<n-1;i++)
    {
        if(start[x]>=y)
            {   result=result+1;
                y=finish[x];
                x++;
            }
        else
            {   x++;
            }
    }

    cout<<result;    
}