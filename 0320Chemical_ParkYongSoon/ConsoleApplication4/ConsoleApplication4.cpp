#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int Hcount = 0;
	int Scount = 0;

	char yesno = 'y';
	int Pcount;
	int cnt=0;

	int age[4];
	int mile[4];

	char phone[5][15];
	char name[5][15];
	cout << "------------------------------\n";
	cout << "3/27 이지민의 프로그램입니다.\n";
	cout << "------------------------------\n";

	
		for(Hcount = 0;Hcount <= Scount;Hcount++){
			for (Scount = cnt; Scount <= 5; Scount++)
			{
				if (Scount == 5)
				{
					cout << "입력인원이 초과 되었습니다.";
					return 0;
				}
				cout << "아래 사항을 입력해주세요 \n";
				cout << "이름 : ";
				cin >> name[Scount];

				cout << "나이 : ";
				cin >> age[Scount];

				cout << "핸드폰 : ";
				cin >> phone[Scount];

				cout << "마일리지 : ";
				cin >> mile[Scount];

				cout << "입력하신 사항이 맞는지 확인해주세요\n";
				cout << name[Scount] << "\t" << age[Scount] << "\t" << phone[Scount] << "\t" << mile[Scount] << "점\n";
				

				cout << "맞습니까 (y/n) ?\n";
				cin >> yesno;

				if (yesno == 'n') {
					Scount--;
					continue;
				}
				else
				{
					cnt++;
					cout << "-------------------------------------\n";
					cout << "다음 사람을 입력하시겠습니까 (y/n) ?\n";
					cin >> yesno;
					if (yesno == 'y')
					{
						continue;
					}
					else {
						break;
					}

				}
			}
			cout << "입력된 인원 전체를 모두 보시겠습니까 (y/n) ?";
			cin >> yesno;

			if (yesno == 'y')
				for (Pcount = 0; Pcount < cnt; Pcount++)
				{
					cout << Pcount + 1 << "번  " << name[Pcount] << "\t" << age[Pcount] << "\t" << phone[Pcount] << "\t" << mile[Pcount] << "점\n";
				}

			cout << "프로그램을 종료하시겠습니까 (y/n) ?";
			cin >> yesno;

			if (yesno == 'y') {
				cout << "프로그램을 종료합니다.";
				return 0;
			}
			else {
				continue;
			}
		}


		
	}

