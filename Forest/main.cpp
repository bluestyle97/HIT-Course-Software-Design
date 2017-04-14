/*
 * Copyright (c) 2017
 * Xu Jiale
 *
 * This file was created on March 25th, and last modified on March 28th.
 * It is the second assignment of the course "The Practice of software
 * designing and programing" of Harbin Institute of Technology.
 *
 * This file is used for testing the algorithm of the transformation 
 * between binary trees and forest.
 */

#include "forest.h"

using namespace std;

int main()
{
	BinaryTree bt;
	Tree t;
	Forest ft;
	
	char choice = ' ';
	cout << " --------------------------------------- " << endl;
	cout << "|     ��ӭʹ�ö�������ɭ��ת��ϵͳ      |" << endl;
	cout << " --------------------------------------- " << endl;
	while (choice != '0')
	{
		cout << " --------------------------------------- " << endl;
		cout << "|           1.��ʼ��������              |" << endl;
		cout << "|           2.��ʼ��ɭ��                |" << endl;
		cout << "|           3.������ת��Ϊɭ��          |" << endl;
		cout << "|           4.ɭ��ת��Ϊ������          |" << endl;
		cout << "|           5.����������                |" << endl;
		cout << "|           6.����ɭ��                  |" << endl;
		cout << "|           0.�˳��˵�                  |" << endl;
		cout << " --------------------------------------- " << endl;
		cout << "��ѡ���ܣ�";
		cin >> choice;
		switch (choice)
		{
		case '1':
		{
			string preStr, inStr;
			cout << "������ǰ�����У�";
			cin >> preStr;
			cout << "�������������У�";
			cin >> inStr;
			bt.create_btree(preStr, inStr);
			cout << "������������ɣ�" << endl;
			break;
		}
		case '2':
			ft.create_forest();
			cout << "ɭ�ֽ�����ɣ�" << endl;
			break;
		case '3':
			ft = bt.to_forest();
			cout << "�ɹ���������ת��Ϊɭ�֣�" << endl;
			break;
		case '4':
			bt = ft.to_binarytree();
			cout << "�ɹ���ɭ��ת��Ϊ��������" << endl;
			break;
		case '5':
		{
			char choice = ' ';
			while (choice != '0')
			{
				cout << "***********************************" << endl;
				cout << "+        1.�������������         +" << endl;
				cout << "+        2.�������������         +" << endl;
				cout << "+        3.�������������         +" << endl;
				cout << "+        4.�������������         +" << endl;
				cout << "+        0.�˳���ǰ�˵�           +" << endl;
				cout << "***********************************" << endl;
				cout << "��ѡ���ܣ�";
				cin >> choice;
				switch (choice)
				{
				case '1':
					bt.pre_order();
					cout << endl << "���������������ɣ�" << endl;
					break;
				case '2':
					bt.in_order();
					cout << endl << "���������������ɣ�" << endl;
					break;
				case '3':
					bt.post_order();
					cout << endl << "���������������ɣ�" << endl;
					break;
				case '4':
					bt.level_order();
					cout << endl << "���������������ɣ�" << endl;
					break;
				case '0':
					cout << "�˳�������������" << endl;
					break;
				default:
					cout << "���������������������룡" << endl;
					break;
				}
				cout << endl;
			}
			break;
		}
		case '6':
		{
			char choice = ' ';
			while (choice != '0')
			{
				cout << "***********************************" << endl;
				cout << "+         1.�������ɭ��          +" << endl;
				cout << "+         2.�������ɭ��          +" << endl;
				cout << "+         3.�������ɭ��          +" << endl;
				cout << "+         0.�˳���ǰ�˵�          +" << endl;
				cout << "***********************************" << endl;
				cout << "��ѡ���ܣ�";
				cin >> choice;
				switch (choice)
				{
				case '1':
					ft.pre_order();
					cout << "ɭ�����������ɣ�" << endl;
					break;
				case '2':
					ft.post_order();
					cout << "ɭ�ֺ��������ɣ�" << endl;
					break;
				case '3':
					ft.level_order();
					cout << "ɭ�ֲ��������ɣ�" << endl;
					break;
				case '0':
					cout << "�˳�ɭ�ֱ�����" << endl;
					break;
				default:
					cout << "���������������������룡" << endl;
					break;
				}
				cout << endl;
			}
			break;
		}
		case '0':
			cout << " --------------------------------------- " << endl;
			cout << "|     ��лʹ�ö�������ɭ��ת��ϵͳ      |" << endl;
			cout << " --------------------------------------- " << endl;
			break;
		default:
			cout << " --------------------------------------- " << endl;
			cout << "|       ���������������������룡      |" << endl;
			cout << " --------------------------------------- " << endl;
			break;
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

/*
forest: 
ABEFJCDGHI EJFBCGHIDA
KLNOPM NOPLMK
QRST STRQ

binary tree:
ABCDEFGHIJKLM CBEDAHIGJFLMK
*/