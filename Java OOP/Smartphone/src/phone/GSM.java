package phone;

import java.util.ArrayList;
import java.util.List;

public class GSM {
	 private String model;
	 private String producer;
	 private int price;
	 private String owner;
	 
	 
	 public GSM(String producer, String model, int price, String owner){
		 this.producer = producer;
		 this.model = model;
		 this.price = price;
		 this.owner = owner;
	 }

	public String getModel() {
		return model;
	}

	public void setModel(String model) {
		this.model = model;
	}

	public String getProducer() {
		return producer;
	}

	public void setProducer(String producer) {
		this.producer = producer;
	}

	public int getPrice() {
		return price;
	}

	public void setPrice(int price) {
		this.price = price;
	}

	public String getOwner() {
		return owner;
	}

	public void setOwner(String owner) {
		this.owner = owner;
	}
	 	
	 	 
	public void getInfo(){
		System.out.println(getOwner() + " has " + getProducer() + " " + getModel() 
							+ ". Phone's price is " + getPrice() + " lv.");
	}
	 	 
	 	 List<Call> callHistory = new ArrayList<Call>();
	 	 
	 	 
	 public void AddCall(Call call){
		 callHistory.add(call);
	 }
	 public void RemoveCall(Call call){
		 callHistory.remove(call);
	 }
	 public void RemoveALlCalls(Call call){
		 callHistory.removeAll(callHistory);
	 }
	 	 
	 	public void callHistoryInfo(){
	 		for(int i=0; i < callHistory.size(); i++){
	 			System.out.println(callHistory.get(i).getDate() + " " + callHistory.get(i).getTime()
	 					+ " " + callHistory.get(i).getCallDuration() );
	 		}
	 	}
	 	 
	 	 public double bill(double pricePerMinute){
	 		 int sum = 0;
	 		 for(int i=0; i<callHistory.size(); i++){
	 			 sum += callHistory.get(i).getCallDuration();
	 		 }
	 		 System.out.println("Minutes: " + sum);
	 		 return (sum/60)*pricePerMinute;
	 	 }
	
	 

	 
}
