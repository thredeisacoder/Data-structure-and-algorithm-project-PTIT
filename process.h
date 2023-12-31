#include "struct.h"
#include "mylib.h"
#include <fstream>

using namespace std;

//Reader//

string EnterID()
{
	string s = "";
	char c;
	while (true)
	{
		c = _getch();
		if (c == 27)
		{
			return "";
		}
		else if (c == 32)//dau cach
		{
			return " ";
		}
		else if (c == 13)
		{
			if (s == "" || s.length() < 4)
			{
				continue;
			}
			else return s;
		}
		else if (c == 8)
		{
			if (s.length() == 0) continue;
			s.pop_back();
			cout << "\b \b";
		}
		else if (c >= '0' && c <= '9')
		{
			if (s.length() == 4)
			{
				continue;
			}
			else
			{
				s += c;
				cout << c;
			}
		}
		else
		{
			continue;
		}
	}
}

string EnterISBN(string s)
{
	cout << s;
	while (true)
	{
		char c = _getch();
		if (c == 27)//esc
		{
			return "";
		}
		if (c == 13)//enter
		{
			if (s.length()<4)
			{
				int x=wherex();
				int y=wherey();
				SetColor(20);
				gotoxy(130,25); cout<<"NOT ENOUGH 4 CHARS";
				SetColor(0);
				Sleep(1500);
				gotoxy(130,25); cout<<"                   ";
				gotoxy(x,y);
				continue;
			}
			else break;
		}
		else if (c == 8)//backspace
		{
			if (s.empty()) continue;
			s.pop_back();
			putchar('\b');
			putchar(' ');
			putchar('\b');
		}
		else if (s.length() == 4)//dat kich co toi da
		{
			continue;
		}
		else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == '_' || (c >= '0' && c <= '9'))
		{
			if (s == "")
			{
				if (c >= 'a' && c <= 'z')
				{
					c = toupper(c);
					putchar(c);
				}
				else if (c == '_') continue;
				else
				{
					putchar(c);
				}
			}
			else if (s[s.length() - 1] == '_')//ki tu phia truoc
			{
				if (c >= 'a' && c <= 'z')
				{
					c = toupper(c);
					putchar(c);
				}
				else if (c == '_') continue;
				else
				{
					putchar(c);
				}
			}
			else
			{
				if (c >= 'A' && c <= 'Z')
				{
					c = tolower(c);
					putchar(c);
				}
				else
				{
					putchar(c);
				}
			}
			s += c;
		}
		else
		{
			continue;
		}
	}
	return s;

}

string EnterFirstName(string Name)// dung cho ca author, ten sach, the loai o dau sach
{
	cout << Name;
	while (true)
	{
		char c = _getch();
		if (c == 27)//esc
		{
			return "";
		}
		if (c == 13)
		{
			if (Name == "")
			{
				continue;
			}
			else break;
		}
		else if (c == 8)
		{
			if (Name.empty()) continue;
			Name.pop_back();
			putchar('\b');
			putchar(' ');
			putchar('\b');
		}
		else if (Name.length() == 25)
		{
			continue;
		}
		else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ')
		{
			if (Name == "")
			{
				if (c >= 'a' && c <= 'z')
				{
					c = toupper(c);
					putchar(c);
				}
				else if (c == ' ') continue;
				else
				{
					putchar(c);
				}
			}
			else if (Name[Name.length() - 1] == ' ')
			{
				if (c >= 'a' && c <= 'z')
				{
					c = toupper(c);
					putchar(c);
				}
				else if (c == ' ') continue;
				else
				{
					putchar(c);
				}
			}
			else
			{
				if (c >= 'A' && c <= 'Z')
				{
					c = tolower(c);
					putchar(c);
				}
				else
				{
					putchar(c);
				}
			}
			Name += c;
		}
		else
		{
			continue;
		}
	}
	if (Name[Name.length() - 1] == ' ') Name.pop_back();
	return Name;
}

