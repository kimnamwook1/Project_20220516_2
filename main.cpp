#include <iostream>
#include "Image.h"
#include <vector> // ũ�Ⱑ �ٲ�� �迭

using namespace std;

int main()
{
	std::vector<Image*> ImageList; // <> ���̿� int float e�� ����� ���ĸ� �־��ָ� ��.

	//Image Temp(0, 0, 165, 55, 128);
	//ImageList.push_back(Temp); // List�� �߰��ϰڴ�. //���� �� �� ��� �ؿ� ���ٷε� ����
	ImageList.push_back(new Image(0, 0, 165, 55, 128));
	cout << ImageList.size() << endl;
	
	/*Image Temp2(0, 1, 13, 82, 182);
	ImageList.push_back(Temp2);*/
	ImageList.push_back(new Image(0, 0, 165, 55, 128)); // �޸𸮿� �߰��ϰڴ�.
	cout << ImageList.size() << endl;

	for (int i = 0; i < ImageList.size(); ++i)
	{
		/*cout << ImageList[i].X << ", ";
		cout << ImageList[i].Y << endl;*/
		cout << ImageList[i]->X << ", ";
		cout << ImageList[i]->Y << endl;
	}

	for (int i = 0; i < ImageList.size(); ++i)
	{
		delete ImageList[i];
	}

	return 0;
}