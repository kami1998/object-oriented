#include<ctime>
#include<iostream>
#include <stdlib.h>
#define Z '+'
#define X '-'
#define C '*'
#define V '/'
using namespace std;

void language4(char language,int s)
{
	switch(language)
	{
		case 'C':cout<<"答案是："<<s<<"\n";break;
		case 'E':cout<<"The answer is "<<s<<endl;break;
		case 'R':cout<<"答えは"<<s<<endl;break;
		case 'D':cout<<"Die antwort ist"<<s<<endl;break;
		case 'F':cout<<"La réponse est"<<s<<endl;break;
	}
}

class Count
{
	public:
		float counting(int a,float b,float c,float t);
		int sigh(int d,char n);
};
float Count::counting(int a, float b, float c,float t)
{
	switch (a)
		{
			case 0:
				t = b + c;
				break;
			case 1:
				t = b - c;
				break;
			case 2:
				t = b * c;
				break;
			case 3:
				if (c == 0)
					for (int j = 0;; j++)
						{
							c = rand() % 10;
							if (c != 0)break;
						}
				t = b *1.0/ c;
				break;

		}
	return t;
}
int Count::sigh(int d,char n)
{
	switch (d)
		{
			case 0:
				n = Z;
				break;
			case 1:
				n = X;
				break;
			case 2:
				n = C;
				break;
			case 3:
				n = V;
				break;
		}
	return n;
}



int classone(char r,char l)
{
	int  m1, m2, m3,a;
	char n1='a', n2='a', n3='a';
	float s,l1,l2,k1, k2, k3, k4;
	srand(time(0));
	Count A;
	for (int i = 0; i < 1; i++)
		{
			k1 = rand()%10;
			k2 = rand()%10;
			k3 = rand()%10;
			k4 = rand()%10;
			m1 = rand()%4;
			m2 = rand()%4;
			m3 = rand()%4;
			l1=A.counting(m1,k1,k2,l1);
			n1=A.sigh(m1,n1);
			l2=A.counting(m3,k3,k4,l2);
			n3=A.sigh(m3,n3);
			n2=A.sigh(m2,n2);
			if (l2 == 0&&m2==0)
				{
					i--;
					continue;
				}
			s=A.counting(m2,l1,l2,s);
			if (s - (int)s != 0)
				{
					i--;
					continue;
				}
			if (s - (int)s == 0)
				{
					cout << "（" << k1 << n1 << k2 << ")" << n2 << "(" << k3 << n3 << k4 << ")=" << endl;
					cin >> a;
	language4(l,s);
					if (a == s)
						r='Y';
				}
		}
	return r;
}






int classtwo(char r,char l)
{
	int  m1, a;
	char n1='a';
	float s,k1, k2;
	srand(time(0));
	Count A;
	for (int i = 0; i < 1; i++)
		{
			k1 = rand()%10;
			k2 = rand()%10;
			m1 = rand()%4;
			s=A.counting(m1,k1,k2,s);
			n1=A.sigh(m1,n1);
			if (s - (int)s != 0)
				{
					i--;
					continue;
				}
			if(s-(int)s==0)
				{
					cout<< k1 << n1 << k2 << "=" << endl;
					cin >> a;
			language4(l,s);
					if (a == s)
						r='Y';
				}
		}
	return r;
}





int classthree(char r,char l)
{
	int m1,m2,a;
	char n1='a',n2='a';
	float s,l1,k1,k2,k3;
	Count A;
	srand(time(0));
	for(int i=0; i<1; i++)
		{
			k1=rand()%10;
			k2=rand()%10;
			k3=rand()%10;
			m1=rand()%4;
			m2=rand()%4;
			l1=A.counting(m1,k1,k2,l1);
			n1=A.sigh(m1,n1);
			if(k3==0&&m2==0)
				{
					i--;
					continue;
				}
			s=A.counting(m2,l1,k3,s);
			n2=A.sigh(m2,n2);
			if (s - (int)s != 0)
				{
					i--;
					continue;
				}
			if(s-(int)s==0)
				{
					cout << "（" << k1 << n1 << k2 << ")" << n2 << k3 << "=" << endl;
					cin >> a;
					language4(l,s);
					if (a == s)
						r='Y';
				}
		}
	return r;
}




