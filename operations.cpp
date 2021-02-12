#include<iostream.h>
#include<conio.h>
#include<process.h>

void main()
{
  clrscr();
  int opt;

  cout<<"     MENU     "<<endl<<endl;
  cout<<"1.Add Two matrices \n";
  cout<<"2.Subtract Two matrices \n";
  cout<<"3.Multiply Two matrices \n";
  cout<<"4.Exit \n";

  int i,j,k;

  cout<<"\n Enter your Option (1-4)";
  cin>>opt;


  int m1[3][3];
  int m2[3][3];

  cout<<"Enter matrix 1 \n";
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      cin>>m1[i][j];
    }

  }

  cout<<"Enter matrix 2 \n";
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      cin>>m2[i][j];
    }

  }

  switch(opt)
  {
    case 1:
    {
      int s
      [3][3];

      cout<<"Addition of matrices is \n";
      for(i=0;i<3;i++)
      {
	for(j=0;j<3;j++)
	{
	  s[i][j]=m1[i][j]+m2[i][j];
	  cout<<s[i][j]<<" ";

	}
       cout<<endl;
      }


    }break;

    case 2:
    {
      int d[3][3];
      cout<<"Subtraction of matrices is \n";
      for(i=0;i<3;i++)
      {
	for(j=0;j<3;j++)
	{
	  d[i][j]=m1[i][j]-m2[i][j];
	  cout<<d[i][j]<<" ";

	}
      cout<<endl;
      }

    }break;

    case 3:
    {
      int x[3][3];
      cout<<"Multiplication of matrices is \n";

      for(i=0;i<3;i++)
      {
	for(j=0;j<3;j++)
	{
	  x[i][j]=m1[i][j]*m2[i][j];
	  cout<<x[i][j]<<" ";
	}
      cout<<endl;
      }
    }
    break;

    case 4:
    {
      exit(0);
    }
  }
}
