//화학자의기호 점수 : 95 / 수행시간 : 0.11 /  메모리 : 6676 
#include "stdafx.h"
#include <stdio.h>
#include <string.h>

int main() {
	//화학기호 배열 선언
	char * chemical[] = {
		"H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne", "Na", "Mg", "Al",
		"Si", "P", "S", "Cl", "Ar", "K", "Ca", "Sc", "Ti", "V", "Cr", "Mn", "Fe",
		"Co", "Ni", "Cu", "Zn", "Ga", "Ge", "As", "Se", "Br", "Kr", "Rb", "Sr",
		"Y","Zr", "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", "Ag", "Cd", "In", "Sn", "Sb",
		"Te", "I", "Xe", "Cs", "Ba", "Hf", "Ta", "W", "Re", "Os", "Ir", "Pt", "Au",
		"Hg", "Tl", "Pb", "Bi", "Po", "At", "Rn", "Fr", "Ra", "Rf", "Db", "Sg",
		"Bh", "Hs", "Mt", "Ds", "Rg", "Cn", "Fl", "Lv", "La", "Ce", "Pr", "Nd",
		"Pm", "Sm", "Eu", "Gd", "Tb", "Dy", "Ho", "Er", "Tm", "Yb", "Lu", "Ac",
		"Th", "Pa", "U", "Np", "Pu", "Am", "Cm", "Bk", "Cf", "Es", "Fm", "Md",
		"No", "Lr" };

	int T;  //몇문장 입력할지 받아주는 인수

	int i, j; //반복문 인수

	int checkWord[50001]; //입력한 문장 화학기호로 이루어졌는지 확인용 배열

	char inputWord[50001]; //입력할 문장

	scanf("%d", &T); //문자입력횟수 입력

	//반복문 시작
	for (int test_case = 0; test_case < T; test_case++)
	{
		memset(checkWord, 0, sizeof(checkWord));  //배열 checkWord의 값을 모두 0으로 설정
		scanf("%s", inputWord);
		checkWord[0] = 1;

		for (i = 0; i < inputWord[i]; i++) {
			for (j = 0; j < 114; j++) {        //화학기호가 114개여서 114번 반복

		//여기서 chemical[j][1]은 두글자로 이루어진 기호중 두번째 알파벳,즉 기호 'He' 이면 'e'를 뜻함

		//입력한 문장의 첫번째 글자가 화학기호 인지를 구별
				if (inputWord[i] == chemical[j][0] + 32 && !chemical[j][1]) //대문자에 아스키 값 32 더하면 소문자행
					checkWord[i + 1] += checkWord[i];

				//입력한 문장의 첫번째+두번째 글자가 화학기호 인지를 구별
				if (inputWord[i] == chemical[j][0] + 32 && inputWord[i + 1] == chemical[j][1])
					checkWord[i + 2] += checkWord[i];
			}
		}
		printf("Case #%d\n", test_case + 1);
		if (checkWord[i]) printf("YES\n");    //0이외 숫자는 true 인식,YES출력
		else printf("NO\n");   //0나오면 NO 출력
	}
	return 0;
}