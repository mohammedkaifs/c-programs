   #include<stdio.h>
   #include<stdlib.h>
   int a[10],n,i,elem,pos;

   void create()
   {
       printf("Enter the size of array:");
       scanf("%d",&n);
       printf("\n Enter the number of elements");
       for(i=0;i<n;i++)
       scanf("%d",&a[i]);

   }

   void display()
   {
       printf("\n The array elements are:");
       for(i=0;i<n;i++)
       {
           printf("\t%d",a[i]);

       }
   }

   void insert()
   {
       printf("\n Enter the position of new element:");
       scanf("%d",&pos);
       printf("\n Enter the new element you want to insert:");
       scanf("%d",&elem);
       for(i=n-1;i>=pos;i--)
       {
           a[i+1]=a[i];

       }
       printf("\n The array elements are:");
       for(i=0;i<n;i++)
       {
           printf("\t%d",a[i]);

       }
       a[pos]=elem;
       n=n+1;
   }

   void del()
   {
       printf("Entre the position of the element you want to delete");
       scanf("%d",&pos);
       elem=a[pos];
       for(i=pos;i<n-1;i++)
       {
       a[i]=a[i+1];
       }
       n=n-1;
       printf("\n The deleted element is = %d",elem);


   }

   int main()
   {
       int ch;
       do
       {
           printf("\n\n---menu----\n");
           printf("\n 1.create\n 2.display\n 3.Insert\n 4.delete\n 5.Exit\n");
           printf("\n Enter you choice ");
           scanf("%d",&ch);
           switch(ch)
           {
               case 1:create();
               break;
               case 2:display();
               break;
               case 3:insert();
               break;
               case 4:del();
               break;
               case 5:exit(0);
               break;
               default:
               printf("\n invalid choice");
               break;

           }
       }
       while(ch!=5);

    return 0;
}