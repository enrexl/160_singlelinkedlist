#include <iostream>
using namespace std;

struct Node
{
	int noMhs;
	string name;
	Node* next;
};

Node* START = NULL;

void addNode() {
	int nim;
	string nama;
	Node* nodebaru = new Node();
	cout << "Masukkan NIM: ";
	cin >> nim;
	cout << "Masukka Nama: ";
	cin >> nama;
	nodeBaru->noMhs = nim;
	nodeBaru->name = nama;

	if (START == NULL || nim <= START->noMhs) {
		if (START != NULL && nim == START->noMhs) {
			cout << "NIM sudah ada" << endl;
			return;
		}


		Node* current = START;
		Node* previous = START;

	}
}

int main()
{
    std::cout << "Hello World!\n";
}
