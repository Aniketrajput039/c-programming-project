//last modified latests
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<graphics.h>


static   int flg1=0,flg2=0;
void game(char qnm1[],char qnm2[])
{

    int x[3][3]={{5,5,5},{5,5,5},{5,5,5}};
    int i=0,j=0,data,cnt,cnt1,cnt2=0,k=2,z=2;

     while(1)
     {
	 cnt2=0;
	 for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	    {   if(x[i][j]!=5)
			cnt2++;
	    }
	}

	    if(cnt2==9)
	    {
		printf("\nwell played both\nmatch is tie");
		return;
	    }

		  if(z%2==0)
			puts(qnm1);
		  else
			puts(qnm2);

      printf("\nEnter data to add in game");
     scanf("%d",&data);

      printf("\nEnter pos to add dada");


      scanf("\t%d",&i);
      scanf("\t%d",&j);

      if(x[i][j]==5)
      {
				if(z%2==0&&data==1)
				{
					x[i][j]=data;
					z++;
				}
				if(z%2==1&&data==0)
				 {	x[i][j]=data;
					  z++;
				  }

	clrscr();

      }

	printf("\n\n");
      for(i=0;i<3;i++)
      {
	 for(j=0;j<3;j++)
	   {
		printf("\t%d",x[i][j]);
	    }
	    printf("\n");
      }
//---------


       for(i=0;i<3;i++)
	{
		cnt=cnt1=0;

	   for(j=0;j<3;j++)
	    {
	       if(x[i][j]==0)
			cnt++;
		if(x[i][j]==1)
			cnt1++;
	    }

		 if(cnt==3)
		 {
		      printf("\n\t  ** 0 WON **");
		      flg1++;
		     return;

		 }

		 if(cnt1==3)
		{
		    printf("\n\t  ** 1 WON **");
		    flg2++;
		   return;
		 }
	}

//------

	 for(j=0;j<3;j++)
	{
	 cnt=cnt1=0;

	   for(i=0;i<3;i++)
	    {
	       if(x[i][j]==0)
			cnt++;
		if(x[i][j]==1)
			cnt1++;
	    }

		 if(cnt==3)
		 {
		      printf("\n\t  ** 0 WON **");
		      flg1++;
		     return;
		 }

		 if(cnt1==3)
		{
		    printf("\n\t  ** 1 WON **");
		    flg2++;
		   return;
		 }
	}
//-----------
		cnt=cnt1=0;
	for(i=0;i<3;i++)
	{


	   for(j=0;j<3;j++)
	    {
	       if(i==j && x[i][j]==0)
			cnt++;
		if(i==j && x[i][j]==1)
			cnt1++;
	    }

		 if(cnt==3)
		 {
		      printf("\n\t  ** 0 WON **");
		      flg1++;
		     return;
		 }

		 if(cnt1==3)
		{
		    printf("\n\t  ** 1 WON **");
		    flg2++;
		   return;
		 }
	}
//------------------------------
	cnt=cnt1=0;
       for(j=0;j<3;j++)
	{


	   for(i=0;i<3;i++)
	    {
	       if(i==j&&x[i][j]==0)
			cnt++;
		if(i==j&&x[i][j]==1)
			cnt1++;
	    }

		 if(cnt==3)
		 {
		      printf("\n\t  ** 0 WON **");
		      flg1++;
		      return;
		 }

		 if(cnt1==3)
		{
		    printf("\n\t  ** 1 WON **");
		    flg2++;
		   return;
		 }


	}




}


}
//function for char x o
void gamexo(char qnm1[],char qnm2[])
{

    char x[3][3]={{'*','*','*'},{'*','*','*'},{'*','*','*'}};
    int i=0,j=0,cnt,cnt1,cnt2=0,k=2,z=2;
    char data;
     qnm1="aniket",qnm2="gauri";
     while(1)
     {
	 cnt2=0;
	 for(i=0;i<3;i++)
	{
	   for(j=0;j<3;j++)
	    {   if(x[i][j]!='*')
			cnt2++;
	    }
	}

	    if(cnt2==9)
	    {
		printf("\nwell played both\nmatch is tie");
		return;
	    }

		  if(z%2==0)
			puts(qnm1);
		  else
			puts(qnm2);

      printf("\nEnter data to add in game");
      fflush(stdin);
     scanf("%c",&data);

      printf("\nEnter pos to add dada");


      scanf("\t%d",&i);
      scanf("\t%d",&j);

      if(x[i][j]=='*')
      {
				if(z%2==0&&data=='x')
				{
					x[i][j]=data;
					z++;
				}
				if(z%2==1&&data=='o')
				 {	x[i][j]=data;
					  z++;
				  }

	clrscr();

      }

	printf("\n\n");
      for(i=0;i<3;i++)
      {
	 for(j=0;j<3;j++)
	   {
		printf("\t%c",x[i][j]);
	    }
	    printf("\n");
      }
//---------


       for(i=0;i<3;i++)
	{
		cnt=cnt1=0;

	   for(j=0;j<3;j++)
	    {
	       if(x[i][j]=='o')
			cnt++;
		if(x[i][j]=='x')
			cnt1++;
	    }

		 if(cnt==3)
		 {
		      printf("\n\t  ** 0 WON **");
		      flg1++;
		     return;

		 }

		 if(cnt1==3)
		{
		    printf("\n\t  ** 1 WON **");
		    flg2++;
		   return;
		 }
	}

//------

	 for(j=0;j<3;j++)
	{
	 cnt=cnt1=0;

	   for(i=0;i<3;i++)
	    {
	       if(x[i][j]=='o')
			cnt++;
		if(x[i][j]=='x')
			cnt1++;
	    }

		 if(cnt==3)
		 {
		      printf("\n\t  ** 0 WON **");
		      flg1++;
		     return;
		 }

		 if(cnt1==3)
		{
		    printf("\n\t  ** 1 WON **");
		    flg2++;
		   return;
		 }
	}
//-----------
		cnt=cnt1=0;
	for(i=0;i<3;i++)
	{


	   for(j=0;j<3;j++)
	    {
	       if(i==j && x[i][j]=='o')
			cnt++;
		if(i==j && x[i][j]=='x')
			cnt1++;
	    }

		 if(cnt==3)
		 {
		      printf("\n\t  ** 0 WON **");
		      flg1++;
		     return;
		 }

		 if(cnt1==3)
		{
		    printf("\n\t  ** 1 WON **");
		    flg2++;
		   return;
		 }
	}
//------------------------------
	cnt=cnt1=0;
       for(j=0;j<3;j++)
	{


	   for(i=0;i<3;i++)
	    {
	       if(i==j&&x[i][j]=='o')
			cnt++;
		if(i==j&&x[i][j]=='x')
			cnt1++;
	    }

		 if(cnt==3)
		 {
		      printf("\n\t  ** 0 WON **");
		      flg1++;
		      return;
		 }

		 if(cnt1==3)
		{
		    printf("\n\t  ** 1 WON **");
		    flg2++;
		   return;
		 }


	}




}

}



