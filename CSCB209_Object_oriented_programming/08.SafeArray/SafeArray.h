#ifndef SAFE_ARRAY_H_
#define SAFE_ARRAY_H_
 
class SafeArray {
private:
     int size;
     int * values;
public:
     SafeArray(int s);
     SafeArray(const int v[], int s);
     
     int& operator[](int i);
     int operator[](int i) const;
};
 
#endif
