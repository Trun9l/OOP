#include "pch.h"
#include "CppUnitTest.h"
#include "../ProgOOP1/Ball.h"
#include "../ProgOOP1/Parallelepiped.h"
#include "../ProgOOP1/Tetrahedron.h"
#include "../ProgOOP1/Container.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ProgOop1Tests
{
	TEST_CLASS(ProgOop1Tests)
	{
	public:
		
		TEST_METHOD(BallInTest)
		{
			Ball myBall;
			string file = "BallIn.txt";
			int rad = 5;
			ofstream ofst(file);
			ofst << rad;
			ofst.close();
			ifstream ifst("..\\Debug\\" + file);
			myBall.InData(ifst);
			Assert::IsTrue(myBall.GetR() == rad, L"Неправильный ввод");
		}
		TEST_METHOD(BallOutTest)
		{
			ofstream ofst("..\\ProgOop1Tests\\BallOut.txt");
			int rad = 5;
			Ball myBall(rad);
			myBall.Out(ofst);
			ofst.close();
			ifstream ifst;
			ifst.open("..\\ProgOop1Tests\\BallOut.txt", std::ifstream::in);
			ifstream ifstCorrect;
			ifstCorrect.open("..\\ProgOop1Tests\\BallOutCorrect.txt", std::ifstream::in);
			string str, strCorrect;
			if (ifst.is_open() && ifstCorrect.is_open())
			{
				while (!ifst.eof())
				{
					//string str, strTest;
					//ifst >> str;
					//ifstCorrect >> strTest;
					std::getline(ifst, str);
					std::getline(ifstCorrect, strCorrect);
					Assert::IsTrue(str.compare(strCorrect) == 0, L"Не сходятся строки в выводе");
					Assert::IsTrue(ifstCorrect.eof() == ifst.eof(), L"Вывод больше, чем планировалось");
				}
				ifstCorrect.close();
				ifst.close();
			}
			else
				Assert::Fail(L"Не открылись файлы");
			Assert::IsTrue(ifstCorrect.eof() == true, L"Вывод меньше, чем планировалось");
		}
		TEST_METHOD(BallVolumeTest)
		{
			int rad = 5;
			Ball myBall(rad);
			float pi = 3.14;
			float xx = (4 / 3) * pi * rad * rad;
			float yy = myBall.Volume();
			Assert::IsTrue((4 / 3) * pi * rad * rad == myBall.Volume(), L"Неправильно рассчитан объем");
		}
		TEST_METHOD(ParallelepipedInTest)
		{
			Parallelepiped myParal;
			int a = 11, b = 15, c = 17;
			string file = "ParallelepipedIn.txt";
			ofstream ofst(file);
			ofst << a << " " << b << " " << c;
			ofst.close();
			ifstream ifst("..\\Debug\\" + file);
			myParal.InData(ifst);
			Assert::IsTrue(myParal.GetA() == a && myParal.GetB() == b && myParal.GetC() == c, L"Неправильный ввод");

		}
		TEST_METHOD(ParallelepipedOutTest)
		{
			ofstream ofst("..\\ProgOop1Tests\\ParallelepipedOut.txt");
			int a = 11, b = 15, c = 17;
			Parallelepiped myParal(a,b,c);
			myParal.Out(ofst);
			ofst.close();
			ifstream ifst;
			ifst.open("..\\ProgOop1Tests\\ParallelepipedOut.txt", std::ifstream::in);
			ifstream ifstCorrect;
			ifstCorrect.open("..\\ProgOop1Tests\\ParallelepipedOutCorrect.txt", std::ifstream::in);
			string str, strCorrect;
			if (ifst.is_open() && ifstCorrect.is_open())
			{
				while (!ifst.eof())
				{
					//string str, strTest;
					//ifst >> str;
					//ifstCorrect >> strTest;
					std::getline(ifst, str);
					std::getline(ifstCorrect, strCorrect);
					Assert::IsTrue(str.compare(strCorrect) == 0, L"Не сходятся строки в выводе");
					Assert::IsTrue(ifstCorrect.eof() == ifst.eof(), L"Вывод больше, чем планировалось");
				}
				ifstCorrect.close();
				ifst.close();
			}
			else
				Assert::Fail(L"Не открылись файлы");
			Assert::IsTrue(ifstCorrect.eof() == true, L"Вывод меньше, чем планировалось");
		}
		TEST_METHOD(ParallelepipedVolumeTest)
		{
			int a = 11, b = 15, c = 17;
			Parallelepiped myParal(a, b, c);
			Assert::IsTrue(a * b * c == myParal.Volume(), L"Неправильно рассчитан объем");
		}
		TEST_METHOD(TetrahedronInTest)
		{
			string file = "TetrahedronIn.txt";
			int a = 3;
			ofstream ofst(file);
			ofst << a;
			ofst.close();
			Tetrahedron myTet(a);
			ifstream ifst("..\\Debug\\" + file);
			myTet.InData(ifst);
			Assert::IsTrue(myTet.GetA() == a, L"Неправильный ввод");
		}
		TEST_METHOD(TetrahedronOutTest)
		{
			ofstream ofst("..\\ProgOop1Tests\\TetrahedronOut.txt");
			int a = 5;
			Tetrahedron myTet(a);
			myTet.Out(ofst);
			ofst.close();
			ifstream ifst;
			ifst.open("..\\ProgOop1Tests\\TetrahedronOut.txt", std::ifstream::in);
			ifstream ifstCorrect;
			ifstCorrect.open("..\\ProgOop1Tests\\TetrahedronOutCorrect.txt", std::ifstream::in);
			string str, strCorrect;
			if (ifst.is_open() && ifstCorrect.is_open())
			{
				while (!ifst.eof())
				{
					//string str, strTest;
					//ifst >> str;
					//ifstCorrect >> strTest;
					std::getline(ifst, str);
					std::getline(ifstCorrect, strCorrect);
					Assert::IsTrue(str.compare(strCorrect) == 0, L"Не сходятся строки в выводе");
					Assert::IsTrue(ifstCorrect.eof() == ifst.eof(), L"Вывод больше, чем планировалось");
				}
				ifstCorrect.close();
				ifst.close();
			}
			else
				Assert::Fail(L"Не открылись файлы");
			Assert::IsTrue(ifstCorrect.eof() == true, L"Вывод меньше, чем планировалось");
		}
		TEST_METHOD(TetrahedronVolumeTest)
		{
			int a = 7;
			Tetrahedron myTet(a);
			float calculatedVol = (a * a * a) * (sqrt(2) / 12);
			Assert::IsTrue(calculatedVol == myTet.Volume(), L"Неправильно рассчитан объем");
		}
		TEST_METHOD(ShapeVolumeTest)
		{
			int rad = 5;
			Ball myBall(rad);
			Shape* myShape = new Ball;
			myShape = &myBall;
			float pi = 3.14;
			Assert::IsTrue((4 / 3) * pi * rad * rad == myShape->Volume(), L"Неправильно рассчитан объем");
		}
		TEST_METHOD(ShapeInTest)
		{
			string file = "ShapeIn.txt";
			int k = 1;
			float density = 17;
			int meltingPoint = 10;
			int rad = 5;
			ofstream ofst(file);
			ofst << k << '\n';
			ofst << meltingPoint << " " << density << " ";
			ofst << rad << '\n';
			ofst.close();
			ifstream ifst("..\\Debug\\" + file);
			Shape* myShape = myShape->InShape(ifst);			
			Assert::IsTrue(myShape->GetDensity() == density && myShape->GetMeltingPoint() == meltingPoint
				&& myShape->GetR() == rad, L"Неправильный ввод");
		}
		TEST_METHOD(ShapeOutTest)
		{
			string file = "ShapeIn.txt";
			ifstream ifstInput("..\\Debug\\" + file);
			Shape* myShape = myShape->InShape(ifstInput);
			ofstream ofst("..\\ProgOop1Tests\\ShapeOut.txt");
			myShape->Out(ofst);
			ofst.close();
			ifstream ifst;
			ifst.open("..\\ProgOop1Tests\\ShapeOut.txt", std::ifstream::in);
			ifstream ifstCorrect;
			ifstCorrect.open("..\\ProgOop1Tests\\ShapeOutCorrect.txt", std::ifstream::in);
			string str, strCorrect;
			if (ifst.is_open() && ifstCorrect.is_open())
			{
				while (!ifst.eof())
				{
					//string str, strTest;
					//ifst >> str;
					//ifstCorrect >> strTest;
					std::getline(ifst, str);
					std::getline(ifstCorrect, strCorrect);
					Assert::IsTrue(str.compare(strCorrect) == 0, L"Не сходятся строки в выводе");
					Assert::IsTrue(ifstCorrect.eof() == ifst.eof(), L"Вывод больше, чем планировалось");
				}
				ifstCorrect.close();
				ifst.close();
			}
			else
				Assert::Fail(L"Не открылись файлы");
			Assert::IsTrue(ifstCorrect.eof() == true, L"Вывод меньше, чем планировалось");
		}
		TEST_METHOD(ContainerInitTest)
		{
			Container cont;
			Assert::IsTrue(cont.GetLength() == 0 && cont.GetHead() == NULL, L"Ошибка в конструкторе");
		}
		TEST_METHOD(ContainerClearTest)
		{
			string file = "ShapeIn.txt";
			ifstream ifst("..\\Debug\\" + file);
			Container cont;
			cont.In(ifst);
			cont.Clear();
			Assert::IsTrue(cont.GetLength() == 0 && cont.GetHead() == NULL);
		}
		TEST_METHOD(ContainerGetTailPushBackInsertAfterTest)
		{
			string file = "ShapeInGetHead.txt";
			ifstream ifst("..\\Debug\\" + file);
			Container cont;
			cont.In(ifst);
			Assert::IsTrue(cont.GetTail()->GetSp()->CheckBalls() == true);
		}
		TEST_METHOD(ContainerInTest)
		{
			string file = "ContainerIn.txt";
			int k = 1;
			int rad = 5;
			float density = 17;
			int meltingPoint = 10;
			ofstream ofst(file);
			ofst << k << '\n';
			ofst << meltingPoint << " " << density << " ";
			ofst << rad << '\n';
			ofst.close();
			ifstream ifst("..\\Debug\\" + file);
			Container cont;
			cont.In(ifst);
			Assert::IsTrue(cont.GetHead()->GetSp()->CheckBalls() == true && cont.GetHead()->GetSp()->GetDensity() == density && cont.GetHead()->GetSp()->GetMeltingPoint() == meltingPoint
				&& cont.GetHead()->GetSp()->GetR() == rad, L"Неправильный ввод");
		}
		TEST_METHOD(ContainerOutTest)
		{
			ifstream ifstInput("..\\ProgOOP1\\in.txt");
			Container cont;
			cont.In(ifstInput);
			ifstInput.close();
			ofstream ofst("..\\ProgOop1Tests\\ContainerOut.txt");
			cont.Out(ofst);
			ofst.close();
			ifstream ifst;
			ifst.open("..\\ProgOop1Tests\\ContainerOut.txt", std::ifstream::in);
			ifstream ifstCorrect;
			ifstCorrect.open("..\\ProgOop1Tests\\ContainerOutCorrect.txt", std::ifstream::in);
			string str, strCorrect;
			if (ifst.is_open() && ifstCorrect.is_open())
			{
				while (!ifst.eof())
				{
					std::getline(ifst, str);
					std::getline(ifstCorrect, strCorrect);
					Assert::IsTrue(str.compare(strCorrect) == 0, L"Не сходятся строки в выводе");
					Assert::IsTrue(ifstCorrect.eof() == ifst.eof(), L"Вывод больше, чем планировалось");
				}
			}
			else
				Assert::Fail(L"Не открылись файлы");
			Assert::IsTrue(ifstCorrect.eof() == true, L"Вывод меньше, чем планировалось");
		}
		TEST_METHOD(ContainerSortTest)
		{
			ifstream ifstInput("..\\ProgOOP1\\in.txt");
			Container cont;
			cont.In(ifstInput);
			ifstInput.close();
			cont.Sort();
			ofstream ofst("..\\ProgOop1Tests\\ContainerSort.txt");
			cont.Out(ofst);
			ofst.close();
			ifstream ifst;
			ifst.open("..\\ProgOop1Tests\\ContainerSort.txt", std::ifstream::in);
			ifstream ifstCorrect;
			ifstCorrect.open("..\\ProgOop1Tests\\ContainerSortCorrect.txt", std::ifstream::in);
			string str, strCorrect;
			if (ifst.is_open() && ifstCorrect.is_open())
			{
				while (!ifst.eof())
				{
					std::getline(ifst, str);
					std::getline(ifstCorrect, strCorrect);
					Assert::IsTrue(str.compare(strCorrect) == 0, L"Не сходятся строки в выводе");
					Assert::IsTrue(ifstCorrect.eof() == ifst.eof(), L"Вывод больше, чем планировалось");
				}
			}
			else
				Assert::Fail(L"Не открылись файлы");
			Assert::IsTrue(ifstCorrect.eof() == true, L"Вывод меньше, чем планировалось");
		}
		TEST_METHOD(ContainerOutBallsTest)
		{
			ifstream ifstInput("..\\ProgOOP1\\in.txt");
			Container cont;
			cont.In(ifstInput);
			ifstInput.close();
			ofstream ofst("..\\ProgOop1Tests\\ContainerBalls.txt");
			cont.OutBalls(ofst);
			ofst.close();

			ifstream ifst;
			ifst.open("..\\ProgOop1Tests\\ContainerBalls.txt", std::ifstream::in);
			ifstream ifstCorrect;
			ifstCorrect.open("..\\ProgOop1Tests\\ContainerBallsCorrect.txt", std::ifstream::in);
			string str, strCorrect;
			if (ifst.is_open() && ifstCorrect.is_open())
			{
				while (!ifst.eof())
				{
					std::getline(ifst, str);
					std::getline(ifstCorrect, strCorrect);
					Assert::IsTrue(str.compare(strCorrect) == 0, L"Не сходятся строки в выводе");
					Assert::IsTrue(ifstCorrect.eof() == ifst.eof(), L"Вывод больше, чем планировалось");
				}
			}
			else
				Assert::Fail(L"Не открылись файлы");
			Assert::IsTrue(ifstCorrect.eof() == true, L"Вывод меньше, чем планировалось");
		}
	};
}