int classfour(char r,char l)
{
	int m1,m2,a;
	char n1='a',n2='a';
	float k1,k2,k3,s,l1;
	Count A;
	srand(time(0));
	for(int i=0; i<1; i++)
		{
			k1=rand()%10;
			k2=rand()%10;
			k3=rand()%10;
			m1=rand()%4;
			m2=rand()%4;
			l1=A.counting(m2,k2,k3,l1);
			n2=A.sigh(m2,n2);
			if(l1==0&&m1==0)
				{
					i--;
					continue;
				}
			s=A.counting(m1,k1,l1,s);
			n1=A.sigh(m1,n1);
			if (s - (int)s != 0)
				{
					i--;
					continue;
				}
			if(s-(int)s==0)
				{
					cout << k1 << n1 << "("<<k2  << n2 << k3 << ")=" << endl;
					cin >> a;
					language4(l,s);
					if (a == s)
						r='Y';
				}
		}
	return r;
}


void language1(char language)
{
	switch(language)
		{
			case 'C':
				cout << "请输入题目数量：";
				break;
			case 'E':
				cout<<"Please input the number of equation:";
				break;
			case 'R':
				cout<<"題目の数量を入力して下さい:";
				break;
			case 'D':
				cout<<"Bitte geben sie die ANZAHL DER titel:";
				break;
			case 'F':
				cout<<"Saisissez le nombre de sujets:";
				break;
		}
}

void language2(char language)
{
	switch(language)
		{
			case 'C':
				cout<<"请按O查看答题情况"<<endl;
				break;
			case 'E':
				cout<<"Please input O for the accuracy:"<<endl;
				break;
			case 'R':
				cout<<"Oに解答を押してください:"<<endl;
				break;
			case 'D':
				cout<<"Drücken sie bitte um antwort O :"<<endl;
				break;
			case 'F':
				cout<<"Appuyez O Voir réponse:"<<endl;
				break;
		}
}


int main()
{
	int j,b,CLASS;
	int right=0;
	char over;
	cout<<"请选择语言\nPlease choose language\n選択言語を選択してください\nBitte w?hlen sie die Sprache\nVeuillez sélectionner la langue\n"<<endl;
	cout<<"中文：C\nEnglish:E\n日本語:R\nDeutsch:D\nFranz?sisch:F"<<endl;
	char language;
	cin>>language;
	language1(language);
	cin >> b;//题目数量
	srand(time(0));
	for(j=0; j<b; j++)
		{
			char r='N';
			CLASS=rand()%4;
			switch(CLASS)
				{

					case 0:
						r=classone(r,language);
						break;
					case 1:
						r=classtwo(r,language);
						break;
					case 2:
						r=classthree(r,language);
						break;
					case 3:
						r=classfour(r,language);
						break;
				}
			if(r=='Y')
				right++;
		}
	language2(language);
	cin>>over;
	if(over=='O')
		{
				switch(language)
		{
			case 'C':
				cout << "您答对了" << right << "道题；" <<"答错了"<<b-right<<"道题。"<< endl;
				break;
			case 'E':
				cout<<"You are right "<<right<<" problem(s);"<<"wrong "<<b-right<<" problem(s)."<<endl;
				break;
			case 'R':
				cout<<"あなたは正答しました"<<right<<"題;"<<"誤答して"<<b-right<<"題。"<<endl;
				break;
			case 'D':
				cout<<"Sie beantwortet"<<right<<"Problem;" <<"Die falsch"<<b-right<<"Problem。"<<endl;
				break;
			case 'F':
				cout<<"Vous avez gagné"<<right<<"Problème;"<<"Mauvaise réponse"<<b-right<<"Problème."<<endl;
				break;
		}
		}
	system("pause");
	return 0;

}
