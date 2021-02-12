#include<iostream.h>
#include<dos.h>
#include<conio.h>
void main()
{
	clrscr();
	int arr[3][3],i,n,j;
	char choice;
	cout<<"Enter 3*3 Array Elements : ";

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"The Array is :\n";
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	do
      {
	cout<<"\nEnter Choice";
	cout<<"\n1.For ROW SUM";
	cout<<"\n2.For MAX NUMBER ROW WISE";
	cout<<"\n3.For COLUMN SUM";
	cout<<"\n4.For DIAGONAL SUM ";
	cin>>n;
		if(n==1)
	{
		for(i=0;i<3;i++)
		{
			int sum=0;
			for(j=0;j<3;j++)
			{
				sum+=arr[i][j];
			}
			 cout<<"\nSUM OF ELEMENTS OF ROW"<<i+1;
			 cout<<"="<<sum;
		}
		cout<<endl;
		delay(500);
	 }

	else if(n==2)
	      {
		for(i=0;i<3;i++)
		{
		       int max=arr[i][j];
			for(j=0;j<3;j++)
			{
				if(arr[i][j]>max)
				max=arr[i][j];
			}
			cout<<"Highest Number"<<max;
			cout<<endl;
		 delay(500);
	      }
	}
	 else if(n==3)
	 {
	 {
		for(i=0;i<3;i++)
		{
			int csum=0;
			for(j=0;j<3;j++)
			{
			       csum+=arr[i][j];
			}
			 cout<<"\nSUM OF ELEMENTS OF COLUMN"<<i+1;
			 cout<<"="<<csum;
			}
		cout<<endl;
		delay(500);
	      }
	}
	else if(n==4)
	{
		 {
		for(i=0;i<3;i++)
		{
			int dsum=0;
			for(j=0;j<3;j++)
			{
				if(i==j)
			       dsum+=arr[i][j];
			       else if(i+j==2)
			       dsum+=arr[i][j];
			}
			 cout<<"\nSUM OF ELEMENTS OF DIAGNOL";
			 cout<<"="<<dsum;
			}
		cout<<endl;
		delay(500);
	      }

	}
	else
	{
		cout<<"Enter Valid Choice";
	 }


      cout<<" want to conitue(y/n)";
      cin>>choice;
      }while(choice=='y');
}
