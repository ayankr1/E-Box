#include<stdio.h>
	#define LOW(x,y) (x<y)?x:y
	int main()
	{
	    int xl1,xl2,yl1,yl2,xu1,xu2,yu1,yu2,flag,x1,x2,y1,y2;
	                 flag=0;
	                 scanf("%d %d %d %d",&xl1,&yl1,&xu1,&yu1);  
	                 scanf("%d %d %d %d",&xl2,&yl2,&xu2,&yu2);  
	                 if((xl2>=xl1&&xl2<=xu1)&&(yl2>=yl1&&yl2<=yu1)){
	                                                                x1=xl2; y1=yl2;
	                                                                x2=LOW(xu2,xu1);
	                                                                y2=LOW(yu1,yu2);
	                                                                }
	                 else if((xl2>=xl1&&xl2<=xu1)&&(yu2>=yl1&&yu2<=yu1)){
	                                                                x1=xl2; y2=yu2;
	                                                                x2=LOW(xu2,xu1);
	                                                                y1=yl1;//HIGH(yl1,yl2);
	                                                                }
	                 else if((xl1>=xl2&&xl1<=xu2)&&(yl1>=yl2&&yl1<=yu2)){
	                                                                x1=xl1; y1=yl1;
	                                                                x2=LOW(xu2,xu1);
	                                                                y2=LOW(yu1,yu2);
	                                                                }
	                 else if((xl1>=xl2&&xl1<=xu2)&&(yu1>=yl2&&yu1<=yu2)){
	                                                                x1=xl1; y2=yu1;
	                                                                x2=LOW(xu2,xu1);
	                                                                y1=yl2;//LOW(yu1,yu2);

                     }
	                 else flag=1;
	                 if(!flag)
                     {
	                           if((x2-x1>0)||(y2-y1>0))
	                           printf("%d %d %d %d\n",x1,y1,x2,y2);
	                           else printf("No Overlap\n");
	                           }
	                 else printf("No Overlap\n");
	    return 0;
	}
