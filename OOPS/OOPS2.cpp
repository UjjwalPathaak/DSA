//!     Shallow & Deep Copy     !//
//Shallow Copy
     when you just copy the index of the array thus both pointers end 
     up pointing the same array.
//Deep Copy
     when you create a new array by copying previous one and then make
     the pointer point to it.

char name = [] = "abcd";
student s1(20, name);

name[3] = 'e';
student s2(29, name);

// student class{
    int age;
    char *name;

    public:

    student(int age, char *name){
        this -> age = age;
        //shallow copy
        //this -> name = name;

        //deep copy
        this -> name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }
}



