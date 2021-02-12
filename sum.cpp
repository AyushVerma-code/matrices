#include<iostream.h>
#include<conio.h>
#include<process.h>

void main()
{
  clrscr();
  int opt;

  cout<<"     MENU     "<<endl<<endl;
  cout<<"1.Sum total of Matrix \n";
  cout<<"2.Column total of matrix \n";
  cout<<"3.Transpose a matrix \n";
  cout<<"4.Exit \n";

  int i,j,k;

  cout<<"\n Enter your Option (1-4)";
  cin>>opt;
  int m[3][3];


  cout<<"Enter the matrix \n";
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      cin>>m[i][j];
    }
 }


  switch(opt)
  {
    case 1:
    {
      int sumrow=0;
      cout<<"Row total is \n";
      for(i=0;i<3;i++)
      {
	for(j=0;j<3;j++)
	{
	  sumrow=sumrow+m[i][j];
              }
       }
      cout<<sumrow;
}
break;

    case 2:
    {
      int sc=0;
      cout<<"Column total is \n";
      for(i=0;i<3;i++)
      {
	for(j=0;j<3;j++)
	{
	  sc+=m[j][i];
	}
     }
     cout<<sc;
    }break;

    case 3:
    {
      int x[3][3];
      cout<<"Transpose of matrix is \n";

      for(i=0;i<3;i++)
      {
	for(j=0;j<3;j++)
	{
	  x[i][j]=m[j][i];
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
