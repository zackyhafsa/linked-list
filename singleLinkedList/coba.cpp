#include <iostream>

using namespace std;

// deklarasi single linked list
struct buku
{
    string judul, pengarang;
    int tahunTerbit;

    buku *next;
};

buku *head, *tail, *cur, *newNode, *del;

// buat single linked list
void createSingleLinkedList(string judul, string pengarang, int tB)
{
    head = new buku();
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahunTerbit = tB;
    head->next = NULL;
    tail = head;
}

// menambahkan single linked list sebagai head (awal)
void addFirst(string judul, string pengarang, int tB)
{
    newNode = new buku();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunTerbit = tB;
    newNode->next = head;
    head = newNode;
}

// menambahkan single linked list sebagai tail (akhir)
void addLast(string judul, string pengarang, int tB)
{
    newNode = new buku();
    newNode->judul = judul;
    newNode->pengarang = pengarang;
    newNode->tahunTerbit = tB;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

// ubah single linked list head
void chnageFirst(string judul, string pengarang, int tB)
{
    head->judul = judul;
    head->pengarang = pengarang;
    head->tahunTerbit = tB;
}

// ubah single linked list tail
void chnageLast(string judul, string pengarang, int tB)
{
    tail->judul = judul;
    tail->pengarang = pengarang;
    tail->tahunTerbit = tB;
}

// menghapus single linked list head

void removeFirst()
{
    del = head;
    head = head->next;
    delete del;
}

// menghapus single linked list tail
void removeLast()
{
    del = tail;
    cur = head;
    while (cur->next != tail)
    {
        cur = cur->next;
    }
    tail = cur;
    cur->next = NULL;
    delete del;
}

// print single linked list
void printSingleLinkedList()
{
    cur = head;
    while (cur != NULL)
    {
        cout << endl;
        cout << "Judul Buku : " << cur->judul << endl;
        cout << "Pengarang Buku : " << cur->pengarang << endl;
        cout << "Tahun Terbit Buku : " << cur->tahunTerbit << endl;
        cout << endl;

        cur = cur->next;
    }
}

int main()
{

    cout << "=====membuat single linked list=====" << endl;
    createSingleLinkedList("Matematika", "Ahli Matematika", 1996);

    printSingleLinkedList();

    cout << "=====menambahkan singke linked  sebagai head=====" << endl;

    addFirst("biologi", "Ahli Biologi", 2000);

    printSingleLinkedList();

    cout << "===== menambahkan single linked list sebagai tail =====" << endl;

    addLast("Fisika", "Ahli Fisika", 2008);

    printSingleLinkedList();

    cout << "===== mengapus single linked list head =====" << endl;

    removeFirst();

    printSingleLinkedList();

    cout << "===== mengapus single linked list tail =====" << endl;

    removeLast();

    printSingleLinkedList();

    cout << "===== mengubah single linked list head =====" << endl;

    chnageFirst("agama", "maruf amin", 2009);

    printSingleLinkedList();
}