package figures;

public class Figure {
	
	protected int x;
	protected int y;
	protected Boolean isAlive;
	
	public Figure(int x, int y){
		this.isAlive = true;
		this.x = x;
		this.y = y;
	}
	
	
	
	
	public int getX() {
		return x;
	}
	public void setX(int x) {
		this.x = x;
	}
	public int getY() {
		return y;
	}
	public void setY(int y) {
		this.y = y;
	}

	public Boolean getIsAlive() {
		return isAlive;
	}
	public void setIsAlive(Boolean isAlive) {
		this.isAlive = isAlive;
	}
	
	public void Move(int newX, int newY) {
	}		
		
	
	public boolean moveIsLegal(int newX, int newY){
		
		return (x>0 && x<9) && (y>0 && y<9);
	}

	public boolean isPathClean(int tempX, int tempY, int newX, int newY){
		
		if((tempX == newX) || (tempY == newY)) return true;
		if(isEmpty(tempX, tempY) == false) return false;
		
		isPathClean((tempX + (tempX - this.x)), (tempY + (tempY - this.y)), newX, newY); 
	}



	
}
