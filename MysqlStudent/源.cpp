
#include "StudentManager.h"


int main()
{

	vector<Student> ret = StudentManager::GetInstance()->get_students();



    while (true) {
        std::cout << "������һ������ (insert, update, delete, view, quit): ";
        std::string command;
        std::cin >> command;

        if (command == "insert") {
            Student newStudent;
            std::cout << "��������ѧ���� ID: ";
            std::cin >> newStudent.student_id;
            std::cout << "��������ѧ��������: ";
            std::cin >> newStudent.student_name;
            std::cout << "��������ѧ���İ༶ ID: ";
            std::cin >> newStudent.class_id;
            StudentManager::GetInstance()->insert_student(newStudent);
        }
        else if (command == "update") {
            Student updatedStudent;
            std::cout << "������Ҫ���µ�ѧ�� ID: ";
            std::cin >> updatedStudent.student_id;
            std::cout << "�������µ�ѧ������: ";
            std::cin >> updatedStudent.student_name;
            std::cout << "�������µİ༶ ID: ";
            std::cin >> updatedStudent.class_id;
            StudentManager::GetInstance()->update_student(updatedStudent);
        }
        else if (command == "delete") {
            int student_id;
            std::cout << "������Ҫɾ����ѧ�� ID: ";
            std::cin >> student_id;
            StudentManager::GetInstance()->delete_student(student_id);
        }
        else if (command == "view") {
            vector<Student> students = StudentManager::GetInstance()->get_students();
            for (auto& t : students) {
                cout << t.student_id << ' ' << t.student_name << ' ' << t.class_id << endl;
            }
        }
        else if (command == "quit") {
            break;
        }
        else {
            std::cout << "δ֪������: " << command << std::endl;
        }
    }




	return 0;
}
