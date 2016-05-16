package Main;


import java.util.ArrayList;
import java.util.List;

import University.Departments;

public class Lector extends Teacher {
	
	List<Assistent> LectorAssistents = new ArrayList<Assistent>();
	private int countElections=0;

	
	public Lector(String name, int age, long id, Departments department) {
		super(name, age, id, department);
		
	}
	
	
	public List<Assistent> getLectorAssistents() {
		return LectorAssistents;
	}


	public void setLectorAssistents(List<Assistent> lectorAssistents) {
		LectorAssistents = lectorAssistents;
	}


	public void addAssistent(Assistent assistent){
		this.LectorAssistents.add(assistent);
	}
	public void removeAssistent(Assistent assistent){
		this.LectorAssistents.remove(assistent);
	}
	public void payAssistent(Assistent assistent, int salary){
		
		assistent.setSalary(assistent.getSalary() + salary);
	}


	public int getCountElections() {
		return countElections;
	}

	public void setCountElections(int countElections) {
		this.countElections = countElections;
	}
	
	
}


