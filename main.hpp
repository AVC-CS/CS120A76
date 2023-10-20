#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int N = 5000;

int makeNameRecord(string[], string[], int[], string[], int[]);
void printoutallrecords(int, string[], string[], int[], string[], int[]);
int findNames(int, string[], string[], int[], string[], int[], char, string);

int makeNameRecord(string state[], string gender[], int year[], string name[], int count[])
{
	// 1. Read the file "babyname.txt"
	// 2. Fill in the corresponding arrays with the values read from the file
}
int findNames(int cnt, string state[], string gender[], int year[], string name[], int count[], char starting, string stname)
{
	// find the names starting with "starting" in the state "state"
}
void printoutallrecords(int cnt, string state[], string gender[], int year[], string name[], int count[])
{
	for (int i = 0; i < cnt; i++)
	{
		printoutcontents(state[i], gender[i], year[i], name[i], count[i]);
	}
	cout << "total lines: " << cnt << endl;
}

void printoutcontents(string statename, string sex, int year, string name, int count)
{
	cout << setw(5) << statename << "\t";
	cout << setw(3) << sex << "\t";
	cout << setw(5) << year << "\t";
	cout << setw(10) << name << "\t\t";
	cout << setw(5) << count << endl;
}