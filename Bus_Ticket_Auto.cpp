#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

//Made by Atakan Karaca Da�lar
//will be updating

main() {
	setlocale(LC_ALL, "Turkish");
	
	int sNum;
	char sNam[1000];
	
	
	printf("Merhaba l�tfen ��renci kimlik numaran�z� ve ad�n�z� yaz�n�z\n");
	//��renci numaras�.
	printf("��renci numaran�z: ");
	scanf("%d", &sNum);
	//Ad soyad al�m�.
	printf("Ad�n�z� giriniz: ");
	scanf(" %s", &sNam);
	
	int cinsiyet[40];
	char kullaniciCinsiyet;
	//cinsiyet al�m�.
	
	printf("cinsiyetiniz Erkek[e], Kad�n[k]: ");
	scanf(" %c", &cinsiyet);
	//cinsiyet kar��la�t�rmas�i�in.
	kullaniciCinsiyet = cinsiyet[1];
	
	char secim[10];
	
	printf("\nMerhaba %d %s! Rezervasyon yapmak ister misiniz?\n", sNum, sNam);
	scanf(" %s", &secim);
	
	
	if(strcmp(secim, "Evet") == 0 || strcmp(secim, "evet") == 0){
		
		printf("Programa devam ediliyor...\n");
		system("cls");
		
        
       
        int cinsiyetList[40];
        
        for(int i = 0; i < 40; i++) {
			cinsiyetList[i] = -11;
		}
        
        int doluKoltuklar[40];
        
		for (int i = 0; i < 40; i++) {
    		doluKoltuklar[i] = -1; // -1 dolu olmayan koltuk anlam�na gelir.
		}
        
        
        doluKoltuklar[0] = 1;
        cinsiyetList[0] = 'e';
        
        doluKoltuklar[1] = 19;
        cinsiyetList[1] = 'k';
		
		doluKoltuklar[2] = 24;
        cinsiyetList[2] = 'k';
        
        doluKoltuklar[3] = 27;
        cinsiyetList[3] = 'k';
        
        doluKoltuklar[3] = 36;
        cinsiyetList[3] = 'k';
		
		doluKoltuklar[4] = 11;
        cinsiyetList[4] = 'k';

        
        doluKoltuklar[5] = 7;
        cinsiyetList[5] = 'k';
        
        doluKoltuklar[6] = 10;
        cinsiyetList[6] = 'k';
        
        doluKoltuklar[7] = 22;
        cinsiyetList[7] = 'k';
        
        
        
        
        
        
        
        //rezervasyon i�leri falan fistan...
        // ilk seat cam kenar�
        int firstSeatCounterCam = 3;
        for(int i = 0; i < 20; i++){
       	
       	if(i % 2 == 0) {
       		int varMi = 0;
       		
       		   for(int k = 0; k < 20; k++) {
       		   	    if(firstSeatCounterCam  == doluKoltuklar[k]) {
       		   	    	  varMi = 100;
						}
				  }
				  
			   if(varMi != 0) {
			   	printf("[ X ]");
			   	firstSeatCounterCam  = firstSeatCounterCam  + 4;
			   } else {
			   	printf("[ %d ]", firstSeatCounterCam );
			   	firstSeatCounterCam  = firstSeatCounterCam  + 4;
			   }
			   
		   }
		   printf(" ");
 
	   }
	   printf("\n");
	   
	   
	   // ilk seat koridor taraf�
	   int firstSeatCounterCoridor = 4;

	   for(int i = 0; i < 20; i++){
        if(i % 2 == 0) {
       		int varMi = 0;
       		
       		   for(int k = 0; k < 20; k++) {
       		   	    if(firstSeatCounterCoridor == doluKoltuklar[k]) {
       		   	    	  varMi = 10000;
						}
				  }
				  
			   if(varMi != 0) {
			   	printf("[ X ]");
			   	firstSeatCounterCoridor = firstSeatCounterCoridor + 4;
			   } else {
			   	printf("[ %d ]", firstSeatCounterCoridor);
			   	firstSeatCounterCoridor = firstSeatCounterCoridor + 4;
			   }
			   
		   }
		   printf(" ");
 
	   }
	   
	    printf("\n");
	    printf("\n");
	    
	    // ikinci seat koridor tarafi
	    
	    int secondSeatCounterCoridor = 2;

	   for(int i = 0; i < 20; i++){
        if(i % 2 == 0) {
       		int varMi = 0;
       		
       		   for(int k = 0; k < 20; k++) {
       		   	    if(secondSeatCounterCoridor == doluKoltuklar[k]) {
       		   	    	  varMi = 10000;
						}
				  }
				  
			   if(varMi != 0) {
			   	printf("[ X ]");
			   	secondSeatCounterCoridor = secondSeatCounterCoridor + 4;
			   } else {
			   	printf("[ %d ]", secondSeatCounterCoridor);
			   	secondSeatCounterCoridor = secondSeatCounterCoridor + 4;
			   }
			   
		   }
		   printf(" ");
 
	   }
	   printf("\n");
	   
	   //ikinci seat cam kenari
	    int secondSeatCounterCam = 1;

	   for(int i = 0; i < 20; i++){
        if(i % 2 == 0) {
       		int varMi = 0;
       		
       		   for(int k = 0; k < 20; k++) {
       		   	    if(secondSeatCounterCam == doluKoltuklar[k]) {
       		   	    	  varMi = 100;
						}
				  }
				  
			   if(varMi != 0) {
			   	printf("[ X ]");
			   	secondSeatCounterCam = secondSeatCounterCam + 4;
			   } else {
			   	printf("[ %d ]", secondSeatCounterCam);
			   	secondSeatCounterCam = secondSeatCounterCam + 4;
			   }
			   
		   }
		   printf("�");

	}
	printf("\n");
	printf("\n");
	printf("\n");
	

	
	Atakan:
	
	
	
		int max;
		
		//tercih 1- 2- 3- 4- 5
		//se�im ekran�	
		printf("\n|1|--Sa� cam kenar� i�in \n|2|--Sa� koridor i�in \n|3|--Sol cam kenar� i�in\n|4|--Sol koridor i�in \n|5|--Programdan ��kmak i�in \n");
		
		printf("Se�iminiz > ");
		scanf("%d", &max);
		
		switch(max){
			case 1:{
				
			
				
				int doluOlmayanKoltuklar[100];
                for(int i = 0; i < 100; i++) {
                	doluOlmayanKoltuklar[i] = -15;
				}
				int counter = 0;
				
				
			while(1){
				
				printf("\nSa� cam kenar�n� se�tiniz l�tfen koltuk numaras�n�da se�in \n");
			//se�ilen yerin buradaki yans�mas� c�stak f�stak...
			int sagCamKenari = 3;
			
			
			for(int i = 0; i < 10; i++) {
    		
    				int kontrol = 0;
    				for(int j = 0; j < 40; j++) {
    					if(sagCamKenari == doluKoltuklar[j]) {
    						kontrol = 1;
						}
					}
					
					if(kontrol == 1) {
						printf(" [ X ]");
			      	} else {
					   printf(" [ %d ]", sagCamKenari);
					    doluOlmayanKoltuklar[counter] = sagCamKenari;
					    counter += 1;
			    	}
					
					

    				sagCamKenari = sagCamKenari + 4;
				}
				
				int secilenKoltuk;
				
				//Tekrar se�im yapman laz�m hayat se�imlerle de�i�ir....
				printf("\nSecmek istediginiz koltuk numaras�n� yaz�n�z : ");
				scanf("%d", &secilenKoltuk);
				
				if (secilenKoltuk % 4 != 3) {
        		printf("\nHatal� se�im! Sa� cam kenar� koltuklar�ndan birini se�melisiniz.\n");
        		continue; //Hatal� se�imde yeniden denemen i�in [hayat i�in ge�erli de�il]...
    			}

				
				//dolu mu de�il mi kontrol�
				int dolu = 0;
				
				for(int i = 0; i < 40; i++){
					
					if(secilenKoltuk == doluOlmayanKoltuklar[i]){
						dolu = 1;
						break;
					}
				}
				
				if(dolu == 0){
					 printf("\nSe�ti�iniz koltuk (%d) dolu. L�tfen ba�ka bir koltuk se�in.\n", secilenKoltuk);
					 continue;
				}
			
				
			//Cinsiyetin full c�stak kontrol�.
        	int solKoltuk = secilenKoltuk - 1;
        	int sagKoltuk = secilenKoltuk + 1;
        	int uyusmazlik = 0;
        	for (int i = 0; i < 40; i++) {
            if (doluKoltuklar[i] == solKoltuk || doluKoltuklar[i] == sagKoltuk) {
                if (cinsiyet[i] != kullaniciCinsiyet) {
                    printf("\nSe�ti�iniz koltuk (%d) yan�ndaki koltuk ile cinsiyet uyumsuzlu�u var. L�tfen ba�ka bir koltuk se�in.\n", secilenKoltuk);
                    uyusmazlik = 1;
                    break;
                }
            }
        }
        //Her �ey tamamsa art�k rezerv edilmi�tir.
		if (uyusmazlik == 0) {
            printf("\nSe�ti�iniz koltuk (%d) rezerve edilmi�tir. �yi yolculuklar!\n", secilenKoltuk);
            doluKoltuklar[40] = secilenKoltuk;
            cinsiyet[40] = kullaniciCinsiyet;
            break;
        }
				
			}
			
			break;
		
		}
			case 2: {
				
			//�stteki i�lemin tekrarlanmas� i�te...
			
			int doluOlmayanKoltuklar[100];
                for(int i = 0; i < 100; i++) {
                	doluOlmayanKoltuklar[i] = -15;
				}
				int counter = 0;
			
			
			while(1){
				
				printf("\nSa� koridor se�tiniz l�tfen koltuk numaras�n�da se�in \n");
			
			int sagKorKenari = 4;
			
			
			for(int i = 0; i < 10; i++) {
    		
    				int kontrol = 0;
    				for(int j = 0; j < 40; j++) {
    					if(sagKorKenari == doluKoltuklar[j]) {
    						kontrol = 1;
						}
					}
					
					if(kontrol == 1) {
						printf(" [ X ]");
			      	} else {
					   printf(" [ %d ]", sagKorKenari);
					    doluOlmayanKoltuklar[counter] = sagKorKenari;
					    counter += 1;
			    	}
					
					

    				sagKorKenari = sagKorKenari + 4;
				}
				
				int secilenKoltuk;
				
				
        		
				//se�im
				printf("\nSecmek istediginiz koltuk numaras�n� yaz�n�z : ");
				scanf("%d", &secilenKoltuk);
				
				if (secilenKoltuk % 4 != 0) {
        		printf("\nHatal� se�im! Sa� koridor koltuklar�ndan birini se�melisiniz.\n");
        		continue; //Hatal� se�imde yeniden deneme
    			}

				
				//dolu mu de�il mi kontrol�
				int dolu = 0;
				
				for(int i = 0; i < 40; i++){
					
					if(secilenKoltuk == doluOlmayanKoltuklar[i]){
						dolu = 1;
						break;
					}
				}
				
				if(dolu == 0){
					 printf("\nSe�ti�iniz koltuk (%d) dolu. L�tfen ba�ka bir koltuk se�in.\n", secilenKoltuk);
					 continue;
				}
			
				
			//Cinsiyet kontrol�
        	int solKoltuk = secilenKoltuk - 1;
        	int sagKoltuk = secilenKoltuk + 1;
        	int uyusmazlik = 0;
        	
        	
        	for (int i = 0; i < 40; i++) {
            if (doluKoltuklar[i] == solKoltuk || doluKoltuklar[i] == sagKoltuk) {
                if (cinsiyet[i] != kullaniciCinsiyet) {
                    printf("\nSe�ti�iniz koltuk (%d) yan�ndaki koltuk ile cinsiyet uyumsuzlu�u var. L�tfen ba�ka bir koltuk se�in.\n", secilenKoltuk);
                    uyusmazlik = 1;
                    break;
                }
            }
        }
        
		if (uyusmazlik == 0) {
            printf("\nSe�ti�iniz koltuk (%d) rezerve edilmi�tir. �yi yolculuklar!\n", secilenKoltuk);
            doluKoltuklar[40] = secilenKoltuk;
            cinsiyet[40] = kullaniciCinsiyet;
            break;
        }
				
			}
			
			break;
		}
			case 3: {
				
			//�stteki i�lemin tekrarlanmas� i�te...
			
			
			int doluOlmayanKoltuklar[100];
                for(int i = 0; i < 100; i++) {
                	doluOlmayanKoltuklar[i] = -15;
				}
				int counter = 0;
			
			
			while(1){
				
				printf("\nSol cam kenar�n� se�tiniz l�tfen koltuk numaras�n�da se�in \n");
			
			int solCamKenari = 1;
			
			
			for(int i = 0; i < 10; i++) {
    		
    				int kontrol = 0;
    				for(int j = 0; j < 40; j++) {
    					if(solCamKenari == doluKoltuklar[j]) {
    						kontrol = 1;
						}
					}
					
					if(kontrol == 1) {
						printf(" [ X ]");
			      	} else {
					   printf(" [ %d ]", solCamKenari);
					    doluOlmayanKoltuklar[counter] = solCamKenari;
					    counter += 1;
			    	}
					
					

    				solCamKenari = solCamKenari + 4;
				}
				
				int secilenKoltuk;
				
				//se�im
				printf("\nSecmek istediginiz koltuk numaras�n� yaz�n�z : ");
				scanf("%d", &secilenKoltuk);
				
				if (secilenKoltuk % 4 != 1) {
        		printf("\nHatal� se�im! Sol cam kenar� koltuklar�ndan birini se�melisiniz.\n");
        		continue; //Hatal� se�imde yeniden deneme
    			}

				
				//dolu mu de�il mi kontrol�
				int dolu = 0;
				
				for(int i = 0; i < 40; i++){
					
					if(secilenKoltuk == doluOlmayanKoltuklar[i]){
						dolu = 1;
						break;
					}
				}
				
				if(dolu == 0){
					 printf("\nSe�ti�iniz koltuk (%d) dolu. L�tfen ba�ka bir koltuk se�in.\n", secilenKoltuk);
					 continue;
				}
			
				
			//Cinsiyetin full c�stak kontrol�.
        	int solKoltuk = secilenKoltuk - 1;
        	int sagKoltuk = secilenKoltuk + 1;
        	int uyusmazlik = 0;
        	
        	
        	for (int i = 0; i < 40; i++) {
            if (doluKoltuklar[i] == solKoltuk || doluKoltuklar[i] == sagKoltuk) {
                if (cinsiyet[0] != kullaniciCinsiyet) {
                    printf("\nSe�ti�iniz koltuk (%d) yan�ndaki koltuk ile cinsiyet uyumsuzlu�u var. L�tfen ba�ka bir koltuk se�in.\n", secilenKoltuk);
                    uyusmazlik = 1;
                    break;
                }
            }
        }
        //Her �ey tamamsa art�k rezerv edilmi�tir.
		if (uyusmazlik == 0) {
            printf("\nSe�ti�iniz koltuk (%d) rezerve edilmi�tir. �yi yolculuklar!\n", secilenKoltuk);
            doluKoltuklar[40] = secilenKoltuk;
            cinsiyet[40] = kullaniciCinsiyet;
            break;
        }
				
			}
			
			break;
		}
			case 4: {
				
			
			int doluOlmayanKoltuklar[100];
                for(int i = 0; i < 100; i++) {
                	doluOlmayanKoltuklar[i] = -15;
				}
				int counter = 0;
				
			
			while(1){
				
				printf("\nSol koridor se�tiniz l�tfen koltuk numaras�n�da se�in \n");
			
			int solKorKenari = 2;
			
			
			for(int i = 0; i < 10; i++) {
    		
    				int kontrol = 0;
    				for(int j = 0; j < 40; j++) {
    					if(solKorKenari == doluKoltuklar[j]) {
    						kontrol = 1;
						}
					}
					
					if(kontrol == 1) {
						printf(" [ X ]");
			      	} else {
					   printf(" [ %d ]", solKorKenari);
					    doluOlmayanKoltuklar[counter] = solKorKenari;
					    counter += 1;
			    	}
					
					

    				solKorKenari = solKorKenari + 4;
				}
				
				int secilenKoltuk;
				
				
        		
				//se�im
				printf("\nSecmek istediginiz koltuk numaras�n� yaz�n�z : ");
				scanf("%d", &secilenKoltuk);
				
				if (secilenKoltuk % 4 != 2) {
        		printf("\nHatal� se�im! Sol koridor koltuklar�ndan birini se�melisiniz.\n");
        		continue; //Hatal� se�imde yeniden deneme
    			}

				
				//dolu mu de�il mi kontrol�
				int dolu = 0;
				
				for(int i = 0; i < 40; i++){
					
					if(secilenKoltuk == doluOlmayanKoltuklar[i]){
						dolu = 1;
						break;
					}
				}
				
				if(dolu == 0){
					 printf("\nSe�ti�iniz koltuk (%d) dolu. L�tfen ba�ka bir koltuk se�in.\n", secilenKoltuk);
					 continue;
				}
			
				
			//Cinsiyetin full c�stak kontrol�.
        	int solKoltuk = secilenKoltuk - 1;
        	int sagKoltuk = secilenKoltuk + 1;
        	int uyusmazlik = 0;
        	
        	
        	for (int i = 0; i < 40; i++) {
            if (doluKoltuklar[i] == solKoltuk || doluKoltuklar[i] == sagKoltuk) {
                if (cinsiyet[0] != kullaniciCinsiyet) {
                    printf("\nSe�ti�iniz koltuk (%d) yan�ndaki koltuk ile cinsiyet uyumsuzlu�u var. L�tfen ba�ka bir koltuk se�in.\n", secilenKoltuk);
                    uyusmazlik = 1;
                    break;
                }
            }
        }
        //Her �ey tamamsa art�k rezerv edilmi�tir.
		if (uyusmazlik == 0) {
            printf("\nSe�ti�iniz koltuk (%d) rezerve edilmi�tir. �yi yolculuklar!\n", secilenKoltuk);
            doluKoltuklar[40] = secilenKoltuk;
            cinsiyet[40] = kullaniciCinsiyet;
            break;
        }
				
			}
			
			break;
		}
			case 5: 
			printf("Programdan ��k�� yap�l�yor...");
			return 0;
			break;
			
			default: printf("Gecerli bir se�im yap�n�z....");
			goto Atakan;
				break;
		}
	
		
		
		
		
	}
	else if(strcmp(secim, "Hay�r") == 0 || strcmp(secim, "hay�r") == 0){
		
		printf("Programdan ��k�l�yor...");
		
	}
	else{
		
		printf("Ge�ersiz de�er girdiniz ba�a y�nlendiriliyorsunuz...");
		
		system("cls");
		
	}
	
}

