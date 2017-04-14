#include "huffuman.h"

using namespace std;

int main()
{
	HuffumanTree ht;
	int k;
	string name;
	char choice = ' ';

	cout << " ------------------------------------ " << endl;
	cout << "|      ��ӭʹ��K���������ϵͳ       |" << endl;
	cout << " ------------------------------------ " << endl;
	while (choice != '0')
	{
		cout << " ------------------------------------ " << endl;
		cout << "|           1.������������           |" << endl;
		cout << "|           2.ѹ���ļ�               |" << endl;
		cout << "|           3.��ѹ�ļ�               |" << endl;
		cout << "|           4.��ӡ����               |" << endl;
		cout << "|           5.��ӡ��������           |" << endl;
		cout << "|           6.������ѷ�֧           |" << endl;
		cout << "|           0.�˳���ǰ�˵�           |" << endl;
		cout << " ------------------------------------ " << endl;
		cout << "��ѡ���ܣ�";
		cin >> choice;
		switch (choice)
		{
		case '1':
			cout << "���������������֧��k��";
			cin >> k;
			ht.set_branch(k);
			cout << "�������ļ���������������չ������";
			cin >> name;
			ht.create_tree(name);
			cout << "��������������ɣ�" << endl;
			break;
		case '2':
			if (ht.empty())
			{
				cout << "���Ƚ�������������" << endl;
				break;
			}
			ht.compress(name);
			cout << "�ļ�ѹ����ɣ�ѹ���ļ���Ϊ" << name + ".dat" << endl;
			break;
		case '3':
			if (ht.empty())
			{
				cout << "���Ƚ�������������" << endl;
				break;
			}
			ht.decompress(name);
			cout << "�ļ���ѹ��ɣ���ѹ�ļ���Ϊ" << name + "_decompress.txt" << endl;
			break;
		case '4':
			if (ht.empty())
			{
				cout << "���Ƚ�������������" << endl;
				break;
			}
			ht.print_code();
			break;
		case '5':
			if (ht.empty())
			{
				cout << "���Ƚ�������������" << endl;
				break;
			}
			ht.print_tree();
			break;
		case '0':
			cout << " ------------------------------------ " << endl;
			cout << "|      ��лʹ��K���������ϵͳ       |" << endl;
			cout << " ------------------------------------ " << endl;
			break;
		case '6':
			if (name.empty())
			{
				cout << "�������ļ���������������չ������";
				cin >> name;
			}
			cout << "����������ѷ�֧��Ϊ��" << ht.find_bestbranch(name) << endl;
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