
#include <iostream>
using namespace std;

class clsCalculator
{
private:
	float _Result = 0;
	float _LastNumber = 0;
	string _LastOperation;
	float _PerviousResult = 0;

	bool _IsZero(int Number)
	{
		return (Number == 0);
	}


public:
	
	void Add(int Number)
	{
		_PerviousResult = _Result;
		_LastNumber = Number;
		_LastOperation = "Adding";
		_Result += Number;
	}

	void Subtracting(int Number)
	{
		_PerviousResult = _Result;
		_LastNumber = Number;
		_LastOperation = "Subtracting";
		_Result -= Number;
	}

	void Divide(int Number)
	{
		_LastNumber = Number;

		if (_IsZero(Number))
		{
			Number = 1;
		}
		_PerviousResult = _Result;
		_LastOperation = "Dividing";
		_Result /= Number;
		
	}

	void CancelLastOperation()
	{
		_LastNumber = 0;
		_LastOperation = "Cancelling Last Operation";
		_Result = _PerviousResult;
	}

	void Multiply(int Number)
	{
		_PerviousResult = _Result;
		_LastNumber = Number; 
		_LastOperation = "Multiplying";
		_Result *= Number;
	}

	void Clear()
	{
		_PerviousResult = _Result;
		_LastOperation = "Clear ";
		_Result = 0;
	}

	void PrintResult()
	{
		cout << "Result";
		cout << "After " << _LastOperation << " " << _LastNumber << " is:" << _Result << endl;

	}

};

int main()
{
	clsCalculator Calculator;

	Calculator.Add(10);
	Calculator.PrintResult();

	Calculator.Add(100);
	Calculator.PrintResult();

	Calculator.Subtracting(20);
	Calculator.PrintResult();

	Calculator.Divide(0);
	Calculator.PrintResult();

	Calculator.Divide(2);
	Calculator.PrintResult();

	Calculator.Multiply(3);
	Calculator.PrintResult();

	Calculator.CancelLastOperation();
	Calculator.PrintResult();

	Calculator.Clear();
	Calculator.PrintResult();

}