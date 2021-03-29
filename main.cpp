#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main()
{
	string Mahasiswa;
	ifstream file("daftar-nama.txt");

	ofstream file_temp;
	file_temp.open("4210191024_AndhikaArista.csv");

	int i = 0;
	string blank = " ";
	string simpanData[30];

	if (file.is_open())
	{
		while (getline(file, Mahasiswa))
		{
			simpanData[i] = Mahasiswa;
			i++;
		}

		file.close();
		i = 0;

		while (i != 30)

		{
			file_temp << simpanData[i] << endl;
			i++;
		}

		file_temp.close();
		cout << "File csv sudah dibuat" << endl << endl;
	}
	else

		cout << "File belum dibuat" << endl;

	system("PAUSE");

	file_temp.open("4210191024_AndhikaArista.csv");
	i = 28;

	if (file_temp.is_open())
	{
		while (i != 1)
		{
			file_temp << simpanData[i] << endl;
			i--;
		}
	}
	else
		file_temp.close();

	cin.get();

	return 0;
}
