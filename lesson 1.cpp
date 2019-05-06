/* Program structure:
Two main componenets Preposecor directives and a main function
any line that has a # at the begining is a preprocessor directive

include is most common. It means add the directives of the given library:
<iostream> compiler directives

<> this means look for this file in the directory whre the standarad libr. are kept
"" this means look in the current dir first  an then look in the dir whre stand lib are kept

procesor looks for these files
*/

/* in c++ you canot have a main function that doses note retern enything 
it is customary to reteturn a 0 at the end of main
we use std::cout to specify that the command is from the standard library*/

/* Comments shoud be used to say thing you cant say well in code - what is dooing on high level or how

/* - start comment block
// - single line comment
*/

/* Write a C++ program that outpusts the folowing statment:
*** "Hello world, I am ready for C++"
*/

#include <iostream>
int main() {
    std::cout<< "Hello world, I am ready for C++";
    return 0;
}

/* To compile
g++ main.cpp -o main.out

To run
./main.out
*/


/* Namespace
shorcut, not to have to write std:: all the time
*/

/*Use the namespace keword to simplify typing*/
#include <iostream>

using namespace std;
int main() {
    cout << "Hey writting std:: is a pain, ";
    cout << "change the program so that I dont have to write it.";
    return 0;
}


/* printing to terminal */

std::cout << "Hello world"; //prints Hello world to the console
std::cout<<23; //prints the number 23 to the console
std::cout<<varibaleName; //prints the value of the varibale 

int integer = 42;
std::cout<<"value of integer is 
"<<integer; //this will print out The value of the integer is 42

// if I want a new line add "\n" or endl
std::cout<<integer<<"\n";
std::cout<<integer<<endl;

/* Goal: Practice writing to console and learn
the varibles types avilable in C++
print the size of easch variable to the console
int, short, long, char, float, double, bool
Use the commant sizeof(variable type) ie: sizeof(int)
*/

#include <iostream>

int main()
{
    using namespace std;
    cout<<"int size: "<<sizeof(int)<<"\n";
    cout<<"short size: "<<sizeof(short)<< endl;
    cout<<"long size: "<<sizeof(long)<<"\n";
    cout<<"char size: "<<sizeof(char)<<"\n";
    cout<<"float size: "<<sizeof(float)<<"\n";
    cout<<"double size: "<<sizeof(double)<<"\n";
    cout<<"bool size: "<<sizeof(bool)<<"\n";
    return 0;
}

/* in C++ we can define a variable as a constant.
Meaning ist value does not change for the life of the program.
We set it with the keyword const
Once set if we want to change the value of that variable we would have to recompile
*/

/*Goal: use constant variables */

#include <iostream>
using namespace std;

int main()
{
    const int weightGoal = 100;
    cout<<"Weight goal: "<<weightGoal<<"\n";
    weightGoal = 200; // this will not compile
    cout<<"Weight goal: "<<weightGoal<<"\n";
    return 0;
}

/* Enumerated constanst
We create a new variable TYPE and then asign a finite nuber of values to it
*/

enum MONTH { Jan, Feb, Mar, Apr, May, JUn, Jul, Aug, Sep, Oct, Nov, Dec};

/* here the var MONTH has 12 posible values. These translate into 12 integer values
Jan = 0
Feb = 1 ..
*/

/* Enum example */
#include <iostream>

using namespace std;

int main()
{
    //define MONTH as having 12 posible values
    enum MONTH { Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

    // define bestMonth as a variable type MONTH
    MONTH bestMonth;

    //assign bestMonth one of the values of MONTH
    bestMonth = Jan;

    //now we can check the value of bestMOnth just
    //like any other variable
    if(bestMonth == Jan)
    {
        cout<<" I'm not so shure January is the best month\n";
    }
    return 0;
}


/*To format data we can use escape sequences. These do not require any additional libraries.
The C++ escape sequences are pretty similar to other languages. The most common ones are: \n - newline \t - tab
We can also format the output by using the iomanip library. 
*/

#include <iomanip>
#include <iostream>

int main()
{
    std::cout<<"\n\nThe text without any formating\n";
    std::cout<<"Ints"<<"Floats"<<"Doubles"<< "\n";
    std::cout<<"\nThe text with setw(15)\n";
    std::cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)<<"Doubles"<< "\n";
    std::cout<<"\n\nThe text with tabs\n";
    std::cout<<"Ints\t"<<"Floats\t"<<"Doubles"<< "\n";
}

/*Formatting Output 
**Goal: practice using cout to format output to console
**Print the variables in three columns:
**Ints, Floats, Doubles
*/

#include <iostream>
#include <iomanip>

int main()
{
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;

    std::cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)<<"Doubles"<<std::setw(15)<< "\n";
    std::cout<<"a: "<<a<<std::setw(10)<<"b: "<<b<<std::setw(10)<<"c: "<<c<<"\n";
    std::cout<<"aa: "<<aa<<std::setw(10)<<"bb: "<<bb<<std::setw(10)<<"cc: "<<cc<<"\n";
    std::cout<<"aaa: "<<aaa<<std::setw(10)<<"bbb: "<<bbb<<std::setw(10)<<"ccc: "<<ccc<<"\n";

    return 0;
}