//highest score fnction
void high(char qnm1[],char qnm2[],int sm1,int sm2)
{
	FILE * p;
	int chk1,chk2;
	p=fopen("highscore.txt","r");

	 if(p==NULL)
	{
	  p=fopen("highscore.txt","w");
	  fprintf(p,"%s=%d\n%s=%d",qnm1,sm1,qnm2,sm2);
	  fclose(p);
	  return;

	}
	else
	{     //  while(1)
	      //	{
		fscanf(&p,"%d %d",&chk1,&chk2);
	       //		if(feof(p))
	       //			break;
	       //	}
		if(sm1>chk1||sm2>chk2)//||(chk2-chk1>sm1-sm2))
		{
		   p=fopen("highscore.txt","w");
		   fprintf(p,"%s=%d\n%s=%d",qnm1,sm1,qnm2,sm2);
		   fclose(p);
		}
	}

}

void resume(int sm1,int sm2)
{
	FILE * p;
	int chk1,chk2;



	  p=fopen("resume.dat","w");
	  fprintf(p,"%d\n%d",sm1,sm2);
	  fclose(p);




 }


 void credits()
 {
     textcolor(LIGHTBLUE+BLINK);
	cprintf("\nMADE BY ANIKET");
     textcolor(LIGHTBLUE);
	cprintf("\nGOT IDEA with the help of ADITYA");
	cprintf("\nSPECIAL thanks To PRACHIT");
     textcolor(LIGHTGRAY);
 }

void main()
{       int opt,hflg1,hflg2,opt2;
	FILE * fp;
	char nm1[50],nm2[50], hnm1[50], hnm2[50],c,n;
    while(1)
    {
	clrscr();

	printf("\n\t * START\n\t * CONTINUE\n\t * HIGHEST SCORE\n\t * CREDITS\n\t * EXIT\n");
	scanf("%d",&opt);
		  flg1=flg2=0;
	clrscr();
	if(opt>5)
		goto end;

	switch(opt)
	{
		      case 1:
		      res:
		      while(1)
		      {
			      printf("\n1.To play with 0 and 1\n2.To play with x and o\t");
			      scanf("%d",&opt2);
				switch(opt2)
				{
					case 1:
					fflush(stdin);
					printf("\n Enter a name of user 1\t");
					gets(nm1);
					printf("\n Enter a name of user 2\t");
					gets(nm2);

					while(1)
					{
						clrscr();
						fflush(stdin);
						game(nm1,nm2);

						printf("\nDo u wanna continue");
						scanf(" %c",&c);

						if(c=='n')
						{       printf("\n\tSCORE CARD");
							printf("\n%s = %d",nm1,flg1);
							printf("\n%s = %d",nm2,flg2);
							getch();
							high(nm1,nm2,flg1,flg2);
							resume(flg1,flg2);
							flg1=flg2=0;
							goto loop;
							break;
						}


					}
					case 2:
					fflush(stdin);
					printf("\n Enter a name of user 1\t");
					gets(nm1);
					printf("\n Enter a name of user 2\t");
					gets(nm2);

						while(1)
						{
							clrscr();
							fflush(stdin);
							gamexo(nm1,nm2);

							printf("\nDo u wanna continue");
							scanf(" %c",&c);

							if(c=='n')
							{       printf("\n\tSCORE CARD");
								printf("\n%s = %d",nm1,flg1);
								printf("\n%s = %d",nm2,flg2);
								getch();
								high(nm1,nm2,flg1,flg2);
								resume(flg1,flg2);
								flg1=flg2=0;
								goto loop;
								break;
							}


						}

			}
			}
			break;    //case 1 ends here

			case 2:
			fp=fopen("resume.dat","r");
			fscanf(fp,"%d %d",&flg1,&flg2);
			goto res;
			break;

			case 3:
			fp=fopen("highscore.txt","r");
			fscanf(fp,"%s%s%d",&hnm1,&hnm2,&hflg2);
			printf("\nHIGHEST SCORE ");
			printf("\n\t%s\n\t%s",hnm1,hnm2);
//			printf("\n\t%s=%d",hnm2,hflg2);
			getch();
			break;

			case 4:
			credits();
			getch();
			break;
      }
      loop:
    }
      end:
}