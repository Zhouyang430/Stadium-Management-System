#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define NUMBER 21
#define NAMELEN 20



typedef   struct customer_inf
{
	char customer_name[NAMELEN];//�û�����
	char id[NUMBER];//�û�ID
	char sex[NUMBER];//�û��Ա�
	char mail[NUMBER];//�û�����
	char phonenumber[NUMBER];//�û��绰
	char password[NUMBER];//�û�����
	char place[NUMBER];//�û���ַ
	int time;//�û�ΥԼ����
	int age;//�û�����
	double balance;//�û���Ϣ


	struct customer_inf *next;

}CUST;

typedef   struct administrator_inf
{
	char administrator_name[NAMELEN];//����Ա����
	char Gid[NUMBER];//����ԱID
	char Gsex[NUMBER];//����Ա�Ա�
	char Gmail[NUMBER];//����Ա����
	char Gphonenumber[NUMBER];//����Ա�绰
	char Gpassword[NUMBER];//����Ա����
	char Gplace[NUMBER];//����Ա��ַ
	int Gage;//����Ա����
	//����Ա��Ϣ

	struct administrator_inf *next;

}GM;

typedef   struct order
{
	char orid[40];//������
	char cusid[20];//�ͻ�ID
	char nowtime[30];//�µ�����ʱ��
	char siid[12];//����ID
	char sista[20];//��������
	double orprice;//�����۸�
	char ordate[30];//Ԥ������
	int ortimestart;//Ԥ����ʼʱ��
	int ortimeover;//Ԥ������ʱ��
	struct order *next;
}ORDER;


typedef struct Site2
{
	char SIid[NUMBER];//���峡����Ϣ�����
    char namr[NUMBER];//��������
	char SIarea[NUMBER];//���峡����Ϣ������
	char SIsta[NUMBER];//���峡����Ϣ�����ݣ����ⳡ��
	char SIsport[NUMBER];//���峡����Ϣ���˶�����
	int SIagemin;//���峡����Ϣ����������
	int SIagemax;
	double SIprice;//���峡����Ϣ�����
	int SIord;//���峡����Ϣ��������
    int man;
	 int woman;

}SITE2;//�������Ա��Ƽ��ĺ���



typedef struct Site
{
	char SIid[NUMBER];//���峡����Ϣ�����
    char namr[NUMBER];//��������
	char SIarea[NUMBER];//���峡����Ϣ������
	char SIsta[NUMBER];//���峡����Ϣ�����ݣ����ⳡ��
	char SIsport[NUMBER];//���峡����Ϣ���˶�����
	int SIagemin;//���峡����Ϣ����������
	int SIagemax;
	double SIprice;//���峡����Ϣ�����
	int SIord;//���峡����Ϣ��������
	struct Site *next;
}SITE;




typedef struct shijian2{
	char SIid[NUMBER];//���峡����Ϣ�����
    char namr[NUMBER];//��������
	char SIarea[NUMBER];//���峡����Ϣ������
	char SIsta[NUMBER];//���峡����Ϣ�����ݣ����ⳡ��
	int time1;
	int time2;
	int cishu;
}SHIJIAN;




typedef struct Site22
{
	char SIid[NUMBER];//���峡����Ϣ�����
    char namr[NUMBER];//��������
	char SIarea[NUMBER];//���峡����Ϣ������
	char SIsta[NUMBER];//���峡����Ϣ�����ݣ����ⳡ��
	char SIsport[NUMBER];//���峡����Ϣ���˶�����
	int SIagemin;//���峡����Ϣ����������
	int SIagemax;
	double SIprice;//���峡����Ϣ�����
	int SIord;//���峡����Ϣ��������
    int n2;

}SITE22;//�������˶�����Ƽ��ĺ���



GM *GMinsertBegin(GM *GfNode,GM *GnewNode);/*��ͷ���ӽڵ㺯��*/
GM *GMcreateinf (char Gnames1[NAMELEN][20],char Gids1[NUMBER][20],char Gsexs1[NUMBER][20],char Gmails1[NUMBER][20],char Gphonenumbers1[NUMBER][20],char Gpasswords1[NUMBER][20],char Gplaces1[NUMBER][20],int Gages1[20]);
CUST *createinf(char ids1 [NUMBER][20],char names1[NAMELEN][20],char sexs1[NAMELEN][10],int ages1[NUMBER],char phonenumbers1[NUMBER][20],char passwords1[NUMBER][20],char mails1[NAMELEN][20],double moneys1[20],char places1[NUMBER][20],int times1[20]);/*����������*/
CUST *insertBegin(CUST *fNode,CUST *newNode);/*��ͷ���ӽڵ㺯��*/
void denglu1(CUST *fNode,char IDs1[11],char PASSWORDs1[20]);/*��ѯ����*/
void GMdenglu1(CUST *fNode,GM *GMfNode,char IDS1[11],char PASSWORDS1[20]);
void yudingqueren1(CUST *np,CUST *fNode);
void chaxun3(CUST *np,CUST *fNode);
void chaxungeren1(CUST *np);
void zhuce1(CUST *fNode);
void xiugai1(CUST *np,CUST *fNode);
void leibiechaxun3(CUST *np,CUST *fNode);
void quyuchaxun3(CUST *np,CUST *fNode);
void changguanmingchaxun3(CUST *np,CUST *fNode);
void zujinchaxun3(CUST *np,CUST *fNode);
void changdileixing3(CUST *np,CUST *fNode);
void yudingliangchaxun3(CUST *np,CUST *fNode);
void suoyouchangdi1();
void tianjia1();
void tongji1();
void nianlingtongji1();
void yudingliang1();
void xingbietuijian(int t);
void tuijian2(char np[20],int year,int t);
void shijian2(int t,int p);
void xingbietuijian();
void GMchaxungeren1(GM *np);
void GMxiugai1(GM *np,GM *GMfode);
void chakanyuding1(ORDER *OfNode);
void yingye1(ORDER *OfNode);
void yudingliangchaxun1();
void  kongyuchaxun3();
void traversal(SITE *first,char id[]);
	void xiugaiyue1(CUST *fNode);
	void xiugaiguke1(CUST *fNode);
void chaxundingdan1(CUST *cp);
CUST *gukechuangjianlianbiao1();
CUST *teding1(CUST *np);
GM *chuangjianlianbiao1();
GM *GMteding1(GM *np);
ORDER *createinf4();/*����������*/
SITE *createinf2();
int querenxiadan5(CUST *cust5,CUST *fNode);
ORDER *yuding4(CUST *cust5,CUST *fNode);
ORDER *Oteding1(ORDER *np1);
int jixuyuding5();
void dachudingdan(ORDER *finalorder,int limit);
int panduannianling5(CUST *cust5,SITE *site5);
int dateavailable(char order[20]);
ORDER *shijianpanduan(char ordate[20],SITE *site5);
int isEmail(char *email);//�ж�����Ϸ�
double cancleorder(CUST *cust5);




int main()//������ִ��
{
    char IDS1[11];//����Ĺ���ԱID
    char PASSWORDS1[20]; //����Ĺ���Ա����
    char IDs1[11]; //����Ĺ���ԱID
    char PASSWORDs1[20]; //����Ĺ˿�����
	int N;//�������
	CUST *fNode=gukechuangjianlianbiao1();
	GM *GMfNode=chuangjianlianbiao1();

    printf("                 ��ӭʹ�ñ�����                  \n\n");
	printf("****************** ����������ϵͳ **********************\n\n");/* ��ӡ��ʼ�˵�*/
	printf("                  1. �û���¼                \n\n");
	printf("                  2. ����Ա��¼                 \n\n");
	printf("                  3. ע��                 \n\n");
	printf("                  4. �˳�                  \n\n");
	printf("********************************************************\n");
  do{

  	printf("��ѡ��ִ�����:");
    scanf("%d",&N);/*ѡ��Ĳ������*/

    getchar();
    if(N<=0||N>4)
    printf("����������������ȷ��š�\n");//�������ݴ���

		switch(N)
	    {
		case 1:
			system("cls");
			printf("                   �û�ID                \n\n");
			gets(IDs1);//���ID
			printf("                   �û�����              \n\n");
			gets(PASSWORDs1);//�������
	      		denglu1(fNode,IDs1,PASSWORDs1);//��½����
				break;
		case 2:
	    	system("cls");
			printf("                   ����ԱID                \n\n");
	        gets(IDS1);
	        printf("                   ����Ա����              \n\n");
	        gets(PASSWORDS1);
	       	   GMdenglu1(fNode,GMfNode,IDS1,PASSWORDS1); //��½����
		  		break;
		case 3:
			system("cls");
	    	zhuce1(fNode);//ע�ắ��

				break;
		}


    if(N!=4&&(N!=3))//���˳����´�ӡ�˵�
	 		{
			 	system("pause");
	   			system("cls");

					printf("****************** ����������ϵͳ **********************\n\n");/* ��ӡ�˵�*/
					printf("                  1. �û���¼                \n\n");
					printf("                  2. ����Ա��¼                 \n\n");
					printf("                  3. ע��                 \n\n");
					printf("                  4. �˳�                  \n\n");
					printf("********************************************************\n");
	 		}
	}

	while(N!=4&&(N!=3));//�˳�
	if(N==4)
	{
		system("cls");
		printf("\n\n***************** ллʹ�� ***********************\n\n");
	}
	else
	printf("���˳���������\n");
	return 0;

}





GM *GMcreateinf(char Gnames1[NAMELEN][20],char Gids1[NUMBER][20],char Gsexs1[NUMBER][20],char Gmails1[NUMBER][20],char Gphonenumbers1[NUMBER][20],char Gpasswords1[NUMBER][20],char Gplaces1[NUMBER][20],int Gages1[20])//��������Ա�ڵ㺯��
{
	static int ig = 0;//�������
	GM *np;
	np = (GM*)malloc(sizeof(GM));//�����ڴ�

	strcpy(np->administrator_name,Gnames1[ig]);//¼����Ϣ
	strcpy(np->Gid,Gids1[ig]);
	strcpy(np->Gsex,Gsexs1[ig]);
	strcpy(np->Gmail,Gmails1[ig]);
	strcpy(np->Gpassword,Gpasswords1[ig]);
	strcpy(np->Gplace,Gplaces1[ig]);
	strcpy(np->Gphonenumber,Gphonenumbers1[ig]);
	np->Gage=Gages1[ig];
	np->next=NULL;
	ig++;
	return np;
}





GM *GMinsertBegin(GM *GfNode1,GM *GnewNode)/*fNODEΪͷ�ڵ�*/
{
	GnewNode->next = GfNode1;//�½ڵ��������Ͻڵ�
	GfNode1 = GnewNode;//�Ͻڵ㱻�½ڵ��滻

	return GfNode1;
}





