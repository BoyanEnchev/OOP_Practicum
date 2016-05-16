package phone;

public class Call {

	private String date;
	private String time;
	private int callDuration; //in seconds
	
	public Call(String date, String time, int callDuration){
		this.date = date;
		this.time = time;
		this.callDuration = callDuration;
		
	}
	public Call(int callDuration){
		this.callDuration = callDuration;
	}
	
	
	public String getDate() {
		return date;
	}
	public void setDate(String date) {
		this.date = date;
	}
	public String getTime() {
		return time;
	}
	public void setTime(String time) {
		this.time = time;
	}
	public int getCallDuration() {
		return callDuration;
	}
	public void setCallDuration(int callDuration) {
		this.callDuration = callDuration;
	}

	
	}
	
	
	

