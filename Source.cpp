#include<iostream>
#include<stdlib.h>
#include<limits>
#include<math.h>
#define PI 3.141
using namespace std;
class calculation
{
private:
float x;
public:
    calculation()
    {

    }

void cosQ();
void sinQ();
void tanQ();
void coshQ();
void sinhQ();
void tanhQ();
void acosQ();
void asinQ();
void atanQ();
void expQ();
void logQ();
void log10Q();
void atan2Q();
void powQ();
void fToC();
void volume();
void area();
void mat_product();
void mat_transpose();
void mat_add();
void compoundInterest();
void simpleInterest();
    calculation operator+(calculation &ob)
    {
        calculation temp;
        temp.x=x+ob.x;
        return temp;
    }
    calculation operator*(calculation &ob)
    {
        calculation temp;
        temp.x=x*ob.x;
        return temp;
    }
    calculation operator/(calculation &ob)
    {
        calculation temp;
        temp.x=x/ob.x;
        return temp;
    }
    calculation operator-(calculation &ob)
    {
        calculation temp;
        temp.x=x-ob.x;
        return temp;
    }
    friend istream & operator>>(istream &, calculation &);
    friend ostream & operator<<(ostream &, calculation &);

};
istream & operator>>(istream &in, calculation &a)
{

    cout<<"\n Enter the DATA : ";
    in>>a.x;

    return in;
}
ostream & operator<<(ostream &out, calculation &b)
{
    float y;
    cout<<endl<<"\t\t";
    out<<y;

    return out;
}
class B
{
private:
    int y;
public:
 B()
 {

 }
   B operator%(B &ob)
    {
        B temp;
        temp.y=y%ob.y;
        return temp;
    }
    friend istream & operator>>(istream &, B &);
    friend ostream & operator<<(ostream &,  B &);
};
istream & operator>>(istream &in, B &a)
{

    cout<<"\n Enter the DATA : ";
    in>>a.y;

    return in;
}
ostream & operator<<(ostream &out, B &b)
{
    int z;
    cout<<endl<<"\t\t";
    out<<z;

    return out;
}
void calculation :: cosQ()

{
	double a, result ;
	cout<< "\n Enter the angle\n";
	cin>> a;
	result = cos(a * PI / 180);
	cout<< "The cosine of " << a << " is " << result << endl;
}

void calculation :: sinQ()

{
	double a, result ;
	cout<< "\n Enter the angle\n";
	cin>> a;
	result = sin(a * PI / 180);
	cout<< "the sine of " << a << " is " << result << endl;
}

void calculation :: tanQ()

{
	double a, result ;
	cout<< "\n Enter the angle\n";
	cin>> a;
	result = tan(a * PI / 180);
	cout<< "The tan of the " << a << " is " << result << endl;
}

void calculation :: coshQ()

{
	double a, result ;
	cout<< "\n Enter the angle\n";
	cin>> a;
	result = cosh(a);
	cout<< "The hyperbolic cosine of " << a << " is " << result << endl;
}

void calculation :: sinhQ()

{
	double a, result ;
	cout<< "\n Enter the angle\n";
	cin>> a;
	result = sinh(a);
	cout<< "The hyperbolic sine of " << a << " is " << result << endl;
}

void calculation :: tanhQ()

{

	double a, result ;
	cout<< "\n Enter the angle\n";
	cin>> a;
	result = tanh(a);
	cout<< "The hyperbolic tangent of " << a << " is " << result << endl;
}

void calculation :: acosQ()

{
	double a, result ;
	cout<< "\n Enter the angle\n";
	cin>> a;
	result = acos(a) * 180.0 / PI;
	cout<< "The arc cosine of " << a << " is " << result << endl;
}

void calculation :: asinQ()

{
	double a, result ;
	cout<< "\n Enter the angle\n";
	cin>> a;
	result = asin(a) * 180.0 / PI;
	cout<< "The arc sine of " << a << " is " << result << endl;
}

void calculation :: atanQ()

{
	double a, result ;
	cout<< "\n Enter the angle\n";
	cin>> a;
	result = tanh(a);
	cout<< "The arc tangential of " << a << " is " << result << endl;
}

void calculation :: expQ()

{
	double a, result;
	cout<< "\n Enter the number\n";
	cin>> a;
	result = exp(a);
	cout<< "The exponential value of " << a << " is = " << result << endl;
}

void calculation :: logQ()

{
	double a, result;
	cout<< "\n Enter the value to take a log \n";
	cin>> a;
	result = log(a);
	cout<< "The logarithm of " << a << " is " << result << endl;
}

void calculation :: log10Q()

