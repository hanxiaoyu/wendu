Enter file contents here

#include<iostream>
using namespace std;
float main()
{
        int i,j;
        float c,f,a;
        cout<<"是否要进行转换操作（是输入1，否输入0）"<<endl;
        cin>>i;
        while(i==1)
        {
        
        cout<<"请选择转换方式：摄氏转换输入1，温度转换输入2"<<endl;
        cin>>j;
        switch(j)
        {
    case 1:
                {
                    cout<<"请输入摄氏温度c："<<endl;
                    cin>>c;
                    f=9.0/5.0*c+32.00;
                        a=f;
                
                }
                break;
        case 2:
                {
                        cout<<"请输入华氏温度f："<<endl;
                    cin>>f;
                    c=5.0/9.0*(f-32.00);
                        a=c;
                    
                }
                break;
        default:
                cout<<"输入错误，请重新选择！"<<endl;
        }
        cout<<"转换结果为："<<a<<endl;
        cout<<"是否继续（是输入1，否输入0）"<<endl;
    cin>>i;
        }
 
}

 
 


 
   
 
