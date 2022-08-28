#include <conio.h>
#include <stdio.h>
#include "Header1.h"



void tren(int x, int y, int c);
void duoi(int x, int y, int c);
void trai(int x, int y, int c);
void phai(int x, int y, int c);
void hoten();
void ngang();
void nen();
void nhiphanamduong();
void khungnhap();
// nhi phan khong dau
void input(int mang1[], int mang2[], int &n, int &a, int &b, int &vuotra);
void dongbo(int mang1[], int mang2[], int n);
void congbinary(int mang1[], int mang2[], int n, int kp[]);
void trubinary(int mang1[], int mang2[], int n, int kq[]);
void nhiphan1();

void inputtru(int mangtru1[], int mangtru2[], int &n, int &flag1, int &flag2);
void dongbotru(int mangtru1[], int mangtru2[], int n);
void daomang_bu2(int a[], int n);
void bu2(int mangtru1[], int mangtru2[], int mangtru1_2[], int mangtru2_2[], int n, int flag1, int flag2);
void math(int mangtru1[], int mangtru2[], int mangtru1_2[], int mangtru2_2[], int n, int flag1, int flag2);
void nhiphan2();

void main()
{

	nen();
	nhiphanamduong();
	int luachon;
	int ss = 7, bb = 29;
	while (ss < 8)
	{
		gotoXY(ss, bb);
		printf("Lua chon:");
		ss++;
	}

	ss = 17, bb = 29;
	while (ss < 18)
	{
		gotoXY(ss, bb);
		scanf("%d", &luachon);
		ss++;
	}


	if (luachon == 1)
	{
		int skip;
		do
		{
			system("cls");
			nen();
			khungnhap();
			nhiphan1();

			ss = 7, bb = 29;
			while (ss < 8)
			{
				gotoXY(ss, bb);
				printf("[1] skip %c [0] exit:", 176);
				ss++;
			}

			ss = 28, bb = 29;
			while (ss < 29)
			{
				gotoXY(ss, bb);
				scanf("%d", &skip);
				ss++;
			}
		} while (skip == 1);
		return;
	}
	if (luachon == 2)
	{
		int skip;
		do
		{
			system("cls");
			nen();
			khungnhap();
			nhiphan2();
			ss = 7, bb = 29;
			while (ss < 8)
			{
				gotoXY(ss, bb);
				printf("[1] skip %c [0] exit:", 176);
				ss++;
			}

			ss = 28, bb = 29;
			while (ss < 29)
			{
				gotoXY(ss, bb);
				scanf("%d", &skip);
				ss++;
			}
		} while (skip == 1);
		return;

	}



	getch();
}

void nen()
{
	tren(2, 1, 60); trai(1, 2, 7);  duoi(2, 7, 60); phai(60, 2, 7);
	hoten(); ngang();
	//
	gotoXY(60, 1);
	printf("%c", 187);
	gotoXY(60, 7);
	printf("%c", 188);
	gotoXY(1, 7);
	printf("%c", 200);
	gotoXY(1, 1);
	printf("%c", 201);
	tren(2, 11, 60); trai(1, 12, 30); duoi(2, 30, 60); phai(60, 12, 30);

	gotoXY(60, 11);
	printf("%c", 187);
	gotoXY(60, 30);
	printf("%c", 188);
	gotoXY(1, 30);
	printf("%c", 200);
	gotoXY(1, 11);
	printf("%c", 201);
}

void tren(int x, int y, int c)
{

	while (x < c)
	{
		gotoXY(x, y);
		printf("%c", 205);
		x++;
	}


}

void duoi(int x, int y, int c)
{

	while (x < c)
	{
		gotoXY(x, y);
		printf("%c", 205);
		x++;
	}
}

void trai(int x, int y, int c)
{

	while (y < c)
	{
		gotoXY(x, y);
		printf("%c", 186);
		y++;
	}
}

void phai(int x, int y, int c)
{
	while (y < c)
	{
		gotoXY(x, y);
		printf("%c", 186);
		y++;
	}
}

