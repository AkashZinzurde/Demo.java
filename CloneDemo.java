class Student  implements Cloneable
{
    public Stringf name;
    public int marks;
    public int age;
    public Student(String str, int a, int b)
{
    this.name = str;
    this.marks = a;
    this.age = b;

}
public Object clone() throws CloneNotSupportedException Exception
{
    return super.clone();

}
   }
 class CloneDemo 
{

    public static void main(String a[])
    {
        try 
        {
    
        Student obj = new Student ("Amit",87,27);
        Student obj2= (student)obj1.clone();
        System.out.println("Name:"+obj1.name);
        System.out.println("marks:"+obj1.marks);
        System.out.println("age:"+obj1.age);

        System.out.println("Name:"+obj1.name);
        System.out.println("marks":"+obj1.marks);
        System.out.println("age:"+obj1.age);

        }
     catch(Excepation)
    }

}
