#ifndef GPROG_H_
#define GPROG_H_
 
class GProg {
private:
     double a;
     double d;
public:
     GProg(double = 0., double = 0.);
     ~GProg();
     GProg(const GProg &);
     GProg& operator=(const GProg &);
 
     double operator[](int)const;
     double operator()(int)const;
};
 
#endif