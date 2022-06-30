
using namespace std;
#include <iostream>
#include <fstream>
int main()
{
	fstream f;
	string n;
	float t,a,l, suml;
	int i,x;
	f.open("text.txt",ios::app);
	for(int i=1;i<=7;i++)
	{
		f<<i<<endl;
		cout<<"name istgah?"<<endl;
		cin >>n;
		f<<n<<endl;
		cout<<"tule joqrafia?"<<endl;
		cin >>t;
		f<<t<<endl;
		cout<<"arze joqrafia?"<<endl;
		cin >>a;
		f<<a<<endl;
		cout<<"chnd larze?"<<endl;
		cin >>x;
		f<<x<<endl;
		if(x<1)
		{
    	cout<<"larzei vjud nadard..."<<endl;
		}
		else
		{
		for(int j=1;j<=x;j++)
		{
		cout<<"rishter larzeye  "<<j<<"  ra vared konid"<<endl;
    	cin>>l;
		f<<l<<endl;
		}
		}	
	    }
	
               	ifstream c("text.txt");
	            float y=0,max=0,r,s;
	            int p,k=0;
	            string q;
            	for(int z=1;z<=7;z++)
    	        {
	            c>>i;
	            c>>n;
	        	c>>t;
	         	c>>a;
	        	c>>x;
	        	if(x>=0)
		        {
			    for(int j=1;j<=x;j++)
			    {
				y=l+y;
				c>>l;
		    	if(l>max)
			    {
				max=l;
				p=i;
				q=n;
				r=t;
				s=a;
			    }		
	        	}
		
		    	k=x+k;
			    cout<<"istgah: "<<n<<"\t"<<"tedade larze =   "<<x<<endl;
               	}
                }

cout<<"bzrg trin zelzele dar shahre "<<q<<"   ba toole joghrafiayie      "<<r<<"    v arze    "<<s<<" be bozorgie   "<<max<<"  etefaq oftade ast "<<endl;
cout<<"tedade larze ha"<<k<<endl;
cout<<"majoome rishter larze ha"<<y<<endl;
	

	
	
	return 0;
}