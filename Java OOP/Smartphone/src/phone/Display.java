package phone;

public class Display {
	
	private double size;
	private int colours;
	
	public Display(double size, int colours){
		this.size = size;
		this.colours = colours;
	}

	public double getSize() {
		return size;
	}

	public void setSize(double size) {
		this.size = size;
	}

	public int getColours() {
		return colours;
	}

	public void setColours(int colours) {
		this.colours = colours;
	}

}