string EnterBookName(string Name)
{
	cout << Name;
	while (true)
	{
		char c = _getch();
		if (c == 27)//esc
		{
			return "";
		}
		if (c == 13)
		{
			if (Name == "")
			{
				continue;
			}
			else break;
		}
		else if (c == 8)
		{
			if (Name.empty()) continue;
			Name.pop_back();
			putchar('\b');
			putchar(' ');
			putchar('\b');
		}
		else if (Name.length() == 25)
		{
			continue;
		}
		else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ' || (c >= '0' && c <= '9'))
		{
			if (Name == "")
			{
				if (c >= 'a' && c <= 'z')
				{
					c = toupper(c);
					putchar(c);
				}
				else if (c == ' ') continue;
				else
				{
					putchar(c);
				}
			}
			else if (Name[Name.length() - 1] == ' ')
			{
				if (c >= 'a' && c <= 'z')
				{
					c = toupper(c);
					putchar(c);
				}
				else if (c == ' ') continue;
				else
				{
					putchar(c);
				}
			}
			else
			{
				if (c >= 'A' && c <= 'Z')
				{
					c = tolower(c);
					putchar(c);
				}
				else
				{
					putchar(c);
				}
			}
			Name += c;
		}
		else
		{
			continue;
		}
	}
	if (Name[Name.length() - 1] == ' ') Name.pop_back();
	return Name;
}
string EnterAuthor(string Name)
{
	cout << Name;
	while (true)
	{
		char c = _getch();
		if (c == 27)//esc
		{
			return "";
		}
		if (c == 13)
		{
			if (Name == "")
			{
				continue;
			}
			else break;
		}
		else if (c == 8)
		{
			if (Name.empty()) continue;
			Name.pop_back();
			putchar('\b');
			putchar(' ');
			putchar('\b');
		}
		else if (Name.length() == 32)
		{
			continue;
		}
		else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ')
		{
			if (Name == "")
			{
				if (c >= 'a' && c <= 'z')
				{
					c = toupper(c);
					putchar(c);
				}
				else if (c == ' ') continue;
				else
				{
					putchar(c);
				}
			}
			else if (Name[Name.length() - 1] == ' ')
			{
				if (c >= 'a' && c <= 'z')
				{
					c = toupper(c);
					putchar(c);
				}
				else if (c == ' ') continue;
				else
				{
					putchar(c);
				}
			}
			else
			{
				if (c >= 'A' && c <= 'Z')
				{
					c = tolower(c);
					putchar(c);
				}
				else
				{
					putchar(c);
				}
			}
			Name += c;
		}
		else
		{
			continue;
		}
	}
	return Name;
}

string EnterGenre(string s) {
	cout << s;
	while (true)
	{
		char c = _getch();
		if (c == 27)//esc
		{
			return "";
		}
		if (c == 13)
		{
			if (s == "")
			{
				continue;
			}
			else break;
		}
		else if (c == 8)
		{
			if (s.empty()) continue;
			s.pop_back();
			putchar('\b');
			putchar(' ');
			putchar('\b');
		}
		else if (s.length() == 15)
		{
			continue;
		}
		else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ')
		{
			if (s == "")
			{
				if (c >= 'a' && c <= 'z')
				{
					c = toupper(c);
					putchar(c);
				}
				else if (c == ' ') continue;
				else
				{
					putchar(c);
				}
			}
			else if (s[s.length() - 1] == ' ')
			{
				if (c >= 'a' && c <= 'z')
				{
					c = toupper(c);
					putchar(c);
				}
				else if (c == ' ') continue;
				else
				{
					putchar(c);
				}
			}
			else
			{
				if (c >= 'A' && c <= 'Z')
				{
					c = tolower(c);
					putchar(c);
				}
				else
				{
					putchar(c);
				}
			}
			s += c;
		}
		else
		{
			continue;
		}
	}
	return s;
}


string EnterLastName(string  s)
{
	cout << s;
	char c;
	while (true)
	{
		c = _getch();
		if (c == 27)//esc
		{
			return "";
		}
		if (c == 13)
		{
			if (s == "") continue;
			else break;
		}
		if (c == 8)
		{
			if (s == "") continue;
			putchar('\b');
			putchar(' ');
			putchar('\b');
			s.pop_back();
		}
		if (s.length() == 8) continue;
		if ((c >= 'a' && c < 'z') || (c >= 'A' && c <= 'Z'))
		{
			if (s == "")
			{
				if (c >= 'a' && c <= 'z')
				{
					c = toupper(c);
					putchar(c);
				}
				else if (c == ' ')
				{
					continue;
				}
				else
				{
					putchar(c);
				}
			}
			else
			{
				if (c >= 'A' && c <= 'Z')
				{
					c = tolower(c);
					putchar(c);
				}
				else putchar(c);
			}
		}
		else continue;
		s += c;
	}
	return s;
}

