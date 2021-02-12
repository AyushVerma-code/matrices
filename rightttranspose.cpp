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
	cout<<"\n1.For Printing Right Triangle";
	cout<<"\n2.For Printing Transpose";
	cout<<"\n3.For Printing Diagonal Row";
	cout<<"\n4.For elements Divisible by 2 ";
	cin>>n;

	if(n==1)
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(i+j>=2)
					cout<<arr[i][j];
				else
					cout<<" ";
			}
		cout<<endl;
		delay(500);
	      }
	}
	else if(n==2)
	      {
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<arr[j][i]<<" ";
			}
		 cout<<endl;
		 delay(500);
	      }
	}
	 else if(n==3)
	 {
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(i==j)
					cout<<arr[i][j];
				else if(i+j==2)
					cout<<arr[i][j];
				else
					cout<<" ";
			 }
		   cout<<endl;
		   delay(500);
		}
	}
	else if(n==4)
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(arr[i][j]%2==0)
					cout<<arr[i][j];
				else
					cout<<" ";
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