{
	double a, result;
	cout<< "\n Enter the value to take a log \n";
	cin>> a;
	result = log10(a);
	cout<< "The common logarithm of " << a << " is " << result << endl;
}

void calculation :: atan2Q()

{
	double a, b, result ;
	cout<< "\n Enter the first number\n";
	cin>> a;
	cout<< "\n Enter second the number\n";
	cin>> b;
	result = atan2(a, b) * 180 / PI;
	cout<< "The arc tangent for " << a << " and " << b << " is " << result << endl;

}

void calculation :: powQ()
{
	int a, b, power;
	cout<< "\n Enter the number\n";
	cin>> a;
	cout<< "\n Enter the power\n";
	cin>> b;
	power = pow(a, b);
	cout<< "\n" << a << " Raise to power " << b << " is " << power;

}
void calculation :: fToC()
 {
	 double fahrenheit=0,celsius=0;
	cout<<" Enter the temperature in fahrenheit : ";
	cin>>fahrenheit;
     celsius = (fahrenheit-32.0)* 5.0/9.0;
     cout<<"The temperature in celsius is "<<celsius;
 }
void calculation :: volume ()
{
	double x1,x2,x3;
	int ch;
	cout<<"\n\t 1> Cube\n\t 2> Cuboid\n\t 3> Sphere\n\t 4> Cylinder";
	cin>>ch;
	switch (ch)
	{
		case 1:
		{
			cout<<"\n Enter the side length";
			cin>>x1;
			cout<<"\n The volume is "<<x1*x1*x1;break;
		}
		case 2:
		{
			cout<<"\n Enter the length , height and breadth of cuboid ";
			cin>>x1>>x2>>x3;
			cout<<"\n The volume is "<<x1*x2*x3;break;
		}
		case 3:
		{
			cout<<"\n Enter the radius";
			cin>>x1;
			cout<<"\n The volume is "<<x1*(4/3)*x1*x1*PI;break;
		}
		case 4:
		{
			cout<<"\nEnter the radius and height : ";
			cin>>x1>>x2;
			cout<<"\n The volume is "<<x1*x2*x1*PI;break;
		}
		default:
		{
			cout<<"Wrong choice entered";break;
		}
	}
}
void calculation :: area ()
{
	double x1,x2;
	int ch;
	cout<<"\n\t 1> Square \n\t 2> Rectangle\n\t 3> Circle\n\t 4> Triangle"<<endl;
	cout<<"Option : ";
	cin>>ch;
	switch (ch)
	{
		case 1:
		{
			cout<<"\n Enter the side length";
			cin>>x1;
			cout<<"\n The area is "<<x1*x1;break;
		}
		case 2:
		{
			cout<<"\n Enter the length and breadth of rectangle ";
			cin>>x1>>x2;
			cout<<"\n The area is "<<x1*x2;break;
		}
		case 3:
		{
			cout<<"\n Enter the radius";
			cin>>x1;
			cout<<"\n The area is "<<x1*x1*PI;break;
		}
		case 4:
		{
			cout<<"\n Enter the base and height";
			cin>>x1>>x2;
			cout<<"\n The area is "<<x1*x2*0.5;break;
		}
		default:
		{
			cout<<"wrong choice entered";break;
		}
	}
}
void calculation :: mat_product()
{
    int r1, c1, r2, c2, i, j, k;
    int A[5][5], B[5][5], C[5][5];
    cout << "\nEnter number of rows and columns of matrix A : ";
    cin >> r1 >> c1;
    cout << "Enter number of rows and columns of matrix B : ";
    cin >> r2 >> c2;
    if (c1 != r2)
    {
        cout << "Matrices cannot be multiplied!";
        exit(0);
    }
    cout << "Enter elements of matrix A (row-wise) : ";
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            cin >> A[i][j];
    cout << "Enter elements of matrix B (row-wise) : ";
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            cin >> B[i][j];
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < r2; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Product of matrices\n";
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
            cout << C[i][j] << "  ";
        cout << "\n";
    }
}
void calculation :: mat_transpose()
{
    int A[10][10], m, n, i, j;
    cout << "\nEnter rows and columns of matrix : ";
    cin >> m >> n;
    cout << "Enter elements of matrix (row-wise) : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
    cout << "Entered Matrix : \n ";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cout << A[i][j] << " ";
        cout << "\n ";
    }
    cout << "Transpose of Matrix : \n ";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << A[j][i] << " ";
        cout << "\n ";
    }
}
void calculation :: mat_add()
{
    int m, n, p, q, i, j, A[5][5], B[5][5], C[5][5];
    cout << "\nEnter rows and column of matrix A : ";
    cin >> m >> n;
    cout << "Enter rows and column of matrix B : ";
    cin >> p >> q;
    if ((m != p) && (n != q))
    {
        cout << "Matrices cannot be added!";
        exit(0);
    }
    cout << "Enter elements of matrix A (row-wise) : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
	cout << "Enter elements of matrix B (row-wise) : ";
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            cin >> B[i][j];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];
    cout << "Sum of matrices\n";
    for (i = 0; i < m; i++)
    {    for (j = 0; j < n; j++)
            cout << C[i][j] << "  ";
        cout << "\n";
    }
}
void calculation ::compoundInterest()
{
    float p,r,t,ci;

    cout<<"Enter Principle (Amount) :: ";
    cin>>p;
    cout<<"\nEnter Rate of Interest per annum :: ";
    cin>>r;
    cout<<"\nEnter Time Period in years :: ";
    cin>>t;

    ci = p*pow((1+r/100),t);

    cout<<"\nThe Calculated Compound Interest is = "<<ci<<"\n";

}
void calculation :: simpleInterest()
{
    float p,r,t,si,a;

    cout<<"Enter Principle (Amount) :: ";
    cin>>p;
    cout<<"\nEnter Rate of Interest per annum :: ";
    cin>>r;
    cout<<"\nEnter Time Period in years :: ";
    cin>>t;

    si=p*r*t/100;

    a=p+si;

    cout<<"\nThe Calculated Simple Interest is = "<<si<<"\n";

    cout<<"\nThe Total Amount after including Interest value = "<<a<<"\n";

}