void ngang()
{
	int x = 29, y = 2;
	while (y < 7)
	{
		gotoXY(x, y);
		printf("%c", 186);
		y++;
	}
}
void hoten()
{
	int x = 5, y = 2;
	while (x < 6)
	{
		gotoXY(x, y);
		printf("THONG TIN SINH VIEN");
		x++;
	}

	x = 3, y = 3;
	while (x < 4)
	{
		gotoXY(x, y);
		printf("Khuu Van Hoa   2001200606");
		x++;
	}
	x = 3;  y = 4;
	while (x < 4)
	{
		gotoXY(x, y);
		printf("");

		x++;
	}
	x = 3;  y = 5;
	while (x < 4)
	{
		gotoXY(x, y);
		printf("");
		x++;
	}
	x = 3;  y = 6;
	while (x < 4)
	{
		gotoXY(x, y);

		printf("");
		x++;
	}
	//thong tin mon
	x = 36, y = 2;
	while (x < 37)
	{
		gotoXY(x, y);
		printf("KET THUC HOC PHAN");
		x++;
	}
	x = 34, y = 3;
	while (x < 35)
	{
		gotoXY(x, y);
		printf("MON KIEN TRUC MAY TINH");
		x++;
	}
	x = 39, y = 4;
	while (x < 40)
	{
		gotoXY(x, y);
		printf("----------");
		x++;
	}
	x = 32, y = 5;
	while (x < 33)
	{
		gotoXY(x, y);
		printf("GVHD: Tran Thi Bich Van");
		x++;
	}

	y = 9; x = 3;
	while (x < 4)
	{
		gotoXY(x, y);
		printf("De tai: Tim kiem giai thuat cong, tru tren so nhi phan");
		x++;
	}
	y = 10; x = 11;
	while (x < 12)
	{
		gotoXY(x, y);
		printf("Viet chuong trinh minh hoa");
		x++;
	}

	y = 12; x = 17;
	while (x < 18)
	{
		gotoXY(x, y);
		printf("CHUONG TRINH CONG TRU");
		x++;
	}

	y = 13; x = 25;
	while (x < 26)
	{
		gotoXY(x, y);
		printf("*******");
		x++;
	}
}
void nhiphanamduong() // 1 2
{
	tren(5, 15, 25);
	duoi(5, 17, 25);
	trai(4, 16, 17);
	phai(25, 16, 17);

	gotoXY(4, 15);
	printf("%c", 201);
	gotoXY(25, 15);
	printf("%c", 187);
	gotoXY(4, 17);
	printf("%c", 200);
	gotoXY(25, 17);
	printf("%c", 188);

	int ss = 5, bb = 16;
	while (ss < 6)
	{
		gotoXY(ss, bb);
		printf("Nhi phan khong dau%c1", 16);
		ss++;
	}

	tren(35, 15, 55);
	duoi(35, 17, 55);
	trai(34, 16, 17);
	phai(55, 16, 17);

	gotoXY(34, 15);
	printf("%c", 201);
	gotoXY(55, 15);
	printf("%c", 187);
	gotoXY(34, 17);
	printf("%c", 200);
	gotoXY(55, 17);
	printf("%c", 188);

	ss = 35, bb = 16;
	while (ss < 36)
	{
		gotoXY(ss, bb);
		printf("Nhi phan co dau%c2", 16);
		ss++;
	}

	tren(2, 28, 60);


	gotoXY(1, 28);
	printf("%c", 204);
	gotoXY(60, 28);
	printf("%c", 185);


}

