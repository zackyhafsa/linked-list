#include <iostream>

using namespace std;

struct biodata
{
    string nama, jurusan, hobi;
    int thnLahir;

    biodata *next;
};

biodata *head, *tail, *cur, *newNode;

// membuat single linked list
void createSingLinkedList(string nama, string jurusan, string hobi, int thnLahir)
{
    head = new biodata;
    head->nama = nama;
    head->jurusan = jurusan;
    head->hobi = hobi;
    head->thnLahir = thnLahir;
    head->next = NULL;
    tail = head;
}

// menambahkan single linked list sbg head
void addFirst(string nama, string jurusan, string hobi, int thnLahir)
{
    newNode = new biodata;
    newNode->nama = nama;
    newNode->jurusan = jurusan;
    newNode->hobi = hobi;
    newNode->thnLahir = thnLahir;
    newNode->next = head;
    head = newNode;
}

// menambahkan single linked list sbg tail
void addLast(string nama, string jurusan, string hobi, int thnLahir)
{
    newNode = new biodata;
    newNode->nama = nama;
    newNode->jurusan = jurusan;
    newNode->hobi = hobi;
    newNode->thnLahir = thnLahir;
    tail->next = newNode;
    tail = newNode;
}

// print single linked list
void printSingleLinkedList()
{
    cur = head;
    while (cur != NULL)
    {
        cout << endl;
        cout << "Nama : " << cur->nama << endl;
        cout << "Jurusan : " << cur->jurusan << endl;
        cout << "Hobi : " << cur->hobi << endl;
        cout << "Tanggal Lahir : " << cur->thnLahir << endl;
        cout << endl;

        cur = cur->next;
    }
}

int main()
{
    cout << "===== Membuat single linked list =====" << endl;
    createSingLinkedList("Zacky Hafsari", "informatika", "ngoding", 2004);
    printSingleLinkedList();

    cout << "===== Menambahkan single linked list sbg head=====" << endl;
    addFirst("Abrar Wahid", "informatika", "main bola", 2003);
    printSingleLinkedList();

    cout << "===== Menambahkan single linked list sbg tail=====" << endl;
    addLast("Ahmad nur'ain", "informatika", "main game", 2003);
    printSingleLinkedList();
}