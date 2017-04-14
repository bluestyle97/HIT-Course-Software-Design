/*
 * Copyright (c) 2017
 * Xu Jiale
 *
 * This file was created on March 25th, and last modified on March 25th.
 * It is the second assignment of the course "The protice of software
 * designing and programing" of Harbin Institute of Technology.
 * 
 * This file is used for testing the data structure "threaded binary tree"
 * define in "threadtree.h".
 */

#include "threadtree.h"

using namespace std;

int main()
{
	ThreadTree tree;
	char choice = ' ';
	string preStr;
	string inStr;

	cout << " ---------------------------------- " << endl;
	cout << "|     ��ӭʹ������������ϵͳ       |" << endl;
	cout << " ---------------------------------- " << endl;
	while (choice != '0')
	{
		cout << " ---------------------------------- " << endl;
		cout << "|            1.������            |" << endl;
		cout << "|            2.��ԭ����            |" << endl;
		cout << "|            3.����������          |" << endl;
		cout << "|            4.����������          |" << endl;
		cout << "|            5.����������          |" << endl;
		cout << "|            6.���������          |" << endl;
		cout << "|            7.�������            |" << endl;
		cout << "|            8.�������            |" << endl;
		cout << "|            9.�������            |" << endl;
		cout << "|            0.�˳�                |" << endl;
		cout << " ---------------------------------- " << endl;
		cout << "��ѡ���ܣ�";
		cin >> choice;
		switch (choice)
		{
		case '1':
			cout << "�������������У��ս����*��䣩��";
			cin >> preStr;
			tree.createTree(preStr);
			cout << "����������������ɣ�" << endl;
			break;
		case '2':
			cout << "�������������У�";
			cin >> preStr;
			cout << "�������������У�";
			cin >> inStr;
			tree.createTree(preStr, inStr);
			cout << "����������������ɣ�" << endl;
			break;
		case '3':
			tree.preThreading();
			cout << "������������ɣ�" << endl;
			break;
		case '4':
			tree.inThreading();
			cout << "������������ɣ�" << endl;
			break;
		case '5':
			tree.postThreading();
			cout << "������������ɣ�" << endl;
			break;
		case '6':
			tree.cleanThread();
			cout << "�����������ɣ�" << endl;
			break;
		case '7':
			tree.preOrder();
			cout << endl << "���������ɣ�" << endl;
			break;
		case '8':
			tree.inOrder();
			cout << endl << "���������ɣ�" << endl;
			break;
		case '9':
			tree.postOrder();
			cout << endl << "���������ɣ�" << endl;
			break;
		case '0':
			cout << " ---------------------------------- " << endl;
			cout << "|      ��лʹ������������ϵͳ      |" << endl;
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