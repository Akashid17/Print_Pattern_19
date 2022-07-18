
#include <iostream>

using namespace std;

class PatternX
{
    public:
        void Display(int,int);
};

void PatternX::Display(int iNo1, int iNo2)
{
    if(iNo1 == 0 || iNo2 == 0)
    {
        if(iNo1 == iNo2)
        {
            cout<<"Unable to Print Pattern, Both Values are Zero"<<endl;
            return;
        }

        if(iNo1 == 0)
        {
            cout<<"Unable to Print Pattern, Rows count is Zero"<<endl;
        }

        if(iNo2 == 0)
        {
            cout<<"Unable to Print Pattern, Columns count is Zero"<<endl;
        }
    }
    else
    {
       if(iNo1 < 0)
        {
            iNo1 = -iNo1;
        }

        if(iNo2 < 0)
        {
            iNo2 = -iNo2;
        }

        char ch = '\0';
        int iCnt = 0;

        for(int i = 1; i <=iNo1; i++)
        {   
            ch = 'a';
            iCnt = 1;

            for(int j = 0; j < iNo2; j++)
            {
                if(i % 2 == 0)
                {
                    cout<<iCnt<<"\t";
                    iCnt += 2;    
                }
                else
                {
                    cout<<ch++<<"\t";
                }
                
            }
            cout<<endl;
        }
    }    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter Count of Rows and Columns"<<endl;
    cout<<"Rows\t";
    cin>>iValue1;
    cout<<"Columns\t";
    cin>>iValue2;
    cout<<endl;

    PatternX pobj;
    pobj.Display(iValue1,iValue2);

    return 0;
}