string EnterGender(string s)
{
	cout << s;
	char c;
	while (true)
	{
		c = _getch();
		if (c == 27)//esc
		{
			return "";
		}
		if (c == 13)//enter
		{
			if (s == "") continue;
			else return s;
		}
		else if (c == 8)
		{
			if (s.empty()) continue;
			else if (s == "FEMALE")
			{
				cout << "\b\b\b\b\b\b";
				cout << "      ";
				cout << "\b\b\b\b\b\b";
			}
			else
			{
				cout << "\b\b\b\b";
				cout << "    ";
				cout << "\b\b\b\b";
			}
			s = "";

		}
		else if (c == '1' || c == '2')
		{
			if (s != "") continue;
			else if (c == '1')
			{
				s = "MALE";
				cout << s;

			}
			else
			{
				s = "FEMALE";
				cout << s;
			}
		}
		else
		{
			continue;
		}
	}
}


int EnterStatus(int s)
{
	cout << s;
	if (s == 1)
	{
		cout << " (activated)";
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b";
	}
	else
	{
		cout << " (locked)";
		cout << "\b\b\b\b\b\b\b\b\b";
	}
	char c;
	while (true)
	{
		c = _getch();
		if (c == 27)//esc
		{
			return -1;
		}
		if (c == 13)//enter
		{
			if (s == -1) continue;
			return s;
		}
		else if (c == 8)//delete
		{
			if (s == -1) continue;
			else s = -1;
			cout << "\b             \b\b\b\b\b\b\b\b\b\b\b\b\b";
		}
		else if (c == '0' || c == '1')
		{
			if (c == '0')
			{
				if (s != -1) continue;
				putchar(c);
				cout << " (locked)";
				cout << "\b\b\b\b\b\b\b\b\b";
				s = 0;
			}
			else
			{
				if (s != -1) continue;
				putchar(c);
				cout << " (activated)";
				cout << "\b\b\b\b\b\b\b\b\b\b\b\b";
				s = 1;
			}
		}
		else
		{
			continue;
		}
	}
}


//Table of content//

string enterName(string Name)
{
	cout << Name;
	while (true)
	{
		char c = _getch();
		if (c == 13)
		{
			if (Name == "")
			{
				continue;
			}
			else break;
		}
		else if (c == 8)
		{
			if (Name.empty()) continue;
			Name.pop_back();
			putchar('\b');
			putchar(' ');
			putchar('\b');
			continue;
		}

		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ')
		{
			if (Name == "")
			{
				if (c >= 'a' && c <= 'z')
				{
					c = toupper(c);
					putchar(c);
				}
				else if (c == ' ') continue;
				else
				{
					putchar(c);
				}
			}
			else if (Name[Name.length() - 1] == ' ')
			{
				if (c >= 'a' && c <= 'z')
				{
					c = toupper(c);
					putchar(c);
				}
				else if (c == ' ') continue;
				else
				{
					putchar(c);
				}
			}
			else
			{
				if (c >= 'A' && c <= 'Z')
				{
					c = tolower(c);
					putchar(c);
				}
				else
				{
					putchar(c);
				}
			}
			Name += c;
		}
		else
		{
			continue;
		}
	}
	if (Name[Name.length() - 1] == ' ') Name.pop_back();

	return Name;
}

string enterYear(string n)
{
	Date p=currentTime();
	string s=to_string(p.year);
	cout << n;
	char c;
	while (true)
	{
		c = _getch();
		if (c == 27)//esc
		{
			return "";
		}
		if (c == 13)//enter
		{
			if (n == ""||(n>s&&s.length()==n.length())||n=="0000"||n=="0"||n=="00"||n=="000")
			{
				int x=wherex();
				int y=wherey();
				SetColor(20);
				gotoxy(130,24);
				cout<<"INVALID YEAR";
				SetColor(0);
				Sleep(1500);
				gotoxy(130,24);
				cout<<"            ";
				gotoxy(x,y);
				continue;
			}
			else break;
		}
		else if (c == 8)
		{
			if (n == "") continue;
			putchar('\b');
			putchar(' ');
			putchar('\b');
			n.pop_back();
		}
		else if (c >= '0' && c <= '9')
		{
			if (n.length() >= 4)  continue;
			else putchar(c);
			n += c;
		}
		else
		{
			continue;
		}
	}
	return n;
}

