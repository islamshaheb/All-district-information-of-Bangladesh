#include<stdio.h>

struct district{
    char name[333];
    char division[666];
    int area;
    int people;
    int density;
    int post;
    int upozila;
    int edu;
    char place[999];
    char dis[9999];
    char man[999];
    }p[50];

void search_district(struct district ma[],int n)
{
    int i;
     system("COLOR 1a");
      char r[50];
 printf("Enter a District name to search it:\n");
scanf("%s",&r);
printf("%s\n",r);
   int dx,k=0;
   for(i=0;i<n;i++){
   if(strcmp(ma[i].name,r)==0)
    {
    dx=i;
    k=1;
    break;
   }}
if(k==1){
 printf("\n\nafter entering a name,all information of this student is:\n\n");
 {  printf("cc%d\n",dx);
  printf("District name:%s\n Division:%s\n Area:%d(sq KM)\n  Population:%d\n Density:%d\n Postal Code:%d\n Amount of Upozila:%d\n Education Percentage:%d%\n Historical Place:%s\n Border:%s\n Famous Person:%s\n\n\n",ma[dx].name,ma[dx].division,ma[dx].area,ma[dx].people,ma[dx].density,ma[dx].post,ma[dx].upozila,ma[dx].edu,ma[dx].place,ma[dx].dis,ma[dx].man);
   }}
   else
    printf("Search Not Found\n");
    }

void division(struct district ma[],int n)
{
    int i;
    system("COLOR 2a");
      char r[50];
 printf("Enter a division name to search it:\n");
scanf("%s",&r);
printf("%s\n",r);
   int dx;
   printf("District name:\n");
   for(i=0;i<n;i++){
   if(strcmp(ma[i].division,r)==0)
    {
        printf("%s\n",ma[i].name);
   }}
}
void place(struct district ma[],int n)
{
    int i;
    system("COLOR 4a");
      char r[50];
 printf("Enter a district name to search it's Historical place:\n");
scanf("%s",&r);
printf("%s\n",r);
   int pdx,k=0;
   for(i=0;i<n;i++){
   if(strcmp(ma[i].name,r)==0)
    {k=1;
        pdx=i;
        break;
   }}
   if(k==1)
   printf("A%s %s %f ll historical name of This district %s\n",ma[pdx].place);
else
    printf("Search Not Found\n");
}
void area(struct district ma[],int n)
{
    int i;

    system("COLOR 5a");
      char r[50];
 printf("Enter a district name to  it's Area :\n");
scanf("%s",&r);
printf("%s\n",r);
   int pdx,k=0;
   for(i=0;i<n;i++){
   if(strcmp(ma[i].name,r)==0)
    {k=1;
        pdx=i;
        break;
   }}
    if(k==1)
   printf("The Area This district %d\n\n\n",ma[pdx].area);
else
    printf("Search Not Found\n");


}
void population(struct district ma[],int n)
{
//    char ch[10];
    int i,v;
  system("COLOR 5a");
      char r[50];
 printf("Enter a district name to see it's population :\n");
scanf("%s",&r);
printf("%s\n",r);
   int pdx,k=0;
   for(i=0;i<n;i++){
   if(strcmp(ma[i].name,r)==0)
    {k=1;
        pdx=i;
        break;
   }}
   if(k==1)
   printf("The amount of people This district %d\n\n\n",ma[pdx].people);
else
    printf("Search Not Found\n");
}
void density(struct district ma[],int n)
{

int i;
    system("COLOR 61");
      char r[50];
 printf("Enter a district name to see it's density :\n");
scanf("%s",&r);
printf("%s\n",r);
   int pdx,k=0;
   for(i=0;i<n;i++){
   if(strcmp(ma[i].name,r)==0)
    { k=1;
        pdx=i;
        break;
   }}
   if(k==1)
   printf("The density of This district %d(sq)KM\n\n\n",ma[pdx].density);
else
    printf("Search Not Found\n");
}

//............................
void read (struct district ma[],int n)
{
    FILE *fp;
    int t,i;
    fp=fopen("district.txt","r");
   fscanf(fp,"%d",&t);


    for(i=0;i<t;i++)
    {
        fscanf(fp,"%s %s %d %d %d %d %d %d %s %s %s",&ma[i].name,&ma[i].division,&ma[i].area,&ma[i].people,&ma[i].density,&ma[i].post,&ma[i].upozila,&ma[i].edu,&ma[i].place,&ma[i].dis,&ma[i].man);
    }    fclose(fp);
}

