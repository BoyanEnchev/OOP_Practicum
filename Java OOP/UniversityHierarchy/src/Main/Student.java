package Main;

import University.Specialities;

public class Student extends Person {

	
	private int fnumber;
	private Specialities specialty;
	
	
	public Student(String name, int age, long id, int fnumber, Specialities speciality) {
		super(name, age, id);
		this.fnumber = fnumber;
		this.specialty = speciality;
	
	}
	
	
	
	public int getFnumber() {
		return fnumber;
	}
	public void setFnumber(int fnumber) {
		this.fnumber = fnumber;
	}
	public Specialities getSpecialty() {
		return specialty;
	}
	public void setSpecialty(Specialities specialty) {
		this.specialty = specialty;
	}
	
	
}
