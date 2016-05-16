package phone;



public class TestGSM {
	
	GSM Anji = new GSM("LG","320d",300, "Anjela");
   	GSM  Ceco = new GSM("Nokia", "6230i",70, "Cvetan");
	GSM Bobi = new GSM("Samsung", "Galaxy S4", 400 , "Boyan");
	GSM Toshko = new GSM("Samsung", "Galaxy A5", 500, "Todor");
	
	public static void getInfo(GSM gsm){
		System.out.println(gsm.getOwner() + " has " + gsm.getProducer() + " " + gsm.getModel() 
							+ ". Phone's price is " + gsm.getPrice());
	}
}
	

