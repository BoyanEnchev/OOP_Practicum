package FirstStepsOOP;

public class Buyer {
	private String name;
	private int  money;
	
	public Buyer(String name, int money) {
		this.name = name;
		this.money = money;
	}
	public String getName(){
		return name;
	}
	public void setName(String name){
		this.name = name;
	}
	
	public int getMoney() {
		return this.money;
	}
	public void SaveMoney(int save){
		this.money = this.money + save;
	}
	public void SpendMoney(double purchase){
		if(this.money>purchase) this.money -= purchase;
		else System.out.println("The buyer have not enough money to make the transaction!");
	}

}
