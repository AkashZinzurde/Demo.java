import Marvellous.Arithematic;
import Marvellus.Mathimathic;

class PackageDemo
{
    public static void main(String Arg[])
    {
        Arithematic aobj = new Arithematic();
        Mathimatic mobj = new Mathimathic();
        int iRet = 0;
        iRet = aobj.Addition(10,11);
        System.out.println("Addition is : "+iRet);

        
        iRet = aobj.Substraction(10,11);
        System.out.println(" substroaction is : "+iRet);

        
        
        iRet = mobj.Square(10,11);
        System.out.println("Addition is : "+iRet);

        
        iRet = mobj.Cube(10,11);
        System.out.println("Addition is : "+iRet);

        
        
        
        

    }
}