void khungnhap()
{

	//khung nhap A
	int ss = 5, bb = 16;
	while (ss < 6)
	{
		gotoXY(ss, bb);
		printf("Nhap A:");
		ss++;
	}

	tren(13, 15, 20);
	duoi(13, 17, 20);
	trai(12, 16, 17);
	phai(20, 16, 17);

	gotoXY(12, 15);
	printf("%c", 201);
	gotoXY(20, 15);
	printf("%c", 187);
	gotoXY(12, 17);
	printf("%c", 200);
	gotoXY(20, 17);
	printf("%c", 188);

	ss = 5, bb = 19;
	//khung Nhap dau

	tren(13, 18, 20);
	duoi(13, 20, 20);
	trai(12, 19, 20);
	phai(20, 19, 20);

	gotoXY(12, 18);
	printf("%c", 201);
	gotoXY(20, 18);
	printf("%c", 187);
	gotoXY(12, 20);
	printf("%c", 200);
	gotoXY(20, 20);
	printf("%c", 188);

	ss = 5, bb = 19;
	while (ss < 6)
	{
		gotoXY(ss, bb);
		printf("Nhap B:");
		ss++;
	}


	//khung ra nhi phan


	tren(25, 15, 48);
	duoi(25, 17, 48);
	trai(24, 16, 17);
	phai(48, 16, 17);

	gotoXY(24, 15);
	printf("%c", 201);
	gotoXY(48, 15);
	printf("%c", 187);
	gotoXY(24, 17);
	printf("%c", 200);
	gotoXY(48, 17);
	printf("%c", 188);

	tren(25, 18, 48);
	duoi(25, 20, 48);
	trai(24, 19, 20);
	phai(48, 19, 20);

	gotoXY(24, 18);
	printf("%c", 201);
	gotoXY(48, 18);
	printf("%c", 187);
	gotoXY(24, 20);
	printf("%c", 200);
	gotoXY(48, 20);
	printf("%c", 188);



}

//--------------------------------------
void nhiphan1()
{
	int *mang1;
	int *mang2, a, b;
	int kq[50];
	int n, vuotra;

	mang1 = (int *)malloc(20 * sizeof(int));
	mang2 = (int *)malloc(20 * sizeof(int));
	input(mang1, mang2, n, a, b, vuotra);
	if (vuotra == 0)
	{
		int ss = 7, bb = 28;
		while (ss < 8)
		{
			gotoXY(ss, bb);
			printf("Day la nhi phan khong dau!");
			ss++;
		}
		return;
	}
	dongbo(mang1, mang2, n);
	congbinary(mang1, mang2, n, kq);
	trubinary(mang1, mang2, n, kq);
}

void input(int mang1[], int mang2[], int &n, int &a, int &b, int &vuotra)
{


	int ss = 5, bb = 22;
	while (ss < 6)
	{
		gotoXY(ss, bb);
		printf("Cong:");
		ss++;
	}

	tren(14, 21, 45);
	duoi(14, 23, 45);
	trai(13, 22, 23);
	phai(45, 22, 23);

	gotoXY(13, 21);
	printf("%c", 201);
	gotoXY(45, 21);
	printf("%c", 187);
	gotoXY(13, 23);
	printf("%c", 200);
	gotoXY(45, 23);
	printf("%c", 188);


	ss = 5, bb = 25;
	while (ss < 6)
	{
		gotoXY(ss, bb);
		printf("Tru:");
		ss++;
	}

	tren(14, 24, 45);
	duoi(14, 26, 45);
	trai(13, 25, 26);
	phai(45, 25, 26);

	gotoXY(13, 24);
	printf("%c", 201);
	gotoXY(45, 24);
	printf("%c", 187);
	gotoXY(13, 26);
	printf("%c", 200);
	gotoXY(45, 26);
	printf("%c", 188);

	ss = 14, bb = 16;

	while (ss < 15)
	{
		gotoXY(ss, bb);
		scanf("%d", &a);
		ss++;
	}

	ss = 14; bb = 19;



	while (ss < 15)
	{
		gotoXY(ss, bb);
		scanf("%d", &b);
		ss++;
	}

	// khung dau
	tren(50, 16, 20);


	int ktra_am = a - b;
	int ktra_duong = a + b;
	if (ktra_am < 0 || ktra_duong>255)
	{
		vuotra = 0;

	}
	int dem1 = 0;
	int i = 0;
	while (a > 0)
	{
		mang1[i++] = a % 2;
		dem1++;
		a = a / 2;
	}
	i = 0;
	int dem2 = 0;
	while (b > 0)
	{
		mang2[i++] = b % 2;
		dem2++;
		b = b / 2;
	}
	n = dem1 > dem2 ? dem1 : dem2;

	if (n <= 4) //4 bit
	{
		for (int i = 0; i < 4; i++)
		{
			if (mang1[i] != 0 && mang1[i] != 1)
			{
				mang1[i] = 0;
			}
		}

		for (int i = 0; i < 4; i++)
		{
			if (mang2[i] != 0 && mang2[i] != 1)
			{
				mang2[i] = 0;
			}

		}
		n = 4;

	}

	if (n > 4 && n <= 8) //8 bit
	{
		for (int i = 0; i < 8; i++)
		{
			if (mang1[i] != 0 && mang1[i] != 1)
			{
				mang1[i] = 0;
			}
		}

		for (int i = 0; i < 8; i++)
		{
			if (mang2[i] != 0 && mang2[i] != 1)
			{
				mang2[i] = 0;
			}
		}
		n = 8;

	}
	//
	/*ss = 14, bb = 22;
	int ll;
	for (int i = 0; i < n; i++)
	{
	ll = ss + 1;
	while (ss < ll)
	{
	gotoXY(ss, bb);
	printf("%d", mang1[i]);
	ss++;
	}
	ss++;
	}*/
	//


	printf("\n");
	//for (int i = 0; i < n; i++)
	//{
	//	printf("%d", mang2[i]);
	//}
}

