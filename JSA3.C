#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
 int bil[10],i,jGenap=0,jGanjil=0,jb;
 do
 {
  clrscr();
  printf("Jumlah bilangan bulat positif yg akan diinput	= ");
  scanf("%d",&jb);
 } while(jb>10);

 //proses input bilangan sebanyak jb
 for(i=0;i<jb;i++){
  printf("Masukan bilangan ke-%d = ",i+1);
  scanf("%d",&bil[i]);
 }

 //proses menampilkan bilangan genap
 printf("Bilangan genapnya adalah = ");
 for(i=0;i<jb;i++){
  if(bil[i]%2==0)
  {
   printf("%d",bil[i]);
   jGenap+=bil[i];
  }
 }
 printf("\nJumlahnya adalah %d",jGenap);

 //proses menampilkan bilangan ganjil
 printf("\nBilangan ganjilnya adalah = ");
 for(i=0;i<jb;i++){
  if(bil[i]%2==1){
   printf("%d",bil[i]);
   jGanjil+=bil[i];
  }
 }
 printf("\nJumlahnya adalah = %d",jGanjil);

 getch();
 return 0;
}