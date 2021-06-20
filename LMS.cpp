#include<graphics>
#include<stdlib.h>
#include<stdio.h>
#include<conio>
#include<dos>
#include<string>
#include<iostream>

 void mainscreen(){
  clrscr();

   printf("\n\n\n\t\t 1. Search Customer");
   printf("\n\t\t 2. Add Customer");
   printf("\n\t\t 3.Exit");
   printf("\n\n\t\t   Setect your choice:\t");}

 void products(){
  clrscr();

   printf("\n\n\n\t\t 1.Normal wash");
   printf("\n\t\t 2.Normal wash with iron");
   printf("\n\t\t 3.Dry wash");
   printf("\n\t\t 4.Print Recipt");
   printf("\n\t\t 5.New Entry");
   printf("\n\t\t 6.back");

   printf("\n\n\t\t   Setect your choice\t");}

  void wait(){
    clrscr();
    printf("\n\n\n\t added\t\t\t");
    delay(400);  }

  struct customer{
    char name[20];
    int count,cnw,cdw,cnwi,amount;
    }entry[200];


 void main() {

  int i,j,n,m,t;
  char u[10],user_id[]="admin";
  int gd=DETECT,gm;
  char c;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  setbkcolor(WHITE);

  for(i=0;i<=6;i++){
   delay(300);
   cleardevice();
   settextstyle(4,HORIZ_DIR,10);
   setcolor(i);
   outtextxy(200,150,"LMS");   }

  getch();
  closegraph();


 printf("\n\n\n\n\n\n\n\n\t\t\t User Name: ");
 gets(u);

 char pass[55];

    printf("\n\t\t\t Password: ");
    int p=0;
    do{
	pass[p]=getch();
	if(pass[p]!='\r'){
	    printf("*");
	}
	p++;
    } while(pass[p-1]!='\r');
    pass[p-1]='\0';

 if(!strcmp(pass,"abc@")&&!strcmp(u,user_id)){
  mainscreen();
   while(1) { t=0;
    scanf("%d", &m);
    switch(m){
     case 1: char nam[200];
	     printf("\n\n Enter customer's name:");
	     gets(nam);
	     getch();

	     int f=0;
	     for(int k=0;(k<20)&&(f==0); k++){
	      if (strcmp(nam,entry[k].name)==0){ f++;
				      printf(" \n\n\t\t\t\t BILL RECIPT \t\t\t\t\n\n");
				      printf("\n\t Total number of clothes: %d",entry[k].count);
				      printf("\n\t\t Clothes for normal wash: %d",entry[k].cnw);
				      printf("\n\t\t Clothes for normal wash and ironing: %d",entry[k].cnwi);
				      printf("\n\t\t Clothes for dry wash: %d",entry[k].cdw);
				      printf(" \n\n\t TOTAL AMOUNT: Rs. %d",entry[i].amount);}}

	      if (f==0) printf("\n\n Customer not found....");

	      printf(" \n\n\n press m for main screen.");
	      scanf("%c",&c);
	      if(c=='m') mainscreen(); break;

     case 2:  int flag=0;
	      char name[200];
	      clrscr();
	      printf("\n\n\n \t\t Enter customer's Name: ");
	      gets(name);
	      strcpy(entry[t].name,name);
	      getch();

	      products();
	      while(!flag){

		   scanf("%d",&n);
		   switch(n){
			      case 1: printf("\n\n **Price for normal washis Rs. 20. \n\n Enter number of clothes for normal wash:");
				      cin>>entry[t].cnw;
				      wait();
				      products(); break;

			      case 2: printf("\n\n **Price for wash with iron is Rs. 30. \n\n Enter number of clothes for wash with iron:");
				      cin>>entry[t].cnwi;
				      wait();
				      products(); break;

			      case 3: printf("\n\n **Price for dry wash is Rs. 100. \n\n Enter number of clothes for dry:");
				      cin>>entry[t].cdw;
				      wait();
				      products(); break;

			      case 4: clrscr();
				      entry[t].count=entry[t].cdw+entry[t].cnwi+entry[t].cnw;
				      entry[t].amount=(entry[t].cdw*100)+(entry[t].cnwi*30)+(entry[t].cnw*20);
				      printf(" \n\n\t\t\t\t BILL RECIPT \t\t\t\t\n\n");
				      printf("\n\n\t Customer's Name:");
				      gets(entry[t].name);
				      printf("\n\t Total number of clothes: %d",entry[t].count);
				      printf("\n\t\t Clothes for normal wash: %d",entry[t].cnw);
				      printf("\n\t\t Clothes for normal wash and ironing: %d",entry[t].cnwi);
				      printf("\n\t\t Clothes for dry wash: %d",entry[t].cdw);
				      printf(" \n\n\t TOTAL AMOUNT: Rs. %d \n\n\n press m for main screen.",entry[t].amount);
				      scanf("%c",&c);
				      if(c=='m') products(); break;

			     case 5: t++;
				     clrscr();
				     printf("\n\n\n\t\t\t processing......");
				     printf("\n\n\n \t\t Enter customer's Name: ");
				     gets(entry[t].name);

				     delay(600);
				     products(); break;

			     case 6: flag++; break;

			     default: printf("\n\t invalid choice \n\t Try again.");
			  }} mainscreen(); break;
     case 3: exit(0); break;
     default: printf("\n\t invalid choice \n\t Try again.");  }}}else{ clrscr();
		 printf("\n\n\n\t\t invalid username or password....");  }

    getch();   }