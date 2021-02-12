#include<iostream.h>
#include<conio.h>

void main()
{
  clrscr();
  int i,j;
  int m[3][3];

  cout<<"Enter the matrix \n";

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      cin>>m[i][j];
    }
  }

    int d1sum=0;
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
	if(i==j)
	{
	  d1sum=d1sum+m[i][j];
	}
      }
    }

    cout<<"Sum of diagonal 1 is \n";
    cout<<d1sum;

    int d2sum=0;
    for(i=2;i>=0;i--)
    {
      for(j=2;j>=0;j--)
      {
	if(i==j)
	{
	  d2sum=d2sum+m[i][j];
	}
      }

    }

    cout<<"\nSum of diagonal 2 is \n";
    cout<<d2sum<<endl;


}
