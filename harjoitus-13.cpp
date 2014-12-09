//Made by Toni Pajukanta,Ryhmä IIO14S1
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct name
{

	char nimi[30],suku[30], koko[40];
	string nick, king, full;

};

void main()
{
	name one;

	cout << "Kayttaen cstring";
	cout << "\nAnna etunimi ja sitten sukunimi\n";
	cin >> ws >> one.nimi >> ws >> one.suku;
	strcpy_s (one.koko, one.nimi);
	strcat_s (one.koko, " ");
	strcat_s (one.koko, one.suku);
	cout << "Etunimi: " << one.nimi << "\n";
	cout << "Sukunimi: " << one.suku << "\n";
	cout << "Nimesi oli: " << one.koko << endl;
	
	cout << "\n\nKayttaen string";
	cout << "\nAnna etunimi ja sitten sukunimi\n";
	cin >> ws >> one.nick >> ws >> one.king;
	one.full = one.nick + " " + one.king;
	cout << "Etunimi: " << one.nick << "\n";
	cout << "Sukunimi: " << one.king << "\n";
	cout << "Nimesi oli: " << one.full << "\n\n";








}