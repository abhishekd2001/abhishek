#include<stdio.h>
#include<time.h>
/*void details(char name[],char profession[],char qualification[],char address[],long age, long phnum)
{

  printf("Enter the details of the customer;\n");
  printf("\nName:");
  scanf("%s",name);
  printf("\nProfession:");
  scanf("%s",profession);
  printf("\nQualification:");
  scanf("%s",qualification);
  printf("\nAddress");
  scanf("%s",address);
  printf("\nAge:");
  scanf("%ld",&age);
  printf("\nPhone Number");
  scanf("%ld",&phnum);

}*/
void display(char name[50],char profession[50],char qualification[50],char address[50],long age,long phnum)
{
    printf("Details of the customer;");
    printf("\nName %s",name);
    printf("\nProfession:%s",profession);
    printf("\nQualification:%s",qualification);
    printf("\nAddress:%s",address);
    printf("\nAge:%d",age);
    printf("\nPhone Number:%d",phnum);


}
void quiz()
{
  int count=0
  clock_t start,end;
  start=clock();
  int choice;
  printf("\NThe question is : WHAT COMES AFTER c;\n");
  printf("1.a\n");
  printf("2.b\n");
  printf("3.c\n");
  printf("4.d\n");
  printf("Enter the choice");
  scanf("%d",&choice);
  if(choice == 4)
  {
    printf("\nRight");
  }
  else
  {
    printf("\nWrong");
  }

  end =clock();
  double d1=((double)end-(double)start)/CLOCKS_PER_SEC;
  printf("\nThe time takne is :%lf",d1);
  if(d1>30)
  {
    printf("idk");
  }
  else
  {
    printf("ik");
  }
}


int main()
{
  char name[50],profession[50],qualification[50],address[50];
  long age;long phnum;
  printf("Enter the details of the customer;\n");
  printf("\nName:");
  scanf("%s",name);
  printf("\nProfession:");
  scanf("%s",profession);
  printf("\nQualification:");
  scanf("%s",qualification);
  printf("\nAddress:");
  scanf("%s",address);
  printf("\nAge:");
  scanf("%ld",&age);
  printf("\nPhone Number");
  scanf("%ld",&phnum);
  printf("\n");

  //details(name,profession,qualification,address,age,phnum);
  display(name,profession,qualification,address,age,phnum);
  quiz();
}
/*void TIME()
void quiz()
void results()
void rating()*/
