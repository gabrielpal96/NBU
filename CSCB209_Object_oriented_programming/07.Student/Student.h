#ifndef STUDENT_H_
#define STUDENT_H_
 
class Student {
private:
     char * name;
     double grade;
public:
     Student();
     Student(char*, double);
     Student(const Student &);
     ~Student();
     
     void setName(char *);
     void setGrade(double);
     char * getName() const;
     double getGrade() const;
 
     void read();
     bool is_better_than(Student s) const;
     void print() const;
 
     Student operator=(const Student &l);
     bool operator>(const Student &)const;
};
 
#endif
