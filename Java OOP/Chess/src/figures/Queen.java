package figures;

public class Queen extends Figure {

	public Queen(int x, int y) {
		super(x, y);
		// TODO Auto-generated constructor stub
	}

	@Override
	public void Move(int newX, int newY) {
		// TODO Auto-generated method stub
		super.Move(newX, newY);
	}

	
	
	
	
	
	
	@Override
	public boolean moveIsLegal(int newX, int newY) {
		
		if( super.moveIsLegal(newX, newY) && ((newX - this.x ==0) || (newY - this.y ==0))) return true;
		
		if(super.moveIsLegal(newX, newY) && (Math.abs(newX - this.x) == Math.abs(newY - this.y))) return true;
		
		return false;
		
	}

	
	
	
	
}
