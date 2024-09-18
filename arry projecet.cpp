#include <stdio.h>
int main()
{
	int a,input;
	printf("enter the size of the arry:\n");
	scanf("%d",&a);
	
	int arr[a];
	printf("enter the elements off the arry:\n");
	for (int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	 
	do{
	
	
	printf("\n");
	printf("# choose your option\n 1)Add\n 2)Search\n 3)Delete\n 4)Update\n 5)Sort\n 6)Display\n 7)Exit\n");
	scanf("%d",&input);
	
	switch(input)
	{
		case 1:
			
	 	int index,new_num;
	 	printf("enter the index number:\n");
	 	scanf("%d",&index);
	 	printf("enter the new number:\n");
	 	scanf("%d",&new_num);
	 	
	 	for (int j=a-1;j>=index;j--)
	 	{
	 		arr[j+1]=arr[j];
		 }
		 arr[index]=new_num;
		 a++;
		 for (int i=0;i<a;i++)
		 {
		 	printf("%d ",arr[i]);
		 }
		break;	
		 
		case 2:
		int x,ram;
		printf("enter the number to chek the number is present in the arry or not:\n");
		scanf("%d",&x);
		for (int i=0;i<a;i++)
		{
			if (arr[i]==x)
			{
				ram=arr[i];
			}
		}
		if (ram==x){
			printf("%d is present in your arry",ram);
		}
	     
	    else 
	    {
	    	printf("%d is not peresent in your arry",x);
		}
		break;
		 
		case 3:
		int del,box;
		printf("enter your number to delete from your arry:\n");
		scanf("%d",&del);
		for (int i=0;i<a;i++)
		{
			if(arr[i]==del)
			{
			  for(int j=i+1;j<a;j++){
			  	arr[j-1]=arr[j];
			  }
			}
			
		}
		a--;
		for (int i=0;i<a;i++)
		{
			printf("%d ",arr[i]);
		}
		break;
		
		case 4:
		int c,upd_num;
		printf("enter the index number:\n");
		scanf("%d",&c);
		printf("enter the new update number:\n");
		scanf("%d",&upd_num);
		arr[c]=upd_num;
		for (int i=0;i<a;i++)
		{
			printf("%d ",arr[i]);
		}
		break;
		
		case 5:
			int dum;
		printf("your sorted arry is:\n");
		for (int i=0;i<a;i++)
		{
			for (int j=i+1;j<a;j++)
			{
				if (arr[j]<arr[i])
				{
					dum=arr[j];
					arr[j]=arr[i];
					arr[i]=dum;
				}
			}
		}
		for (int i=0;i<a;i++)
		{
			printf("%d ",arr[i]);
		}
		break;
		
		case 6:
		int b,sum;
		printf("enter your index number:-");
		scanf("%d",&b);
		
		for (int i=0;i<a;i++)
		{
			sum=arr[b];
		}
		printf("%d",sum);
		break;
			
	}
	printf("\n");
}while(input!=7);
}