string enterNumPage(string n)
{
	cout << n;
	char c;
	while (true)
	{
		c = _getch();
		if (c == 27)//esc
		{
			return "";
		}
		if (c == 13)
		{
			if (n == "") continue;
			else break;
		}
		else if (c == 8)
		{
			if (n == ""||n=="0000"||n=="0"||n=="00"||n=="000") continue;
			putchar('\b');
			putchar(' ');
			putchar('\b');
			n.pop_back();
		}
		else if (c >= '0' && c <= '9')
		{
			if (n.length() >= 5)  continue;
			else putchar(c);
			n += c;
		}
		else
		{
			continue;
		}
	}
	return n;
}
int enterNumBooks(int p)
{
	string n = to_string(p);
	n.pop_back();
	if (p != 0) {
		cout << n;
	}
	char c;
	while (true)
	{
		c = _getch();
		if (c == 27)//esc
		{
			return 0;
		}
		if (c == 13) //enter
		{
			if (n == "") continue;
			else break;
		}
		else if (c == 8)//xoa
		{
			if (n == "") continue;
			putchar('\b');
			putchar(' ');
			putchar('\b');
			n.pop_back();
		}
		else if (c >= '0' && c <= '9')
		{
			if (n.length() >= 2)  continue;
			else putchar(c);
			n += c;
		}
		else
		{
			continue;
		}
	}
	int res = 0;
	for (int i = 0; i < n.length(); i++) {
		res = res * pow(10, i) + (int)(n[i] - '0');
	}
	return res;
}


int stringtoint(string l)
{
	int s = 0;
	for (int i = 0; i < l.length(); i++)
	{
		if (l[i] >= '0' && l[i] <= '9')
		{
			s = s * 10 + int(l[i] - '0');
		}
	}
	return s;
}

//loading file//

int loadFileReader(ReaderList& rl)
{
	fstream f;
	f.open("Reader.txt");
	if (!f.is_open()) return 0;
	string l = "";
	while (!f.eof())
	{
		Reader* p = new Reader;

		getline(f, l);
		if (l == "") break;
		p->ID = l;
		getline(f, l);
		p->FirstName = l;
		getline(f, l);
		if (l == "") break;
		p->LastName = l;
		getline(f, l);
		if (l == "") break;
		p->Gender = l;
		getline(f, l);
		if (l == "") break;
		p->CardStatus;
		getline(f, l);
		int size= stringtoint(l);

		for (int i = 0; i <size; i++)
		{
			nodeBAR* b = new nodeBAR;
			getline(f, l);
			b->data.bookID = l;
			getline(f, l);
			b->data.BorrowDate.day = stringtoint(l);
			getline(f, l);
			b->data.BorrowDate.month = stringtoint(l);
			getline(f, l);
			b->data.BorrowDate.year = stringtoint(l);
			addBorrowedBook(p->dsmt,b);
		}

		addNodeReader(rl, *p);
		rl.head = updateTreeAvl(rl.head);
		delete p;
	}
	f.close();
	f.open("idrcnotused.txt", ios::in);
	if (f.is_open())
	{
		int i = 0;
		string l;
		while (!f.eof())
		{
			getline(f, l);
			if (l == "") break;
			rl.notusedid[i] = l;
			i++;
		}
	}
	else
	{
		cout << "can not open file ID";
		system("pause");
	}
	f.close();
	return 1;
}

void printReader(fstream& f, nodeRC* p)
{
	f << p->data.ID << endl;
	f << p->data.FirstName << endl;
	f << p->data.LastName << endl;
	f << p->data.Gender << endl;
	f << p->data.CardStatus << endl;
	f << p->data.dsmt.size << endl;
	nodeBAR* tmp = p->data.dsmt.head;
	for (int i = 0; i < p->data.dsmt.size;i++)
	{
		f << tmp->data.bookID << endl;
		f << tmp->data.BorrowDate.day << endl;
		f << tmp->data.BorrowDate.month << endl;
		f << tmp->data.BorrowDate.year << endl;
		tmp=tmp->next;
	}
}

