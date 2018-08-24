#include <stdlib.h>
#include <stdio.h>

int main()

{
    int menu,secim,satisytl,depob,depoL,depod,lmtbnznytl,lmtlpgytl,lmtdzlytl;
    char guncelleme,satis,cevap;
    float dizel,benzin,lpg,benzinal,lpgal,dizelal,benzinkar,dizelkar,lpgkar,toplamdiz,toplamlpg,toplambenz,toplamkznc;
    dizel=3.12;
    benzin=3.28;
    lpg=1.78;
    depob=1000;
    depoL=1000;
    depod=1000;
    
    
    printf("\n\t\t|--------------------------------------------------|\n\t\t| |\n");
    printf("\n\t\t|--------------------------------------------------|\n\t\t| |\n");
    printf("\t\t|--------------------------------------------------|\n\t\t|                                                  |\n\t\t|--------------------------------------------------|\n                |                                                  |");
    printf("\n\t\t|\t1-\tBirim Fiyat Listesi                |\n");
    printf("\t\t|\t2-\tBirim Fiyat Guncellemesi           |\n");
    printf("\t\t|\t3-\tAkaryakit Satisi Yap               |\n");
    printf("\t\t|\t4-\tDepo Durumunu Goster               |\n");
    printf("\t\t|\t5-\tToplam Satislari Goster            |\n");
    printf("\t\t|\t6-\tAna Menuye Don                     |\n");
    printf("\t\t|\t7-\tCikis ===>                         |\n\t\t|                                                  |\n\t\t\\--------------------------------------------------/ \n\n\n");
    printf("\t\t\t\t! Seciminiz= ");
    scanf("%d",&secim);
    
    while(secim!=1 && secim!=2 && secim!=3 && secim!=4 && secim!=5 && secim!=6 && secim!=7)
    {
    printf("\n\t\tLutfen ayrintilara ulasmak icin 1-7 arasi sayi giriniz\n");
    printf("\n\t\t\t\t! Seciminiz= ");
    scanf("%d",&secim);
    }
    
    while (secim==1 || secim==2 || secim==3 || secim==4 || secim==5 || secim==6 || secim==7)
    {
                    if (secim==1)
                    {
                        
                        printf("\n\n\t\tBirim Fiyat Listesi:     Dizel (D):  %.2f YTL/Lt   \n",dizel);
                        printf("\t\t\t\t         Benzin(B):  %.2f YTL/Lt    \n",benzin);
                        printf("\t\t\t\t         LPG   (L):  %.2f YTL/Lt   \n",lpg);      
                        printf("\n\n\t\t--------------------------------------------------\n");
                        printf("\t     || 1-FiyatListesi 2-FiyatGuncelleme 3-SatisYap       || \n\t     || 4-DepoDurumu 5-ToplamSatislar 6-AnaMENU 7-Cikis   ||");
                        printf("\n\n\t\t--------------------------------------------------\n\n\n\t\t\t\t! Seciminiz= ");
                   
                        scanf("%d",&secim);
                             
                             while(secim!=1 && secim!=2 && secim!=3 && secim!=4 && secim!=5 && secim!=6 && secim!=7)
                             {
                             printf("\n\t\tLutfen ayrintilara ulasmak icin 1-7 arasi sayi giriniz\n");
                             printf("\n\t\t\t\t! Seciminiz= ");
                             scanf("%d",&secim);
                             }
                    }
                    
/*        ==================================> MENU 2222  <=============================================                */ 
                   
                    while (secim==2)
                 
                {
                        printf("\n\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\t\t\t Fiyat Guncellemek Istediginiz Urun: ");
                        printf("\n\t\t\t -- AnaMenuye Donmek Icin M yazin --");
                        printf("\n\n\t\t\t Benzin Dizel Lpg (B-D-L) =  ");
                        scanf("%s",&guncelleme);
                        
                        if (guncelleme=='b' || guncelleme=='B')
                        {
                        printf("\n\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\tBenzin Fiyat Guncelle  ==>    Benzin Fiyati= %.2f\n",benzin);
                        printf("\t\t\t\t      Benzin Yeni Fiyati Giriniz: ");
                        scanf("%f",&benzin);
                        printf("\n\n\t\tDegisiklik Yapildi, Yeni Benzin Fiyati: %.2f\n\n",benzin);
                        break;
                        }
                                           
                                           
                        if (guncelleme=='d' || guncelleme=='D')
                        {
                        printf("\n\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\tDizel Fiyat Guncelle  ==>    Dizel Fiyati= %.2f\n",dizel);
                        printf("\t\t\t\t     Dizel Yeni Fiyati Giriniz: ");
                        scanf("%f",&dizel);
                        printf("\n\n\t\tDegisiklik Yapildi, Yeni Dizel Fiyati: %.2f\n\n",dizel);
                        break;
                        }          
                                
                                
                        if (guncelleme=='l' || guncelleme=='L')
                        {
                        printf("\n\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\tLpg Fiyat Guncelle  ==>    Lpg Fiyati= %.2f\n",lpg);
                        printf("\t\t\t\t   Lpg Yeni Fiyati Giriniz: ");
                        scanf("%f",&lpg);
                        printf("\n\n\t\tDegisiklik Yapildi, Yeni Lpg Fiyati: %.2f\n\n",lpg);
                        break;
                        }  
                        
                        if (guncelleme=='M' || guncelleme=='m')
{
                        printf("\n\n\t\t--------------------------------------------------\n\a");
                        printf("\t     || 1-FiyatListesi 2-FiyatGuncelleme 3-SatisYap       || \n\t     || 4-DepoDurumu 5-ToplamSatislar 6-AnaMENU 7-Cikis   ||");
                        printf("\n\n\t\t--------------------------------------------------\n\n\n\t\t\t\t! Seciminiz= ");
                        scanf("%d",&secim);
                        while(secim!=1 && secim!=2 && secim!=3 && secim!=4 && secim!=5 && secim!=6 && secim!=7)
                        {
                        printf("\n\t\tLutfen ayrintilara ulasmak icin 1-7 arasi sayi giriniz\n");
                        printf("\n\t\t\t\t! Seciminiz= ");
                        scanf("%d",&secim);
                        }
}

                        else printf("\n\a\t\t\t (!) ===>   B-D-L Yada M tuslayiniz.");
                }
                
/*        ==================================> MENU 3333  <=============================================                */ 
                
                        if (secim==3)
                        
                {
                        
                                                 
                        printf("\n\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\t\t\t Akaryakit SATISI: Akaryakit tipini secin. \n\n\t\t\t AnaMenuye Donmek Icin M yazin.");
                        printf("\n\n\t\t\t Benzin Dizel Lpg (B-D-L) =  ");  
                        scanf("%s",&satis);
                        
                                     if (satis=='M' || satis=='m')
{
                        printf("\n\n\t\t--------------------------------------------------\n\a");
                        printf("\t     || 1-FiyatListesi 2-FiyatGuncelleme 3-SatisYap       || \n\t     || 4-DepoDurumu 5-ToplamSatislar 6-AnaMENU 7-Cikis   ||");
                        printf("\n\n\t\t--------------------------------------------------\n\n\n\t\t\t\t! Seciminiz= ");
                        scanf("%d",&secim);
                        while(secim!=1 && secim!=2 && secim!=3 && secim!=4 && secim!=5 && secim!=6 && secim!=7)
                        {
                        printf("\n\t\tLutfen ayrintilara ulasmak icin 1-7 arasi sayi giriniz\n");
                        printf("\n\t\t\t\t! Seciminiz= ");
                        scanf("%d",&secim);
                        }
}
                        
                        
                                     
                                     if (satis=='b' || satis=='B')
                                     {
                                                 
                                                 
                                                 if (depob==0)
                                                 {
                                                 printf("\n\n\t\t\t\a-- (!) Uzgunuz Depomuzda Benzin Kalmamistir."); 
                                                 continue;           
                                                 }
                        
                                                 printf("\n\nNe kadarlik alacaksiniz? (YTL) =  ");
                                                 scanf("%d",&satisytl); 
                                                 
                                                 benzinal=satisytl/benzin;
                                                 
                                                 if (benzinal>depob)
                                                 {
                                                 printf("\nDepoda okadar benzin bulunmamaktadir. \n");
                                                 lmtbnznytl=depob*benzin;
                                                 printf("%d YTL lik benzin var, almak istermisiniz? (E/H) = ",lmtbnznytl);
                                                 scanf("%s",&cevap);
                                 
                                                 if (cevap=='e' || cevap=='E')
                                                 {
                                                 
                                                 printf("\n(!)  =>  %d YTL Benzin aldiniz.",lmtbnznytl);
                                                 depob=0;
                                                 continue;
                                                 }
                                                 
                                                 if (cevap=='h' || cevap=='H')
                                                 continue;
                                                 }
                        
                                                 printf("\n\n(!)  =>  %.2f LT - %d YTL lik benzin satin aldiniz!",benzinal, satisytl);
                                                 printf("\n\n(!)  =>  Dolum tamamlanmistir.");
                                                 depob=depob-benzinal;
                                                 printf("\n\n\t\t--------------------------------------------------\n");
                                                 printf("\t     || 1-FiyatListesi 2-FiyatGuncelleme 3-SatisYap       || \n\t     || 4-DepoDurumu 5-ToplamSatislar 6-AnaMENU 7-Cikis   ||");
                                                 printf("\n\n\t\t--------------------------------------------------\n\n\n\t\t\t\t! Seciminiz= ");
                                                 scanf("%d",&secim);
                        
                        
                                       }               
                        
                                                
                                     
                                     if (satis=='l' || satis=='L')
                                     {
                                                 
                                                 
                                                 if (depoL==0)
                                                 {
                                                 printf("\n\n\t\t\t\a-- (!) Uzgunuz Depomuzda LPG Kalmamistir."); 
                                                 continue;           
                                                 }
                        
                                                 printf("\n\nNe kadarlik alacaksiniz? (YTL) =  ");
                                                 scanf("%d",&satisytl); 
                                                 
                                                 lpgal=satisytl/lpg;
                                                 
                                                 if (lpgal>depoL)
                                                 {
                                                 printf("\nDepoda okadar Lpg bulunmamaktadir. \n");
                                                 lmtlpgytl=depoL*lpg;
                                                 printf("%d YTL lik Lpg var, almak istermisiniz? (E/H) = ",lmtlpgytl);
                                                 scanf("%s",&cevap);
                                 
                                                 if (cevap=='e' || cevap=='E')
                                                 {
                                                 
                                                 printf("\n(!)  =>  %d YTL LPG aldiniz.",lmtlpgytl);
                                                 depoL=0;
                                                 continue;
                                                 }
                                                 
                                                 if (cevap=='h' || cevap=='H')
                                                 continue;
                                                 }
                        
                                                 printf("\n\n(!)  =>  %.2f LT - %d YTL lik lpg satin aldiniz!",lpgal, satisytl);
                                                 printf("\n\n(!)  =>  Dolum tamamlanmistir.");
                                                 depoL=depoL-lpgal;
                                                 printf("\n\n\t\t--------------------------------------------------\n");
                                                 printf("\t     || 1-FiyatListesi 2-FiyatGuncelleme 3-SatisYap       || \n\t     || 4-DepoDurumu 5-ToplamSatislar 6-AnaMENU 7-Cikis   ||");
                                                 printf("\n\n\t\t--------------------------------------------------\n\n\n\t\t\t\t! Seciminiz= ");
                                                 scanf("%d",&secim);
                        
                        
                                       }               
                        
                                       
                                       if (satis=='d' || satis=='D')
                                       {
                                                 
                                                 
                                                 if (depod==0)
                                                 {
                                                 printf("\n\n\t\t\t\a-- (!) Uzgunuz Depomuzda Dizel Kalmamistir."); 
                                                 continue;           
                                                 }
                        
                                                 printf("\n\nNe kadarlik alacaksiniz? (YTL) =  ");
                                                 scanf("%d",&satisytl); 
                                                 
                                                 dizelal=satisytl/dizel;
                                                 
                                                 if (dizelal>depod)
                                                 {
                                                 printf("\nDepoda okadar Dizel bulunmamaktadir. \n");
                                                 lmtdzlytl=depod*dizel;
                                                 printf("%d YTL lik Dizel var, almak istermisiniz? (E/H) = ",lmtdzlytl);
                                                 scanf("%s",&cevap);
                                 
                                                 if (cevap=='e' || cevap=='E')
                                                 {
                                                 
                                                 printf("\n(!)  =>  %d YTL Dizel aldiniz.",lmtdzlytl);
                                                 depod=0;
                                                 continue;
                                                 }
                                                 
                                                 if (cevap=='h' || cevap=='H')
                                                 continue;
                                                 }
                        
                                                 printf("\n\n(!)  =>  %.2f LT - %d YTL lik Dizel satin aldiniz!",dizelal, satisytl);
                                                 printf("\n\n(!)  =>  Dolum tamamlanmistir.");
                                                 depod=depod-dizelal;
                                                 printf("\n\n\t\t--------------------------------------------------\n");
                                                 printf("\t     || 1-FiyatListesi 2-FiyatGuncelleme 3-SatisYap       || \n\t     || 4-DepoDurumu 5-ToplamSatislar 6-AnaMENU 7-Cikis   ||");
                                                 printf("\n\n\t\t--------------------------------------------------\n\n\n\t\t\t\t! Seciminiz= ");
                                                 scanf("%d",&secim);
                        
                        
                                       }               
                        
                        
                           
                }
                
                                
/*        ==================================> MENU 4444 <=============================================                */ 

                        if (secim==4)
                {
                                                 printf("Benzin DEPO DURUMU:");
                                                 
                                                 if (depob==0 || depob<200)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                
                                                 }
                                                 
                                                 if (depob<300 && depob>=200)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 }    
                                                                                                 
                                                 if (depob<400 && depob>=300)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 }               
                                                                                                  
                                                 if (depob<500 && depob>=400)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 }                                                    
                                                 if (depob<600 && depob>=500)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 }                                                    
                                                 if (depob<700 && depob>=600)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 }   
                                                 
                                                                                                  
                                                 if (depob<800 && depob>=700)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 }   
                                                                                                  
                                                 if (depob<900 && depob>=800)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 }                                                    
                                                 if (depob<=1000 && depob>=900)
                                                 {
                                                 printf("\n\nI********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                  
                                                 }  printf("\nLPG DEPO DURUMU:");
                                                 
                                                 if (depoL==0 || depoL<200)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 }
                                                 
                                                 if (depoL<300 && depoL>=200)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 }    
                                                                                                 
                                                 if (depoL<400 && depoL>=300)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 }               
                                                                                                  
                                                 if (depoL<500 && depoL>=400)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 }                                                    
                                                 if (depoL<600 && depoL>=500)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 }                                                    
                                                 if (depoL<700 && depoL>=600)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 }   
                                                 
                                                                                                  
                                                 if (depoL<800 && depoL>=700)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 }   
                                                                                                  
                                                 if (depoL<900 && depoL>=800)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 }                                                    
                                                 if (depoL<=1000 && depoL>=900)
                                                 {
                                                 printf("\n\nI********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 
                                                 }   printf("\nDizel DEPO DURUMU:");
                                                 
                                                 if (depod==0 || depod<200)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 }
                                                 
                                                 if (depod<300 && depod>=200)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 }    
                                                                                                 
                                                 if (depod<400 && depod>=300)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 }               
                                                                                                  
                                                 if (depod<500 && depod>=400)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 }                                                    
                                                 if (depod<600 && depod>=500)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 }                                                    
                                                 if (depod<700 && depod>=600)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 }   
                                                 
                                                                                                  
                                                 if (depod<800 && depod>=700)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 }   
                                                                                                  
                                                 if (depod<900 && depod>=800)
                                                 {
                                                 printf("\n\nI        I\n");
                                                 printf("I        I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 }                                                    
                                                 if (depod<=1000 && depod>=900)
                                                 {
                                                 printf("\n\nI********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 printf("I********I\n");
                                                 
                                                 }   
                                                                         printf("\n\n\t\t--------------------------------------------------\n");
                        printf("\t     || 1-FiyatListesi 2-FiyatGuncelleme 3-SatisYap       || \n\t     || 4-DepoDurumu 5-ToplamSatislar 6-AnaMENU 7-Cikis   ||");
                        printf("\n\n\t\t--------------------------------------------------\n\n\n\t\t\t\t! Seciminiz= ");
                   
                        scanf("%d",&secim);
                             
                             while(secim!=1 && secim!=2 && secim!=3 && secim!=4 && secim!=5 && secim!=6 && secim!=7)
                             {
                             printf("\n\t\tLutfen ayrintilara ulasmak icin 1-7 arasi sayi giriniz\n");
                             printf("\n\t\t\t\t! Seciminiz= ");
                             scanf("%d",&secim);
                             }
                }
                
                
/*        ==================================> MENU 5555 <=============================================                */ 
                        if (secim==5)
                {
                                printf("\n\n TOPLAM SATIS DURUMU;\n\n");
                                toplambenz=1000-depob;
                                printf(" Benzin - Toplam Satilan Litre = %.1f\n",toplambenz);
                                benzinkar=(1000-depob)*benzin;
                                printf(" Benzin - Kazanilan YTL        = %.2f\n\n",benzinkar);
                                
                                toplamlpg=1000-depoL;
                                printf(" LPG    - Toplam Satilan Litre = %.1f\n",toplamlpg);
                                lpgkar=(1000-depoL)*lpg;
                                printf(" LPG    - Kazanilan YTL        = %.2f\n\n",lpgkar);
                                
                                toplamdiz=1000-depod;
                                printf(" Dizel  - Toplam Satilan Litre = %.1f\n",toplamdiz);
                                dizelkar=(1000-depod)*dizel;
                                printf(" Dizel  - Kazanilan YTL        = %.2f\n",dizelkar);
                                
                                toplamkznc=dizelkar+lpgkar+benzinkar;
                                printf("\n\n (!) Toplam KAZANC = %.2f\n\n",toplamkznc);
                        printf("\n\n\t\t--------------------------------------------------\n");
                        printf("\t     || 1-FiyatListesi 2-FiyatGuncelleme 3-SatisYap       || \n\t     || 4-DepoDurumu 5-ToplamSatislar 6-AnaMENU 7-Cikis   ||");
                        printf("\n\n\t\t--------------------------------------------------\n\n\n\t\t\t\t! Seciminiz= ");
                   
                        scanf("%d",&secim);
                             
                             while(secim!=1 && secim!=2 && secim!=3 && secim!=4 && secim!=5 && secim!=6 && secim!=7)
                             {
                             printf("\n\t\tLutfen ayrintilara ulasmak icin 1-7 arasi sayi giriniz\n");
                             printf("\n\t\t\t\t! Seciminiz= ");
                             scanf("%d",&secim);
                             }
                                     
                                     
                                     
                }
                    
                                
/*        ==================================> MENU 6666 <=============================================                */ 

                        if (secim==6)
                {
                                printf("\n\t\t|--------------------------------------------------|\n\t\t|AutoGAS Benzin Istasyonu - OTOMASYON v1.0184712874|\n");
                                printf("\t\t|--------------------------------------------------|\n\t\t|                                                  |\n\t\t|--------------------------------------------------|\n                |                                                  |");
                                printf("\n\t\t|\t1-\tBirim Fiyat Listesi                |\n");
                                printf("\t\t|\t2-\tBirim Fiyat Guncellemesi           |\n");
                                printf("\t\t|\t3-\tAkaryakit Satisi Yap               |\n");
                                printf("\t\t|\t4-\tDepo Durumunu Goster               |\n");
                                printf("\t\t|\t5-\tToplam Satislari Goster            |\n");
                                printf("\t\t|\t6-\tAna Menuye Don                     |\n");
                                printf("\t\t|\t7-\tCikis ===>                         |\n\t\t|                                                  |\n\t\t\\--------------------------------------------------/ \n\n\n");
                                printf("\t\t\t\t! Seciminiz= ");
                                scanf("%d",&secim);
                        
                            while(secim!=1 && secim!=2 && secim!=3 && secim!=4 && secim!=5 && secim!=6 && secim!=7)
                            {
                            printf("\n\t\tLutfen ayrintilara ulasmak icin 1-7 arasi sayi giriniz\n");
                            printf("\n\t\t\t\t! Seciminiz= ");
                            scanf("%d",&secim);
                            }
                }

                        
                                        
/*        ==================================> MENU 7777 <=============================================                */ 
                        if (secim==7)
                {
                                     printf("\n\n\a\t\t\t-----------------------------------\n\t\t\t    Cikmak icin bir tusa basiniz.\n\n");
                                     system("PAUSE");
                                     return 0;             
                }
    
                            while(secim!=1 && secim!=2 && secim!=3 && secim!=4 && secim!=5 && secim!=6 && secim!=7)
                            {
                            printf("\n\t\tLutfen ayrintilara ulasmak icin 1-7 arasi sayi giriniz\n");
                            printf("\n\t\t\t\t! Seciminiz= ");
                            scanf("%d",&secim);
                            }
    
}

system("PAUSE");
return 0;   
}