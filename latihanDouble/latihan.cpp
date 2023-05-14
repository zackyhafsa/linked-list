#include <iostream>
using namespace std;

// deklarasi
struct dataUser
{
    string nama, jurusan, fakultas, hobi;
    dataUser *prev;
    dataUser *next;
};

dataUser *head, *tail, *cur, *newNode, *del;

// membuat double linked list
void createDoubleLinkedList(string data[4])
{
    head = new dataUser();
    head->nama = data[0];
    head->jurusan = data[1];
    head->fakultas = data[2];
    head->hobi = data[3];
    head->prev = NULL;
    head->next = NULL;
    tail = head;
}

// add first
void addFirst(string data[4])
{

    if (head == NULL)
    {
        cout << "double linked list belum dibuat" << endl;
    }
    else
    {
        newNode = new dataUser();
        newNode->nama = data[0];
        newNode->jurusan = data[1];
        newNode->fakultas = data[2];
        newNode->hobi = data[3];
        newNode->prev = NULL;
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

// add Last
void addLast(string data[4])
{

    if (head == NULL)
    {
        cout << "double linked list belum dibuat" << endl;
    }
    else
    {
        newNode = new dataUser();
        newNode->nama = data[0];
        newNode->jurusan = data[1];
        newNode->fakultas = data[2];
        newNode->hobi = data[3];
        newNode->prev = tail;
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
    }
}

// hapus first
void removeFirst()
{
    if (head == NULL)
    {
        cout << "double linked list belum dibuat" << endl;
    }
    else
    {
        del = head;
        head = head->next;
        head->prev = NULL;
        delete del;
    }
}

// hapus last
void removeLast()
{
    if (head == NULL)
    {
        cout << "double linked list belum dibuat" << endl;
    }
    else
    {
        del = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete del;
    }
}

// print double linked list
void printDoubleLinkedList()
{
    if (head == NULL)
    {
        cout << "double linked list belum dibuat" << endl;
    }
    else
    {
        cout << "Isi Data: " << endl;
        cur = head;
        while (cur != NULL)
        {
            cout << endl;
            cout << "Nama Lengkap : " << cur->nama << endl;
            cout << "Jurusan : " << cur->jurusan << endl;
            cout << "Fakultas : " << cur->fakultas << endl;
            cout << "Hobi : " << cur->hobi << endl;
            cout << endl;

            cur = cur->next;
        }
    }
}

int main()
{

    cout << "===== Membuat Double Linked List =====" << endl;
    string newData[4] = {"Zacky Hafsari", "Informatika", "Teknik", "Main Game"};
    createDoubleLinkedList(newData);
    printDoubleLinkedList();

    cout << "===== Add First =====" << endl;
    string data2[4] = {"Abrar Wahid", "Teknik Sipil", "Teknik", "Main Bola"};
    addFirst(data2);
    printDoubleLinkedList();

    cout << "===== Add Last =====" << endl;
    string data3[4] = {"Farhan Basyari", "PGSD", "FKIP", "Bulu Tangkis"};
    addLast(data3);
    printDoubleLinkedList();

    cout << "===== Remove First =====" << endl;
    removeFirst();
    printDoubleLinkedList();

    cout << "===== Remove Last =====" << endl;
    removeLast();
    printDoubleLinkedList();
}