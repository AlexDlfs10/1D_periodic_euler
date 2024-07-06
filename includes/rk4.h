#ifndef RK4_H
#define RK4_H

#include "DataStructs.h"

template<class T>
class RungeKutta4 {
public:
    RungeKutta4(DataStruct<T> &_Un);
    ~RungeKutta4();
    int getNumSteps();
    void initRK();
    void stepUi(T dt);
    void finalizeRK(const T dt);
    void setFi(DataStruct<T> &_F);
    DataStruct<T>* currentU();

private:
    DataStruct<T>& Un;
    DataStruct<T> Ui;
    DataStruct<T> Ufinal; // Declaración de Ufinal
    DataStruct<T>* fi;
    T* coeffsA;
    T* coeffsB;
    int nSteps;
    int currentStep;
};

#endif // RK4_H
