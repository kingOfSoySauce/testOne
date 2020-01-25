/**
 * 文件名：
 * 描  述：
 * 作  者：
 * 时  间：
 * 版  权：
 */
 #include <iostream>//右键可以看文件内容
 #include<cstdio>//加这个才能用printf
 #include<cmath>//用能平方
 #include<iomanip>//控制输出的精度
 using namespace std;
 int main()
 {

    /* //第二章课后练习
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


            //sizeof用来测数据类型长度
            cout<<"sizeof long long:"<<endl
                <<sizeof(long long)<<endl;


     const float pi=3.14;//定义常量

     float pipi =pow(pi,2);//派的二次方
    long double xx;

    cout<<pipi<<endl;
    //控制输出精度
    //1，强制小数输出
    cout<<fixed;//固定
    //2，控制显示精度
    cout<<setprecision(2);
    //3，控制宽度setw（2）
    cout<<"|"<<setw(8)<<pipi<<setw(8)<<"|"<<endl;
    cout<<"|"<<setw(8)<<"lalaa"<<setw(8)<<"|"<<endl;







     typedef string s;//改变量类型的名字
     s ss="sss";
     cout<<ss<<endl;

     //命名方式两种：
     string my_name;
     string myName;



     long long a=LONG_LONG_MAX;
     cout<<a<<endl;
//endl;等于
//\n;fflush(stdin);
     return 0;
 }
