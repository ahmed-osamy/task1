#include <bits/stdc++.h>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person() : name(""), age(0) {}

    Person(string name, int age) : name(name), age(age) {}
    virtual ~Person() {}
    virtual void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Patient : public Person {
    int patientId;
    string diagnosis;

public:
    Patient(string name, int age, int patientId, string diagnosis)
        : Person(name, age), patientId(patientId), diagnosis(diagnosis) {}

    void display() const override {
        Person::display();
        cout << "Patient ID: " << patientId << ", Diagnosis: " << diagnosis << endl;
    }
    int getPatientId() const {
        return patientId;
    }
};

class Doctor : public Person {
    int doctorId;
    string specialization;

public:
    Doctor(string name, int age, int doctorId, string specialization)
        : Person(name, age), doctorId(doctorId), specialization(specialization) {}

    void display() const override {
        Person::display();
        cout << "Doctor ID: " << doctorId << ", Specialization: " << specialization << endl;
    }

    int getDoctorId() const {
        return doctorId;
    }
};

int main() {
    Patient patient("ahmed", 21, 101, "deprssion");
    Doctor doctor("samo", 21, 202, "psychiatrist");

    cout << "Patient Information:" << endl;
    patient.display();

    cout << "\nDoctor Information:" << endl;
    doctor.display();

    cout << "\nPatient ID: " << patient.getPatientId() << endl;
    cout << "Doctor ID: " << doctor.getDoctorId() << endl;

    return 0;
}
