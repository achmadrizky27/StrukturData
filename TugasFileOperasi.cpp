#include <iostream>
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
/* ACHMAD RIZKY - 50421023
LUSSY TRIANA 	- 50421757
MUHAMMAD RIDWAN - 51421057 */
/* ACHMAD RIZKY - 50421023
LUSSY TRIANA 	- 50421757
MUHAMMAD RIDWAN - 51421057 */

/* fungsi ini nantinya akan dipanggil ketika user menginput nilai berupa 1, fungsi ini berguna untuk
membuat dan menulis data file */
void membuatfile(){
	//mendeklarasikan variabel yang akan digunakan
    char   nama[20], npm[9], kelas[5], jurusan[20];
    string namaF   , namafile;
    char   charnama[20];
    int    ulang   , ulangin;
    float  uts     ,     uas, hasil;
    FILE   *fileTemp;
	
	//perintah dimana user akan menginput nama file baru
	printf("\nINPUTKAN !");
    printf("\nMASUKKAN NAMA FILE BARU        = ");
    fflush(stdin);
    getline(cin, namaF);
    namafile = namaF +".txt";
    strcpy(charnama, namafile.c_str());

    fileTemp = fopen(charnama, "w");

	//perintah dimana user akan menginput data dari mahasiswa
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

/* fungsi ini nantinya akan dipanggil ketika user menginput nilai berupa 2, fungsi ini berguna untuk
membaca dan menampilkan data file */
void membacafile(){
	//mendeklarasikan variabel yang akan digunakan
    char nama[30], npm[30], kelas[5], jurusan[20];
    int  i = 1,ulangin;
    float uts, uas, hasil;
    string namaF, namafile;
    char charnama[20];
    FILE *fileTemp;

	//perintah dimana user diminta untuk menginput nama file yang akan dibaca dan ditampilkan
    printf("\nMASUKKAN NAMA FILE YANG INGIN DIBACA & DITAMPILKAN = ");
    fflush(stdin);
    getline(cin, namaF);
    namafile = namaF + ".txt";
    strcpy(charnama, namafile.c_str());

    fileTemp = fopen(charnama, "r");
	printf("\nKETERANGAN : \n");
    printf("---> DATA BERHASIL DIBACA & DITAMPILKAN PADA FILE, SILAHKAN BUKA FILE !\n\n");
}

/* fungsi ini nantinya akan dipanggil ketika user menginput nilai berupa 3, fungsi ini berguna untuk
menambahkan data file */
void menambahkanfile(){
	//mendeklarasikan variabel yang akan digunakan
	char nama[30], npm[30], kelas[5], jurusan[20];
    int  i = 1,ulangin;
    float uts, uas, hasil;
    string namaF, namafile;
    char charnama[20];
    FILE *fileTemp;

	//perintah dimana user diminta untuk menginput nama file yang datanya ingin ditambahkan
    printf("\nMASUKKAN NAMA FILE YANG INGIN DITAMBAHKAN DATA = ");
    fflush(stdin);
    getline(cin, namaF);
    namafile = namaF + ".txt";
    strcpy(charnama, namafile.c_str());
    
    fileTemp = fopen(charnama, "a");
	
	//perintah dimana user akan menginput data yang akan ditambahkan
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

/* fungsi ini nantinya akan dipanggil ketika user menginput nilai berupa 4, fungsi ini berguna untuk
memperbarui data file */
void memperbaruifile(){
	//mendeklarasikan variabel yang akan digunakan
	char nama[30], npm[30], kelas[5], jurusan[20];
    int  i = 1,ulangin;
    float uts, uas, hasil;
    string namaF, namafile;
    char charnama[20];
    FILE *fileTemp;

	//perintah dimama user diminta untuk menginput nama file yang akan diperbarui
    printf("\nMASUKKAN NAMA FILE YANG INGIN DIPERBARUI = ");
    fflush(stdin);
    getline(cin, namaF);
    namafile = namaF + ".txt";
    strcpy(charnama, namafile.c_str());
    
    fileTemp = fopen(charnama, "w");
	
	//perintah dimana user akan menginput data untuk diperbarui
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

/* fungsi ini nantinya akan dipanggil ketika user menginput nilai berupa 5, fungsi ini berguna untuk
menghapus data file */
void menghapusfile(){
	//mendeklarasikan variabel yang akan digunakan
	int ret;
	FILE *fileTemp;
	char filename[35];
	
	//perintah dimana user diminta untuk menginput nama file yang akan dihapus
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

/* main class atau fungsi utama dimana program akan dimulai dari fungsi ini terlebih dahulu.
pada fungsi utama ini terdapat menu program yang menyediakan beberapa fungsi, yaitu:
membuat dan menulis data file, membaca dan menampilkan data file, menambahkan, memperbarui dan
menghapus file. */
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
