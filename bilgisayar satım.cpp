
#include <stdio.h>
main(){
 struct bilgisayar{
 int no;
 int adet;
 char adi[22];
 char firma[15];
 char tipi[15];
 int ram;
 int hafiza;
 char hafizaAdi[15];
 int bit;
 int WinV;
 int fiyat;
 int gpu;
 char gpuAdi[15];
 char ekranB[15];
 };
 int i, n, kredi_kart = 100000;
 struct bilgisayar BS[6] = {
 {1,12,"Legion","Lenovo","Laptop",8,1,"SSD",64,10,30000,1,"Nvidia-GeForce", "HD"},
 {2,15,"Yoga","Lenovo","Laptop",16,1,"SSD",64,11,39000,1,"Nvidia-GeForce", "HD"},
{3,5,"X302LA","Asus","Laptop",8,2,"HDD",64,11,34000,0,"","HD"},
 {4,76,"Carbon X2", "Lenovo","Laptop",4,1,"HHD",32,8, 55000,0, "", "HD"},
 {5,45,"Thinkpad","Lenovo","PC",16,5,"SSD",64,11,55000,0, "","HD"},
 {6,23,"HP Pavilion Laptop15","HP","PC",32,16,"HDD",64,10,34999,0, "", "HD"}
 };
 printf("-----------------------------------------\n");
 for(i=0;i<6;i++){
 printf("%d. Adi: %s\n", i, BS[i].adi);
 printf("Fiyat: %dTL\n", BS[i].fiyat);
 }

 int x, y;
 printf("-----------------------------------------\n");
 i=1;
 while(i==1){
 printf("Hangi bilgasayar satin almak istiyorsunuz?(Numarasini yazin): ");
 scanf("%d", &x);
 printf("%s bilgisayari satin almak ichin 1, detay icin basin\n", BS[x].adi);
 scanf("%d", &y);
 if(x>5){printf("Yanlish numara!!!!\n");}
 else{
 if(y==1 & kredi_kart>BS[x].fiyat & BS[i].adet !=
0){printf("Siparis verildi.\n"); kredi_kart-=BS[x].fiyat;
BS[x].adet--; printf("Kalan para: %dTL\n", kredi_kart);}
 else if(y==1 & kredi_kart<BS[x].fiyat){printf("Parayetmiyor veya stokta yok!!!\n");}
 if(y==2){
 printf("Adi: %s\n",BS[x].adi);
 printf("Firma: %s\n",BS[x].firma);
 printf("Tipi: %s\n",BS[x].tipi);
 printf("Ram: %dGB\n", BS[x].ram);
 printf("Hafiza: %dTB\n", BS[x].hafiza);
 printf("Hafiza tipi: %s\n",BS[x].hafizaAdi);
 printf("Bit: %d\n", BS[x].bit);
 printf("Windows version: %d\n", BS[x].WinV);
 printf("Fiyat: %dTL\n", BS[x].fiyat);
 if(BS[x].gpu == 1){
 printf("GPU adi: %s\n",BS[x].gpuAdi);
 }
 }
 }
 printf("Devam etmek istiyorsaniz 1 basin: ");
 scanf("%d", &i);
 }
}
