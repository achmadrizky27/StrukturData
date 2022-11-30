#include <iostream>
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
//ACHMAD RIZKY - 50421023
//LUSSY TRIANA - 50421757
//MUHAMMAD RIDWAN - 51421057

void membuatfile(){
    char   nama[20], npm[9], kelas[5], jurusan[20];
    string namaF   , namafile;
    char   charnama[20];
    int    ulang   , ulangin;
    float  uts     ,     uas, hasil;
    FILE   *fileTemp;
	
	printf("\nINPUTKAN !");
    printf("\nMASUKKAN NAMA FILE BARU        = ");
    fflush(stdin);
    getline(cin, namaF);
    namafile = namaF +".txt";
    strcpy(charnama, namafile.c_str());

    fileTemp = fopen(charnama, "w");

    cout<<"MASUKKAN JUMLAH DATA MAHASISWA = ";
    cin>>ulangin;
    fprintf(fileTemp, "=================================================================================================================\n");
    fprintf(fileTemp, "|NAMA	\t|NPM	  \t|KELAS	  \t|JURUSAN    \t|UTS	 \t|UAS	  \t|TOTAL  \t|\n");
    fprintf(fileTemp, "=================================================================================================================\n");
    for (int i = 0; i < ulangin; i++){
        printf("\n\nDATA MAHASISWA KE-%d", i+1);
        printf("\nNAMA      = ");
        fflush(stdin);
        gets(nama);
        printf("NPM       = ");
        fflush(stdin);
        gets(npm);
        printf("KELAS     = ");
        fflush(stdin);
        gets(kelas);
        printf("JURUSAN   = ");
        fflush(stdin);
        gets(jurusan);
        printf("NILAI UTS = ");
        fflush(stdin);
        cin >> uts;
        printf("NILAI UAS = ");
        fflush(stdin);
        cin >> uas;
        hasil = (uts + uas) / 2;
        printf("TOTAL NILAI = %3.2f", hasil);
		fprintf(fileTemp, "|%s    \t|%s      \t|%s      \t|%s    \t|%3.2f     \t|%3.2f      \t|%3.2f\n", nama, npm, kelas, jurusan, uts, uas, hasil);
    }
    fclose(fileTemp);
    printf("\n\nKETERANGAN : \n");
    printf("---> DATA BERHASIL DIMASUKKAN & DISIMPAN PADA FILE !\n\n");
}


void membacafile(){
    char nama[30], npm[30], kelas[5], jurusan[20];
    int  i = 1,ulangin;
    float uts, uas, hasil;
    string namaF, namafile;
    char charnama[20];
    FILE *fileTemp;

    printf("\nMASUKKAN NAMA FILE YANG INGIN DIBACA & DITAMPILKAN = ");
    fflush(stdin);
    getline(cin, namaF);
    namafile = namaF + ".txt";
    strcpy(charnama, namafile.c_str());

    fileTemp = fopen(charnama, "r");
	printf("\nKETERANGAN : \n");
    printf("---> DATA BERHASIL DIBACA & DITAMPILKAN PADA FILE, SILAHKAN BUKA FILE !\n\n");
}


void menambahkanfile(){
	char nama[30], npm[30], kelas[5], jurusan[20];
    int  i = 1,ulangin;
    float uts, uas, hasil;
    string namaF, namafile;
    char charnama[20];
    FILE *fileTemp;

    printf("\nMASUKKAN NAMA FILE YANG INGIN DITAMBAHKAN DATA = ");
    fflush(stdin);
    getline(cin, namaF);
    namafile = namaF + ".txt";
    strcpy(charnama, namafile.c_str());
    
    fileTemp = fopen(charnama, "a");
    cout<<"MASUKKAN JUMLAH DATA MAHASISWA = ";
    cin>>ulangin;
    for (int i = 0; i < ulangin; i++){
        printf("\n\nDATA MAHASISWA KE-%d", i+1);
        printf("\nNAMA      = ");
        fflush(stdin);
        gets(nama);
        printf("NPM       = ");
        fflush(stdin);
        gets(npm);
        printf("KELAS     = ");
        fflush(stdin);
        gets(kelas);
        printf("JURUSAN   = ");
        fflush(stdin);
        gets(jurusan);
        printf("NILAI UTS = ");
        fflush(stdin);
        cin>>uts;
        printf("NILAI UAS = ");
        fflush(stdin);
        cin>>uas;
        hasil = (uts + uas) / 2;
        printf("TOTAL NILAI = %3.2f", hasil);
		fprintf(fileTemp, "|%s    \t|%s      \t|%s      \t|%s    \t|%3.2f     \t|%3.2f      \t|%3.2f\n", nama, npm, kelas, jurusan, uts, uas, hasil);
    }
    fclose(fileTemp);
    printf("\n\nKETERANGAN : \n");
    printf("---> DATA BERHASIL DITAMBAHKAN !\n\n");
}