void dongbo(int mang1[], int mang2[], int n)
{

	if (n > 4 && n <= 8) //8bit
	{
		for (int i = 0; i < 8 / 2; i++)
		{
			char t = mang1[i];
			mang1[i] = mang1[8 - 1 - i];
			mang1[8 - 1 - i] = t;
		}

		for (int i = 0; i < 8 / 2; i++)
		{
			char t = mang2[i];
			mang2[i] = mang2[8 - 1 - i];
			mang2[8 - 1 - i] = t;
		}
	}
	if (n <= 4) //4bit
	{
		for (int i = 0; i < 4 / 2; i++)
		{
			char t = mang1[i];
			mang1[i] = mang1[4 - 1 - i];
			mang1[4 - 1 - i] = t;
		}

		for (int i = 0; i < 4 / 2; i++)
		{
			char t = mang2[i];
			mang2[i] = mang2[4 - 1 - i];
			mang2[4 - 1 - i] = t;
		}
	}
	int ss = 26, bb = 16;
	int ll;
	for (int i = 0; i < n; i++)
	{
		ll = ss + 1;
		while (ss < ll)
		{
			gotoXY(ss, bb);
			printf("%d", mang1[i]);
			ss++;
		}

	}

	ss = 26, bb = 19;

	for (int i = 0; i < n; i++)
	{
		ll = ss + 1;
		while (ss < ll)
		{
			gotoXY(ss, bb);
			printf("%d", mang2[i]);
			ss++;
		}

	}


}

void congbinary(int mang1[], int mang2[], int n, int kq[])
{

	int i = n - 1;
	int z = 0;
	int nho = 0;
	while (i >= 0)
	{
		kq[z++] = (mang1[i] % 10 + mang2[i] % 10 + nho) % 2;
		nho = (mang1[i] % 10 + mang2[i] % 10 + nho) / 2;
		i--;
	}
	if (nho != 0)
	{
		kq[z++] = nho;
	}
	--z;

	int ss = 15, bb = 22;
	int ll;
	while (z >= 0)
	{
		ll = ss + 1;
		gotoXY(ss, bb);
		printf("%d", kq[z--]);
		ss++;
	}
}

void trubinary(int mang1[], int mang2[], int n, int kq[])
{
	int i = 0;
	int nho = 0;
	int j = n - 1;
	while (j >= 0)
	{
		int flag = 1;


		int s = mang1[j] - mang2[j];

		if (mang1[j] == 1 && mang2[j] == 0 && nho != 0 && flag == 1)
		{
			kq[i++] = (mang1[j] - mang2[j] - nho) % 2;
			nho = (mang1[j] - mang2[j] - nho) / 2;
			flag = 0;
		}

		if (nho == 0 && flag == 1 && s >= 0)
		{
			kq[i++] = (mang1[j] - mang2[j] - nho) % 2;
			nho = (mang1[j] - mang2[j] - nho) / 2;
			flag = 0;
		}

		if (flag == 1)
		{
			kq[i++] = (mang1[j] - mang2[j] - nho + 4) % 2;
			nho = (mang1[j] - mang2[j] - nho + 4) / 2;
			flag = 0;
		}

		j--;

	}
	if (nho != 0)
		kq[i++] = nho;
	--i;

	int ss = 15, bb = 25;
	int ll;
	while (i >= 0)
	{
		ll = ss + 1;
		gotoXY(ss, bb);
		printf("%d", kq[i--]);
		ss++;
	}
}

