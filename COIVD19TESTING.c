
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    char a,b,c,d,e,f,name[20],state[20],city[20];
    int i,j=1,age,x,count=0,p;

            printf("\n\n\t\t****************INFECTION RATE TEST COVID19 *******************\n\n");


   printf("\t\t\t\tPLEASE ENTER YOUR BASIC INFORMATION \n");
   printf("\tNAME:- ");
   scanf("%s",name);
   printf("\tAGE:- ");
   scanf("%d", &age);
   if (age<=13 || age>=50)
   {
       count+=1;
   }
   printf("\tSTATE:- ");
   scanf("%s",state);
   printf("\tCITY:- ");
   scanf("%s",city);


               printf("\n");


printf("\t\t\t\tPLEASE ANSWER THE FOLLOWING QUESTION CORRECTLY\n");
printf("\n\n\tDo you have any travel history across INDIA between jan to july?(y/n)\nAns:- ");
fflush(stdin);
scanf("%c",&a);
if(a=='y' || a=='Y')
{
    count+=1;
}
 printf("\n\n\t Do you came in contact with any covid infected parson?(y/n)\nAns:- ");
     fflush(stdin);
     scanf("%c", &b);
     if(b=='y' || b=='Y')
     {
         count+=1;
     }
 printf("\n\n\t Is there any covid patient in the range of 1 km?(y/n)\nAns:-  ");
 fflush(stdin);
 scanf("%c", &c);
 if(c=='y' || c=='Y')
 {
     count+=1;
 }
 printf("\n\n\tAre you suffering of any kind of diseases like CANCER,DIABETES or LUNGS DISEASES?(y/n)\nAns:- ");
 fflush(stdin);
 scanf("%c", &d);
if(d=='y' || d=='Y')
{
    count+=1;
}
printf("\n\n\tPlease let us know your body temperature(in C)\n Ans:-");
scanf("%d",&x);
if (x>=38)
{
    count+=1;
}
printf("\n\n\t If you are suffering from any one write y\n\t1) Dry cough \n\t2) Shortness of breath \n\t3) Headaches \n\t4) Aches and Pains \n\t5) Sore throat \n\t6) fatigue \n\t7) Diarrhea  \nAns:- ");
fflush(stdin);
scanf("%c",&e);
if(e=='y' || e=='Y')
{
    count+=1;
}
printf("\n\n\tAre you suffering from bp or suger problem?(y/n)\n Ans:- ");
fflush(stdin);
scanf("%c",&f);
if (f=='y'|| f=='Y')
{
    count+=1;
}
for(int i=0;i<100;i++)
               {

                printf("%c",j);
               }
               printf("\n");
printf("\t\t\t\t PLEASE WAIT WHILE WE ARE ANALYSING DATA ");
int s=10;
    while (1)
    {
        printf("\n\t%d",s);
        sleep(1);
        s--;

        if (s==0 )
        {

printf("\n\n\t\t\t******************* REPORT ***********************\n\n");

               printf("\n");
printf("\n\t \t\t %s \t\t\t%d \t\t\t%s \t\t\t%s \n",name,age,state,city);
count=count*10;

printf("\n\n\t YOUR RATE OF BEING INFECTED IS %d percent",count);


if (count<=20)
{
    printf("\n\n\t\t\t  CONGRATS! YOU ARE IN GREEN ZONE \n ");

}
 else if (count>20 || count<=40)
{
    printf("\n\n\n\t HEY! YOU ARE IN ORANGE ZONE \n");

}
else
{
    printf("\n\n\t\t\t ALERT! YOU ARE IN RED ZONE \n");

}
printf("\n\n\n\t\tProtecting yourself and others from the spread COVID-19\n\nYou can reduce your chances of being infected or spreading COVID-19 by taking some simple precautions:\n\n1)  Regularly and thoroughly clean your hands with an alcohol-based hand rub or wash them with soap and water. Why? Washing your hands with soap and water or using alcohol-based hand rub kills viruses that may be on your hands.\n\n2)  Maintain at least 1 metre (3 feet) distance between yourself and others. Why? When someone coughs, sneezes, or speaks they spray small liquid droplets from their nose or mouth which may contain virus. If you are too close, you can breathe in the droplets, including the COVID-19 virus if the person has the disease.\n\n4)  Avoid going to crowded places. Why? Where people come together in crowds, you are more likely to come into close contact with someone that has COIVD-19 and it is more difficult to maintain physical distance of 1 metre (3 feet).\n\n5)  Avoid touching eyes, nose and mouth. Why? Hands touch many surfaces and can pick up viruses. Once contaminated, hands can transfer the virus to your eyes, nose or mouth. From there, the virus can enter your body and infect you.\n\n6)  Make sure you, and the people around you, follow good respiratory hygiene. This means covering your mouth and nose with your bent elbow or tissue when you cough or sneeze. Then dispose of the used tissue immediately and wash your hands. Why? Droplets spread virus. By following good respiratory hygiene, you protect the people around you from viruses such as cold, flu and COVID-19.\n\n7)  Stay home and self-isolate even with minor symptoms such as cough, headache, mild fever, until you recover. Have someone bring you supplies. If you need to leave your house, wear a mask to avoid infecting others. Why? Avoiding contact with others will protect them from possible COVID-19 and other viruses.\n\n8)  If you have a fever, cough and difficulty breathing, seek medical attention, but call by telephone in advance if possible and follow the directions of your local health authority. Why? National and local authorities will have the most up to date information on the situation in your area. Calling in advance will allow your health care provider to quickly direct you to the right health facility. This will also protect you and help prevent spread of viruses and other infections.\n\n9)  Keep up to date on the latest information from trusted sources, such as WHO or your local and national health authorities. Why? Local and national authorities are best placed to advise on what people in your area should be doing to protect themselves.");


exit(0);
        }
    }
    getch();
}
