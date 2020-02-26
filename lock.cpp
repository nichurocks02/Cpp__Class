#include<cstdlib.h>
#include<iostream>
using namespace std;

class lock
{
	public:
		lock()
		{
			x=0;
			y=0;
			z=0;
		}

		void alter_lock(int a,int b, int c)
		{
			a=x;
			b=y;
			c=z;
			cout << "your new lock combination is "<<a <<b <<c<<endl;

		}

		void turn(int f, int s, int t )
		{
			
			int numbers[39];
			int i =3;
			int clockwise=0;
			int anticlockwise=39;
			for (int k=0;k<40;k++)
			{
				numbers[k]=k;
			}
			for (int j=0;j<i;j++)
			{
				if (j==0)
				{
					for (int l=0; l <=sizeof(numbers)/sizeof(*numbers); l++ )
					{
						if (l==f)
						{
							first=l;
						}
					}
					cout<<"your first number is " << first <<endl;
				}
				else if (j==1)
				{
					for (int l = f ; l <=s ; l --)
					{
						if (l<0)
						{
							l=numbers[39] + l;
							if (l == s)
							{
								second = l ;
							}
						} 

						else if (l>0) and (l==s)
						{
							second =l;
						}
					}
					cout<<"your second number is " << second <<endl;
				}

				else 
				{
					for (int l=s;l<=t;l++)
					{
						if (l>numbers[39])
						{
							l=l-numbers[39]
							if (l==t)
							{
								third =l;
							}
						}
						else if (l<numbers[39]) and (l==t)
						{
							third=l;
						}
					}
					cout <<"the third number is "<< third <<endl;
				}
		
			}
		}

		bool open()
		{
			if (x==first && y==second && z==third)
			{
				return true;
			} 
			else 
			{
				return false;
			}
		}

		void status()
		{
			if (open() == true)
			{
				cout << "lock is open"<<endl;
			}
			else
			{
				cout <<"lock is closed"<<endl;
			}
		}

		void currentnum()
		{
			cout<<"current number at the top is "<<third<<endl;
		}

	private:
		int first;
		int second;
		int third;
		int x;
		int y;
		int z;
}