//--------------------------------------

void nhiphan2()
{
	int mangtru1[20], mangtru2[20], n, flag1 = 0, flag2 = 0, mangtru1_2[20], mangtru2_2[20];

	inputtru(mangtru1, mangtru2, n, flag1, flag2);
	dongbotru(mangtru1, mangtru2, n);
	bu2(mangtru1, mangtru2, mangtru1_2, mangtru2_2, n, flag1, flag2);
	math(mangtru1, mangtru2, mangtru1_2, mangtru2_2, n, flag1, flag2);
}

void inputtru(int mangtru1[], int mangtru2[], int &n, int &flag1, int &flag2)
{



	int a1, b1;
	int ss, bb;

	ss = 13, bb = 25;
	while (ss < 14)
	{
		gotoXY(ss, bb);
		printf("Luu y: Chuong trinh cho so 4 bit.");
		ss++;
	}

	ss = 16, bb = 26;
	while (ss < 17)
	{
		gotoXY(ss, bb);
		printf("EX: -4+(-3); 6+(-2)....");
		ss++;
	}

	ss = 14, bb = 16;

	while (ss < 15)
	{
		gotoXY(ss, bb);
		scanf("%d", &a1);
		ss++;
	}

	ss = 14; bb = 19;

	while (ss < 15)
	{
		gotoXY(ss, bb);
		scanf("%d", &b1);
		ss++;
	}
	ss = 4, bb = 22;

	while (ss < 5)
	{
		gotoXY(ss, bb);
		printf("Ket qua:");
		ss++;
	}
	ss = 13; bb = 22;

	tren(13, 21, 25);
	duoi(13, 23, 25);
	trai(12, 22, 23);
	phai(25, 22, 23);

	gotoXY(12, 21);
	printf("%c", 201);
	gotoXY(25, 21);
	printf("%c", 187);
	gotoXY(12, 23);
	printf("%c", 200);
	gotoXY(25, 23);
	printf("%c", 188);
	int hihi = a1 + b1;
	while (ss < 14)
	{
		gotoXY(ss, bb);
		if (a1 >= 0 && b1 >= 0)
		{
			printf("%d+%d=%d", a1, b1, hihi);
		}
		if (a1 < 0 && b1 >= 0)
		{
			printf("(%d)+%d=%d", a1, b1, hihi);
		}
		if (a1 < 0 && b1 < 0)
		{
			printf("(%d)+(%d)=%d", a1, b1, hihi);
		}
		if (a1 >= 0 && b1 < 0)
		{
			printf("%d+(%d)=%d", a1, b1, hihi);
		}
		ss++;
	}

	ss = 26; bb = 22;

	while (ss < 27)
	{
		gotoXY(ss, bb);
		printf("%c", 16);
		ss++;
	}

	tren(28, 21, 50);
	duoi(28, 23, 50);
	trai(27, 22, 23);
	phai(50, 22, 23);

	gotoXY(27, 21);
	printf("%c", 201);
	gotoXY(50, 21);
	printf("%c", 187);
	gotoXY(27, 23);
	printf("%c", 200);
	gotoXY(50, 23);
	printf("%c", 188);

	//khung demo




	// chuyen ve duong

	if (a1 < 0)
	{
		a1 = a1*(-1);
		flag1 = 1;
	}
	if (b1 < 0)
	{
		b1 = b1*(-1);
		flag2 = 1;
	}
	// lay tung phta
	int i = 0, dem1 = 0, dem2 = 0;
	while (a1>0)
	{
		mangtru1[i++] = a1 % 2;
		dem1++;
		a1 = a1 / 2;
	}
	i = 0;

	while (b1 > 0)
	{
		mangtru2[i++] = b1 % 2;
		dem2++;
		b1 = b1 / 2;
	}
	//dong bo 1
	if (dem1 <= 4) //4 bit
	{
		for (int i = 0; i < 4; i++)
		{
			if (mangtru1[i] != 0 && mangtru1[i] != 1)
			{
				mangtru1[i] = 0;
			}
		}
		dem1 = 4;
	}

	if (dem2 <= 4) //4 bit
	{
		for (int i = 0; i < 8; i++)
		{
			if (mangtru2[i] != 0 && mangtru2[i] != 1)
			{
				mangtru2[i] = 0;
			}
		}
		dem2 = 4;
	}
	if (dem1 > 4 && dem1 <= 8) //8 bit
	{
		for (int i = 0; i < 8; i++)
		{
			if (mangtru1[i] != 0 && mangtru1[i] != 1)
			{
				mangtru1[i] = 0;
			}
		}
		dem1 = 8;
	}

	if (dem2 > 4 && dem2 <= 8) //8 bit
	{
		for (int i = 0; i < 8; i++)
		{
			if (mangtru2[i] != 0 && mangtru2[i] != 1)
			{
				mangtru2[i] = 0;
			}
		}
		dem2 = 8;
	}
	//bu 1
	if (flag1 == 1)
	{
		for (int i = 0; i < dem1; i++)
		{
			if (mangtru1[i] == 0)
			{
				mangtru1[i] = 1;
			}
			else
			{
				mangtru1[i] = 0;
			}
		}
	}

	if (flag2 == 1)
	{
		for (int i = 0; i < dem2; i++)
		{
			if (mangtru2[i] == 0)
			{
				mangtru2[i] = 1;
			}
			else
			{
				mangtru2[i] = 0;
			}
		}
	}
	//dong bo
	n = dem1 > dem2 ? dem1 : dem2;
	if (n <= 4) //4 bit
	{
		for (int i = 0; i < 4; i++)
		{
			if (mangtru1[i] != 0 && mangtru1[i] != 1)
			{
				mangtru1[i] = 0;
			}
		}

		for (int i = 0; i < 4; i++)
		{
			if (mangtru2[i] != 0 && mangtru2[i] != 1)
			{
				mangtru2[i] = 0;
			}

		}
		n = 4;

	}

	if (n>4 && n <= 8) //8 bit
	{
		for (int i = 0; i < 8; i++)
		{
			if (mangtru1[i] != 0 && mangtru1[i] != 1)
			{
				mangtru1[i] = 0;
			}
		}

		for (int i = 0; i < 8; i++)
		{
			if (mangtru2[i] != 0 && mangtru2[i] != 1)
			{
				mangtru2[i] = 0;
			}
		}
		n = 8;
	}


}

