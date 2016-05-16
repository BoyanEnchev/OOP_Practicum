package Main;



import University.Courses;
import University.Departments;

public class Main {

	public static void main(String[] args) {
		
		
		Lector mitko = new Lector("Dimitar", 30, 87129201, Departments.ComputerScience);
		mitko.addCourse(Courses.OOP);
		mitko.addCourse(Courses.DataStructures);
		
		Assistent Misho = new Assistent("Mihail",22,98124322,Departments.ComputerScience);
		Assistent Pesho = new Assistent("Petar",24,98321522,Departments.ComputerScience);
		Assistent Maya = new Assistent("Maya",20,98124352,Departments.ComputerScience);
		
		

		mitko.addAssistent(Misho);  mitko.payAssistent(Misho, 600);
		mitko.addAssistent(Pesho);  mitko.payAssistent(Pesho, 1000);
		mitko.addAssistent(Maya);  mitko.payAssistent(Maya, 400);
		
		
		Teacher.printLectors(mitko);
	}
}