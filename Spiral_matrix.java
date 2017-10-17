class Spiral_matrix 
{

	public void function()
	{
		int first_row=0, first_col=0, last_row=4, last_col=4;
		while(first_row<last_row && first_col<last_col)
		{
			/*printing first row*/
			
			for(int j=first_col; j<last_col; j++)
			{
				System.out.print(first_row+""+j+"\t");
			}
			first_row++;
			System.out.println();
			/*printing last given column */
			for(int j=first_row; j<last_row; j++)
			{
				System.out.print(j+""+(last_col-1)+"\t");
			}
			last_col--;
			System.out.println();
			/*printing last row from given row*/
			for(int j=last_col-1; j>=first_col; j--)
			{
				System.out.print((last_row-1)+""+j+"\t");
			}
			last_row--;
			System.out.println();
			/*printing first column*/
			for(int j=last_row-1; j>=first_row; j--)
			{
				System.out.print(j+""+first_col+"\t");

			}
			first_col++;
			

		}

	}
	public static void main(String args[])
	{
		new Spiral_matrix().function();
	}
}
