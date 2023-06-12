
#include "StudentManager.h"


int main()
{

	vector<Student> ret = StudentManager::GetInstance()->get_students();



    while (true) {
        std::cout << "请输入一个命令 (insert, update, delete, view, quit): ";
        std::string command;
        std::cin >> command;

        if (command == "insert") {
            Student newStudent;
            std::cout << "请输入新学生的 ID: ";
            std::cin >> newStudent.student_id;
            std::cout << "请输入新学生的名字: ";
            std::cin >> newStudent.student_name;
            std::cout << "请输入新学生的班级 ID: ";
            std::cin >> newStudent.class_id;
            StudentManager::GetInstance()->insert_student(newStudent);
        }
        else if (command == "update") {
            Student updatedStudent;
            std::cout << "请输入要更新的学生 ID: ";
            std::cin >> updatedStudent.student_id;
            std::cout << "请输入新的学生名字: ";
            std::cin >> updatedStudent.student_name;
            std::cout << "请输入新的班级 ID: ";
            std::cin >> updatedStudent.class_id;
            StudentManager::GetInstance()->update_student(updatedStudent);
        }
        else if (command == "delete") {
            int student_id;
            std::cout << "请输入要删除的学生 ID: ";
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
            std::cout << "未知的命令: " << command << std::endl;
        }
    }




	return 0;
}
