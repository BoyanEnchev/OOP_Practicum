package Main;

import University.Departments;

public class Assistent extends Teacher {
	
	private int salary;	
	
	public Assistent(String name, int age, long id, Departments department) {
		super(name, age, id, department);
	}

	public int getSalary() {
		return salary;
	}

	public void setSalary(int salary) {
		this.salary = salary;
	}

}
