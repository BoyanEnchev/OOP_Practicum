package Main;

public class Person {
	
	private String name;
	private int age;
	private long id;
	private String gender;
	
	public Person(String name, int age, long id){
		
		this.name = name;
		setAge(age);
		this.id = id;
	}

	
	
	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getAge() {
		return age;
	}
	
	public void setAge(int age){
		if (age>0 && age <130) this.age = age;
		else System.out.println("Invalid age!");
	}

	public long getId() {
		return id;
	}


	public void Info(){
		System.out.println(name + " " + age + " " + id);
	}

	public String getGender() {
		return gender;
	}

	
	public static String IDextractor(Person human){
		
		long num = human.getId()/10;
		if( num % 2 == 0 ) return "male";
		else return "female";
	}
	
}