void dongbotru(int mangtru1[], int mangtru2[], int n)
{

	if (n > 4 && n <= 8) //8bit
	{
		for (int i = 0; i < 8 / 2; i++)
		{
			char t = mangtru1[i];
			mangtru1[i] = mangtru1[8 - 1 - i];
			mangtru1[8 - 1 - i] = t;
		}

		for (int i = 0; i < 8 / 2; i++)
		{
			char t = mangtru2[i];
			mangtru2[i] = mangtru2[8 - 1 - i];
			mangtru2[8 - 1 - i] = t;
		}
	}
	if (n <= 4) //4bit
	{
		for (int i = 0; i < 4 / 2; i++)
		{
			int t = mangtru1[i];
			mangtru1[i] = mangtru1[4 - 1 - i];
			mangtru1[4 - 1 - i] = t;
		}

		for (int i = 0; i < 4 / 2; i++)
		{
			int t = mangtru2[i];
			mangtru2[i] = mangtru2[4 - 1 - i];
			mangtru2[4 - 1 - i] = t;
		}
	}

	//===================================
	//printf("\nDao mang:\n");
	//for (int i = 0; i < n; i++)
	//{
	//	printf("%d", mangtru1[i]);
	//}
	//printf("\n");
	//for (int i = 0; i < n; i++)
	//{
	//	printf("%d", mangtru2[i]);
	//}
	//===================================

}

