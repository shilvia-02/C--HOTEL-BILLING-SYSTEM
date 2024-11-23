#include<stdio.h>
#include"string.h"
#include"egHeader.h"
struct items
{
char item[20];
float price;
int qty;
};
int main()
{
struct orders
{
char customer[50];
char date;
int noofitem;
char name[50];
struct items itm[];
};
int n,i,opt;
float total;
char name[50];
char savebill = 'y';
FILE *fp;
struct orders ord;
struct orders order;
printf("\t=================HOTEL C================");
printf(“MENU”);
printf("\n\nEnter your choice");
printf("\n\n1.INSERTVOICE");
printf("\n2.DISPLAY");
printf("\n3.EXIT");
printf("\n\n Your choice:\t");
scanf("%d",&opt);
fgetc(stdin);
switch(opt)
{
case 1:
menu();
printf("\n Enter name of customer:\t");
fgets(ord.name,50,stdin);
printf("\nEnter the no of item:\t\t");
scanf("%d",&n);
ord.noofitem=n;
for(int i=0;i<n;i++)
{
fgetc(stdin);
printf("Enter the item:%d\t",i+1);
fgets(ord.itm[i].item,20,stdin);
printf("Enter qty:\t\t");
scanf("%d",&ord.itm[i].qty);
printf("Enter the unit price:\t");
scanf("%f",&ord.itm[i].price);
total+=(ord.itm[i].qty*ord.itm[i].price);
}
insert(ord.name);
for(int i=0;i<ord.noofitem;i++)
{
product(ord.itm[i].item,ord.itm[i].price,ord.itm[i].qty);
}
gst(total);
printf("\n Do you want to save the invoice:\t");
scanf("%s",&savebill);
if(savebill=='y')
{
fp=fopen("hotel.txt","a+");
fwrite(&ord,sizeof(struct orders),1,fp);
fclose(fp);
if(fwrite!=0)
{
printf("\n Successfully saved");
}
else
printf("\n Error saving");
break;
case 2:
fp=fopen("hotel.txt","r");
fread((&order),sizeof(struct orders),1,fp);
printf("\n**************Previous invoice************");
while(fread!=0)
{
insert(ord.name);
for(int i=0;i<order.noofitem;i++)
{
product(order.itm[i].item,order.itm[i].price,order.itm[i].qty);
total+=(order.itm[i].qty * order.itm[i].price);
}
gst(total);
}
fclose(fp);
break;
case 3:
printf("\n\n BYE BYE:)");break;
}
}
}