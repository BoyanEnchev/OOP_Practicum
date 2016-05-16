package figures;


public class Pawn extends Figure {

	boolean isMoved = false;
	
	public Pawn(int x, int y) {
		super(x, y);
	}

	@Override
	public boolean moveIsLegal(int newX, int newY) {
		super.moveIsLegal(newX, newY);
		
		if(!isMoved) {
			if(newX == this.x && (Math.abs(newY - this.y) == 1) || (Math.abs(newY-this.y) ==2 )) {
			isMoved=true;
			return true;
			}
		}
		
		if(newX == this.x && (newY - this.y == 1 )) return true;
		
		return false;
	}

	@Override
	public void Move(int newX, int newY) {
		super.Move(newX, newY);
	}
	
	
	
	

}
