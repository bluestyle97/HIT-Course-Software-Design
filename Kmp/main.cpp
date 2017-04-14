/*
* Copyright (c) 2017
* Xu Jiale
*
* This file was created on march 9th, and last modified on March 23rd.
* It is the first assignment of the course "The practice of software
* designing and programing" of Harbin Institute of Technology.
*
* This file is used to test the kmp algorithm.
*/
#include "kmp.h"

using namespace std;

int main()
{
	String main;
	string patternString;
	string fileName;
	int index;
	char choice = ' ';
	clock_t start;
	clock_t finish;

	cout << " ---------------------------------- " << endl;
	cout << "|       ��ӭʹ���ַ�ƥ��ϵͳ       |" << endl;
	cout << " ---------------------------------- " << endl;
	while (choice != '6')
	{
		cout << " ---------------------------------- " << endl;
		cout << "|         1.�ļ���ȡ����           |" << endl;
		cout << "|         2.�ֶ���������           |" << endl;
		cout << "|         3.����ƥ��               |" << endl;
		cout << "|         4.KMPƥ��                |" << endl;
		cout << "|         5.STL����ƥ��            |" << endl;
		cout << "|         6.�˳�                   |" << endl;
		cout << " ---------------------------------- " << endl;
		cout << "��ѡ���ܣ�";
		cin >> choice;
		switch (choice)
		{
		case '1':
			cout << "�������ļ�����";
			cin >> fileName;
			main.open_file(fileName);
			cout << "������ȡ��ɣ�" << endl;
			break;
		case '2':
			cout << "������������";
			cin >> main.mainString;
			break;
		case '3':
			cout << "������ģʽ����";
			cin >> patternString;
			start = clock();
			index = main.index_kmp(patternString);
			finish = clock();
			if (index >= 0)
				cout << "ƥ��ɹ���ģʽ���������е�λ��Ϊ��" << index 
					<< endl;
			else
				cout << "ƥ��ʧ�ܣ�" << endl;
			cout << "��ʱ" << 1.0 * (finish - start) / CLOCKS_PER_SEC 
				<< "s" << endl;
			break;
		case '4':
			cout << "������ģʽ����";
			cin >> patternString;
			start = clock();
			index = main.index(patternString);
			finish = clock();
			if (index >= 0)
				cout << "ƥ��ɹ���ģʽ���������е�λ��Ϊ��" << index 
					<< endl;
			else
				cout << "ƥ��ʧ�ܣ�" << endl;
			cout << "��ʱ" << 1.0 * (finish - start) / CLOCKS_PER_SEC 
				<< "s" << endl;
			break;
		case '5':
			cout << "������ģʽ����";
			cin >> patternString;
			start = clock();
			index = main.mainString.find(patternString);
			finish = clock();
			if (index != string::npos)
				cout << "ƥ��ɹ���ģʽ���������е�λ��Ϊ��" << index 
					<< endl;
			else
				cout << "ƥ��ʧ�ܣ�" << endl;
			cout << "��ʱ" << 1.0 * (finish - start) / CLOCKS_PER_SEC 
				<< "s" << endl;
			break;
		case '6':
			cout << " ---------------------------------- " << endl;
			cout << "|       ��лʹ���ַ�ƥ��ϵͳ       |" << endl;
			cout << " ---------------------------------- " << endl;
			break;
		default:
			cout << " ---------------------------------- " << endl;
			cout << "|    ���������������������룡    |" << endl;
			cout << " ---------------------------------- " << endl;
			break;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}