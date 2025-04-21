import java.util.*;
class StudentList<T>{
    ArrayList<T> students = new ArrayList<>();
    void add(T name){
        students.add(name);
    }
    void printStudents(){
        for(T name : students){
            System.out.println(name);
        }
    }
}

class Main{
    public static void main(String args[]){
        StudentList<String> list = new StudentList<>();
        list.add("A");
        list.add("B");
        list.add("C");
        list.add("D");
        list.add("E");
        
        System.out.println("List of students are: ");
        list.printStudents();
        
    }
}