#include <iostream>

using namespace std;

int main() {

    int num;

    cin >> num; //No of TestCases

    //cout << "Input number is " << num << endl;    // Writing output to STDOUT
    for(int i=0;i<num;i++)
    {
        int gCost;
        int pCost;
        cin >>gCost;
        cin >>pCost;
        int sum=0;
        int p;
        cin >>p;
        int p1=0;
        int p2=0;
        //int temp[10][2];
        for(int j=0;j<p;j++)
        {
                int s1;int s2;
                cin>>s1;
                cin>>s2;
                p1=p1+s1;
                p2=p2+s2;
        }
        int p1Sum=0;
        int p2Sum=0;
        if(p1>p2)
            {
                if(gCost>pCost)
                {
                    p1Sum=(pCost*p1);
                    p2Sum=(gCost*p2);
                }
                else
                {
                    p1Sum=(gCost*p1);
                    p2Sum=(pCost*p2);
                }
            }
            else
                {
                    if(gCost>pCost)
                    {
                        p2Sum=(pCost*p2);
                        p1Sum=(gCost*p1);
                    }
                    else
                    {
                        p2Sum=(gCost*p2);
                        p1Sum=(pCost*p1);
                    }
                }
        sum=(p1Sum+p2Sum);
        cout<<sum<<endl;
    }
}