void memperbaruifile(){
	char nama[30], npm[30], kelas[5], jurusan[20];
    int  i = 1,ulangin;
    float uts, uas, hasil;
    string namaF, namafile;
    char charnama[20];
    FILE *fileTemp;

    printf("\nMASUKKAN NAMA FILE YANG INGIN DIPERBARUI = ");
    fflush(stdin);
    getline(cin, namaF);
    namafile = namaF + ".txt";
    strcpy(charnama, namafile.c_str());
    
    fileTemp = fopen(charnama, "w");
    cout<<"MASUKKAN JUMLAH DATA MAHASISWA = ";
    cin>>ulangin;
    fprintf(fileTemp, "=================================================================================================================\n");
    fprintf(fileTemp, "|NAMA	\t|NPM	  \t|KELAS	  \t|JURUSAN    \t|UTS	 \t|UAS	  \t|TOTAL  \t|\n");
    fprintf(fileTemp, "=================================================================================================================\n");
    for (int i = 0; i < ulangin; i++){
        printf("\n\nDATA MAHASISWA KE-%d", i+1);
        printf("\nNAMA      = ");
        fflush(stdin);
        gets(nama);
        printf("NPM       = ");
        fflush(stdin);
        gets(npm);
        printf("KELAS     = ");
        fflush(stdin);
        gets(kelas);
        printf("JURUSAN   = ");
        fflush(stdin);
        gets(jurusan);
        printf("NILAI UTS = ");
        fflush(stdin);
        cin >> uts;
        printf("NILAI UAS = ");
        fflush(stdin);
        cin >> uas;
        hasil = (uts + uas) / 2;
        printf("TOTAL NILAI = %3.2f", hasil);
		fprintf(fileTemp, "|%s    \t|%s      \t|%s      \t|%s    \t|%3.2f     \t|%3.2f      \t|%3.2f\n", nama, npm, kelas, jurusan, uts, uas, hasil);
    }
    fclose(fileTemp);
    printf("\n\nKETERANGAN : \n");
    printf("---> DATA BERHASIL DIPERBARUI !\n\n");
}

void menghapusfile(){
	int ret;
	FILE *fileTemp;
	char filename[35];
	
	printf("\nMASUKKAN NAMA FILE YANG INGIN DIHAPUS [namafile.txt] = ");
	scanf("%s",filename); 
	
	fileTemp = fopen(filename, "w");
	fprintf(fileTemp, "%s", "This isinfoberfungsi.blogspot.com");
	fclose(fileTemp);
	
	ret = remove(filename);
	if (ret == 0){
	printf("\nKETERANGAN : \n");
	printf("---> FILE BERHASIL DIHAPUS !\n\n");
	}else {
	printf("\n\nKETERANGAN : \n");
	printf("---> FILE TIDAK DAPAT TERHAPUS / TIDAK ADA !\n\n");
	}
}


int main() {
    int pilihan;
    cout << "\nRIZKY - LUSSY - RIDWAN = 2IA25 - STRUKTURDATA"<<endl;
    cout << "============================================="<<endl;
    cout << "============================================="<<endl;
    cout << "||        MENU PROGRAM FILE OPERASI        ||"<<endl;
    cout << "============================================="<<endl;
    cout << "============================================="<<endl;
    cout << "|1. MEMBUAT & MENULIS DATA FILE             |"<<endl;
    cout << "|2. MEMBACA & MENAMPILKAN DATA FILE         |"<<endl;
    cout << "|3. MENAMBAHKAN DATA FILE                   |"<<endl;
    cout << "|4. MEMPERBARUI DATA FILE                   |"<<endl;
    cout << "|5. MENGHAPUS FILE                          |"<<endl;
    cout << "============================================="<<endl;
    cout << "|[6] EXIT                                   |"<<endl;
    cout << "============================================="<<endl;
    cout << "MASUKKAN PILIHAN MENU <1/2/3/4/5/6> = ";
    cin  >> pilihan;
    switch (pilihan){
    case 1:
        membuatfile();
        main();
        break;
    case 2:
        membacafile();
        main();
        break;
    case 3:
    	menambahkanfile();
    	main();
    	break;
    case 4:
    	memperbaruifile();
    	main();
    	break;
    case 5:
    	menghapusfile();
    	main();
    	break;
    case 6:
        printf("PROGRAM TELAH BERAKHIR, TERIMAKASIH !");
        exit(0);
    default :
        printf("PILIHAN TIDAK ADA !\n\n");
        main();
    }
}
