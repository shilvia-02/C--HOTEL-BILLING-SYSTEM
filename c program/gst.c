#include"egHeader.h"
void gst(float total)
{
float GST=0.05*total;
float dis=0.2*total;
float nettotal=total-dis;
float grandtotal=nettotal+GST;
printf("\n");
printf("\n------------------------------------------------------------\n");
printf("Subtotal\t\t\t%2f",total);
printf("\nDiscount@20\t\t\t%2f",dis);
printf("\n------------------------------------------------------------\n");
printf("\nNetTotal\t\t\t%f",nettotal);
printf("\nGST\t\t\t\t%f",GST);
printf("\n------------------------------------------------------------\n");
printf("\nGRANDTOTAL\t\t%f\t\t\t",grandtotal);
printf("\n-------------------------------------------------------------\n");
printf("\n THANK YOU DO VISIT AGAIN\n");
}
