
import java.net.*;
import java.io.*;
class Server
{
    public static void main(String Arg[]) throws  Exception
    {
    
        System.out.println("Server application is running....");
      ServerSocket ssobj = new ServerSocket(2100);
      System.out.println("Server is running at port no : 2100 ");
      Socket s = ssobj.accept();
      System.out.println("Server and client connection is suucesful");
    
    }
}

