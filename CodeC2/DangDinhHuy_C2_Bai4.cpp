#includeiostream
#includestdio.h
using namespace std;

struct Node
{
	int info;
	Node link;
};
Node first;
cau4.2 Khoi tao danh sach rong
void init()
{
	first=NULL;
}
cau4.3 them vao dau danh sach
void insert_first(int x)
{
	Node p;
	p=new Node;
	p-info=x;
	p-link=first;
	first=p;
}
cau4.4 xuat cac phan tu trong danh sach
void process_list()
{
	Node p;
	p=first;
	while(p!=NULL)
	{
		coutp-infot;
		p=p-link;
	}
	coutendl;
}
cau4.5 tim mot phan tu trong danh sach
Node search(int x)
{
	Node p=first;
	while(p!=NULL&&p-info!=x)
	{
		p=p-link;
	}
	return p;
}

cau4.6 tim phan tu va xoa
int searchAnddelete(int x)
{
	if(first!=NULL)
	{
		Node p,q;
		p=first;
		q=first;
		while(p-info!=x)
		{
			q=p;
			p=p-link;
		}
		if(p!=first&&p!=NULL)
		{
			if(p-link!=NULL)
				q-link=p-link;
			else
				q-link=NULL;
			delete p;
			return 1;
		}
		else
			if(p==first)
			{
				first=p-link;
				delete p;
				return 1;
			}
			else
				return 0;
	}
	return 0;
}
int main()
{
	int choice=0;
	int x,i;
	Nodep;
	system(cls);
	cout--------------BAI TAP 3,CHUONG1------------endl;
	cout1.Khoi Tao Danh Sachendl;
	cout2.Them Phan Tu Vao Dau Danh Sachendl;
	cout3.Xuat danh sachendl;
	cout4.tim phan tu co gia tri x trong danh sachendl;
	cout5.tim va xoa phan tu co gia tri xendl;
	cout6.thoatendl;
	do{
		coutVui long chon so;
		cinchoice;
		switch(choice)
		{
		case 1
			init();
			coutn Ban vua khoi tao danh sach thanh congendl;
			break;
		case 2
			coutVui long nhap gia tri x=;
			cinx;
			insert_first(x);
			coutDanh sach sau khi them la;
			process_list();
			break;
		case 3
			coutDanh sach hien tai la ;
			process_list();
		case 4
			coutNhap gia tri can tim x=;
			cinx;
			p=search(x);
			if(p!=NULL)
			{
				coutTim thay phan tu co gia tri x;
			}
			else
				coutKhong tim thay;
			break;
		case 5
			coutNhap gia tri can tim x=;
			cinx;
			i=searchAnddelete(x);
			if(i==1)
			{
				couttim thay x va da xoa tha congendl;
				coutDanh sach sau khi xoa la ;
				process_list();
			}
			else
				coutKhong tim thay xendl;
			break;
		case 6
			coutGood byen;
			break;
		}
	}while(choice!=6);
		system(pause);
		return 0;
}