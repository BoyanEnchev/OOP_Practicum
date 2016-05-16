package FirstStepsOOP;

import java.util.LinkedList;
import java.util.List;

public class Main {

	public static void main(String[] args) {
		
		Car myCar = new Car("Mercedes","E350", 30000);
		//System.out.println(myCar.getName() + " " + myCar.getModel());
		
		Buyer MySelf = new Buyer("Boyan",40000);
		Buyer pesho = new Buyer("Petar",100);
		Buyer maya = new Buyer("Maya",2000);
		
		Buyer Krasi = new Buyer("Krasimir Georgiev", 5000);
		System.out.println(Krasi.getMoney());
		Car mazda = new Car("Mazda" ,"Premacy", 6000);
	
		Krasi.SaveMoney(1200);
		//System.out.println("I worked hard and I save 10000 lv");
		//MySelf.SaveMoney(10000);
		
		if(Krasi.getMoney() >= mazda.getPrice()) {
			Krasi.SpendMoney(mazda.getPrice());
			mazda.setOwner(Krasi.getName());
			}
		
		System.out.println("My money after my purchase is: " + Krasi.getMoney());		
		
		List<Buyer> buyers = new LinkedList<Buyer>();
		buyers.add(MySelf);
		buyers.add(pesho);
		buyers.add(maya);
		
		//for(Buyer b: buyers){
		//	System.out.println(b.getName() + " " + b.getMoney());
		//}
		
		
		
			
			
		
		
	
		
	//myCar.Move();
	//System.out.println(myCar.getNumWheels());
	

		
		

	}

}
