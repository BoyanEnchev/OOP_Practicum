import java.text.ParseException;
import java.util.ArrayList;
import java.util.Date;
import java.util.List;

public class UserAccount {

	private String username;
	


	public List<Cassete> cassetes = new ArrayList<Cassete>();
	
	public UserAccount(String username){
		this.username = username;
	}
	
	public void getCassete(Cassete cassete, String startDate, String endDate) throws ParseException{
		cassetes.add(cassete);
		cassete.Take(this, startDate, endDate);
}
	
	
	public String getUsername() {
		return username;
	}

	public void setUsername(String username) {
		this.username = username;
	}

	public List<Cassete> getCassetes() {
		return cassetes;
	}

	public void setCassetes(List<Cassete> cassetes) {
		this.cassetes = cassetes;
	}
	
	
}