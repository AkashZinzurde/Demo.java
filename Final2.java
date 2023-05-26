class Base
{
public void fun()
{
    System.out.println("Bse fun");

}
final public void gun()
{
    System.out.println("Bace gun");
}
}
class Derived extends Base
{
    public void fun()
    {
        System.out.println("Derived fun");
    }

}

public class Final2
 {
    public static void main(String Arg[])
    {

        Base bobj = new Derived();
        bobj.fun();
        bobj.gun();
    }
}
