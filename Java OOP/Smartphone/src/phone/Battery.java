package phone;

public class Battery {
	
	private String model;
	private double idleTime;
	private double hoursTalk;
	
	public Battery(String model, double idleTime, double hoursTalk){
		this.model = model;
		this.idleTime = idleTime;
		this.hoursTalk = hoursTalk;
	}

	public String getModel() {
		return model;
	}

	public void setModel(String model) {
		this.model = model;
	}

	public double getIdleTime() {
		return idleTime;
	}

	public void setIdleTime(double idleTime) {
		this.idleTime = idleTime;
	}

	public double getHoursTalk() {
		return hoursTalk;
	}

	public void setHoursTalk(double hoursTalk) {
		this.hoursTalk = hoursTalk;
	}

	
	
	

}
