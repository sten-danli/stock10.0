//stock10.cpp


#include"constructor10.h"


Stock::Stock()
{
	cout << "Default constructor clles.\n";
	company = "Muster co: Default";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const string co, long n, double pr)
{
	cout << "Constructor using " << co << "called\n";
	company = co;
	if (n < 0)
	{
		cout << "Number of shares cant be negative;"
			<< company << "shares set to 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}

Stock::~Stock()
{
	cout << "Bye, " << company << "!\n\n";
}
void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		cout << "Number of shares purchased cant be negative. "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	if (num < 0)
	{
		cout << "Number of shares sold cant be negatie. "
			<< "Transaction is aborted.\n";
	}
	else if (num > shares)
	{
		cout << "You cant sell more than you have!"
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()
{
	/*
	using std::ios_base;
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);
	cout << "Company: " << company
		<< " Shares: " << shares << '\n'
		<< " Shares Price: $" << share_val;
	cout.precision(2);
		cout<< " Total Worth: $" << total_val << '\n';
		cout.setf(orig, ios_base::floatfield);
		cout.precision(prec);
	*/

	cout << "Company: " << company
		<< "Shares: " << shares << '\n'
		<< "Share Price: $ " << share_val
		<< "Total Worth: $ " << total_val << '\n';

}
