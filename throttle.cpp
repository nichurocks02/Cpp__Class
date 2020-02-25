#include <iostream>
#include <cstdlib>
#include <typeinfo>
#include <math.h>
using namespace std;

class throttle
{
	public:
		//CONSTRUCTOR
		throttle ( int size ){
			
			top_position=size;
			cout<<"your throttle has "<<top_position<<"levels"<<endl;
		}

		//MODIFICATION MEMBER FUNCTIONS
		void shutoff();
		void shift(int amount);
		// CONSTANT MEMBER FUNCTIONS
		double flow () const;
		double current_pos () const
		{
			cout<< *ptr << endl ;
		}
		double half_flow () const
		{
			int a;
			a=position/2;
			
			return (a)/top_position ;
		}
		bool is_on() const{
			return (flow()>0);
		}
		
	private:
		int position;
		int *ptr = &position;
		int top_position;
};

void throttle::shutoff()
{
	*ptr=0;

}
void throttle::shift(int amount)
{
	position = position + amount;
	*ptr=position;
	if (position > 5 ||position <0)
	{
		cout << "your entered amount for throttle shift is invalid"<<endl;
	} 
	else
	{
		cout<< "successuflly shifted "<<*ptr<<endl;
	}
}

double throttle:: flow () const
{
	
	cout<< *ptr/double(top_position)<<endl;

}

int main()
{
	throttle sample(5);
	int user_input;

	cout<<"where would you like to set the throttle"<<endl;
	cout<<"please select a number from + 0 to 5 for increasing and - for decreasing"<<endl;
	cin>>user_input;
	sample.shutoff();
	sample.shift(user_input);
	sample.flow();
	sample.current_pos();
	return EXIT_SUCCESS;

}