void loadlist(nodeRC* head, fstream& f)//doc danh sach
{
	if (head == nullptr) return;

	printReader(f, head);
	loadlist(head->left, f);
	loadlist(head->right, f);
}

int saveFileReader(ReaderList& rl)//luu danh sach doc gia
{
	fstream f;
	f.open("Reader.txt", ios::out);
	if (!f.is_open()) return 0;

	loadlist(rl.head, f);
	f.close();

	f.open("idrcnotused.txt", ios::out);
	if (f.is_open())
	{
		for (int i = 0; i < MAX - rl.size; i++)
		{
			f << rl.notusedid[i] << endl;
		}
	}
	f.close();
	return 1;
}

//_loading file TOC//
int loadFileTOC(TableOfContentList& tl)
{
	fstream f;
	f.open("TableOfContent.txt", ios::in);
	if (!f.is_open()) return 0;
	string l = "";
	while (!f.eof())
	{
		TableOfContent* p = new TableOfContent;
		getline(f, l);
		p->ISBN = l;
		getline(f, l);
		if (l == "") break;
		p->BookName = l;
		getline(f, l);
		if (l == "") break;
		p->Author = l;
		getline(f, l);
		if (l == "") break;
		p->Genre = l;
		getline(f, l);
		if (l == "") break;
		p->NumOfPage = l;
		getline(f, l);
		p->PublicYear = l;
		getline(f, l);
		if (l == "") break;
		int size = 0;
		for (int i = 0; i < l.length(); i++) {
			size = size * pow(10, i) + (int)(l[i] - '0');
		}
		for (unsigned int i = 0; i < size; i++) {
			nodeB* b = new nodeB;
			getline(f, l);
			if (l == "") break;
			b->data.BookID = l;
			getline(f, l);
			if (l == "") break;
			b->data.BookStatus = stringtoint(l);
			int n = addNodeBook(p->dms, b->data);
			if (n == 0) break;
			delete b;
		}
		getline(f,l);
		p->BorrowTotal=stringtoint(l);		
		themTheoThuTuTheLoai(tl, *p);
		delete p;
	}
	f.close();
	return 1;
}

int saveTOC(TableOfContentList& tl)//doc gia vao file
{
	fstream f;
	f.open("TableOfContent.txt", ios::out);
	if (!f.is_open()) return 0;
	for (int i = 0; i < tl.size; i++)
	{
		f << tl.ds[i]->ISBN << endl;
		f << tl.ds[i]->BookName << endl;
		f << tl.ds[i]->Author << endl;
		f << tl.ds[i]->Genre << endl;
		f << tl.ds[i]->NumOfPage << endl;
		f << tl.ds[i]->PublicYear << endl;
		f << tl.ds[i]->dms.size << endl;
		nodeB* b = tl.ds[i]->dms.head;
		for (int j = 0; j < tl.ds[i]->dms.size; j++) {
			f << b->data.BookID << endl;
			f << b->data.BookStatus << endl;
			b = b->next;
		}
		f<<tl.ds[i]->BorrowTotal<<endl;
	}
	return 1;
}

void printlogo()//in logo
{
	fstream f;
	f.open("logo.txt", ios::in);
	if (!f.is_open()) cout << "can not open file";
	string l = "";
	while (!f.eof())
	{
		SetColor(20);
		getline(f, l);
		for (int i = 0; i < l.length(); i++)
		{
			if (l[i] == '@') cout << " ";
			else cout << '*';
		}
		cout << endl;
	}
	f.close();
}

void resetIDRCfile()//reset ID trong file ID
{
	fstream f("idrcnotused.txt");
	for (int i = 0; i < 10000; i++)
	{
		string s = to_string(i);
		while (s.length() < 4)
		{
			s = '0' + s;
		}
		f << s << endl;
	}
	f.close();

	f.open("idrcused.txt");
	f << "";
	f.close();
}
