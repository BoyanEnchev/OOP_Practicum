package University;


import java.util.ArrayList;
import java.util.List;

import Main.Lector;

public class University {
	
	private String name;
	private int budget;
	private List<Faculty> faculties = new ArrayList<Faculty>();
	private Lector rector = null;
	
	public University(String name){
		this.name = name;
	}
	public University(String name, int budget, Lector rector){
		this.name = name;
		this.budget = budget;
		this.rector = rector;
	}
	
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getBudget() {
		return budget;
	}
	public void setBudget(int budget) {
		this.budget = budget;
	}
	public void IncreaseBudget(int increase){
		this.budget = this.budget + increase;
	}
	
	
	
	public List<Faculty> getFaculty() {
		return faculties;
	}
	public void setFaculty(List<Faculty> faculty) {
		this.faculties = faculty;
	}
	public void addFaculty(Faculty faculty){
		faculties.add(faculty);
	}
	
	
	
	public Lector getRector() {
		return rector;
	}
	public void setRector(Lector rector) {
		this.rector = rector;
	}
	


}




/* name
budget
faculties
rector*/
 