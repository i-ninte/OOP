#include <iostream>
#include <vector>
using namespace std;

class Student {
    private:
        string name;
        vector<int> grades;
        vector<string> school_choices;

    public:
        Student(string n, vector<int> g, vector<string> sc) {
            name = n;
            grades = g;
            school_choices = sc;
        }

        string get_name() {
            return name;
        }

        vector<int> get_grades() {
            return grades;
        }

        vector<string> get_school_choices() {
            return school_choices;
        }
};

class School {
    private:
        string name;
        vector<string> courses;
        int cut_off;

    public:
        School(string n, vector<string> c, int co) {
            name = n;
            courses = c;
            cut_off = co;
        }

        string get_name() {
            return name;
        }

        vector<string> get_courses() {
            return courses;
        }

        int get_cut_off() {
            return cut_off;
        }
};

class PlacementSystem {
    private:
        vector<Student> students;
        vector<School> schools;

    public:
        void add_student(Student s) {
            students.push_back(s);
        }

        void add_school(School s) {
            schools.push_back(s);
        }

        void place_students() {
            for (int i = 0; i < students.size(); i++) {
                Student s = students[i];
                vector<string> sc = s.get_school_choices();

                bool placed = false;

                for (int j = 0; j < sc.size(); j++) {
                    string school_name = sc[j];

                    for (int k = 0; k < schools.size(); k++) {
                        School school = schools[k];

                        if (school.get_name() == school_name) {
                            int cut_off = school.get_cut_off();
                            vector<int> grades = s.get_grades();
                            int total_grades = 0;

                            for (int l = 0; l < grades.size(); l++) {
                                total_grades += grades[l];
                            }

                            int avg_grade = total_grades / grades.size();

                            if (avg_grade >= cut_off) {
                                cout << s.get_name() << " is placed in " << school_name << endl;
                                placed = true;
                                break;
                            }
                        }
                    }

                    if (placed) {
                        break;
                    }
                }

                if (!placed) {
                    cout << s.get_name() << " could not be placed in any school" << endl;
                }
            }
        }
};

int main() {
    PlacementSystem system;

    while (true) {
        int choice;
        cout << "\n1. Add Student\n2. Add School\n3. Place Students\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name;
                cout << "\nEnter the name of the student: ";
                cin >> name;

                int num_grades;
                cout << "Enter the number of grades: ";
                cin >> num_grades;

                vector<int> grades;
                for (int i = 0; i < num_grades; i++) {
                    int grade;
                    cout << "Enter grade " << i+1 << ": ";
                    cin >> grade;
                    grades.push_back(grade);
                }

                int num_choices;
                cout << "Enter the number of school choices: ";
                           cin >> num_choices;

            vector<string> school_choices;
            for (int i = 0; i < num_choices; i++) {
                string choice;
                cout << "Enter school choice " << i+1 << ": ";
                cin >> choice;
                school_choices.push_back(choice);
            }

            Student s(name, grades, school_choices);
            system.add_student(s);

            cout << "\nStudent added successfully!" << endl;
            break;
        }

        case 2: {
            string name;
            cout << "\nEnter the name of the school: ";
            cin >> name;

            int num_courses;
            cout << "Enter the number of courses: ";
            cin >> num_courses;

            vector<string> courses;
            for (int i = 0; i < num_courses; i++) {
                string course;
                cout << "Enter course " << i+1 << ": ";
                cin >> course;
                courses.push_back(course);
            }

            int cut_off;
            cout << "Enter the cut-off mark: ";
            cin >> cut_off;

            School s(name, courses, cut_off);
            system.add_school(s);

            cout << "\nSchool added successfully!" << endl;
            break;
        }

        case 3: {
            system.place_students();
            break;
        }

        case 4: {
            cout << "\nGoodbye!" << endl;
            return 0;
        }

        default: {
            cout << "\nInvalid choice. Please try again." << endl;
        }
    }
}
}
