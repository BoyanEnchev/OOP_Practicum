package figures;


public class Officer extends Figure {

	public Officer(int x, int y) {
		super(x, y);
		// TODO Auto-generated constructor stub
	}
	
	@Override
	public void Move(int newX, int newY){
		
		
	
		
	}
	@Override
	public boolean moveIsLegal(int newX, int newY) {
		
		return  super.moveIsLegal(newX, newY) && Math.abs(newX - this.x) == Math.abs(newY - this.y);
	
	}

	
	
		
	

}