int main()
{
	//one integer for loop control and one for function control//
	calculation c;
	int loop_ctrl=0, function_ctrl=0;
	char control='y';
	//provides user the choice between switching to normal calculator or the scientific version//
	while (control == 'y' || control == 'Y') {
		cout<< "\t\t..MENU..\n\t1.<STANDARD CALCULATOR>\n\t2.<ALL FUNCTIONS>" << endl;
		if (!(cin>> loop_ctrl))
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout<< "you have entered a wrong choice";
				}
				cout<< "\n check complete\n";
		if (loop_ctrl != 1 && loop_ctrl != 2)
		{
			cout<< "\n error wrong option entered \n" << "try again ?(y/n)";
			cin>> control;

		}
		else
		{
			while (loop_ctrl == 1)
			{
				cout<< "\n Enter desired operation using key provided in brackets '()' :\n";

				cout<< "(1) Addition \n";

				cout<< "(2) Multiplication\n";

				cout<< "(3) Subtraction \n";

				cout<< "(4) Division\n";

				//avoid infinite loop when a character is entered and corrupts the int cin//
				if (!(cin>> function_ctrl))
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max() );
					cout<<"\n you have entered wrong choice";

				}

				if (function_ctrl > 4 || function_ctrl< 1)
				{
					function_ctrl = 0;
					cout<< "\n you have entered a wrong choice\n"; break;

				}
				cout<< "\n check complete\n";
				break;


			}
			while (loop_ctrl == 2)
			{
				cout<< "Enter desired operation using key provided in brackets '()'\n scientific options key is (s.number) :\n";

				cout<< "(1)  Addition \n";

				cout<< "(2)  Multiplication\n";

				cout<< "(3)  Subtraction \n";

				cout<< "(4)  Division\n<<<<<<SCEINTIFIC OPERATIONS>>>>>>\n";

				cout<< "(5)  Remainder\n";

				cout<< "(6)  Square\n";

				cout<< "(7)  Cube\n";

				cout<< "(8)  Cosine\n";

				cout<< "(9)  Sine\n";

				cout<< "(10) Tangent\n";

				cout<< "(11) Hyperbolic tangent\n";

				cout<< "(12) Hyperbolic cosine\n";

				cout<< "(13) Hyperbolic sine\n";

				cout<< "(14) Arc cosine\n";

				cout<< "(15) Arc sine\n";

				cout<< "(16) Arc tangential\n";

				cout<< "(17) Exponent\n";

				cout<< "(18) Logarithm\n";

				cout<< "(19) Common logarithm i.e log10\n";

				cout<< "(20) Arc tangent for 2 numbers \n";

				cout<< "(21) Power\n<<<<<<MEASUREMENT AND 2D OPERATIONS>>>>>>\n";

				cout<< "(22) Farenheit to Celsius conversion\n";

				cout<< "(23) Volume of various objects (contains sub menu)\n";

				cout<< "(24) Area of various objects (contains sub menu)\n";

				cout<< "(25) Matrix multiplication\n";

				cout<< "(26) Matrix transpose\n";

				cout<< "(27) Matrix addition\n";

				cout<< "(28) Compound Interest\n";

				cout<< "(29) Simple Interest\n";

<<<<<<< HEAD
=======
				cout<<"\n\tOption : ";

>>>>>>> 676657bf8ed623f4dbde06fbb03fe155fec73377
				//avoid infinite loop when a character is entered and corrupts the int cin//
				if (!(cin>> function_ctrl))
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout<< "you have entered a wrong choice";
				}
				cout<< "\n check complete\n";
				break;

			}
		}

		switch (function_ctrl)

		{
		case 1:
		{
        calculation a[5], sum;
        int n;
        cout<<"\n Enter how many number want to add ? :";
        cin>>n;
    for (int i = 0; i < n; i++)
    {

        cin>>a[i];
        sum = a[i] + sum;
    }

    cout<<sum;
    cout<<" is the sum of "<<n<<" numbers. "<<endl;
			cout<< "-----exiting------\n";break;
		}

		case 2:
		{
        calculation t,w,ans;
        cin>>t>>w;

        ans=t*w;
        cout<<ans;
         cout<<" is multiplication of two numbers.";
        cout<<endl;
			cout<< "-----exiting------\n";break;
		}

		case 3:
		{
			calculation t,w,ans;
        cin>>t>>w;

        ans=t-w;
        cout<<ans;
        cout<<" is Subtraction of two numbers.";
        cout<<endl;
			cout<< "-----exiting------\n";break;
		}

		case 4:

		{
        calculation t,w,ans;
        cin>>t>>w;

        ans=t/w;
        cout<<ans;
        cout<<" is division of two numbers.";
        cout<<endl;
			cout<< "-----exiting------\n";break;
		}

		case 5:

		{
        B t,w,ans;
        cin>>t>>w;

        ans=t%w;
        cout<<ans;
        cout<<" is reminder of two numbers.";
        cout<<endl;
			cout<< "-----exiting------\n";break;
		}

		case 6:
		{
        calculation t,w,ans;
        cin>>t;

        ans=t*t;
        cout<<ans;
        cout<<" is the square";
        cout<<endl;
			cout<< "-----exiting------\n";break;
		}
		case 7:
		{
        calculation t,w,ans;
        cin>>t;

        ans=t*t*t;
        cout<<ans;
        cout<<" is the cube";
        cout<<endl;
			cout<< "-----exiting------\n";break;
		}

		case 8:
		{
			c.cosQ();
			cout<< "-----exiting------\n";break;
		}

		case 9:
		{
			c.sinQ();
			cout<< "-----exiting------\n";break;
		}

		case 10:
		{
			c.tanQ();
			cout<< "-----exiting------\n";break;
		}

		case 11:
		{
			c.coshQ();
			cout<< "-----exiting------*\n";break;
		}

		case 12:

		{
			c.sinhQ();
			cout<< "-----exiting------\n";break;
		}

		case 13:
		{
			c.tanhQ();
			cout<< "-----exiting------\n";break;
		}

		case 14:
		{
			c.acosQ();
			cout<< "-----exiting------\n";break;
		}

		case 15:
		{
			c.asinQ();
			cout<< "-----exiting------\n";break;
		}

		case 16:
		{
			c.atanQ();
			cout<< "-----exiting------\n";break;
		}

		case 17:
		{
			c.expQ();
			cout<< "-----exiting------*\n";break;
		}
		case 18:
		{
			c.logQ();
			cout<< "-----exiting------\n";break;
		}

		case 19:
		{
			c.log10Q();
			cout<< "-----exiting------\n";break;
		}

		case 20:

		{
			c.atan2Q();
			cout<< "-----exiting------\n";break;
		}

		case 21:
		{
			c.powQ();
			cout<< "-----exiting------\n";break;
		}
		case 22:
		{
			c.fToC();
			cout<< "-----exiting------\n";break;
		}
		case 23:
		{
			c.volume();
			cout<< "\n-----exiting------\n";break;
		}
		case 24:
		{
			c.area();
			cout<< "\n-----exiting------\n";break;
		}
		case 25:
		{
			c.mat_product();
			cout<< "\n-----exiting------\n";break;
		}
			case 26:
		{
			c.mat_transpose();
			cout<< "\n-----exiting------\n";break;
		}
			case 27:
		{
			c.mat_add();
			cout<< "\n-----exiting------\n";break;
		}
			case 28:
		{
			c.compoundInterest();
			cout<< "\n-----exiting------\n";break;
		}
			case 29:
		{
			c.simpleInterest();
			cout<< "\n-----exiting------\n";break;
		}

		default :
		{
			cout<<"\n wrong choice entered";break;
		}

		}
		cout<< "\n want to continue? (y/n)";
		cin>> control;
	}
}
<<<<<<< HEAD


=======
>>>>>>> 676657bf8ed623f4dbde06fbb03fe155fec73377
