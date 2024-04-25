#include<iostream>

using namespace std;

	struct Node  {
	int noMhs;
	string name;
	Node* next;
 };

    Node* START = NULL;

void addNode(){
	int nim;
    string nama;
    Node* nodeBaru = new Node();
	cout << "Masukan NIM: ";
	cin >> nim;
	cout << "Masukkan Nama: ";
	cin >> nama;
	nodeBaru->noMhs = nim;
	nodeBaru->name = nama; 

    if (START == NULL || nim <= START->noMhs) {
    if (START != NULL && nim == START->noMhs) {
        cout << "NIM sudah ada" << endl;
        return;}
    nodeBaru->next = START;
    START = nodeBaru;
    return;
    }
    Node* previous = START;
    Node* current = START;
    while ((current != NULL) && (nim >= current->noMhs)){
        if (nim == current->noMhs)
        {
            cout << "NIM sudah ads" << endl;
            return;
        }
        previous = current;
        current = current->next;
    }
    nodeBaru->next = current;
    previous->next = nodeBaru;
}
bool deleteNode(int nim) {
    Node* current = START;
    Node* previous = START;
    if (serachNode(nim, previous, current) == false)
        return false;
    previous->next = current->next;
    if (current == START)
        START = current->next;
    return true;
}
bool listEmpty() {
    if (START == NULL)
        return true;
    else
        return false;

}
int main(){
}