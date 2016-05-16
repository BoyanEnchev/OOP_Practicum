package FirstStepsOOP;

public class Car extends Machine{
    private String name;
    private String model;
    int year;
    String colour;
    private double price;
    private String owner;
    
    
    public Car(String name,String model, double price) {
    this.name = name;
    this.model = model;
    this.price = price;
    }

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getModel() {
		return model;
	}

	public void setModel(String model) {
		this.model = model;
	}
	

	public double getPrice() {
		return price;
	}

	public void setPrice(double price) {
		this.price = price;
	}
    public String getOwner() {
    	return this.owner;
    }
    public void setOwner(String newOwner) {
    	this.owner = newOwner;
    	System.out.println(this.name + this.model + " have new owner " + this.owner);
    }

}