GM *chuangjianlianbiao1()//��������Ա����ĺ���
{
	FILE *GMFile;//��ʱ�ļ�
	 char Gnames1[NAMELEN][20];
	char Gids1[NUMBER][20];
	char Gsexs1[NUMBER][20];
	char Gmails1[NUMBER][20];
	char Gphonenumbers1[NUMBER][20];
	int Gages1[NUMBER];
	char Gplaces1[NUMBER][20];
	char Gpasswords1[NUMBER][20];


    int i1=0;
    GMFile=fopen("����Ա��Ϣ.dat","r");



   while(fscanf(GMFile,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%d\n",Gids1[i1],Gnames1[i1],Gsexs1[i1],Gmails1[i1],Gphonenumbers1[i1],Gpasswords1[i1],Gplaces1[i1],&Gages1[i1])!=EOF)
   	{
	 i1++;
	}//�ļ�����¼�뵽����
    fclose(GMFile);

    GM *GfNode1=NULL,*GnewNode=NULL,*np=NULL;//��ʼ��
  int ik;
  for (ik=0;ik<=i1;ik++)//������ʼ���
  {
   GnewNode=GMcreateinf(Gnames1,Gids1,Gsexs1,Gmails1,Gphonenumbers1,Gpasswords1,Gplaces1,Gages1);//����һ���½ڵ�
   GfNode1=GMinsertBegin(GfNode1,GnewNode);//�����½ڵ�


  }

return GfNode1;//��������ͷ�ڵ�
}




CUST *createinf(char ids1 [NUMBER][20],char names1[NAMELEN][20],char sexs1[NAMELEN][10],int ages1[NUMBER],char phonenumbers1[NAMELEN][20],char passwords1[NUMBER][20],char mails1[NAMELEN][20],double moneys1[20],char places1[NUMBER][20],int times1[20])//�����ڵ㺯��
{
	static int i = 0;//��ʱ�������
	CUST *np;
	np = (CUST*)malloc(sizeof(CUST));//�����ڴ�

	strcpy(np->customer_name, names1[i]);//¼��ڵ�
	strcpy(np->id,ids1[i]);
	strcpy(np->sex,sexs1[i]);
	strcpy(np->mail,mails1[i]);
	strcpy(np->password,passwords1[i]);
	strcpy(np->place,places1[i]);
	strcpy(np->phonenumber,phonenumbers1[i]);
	np->balance=moneys1[i];
	np->time=times1[i];
	np->age=ages1[i];

	np->next=NULL;
	i++;
	return np;//����һ��ָ�루�½ڵ㣩
}




CUST *insertBegin(CUST *fNode1,CUST *newNode)/*fNODEΪͷ�ڵ�*/
{
	newNode->next = fNode1;//�½ڵ��������Ͻڵ�
	fNode1 = newNode;//�Ͻڵ㱻�½ڵ��滻

	return fNode1;
}




CUST *gukechuangjianlianbiao1()//�˿���Ϣ����������
{
	FILE *File;//��ʱ�ļ�
	 char names1[NAMELEN][20];
	char ids1[NUMBER][20];
	char sexs1[NUMBER][10];
	char mails1[NUMBER][20];
	char phonenumbers1[NUMBER][20];
	int ages1[NUMBER];
	char places1[NUMBER][20];
	char passwords1[NUMBER][20];
	double moneys1[NUMBER];
	int times1[NUMBER];

    int i1=0;//�������
    File=fopen("�˿���Ϣ.dat","r");

/*	 if(File == NULL)
{
printf("open file failed\n");
return -1;
}//����ļ��Ƿ���� */

   while(fscanf(File,"%s\n%s\n%s\n%d\n%s\n%s\n%s\n%lf\n%s\n%d\n",ids1[i1],names1[i1],sexs1[i1],&ages1[i1],phonenumbers1[i1],passwords1[i1],mails1[i1],&moneys1[i1],places1[i1],&times1[i1])!=EOF)
   	{
	 i1++;
	}
    fclose(File);

    CUST *fNode1=NULL,*newNode=NULL,*np=NULL;//��ʼ��
  int ik;
  for (ik=0;ik<=i1;ik++)//������ʼ���
  {newNode=createinf(ids1,names1,sexs1,ages1,phonenumbers1,passwords1,mails1,moneys1,places1,times1);
   fNode1=insertBegin(fNode1,newNode);


  }

	return fNode1;
}





void GMdenglu1(CUST *fNode,GM *GMfNode,char IDS1[11],char PASSWORDS1[20])/*����Ա��½����*/
{
    ORDER *OfNode=createinf4();  //��������ͷ�ڵ�


	GM *np= GMfNode; //¼������ͷ�ڵ����ʱָ��


	while((np!=NULL)&&(strcmp(np->Gid,IDS1)!=0)) //�ҵ���ͬ����id������ѭ��

		{
		np=np->next;
	    }



  {
  	if ((np!=NULL)&&(strcmp(np->Gpassword,PASSWORDS1)!=0))//��֤����
    	{
		printf("�����������������\n") ;

		}

	else if((np!=NULL)&&(strcmp(np->Gpassword,PASSWORDS1)==0))
	{

	printf("��½�ɹ�\n");
    system("pause");

	system("cls");
	int N1;
	do{	        printf("*************************************************\n\n");
				printf("                   1.���г��ز�ѯ                \n\n");
    			printf("                   2.�������               \n\n");
    			printf("                   3.������Ϣ�޸�                \n\n");
    			printf("                   4.ͳ����Ϣ               \n\n");
    			printf("                   5.�鿴�û�Ԥ�����              \n\n");
    			printf("                   6.��ѯ������Ϣ                \n\n");
    			printf("                   7.�޸Ĺ˿���Ϣ                \n\n");
    			printf("                   8.������ҳ                \n\n");
    			printf("*************************************************\n");
    			printf("��ѡ��ִ�����:");
    			scanf("%d",&N1);/*ѡ��Ĳ������*/
    			getchar();
    			if(N1<=0||N1>8)
    			{
				printf("����������������ȷ��š�\n");//�������ݴ���
				system("pause");
   				system("cls");
				}
	switch(N1)
	{
	 	case 1:	system("cls");
	 		   	suoyouchangdi1();
		 	  	system("pause");
	          	system("cls");break;
	 	case 2:	system("cls");
		      	tianjia1();
		      	system("pause");
			  	system("cls");break;
		case 3:	system("cls");
		       	GMxiugai1(np,GMfNode);
		       	system("pause");
			   	system("cls");break;
		case 4:	system("cls");
		      	tongji1();
		      	system("pause");
			  	system("cls");break;
		case 5:	system("cls");
		      	chakanyuding1(OfNode);
		       	system("pause");
			   	system("cls");break;
		case 6:	system("cls");
		       	GMchaxungeren1(np);break;
		case 7: system("cls");
				xiugaiguke1(fNode);
				system("pause");
			   	system("cls");break;

	 	default:break;

	}

	  }
	while((N1!=8)&&(N1!=3));
	if(N1==8)
	printf("���˳�����ҳ\n");

    }
    else if (np==NULL)
	{printf("����ԱID�����ڣ�����������\n");
	system("pause");

	system("cls");

    }


  }

}




void denglu1(CUST *fNode,char IDs1[11],char PASSWORDs1[20])/*�˿͵�½����*/
{

	CUST *np = fNode;//����˿�����ͷ�ڵ�


	while((np!=NULL)&&(strcmp(np->id,IDs1)!=0)) //�ҵ���ͬid������ѭ��

		{
		np=np->next; //�Ҳ�����ƫ���¸��ڵ�
	    }


  {
  	if ((np!=NULL)&&(strcmp(np->password, PASSWORDs1)!=0))//�ж�id��Ӧ�������Ƿ���ȷ
    	{printf("�����������������\n") ;

		}

	else if((np!=NULL)&&(strcmp(np->password, PASSWORDs1)==0))
	{

	printf("��½�ɹ�\n");
    system("pause");

	system("cls");
	int N1;
	do{
				printf("*************************************************\n\n");
				printf("                   1.���ز�ѯ                \n\n");
    			printf("                   2.�����Ƽ�                \n\n");
    			printf("                   3.������Ϣ�޸�                \n\n");
    			printf("                   4.ȡ��Ԥ��                \n\n");
    			printf("                   5.��ѯ����               \n\n");
    			printf("                   6.��ѯ������Ϣ                \n\n");
    			printf("                   7.������ҳ                \n\n");
    			printf("*************************************************\n");
    			printf("��ѡ��ִ�����:");
    			scanf("%d",&N1);/*ѡ��Ĳ������*/
    			getchar();
    			if(N1<=0||N1>7)
    			{
				printf("����������������ȷ��š�\n");//�������ݴ���
				system("pause");
   				system("cls");
				}
			switch(N1)
	{
	 	case 1:system("cls");
	 		   chaxun3(np,fNode);
		 	   system("pause");
	           system("cls");break;
	 	case 2:system("cls");
	 			int t,year;
	 			char np2[20];
	 	 	   if(strcmp(np->sex,"male")==0)
	 	 	   t=1;
	 	 	   else
	 	 	   t=2;

	 	 	   strcpy(np2,np->place);
	 	 	   year=np->age;
		       tuijian2(np2,year,t);
		       system("pause");
			   system("cls");break;
		case 3:system("cls");
		       xiugai1(np,fNode);
		       system("pause");
			   system("cls");break;
		case 4:
			   system("cls");
			   double l1;
			   l1=cancleorder(np);
			   if(l1==-1)
			   printf("��û�ж���\n");
			   else if(l1!=-1&&l1!=-2)
			{
		 		np->balance+=l1;
		 		xiugaiyue1(fNode);
			}

			   system("pause");
			   system("cls");
					break;
		case 5:system("cls");
		       chaxundingdan1(np);
		       system("pause");
			   system("cls");break;
		case 6:system("cls");
		       chaxungeren1(np);break;

	 	default:break;

	}

	  }
	while((N1!=7)&&(N1!=3));
	if(N1==7)
	printf("���˳�����ҳ\n");
    }


	else if (np==NULL)
	printf("�û�ID�����ڣ�����������\n");
  }
}





void chaxun3(CUST *np,CUST *fNode) //��ѯ����
{
	int NK1=0;//�������

		do{	 	printf("*************************************************\n\n");
				printf("             1.���ճ������Ͳ�ѯ                \n\n");
    			printf("             2.���ճ������Ʋ�ѯ                \n\n");
    			printf("             3.���ճ����˶�����ѯ             \n\n");
    			printf("             4.�������ߵͲ�ѯ                \n\n");
    			printf("             5.����Ԥ������С��ѯ                \n\n");
    			printf("             6.�������������ѯ                \n\n");
    			printf("             7.�����Ƿ��п��ೡ�ز�ѯ                \n\n");
    			printf("             8.������ҳ                \n\n");
    			printf("*************************************************\n");
    			printf("��ѡ��ִ�����:");
    			scanf("%d",&NK1);/*ѡ��Ĳ������*/
    			getchar();
    			if(NK1<=0||NK1>8)
    			printf("����������������ȷ��š�\n");//�������ݴ���

		switch(NK1)
			{
			case 1:
	    		system("cls");
	    		changdileixing3(np,fNode);

	    		system("pause");
	    		system("cls");
	     			break;
	    	case 2:
	    		system("cls");
	    		changguanmingchaxun3(np,fNode);
	    		system("pause");
	    		system("cls");
	    			break;
	    	case 3:
	    		system("cls");
	    		leibiechaxun3(np,fNode);

	    		system("pause");
	    		system("cls");
	    			break;
	    	case 4:
	    		system("cls");
	    		zujinchaxun3(np,fNode);

	    		system("pause");
	    		system("cls");
	    			break;
	    	case 5:
	    		system("cls");
	    		yudingliangchaxun3(np,fNode);

	    		system("pause");
	    		system("cls");
	    			break;
	    	case 6:
				system("cls");
				quyuchaxun3(np,fNode);
	    		system("pause");
	    		system("cls");
	    			break;


	    	case 7:
			int kl3;
				system("cls");

			 	kongyuchaxun3();


	    		system("pause");
	    		system("cls");
	    			break;
	   		default:
				printf("���˳����ϲ�\n");
	   				break;

			}
		}

			while(NK1!=8);

}





void yudingqueren1(CUST *np,CUST *fNode)//Ԥ��ȷ�Ϻ���
{
	/*CUST *fNODE;

	fNODE=gukechuangjianlianbiao1();
	CUST *cp=fNODE->next;
	printf("%s",cp->id);
		while(/*cp!=NULL&&*//*(strcmp(cp->id,np->id)!=0)) //�ҵ���ͬid������ѭ��

		{
		cp=cp->next; //�Ҳ�����ƫ���¸��ڵ�
	    }
	printf("kkk");*/

	int NW1=0;//�������
	 do{
		    printf("*************** �Ƿ����Ԥ��? ***************** \n\n\n");
	    	printf("**********        1.��        ************* \n\n\n");
	    	printf("**********        2.��        ************* \n\n");
	    	scanf("%d",&NW1);
	    	if(NW1==1)
	        {
	            system("cls");
	        	querenxiadan5(np,fNode);
	        	break;
	        }
	        else if(NW1==2)
	        	break;
	        else
	       	printf("����������������ȷ��š�\n");//�������ݴ���
	            system("pause");
	            system("cls");

	        }


			while((NW1!=1)||(NW1!=2));

 }






void zhuce1(CUST *fNode)//�˿�ע�ắ��
{
	CUST *p1=fNode;
    FILE *outFile;
    char names[NAMELEN];
	char ids[NUMBER];
	char sexs[NUMBER];
	char mails[NUMBER];
	char passwords[NUMBER];
	char places[NUMBER];
	char phonenumbers[NUMBER];
	double balances=1000;
	int times=0;
	int ages;
	int count1=0;
	char n2;
	    outFile=fopen("�˿���Ϣ.dat","a");
 	while(1)
   {
   		count1=0;
   		p1=fNode;
		printf("                   �û�ID                \n\n");
		gets(ids);
		int len1=strlen(ids);

		while(p1!=NULL)//����ID
	  	{


			if((strcmp(p1->id,ids)==0)&&count1==0)
			{   count1++;
				printf("���û�ID�Ѵ��ڣ�������ע�ᣡ\n");
			}

	    p1=p1->next;
		}


		if(len1<6||len1>10)
		printf("���û�ID���Ȳ���6-10�䣬������ע�ᣡ\n");

		if(count1==0&&len1>=6&&len1<=10)
		{
		printf("                   �û�����               \n\n");
		gets(names);
		do{
		printf("                ������ѡ��1 Ů����ѡ��2             \n\n");
		scanf("%c",&n2);
		getchar();
		if(n2==49){strcpy(sexs,"male");break;}
		else if(n2==50){strcpy(sexs,"female");break;}
		else {printf("�������룬������\n");}
		}while(1);



		printf("                   �û�����                \n\n");
		scanf("%d",&ages);
		do
			{
		printf("                   �û��绰               \n\n");
		scanf("%s",phonenumbers);
		int lenN1=0;
		lenN1=strlen(phonenumbers);
		if(lenN1!=11)
		printf("������绰Ϊ%dλ��������11λ�淶������������\n",lenN1);

		else
		break;
			}
		while(1);



		getchar();
		printf("                   �û�����                \n\n");
		gets(passwords);
		while(1)
			{
	    printf("                   �û�����                \n\n");
		gets(mails);
	    		if(isEmail(mails)==1)
				{
					break;
				}
				printf("�����ʽ������\n");
			}

			printf("                   �û���ַ                \n\n");
		gets(places);


	 fprintf(outFile,"%-9s\n%-9s\n%-9s\n",ids,names,sexs);
	 fprintf(outFile,"%-10d\n%-13s\n%-9s\n%-14s\n",ages,phonenumbers,passwords,mails);
	 fprintf(outFile,"%-5.2lf\n%-9s\n%-10d\n",balances,places,times);
	 fclose(outFile);
	 printf("\n���ѳɹ�ע��\n");
	 system("pause");
	 system("cls");

	break;
		}
 	}
}





void xiugai1(CUST *np,CUST *fNode)//�˿��޸���Ϣ����
{

    FILE *outFile;
    CUST *np1=fNode->next;
    CUST *p1=fNode;
    char names[NAMELEN];
	char ids[NUMBER];
	char sexs[NUMBER];
	char mails[NUMBER];
	char passwords[NUMBER];
	char places[NUMBER];
	char phonenumbers[NUMBER];
	double balances=1000;
	int times=0;
	int ages;
    int count1=0;
   int y=0;
   int yk1=0;
	int NL1;

	do{
	    printf("             ��ѡ���޸ĵ���Ϣ���ࣺ          \n\n");
	    printf("                  1.�û�ID                \n\n");
		printf("                  2.�û�����               \n\n");
		printf("                  3.�û��Ա�                \n\n");
		printf("                  4.�û�����                \n\n");
		printf("                  5.�û��绰               \n\n");
		printf("                  6.�û�����                \n\n");
		printf("                  7.�û�����                \n\n");
		printf("                  8.�û���ַ                \n\n");
		printf("                  9.ȫ���޸�                \n\n");
		printf("������������\n\n");
		scanf("%d",&NL1);
		if((NL1<=0)||(NL1>=10))
		{
		printf("����������ѡ��!\n");
		system("pause");
   		system("cls");
		}
		getchar();
	    switch(NL1)
		{
			case 1:
				system("cls");
				printf("             ����ǰ���û�ID��          \n\n");
				printf("%s\n",teding1(np)->id);
			do{
				int count1=0;
			printf("             �������޸ĺ���û�ID��          \n\n");

				gets(ids);
		int len1=0;
		 len1=strlen(ids);

		while(p1!=NULL)//����ID
	  	{


			if((strcmp(p1->id,ids)==0)&&count1==0)
			{   count1++;
				printf("���û�ID�Ѵ��ڣ��������޸ģ�\n");


			}

	    p1=p1->next;
		}


		if(len1<6||len1>10)
		{
				printf("���û�ID���Ȳ���6-10�䣬�������޸ģ�\n");

	}
		if(count1==0&&len1>=6&&len1<=10)
				{
				strcpy(np->id,ids);

				y=1;
				break;
				}
					}while(y!=1);
					break;
			case 2:
				system("cls");
				printf("             ����ǰ���û�������          \n\n");
				printf("%s\n",teding1(np)->customer_name);
				printf("             �������޸ĺ���û�������          \n\n");
				gets(names);
				strcpy(np->customer_name,names);
				printf("\n�޸ĳɹ�,�����µ�½��\n\n");
				break;
			case 3:
				system("cls");
				printf("             ����ǰ���û��Ա�          \n\n");
				printf("%s\n",teding1(np)->sex);
			do{
				char n2;
				printf("                ��ʿ��ѡ��1 Ůʿ��ѡ��2             \n\n");
				scanf("%c",&n2);
				getchar();
				if(n2==49){strcpy(sexs,"male");	strcpy(np->sex,sexs);break;}
				else if(n2==50){strcpy(sexs,"female");strcpy(np->sex,sexs);break;}
				else {printf("�������룬������\n");}
			  }			while(1);
				break;
			case 4:
				system("cls");
				printf("             ����ǰ���û����䣺          \n\n");
				printf("%d\n",teding1(np)->age);
				printf("             �������޸ĺ���û����䣺          \n\n");
				scanf("%d",&ages);
				np->age=ages;
				printf("\n�޸ĳɹ�,�����µ�½��\n\n");
				break;
			case 5:
				system("cls");
				printf("             ����ǰ���û��绰��          \n\n");
				printf("%s\n",teding1(np)->phonenumber);
			do{
	         	printf("                   �û��绰               \n\n");
				scanf("%s",phonenumbers);
				int lenN1=0;
				lenN1=strlen(phonenumbers);
				if(lenN1!=11)
					printf("������绰Ϊ%dλ��������11λ�淶���������޸�\n",lenN1);

				else
				break;
			  }	while(1);
				strcpy(np->phonenumber,phonenumbers);
				printf("\n�޸ĳɹ�,�����µ�½��\n\n");
				break;
			case 6:
				system("cls");
				printf("             ����ǰ���û����룺          \n\n");
				printf("%s\n",teding1(np)->password);
				printf("             �������޸ĺ���û����룺          \n\n");

				gets(passwords);
				strcpy(np->password,passwords);
				printf("\n�޸ĳɹ�,�����µ�½��\n\n");
				break;
			case 7:
				system("cls");
				printf("             ����ǰ���û����䣺          \n\n");
				printf("%s\n",teding1(np)->mail);
			while(1)
				{
				printf("             �������޸ĺ���û����䣺          \n\n");
				gets(mails);

					if(isEmail(mails)==1)
				{
					break;
				}
				printf("�����ʽ������\n");
				}
				strcpy(np->mail,mails);
				printf("\n�޸ĳɹ�,�����µ�½��\n\n");
				break;
			case 8:
				system("cls");
				printf("             ����ǰ���û���ַ��          \n\n");
				printf("%s\n",teding1(np)->place);
				printf("             �������޸ĺ���û���ַ��          \n\n");
				gets(places);
				strcpy(np->place,places);
				printf("\n�޸ĳɹ�,�����µ�½��\n\n");
				break;
			case 9:
			    system("cls");
			    printf("             ����ǰ���û�ID��          \n\n");
				printf("%s\n",teding1(np)->id);
				printf("             ����ǰ���û�������          \n\n");
				printf("%s\n",teding1(np)->customer_name);
				printf("             ����ǰ���û��Ա�          \n\n");
				printf("%s\n",teding1(np)->sex);
			    printf("             ����ǰ���û����䣺          \n\n");
				printf("%d\n",teding1(np)->age);
				printf("             ����ǰ���û��绰��          \n\n");
				printf("%s\n",teding1(np)->phonenumber);
				printf("             ����ǰ���û����룺          \n\n");
				printf("%s\n",teding1(np)->password);
				printf("             ����ǰ���û����䣺          \n\n");
				printf("%s\n",teding1(np)->mail);
				printf("             ����ǰ���û���ַ��          \n\n");
				printf("%s\n",teding1(np)->place);

				system("pause");
				printf("             �������޸ĺ����Ϣ��          \n\n");

			do{
			    int count1=0;
				printf("                   �û�ID                \n\n");
				gets(ids);
		int lenK1;
		 		lenK1=strlen(ids);

		while(p1!=NULL)//����ID
	  	{


			if((strcmp(p1->id,ids)==0)&&count1==0)
			{   count1++;
				printf("���û�ID�Ѵ��ڣ��������޸ģ�\n");
			}

	    p1=p1->next;
		}


		if(lenK1<6||lenK1>10)

				printf("���û�ID���Ȳ���6-10�䣬�������޸ģ�\n");


		if(count1==0&&lenK1>=6&&lenK1<=10)
		{
		strcpy(np->id,ids);
		yk1=1;
		break;
		}
			}  while(yk1==0);


				printf("                   �û�����               \n\n");
				gets(names);

			do{
				char n1;
				printf("                ������ѡ��1 Ů����ѡ��2             \n\n");
				scanf("%c",&n1);
				getchar();
				if(n1==49){strcpy(sexs,"male");	break;}
				else if(n1==50){strcpy(sexs,"female");break;}
				else {printf("�������룬������\n");}
			  }			while(1);

				printf("                   �û�����                \n\n");
				scanf("%d",&ages);
			do{
	         	printf("                   �û��绰               \n\n");
				scanf("%s",&phonenumbers);
				int lenN1=0;
				lenN1=strlen(phonenumbers);
				if(lenN1!=11)
					printf("������绰Ϊ%dλ��������11λ�淶��������ע��\n",lenN1);

				else
				break;
			  }
			    while(1);

				getchar();
				printf("                   �û�����                \n\n");
				gets(passwords);
					while(1)
				{
				printf("             �������޸ĺ���û����䣺          \n\n");
				gets(mails);

					if(isEmail(mails)==1)
				{
					break;
				}
				printf("�����ʽ������\n");
				}
				printf("                   �û���ַ                \n\n");
				gets(places);

				    strcpy(np->customer_name,names);
	    			strcpy(np->id,ids);
					strcpy(np->sex,sexs);
					strcpy(np->mail,mails);
					strcpy(np->password,passwords);
					strcpy(np->place,places);
					strcpy(np->phonenumber,phonenumbers);
					np->age=ages;
				printf("\n�޸ĳɹ�,�����µ�½��\n\n");
				break;



			default: break;
		}

	}
	 while((NL1<=0)||(NL1>=10));
	   outFile=fopen("�˿���Ϣ.dat","w+");
	    while(np1!=NULL)
	    {
		fprintf(outFile,"%-9s\n%-9s\n%-9s\n",np1->id,np1->customer_name,np1->sex);
	 	fprintf(outFile,"%-10d\n%-13s\n%-9s\n%-14s\n",np1->age,np1->phonenumber,np1->password,np1->mail);
	 	fprintf(outFile,"%-5.2lf\n%-9s\n%-10d\n",np1->balance,np1->place,np->time);
	 	np1=np1->next;
		}

	 fclose(outFile);

}





void GMxiugai1(GM *np,GM *GMfNode)//����Ա��Ϣ�޸ĺ���
{
	GM *p1=GMfNode;//��������ͷ�ڵ�
    FILE *outFile;//��ʱ�ļ�
    GM *np1=GMfNode->next;
    char names[NAMELEN];
	char ids[NUMBER];
	char sexs[NUMBER];
	char mails[NUMBER];
	char passwords[NUMBER];
	char places[NUMBER];
	char phonenumbers[NUMBER];
	int ages;
	int NL1; //�������
	int count1=0;//�ظ�id�ĸ���
	int y=0;//�ж�����������
	int yk1=0;//�ж�����������

	do{
	    printf("             ��ѡ���޸ĵ���Ϣ���ࣺ          \n\n");
	    printf("                  1.����ԱID                \n\n");
		printf("                  2.����Ա����               \n\n");
		printf("                  3.����Ա�Ա�                \n\n");
		printf("                  4.����Ա����                \n\n");
		printf("                  5.����Ա�绰               \n\n");
		printf("                  6.����Ա����                \n\n");
		printf("                  7.����Ա����                \n\n");
		printf("                  8.����Ա��ַ                \n\n");
		printf("                  9.ȫ���޸�                \n\n");
		printf("������������\n\n");
		scanf("%d",&NL1);
		if((NL1<=0)||(NL1>=10))//�������ݴ���
		{
		printf("����������ѡ��!\n");
		system("pause");
   		system("cls");
		}
		getchar();
	    switch(NL1)
		{
			case 1:
				system("cls");
				printf("             ����ǰ�Ĺ���ԱID��          \n\n");
				printf("%s\n",GMteding1(np)->Gid);
				do{
					int count1=0;
			printf("             �������޸ĺ�Ĺ���ԱID��          \n\n");

				gets(ids);
		int len1;
		 len1=strlen(ids);

		while(p1!=NULL)//����ID
	  	{


			if((strcmp(p1->Gid,ids)==0)&&count1==0)
			{   count1++;
				printf("���û�ID�Ѵ��ڣ������µ�½�޸ģ�\n");


			}

	    p1=p1->next;
		}


		if(len1<6||len1>10)//��֤����
		{
				printf("�ù���ԱID���Ȳ���6-10�䣬�������޸ģ�\n");

	}
		if(count1==0&&len1>=6&&len1<=10)//�ɹ�
				{
				strcpy(np->Gid,ids);
				y=1;
				break;
				}
					}while(y==0);
					break;

			case 2:
				system("cls");
				printf("             ����ǰ�Ĺ���Ա������          \n\n");
				printf("%s\n",GMteding1(np)->administrator_name);
				printf("             �������޸ĺ�Ĺ���Ա������          \n\n");
				gets(names);
				strcpy(np->administrator_name,names);
				break;
			case 3:
				system("cls");
				printf("             ����ǰ�Ĺ���Ա�Ա�          \n\n");
				printf("%s\n",GMteding1(np)->Gsex);
			do{
				char n2;
				printf("                ��ʿ��ѡ��1 Ůʿ��ѡ��2             \n\n");
				scanf("%c",&n2);
				getchar();
				if(n2==49){strcpy(sexs,"male");	strcpy(np->Gsex,sexs);break;}
				else if(n2==50){strcpy(sexs,"female");strcpy(np->Gsex,sexs);break;}
				else {printf("�������룬������\n");}
			  }			while(1);
				break;


			case 4:
				system("cls");
				printf("             ����ǰ�Ĺ���Ա���䣺          \n\n");
				printf("%d\n",GMteding1(np)->Gage);
				printf("             �������޸ĺ�Ĺ���Ա���䣺          \n\n");
				scanf("%d",&ages);
				np->Gage=ages;
				break;
			case 5:
				system("cls");
				printf("             ����ǰ�Ĺ���Ա�绰��          \n\n");
				printf("%s\n",GMteding1(np)->Gphonenumber);
			do{
	         	printf("                   �û��绰               \n\n");
				scanf("%s",phonenumbers);
				int lenN1=0;
				lenN1=strlen(phonenumbers);
				if(lenN1!=11)
					printf("������绰Ϊ%dλ��������11λ�淶������������\n",lenN1);

				else
				break;
			  }	while(1);
				strcpy(np->Gphonenumber,phonenumbers);

				break;
			case 6:
				system("cls");
				printf("             ����ǰ�Ĺ���Ա���룺          \n\n");
				printf("%s\n",GMteding1(np)->Gpassword);
				printf("             �������޸ĺ�Ĺ���Ա���룺          \n\n");

				gets(passwords);
				strcpy(np->Gpassword,passwords);
				break;
			case 7:
				system("cls");
				printf("             ����ǰ�Ĺ���Ա���䣺          \n\n");
				printf("%s\n",GMteding1(np)->Gmail);
					while(1)
				{
					printf("             �������޸ĺ�Ĺ���Ա���䣺          \n\n");
				gets(mails);

					if(isEmail(mails)==1)
				{
					break;
				}
				printf("�����ʽ������\n");
				}

				strcpy(np->Gmail,mails);
				break;
			case 8:
				system("cls");
				printf("             ����ǰ�Ĺ���Ա��ַ��          \n\n");
				printf("%s\n",GMteding1(np)->Gplace);
				printf("             �������޸ĺ�Ĺ���Ա��ַ��          \n\n");
				gets(places);
				strcpy(np->Gplace,places);
				break;
			case 9:
			    system("cls");
			    printf("             ����ǰ�Ĺ���ԱID��          \n\n");
				printf("%s\n",GMteding1(np)->Gid);
				printf("             ����ǰ�Ĺ���Ա������          \n\n");
				printf("%s\n",GMteding1(np)->administrator_name);
				printf("             ����ǰ�Ĺ���Ա�Ա�          \n\n");
				printf("%s\n",GMteding1(np)->Gsex);
			    printf("             ����ǰ�Ĺ���Ա���䣺          \n\n");
				printf("%d\n",GMteding1(np)->Gage);
				printf("             ����ǰ�Ĺ���Ա�绰��          \n\n");
				printf("%s\n",GMteding1(np)->Gphonenumber);
				printf("             ����ǰ�Ĺ���Ա���룺          \n\n");
				printf("%s\n",GMteding1(np)->Gpassword);
				printf("             ����ǰ�Ĺ���Ա���䣺          \n\n");
				printf("%s\n",GMteding1(np)->Gmail);
				printf("             ����ǰ�Ĺ���Ա��ַ��          \n\n");
				printf("%s\n",GMteding1(np)->Gplace);

				system("pause");
				printf("             �������޸ĺ����Ϣ��          \n\n");
			do{
			    int count1=0;
				printf("                   �û�ID                \n\n");
				gets(ids);
				int lenK1;
		 		lenK1=strlen(ids);

				while(p1!=NULL)//����ID
	  			{


				if((strcmp(p1->Gid,ids)==0)&&count1==0)
					{   count1++;
				printf("���û�ID�Ѵ��ڣ��������޸ģ�\n");
					}

	    		p1=p1->next;//ƫ�Ƶ��¸��ڵ�
				}


		if(lenK1<6||lenK1>10)

				printf("���û�ID���Ȳ���6-10�䣬�������޸ģ�\n");


		if(count1==0&&lenK1>=6&&lenK1<=10)
		{
		strcpy(np->Gid,ids);
		yk1=1;
		break;
		}
			}  while(yk1==0);
				printf("                   ����Ա����               \n\n");
				gets(names);

			do{
				char n2;
				printf("                ��ʿ��ѡ��1 Ůʿ��ѡ��2             \n\n");
				scanf("%c",&n2);
				getchar();
				if(n2==49){strcpy(sexs,"male");	break;}
				else if(n2==50){strcpy(sexs,"female");break;}
				else {printf("�������룬������\n");}
			  }
			while(1);

				printf("                   ����Ա����                \n\n");
				scanf("%d",&ages);
				do{
	         	printf("                   �û��绰               \n\n");
				scanf("%s",&phonenumbers);
				int lenN1=0;
			 	lenN1=strlen(phonenumbers);
				if(lenN1!=11)
					printf("������绰Ϊ%dλ��������11λ�淶������������\n",lenN1);

				else
				break;
			  	}
				while(1);

				getchar();
				printf("                   ����Ա����                \n\n");
				gets(passwords);
				while(1)
				{
				printf("             �������޸ĺ�Ĺ���Ա���䣺          \n\n");
				gets(mails);

					if(isEmail(mails)==1)
				{
					break;
				}
				printf("�����ʽ������\n");
				}
				printf("                   ����Ա��ַ                \n\n");
				gets(places);

				    strcpy(np->administrator_name,names);
	    			strcpy(np->Gid,ids);
					strcpy(np->Gsex,sexs);
					strcpy(np->Gmail,mails);
					strcpy(np->Gpassword,passwords);
					strcpy(np->Gplace,places);
					strcpy(np->Gphonenumber,phonenumbers);
					np->Gage=ages;
						break;

			default: break;
		}

	}
	 while((NL1<=0)||(NL1>=10));
	   outFile=fopen("����Ա��Ϣ.dat","w+");
	    while(np1!=NULL)
	    {
		fprintf(outFile,"%-12s\n%-11s\n%-9s\n",np1->Gid,np1->administrator_name,np1->Gsex);
	 	fprintf(outFile,"%-15s\n%-15s\n%-14s\n%-10s\n",np1->Gmail,np1->Gphonenumber,np1->Gpassword,np1->Gplace);
	 	fprintf(outFile,"%-10d\n",np1->Gage);
	 	np1=np1->next;
		}

	 fclose(outFile);
	 printf("\n�޸ĳɹ�,�����µ�½��\n\n");
}





CUST *teding1(CUST *np)//�ѹ˿���Ϣ�����ض��Ľڵ�¼��һ�������ṹ��
{

	CUST *np1;//�����ṹ��
	np1 = (CUST*)malloc(sizeof(CUST));//�����ڴ�

	strcpy(np1->customer_name,np->customer_name );
	strcpy(np1->id, np->id);
	strcpy(np1->sex,np->sex );
	strcpy(np1->mail,np->mail );
	strcpy(np1->password,np->password);
	strcpy(np1->place,np->place);
	strcpy(np1->phonenumber,np->phonenumber);
	np1->balance=np->balance;
	np1->time=np->time;
	np1->age=np->age;

	np1->next = NULL;

	return np1;


}






void chaxungeren1(CUST *np)//��ѯ������Ϣ����
{
//�����ǰ��Ϣ
  				printf("             ����ǰ���û�ID��          \n\n");
				printf("%s\n",teding1(np)->id);
				printf("             ����ǰ���û�������          \n\n");
				printf("%s\n",teding1(np)->customer_name);
				printf("             ����ǰ���û��Ա�          \n\n");
				printf("%s\n",teding1(np)->sex);
			    printf("             ����ǰ���û����䣺          \n\n");
				printf("%d\n",teding1(np)->age);
				printf("             ����ǰ���û��绰��          \n\n");
				printf("%s\n",teding1(np)->phonenumber);
				printf("             ����ǰ���û����룺          \n\n");
				printf("%s\n",teding1(np)->password);
				printf("             ����ǰ���û����䣺          \n\n");
				printf("%s\n",teding1(np)->mail);
				printf("             ����ǰ���û���ַ��          \n\n");
				printf("%s\n",teding1(np)->place);
				printf("             ����ǰ���û���          \n\n");
				printf("%5.2lf\n",teding1(np)->balance);
				system("pause");
				system("cls");
}





void leibiechaxun3(CUST *np,CUST *fNode)//��������ѯ���غ���
{
	int i3=0,j3=0;//���ظ���
	int a3,k3=0,m3=0;
	FILE *fp3;
	fp3=fopen("������Ϣ.txt","r");

	char SIid3[NUMBER][50];//���峡����Ϣ�����
    char namr3[NUMBER][50];//��������
	char SIarea3[NUMBER][50];//���峡����Ϣ������
	char SIsta3[NUMBER][50];//���峡����Ϣ�����ݣ����ⳡ��
	char SIsport3[NUMBER][50];//���峡����Ϣ���˶�����
    char SIagemax3[NUMBER][50];//���峡����Ϣ����������
	char SIagemin3[NUMBER][50];//���峡����Ϣ����������
	char SIprice3[NUMBER][50];//���峡����Ϣ�����
	char SIord3[NUMBER][50];//���峡����Ϣ��������
	char gm[50];



	while(fscanf(fp3,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",SIid3[i3],namr3[i3],SIarea3[i3],SIsta3[i3],SIsport3[i3],SIagemin3[i3],SIagemax3[i3],SIprice3[i3],SIord3[i3])!=EOF)
	{
	 i3++;
	}//�ļ�����¼�뵽����

    printf("��������Ҫ��ѯ���˶���� :");
	gets(gm); //�����˶����


		for(k3=0;k3<i3;k3++)//����
		{
			//if(strcmp(s1,s2)==0)
			if (strcmp(SIsport3[k3],gm) == 0)//�ҵ���ͬ�����ĳ���
           {

             m3++;//��ͬ�������ݸ���+1
             if(m3==1)
             {
             	printf("���ݱ��\t��������\t������������\t������Ŀ\t�˶����\t׼����С����\t׼���������\tÿСʱ���\t��ʷԤԼ����\n");
			 }
	 		printf("%-15s%-20s%-15s%-20s%-15s%-15s%-15s%-15s%-15s\n",SIid3[k3],namr3[k3],SIarea3[k3],SIsta3[k3],SIsport3[k3],SIagemin3[k3],SIagemax3[k3],SIprice3[k3],SIord3[k3]);

		   }
		}
		if(m3==0)//����ͬ��������
		{
			printf("��Ǹ��û�и����˶�������������\n");
		}

		else if(m3!=0)
		{   system("pause");
			system("cls");
		  	yudingqueren1(np,fNode);
		}

    fclose(fp3);

}





void quyuchaxun3(CUST *np,CUST *fNode)//���������ѯ���ݺ���
{
	int i3=0,j3=0;//���ݸ���
	int a3,k3=0,m3=0;
	FILE *fp3;
	fp3=fopen("������Ϣ.txt","r");

	char SIid3[NUMBER][50];//���峡����Ϣ�����
    char namr3[NUMBER][50];//��������
	char SIarea3[NUMBER][50];//���峡����Ϣ������
	char SIsta3[NUMBER][50];//���峡����Ϣ�����ݣ����ⳡ��
	char SIsport3[NUMBER][50];//���峡����Ϣ���˶�����
    char SIagemax3[NUMBER][50];//���峡����Ϣ����������
	char SIagemin3[NUMBER][50];//���峡����Ϣ����������
	char SIprice3[NUMBER][50];//���峡����Ϣ�����
	char SIord3[NUMBER][50];//���峡����Ϣ��������
	char gm[50];


	//�ļ�����¼�뵽����
	while(fscanf(fp3,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",SIid3[i3],namr3[i3],SIarea3[i3],SIsta3[i3],SIsport3[i3],SIagemin3[i3],SIagemax3[i3],SIprice3[i3],SIord3[i3])==9)
	{
	 i3++;
	}


    printf("��������Ҫ��ѯ�˶����������� :");
	gets(gm);



		for(k3=0;k3<i3;k3++)//����
		{

			if (strcmp(SIarea3[k3],gm) == 0)//�ҵ���ͬ��������
           {

             m3++;//��ͬ��������+1
             if(m3==1)
             {
             		printf("���ݱ��\t��������\t������������\t������Ŀ\t�˶����\t׼����С����\t׼���������\tÿСʱ���\t��ʷԤԼ����\n");
			 }
			 printf("%-15s\t%-20s\t%-15s\t%-15s\t%-15s\t%-15s\t%-15s\t\%-15s\t%-15s\t\n",SIid3[k3],namr3[k3],SIarea3[k3],SIsta3[k3],SIsport3[k3],SIagemin3[k3],SIagemax3[k3],SIprice3[k3],SIord3[k3]);

			   }
		}

		if(m3==0)
		{
		    printf("��Ǹ��û�и����򳡹ݣ�����������\n");
		}
	      else if(m3!=0)
		  {
			system("pause");
			system("cls");
		   yudingqueren1(np,fNode);
		  }



    fclose(fp3);
	}





void changguanmingchaxun3(CUST *np,CUST *fNode)//��������ѯ����
{
	int i3=0,j3=0;//���ݸ���
	int a3,k3=0,m3=0;
	FILE *fp3;
	fp3=fopen("������Ϣ.txt","r");

	char SIid3[NUMBER][50];//���峡����Ϣ�����
    char namr3[NUMBER][50];//��������
	char SIarea3[NUMBER][50];//���峡����Ϣ������
	char SIsta3[NUMBER][50];//���峡����Ϣ�����ݣ����ⳡ��
	char SIsport3[NUMBER][50];//���峡����Ϣ���˶�����
    char SIagemax3[NUMBER][50];//���峡����Ϣ����������
	char SIagemin3[NUMBER][50];//���峡����Ϣ����������
	char SIprice3[NUMBER][50];//���峡����Ϣ�����
	char SIord3[NUMBER][50];//���峡����Ϣ��������
	char gm[50];



	while(fscanf(fp3,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",SIid3[i3],namr3[i3],SIarea3[i3],SIsta3[i3],SIsport3[i3],SIagemin3[i3],SIagemax3[i3],SIprice3[i3],SIord3[i3])!=EOF)
	{
	 i3++;
	}

    printf("��������Ҫ��ѯ�ĳ����� :");
	gets(gm);



		for(k3=0;k3<i3;k3++)//����
		{

			if (strcmp(namr3[k3],gm) == 0)//�ҵ���ͬ������
           {

             m3++;//��ͬ�������ظ���+1
             if(m3==1)//���ڵ�һ���ҵ�ʱ���
             {
             printf("���ݱ��\t��������\t������������\t�������\t�˶���Ŀ\t׼����С����\t׼���������\tÿСʱ���\t��ʷԤԼ����\n");
			 }
			  printf("%-15s\t%-20s\t%-10s\t%-10s\t%-15s\t%-15s\t%-15s\t%-15s\t%-15s\t\n",SIid3[k3],namr3[k3],SIarea3[k3],SIsta3[k3],SIsport3[k3],SIagemin3[k3],SIagemax3[k3],SIprice3[k3],SIord3[k3]);
		   }
		}
		if(m3==0)//�Ҳ���
		printf("��Ǹ��û�иó��ݣ�����������\n");
		else if(m3!=0)
		  {
			system("pause");
			system("cls");
			yudingqueren1(np,fNode);

		  }



    fclose(fp3);


}





void changdileixing3(CUST *np,CUST *fNode) //��������ѯ����
{
	int i3=0,j3=0;//Ϊ���ظ���
	int a3,k3=0,m3=0;
	FILE *fp3;
	fp3=fopen("������Ϣ.txt","r");

	char SIid3[NUMBER][50];//���峡����Ϣ�����
    char namr3[NUMBER][50];//��������
	char SIarea3[NUMBER][50];//���峡����Ϣ������
	char SIsta3[NUMBER][50];//���峡����Ϣ�����ݣ����ⳡ��
	char SIsport3[NUMBER][50];//���峡����Ϣ���˶�����
    char SIagemax3[NUMBER][50];//���峡����Ϣ����������
	char SIagemin3[NUMBER][50];//���峡����Ϣ����������
	char SIprice3[NUMBER][50];//���峡����Ϣ�����
	char SIord3[NUMBER][50];//���峡����Ϣ��������
	char inside[20]="inside";
	char outside[20]="outside";

	while(fscanf(fp3,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",SIid3[i3],namr3[i3],SIarea3[i3],SIsta3[i3],SIsport3[i3],SIagemin3[i3],SIagemax3[i3],SIprice3[i3],SIord3[i3])!=EOF)
	{
	 i3++;
	}//�ļ�����¼�뵽������
	printf("\t\t\t\t\t1�����ڳ�\n\t\t\t\t\t2�����ⳡ\n\n");
	printf("�������ѯ���");
	scanf("%d",&a3);//ѡ��������

	if(a3==1)
	{
		printf("���ݱ��\t��������\t������������\t�������\t�˶���Ŀ\t׼����С����\t׼���������\tÿСʱ���\t��ʷԤԼ����\n");
		for(k3=0;k3<i3;k3++)//����
		{
			//if(strcmp(s1,s2)==0)
			if (strcmp(SIsta3[k3], inside) == 0)
            printf("%-15s\t%-20s\t%-15s\t%-15s\t%-15s\t%-15s\t%-15s\t\%-15s\t%-15s\t\n\n",SIid3[k3],namr3[k3],SIarea3[k3],SIsta3[k3],SIsport3[k3],SIagemin3[k3],SIagemax3[k3],SIprice3[k3],SIord3[k3]);
		}

	}
	if(a3==2)
	{
		printf("���ݱ��\t��������\t������������\t�������\t�˶���Ŀ\t׼����С����\t׼���������\tÿСʱ���\t��ʷԤԼ����\n");
		for(m3=0;m3<i3;m3++)//����
		{
			if (strcmp(SIsta3[m3], outside) == 0)
            printf("%-15s\t%-20s\t%-15s\t%-15s\t%-15s\t%-15s\t%-15s\t\%-15s\t%-15s\t\n\n",SIid3[m3],namr3[m3],SIarea3[m3],SIsta3[m3],SIsport3[m3],SIagemin3[m3],SIagemax3[m3],SIprice3[m3],SIord3[m3]);
		}
	}

	fclose(fp3);

			system("pause");
			system("cls");
		    yudingqueren1(np,fNode);

}





void zujinchaxun3(CUST *np,CUST *fNode)//�������ߵͲ�ѯ����
{
	int i3=0,j3=0;
	int i=0,j=0;
	int a3,k3=0,m3=0;
	FILE *fp3;
	fp3=fopen("������Ϣ.txt","r");

	char SIid3[NUMBER][50];//���峡����Ϣ�����
    char namr3[NUMBER][50];//��������
	char SIarea3[NUMBER][50];//���峡����Ϣ������
	char SIsta3[NUMBER][50];//���峡����Ϣ�����ݣ����ⳡ��
	char SIsport3[NUMBER][50];//���峡����Ϣ���˶�����
    char SIagemax3[NUMBER][50];//���峡����Ϣ����������
	char SIagemin3[NUMBER][50];//���峡����Ϣ����������
	double SIprice3[50];//���峡����Ϣ�����
	char SIord3[NUMBER][50];//���峡����Ϣ��������

	int temp;
	char buff[100];


	while(fscanf(fp3,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%lf\n%s\n",SIid3[i3],namr3[i3],SIarea3[i3],SIsta3[i3],SIsport3[i3],SIagemin3[i3],SIagemax3[i3],&SIprice3[i3],SIord3[i3])!=EOF)
	{
	 i3++;
	}


	for(i=0;i<i3;i++)
	{
		for(j=0;j<i3-i;j++)
		{
			if(SIprice3[j]<SIprice3[j+1])
			{
				strcpy(buff,SIid3[j]);//    1
                strcpy(SIid3[j],SIid3[j+1]);
                strcpy(SIid3[j+1],buff);

                strcpy(buff,namr3[j]);//    2
                strcpy(namr3[j],namr3[j+1]);
                strcpy(namr3[j+1],buff);

                strcpy(buff,SIarea3[j]);//    3
                strcpy(SIarea3[j],SIarea3[j+1]);
                strcpy(SIarea3[j+1],buff);

                strcpy(buff,SIsta3[j]);//     4
                strcpy(SIsta3[j],SIsta3[j+1]);
                strcpy(SIsta3[j+1],buff);

                strcpy(buff,SIsport3[j]);//     5
                strcpy(SIsport3[j],SIsport3[j+1]);
                strcpy(SIsport3[j+1],buff);


                strcpy(buff,SIagemin3[j]);//     6
                strcpy(SIagemin3[j],SIagemin3[j+1]);
                strcpy(SIagemin3[j+1],buff);

                strcpy(buff,SIagemax3[j]);//      7
                strcpy(SIagemax3[j],SIagemax3[j+1]);
                strcpy(SIagemax3[j+1],buff);

                strcpy(buff,SIord3[j]);//      8
                strcpy(SIord3[j],SIord3[j+1]);
                strcpy(SIord3[j+1],buff);

				temp=SIprice3[j];
				SIprice3[j]=SIprice3[j+1];
				SIprice3[j+1]=temp;

			}
		}
	}
		for(k3=0;k3<i3;k3++)
		{

             m3++;
             if(m3==1)
             {
             	printf("���ݱ��\t��������\t������������\t�������\t�˶���Ŀ\t׼����С����\t׼���������\tÿСʱ���\t��ʷԤԼ����\n");
			 }
	 printf("%-15s\t%-20s\t%-15s\t%-15s\t%-15s\t%-15s\t%-15s\t%-15.2lf\t%-15s\t\n",SIid3[k3],namr3[k3],SIarea3[k3],SIsta3[k3],SIsport3[k3],SIagemin3[k3],SIagemax3[k3],SIprice3[k3],SIord3[k3]);

		}
		fclose(fp3);
		system("pause");
		system("cls");
		yudingqueren1(np,fNode);


}





void yudingliangchaxun3(CUST *np,CUST *fNode) //����Ԥ�����Ӵ�С��ѯ������Ϣ
{
	int i3=0,j3=0;
	int i=0,j=0;
	int a3,k3=0,m3=0;
	FILE *fp3;
	fp3=fopen("������Ϣ.txt","r");

	char SIid3[NUMBER][50];//���峡����Ϣ�����
    char namr3[NUMBER][50];//��������
	char SIarea3[NUMBER][50];//���峡����Ϣ������
	char SIsta3[NUMBER][50];//���峡����Ϣ�����ݣ����ⳡ��
	char SIsport3[NUMBER][50];//���峡����Ϣ���˶�����
    char SIagemax3[NUMBER][50];//���峡����Ϣ����������
	char SIagemin3[NUMBER][50];//���峡����Ϣ����������
	char SIprice3[NUMBER][50];//���峡����Ϣ�����
	double SIord3[50];//���峡����Ϣ��������

	int temp;
	char buff[100];


	while(fscanf(fp3,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%lf\n",SIid3[i3],namr3[i3],SIarea3[i3],SIsta3[i3],SIsport3[i3],SIagemin3[i3],SIagemax3[i3],SIprice3[i3],&SIord3[i3])!=EOF)
	{
	 i3++;
	}



	for(i=0;i<i3;i++)
	{
		for(j=0;j<i3-i;j++)
		{
			if(SIord3[j]<SIord3[j+1])
			{
				strcpy(buff,SIid3[j]);//    1
                strcpy(SIid3[j],SIid3[j+1]);
                strcpy(SIid3[j+1],buff);

                strcpy(buff,namr3[j]);//    2
                strcpy(namr3[j],namr3[j+1]);
                strcpy(namr3[j+1],buff);

                strcpy(buff,SIarea3[j]);//    3
                strcpy(SIarea3[j],SIarea3[j+1]);
                strcpy(SIarea3[j+1],buff);

                strcpy(buff,SIsta3[j]);//     4
                strcpy(SIsta3[j],SIsta3[j+1]);
                strcpy(SIsta3[j+1],buff);

                strcpy(buff,SIsport3[j]);//     5
                strcpy(SIsport3[j],SIsport3[j+1]);
                strcpy(SIsport3[j+1],buff);


                strcpy(buff,SIagemin3[j]);//     6
                strcpy(SIagemin3[j],SIagemin3[j+1]);
                strcpy(SIagemin3[j+1],buff);

                strcpy(buff,SIagemax3[j]);//      7
                strcpy(SIagemax3[j],SIagemax3[j+1]);
                strcpy(SIagemax3[j+1],buff);

                strcpy(buff,SIprice3[j]);//      8
                strcpy(SIprice3[j],SIprice3[j+1]);
                strcpy(SIprice3[j+1],buff);

				temp=SIord3[j];
				SIord3[j]=SIord3[j+1];
				SIord3[j+1]=temp;

			}
		}
	}
		for(k3=0;k3<i3;k3++)
		{

             m3++;
             if(m3==1)
             {
             	printf("���ݱ��\t��������\t������������\t�������\t�˶���Ŀ\t׼����С����\t׼���������\tÿСʱ���\t��ʷԤԼ����\n");
			 }
	 printf("%-15s\t%-20s\t%-15s\t%-15s\t%-15s\t%-15s\t%-15s\t\%-15s\t%-15.0lf\t\n",SIid3[k3],namr3[k3],SIarea3[k3],SIsta3[k3],SIsport3[k3],SIagemin3[k3],SIagemax3[k3],SIprice3[k3],SIord3[k3]);

		}

		fclose(fp3);
		system("pause");
			system("cls");
		    yudingqueren1(np,fNode);




 }






void suoyouchangdi1()//����Ա��ѯ���г�����Ϣ
{
	int i3=0,j3=0;
	int a3,k3=0,m3=0;
	FILE *fp3;
	fp3=fopen("������Ϣ.txt","r");

	char SIid3[NUMBER][50];//���峡����Ϣ�����
    char namr3[NUMBER][50];//��������
	char SIarea3[NUMBER][50];//���峡����Ϣ������
	char SIsta3[NUMBER][50];//���峡����Ϣ�����ݣ����ⳡ��
	char SIsport3[NUMBER][50];//���峡����Ϣ���˶�����
    char SIagemax3[NUMBER][50];//���峡����Ϣ����������
	char SIagemin3[NUMBER][50];//���峡����Ϣ����������
	char SIprice3[NUMBER][50];//���峡����Ϣ�����
	char SIord3[NUMBER][50];//���峡����Ϣ��������
	char gm[50];


	while(fscanf(fp3,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",SIid3[i3],namr3[i3],SIarea3[i3],SIsta3[i3],SIsport3[i3],SIagemin3[i3],SIagemax3[i3],SIprice3[i3],SIord3[i3])!=EOF)
	{
	 i3++;
	}
		for(k3=0;k3<i3;k3++)
		{
			printf("���ݱ��\t��������\t   ������������\t    �������\t     �˶���Ŀ\t   ׼����С����\t  ׼���������\tÿСʱ���\t��ʷԤԼ����\n");
			printf("%-15s\t%-20s\t%-10s\t%-10s\t%-15s\t%-15s\t%-15s\t%-15s\t%-15s\t\n",SIid3[k3],namr3[k3],SIarea3[k3],SIsta3[k3],SIsport3[k3],SIagemin3[k3],SIagemax3[k3],SIprice3[k3],SIord3[k3]);
		}

}





void tianjia1()//��ӳ��ݺ���
{
	FILE *fp1;
	fp1=fopen("������Ϣ.txt","a");

	char SIid1[NUMBER];//���峡����Ϣ�����
    char namr1[NUMBER];//��������
	char SIarea1[NUMBER];//���峡����Ϣ������
	char SIsta1[NUMBER];//���峡����Ϣ�����ݣ����ⳡ��
	char SIsport1[NUMBER];//���峡����Ϣ���˶�����
    char SIagemax1[NUMBER];//���峡����Ϣ����������
	char SIagemin1[NUMBER];//���峡����Ϣ����������
	char SIprice1[NUMBER];//���峡����Ϣ�����
	char SIord1[NUMBER];//���峡����Ϣ��������
	printf("                   ���ر��                \n\n");
		gets(SIid1);
		printf("                    ��������             \n\n");
		gets(namr1);
		printf("                   ��������               \n\n");
		gets(SIarea1);
		printf("                   ��������                \n\n");
		gets(SIsta1);
		printf("                   ������Ŀ                \n\n");
		gets(SIsport1);
		printf("                   ����������С����                 \n\n");
		gets(SIagemin1);
		printf("                   ���������������               \n\n");
		gets(SIagemax1);
		printf("                   ����Сʱ���                \n\n");
		gets(SIprice1);
		printf("                   ����Ԥ����                \n\n");
		gets(SIord1);
	     fprintf(fp1,"%-15s\n%-20s\n%-15s\n",SIid1,namr1,SIarea1);//��Ϣ¼���ļ�
	     fprintf(fp1,"%-15s\n%-15s\n",SIsta1,SIsport1);
	     fprintf(fp1,"%-15s\n",SIagemin1);
	     fprintf(fp1,"%-15s\n%-15s\n%-15s\n",SIagemax1,SIprice1,SIord1);
	       fclose(fp1);
	       printf("���ѳɹ����!\n");

}





void GMchaxungeren1(GM *np)//����Ա��ѯ������Ϣ����
{

  				printf("             ����ǰ�Ĺ���ԱID��          \n\n");
				printf("%s\n",GMteding1(np)->Gid);
				printf("             ����ǰ�Ĺ���Ա������          \n\n");
				printf("%s\n",GMteding1(np)->administrator_name);
				printf("             ����ǰ�Ĺ���Ա�Ա�          \n\n");
				printf("%s\n",GMteding1(np)->Gsex);
			    printf("             ����ǰ�Ĺ���Ա���䣺          \n\n");
				printf("%d\n",GMteding1(np)->Gage);
				printf("             ����ǰ�Ĺ���Ա�绰��          \n\n");
				printf("%s\n",GMteding1(np)->Gphonenumber);
				printf("             ����ǰ�Ĺ���Ա���룺          \n\n");
				printf("%s\n",GMteding1(np)->Gpassword);
				printf("             ����ǰ�Ĺ���Ա���䣺          \n\n");
				printf("%s\n",GMteding1(np)->Gmail);
				printf("             ����ǰ�Ĺ���Ա��ַ��          \n\n");
				printf("%s\n",GMteding1(np)->Gplace);

				system("pause");
				system("cls");

 }





GM *GMteding1(GM *np)//�ѹ���Ա��Ϣ�����ض��Ľڵ�¼��һ�������ṹ��
{

	GM *np1;//�����ṹ��ָ��
	np1 = (GM*)malloc(sizeof(GM));//�����ڴ�

	strcpy(np1->administrator_name,np->administrator_name);//¼����Ϣ
	strcpy(np1->Gid, np->Gid);
	strcpy(np1->Gsex,np->Gsex);
	strcpy(np1->Gmail,np->Gmail );
	strcpy(np1->Gpassword,np->Gpassword);
	strcpy(np1->Gplace,np->Gplace);
	strcpy(np1->Gphonenumber,np->Gphonenumber);
	np1->Gage=np->Gage;
	np1->next=NULL;

	return np1;


}





ORDER *createinf4()/*����������*/

{   FILE *File4;

    char orid[40];//������
	char cusid[20];//�ͻ�ID
	char nowtime[30];//�µ�����ʱ��
	char siid[12];//����ID
	char sista[20];//��������
	double orprice;//�����۸�
	char ordate[30];//Ԥ������
	int ortimestart;//Ԥ����ʼʱ��
	int ortimeover;//Ԥ������ʱ��
    File4=fopen("Ԥ����Ϣ.txt","r");
    ORDER *np=(ORDER*)malloc(sizeof(ORDER));
    ORDER *head=(ORDER*)malloc(sizeof(ORDER));
    head=NULL;
     while(fscanf(File4,"%s\n%s\n%s\n%s\n%s\n%lf\n%s\n%d\n%d\n",orid,cusid,nowtime,siid,sista,&orprice,ordate,&ortimestart,&ortimeover)==9)
 {
	ORDER *np=(ORDER*)malloc(sizeof(ORDER));
	strcpy(np->cusid,cusid);
	strcpy(np->nowtime,nowtime);
	strcpy(np->ordate,ordate);
	strcpy(np->orid,orid);
    strcpy(np->sista,sista);
    strcpy(np->siid,siid);
    np->orprice=orprice;
    np->ortimeover=ortimeover;
    np->ortimestart=ortimestart;
	np->next=NULL;
   if(head==NULL)
	{
		head=np;

	  //��һ�ν����ʼ���ڵ�
	}
	else
	{
	np->next=head;

		head=np;

	}
 }
    fclose(File4);
return head;

}





void chakanyuding1(ORDER *OfNode)//�鿴Ԥ����Ϣ����
{

	ORDER *np= OfNode;//����Ԥ����Ϣ��ͷ�ڵ�
	printf("Ԥ���Ա�\t       �ͻ�ID\t          �µ�����ʱ��\t            ����ID\t      ��������\t      �����۸�\t      Ԥ������\t        Ԥ����ʼʱ��\t     Ԥ������ʱ��\n");
	while(np!=NULL)
	{
		printf("%-15s%-20s%-25s%-15s%-20s%-15.2lf%-25s%-20d%-15d\n",np->orid,np->cusid,np->nowtime,np->siid,np->sista,np->orprice,np->ordate,np->ortimestart,np->ortimeover+1);
		np=np->next;//ƫ�Ƶ��¸��ڵ�
	}


}





void tongji1()//ͳ�ƺ���
{
	ORDER *OfNode=createinf4(); //���붩��ͷ�ڵ�
	int NM1;
	do{	 	printf("*************************************************\n\n");
				printf("             1.����Ԥ�������򳡹�               \n\n");
    			printf("             2.����Ӫҵ��ߵ����򳡹�              \n\n");
    			printf("             3.ͳ���û�������           \n\n");
    			printf("             4.ͳ��Ӫҵ��               \n\n");
    			printf("             5.ͳ���ӭ�˶�                \n\n");
    			printf("             6.����ʱ���ͳ�Ʋ�ͬ�����������                \n\n");
    			printf("             7.������ҳ                \n\n");
    			printf("*************************************************\n");
    			printf("��ѡ��ִ�����:");
    			scanf("%d",&NM1);/*ѡ��Ĳ������*/
    			getchar();
    			if(NM1<=0||NM1>7)
    			printf("����������������ȷ��š�\n");//�������ݴ���

		switch(NM1)
			{
			case 1:
	    		system("cls");
	    		yudingliangchaxun1();
	    		system("pause");
	    		system("cls");

	     			break;
	    	case 2:
	    		system("cls");
	    		 yudingliang1();
	    		system("pause");
	    		system("cls");

	    			break;
	    	case 3:
	    		system("cls");
	    		nianlingtongji1();
	    		system("pause");
	    		system("cls");

	    			break;
	    	case 4:
	    		system("cls");
	    		yingye1(OfNode);
	    		system("pause");
	    		system("cls");

	    			break;
	    	case 5:
	    		system("cls");
	    		xingbietuijian();
	    		system("pause");
	    		system("cls");
	    			break;
	    	case 6:
				system("cls");
			int t,p;
			printf("��������ʼʱ��\n");
			scanf("%d",&t);
			printf("��������ֹʱ��\n");
			scanf("%d",&p);
			shijian2(t,p);
	    		system("pause");
	    		system("cls");

	    			break;
	   		default:
				printf("���˳����ϲ�\n");
	   				break;

			}
		}


			while(NM1!=7);



}




void nianlingtongji1()//����ײ�ͳ�ƺ���
{
	FILE *File;
 	char names1[NAMELEN][20];
	char ids1[NUMBER][20];
	char sexs1[NUMBER][10];
	char mails1[NUMBER][20];
	int phonenumbers1[NUMBER];
	int ages1[NUMBER];
	char places1[NUMBER][20];
	char passwords1[NUMBER][20];
	double moneys1[NUMBER];
	int times1[NUMBER];
	float m1=0;//��������
	float k1=0;//��������
	float l1=0;//��������
    int i1=0;//������
    File=fopen("�˿���Ϣ.dat","r");
    float Trate1;//������������
    float Zrate1;//������������
    float Lrate1;//������������



   while(fscanf(File,"%s\n%s\n%s\n%d\n%d\n%s\n%s\n%lf\n%s\n%d\n",ids1[i1],names1[i1],sexs1[i1],&ages1[i1],&phonenumbers1[i1],passwords1[i1],mails1[i1],&moneys1[i1],places1[i1],&times1[i1])!=EOF)
   	{
	 i1++;
	}
    fclose(File);

	int I1;//������
	 for(I1=0;I1<i1;I1++)//�����������ݷ���
	{
		if(ages1[I1]<=30)
			m1++;
        else if((ages1[I1]>=30)&&(ages1[I1]<=55))
			k1++;
		else
		    l1++;

	}
		Trate1=(m1/i1)*100;
		Zrate1=(k1/i1)*100;
		Lrate1=(l1/i1)*100;
		printf("ע���û���%d��\n",i1);
		printf("�����û�һ��%1.0f��\n",m1);
		printf("����ռ����Ϊ%5.2f%%\n",Trate1);
		printf("�����û�һ��%1.0f��\n",k1);
		printf("����ռ����Ϊ%5.2f%%\n",Zrate1);
		printf("�����û�һ��%1.0f��\n",l1);
		printf("����ռ����Ϊ%5.2f%%\n",Lrate1);



	}




void yingye1(ORDER *OfNode)//ͳ��Ӫҵ���
{
	ORDER *temp1=OfNode;//����ͷ�ڵ�����ʱָ��
	float profit1;//Ӫҵ��
	while(temp1!=NULL)
	{
		profit1=profit1+(temp1->orprice)*((temp1->ortimeover)-(temp1->ortimestart));//���㹫ʽ
		temp1=temp1->next;//ƫ���¸��ڵ�
	}
	printf("��Ԥ�����ص�Ӫҵ��Ϊ%5.2fԪ\n",profit1);


}



void yudingliang1() //����Ԥ�����Ӵ�Сͳ�Ƴ�����Ϣ
{
	 FILE *File4;

    char orid[NUMBER][40];//������
	char cusid[NUMBER][20];//�ͻ�ID
	char nowtime[NUMBER][30];//�µ�����ʱ��
	char siid[NUMBER][12];//����ID
	char sista[NUMBER][20];//��������
	double orprice[NUMBER];//�����۸�
	char ordate[NUMBER][30];//Ԥ������
	int ortimestart[NUMBER];//Ԥ����ʼʱ��
	int ortimeover[NUMBER];//Ԥ������ʱ��
	int i3=0,j3=0;
	int i=0,j=0;
	int a3,k3=0,m3=0;
	int temp;
	char buff[100];
	double temp1;
	double profit1[NUMBER];//Ӫҵ��
    File4=fopen("Ԥ����Ϣ.txt","r");


     while(fscanf(File4,"%s\n%s\n%s\n%s\n%s\n%lf\n%s\n%d\n%d\n",orid[i3],cusid[i3],nowtime[i3],siid[i3],sista[i3],&orprice[i3],ordate[i3],&ortimestart[i3],&ortimeover[i3])!=EOF)
	{
	 i3++;
	}


	for(i=0;i<i3;i++)
	{
		for(j=0;j<i3-i;j++)
		{
			if((orprice[j])*((ortimeover[j])-(ortimestart[j]))<(orprice[j+1])*((ortimeover[j+1])-(ortimestart[j+1])))
			{
				strcpy(buff,orid[j]);//    1
                strcpy(orid[j],orid[j+1]);
                strcpy(orid[j+1],buff);

                strcpy(buff,cusid[j]);//    2
                strcpy(cusid[j],cusid[j+1]);
                strcpy(cusid[j+1],buff);

                strcpy(buff,nowtime[j]);//    3
                strcpy(nowtime[j],nowtime[j+1]);
                strcpy(nowtime[j+1],buff);

                strcpy(buff,siid[j]);//     4
                strcpy(siid[j],siid[j+1]);
                strcpy(siid[j+1],buff);

                strcpy(buff,sista[j]);//     5
                strcpy(sista[j],sista[j+1]);
                strcpy(sista[j+1],buff);


                temp1=orprice[j];
				orprice[j]=orprice[j+1];
				orprice[j+1]=temp1;

                strcpy(buff,ordate[j]);//      7
                strcpy(ordate[j],ordate[j+1]);
                strcpy(ordate[j+1],buff);

                temp=ortimestart[j];
				ortimestart[j]=ortimestart[j+1];
				ortimestart[j+1]=temp;

				temp=ortimeover[j];
				ortimeover[j]=ortimeover[j+1];
				ortimeover[j+1]=temp;

			}
		}
	}
		for(k3=0;k3<i3;k3++)
		{
			profit1[k3]=(orprice[k3])*((ortimeover[k3]+1)-(ortimestart[k3]));
             m3++;
             if(m3==1)
             {
             	printf("Ԥ���Ա�\t       �ͻ�ID\t           �µ�����ʱ��\t      ����ID\t      ��������\t         �����۸�\t      Ԥ������\t      Ԥ����ʼʱ��\t  Ԥ������ʱ��\t Ӫҵ��\t\n");
			 }
	 printf("%-15s\t%-17s\t%-15s\t%-15s\t%-22s\t%-13.2f\t%-15s\t%-12.0d\t%-14.0d\t%5.2lf\n",orid[k3],cusid[k3],nowtime[k3],siid[k3],sista[k3],orprice[k3],ordate[k3],ortimestart[k3],ortimeover[k3]+1,profit1[k3]);

		}

		fclose(File4);
		system("pause");
			system("cls");







}




void tuijian2(char np2[20],int year,int t)
	{
		FILE *File2;
		File2=fopen("������Ϣ.dat","r");
		SITE *temp=createinf2();
	    int  p=0;
		xingbietuijian(t);
		while(temp!=NULL){
			if(strcmp(temp->SIarea,np2)==0&&temp->SIagemax>year&&temp->SIagemin<year)
			{printf("���������ʺ�������ĵĳ�����\n");p=1;
			printf("���� %s ��� %s ���� %s\n",temp->namr,temp->SIid,temp->SIsta);}
			temp=temp->next;
			 } //���������ҳ�������������䳡��
			 if(p==0){
			 	printf("������û�з��������䳡��\n");
			 }
		fclose(File2);
		free(temp);
\
	}





void xingbietuijian(int t)
{
	int i2=1,q=0,c=0;
	ORDER *bianli2=createinf4();
	SITE *np=createinf2();SITE *temp=np;
	while(temp!=NULL){
		i2++;
	temp=temp->next;

	}//ͳ�Ƴ�������
	SITE2 *n;
	n=(SITE2*)malloc(sizeof(SITE2)*i2);
	while(np!=NULL){
	strcpy(n[q].SIid,np->SIid);
	strcpy(n[q].namr,np->namr);
	strcpy(n[q].SIsport,np->SIsport);
	strcpy(n[q].SIarea,np->SIarea);
    strcpy(n[q].SIsta,np->SIsta);
    n[q].SIprice=np->SIprice;
    n[q].SIagemax=np->SIagemax;
    n[q].SIagemin=np->SIagemin;
    n[q].SIord=np->SIord;
    n[q].woman=0;
    n[q].man=0;
     np=np->next;
     q++;
	}//�����ṹ�����鲢��ֵ
	q=0;
	if(t==1){
		while(bianli2!=NULL){
		while(q<i2){
		if(strcmp(bianli2->siid,n[q].SIid)==0){
			if(strcmp(bianli2->orid,"male")==0){
				n[q].man++;q++;
			}
			else{
				q++;
			}
		}
		else{
			q++;
		    }
	          }
	    q=0;
	    bianli2=bianli2->next;}//���������ļ��ҳ�������ͬ���� id�Աȿͻ��Ա� ���ӽṹ�������и��Ա��Ԥ����
	    SITE2 tem;
	      for (int m=0;m<i2-1;m++) {
        for (int j=0;j<i2-1-m;j++) {
            if (n[j].woman<n[j+1].woman)  {
                   tem=n[j];
                n[j]=n[j+1];
                n[j+1]=tem;
            }
        }
    }
}//��������Ա�Ԥ�������������ṹ������
	if(t==2){
		while(bianli2!=NULL){
		while(q<i2){
		if(strcmp(bianli2->siid,n[q].SIid)==0){
			if(strcmp(bianli2->orid,"female")==0){
				n[q].woman++;q++;
			}
			else{
				q++;
			}
		}
		else{
			q++;
		    }
	                }
	    q=0;
	    bianli2=bianli2->next;}
	    SITE2 tem;
	      for (int v=0;v<i2-1;v++) {
        for (int j=0;j<i2-1-v;j++) {
            if (n[j].woman<n[j+1].woman){
                   tem=n[j];
                n[j]=n[j+1];
                n[j+1]=tem;
            }
        }
    }
}	//ͬ�� �ı�ͳ���Ա�
printf("��ѡ���Ա𳡹ݻ�ӭ��������\n");
while(q<i2-1){
	printf("%d���� %s���� %s���غ� %s \n",q+1,n[q].namr,n[q].SIarea,n[q].SIid);
	q++;
}//������
free(n);
}





SITE *createinf2()/*����������*/
{   FILE *File2;
  char SIid[NUMBER];//���峡����Ϣ�����
    char namr[NUMBER];//��������
	char SIarea[NUMBER];//���峡����Ϣ������
	char SIsta[NUMBER];//���峡����Ϣ�����ݣ����ⳡ��
	char SIsport[NUMBER];//���峡����Ϣ���˶�����
	int SIagemin;//���峡����Ϣ����������
	int SIagemax;
	double SIprice;//���峡����Ϣ�����
	int SIord;//���峡����Ϣ��������
    File2=fopen("������Ϣ.txt","r");
    SITE *np=(SITE*)malloc(sizeof(SITE));
    SITE *head=(SITE*)malloc(sizeof(SITE));
    head=NULL;
     while(fscanf(File2,"%s\n%s\n%s\n%s\n%s\n%d\n%d\n%lf\n%d\n",SIid,namr,SIarea,SIsta,SIsport,&SIagemin,&SIagemax,&SIprice,&SIord)!=EOF)
   	{SITE *np=(SITE*)malloc(sizeof(SITE));
	strcpy(np->SIid,SIid);
	strcpy(np->namr,namr);
	strcpy(np->SIsport,SIsport);
	strcpy(np->SIarea,SIarea);
    strcpy(np->SIsta,SIsta);
    np->SIprice=SIprice;
    np->SIagemax=SIagemax;
    np->SIagemin=SIagemin;
    np->SIord=SIord;
	np->next=NULL;
   if(head==NULL)
	{
		head=np;

	  //��һ�ν����ʼ���ڵ�
	}
	else
	{
	np->next=head;

		head=np;

	}
	}
    fclose(File2);
return head;

}




void shijian2(int t,int p)
{
 	int i2=1,q=0,c=0;
	ORDER *bianli2=createinf4();
	SITE *np=createinf2();SITE *temp=np;
	while(temp!=NULL)
	{
		i2++;
	temp=temp->next;
	}//ͳ�Ƴ�������

	SHIJIAN *n;
	n=(SHIJIAN*)malloc(sizeof(SHIJIAN)*i2);
	while(np!=NULL){
	strcpy(n[q].SIid,np->SIid);
	strcpy(n[q].namr,np->namr);
	strcpy(n[q].SIarea,np->SIarea);
	strcpy(n[q].SIsta,np->SIsta);
    n[q].time1=t;
    n[q].time2=p;
    n[q].cishu=0;
     np=np->next;
     q++;
	}//�����ṹ�����鲢��ֵ
	q=0;
		while(bianli2!=NULL){
		while(q<i2){
		if(strcmp(bianli2->siid,n[q].SIid)==0){
			if(bianli2->ortimeover>n[q].time1||bianli2->ortimestart<n[q].time2){
				n[q].cishu++;q++;
			}
			else{
				q++;
			}
		}
		else{
			q++;
		    }
	          }
	    q=0;
	    bianli2=bianli2->next;}//���������ļ��ҳ�������ͬ���� id�Աȿͻ��Ա� ���ӽṹ�������и��Ա��Ԥ����
	    SHIJIAN tem;
	      for (int m=0;m<i2-1;m++) {
        for (int j=0;j<i2-1-m;j++) {
            if (n[j].cishu<n[j+1].cishu)  {
                   tem=n[j];
                n[j]=n[j+1];
                n[j+1]=tem;
            }
        }
    }
 	printf("��ѡ��ʱ��γ��ݻ�ӭ����������\n");
		while(q+1<i2)
					{
						printf("%d���� %s���� %s���غ� %s �������� %s\n",q+1,n[q].namr,n[q].SIarea,n[q].SIid,n[q].SIsta);
						q++;
					}//������
	free(n);
}


void xingbietuijian()
{
	int i2=1,q=0,c=0;
	ORDER *bianli2=createinf4();
	ORDER *pt=bianli2;
	SITE *np=createinf2();
	SITE *temp=np;
	while(temp!=NULL)
	{
		i2++;
	temp=temp->next;

	}//ͳ�Ƴ�������
	SITE22 *n;
	n=(SITE22*)malloc(sizeof(SITE22)*i2);
	while(np!=NULL)
	{

	strcpy(n[q].SIid,np->SIid);
	strcpy(n[q].namr,np->namr);
	strcpy(n[q].SIsport,np->SIsport);
	strcpy(n[q].SIarea,np->SIarea);
    strcpy(n[q].SIsta,np->SIsta);
    n[q].SIprice=np->SIprice;
    n[q].SIagemax=np->SIagemax;
    n[q].SIagemin=np->SIagemin;
    n[q].SIord=np->SIord;
    n[q].n2=0;
     np=np->next;
     q++;
	}//�����ṹ�����鲢��ֵ
	q=0;

		while(bianli2!=NULL)
		{

		while(q<i2)
				   {
		if(strcmp(bianli2->siid,n[q].SIid)==0)
			{
		n[q].n2++;
	    	}
	        q++;   }
	    q=0;
	    bianli2=bianli2->next;
		}//���������ļ��ҳ�������ͬ���� id�Ա�  ͳ������
	    bianli2=pt;  SITE22 tem;
	      for (int v=0;v<i2-1;v++)
	{

        for (int j=0;j<i2-1-v;j++)
		{

            if (n[j].SIsport<n[j+1].SIsport)
			{

                   tem=n[j];
                n[j]=n[j+1];
                n[j+1]=tem;
            }
        }
    }
   while(q<i2-1)
   {
   	if(strcmp(n[q+1].SIsport,n[q].SIsport)==0)
	   {
   		n[q+1].n2=n[q+1].n2+n[q].n2;q++;
	   }
	 else
	   {
	 	printf("��Ŀ%s��%d�˴�ѡ��\n",n[q+1].SIsport,n[q+1].n2);q++;
	   }
   }





free(n);

}






int querenxiadan5(CUST *cust5,CUST *fNode)//ȷ���µ� ����ͻ���Ϣ
{

	ORDER *finalorder=(ORDER*)malloc(sizeof(ORDER));
	ORDER *temp;
	ORDER *ordertemp=(ORDER*)malloc(sizeof(ORDER));
	FILE *out;
	ORDER *wholeorder=(ORDER*)malloc(sizeof(ORDER));
	wholeorder=createinf4();//Ԥ����Ϣ����������
	ORDER *wholeordertemp=(ORDER*)malloc(sizeof(ORDER));
	wholeordertemp=wholeorder;
	finalorder->ortimestart=-1;

	/*if(out==EOF)
	{
		printf("\n�޷����ļ���\n");
		exit(1);
	}*///�ص�Ԥ������ͷ���
	int check=0;
	int i5=0;
	int limit=0;//ÿ���ͻ�һ�ο�ԤԼ�������ء�
	if(cust5->time>3)
	{
		printf("�Բ�������ˬԼ�����������Σ��޷�ԤԼ��");
	}
	else
	{

	while(limit<3)//����ÿ���û����ԤԼ�������أ�ѭ��ʹ���û����Զ��ѡ��
	{
		ordertemp=finalorder;
		wholeorder=createinf4();
		wholeordertemp=wholeorder;
		temp=(ORDER*)malloc(sizeof(ORDER));

		temp=yuding4(cust5,fNode);//Ԥ��ϵͳ����
		if(temp!=NULL)
		limit++;

		/*if(finalorder->ortimestart==-1)
		{

		strcpy(ordertemp->cusid,temp->cusid);
	    strcpy(ordertemp->nowtime,temp->nowtime);
	    strcpy(ordertemp->ordate,temp->ordate);
	    strcpy(ordertemp->orid,temp->orid);
        strcpy(ordertemp->sista,temp->sista);
        strcpy(ordertemp->siid,temp->siid);
        ordertemp->orprice=temp->orprice;
        ordertemp->ortimeover=temp->ortimeover;
        ordertemp->ortimestart=temp->ortimestart;
     	ordertemp->next=NULL;
        }
        else
        {
        	ordertemp->next=temp;
		}*/
		if(temp!=NULL)
		{
		    if(wholeordertemp!=NULL)
			{
			while((wholeordertemp->next)!=NULL)//�ҵ�Ԥ�������ļ������β��
        	{
	        	wholeordertemp=wholeordertemp->next;
        	}
         	wholeordertemp->next=temp;
         	out=fopen("Ԥ����Ϣ.txt","w+");//��Ԥ����Ϣ�ļ�

	/*if(out==EOF)
	{
		printf("\n�޷����ļ���\n");
		exit(1);
	}*///�ص�Ԥ������ͷ���
         	while(wholeorder!=NULL)//��������Ϣ���뵽�ļ���
         	{

	            fprintf(out,"%s\n%s\n%s\n%s\n%s\n%.2lf\n%s\n%d\n%d\n",wholeorder->orid,wholeorder->cusid,wholeorder->nowtime,wholeorder->siid,wholeorder->sista,wholeorder->orprice,
	         	wholeorder->ordate,wholeorder->ortimestart,wholeorder->ortimeover);
	        	wholeorder=wholeorder->next;
        	}
        	fclose(out);
            }


			if(wholeordertemp==NULL)
			{
			    /*strcpy(wholeordertemp->cusid,ordertemp->cusid);printf("133");
				strcpy(wholeordertemp->cusid,ordertemp->cusid);
	            strcpy(wholeordertemp->nowtime,ordertemp->nowtime);
	            strcpy(wholeordertemp->ordate,ordertemp->ordate);
	            strcpy(wholeordertemp->orid,ordertemp->orid);
                strcpy(wholeordertemp->sista,ordertemp->sista);
                strcpy(wholeordertemp->siid,ordertemp->siid);
                wholeordertemp->orprice=ordertemp->orprice;
                wholeordertemp->ortimeover=ordertemp->ortimeover;
                wholeordertemp->ortimestart=ordertemp->ortimestart;
     	        wholeordertemp->next=NULL;	*/
     	        wholeordertemp=temp;
				while(wholeordertemp!=NULL)//��������Ϣ���뵽�ļ���
         	   {
         	   out=fopen("Ԥ����Ϣ.txt","w+");//��Ԥ����Ϣ�ļ�

	/*if(out==EOF)
	{
		printf("\n�޷����ļ���\n");
		exit(1);
	}*///�ص�Ԥ������ͷ���
	            fprintf(out,"%s\n%s\n%s\n%s\n%s\n%.2lf\n%s\n%d\n%d\n",wholeordertemp->orid,wholeordertemp->cusid,wholeordertemp->nowtime,wholeordertemp->siid,wholeordertemp->sista,wholeordertemp->orprice,
	         	wholeordertemp->ordate,wholeordertemp->ortimestart,wholeordertemp->ortimeover);
	        	wholeordertemp=wholeordertemp->next;
        	    }
        	    fclose(out);
			}

			//Ԥ�������µ�һ������
			ordertemp=ordertemp->next;
		}

		do{
		    check=jixuyuding5();//�ж��Ƿ����Ԥ��  ����ȷ���µ�
	    	if(check==1)
	    	continue;
    		else if(check==2)
	    	return 0;
	    }while(check!=1&&check!=2);
	   	if(check==2)
	   	return 0;

	}
	if(limit==3&&check!=2)
	printf("�Բ�������Ԥ�������������أ��޷�����Ԥ����\n\n");
	else
	dachudingdan(finalorder,limit);
	}

}




ORDER *yuding4(CUST *cust5,CUST *fNode)//Ԥ��ϵͳ ���ͻ�������
{
	SITE *site5=(SITE*)malloc(sizeof(SITE));
	SITE *sihead=(SITE*)malloc(sizeof(SITE));
	ORDER *orderhead=(ORDER*)malloc(sizeof(ORDER));//������Ϣ��ͷ�ڵ�
	ORDER *order5=(ORDER*)malloc(sizeof(ORDER));
 //����ѡ��ʱ������
	int datecheck;//�ж������Ƿ���������
	char orderdate[20];//��ѡ����
	ORDER *timecheck=(ORDER*)malloc(sizeof(ORDER));//�ж�ʱ��ѡ��
	int choosesite=0;
	int i5=0;
	sihead=site5=createinf2();//���ش�������
	int choose=1;//�ж�ѭ����ȥ���� ���� ���� ���ڵ�ѭ�� �����˳�ѡ��

	while(1)//һֱѭ��
    {
     	int agetemp=0;//�����������ʼ��

    	while(agetemp!=3&&choose==1)//��������ѭ��
    	{
                site5=sihead;
            	i5=0;
             	while(site5!=NULL)//��ʾ�����г���
            	{
            		i5++;
            		printf("%d.�������ݣ�%s  ���ر�ţ�%s\n",i5,site5->namr,site5->SIid);
            		site5=site5->next;

            	}//ѭ���ɵ���i5������
        	     do
	    	    {
	    	    	choosesite=0;
	    	    	printf("����������ѡ��ĳ���:__\n");
                 	scanf("%d",&choosesite);//choosesiteΪ�ͻ���ѡ��ĳ��ر��
                 	if(choosesite<1||choosesite>i5)//�жϳ����Ƿ��ǳ����ļ������е�
         	        {
                 		printf("����������������ȷ��š�\n");

                	}
	        	}while(choosesite<1||choosesite>i5);//ѭ����ʹ�ͻ�����ѡ�񳡵�

            	site5=sihead;//ʹsite5�ص����������ͷ���

             	while(site5!=NULL&&choosesite>1)//�ҵ��ͻ�ѡ��ĳ��� ��site5)
            	{
              		site5=site5->next;
            		choosesite--;
             	}

                agetemp=panduannianling5(cust5,site5);//����Ա��Ƿ����ѡ�� ���䷵��ֵ��������ѡ�񳡵� ������3�����߼���ѡ��Ԥ������ ����3

    	}

    	if(agetemp==3)
    	{
    		choose=2;
    		datecheck=0;
    		strcpy(order5->siid,site5->SIid);
    		strcpy(order5->sista,site5->SIsta);
		}

	    orderhead=createinf4();/*����Ԥ����Ϣ�������orderhead��*/

    	while(choose==2)//����ʱ��ѭ��
       {

       	    char orderdate[30];//�ж������Ƿ�Ϊ������
    		while(datecheck==0)//ѭ�������ظ�ѡ������
            {
            	printf("����������ѡ������ڣ������꣺�£�����ʽ�����\n");
            	scanf("%s",orderdate);
            	getchar();
			    datecheck=dateavailable(orderdate);//�ж������Ƿ�������֮��
			    if(datecheck==0)
			    choose=0;//���ڲ�������֮��
			    while(choose<1||choose>3)//ѭ���ж�ѡ����ѡ����Ŀ
            	{
	            	printf("��Ҫ����ѡ��\n1.����\n2.����ʱ��\n3.�˳�\n");
                	scanf("%d",&choose);
                	getchar();
                	if(choose<1||choose>3)
                	printf("������ţ�������ѡ��\n");
            	}
            	if(choose==3||choose==1)
            	{
            		timecheck=NULL;
            			datecheck=2;
				}
			}
			if(datecheck==1)//����������֮��
        	{
        		strcpy(order5->ordate,orderdate);
        		timecheck=shijianpanduan(orderdate,site5);//ʱ����ж��Ƿ�ѡ��ɹ������ɹ�timecheck�к��п�ʼʱ��ͽ���ʱ��
                 if(timecheck==NULL)//ʱ��ѡ��ʧ��
			 {
			 	choose=0;
			 	 while(choose<1||choose>3)//ѭ���ж�ѡ����ѡ����Ŀ
            	{
	            	printf("��Ҫ����ѡ��\n1.����\n2.����ʱ��\n3.�˳�\n");
                	scanf("%d",&choose);
                	if(choose<1||choose>3)
                	printf("������ţ�������ѡ��\n");
            	}

			 }
			else //if(timecheck!=NULL)//ʱ��ѡ��ɹ�
			 {
			 	order5->ortimestart=timecheck->ortimestart;
			 	order5->ortimeover=timecheck->ortimeover;
			 	choose=4;//�ɼ���������
			 }
			}

    	}

    	if(choose==4)
    	{
	    	int time5;
        	time5=order5->ortimeover-order5->ortimestart+1;
         	if(cust5->balance>(site5->SIprice)*(time5+1))//�ж�����Ƿ��㹻
           	{
         		printf("���ɹ�Ԥ����\nԤ���ɹ���\n");
        		cust5->balance=cust5->balance-(site5->SIprice)*(time5+1);
        		xiugaiyue1(fNode);
        		/*���Ŀͻ��������ļ�*/
	        	strcpy(order5->cusid,cust5->id);//�����ͻ�ID����
        		strcpy(order5->siid,site5->SIid);//��������ID����
        		strcpy(order5->sista,site5->SIsta);//������������
        		order5->orprice=(site5->SIprice)*(time5+1);//�����۸�����
        		time_t t;
	            struct tm * lt;
            	time (&t);		                        //��ȡUnixʱ���
            	lt = localtime (&t);
                sprintf(order5->nowtime,"%d:%.2d:%.2d:%.2d:%.2d",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday, lt->tm_hour, lt->tm_min);
        	    //����ʱ�� ������ʱ��
        		strcpy(order5->orid,cust5->sex);

        	    return order5;//���ض�������
            }
            else
	    		{
	    		 	printf("���㣬�޷�Ԥ����\n") ;
			 	    choose=0;//����ѡ��
		        }

    	}
    	while(choose<1||choose>3)
    	{
	    	printf("��Ҫ����ѡ��\n1.����\n2.����ʱ��\n3.�˳�\n");
        	scanf("%d",&choose);
        	if(choose<1||choose>3)
        	printf("������ţ�������ѡ��\n");
    	}

		if(choose==3)
    	    {order5=NULL;
    	   return order5;
        	}

	}
}





int panduannianling5(CUST *cust5,SITE *site5)//�ж����� ���ͻ��������ѡ����������
{
	if(cust5->age>site5->SIagemax)
	{
		printf("�������䳬���ó������涨��������䣬�޷�ԤԼ��������ѡ��\n");
		system("pause");
		system("cls");
		return 1;//����ֵ��Ϊ3 ������ѡ�񳡵�
	}
	else if(cust5->age<site5->SIagemin)
	{
		printf("��������С�ڸó������涨����С���䣬�޷�ԤԼ��\n������ѡ��\n");
		system("pause");
		system("cls");
		return 2;//����ֵ��Ϊ3 ������ѡ�񳡵�
	}
	else return 3;//����ֵΪ3 ���Լ���ѡ��Ԥ������

}

int dateavailable(char order[20])//�ж�����
{
    /*char order[20];
    int result = -1;

    scanf("%s",&order);
    result = ordervailable(order);
    printf("%d",result);
    */
    time_t t;
	struct tm * lt;
	time (&t);
	lt = localtime (&t);
    char time2[20];
    char time1[20];
	char year[5];
    char  mon[5];
    char  day[5];
    sprintf(year,"%d",lt->tm_year+1900);
    sprintf(mon,"%d",lt->tm_mon+1);
    sprintf(day,"%d",lt->tm_mday);
    sprintf(time1,"%d:%d:%d",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday);
    switch(atoi(mon))
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        if((atoi(day)) > 24)
        {
            sprintf(time2,"%d:%d:%d",lt->tm_year+1900, lt->tm_mon+2, 7-31+(lt->tm_mday));
        }
        else
        {
            sprintf(time2,"%d:%d:%d",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday+7);
        }
    case 4: case 6: case 9: case 11:
        if((atoi(day)) >23)
        {
            sprintf(time2,"%d:%d:%d",lt->tm_year+1900, lt->tm_mon+2, 7-30+(lt->tm_mday));
        }
        else
        {
            sprintf(time2,"%d:%d:%d",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday+7);
        }
    case 2:
    	if(atoi(year)%400==0||(atoi(year)%4==0&&!(atoi(year)%100==0)))        //�жϣ����������2����29��
        {
            if((atoi(day)) >22)
        {
            sprintf(time2,"%d:%d:%d",lt->tm_year+1900, lt->tm_mon+2, 7-29+(lt->tm_mday));
        }
        else
        {
            sprintf(time2,"%d:%d:%d",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday+7);
        }
        }
        else                                                                   //���������� 2����28��
        {
            if((atoi(day)) >21)
        {
            sprintf(time2,"%d:%d:%d",lt->tm_year+1900, lt->tm_mon+2, 7-28+(lt->tm_mday));
        }
        else
        {
            sprintf(time2,"%d:%d:%d",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday+7);
        }
        }
    }

    if((strcmp(time2,order)>=0)&&(strcmp(time1,order)<0))
    {
		  printf("��ѡ������Ԥ����ʱ���\n");//ʱ���������ڣ�����Ԥ�����ڵ���Ԥ�������У���������
		  return 1;
	}
     else
    {
	    printf("�Բ�����ֻ��ѡ�������ڵ����ڡ�������ѡ��\n");
	    return 0;//���ؿ�����
	}


}

ORDER *shijianpanduan(char ordate[30],SITE *site5)//ʱ���ж� ������ѡ����
{
	ORDER *orderhead=createinf4();//����Ԥ����Ϣ�������orderhead��
	ORDER *ordercheck=(ORDER*)malloc(sizeof(ORDER));
	int n=0;
	int i=0;
	int j=0;
	int temp1;
	int temp2;
	int a[50],b[50];
	int c,d;
	a[0]=22;//��ʼʱ��ĳ�ʼֵ
	b[0]=5;//����ʱ��ĳ�ʼֵ
	while(orderhead!=NULL)//���ѱ�Ԥ���Ŀ�ʼʱ��a[]�ͽ���ʱ��b[]����������
	{
		if(strcmp(site5->SIid,orderhead->siid)==0)
		{

		if(strcmp(orderhead->ordate,ordate)==0)
		{
			a[n]=orderhead->ortimestart;
			b[n]=orderhead->ortimeover;
			n++;
		}
		}
	    orderhead=orderhead->next;
	}
	if(n>0)
	n=n-1;
	for(i=n;i>=0;i--)//ð������ ��С����
    {
        for(j=0;j<i;++j)
        {
            if(a[j]>a[j+1])
            {
                temp1=a[j];
                a[j]=a[j+1];
                a[j+1]=temp1;
                temp2=b[j];
                b[j]=b[j+1];
                b[j+1]=temp2;
            }
        }
    }

    int check=1;
    while(check==1)//ѭ�����ظ�ѡ��ʱ��
    {

        printf("����ѡ���ʱ���У�\n");//��������ʱ��
        if(a[0]>6)
        {
        	printf("6��-%d��\n",a[0]);
        	if(b[0]>=a[0]&&n==0)
        	{
        		printf("%d��-22��\n",b[0]+1);
			}
    		for(j=0;j<n;j++)
  	    	{
	    		if(b[j]+1<a[j+1])
    			printf("%d��-%d��\n",b[j]+1,a[j+1]);
     		}
     	}
    	else if(a[0]==6)
    	{
    		if(n==0)
    		{
    			printf("%d��-22��\n",b[n]+1);
			}
    		for(j=0;j<n;j++)
    		{
    			if(b[j]+1<a[j+1])
    			printf("%d��-%d��\n",b[j]+1,a[j+1]);
	    	}

    	}
     	if(b[n]<21&&b[n]>6&&n!=0)
    	printf("%d��-22��\n",b[n]+1);


    	printf("��ѡ������Ԥ����ʱ�䣺__�㵽__��\n");
    	scanf("%d%d",&c,&d);
    	d--;//����ʱ��ͻ���д�� ��7 ���൱����д�����е� 6�㣬����Ҫ��¼-1

		if(c<6||d>21||c>d)//�ж�ʱ���Ƿ����
    	{
		    check=3;
			getchar();
    		while(check<1||check>2)
			{
    	     	printf("�Բ��𣬸�ʱ�䲻��ԤԼ��\n");
    	    	printf("1.����ѡ��ʱ��\n2.�˳�\n");
        		scanf("%d",&check);

        	}

    	}
    	else check=3;
    	for(i=0;i<=n&&check==3;i++)
    	{
			if((c>=a[i]&&c<=b[i])||(d>=a[i]&&d<=b[i]))
    		{
    			getchar();
    			do
    			{
	    		printf("�Բ�����ѡ���ʱ���ѱ�Ԥ����������ѡ��\n");
	    		printf("1.����ѡ��ʱ��\n2.�˳�\n");
    		    scanf("%d",&check);
	    		break;
	    		}while(check<1||check>2);
	    	}

	    	else
	    	{
	    		printf("ʱ��ɹ�ѡ��\n");

	    		ordercheck->ortimestart=c;
	     		ordercheck->ortimeover=d;
	     		return ordercheck;//���غ��п�ʼʱ��ͽ���ʱ�������
	     	}
    	}

    }
	ordercheck=NULL;
	return ordercheck;

}




int jixuyuding5()
{int NW5=0;
        do
		{
		    printf("************* �Ƿ��������Ԥ��? ***************** \n\n\n");
	    	printf("**********        1.��        ************* \n\n\n");
	    	printf("**********        2.��        ************* \n\n");
	    	scanf("%d",&NW5);
	    	getchar();
	    	if(NW5==1)
	        {
	        	return 1;
	        }
	        else if(NW5==2)
	        	return 2;
	        else
	       	printf("����������������ȷ��š�\n");//�������ݴ���
	            system("pause");
	            system("cls");

	    }   while((NW5!=1)||(NW5!=2));

}


void dachudingdan(ORDER *finalorder,int limit)
{
	ORDER *ordertemp=(ORDER*)malloc(sizeof(ORDER));
	ordertemp=finalorder;

    printf("����Ԥ��%d������\n",limit);
   /* while(ordertemp!=NULL)//һ���������Ԥ����Ϣ
    {
        printf("����IDΪ��%s  Ԥ������Ϊ��%s  Ԥ��ʱ��ӣ�%d�㵽%d��  �����ܶ�Ϊ��%.2lf\n",ordertemp->siid,ordertemp->ordate,ordertemp->ortimestart,ordertemp->ortimeover+1,ordertemp->orprice);
        ordertemp=ordertemp->next;
	}
   */

}






void yudingliangchaxun1() //����Ԥ�����Ӵ�Сͳ�Ƴ�����Ϣ
{
	int i3=0,j3=0;
	int i=0,j=0;
	int a3,k3=0,m3=0;
	FILE *fp3;
	fp3=fopen("������Ϣ.txt","r");

	char SIid3[NUMBER][50];//���峡����Ϣ�����
    char namr3[NUMBER][50];//��������
	char SIarea3[NUMBER][50];//���峡����Ϣ������
	char SIsta3[NUMBER][50];//���峡����Ϣ�����ݣ����ⳡ��
	char SIsport3[NUMBER][50];//���峡����Ϣ���˶�����
    char SIagemax3[NUMBER][50];//���峡����Ϣ����������
	char SIagemin3[NUMBER][50];//���峡����Ϣ����������
	char SIprice3[NUMBER][50];//���峡����Ϣ�����
	double SIord3[50];//���峡����Ϣ��������

	int temp;
	char buff[100];


	while(fscanf(fp3,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%lf\n",SIid3[i3],namr3[i3],SIarea3[i3],SIsta3[i3],SIsport3[i3],SIagemin3[i3],SIagemax3[i3],SIprice3[i3],&SIord3[i3])!=EOF)
	{
	 i3++;
	}



	for(i=0;i<i3;i++)
	{
		for(j=0;j<i3-i;j++)
		{
			if(SIord3[j]<SIord3[j+1])
			{
				strcpy(buff,SIid3[j]);//    1
                strcpy(SIid3[j],SIid3[j+1]);
                strcpy(SIid3[j+1],buff);

                strcpy(buff,namr3[j]);//    2
                strcpy(namr3[j],namr3[j+1]);
                strcpy(namr3[j+1],buff);

                strcpy(buff,SIarea3[j]);//    3
                strcpy(SIarea3[j],SIarea3[j+1]);
                strcpy(SIarea3[j+1],buff);

                strcpy(buff,SIsta3[j]);//     4
                strcpy(SIsta3[j],SIsta3[j+1]);
                strcpy(SIsta3[j+1],buff);

                strcpy(buff,SIsport3[j]);//     5
                strcpy(SIsport3[j],SIsport3[j+1]);
                strcpy(SIsport3[j+1],buff);


                strcpy(buff,SIagemin3[j]);//     6
                strcpy(SIagemin3[j],SIagemin3[j+1]);
                strcpy(SIagemin3[j+1],buff);

                strcpy(buff,SIagemax3[j]);//      7
                strcpy(SIagemax3[j],SIagemax3[j+1]);
                strcpy(SIagemax3[j+1],buff);

                strcpy(buff,SIprice3[j]);//      8
                strcpy(SIprice3[j],SIprice3[j+1]);
                strcpy(SIprice3[j+1],buff);

				temp=SIord3[j];
				SIord3[j]=SIord3[j+1];
				SIord3[j+1]=temp;

			}
		}
	}
		for(k3=0;k3<i3;k3++)
		{

             m3++;
             if(m3==1)
             {
             	printf("���ݱ��\t��������\t������������\t  �������\t   �˶���Ŀ\t׼����С����\t׼���������\tÿСʱ���\t��ʷԤԼ����\n");
			 }
	 printf("%-15s\t%-20s\t%-15s\t%-15s\t%-15s\t%-15s\t%-15s\t\%-15s\t%-15.0lf\t\n",SIid3[k3],namr3[k3],SIarea3[k3],SIsta3[k3],SIsport3[k3],SIagemin3[k3],SIagemax3[k3],SIprice3[k3],SIord3[k3]);

		}

		fclose(fp3);
		system("pause");
			system("cls");





 }



/*int kongyuchaxun3()
{

	int i3=0,j3=0;
	int a3,k3=0,m3=0;
	FILE *fp3;
	fp3=fopen("Ԥ����Ϣ.txt","r");

    char orid[NUMBER][40];//������
	char cusid[NUMBER][20];//�ͻ�ID
	char nowtime[NUMBER][30];//�µ�����ʱ��
	char siid[NUMBER][30];//����ID
	char sista[NUMBER][30];//��������
	double orprice[50];//�����۸�
	char ordate[NUMBER][30];//Ԥ������
	int ortimestart[50];//Ԥ����ʼʱ��
	int ortimeover[50];//Ԥ������ʱ��
	char ID[50];//�����id��

	int rqc;//���ڲ�
	int dqyf;//��ǰ�·�
	int dqjh;//��ǰ�Ǽ���

	int m,l,u;//ѭ������
	int chaxunriqi;//��Ҫ��ѯ������


//��һ��������ϵͳ���·�����ݵĳ���
	time_t timep;
	struct tm *p;
	time (&timep);
	p=gmtime(&timep);
	//printf("%d\n",1+p->tm_mon);//��ȡ��ǰ�·�,��Χ��0-11,����Ҫ�� 1
	//printf("%d\n",p->tm_mday);//��ȡ��ǰ�·�����,��Χ��1-31



//�ڶ�����������ǰ���ڵĶ�ά���飻
	int biaoge[7][16]={
    {6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
    {6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
    {6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
	{6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
	{6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
	{6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
	{6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21}
		 			};
//*************************************************************************************************************
		while(fscanf(fp3,"%s\n%s\n%s\n%s\n%s\n%lf\n%s\n%d\n%d\n",orid[i3],cusid[i3],nowtime[i3],siid[i3],sista[i3],&orprice[i3],ordate[i3],&ortimestart[i3],&ortimeover[i3])!=EOF)
	{
	 i3++;
	}


    printf("��������Ҫ��ѯ�ĳ���ID :");
	gets(ID);



	if(strcmp(siid[k3],ID)!= 0)
	{
		printf("�������");
		return 1;
	}

	else
	{

	for(k3=0;k3<i3;k3++)
	{
		if (strcmp(siid[k3],ID) == 0)
		{


		dqyf= 1+p->tm_mon; //��ǰ�·�
		dqjh=p->tm_mday; //��ǰ����

		//printf("%d\t%d\n",ortimestart[k3],ortimeover[k3]);//������ʼʱ��ͽ���ʱ��

		//�����ǽ��ַ���ת��Ϊ�����ĳ���������ȡ�������·ݺ����ڣ���**********��ֹ��
	    char 	*p=	ordate[k3];;
		int b[80]={0},i=0,j=0,x=0; //x�൱��һ������


		for(p=ordate[k3];(*p)!='\0';p++) //�����ַ���
			{
				if(((*p)>='0')&&((*p)<='9')) //����ַ�������������
					{
						if(x==0)
							{
								b[i]=(*p)-48;
								i++;
							}
						else
						b[i-1]=b[i-1]*10+(*p)-48;
						x=1;
					}
				else
				x=0;
			}

			//printf("%d\n",b[1]);//�����·�
			//printf("%d\n",b[2]);//��������
//************************************************************************************************
		if(b[1]>dqyf) //��������·ݴ��ڵ�ǰ�·�����������30�죻
		{
			b[2]=b[2]+30;
		}

		rqc=b[2]- dqjh;//���ĵڼ���
		m=ortimeover[k3]-ortimestart[k3];//Ҫ�ļ���������ѭ������
       	for(l=0;l<m;l++)
        	{
        	biaoge[rqc][ortimestart[k3]+l-6]=0;
			}

		}


	}
		printf("�����������ѯ������ԤԼ�����0-6���죺");
		scanf("%d",&chaxunriqi);
		if(chaxunriqi<7&&chaxunriqi>=0)
		{
			printf("��ʾʱ��Ϊ����ԤԼʱ��\n");
			for(u=0;u<16;u++)
			{
				if(biaoge[chaxunriqi][u]!=0)
				printf("%d\t",biaoge[chaxunriqi][u]);
    		}
    	}
		else
		{
		printf("�������");
		return 1;
    	}


	return 0;
	}



}
*/

void chaxundingdan1(CUST *np)
{
	ORDER *np1=createinf4();
    int count1=0;
		while(np1!=NULL) //�ҵ���ͬid������ѭ��

		{
		if(strcmp(np->id,np1->cusid)==0)
		{
		count1++;
		printf("����IDΪ��%s  Ԥ������Ϊ��%s  Ԥ��ʱ��ӣ�%d�㵽%d��  �����ܶ�Ϊ��%.2lf\n",Oteding1(np1)->siid,Oteding1(np1)->ordate,Oteding1(np1)->ortimestart,(Oteding1(np1)->ortimeover)+1,Oteding1(np1)->orprice);
		}
		np1=np1->next; //�Ҳ�����ƫ���¸��ڵ�
	    }

	if(count1==0)
	{
	printf("���޶���\n");
	}

}



ORDER *Oteding1(ORDER *np1)//�ѹ˿���Ϣ�����ض��Ľڵ�¼��һ�������ṹ��
{

	ORDER *tp1;//�����ṹ��
	tp1=(ORDER*)malloc(sizeof(ORDER));//�����ڴ�

	strcpy(tp1->orid,np1->orid );
	strcpy(tp1->cusid, np1->cusid);
	strcpy(tp1->nowtime,np1->nowtime);
	strcpy(tp1->siid,np1->siid );
	strcpy(tp1->sista,np1->sista);
	strcpy(tp1->ordate,np1->ordate);
	tp1->orprice=np1->orprice;
	tp1->ortimestart=np1->ortimestart;
	tp1->ortimeover=np1->ortimeover;

	tp1->next=NULL;

	return tp1;


}



int isEmail(char *email){
	int i=1,o=1;
    char *p,*p1;
    p=strstr(email,"@");
    if(!p)return 0;
    while(*(p+i)!=32&&*(p+i)!=0){
    	if(*(p+i)=='@'){return 0;}
    	else i++;
	}
    if(*(p+1)=='.')return 0;
    if (!(p-email))return 0;
    if(*(p+1)=='@') return 0;
    if(isEmail(p)==1)return 0;
     p1=strstr(p,".");
    if(!p1)return 0;
        while(*(p1+o)!=32&&*(p1+o)!=0){
    	if(*(p1+o)=='.'){return 0;}
    	else o++;
	}
    if((p-p1)=='@' )return 0;
    if(*(p1+1)=='\0')return 0;
    if(*(p1+1)=='.')return 0;
    if(isEmail(p1)==1)return 0;

    return 1;
}


	void xiugaiyue1(CUST *fNode)
{
	FILE *outFile;
	CUST *np1=fNode->next;
outFile=fopen("�˿���Ϣ.dat","w+");
	    while(np1!=NULL)
	    {
		fprintf(outFile,"%-9s\n%-9s\n%-9s\n",np1->id,np1->customer_name,np1->sex);
	 	fprintf(outFile,"%-10d\n%-10d\n%-9s\n%-14s\n",np1->age,np1->phonenumber,np1->password,np1->mail);
	 	fprintf(outFile,"%-5.2lf\n%-9s\n%-10d\n",np1->balance,np1->place,np1->time);
	 	np1=np1->next;
		}

	 fclose(outFile);



}



double cancleorder(CUST *cust5)//ɾ������  ���ͻ��������
{


    double price=0;
    int i5 = 1;
	int j = 0;
	int k = -1;
	int check = 0;
	int  cancle;
	char i[50];
	time_t t;
	struct tm *lt;
	time(&t);		                        //��ȡUnixʱ���
	lt = localtime(&t);	                //ת��ʱ��ṹ
    char avitime[20];
    char time4[20];

	FILE *out;
   	ORDER *temp= (ORDER*)malloc(sizeof(ORDER));
	ORDER *order5 = (ORDER*)malloc(sizeof(ORDER));
	ORDER *orderhead = (ORDER*)malloc(sizeof(ORDER));
	ORDER *order4 = (ORDER*)malloc(sizeof(ORDER));
    ORDER *order4head = (ORDER*)malloc(sizeof(ORDER));

    orderhead = createinf4();

    order5 = orderhead;/*����Ԥ����Ϣ�������order5��*/
    order4 = NULL;
    temp=orderhead;



    while(order5!=NULL)
    {
        if(strcmp(cust5->id,order5->cusid)==0)//�ҵ����û��µ����ж�������ȫ�����
		{

			printf("\n����%d.  �������ݣ�%s  ���ر�ţ�%s   ����:%s   ʹ��ʱ��Σ�%d:00-%d:00\n",i5,order5->cusid,order5->siid,order5->ordate,order5->ortimestart,order5->ortimeover+1);
			i[j]=i5;
			i5++;
			j++;
			if(order4==NULL)
            {
                order4 = order5;
                order4head = order4;
            }
            else
            {
                order4->next = order5;
                order4 = order5;
            }

        }
        order5=order5->next;
    }
    if(j==0){
        return -1;
    }
    i5--;
    j--;


//orderhead = createinf4();
order4 = order4head;
	printf("\n%d��          ȡ������",i5+1);
    while(check == 0)
	{
    	printf("\n\n����������Ҫȡ���Ķ�����Ż�ȡ��������ţ�\n");

    	scanf("%d",&cancle);
    	if( cancle > i5+1 ||cancle <= 0)
    	{
		    printf("��Ч������ţ����������룡\n");
		    continue;
		}
		else if (cancle==(i5+1))
		return -2;
    	else
        {
        for(k = 0;k < i5; k++)
        {

            if(i[k] == cancle )
            {
                printf("\n\n�ҵ��ö���������ɾ���Ķ�����ϢΪ\n");
                printf("\n����%d.  �������ݣ�%s  ���ر�ţ�%s   ����:%s   ʹ��ʱ��Σ�%d:00-%d:00 %.2lf\n",i[k],order4->sista,order4->siid,order4->ordate,order4->ortimestart,order4->ortimeover+1,order4->orprice);
                check = 1;
                break;
            }
            order4=order4->next;
        }

}
}
price = order4->orprice;printf("%.2lf",price);
    sprintf(avitime,"%d:%d:%d:%d:%d",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday+1, lt->tm_hour, lt->tm_min);//��ȡ��ʱ��Ϊ��ǰʱ��+1��
    printf(avitime,"%d:%d:%d:%d:%d",lt->tm_year+1900, lt->tm_mon+1, lt->tm_mday+1, lt->tm_hour, lt->tm_min);
	sprintf(time4,"%s:%d:00",order4->ordate,order4->ortimestart);
    printf("\n�ö���Ԥ��ʹ��ʱ��Ϊ%s\n",time4);
    if(strcmp(time4,avitime)<0)
        printf("\n��ֻ��ȡ����Ԥ��ʱ��24Сʱ֮ǰ�Ķ�����\n");
        else
        {


            out=fopen("Ԥ����Ϣ.txt","w");
   	        if(out==NULL)
	        {
                printf("\n�޷����ļ�!\n");
                exit(1);
            }
            if(strcmp(orderhead->cusid,order4->cusid)==0&&strcmp(orderhead->siid,order4->siid)==0&&orderhead->orprice==order4->orprice&&strcmp(orderhead->nowtime,order4->nowtime)==0&&strcmp(orderhead->ordate,order4->ordate)==0)      //��ɾ���������ͷ
            {
                orderhead=orderhead->next;
                free(order4);


            }


            else         //��ɾ���Ķ������в�
            {
            //printf("%s",order4->nowtime);
                while(strcmp(temp->next->cusid,order4->cusid)!=0||strcmp(temp->next->siid,order4->siid)!=0||temp->next->orprice!=order4->orprice||strcmp(temp->next->nowtime,order4->nowtime)!=0||strcmp(temp->next->ordate,order4->ordate)!=0)
                    {
                        temp=temp->next;
                    }
                temp->next=order4->next;
                free(order4);


            }
            printf("\nɾ���ɹ���\n");
            while(orderhead!=NULL)
            {
          fprintf(out,"%s\n",orderhead->orid);
          fprintf(out,"%s\n",orderhead->cusid);
          fprintf(out,"%s\n",orderhead->nowtime);
          fprintf(out,"%s\n",orderhead->siid);
          fprintf(out,"%s\n",orderhead->sista);
          fprintf(out,"%.2f\n",orderhead->orprice);
          fprintf(out,"%s\n",orderhead->ordate);
          fprintf(out,"%d\n",orderhead->ortimestart);
          fprintf(out,"%d\n",orderhead->ortimeover+1);


              orderhead=orderhead->next;


            }


    	    fclose(out);
    	    return price;
}
}

void  kongyuchaxun3()
{

int i3=0,j3=0;
	int a3,k3=0,m3=0;
	FILE *fp3;
	fp3=fopen("Ԥ����Ϣ.txt","r");

    char orid[NUMBER][40];//������
	char cusid[NUMBER][20];//�ͻ�ID
	char nowtime[NUMBER][30];//�µ�����ʱ��
	char siid[NUMBER][30];//����ID
	char sista[NUMBER][30];//��������
	double orprice[50];//�����۸�
	char ordate[NUMBER][30];//Ԥ������
	int ortimestart[50];//Ԥ����ʼʱ��
	int ortimeover[50];//Ԥ������ʱ��
	char ID[50];//�����id��

	int rqc;//���ڲ�
	int dqyf;//��ǰ�·�
	int dqjh;//��ǰ�Ǽ���

	int m,l,u;//ѭ������
	int chaxunriqi;//��Ҫ��ѯ������
	int a1,b1=0,c1;//ѭ������
	int i1=0,j1,k1;

//��һ��������ϵͳ���·�����ݵĳ���
	time_t timep;
	struct tm *p;
	time (&timep);
	p=gmtime(&timep);
	//printf("%d\n",1+p->tm_mon);//��ȡ��ǰ�·�,��Χ��0-11,����Ҫ�� 1
	//printf("%d\n",p->tm_mday);//��ȡ��ǰ�·�����,��Χ��1-31



//�ڶ�����������ǰ���ڵĶ�ά���飻
	int biaoge[7][16]={
    {6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
    {6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
    {6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
	{6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
	{6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
	{6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
	{6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21}
		 			};
//*************************************************************************************************************
		while(fscanf(fp3,"%s\n%s\n%s\n%s\n%s\n%lf\n%s\n%d\n%d\n",orid[i3],cusid[i3],nowtime[i3],siid[i3],sista[i3],&orprice[i3],ordate[i3],&ortimestart[i3],&ortimeover[i3])!=EOF)
	{
	 i3++;
	}

	a1=i3;
    printf("��������Ҫ��ѯ�ĳ���ID :");
	gets(ID);
/*ID���Ⱥ�i3���Ѿ�¼����ĳ���ID���жԱȣ�forѭ��ѭ��i3�Σ��ҵ��Ļ��б����h��һ��
  1.����У����г���
  2.���û�У�������������ID���жԱ�
  ��1��.�������ͬ�����ó���Ϊ��7��ȫʱ�䶼����Ԥ��
  ��2��.���û����ͬ�������  ��Ǹ��û������ѯ�ĳ���ID��

*/

	for(i1=0;i1<a1;i1++)
	{
		if (strcmp(siid[i1],ID) == 0)//�ҵ�����¼�볡����ͬ��ID
		b1++;		//�����б������
	}

	if(b1>=1)
	{
		for(k3=0;k3<i3;k3++)
	{
		if (strcmp(siid[k3],ID) == 0)//�ҵ�����¼�볡����ͬ��ID
		{


		dqyf= 1+p->tm_mon; //��ǰ�·�
		dqjh=p->tm_mday; //��ǰ����

		//printf("%d\t%d\n",ortimestart[k3],ortimeover[k3]);//������ʼʱ��ͽ���ʱ��

		//�����ǽ��ַ���ת��Ϊ�����ĳ���������ȡ�������·ݺ����ڣ���**********��ֹ��
	    char 	*p=	ordate[k3];;
		int b[80]={0},i=0,j=0,x=0; //x�൱��һ������


		for(p=ordate[k3];(*p)!='\0';p++) //�����ַ���
			{
				if(((*p)>='0')&&((*p)<='9')) //����ַ�������������
					{
						if(x==0)
							{
								b[i]=(*p)-48;
								i++;
							}
						else
						b[i-1]=b[i-1]*10+(*p)-48;
						x=1;
					}
				else
				x=0;
			}

			//printf("%d\n",b[1]);//�����·�
			//printf("%d\n",b[2]);//��������
//************************************************************************************************
			if( b[1]>dqyf&&(b[1]==1||b[1]==3||b[1]==5||b[1]==7||b[1]==8||b[1]==10||b[1]==12))//��������·ݴ��ڵ�ǰ�·��Ҷ����·�Ϊ���·�
		{
			b[2]=b[2]+31;
		}
		if( b[1]>dqyf&&(b[1]==4||b[1]==6||b[1]==9||b[1]==11 ))//��������·ݴ��ڵ�ǰ�·��Ҷ����·�ΪС�·�
		{
			b[2]=b[2]+30;
		}
		if( b[1]>dqyf&&b[1]==2)	// ��������·ݴ��ڵ�ǰ�·��Ҷ����·�2�·�
		{
			b[2]=b[2]+28;
		}

		rqc=b[2]- dqjh;//���ĵڼ���
		m=ortimeover[k3]-ortimestart[k3];//Ҫ�ļ���������ѭ������
       	for(l=0;l<m;l++)
        	{
        	biaoge[rqc][ortimestart[k3]+l-6]=0;
			}

		}

	}
		printf("�����������ѯ������ԤԼ�����0-6���죺");
		scanf("%d",&chaxunriqi);
		if(chaxunriqi<7&&chaxunriqi>=0)
		{
			for(u=0;u<16;u++)
			{
				if(biaoge[chaxunriqi][u]!=0)
				printf("%d\t",biaoge[chaxunriqi][u]);
    		}
    	}
		else
		{
		printf("�������");

    	}
	}



	if(b1==0)
	{
		SITE *first=NULL;
		first=createinf2();
		traversal(first,ID);

	}






}




void traversal(SITE *first,char id[])//traversal every node           ����
{
	int i=0;
	SITE *np = first;
	while(np != NULL)
	{
		//	if (strcmp(siid[k3],ID) == 0)
		if (strcmp(np->SIid,id) == 0)

			i=i+1;


		//printStudent(np);
		np = np->next;
	}
	if(i>=1)
	{
	printf("�ó���Ϊ��7��ȫʱ�䶼����Ԥ��");
	}
	else
	{
	printf("��Ǹ��û������ѯ�ĳ���ID");
	}

}



void xiugaiguke1(CUST *fNode)
{
	FILE *outFile;

	CUST *p1;
	p1=fNode;
	CUST *np=fNode;
	CUST *np1=fNode->next;
	char id1[NUMBER];
	char names[NAMELEN];
	char ids[NUMBER];
	char sexs[NUMBER];
	char mails[NUMBER];
	char passwords[NUMBER];
	char places[NUMBER];
	char phonenumbers[NUMBER];
	double balances;
	int times;
	int ages;
    int count1=0;
   int y=0;
   int yk1=0;
	int NL1;
	printf("���������޸Ĺ˿�ID:\n");
	scanf("%s",id1);
	getchar();
	while(np!=NULL&&(strcmp(np->id,id1)!=0))
	{
		np=np->next;

	}
	if(np==NULL)
	printf("�޴��û�ID");
	if(np!=NULL)
	{
			printf("             �������޸ĺ����Ϣ��          \n\n");

			do{
			    int count1=0;
				printf("                   �û�ID                \n\n");
				gets(ids);
				int lenK1;
		 		lenK1=strlen(ids);

		while(p1!=NULL)//����ID
	  	{


			if((strcmp(p1->id,ids)==0)&&count1==0)
			{   count1++;
				printf("���û�ID�Ѵ��ڣ��������޸ģ�\n");
			}

	    p1=p1->next;
		}


		if(lenK1<6||lenK1>10)

				printf("���û�ID���Ȳ���6-10�䣬�������޸ģ�\n");


		if(count1==0&&lenK1>=6&&lenK1<=10)
		{
		strcpy(np->id,ids);
		yk1=1;
		break;
		}
			}  while(yk1==0);


				printf("                   �û�����               \n\n");
				gets(names);

			do{
				char n1;
				printf("                ������ѡ��1 Ů����ѡ��2             \n\n");
				scanf("%c",&n1);
				getchar();
				if(n1==49){strcpy(sexs,"male");	break;}
				else if(n1==50){strcpy(sexs,"female");break;}
				else {printf("�������룬������\n");}
			  }			while(1);

				printf("                   �û�����                \n\n");
				scanf("%d",&ages);
			do{
	         	printf("                   �û��绰               \n\n");
				scanf("%s",&phonenumbers);
				int lenN1=0;
				lenN1=strlen(phonenumbers);
				if(lenN1!=11)
					printf("������绰Ϊ%dλ��������11λ�淶��������ע��\n",lenN1);

				else
				break;
			  }
			    while(1);

				getchar();
				printf("                   �û�����                \n\n");
				gets(passwords);
				while(1)
			{
	    		printf("                   �û�����                \n\n");
				gets(mails);
	    		if(isEmail(mails)==1)
				{
					break;
				}
				printf("�����ʽ������\n");
			}
				printf("                   �û���ַ                \n\n");
				gets(places);
				printf("                   �û����                \n\n");
				scanf("%lf",&balances);
				printf("                   �û�ΥԼ����                \n\n");
				scanf("%d",&times);

				    strcpy(np->customer_name,names);
	    			strcpy(np->id,ids);
					strcpy(np->sex,sexs);
					strcpy(np->mail,mails);
					strcpy(np->password,passwords);
					strcpy(np->place,places);
					strcpy(np->phonenumber,phonenumbers);
					np->age=ages;
					np->balance=balances;
					np->time=times;





	   outFile=fopen("�˿���Ϣ.dat","w+");
	    while(np1!=NULL)
	    {
		fprintf(outFile,"%-9s\n%-9s\n%-9s\n",np1->id,np1->customer_name,np1->sex);
	 	fprintf(outFile,"%-10d\n%-13s\n%-9s\n%-14s\n",np1->age,np1->phonenumber,np1->password,np1->mail);
	 	fprintf(outFile,"%-5.2lf\n%-9s\n%-10d\n",np1->balance,np1->place,np1->time);
	 	np1=np1->next;
		}

	 fclose(outFile);
	  printf("�ɹ��޸ģ�\n");
	}



}

