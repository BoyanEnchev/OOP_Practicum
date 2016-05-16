package FirstStepsOOP;

public class Machine {
	
	private int numWheels = 4;
	double engine;
	
	public void Move (){
		System.out.println(this + "can move");
	}

	public int getNumWheels() {
		return numWheels;
	}

	public void setNumWheels(int numWheels) {
		this.numWheels = numWheels;
	}

}
