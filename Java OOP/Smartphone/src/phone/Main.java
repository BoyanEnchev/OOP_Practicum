package phone;

import java.util.ArrayList;
import java.util.List;

public class Main{
	public static void main(String[] args) {
	
	List<GSM> phones = new ArrayList<GSM>();
		
	TestGSM test = new TestGSM();
	
	//test.getInfo(test.Bobi);
	
	phones.add(test.Bobi);
	phones.add(test.Anji);
	phones.add(test.Ceco);
	phones.add(test.Toshko);
	
	
	//System.out.println(phones.get(1).getOwner());
	
	GSM Adi = new GSM("Samsung", "Galaxy A5", 600, "Adelina");
	phones.add(Adi);
	
	/* for(int i=0; i<phones.size(); i++){
		phones.get(i).getInfo();
	}
	*/
	
	
	{
	Call call0 = new Call("2016-01-18", "20:21", 10); 		Adi.AddCall(call0);
	Call call1 = new Call("2015-09-13", "20:51", 6); 		Adi.AddCall(call1);
	Call call2 = new Call("2016-01-12", "10:11", 9); 		Adi.AddCall(call2);
	Call call3 = new Call("2015-06-22", "22:32", 4); 		Adi.AddCall(call3);
	Call call4 = new Call("2016-11-12", "05:43", 5); 		Adi.AddCall(call4);
	}
	
	//Adi.callHistoryInfo();
	System.out.println(Adi.bill(0.24));
	

	}
}