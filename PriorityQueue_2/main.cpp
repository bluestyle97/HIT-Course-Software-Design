/*
 * Copyright (c) 2017
 * Xu Jiale
 *
 * This file was created on march 9th, and last modified on March 23rd.
 * It is the first assignment of the course "The practice of software
 * designing and programing" of Harbin Institute of Technology.
 *
 * This file is used to test the priorityqueue defined in "priority-
 * queue.h".
 */

#include "priorityqueue.h"

using namespace std;

int main()
{
	PriorityQueue<int> queue;
	char choice = ' ';
	string fileName;
	int element;
	cout << " ---------------------------------- " << endl;
	cout << "|       ��ӭʹ�����ȶ���ϵͳ       |" << endl;
	cout << " ---------------------------------- " << endl;
	while (choice != '6')
	{
		cout << " ---------------------------------- " << endl;
		cout << "|         1.���ļ�               |" << endl;
		cout << "|         2.����Ԫ��               |" << endl;
		cout << "|         3.Ѱ����СԪ��           |" << endl;
		cout << "|         4.ɾ����СԪ��           |" << endl;
		cout << "|         5.��ӡ���ȶ���           |" << endl;
		cout << "|         6.�˳�                   |" << endl;
		cout << " ---------------------------------- " << endl;
		cout << "��ѡ���ܣ�";
		cin >> choice;
		switch (choice)
		{
		case '1':
			cout << "�������ļ�����";
			cin >> fileName;
			queue.openFile(fileName);
			cout << "���ȶ��н����ɹ���" << endl;
			break;
		case '2':
			cout << "�����������Ԫ�أ�";
			cin >> element;
			queue = queue + element;
			cout << "����ɹ���" << endl;
			break;
		case '3':
			cout << "���ȶ��е���СԪ��Ϊ��" << queue.findMin() << endl;
			break;
		case '4':
			queue.deleteMin();
			cout << "��ɾ����СԪ�أ�" << endl;
			break;
		case '5':
			cout << "���ȶ���Ԫ�أ�" << queue;
			break;
		case '6':
			cout << " ---------------------------------- " << endl;
			cout << "|       ��лʹ�����ȶ���ϵͳ       |" << endl;
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