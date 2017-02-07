#ifndef STUDENT_H
#define STUDENT_H
 
class Student {
private:
     char * name;
     double grade;
public:
     Student(); 
     Student(char*, double); 
     
     void read(); //mutator  
     void setName(char * name);
     void setGrade(double grade);
     char * getName() const;
     double getGrade() const;
     bool is_better_than(Student s) const; 
     void print() const;
};

#endif