void compare(struct district ma[],int n)
{ int i,j;
    printf("Enter b to see biggest district and this area:\n");
printf("Enter c to see smallest district and area:\n");
printf("Enter d to see highest population district and population:\n");
printf("Enter e to see smallest population district and population:\n");
printf("Enter 0 to return main menu:\n");
   while(1){
    char c;
    scanf("%c",&c);


 if(c=='b')
    {system("COLOR 2");
       int mx=-120,indx;
    for(j=0;j<n;j++)
    {
        if(mx<ma[j].area)
        {
            mx=ma[j].area;
            indx=j;
        }
    }
    printf("biggest District's Area  %d  and this District  name: %s  \n",ma[indx].area,ma[indx].name);
    }
    else if(c=='d')
    {system("COLOR 08")
    ;
       int mx=-120,indx;
    for(j=0;j<n;j++)
    {
        if(mx<ma[j].people)
        {
            mx=ma[j].people;
            indx=j;
        }
    }
    printf("biggest District's population  %d  and this District  name: %s  \n\n",ma[indx].people,ma[indx].name);
}else if(c=='c'){
            system("COLOR 70");
    int min=9999999999999,in;
    for(i=0;i<n;i++)
    {
        if(min>ma[j].area)
        {
            min=ma[j].area;
            in=j;
        }
    }
    printf("Smallest area: %d  and this district name: %s\n",ma[in].area,ma[in].name);
}
else if(c=='e'){
            system("COLOR 70");
    int min=99999999999,indx1;
    for(j=0;j<n;j++)
    {
        if(min>ma[j].people)
        {
            min=ma[j].people;
            indx1=j;
        }
    }
    printf("Smallest population: %d  and this district name: %s  \n",ma[indx1].people,ma[indx1].name);
}
else if(c=='0')
    return ;
}}
void postal_code(struct district ma[],int n)
{
  int i;
    system("COLOR 70");
      char r[50];
 printf("Enter a district name to see it's postal code :\n");
scanf("%s",&r);
printf("%s\n",r);
   int pdx;
   for(i=0;i<n;i++){
   if(strcmp(ma[i].name,r)==0)
    {
        pdx=i;
        break;
   }}
   printf("The postal code This district %d\n\n\n",ma[pdx].post);
}
void famous(struct district ma[],int n)
{
    system("COLOR 47");
      char r[50];
 printf("Enter a district name to see it's famous person :\n");
scanf("%s",&r);
printf("%s\n",r);
   int pdx,i;
   for(i=0;i<n;i++){
   if(strcmp(ma[i].name,r)==0)
    {
        pdx=i;
        break;
   }}
   printf("The famous people This district %s\n\n",ma[pdx].man);
}
void border(struct district ma[],int n)
{
    system("COLOR 47");
      char r[50];
 printf("Enter a district name to see it's border :\n");
scanf("%s",&r);
printf("%s\n",r);
   int pdx,i;
   for(i=0;i<n;i++){
   if(strcmp(ma[i].name,r)==0)
    {
        pdx=i;
        break;
   }}
   printf(" This district %s\n\n",ma[pdx].dis);

}
void del(struct district ma[],int n)
{
    system("COLOR 08");
 char r[50];
 printf("Enter a District name to delete it\n");
scanf("%s",&r);
printf("%s\n",r);
   int i, dindx;
   for(i=0;i<n;i++){
   if(strcmp(ma[i].name,r)==0)
    {
    dindx=i;
    break;
   }}
printf("index %d\n",dindx);
FILE *fp1;
   fp1=fopen("nw.txt","w");

 for(i=dindx+1;i<n;++i)
 {
     ma[i-1]=ma[i];

 }
 printf("\n\nafter deleting a name:\n\n");
 for(i=0;i<n-1;i++){
  fprintf(fp1,"District name:%s\n Division:%s\n Area:%d(sq KM)\n  Population:%d\n Density:%d\n Postal Code:%d\n Amount of Upozila:%d\n Education Percentage:%d %\n Historical Place:%s\n Border:%s\n Famous Person:%s\n\n\n",ma[i].name,ma[i].division,ma[i].area,ma[i].people,ma[i].density,ma[i].post,ma[i].upozila,ma[i].edu,ma[i].place,ma[i].dis,ma[i].man);
  printf("District name:%s\n Division:%s\n Area:%d(sq KM)\n  Population:%d\n Density:%d\n Postal Code:%d\n Amount of Upozila:%d\n Education Percentage:%d %\n Historical Place:%s\n Border:%s\n Famous Person:%s\n\n\n",ma[i].name,ma[i].division,ma[i].area,ma[i].people,ma[i].density,ma[i].post,ma[i].upozila,ma[i].edu,ma[i].place,ma[i].dis,ma[i].man);
 }
}
void aorder(struct district ma[],int n)
{
int i,j;
 printf("\n\nascending order comparing With Area:\n");

     for(i=0;i<n;i++){int max=-120,ndx;
     for(j=0;j<n;j++)
    {
        if(max<ma[j].area)
        {
            max=ma[j].area;
            ndx=j;

        }
    }
        printf("%d:%s %d\n",i+1,ma[ndx].name,ma[ndx].area);
    ma[ndx].area=-1;
     }
}
void dorder(struct district ma[],int n)
{
int i,j;
 system("COLOR 02");
 printf("\n\nascending order comparing people:\n");

     for(i=0;i<n;i++){int max=-120,ndx;
     for(j=0;j<n;j++)
    {
        if(max<ma[j].people)
        {
            max=ma[j].people;
            ndx=j;

        }
    }
        printf("%d:%s %d\n",i+1,ma[ndx].name,ma[ndx].people);
    ma[ndx].people=-1;
     }

}
void ad(struct district ma[],int n)
{   int i;
    system("COLOR 08");
    for(i=0;i<n;i++)
    {
        printf("District name:%s\n Division:%s\n Area:%d(sq KM)\n  Population:%d\n Density:%d\n Postal Code:%d\n Amount of Upozila:%d\n Education Percentage:%d %\n Historical Place:%s\n Border:%s\n Famous Person:%s\n\n\n",ma[i].name,ma[i].division,ma[i].area,ma[i].people,ma[i].density,ma[i].post,ma[i].upozila,ma[i].edu,ma[i].place,ma[i].dis,ma[i].man);
    }

}

