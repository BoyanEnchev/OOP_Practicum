package University;

import java.util.ArrayList;
import java.util.List;

import Main.Lector;

public class Faculty {
	
	private String name;
	private int numStudents;
	private int numLectores;
	private List<Departments> departaments = new ArrayList<Departments>();
	private List<Lector> lectors = new ArrayList<Lector>();
	

	
	public Faculty(String name){
		this.name = name;
	}
	
	public Faculty(String name, List<Departments> departments){
		this.departaments = departments;
		this.name = name;
	}
	
	
	
	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getNumStudents() {
		return numStudents;
	}

	public void setNumStudents(int numStudents) {
		this.numStudents = numStudents;
	}

	public int getNumLectores() {
		return numLectores;
	}

	public void setNumLectores(int numLectores) {
		this.numLectores = numLectores;
	}

	public List<Departments> getDepartaments() {
		return departaments;
	}

	public void setDepartaments(List<Departments> departaments) {
		this.departaments = departaments;
	}
	
	public List<Lector> getLectors() {
		return lectors;
	}
	
	public void addLector(Lector lector){
		lectors.add(lector);
	}
	
	
}
