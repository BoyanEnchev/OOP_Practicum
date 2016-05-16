import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class Cassete {

	private String name;
	private boolean isFree = true;
	private UserAccount curUser;
	
	SimpleDateFormat sdf = new SimpleDateFormat("dd.MM.yyyy");
	private Date startDate;
	private Date endDate;
	

	
	public Cassete(String name){
		this.name = name;
		Videoteka.availableCassetes.add(this);
	}

	public boolean getIsFree() {
		return isFree;
	}

	public void Take(UserAccount username, String StartDate, String EndDate) throws ParseException{             
													
		this.curUser = username;
		this.isFree = false;
		this.startDate = sdf.parse(StartDate);
		this.endDate = sdf.parse(EndDate);
		Videoteka.availableCassetes.remove(this);
		Videoteka.hiredCassetes.add(this);
		
	}

	public void Free() {
		this.isFree = true;
		this.curUser = null;
		startDate = null;
		endDate = null;
		Videoteka.availableCassetes.add(this);
		Videoteka.hiredCassetes.remove(this);
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public Date getStartDate() {
		return startDate;
	}

	public Date getEndDate() {
		return endDate;
	}

	
}