void bu2(int mangtru1[], int mangtru2[], int mangtru1_2[], int mangtru2_2[], int n, int flag1, int flag2)
{
	int mark = 0;
	//+1
	int bu2[20];

	for (int i = 0; i < n - 1; i++)
	{
		bu2[i] = 0;
	}
	bu2[n - 1] = 1;


	if (flag1 == 1 && mark == 0 && flag2 != 1)
	{
		int i = n - 1, z = 0, nho = 0;
		while (i >= 0)
		{
			mangtru1_2[z++] = (mangtru1[i] % 10 + bu2[i] % 10 + nho) % 2;
			nho = (mangtru1[i] % 10 + bu2[i] % 10 + nho) / 2;
			i--;
		}
		if (nho != 0)
		{
			mangtru1_2[z++] = nho;
		}--z;

		//dao
		for (int i = 0; i < n / 2; i++)
		{
			int t = mangtru1_2[i];
			mangtru1_2[i] = mangtru1_2[n - 1 - i];
			mangtru1_2[n - 1 - i] = t;
		}
		//xuatbu2
		int ss, bb, ll;
		ss = 26, bb = 16;

		for (int i = 0; i < n; i++)
		{
			ll = ss + 1;
			while (ss < ll)
			{
				gotoXY(ss, bb);
				printf("%d", mangtru1_2[i]);
				ss++;
			}

		}
		ss = 26, bb = 19;
		for (int i = 0; i < n; i++)
		{
			ll = ss + 1;
			while (ss < ll)
			{
				gotoXY(ss, bb);
				printf("%d", mangtru2[i]);
				ss++;
			}

		}
		mark = 1;

	}

	if (flag2 == 1 && mark == 0 && flag1 != 1)
	{
		int i = n - 1, z = 0, nho = 0;
		while (i >= 0)
		{
			mangtru2_2[z++] = (mangtru2[i] % 10 + bu2[i] % 10 + nho) % 2;
			nho = (mangtru2[i] % 10 + bu2[i] % 10 + nho) / 2;
			i--;
		}
		if (nho != 0)
		{
			mangtru2_2[z++] = nho;
		}--z;

		//xuatbu2


		for (int i = 0; i < n / 2; i++)
		{
			int t = mangtru2_2[i];
			mangtru2_2[i] = mangtru2_2[n - 1 - i];
			mangtru2_2[n - 1 - i] = t;
		}

		int ss, bb, ll;
		ss = 26, bb = 19;
		for (int i = 0; i < n; i++)
		{
			ll = ss + 1;
			while (ss < ll)
			{
				gotoXY(ss, bb);
				printf("%d", mangtru2_2[i]);
				ss++;
			}

		}
		ss = 26, bb = 16;

		for (int i = 0; i < n; i++)
		{
			ll = ss + 1;
			while (ss < ll)
			{
				gotoXY(ss, bb);
				printf("%d", mangtru1[i]);
				ss++;
			}

		}
		mark = 1;
	}
	if (flag1 != 1 && flag2 != 1 && mark == 0)
	{
		int ss = 26, bb = 16;
		int ll;
		for (int i = 0; i < n; i++)
		{
			ll = ss + 1;
			while (ss < ll)
			{
				gotoXY(ss, bb);
				printf("%d", mangtru1[i]);
				ss++;
			}

		}
		ss = 26, bb = 19;
		for (int i = 0; i < n; i++)
		{
			ll = ss + 1;
			while (ss < ll)
			{
				gotoXY(ss, bb);
				printf("%d", mangtru2[i]);
				ss++;
			}

		}
		mark = 1;
	}
	if (flag1 == 1 && flag2 == 1 && mark == 0)
	{

		int i = n - 1, z = 0, nho = 0;
		while (i >= 0)
		{
			mangtru2_2[z++] = (mangtru2[i] % 10 + bu2[i] % 10 + nho) % 2;
			nho = (mangtru2[i] % 10 + bu2[i] % 10 + nho) / 2;
			i--;
		}
		if (nho != 0)
		{
			mangtru2_2[z++] = nho;
		}--z;

		//xuatbu2


		for (int i = 0; i < n / 2; i++)
		{
			int t = mangtru2_2[i];
			mangtru2_2[i] = mangtru2_2[n - 1 - i];
			mangtru2_2[n - 1 - i] = t;
		}

		int ss, bb, ll;
		ss = 26, bb = 19;
		for (int i = 0; i < n; i++)
		{
			ll = ss + 1;
			while (ss < ll)
			{
				gotoXY(ss, bb);
				printf("%d", mangtru2_2[i]);
				ss++;
			}

		}

		i = n - 1, z = 0, nho = 0;
		while (i >= 0)
		{
			mangtru1_2[z++] = (mangtru1[i] % 10 + bu2[i] % 10 + nho) % 2;
			nho = (mangtru1[i] % 10 + bu2[i] % 10 + nho) / 2;
			i--;
		}
		if (nho != 0)
		{
			mangtru1_2[z++] = nho;
		}--z;

		//dao
		for (int i = 0; i < n / 2; i++)
		{
			int t = mangtru1_2[i];
			mangtru1_2[i] = mangtru1_2[n - 1 - i];
			mangtru1_2[n - 1 - i] = t;
		}





		ss, bb, ll;
		ss = 26, bb = 16;

		for (int i = 0; i < n; i++)
		{
			ll = ss + 1;
			while (ss < ll)
			{
				gotoXY(ss, bb);
				printf("%d", mangtru1_2[i]);
				ss++;
			}

		}


	}
}

