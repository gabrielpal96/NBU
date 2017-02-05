#ifndef PERSON_H
#define PERSON_H

class Cperson {
private:
    char * name;
    double weight;
    unsigned height;
public:
    CPerson();
    CPerson(char *, double, unsigned);
    ~CPerson();
    void set_name(const char *);
    void set_weight(double);
    void set_height(unsigned);
    char* get_name() const;
    double get_weight() const;
    unsigned get_height() const;
    void read();
    void print() const;
    double bmi() const;
    void state() const;
    static double calindex(const CPerson & o1, const CPerson & o2) {
        return (o1.height - o2.height)*(o1.height - o2.height)
            + (o1.weight - o2.weight)*(o1.weight - o2.weight);
    }
};

#endif