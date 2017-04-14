/*
 * Copyright (c) 2017
 * Xu Jiale
 *
 * This file was created on March 3rd, and last modified on March 23rd.
 * It's the first assignment of the course "The practice of software
 * designing and programming" of Harbin Institute of Technology.
 *
 * This file is used to test the skiplist defined in file "skiplist.h".
 */

#include "skiplist.h"

using namespace std;

int main()
{
	SkipList<int, string> list;
	int key;
	string value;
	string fileName;
	char choice = ' ';

	cout << " ---------------------------------- " << endl;
	cout << "|         ��ӭʹ������ϵͳ         |" << endl;
	cout << " ---------------------------------- " << endl;
	while (choice != '6')
	{
		cout << " ---------------------------------- " << endl;
		cout << "|            1.���ļ�            |" << endl;
		cout << "|            2.��������            |" << endl;
		cout << "|            3.��������            |" << endl;
		cout << "|            4.ɾ������            |" << endl;
		cout << "|            5.��ӡ����            |" << endl;
		cout << "|            6.�˳�                |" << endl;
		cout << " ---------------------------------- " << endl;
		cout << "��ѡ���ܣ�";
		cin >> choice;
		switch (choice)
		{
		case '1':
			cout << "�������ļ�����";
			cin >> fileName;
			list.openFile(fileName);
			cout << "�������ɹ���" << endl;
			break;
		case '2':
			cout << "�����������������ݣ�";
			cin >> key >> value;
			if (list.insert(key, value))
				cout << "����ɹ���" << endl;
			else
				cout << "����ʧ�ܣ�" << endl;
			break;
		case '3':
			cout << "������������ҵĹؼ��֣�";
			cin >> key;
			value = list.search(key);
			if (!value.empty())
				cout << "���ҳɹ����ؼ��ֶ�Ӧ��ֵΪ��"<< value << endl;
			else
				cout << "����ʧ�ܣ�" << endl;
			break;
		case '4':
			cout << "����������ɾ���Ĺؼ��֣�";
			cin >> key;
			if (list.remove(key))
				cout << "ɾ���ɹ���" << endl;
			else
				cout << "ɾ��ʧ�ܣ�" << endl;
			break;
		case '5':
			cout << "�����е�Ԫ���У�" << endl;
			cout << list;
			break;
		case '6':
			cout << " ---------------------------------- " << endl;
			cout << "|         ��лʹ������ϵͳ         |" << endl;
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