//......................

int main()
{
    read(p,50);

printf("\t\tPLEASE WAIT\n");
    printf("..");
    delay(500);
    printf("...");
    delay(500);
    printf("...");
    delay(500);
    printf("...");
    delay(500);
    printf("...\n");
    delay(500);
    //delay(2000);

    int n;
       const char password[15] = "login";
    char pass[15];
    int x;
    int log = 0;

    printf("Enter your password: ");
    scanf("%s", &pass);
    //for(x = 0; x > strlen(pass); x++)
    {
        if(strcmp(pass,"mujahid")==0)
        {
            log = 1;
      //      break;
        }
    }
   if(log==1){
    while(1)
    {
printf("Enter 1 to search district:\n");
printf("Enter 2 to search district under its division:\n");
printf("Enter 3 to see Historical of this district:\n");
printf("Enter 4 to see Area of this district:\n");
printf("Enter 5 to see population of this district:\n");
printf("Enter 6 to see Density of this district:\n");
printf("Enter 7 to see Postal Code of this district:\n");
printf("Enter 8 to see Famous person of this district:\n");
printf("Enter 9 to see Border of this district:\n");
printf("Enter 10 to comparing:\n");
printf("Enter 11 to delete a district and write in another File\n");
printf("Enter 12 to see all District in Ascending Order comparing with Area\n");
printf("Enter 13 to see all District in Ascending Order comparing with People\n");
printf("Enter 0 to exit:\n");
printf("Enter 14 to see all district and information:\n");
printf("Enter Your Choice....\n");
scanf("%d",&n);
        if(n==0)
            break;
        if(n==1)
            search_district(p,50);
        if (n==2)
            division(p,50);
        if(n==3)
            place(p,50);
        if(n==4)
            area(p,50);
        if(n==5)
            population(p,50);
        if(n==6)
            density(p,50);
        if(n==7)
            postal_code(p,50);
     if(n==8)
        famous(p,50);
        if(n==9)
             border(p,50);
        if(n==10)
            compare(p,50);
        if(n==11)
            del(p,50);
        if(n==12)
              aorder(p,50);
        if(n==13)
               dorder(p,50);
            if(n==14)
                ad(p,50);
            if(n==0)
                exit(1);
    }}
    else
        printf("Invalid Password\n");

}

