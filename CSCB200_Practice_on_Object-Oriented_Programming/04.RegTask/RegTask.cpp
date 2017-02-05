#include "RegTask.h"
#include <iostream>
#include <cassert>

RegTask::RegTask(size_t sz, int* l, double* p):
        n(sz), level(new int[n]), paid(new double[n]) {
    assert(level != NULL);
    assert(paid != NULL);
    
    for (size_t i = 0; i < n; i++) {
        level[i] = l[i];
        paid[i] = p[i];
    }
}

RegTask::RegTask(const RegTask &r) {
    n = r.n;
    level = new int[n];
    assert(level != NULL);
    paid = new double[n];
    assert(paid != NULL);
    
    for (size_t i = 0; i < n; i++) {
        level[i] = r.level[i];
        paid[i] = r.paid[i];
    }
}

RegTask::~RegTask() {
    delete[] paid;
    delete[] level;
}

RegTask& RegTask::operator=(const RegTask &r) {
    if (this != &r) {
        n = r.n;
        if (level != NULL) {
             delete[] level;
        }
        level = new int[n];

        assert(level != NULL);
        if (paid != NULL) {
             delete[] paid;
        }
        paid = new double[n];

        assert(paid != NULL);
        for (size_t i = 0; i < n; i++) {
            level[i] = r.level[i];
            paid[i] = r.paid[i];
        }
    }
    return *this;
}

void RegTask::print() const {
    std::cout << "Print data for the object\n";
    for (size_t i = 0; i < n; i++) {
        std::cout << "Level[" << level[i] << "] = " << paid[i] << std::endl;
    }
}

void RegTask::newRegistry(int k, double p) {
    if (n == 0) {
        n = 1;
        level = new int[n];
        assert(level != NULL);
        level[0] = k;
        paid = new double[n];
        assert(paid != NULL);
        paid[0] = p;
    }
    else {
        n++;
        int * tmp_level = new int[n];
        double * tmp_paid = new double[n];
        
        for (size_t i = 0; i < n-1; i++) {
            tmp_level[i] = level[i];
            tmp_paid[i] = paid[i];
        }

        tmp_level[n - 1] = k;
        tmp_paid[n - 1] = p;
        delete[] level;
        delete[] paid;
        level = tmp_level;
        paid = tmp_paid;
    }
}

double RegTask::sumTotal() const {
    double sum = 0.;
    for (size_t i = 0; i < n; i++) {
        sum += paid[i];
    }
    return sum;
}

int RegTask::maxLevelPaid() const {
    size_t ind = 0;
    double maxPaid = paid[0];
    for (size_t i = 1; i < n; i++) {
        if (maxPaid < paid[i]) {
            maxPaid = paid[i];
            ind = i;
        }
    }
    return level[ind];
}

double RegTask::searchLevel(int lv) const {
    for (size_t i = 0; i < n; i++) {
        if (level[i] == lv) {
             return paid[i];
        }
    }
    return 0.;
}