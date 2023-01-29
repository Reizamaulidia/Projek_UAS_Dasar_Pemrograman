#include <iostream>
using namespace std;

string menu[3] = { "Struktur Organisasi Kelas",
                   "Penanggung Jawab Mata Kuliah",
                   "Bagan Organisasi Kelas"
                 };

struct struktur
{
    int pilihan, jabatan, no1, no2, matkul;
    string pjm[7];
};

void strukturOrganisasi()
{
    char ulangi;
    struktur kelas;
    do{
    cout << "\n";
    cout << "\t\t ================================================================================  \n\n";
    cout << "\t\t |          ====================== MENU UTAMA =========================         |  \n\n";
    cout << "\t\t |" <<  "\t\t\t 1. " <<            menu[0]                          << "\t\t\t\t|  \n\n";
    cout << "\t\t |" <<  "\t\t\t 2. " <<            menu[1]                          << "\t\t\t|    \n\n";
    cout << "\t\t |" <<  "\t\t\t 3. " <<            menu[2]                          << "\t\t\t\t|  \n\n";
    cout << "\t\t ================================================================================  \n\n";

    cout << "\t\t Pilih Menu : ";
    cin >> kelas.pilihan;
    system("CLS");

    switch (kelas.pilihan)
    {
    case 1:
    {
        do{
        // membuat array
        string nama[6] = {  "Rafdy Fauzan Ilham Firdaus",
                            "Moh Abdi Hafids Fadilah",
                            "Reiza Maulidia Senjaya",
                            "Fauzia Nurafni",
                            "Putri Aulia Maulida",
                            "Nadia Putri Rahmawati"
                        };
        cout << "\n";
        cout << "\t\t                          ===========================                             \n";
        cout << "\t\t ========================= Struktur Organisasi Kelas ============================ \n";
        cout << "\t\t                          ===========================                             \n";

        cout << "\t\t 1. Ketua Kelas            \n\n";
        cout << "\t\t 2. Wakil Ketua Kelas      \n\n";
        cout << "\t\t 3. Sekretaris             \n\n";
        cout << "\t\t 4. Bendahara              \n\n";

        cout << "\t\t Pilih Yang Ingin Anda Tahu : ";
        cin >> kelas.jabatan;
        system("CLS");

        cout << "\n";
        cout << "\t\t                          ===========================                             \n";
        cout << "\t\t ========================= Struktur Organisasi Kelas ============================ \n";
        cout << "\t\t                          ===========================                             \n";
        cout << "\n";

        switch (kelas.jabatan)
        {
        case 1:
        {
            cout << "\t\t Ketua Kelas : " << nama[0] << endl << endl;
            break;
        }
        case 2:
        {
            cout << "\t\t Wakil Ketua Kelas : " << nama[1] << endl << endl;
            break;
        }
        case 3:
        {
            cout << "\t\t Sekretaris 1 atau 2? ";
            cin >> kelas.no1;
            cout << endl;
            if (kelas.no1 == 1)
            {
                cout << "\t\t Sekretaris 1 : " << nama[2] << endl << endl;
            }
            else
            {
                cout << "\t\t Sekretaris 2 : " << nama[3] << endl << endl;
            }
            break;
        }
        case 4:
        {
            cout << "\t\t Bendahara 1 atau 2? ";
            cin >> kelas.no2;
            cout << endl;
            if (kelas.no2 == 1)
            {
                cout << "\t\t Bendahara 1 : " << nama[4] << endl << endl;
            }
            else
            {
                cout << "\t\t Bendahara 2 : " << nama[5] << endl << endl;
            }
            break;
        }
        }

        cout << "\t\t Ulangi (y) / kembali ke menu (t)? ";
        cin >> ulangi;

        system("CLS");
        }while(ulangi == 'y');
        break;
    }

    case 2:
    {
        do{
        // mengisi array
        kelas.pjm[0] = " Hanif Imam Muntazhar";
        kelas.pjm[1] = " Restu Gede Purnama";
        kelas.pjm[2] = " Raka Wahyu Sagara";
        kelas.pjm[3] = " Nur Insan Subekti";
        kelas.pjm[4] = " Arya Pangestu";
        kelas.pjm[5] = " Ages Gelar Pangestu";
        kelas.pjm[6] = " Iqbal Pribadi";

        cout << "\n";
        cout << "\t\t                          ==============================                             \n";
        cout << "\t\t ========================= Penanggung Jawab Mata Kuliah ============================ \n";
        cout << "\t\t                          ==============================                             \n";
        cout << "\n";

        cout << "\t\t 1. Arsitektur dan Organisasi Komputer     \n\n";
        cout << "\t\t 2. Dasar Pemrograman                      \n\n";
        cout << "\t\t 3. Literasi Digital dan Etika Teknologi   \n\n";
        cout << "\t\t 4. Logika Informatika                     \n\n";
        cout << "\t\t 5. Pendidikan Pancasila                   \n\n";
        cout << "\t\t 6. Pengantar Teknologi Informasi          \n\n";
        cout << "\t\t 7. Bahasa Asing                           \n\n";

        cout << "\t\t Pilih PJ Matkul Yang Ingin Anda Tahu : ";
        cin >> kelas.matkul;
        system("CLS");

        cout << endl;
        cout << "\t\t                          ==============================                             " << endl;
        cout << "\t\t ========================= Penanggung Jawab Mata Kuliah ============================ " << endl;
        cout << "\t\t                          ==============================                             " << endl;
        cout << endl;

        if (kelas.matkul == 1)
        {
            cout << "\t\t PJ 1 Matkul Arsitektur dan Organisasi Komputer : " << kelas.pjm[0] << endl << endl;
        }
        else if (kelas.matkul == 2)
        {
            cout << "\t\t PJ 2 Matkul Dasar Pemrograman : " << kelas.pjm[1] << endl << endl;
        }
        else if (kelas.matkul == 3)
        {
            cout << "\t\t PJ 3 Matkul Literasi Digital dan Etika Teknologi : " << kelas.pjm[2] << endl << endl;
        }
        else if (kelas.matkul == 4)
        {
            cout << "\t\t PJ 4 Matkul Logika Informatika : " << kelas.pjm[3] << endl << endl;
        }
        else if (kelas.matkul == 5)
        {
            cout << "\t\t PJ 5 Matkul Pendidikan Pancasila  : " << kelas.pjm[4] << endl << endl;
        }
        else if (kelas.matkul == 6)
        {
            cout << "\t\t PJ 6 Matkul Pengantar Teknologi Informasi : " << kelas.pjm[5] << endl << endl;
        }
        else if (kelas.matkul == 7)
        {
            cout << "\t\t PJ 7 Matkul Bahasa Asing : " << kelas.pjm[6] << endl << endl;
        }
        else
        {

            cout << "\t\t PJ 1  : " << kelas.pjm[0] << endl
                 << endl;
            cout << "\t\t PJ 2  : " << kelas.pjm[1] << endl
                 << endl;
            cout << "\t\t PJ 3  : " << kelas.pjm[2] << endl
                 << endl;
            cout << "\t\t PJ 4  : " << kelas.pjm[3] << endl
                 << endl;
            cout << "\t\t PJ 5  : " << kelas.pjm[4] << endl
                 << endl;
            cout << "\t\t PJ 6  : " << kelas.pjm[5] << endl
                 << endl;
            cout << "\t\t PJ 7  : " << kelas.pjm[6] << endl
                 << endl;
        }

        cout << "\t\t Ulangi (y) / kembali ke menu (t)? ";
        cin >> ulangi;

        system("CLS");
        }while(ulangi == 'y');
        break;
    }

    case 3:
    {
        cout << "\n";
        cout << ("\t\t                                                STRUKTUR ORGANISASI KELAS TI B                                           \n\n");
        cout << "\t\t                                              ----------------------------------                                            \n";
        cout << "\t\t                                             |            KETUA KELAS           |                                           \n";
        cout << "\t\t                                             |                                  |                                           \n";
        cout << "\t\t                                             |    RAFDY FAUZAN ILHAM FIRDAUS    |                                           \n";
        cout << "\t\t                                             |                                  |                                           \n";
        cout << "\t\t                                              ----------------------------------                                            \n";
        cout << "\t\t                                                               |                                                            \n";
        cout << "\t\t                                                               |                                                            \n";
        cout << "\t\t                                                               |                                                            \n";
        cout << "\t\t                                              ----------------------------------                                            \n";
        cout << "\t\t                                             |         WAKIL KETUA KELAS        |                                           \n";
        cout << "\t\t                                             |                                  |                                           \n";
        cout << "\t\t                                             |      MOH ABDI HAFIDS FADILAH     |                                           \n";
        cout << "\t\t                                             |                                  |                                           \n";
        cout << "\t\t                                              ----------------------------------                                            \n";
        cout << "\t\t                                                               |                                                            \n";
        cout << "\t\t                                                               |                                                            \n";
        cout << "\t\t                                                               |                                                            \n";
        cout << "\t\t                                                 -----------------------------                                              \n";
        cout << "\t\t                                                |                             |                                             \n";
        cout << "\t\t                                                |                             |                                             \n";
        cout << "\t\t                                                |                             |                                             \n";
        cout << "\t\t                                    ------------------------      -------------------------                                 \n";
        cout << "\t\t                                   |     SEKRETARIS 1       |    |        BENDAHARA 1      |                                \n";
        cout << "\t\t                                   |                        |    |                         |                                \n";
        cout << "\t\t                                   | REIZA MAULIDIA SENJAYA |    |    PUTRI AULIA MAULIDA  |                                \n";
        cout << "\t\t                                   |                        |    |                         |                                \n";
        cout << "\t\t                                    ------------------------      -------------------------                                 \n";
        cout << "\t\t                                                |                             |                                             \n";
        cout << "\t\t                                                |                             |                                             \n";
        cout << "\t\t                                                |                             |                                             \n";
        cout << "\t\t                                    ------------------------      -------------------------                                 \n";
        cout << "\t\t                                   |     SEKRETARIS 2       |    |        BENDAHARA 2      |                                \n";
        cout << "\t\t                                   |                        |    |                         |                                \n";
        cout << "\t\t                                   |    FAUZIA NURAFNI      |    |  NADIA PUTRI RAHMAWATI  |                                \n";
        cout << "\t\t                                   |                        |    |                         |                                \n";
        cout << "\t\t                                    ------------------------      -------------------------                                 \n";
        cout << "\t\t                                               |                              |                                             \n";
        cout << "\t\t                                               |                              |                                             \n";
        cout << "\t\t                                               |                              |                                             \n";
        cout << "\t\t              ------------------------------------------------------------------------------------------------              \n";
        cout << "\t\t             |                |                |               |              |                |              |             \n";
        cout << "\t\t             |                |                |               |              |                |              |             \n";
        cout << "\t\t   ----------------------     |      ---------------------     |     ---------------------     |     -------------------    \n";
        cout << "\t\t  |        PJ 1          |    |     |        PJ 3         |    |    |       PJ 5          |    |    |       PJ 7        |   \n";
        cout << "\t\t  |                      |    |     |                     |    |    |                     |    |    |                   |   \n";
        cout << "\t\t  | HANIF IMAM MUNTAZHAR |    |     |  RAKA WAHYU SAGARA  |    |    |    ARYA PANGESTU    |    |    |    IQBAL PRIBADI  |   \n";
        cout << "\t\t  |                      |    |     |                     |    |    |                     |    |    |                   |   \n";
        cout << "\t\t   ----------------------     |      ---------------------     |     ---------------------     |     -------------------    \n";
        cout << "\t\t                              |                                |                               |                            \n";
        cout << "\t\t                              |                                |                               |                            \n";
        cout << "\t\t                    ----------------------          ----------------------          ----------------------                  \n";
        cout << "\t\t                   |        PJ 2          |        |         PJ 4         |        |        PJ 6          |                 \n";
        cout << "\t\t                   |                      |        |                      |        |                      |                 \n";
        cout << "\t\t                   |  RESTU GEDE PURNAMA  |        |   NUR INSAN SUBEKTI  |        |  AGES GELAR PANGESTU |                 \n";
        cout << "\t\t                   |                      |        |                      |        |                      |                 \n";
        cout << "\t\t                    ----------------------          ----------------------          ----------------------                \n\n";
        break;
    }
    default:
        cout << "\n";
        cout << "\t\t Maaf, Pilihan Menu Tidak Tersedia \n";
    }

    cout << "\n";
    cout << "\t\t Kembali ke menu (y) / keluar (t)? ";
    cin >> ulangi;

    system("CLS");
    }while(ulangi == 'y');

    cout << " Program Telah Selesai! \n";
    cout << " Terima Kasih :) \n";
}

int main()
{
    strukturOrganisasi();
    return 0;
}
