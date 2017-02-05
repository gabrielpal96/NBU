#ifndef APROG_H_
#define APROG_H_
 
class AProg {
private:
     double a;
     double d;
public:
     AProg(double = 0., double = 0.);
     ~AProg();
     AProg(const AProg &);
     AProg& operator=(const AProg &);
     double operator[](int)const;
     double operator()(int)const;
};
 
#endif