package Main;

import java.util.Scanner;

import java.util.ArrayList;
import java.util.List;
import University.Courses;
import University.Departments;


public abstract class Teacher extends Person{
	
	private Departments department;
	private List<Courses> courses = new ArrayList<Courses>();
	
	Scanner input = new Scanner(System.in);

	public Teacher(String name, int age, long id, Departments department) {
		super(name, age, id);
		this.department = department;
		
	}
	
	
	
	
	public Departments getDepartment(){
		return this.department;
	}
	
	public void setDepartment(Departments department){
		this.department = department;
	}

	public List<Courses> getCourse() {
		return courses;
	}

	public void setCourse(List<Courses> courses) {
		this.courses = courses;
	}
	
	public void addCourse(Courses course){
		courses.add(course);
	}
	
	public static void printLectors(Lector lector){
		System.out.println("Lector " + lector.getName() + " Department: " + lector.getDepartment() + " Courses: " + lector.getCourse());
		System.out.println("LectorAssistents: ");
		for(Assistent a: lector.LectorAssistents){
			System.out.println(a.getName() + " 	 years: " + a.getAge() + " 	money balance: " + a.getSalary());
		}
	}
	public void electionForRector(Lector lector){
	lector.setCountElections( lector.getCountElections() +1 );
	}
	
}
