//!     OOPS     !// 
Object-oriented programming (OOP) is a computer programming model
that organizes software design around data, or objects, rather 
than functions and logic.



//*     Classes     *// 
Classes are user-defined data types that act as the blueprint for
individual objects, attributes and methods

Syntax:- 
   class Student 
   {
       int rollNumber;
       int age;
   } 



//~     Objects     ~// 
Objects are instances of a class created with specifically defined data.
Objects can correspond to real-world objects or an abstract entity.

// Syntax -> Statically
   Student s1; 
   /* Made a Student class type variable of name: s1; */
   // (.) Dot operator (to access properties)
   s1.age = 30;

// Syntax -> Dynamically
   Student *s2 = new Student;
   /* Made a Student class type variable of name: s2; in memory 
   -> s2 is Stored and contains address of variable block which 
   stores all properties of s2 */
   // (->) Arrow operator (to access properties)
   s2 -> age = 30;



//^     Access Modifiers     ^// 
/* 
*1) Public (by deafault)
    can't be accessed outside the class.
*2) Private
    by using this properties can be accessed globally.
*3) Protected 
    (should be specified above properties)
*/



//&     Getters and Setters     &//
/* Getters take the private properties and */
class Student
{
    Private: 
    int rollNumber;
    int age;

    Public: 
     void getAge(){
        return age;
     }
} 
// To call getters.
s1.getAge();
s2 -> getAge();

/* Setters set the initial value of objects when declared */
class Student
{
    Private: 
    int rollNumber;
    int age;

    Public: 
     void setAge(int a){
        age == a;
     }
} 
// To call setters.
s1.setAge(10);
s2->setAge(10);



//!     Constructors     !//
When you make an object, internally it calls a fucntion with same name
as the class (Default Constructor) it initialises all values with garbage
values.

Properties:-
   -> same name as class
   -> no return type
   -> no input arguments

We can also make Parameterized Constructors by passsing an argument while
creating an object.

//^ ( this-> ) Keyword
holds the address of current object/object at which the function was called.

// INBUILD - Constructors
1) Copy Constructor 
     Student s1(10, 100);
     Student s3(s1); //copy-constructor

     Student *s2 = new Student(10, 200);
     Student *s4 = new Student(*s2); //copy-constructor
     /* s3 & s4 will have the same property values as s1 & s2 */

2) Copy assignment operator (=)
    Student s1(10, 100);
    Student s2(20, 200);

    s2 = s1; -> //s2 will take all values of s2
    /* this is used after objects have been made as constructor is only called at time of initiallisation not after thaat */



//!     Destructors     !//
They get called automatically and only once when compiler needs to deallocate memory (objcects).

Properties:-
   -> same name as class
   -> no return type
   -> no input arguments

//Syntax 
   ~Student(){

   }

//Dynamically 
   delete s2; //memory stored in heap (dynamically created) is deleted by delete keyword.