void math(int mangtru1[], int mangtru2[], int mangtru1_2[], int mangtru2_2[], int n, int flag1, int flag2)
{
	int ss, bb;
	if (flag1 == 1 && flag2 == 1)
	{

		int i = n - 1;
		int z = 0;
		int nho = 0;
		int kq[20];
		while (i >= 0)
		{
			kq[z++] = (mangtru1_2[i] % 10 + mangtru2_2[i] % 10 + nho) % 2;
			nho = (mangtru1_2[i] % 10 + mangtru2_2[i] % 10 + nho) / 2;
			i--;
		}
		if (nho != 0)
		{
			kq[z++] = nho;
		}
		--z;
		ss = 29, bb = 22;
		while (z >= 0)
		{
			gotoXY(ss, bb);
			printf("%d", kq[z--]);
			ss++;
		}
	}

	if (flag1 == 0 && flag2 == 1)
	{

		int i = n - 1;
		int z = 0;
		int nho = 0;
		int kq[20];
		while (i >= 0)
		{
			kq[z++] = (mangtru1[i] % 10 + mangtru2_2[i] % 10 + nho) % 2;
			nho = (mangtru1[i] % 10 + mangtru2_2[i] % 10 + nho) / 2;
			i--;
		}
		if (nho != 0)
		{
			kq[z++] = nho;
		}
		--z;

		ss = 29, bb = 22;
		while (z >= 0)
		{
			gotoXY(ss, bb);
			printf("%d", kq[z--]);
			ss++;
		}
	}
	if (flag1 == 1 && flag2 == 0)
	{

		int i = n - 1;
		int z = 0;
		int nho = 0;
		int kq[20];
		while (i >= 0)
		{
			kq[z++] = (mangtru1_2[i] % 10 + mangtru2[i] % 10 + nho) % 2;
			nho = (mangtru1_2[i] % 10 + mangtru2[i] % 10 + nho) / 2;
			i--;
		}
		if (nho != 0)
		{
			kq[z++] = nho;
		}
		--z;

		ss = 29, bb = 22;
		while (z >= 0)
		{
			gotoXY(ss, bb);
			printf("%d", kq[z--]);
			ss++;
		}
	}


	if (flag1 == 0 && flag2 == 0)
	{

		int i = n - 1;
		int z = 0;
		int nho = 0;
		int kq[20];
		while (i >= 0)
		{
			kq[z++] = (mangtru1[i] % 10 + mangtru2[i] % 10 + nho) % 2;
			nho = (mangtru1[i] % 10 + mangtru2[i] % 10 + nho) / 2;
			i--;
		}
		if (nho != 0)
		{
			kq[z++] = nho;
		}
		--z;

		ss = 29, bb = 22;
		while (z >= 0)
		{
			gotoXY(ss, bb);
			printf("%d", kq[z--]);
			ss++;
		}

	}
}
