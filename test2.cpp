/**
 * �ļ�����
 * ��  ����
 * ��  �ߣ�
 * ʱ  �䣺
 * ��  Ȩ��
 */
 #include <iostream>//�Ҽ����Կ��ļ�����
 #include<cstdio>//�����������printf
 #include<cmath>//����ƽ��
 #include<iomanip>//��������ľ���
 using namespace std;
 int main()
 {

    /* //�ڶ��¿κ���ϰ
     int A,B,C;
     cout<<"input a munber A"<<endl;
     cin>>A;
     cout<<"input a munber B"<<endl;
     cin>>B;
     cout<<"input:"<<endl
         <<"A="<<A<<endl
         <<"B="<<B<<endl;
     C=A;
     A=B;
     B=C;
     cout<<"exchange:"<<endl
         <<"A="<<A<<endl
         <<"B="<<B<<endl;
         char letter;
         cout<<"input a English letter:"<<endl;
         cin>>letter;
         if(letter>=65&&letter<=90)
         {
             letter=letter+32;
             cout<<"output:"<<endl<<letter<<endl;
         }

         else if(letter>=97&&letter<=122)
         {
             letter=letter-32;
             cout<<"output:"<<endl<<letter<<endl;
         }
         else
            cout<<"4 0 4 ! !"<<endl;*/


            //sizeof�������������ͳ���
            cout<<"sizeof long long:"<<endl
                <<sizeof(long long)<<endl;


     const float pi=3.14;//���峣��

     float pipi =pow(pi,2);//�ɵĶ��η�
    long double xx;

    cout<<pipi<<endl;
    //�����������
    //1��ǿ��С�����
    cout<<fixed;//�̶�
    //2��������ʾ����
    cout<<setprecision(2);
    //3�����ƿ��setw��2��
    cout<<"|"<<setw(8)<<pipi<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"lalaa"<<setw(8)<<"|"<<endl;







     typedef string s;//�ı������͵�����
     s ss="sss";
     cout<<ss<<endl;

     //������ʽ���֣�
     string my_name;
     string myName;



     long long a=LONG_LONG_MAX;
     cout<<a<<endl;
//endl;����
//\n;fflush(stdin);
     return 0;
 }
