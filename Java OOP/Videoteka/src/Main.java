import java.text.ParseException;

public class Main {

	public static void main(String[] args) throws ParseException {
		
		
		UserAccount pesho = new UserAccount("Petar Petrov");
		Cassete titanic = new Cassete("Titanik (1997)");
		Cassete bigMama = new Cassete("Big Mama (2015)");
		Cassete goal = new Cassete("Goal (2006)");
		
		pesho.getCassete(bigMama, "24.01.2016", "03.02.2016");
		pesho.getCassete(goal, "23.05.2016", "30.09.2016");
		pesho.getCassete(titanic, "29.01.2016", "04.02.2016");
		
		for(Cassete c: pesho.cassetes){
			System.out.println(c.getName() + c.getStartDate() + c.getEndDate());
		}
		
		
		
		
	}
}