#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;
int main()
{
       struct nilai{
              char kode[20];
              char nama[50];
              int sks;
              char nil[3];
              float mutu;
       };
       
       struct nilai nilai_mhs[20];
       
       char NPM[15], nama[50];
       int i, n, jumlah;
       
       printf("NPM				  : "); 
         scanf("%i", &NPM);
       printf("Nama mahasiswa     : "); 
	   scanf("%s", &nama);
       printf("Jumlah mata kuliah : "); 
	   scanf("%d", &n);
	   printf("\n\n");
       
       for(i=0; i<n; i++){
          printf("Mata kuliah ke-%d :\n", i+1);
          printf("- Kode  : ");
		  scanf("%s", &nilai_mhs[i].kode);
          printf("- Nama  : "); 
		  fflush (stdin); 
		  fgets(nilai_mhs[i].nama, 20, stdin);
          nilai_mhs[i].nama[strlen(nilai_mhs[i].nama)-1]='\0';
          printf("- SKS   : "); 
		  scanf ("%d", &nilai_mhs[i].sks);
          printf("- Nilai : "); 
		  fflush (stdin); 
		  fgets(nilai_mhs[i].nil,3,stdin);
          if(nilai_mhs[i].nil[1]=='+') 
		  nilai_mhs[i].nil[2]='\0';
          if(nilai_mhs[i].nil[1]='\0');
          
       }
       
       printf("\n\n");
       
       printf("KARTU HASIL STUDI\n");
       printf("------------------\n");
       printf("NPM  : %-s\n", NPM);
       printf("Nama : %-s\n", nama);
       printf("-------------------------------------------\n");
       printf("Kode   Nama                SKS  Nilai  Mutu\n");            
       printf("-------------------------------------------\n");
       
       for(i=0; i<n; i++){
	   
          if(strcmp(nilai_mhs[i].nil, "A") == 0) {
		  
		  nilai_mhs[i].mutu=nilai_mhs[i].sks * 4.0;
	    }
          else if(strcmp(nilai_mhs[i].nil, "B+") ==0) 
          {
		  
		  nilai_mhs[i].mutu=nilai_mhs[i].sks * 3.5;
	    }
          else if(strcmp(nilai_mhs[i].nil, "B") == 0) {
		  nilai_mhs[i].mutu=nilai_mhs[ i].sks* 3.0;
	    }
		else if(strcmp(nilai_mhs[i].nil, "C+") == 0){
		
          nilai_mhs[i].mutu=nilai_mhs[i].sks * 2.5;
        }
          else if(strcmp(nilai_mhs[i].nil, "C") == 0) {
		  
		  nilai_mhs[i].mutu=nilai_mhs[i].sks * 2.0;
        }
		else if(strcmp(nilai_mhs[i].nil, "D") == 0) {
		
		nilai_mhs[i].mutu=nilai_mhs[i].sks * 1.0;
	    }
          else if(strcmp(nilai_mhs[i].nil, "E") == 0) {
		  	  nilai_mhs[i].mutu=nilai_mhs[i].sks * 0.0;
		}
          printf("%-6s %-19s %3d  %-5s  %4.1f\n", nilai_mhs[i].kode, nilai_mhs[i].nama, nilai_mhs[i].sks, nilai_mhs[i].nil, nilai_mhs[i].mutu);
       }
       printf("-------------------------------------------\n");
       
       int total_sks=0;
       float total_mutu, ip;   
       for(i=0; i<n; i++){
	   
          total_sks=total_sks+nilai_mhs[i].sks;
          total_mutu=total_mutu+nilai_mhs[i].mutu;
       }
       printf("Total Mutu = %4.1f\n", total_mutu);
       printf("Total SKS = %d\n", total_sks);
       printf("IP = %3.1f", total_mutu/total_sks);
          
        getch ();
       return 0;
}
