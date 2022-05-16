#include <iostream>
#include "Image.h"
#include <vector> // 크기가 바뀌는 배열

using namespace std;

int main()
{
	std::vector<Image*> ImageList; // <> 사이에 int float e등 사용할 형식만 넣어주면 됨.

	//Image Temp(0, 0, 165, 55, 128);
	//ImageList.push_back(Temp); // List에 추가하겠다. //위에 두 줄 대신 밑에 한줄로도 가능
	ImageList.push_back(new Image(0, 0, 165, 55, 128));
	cout << ImageList.size() << endl;
	
	/*Image Temp2(0, 1, 13, 82, 182);
	ImageList.push_back(Temp2);*/
	ImageList.push_back(new Image(0, 0, 165, 55, 128)); // 메모리에 추가하겠다.
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