#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;
int main()
{
	ifstream inFile("E://ѧϰ//����//�����ھ�//����ҵ//data//train1.csv", ios::in);
	string lineStr;
	vector<vector<string>> strArray;
	while (getline(inFile, lineStr))
	{
		// ��ӡ�����ַ���
		cout << lineStr << endl;
		// ��ɶ�ά��ṹ
		stringstream ss(lineStr);
		string str;
		vector<string> lineArray;
		// ���ն��ŷָ�
		while (getline(ss, str, ','))
			lineArray.push_back(str);
		strArray.push_back(lineArray);
	}
	getchar();
}
