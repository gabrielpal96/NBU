#ifndef REGTASK_H_
#define REGTASK_H_

class RegTask {
private:
    size_t n;
    int * level;
    double * paid;
public:
    RegTask(size_t = 0, int* = 0, double* = 0);
    RegTask(const RegTask &);
    ~RegTask();
    RegTask& operator=(const RegTask &);
    void print()const;
    void newRegistry(int, double);
    double sumTotal() const;
    int maxLevelPaid() const;
    double searchLevel(int)const;
};

#endif //REGTASK_H_