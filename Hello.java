// interface AB {
//     void disp();
// }

// class Hello implements AB{

//     public void disp(){
//         System.out.println("Implemented...");
//     }

//     public static void main(String args[]){

//         Hello obj = new Hello();
//         obj.disp();
//     }
// }




//  Example of Abstraction
abstract class AB{
    abstract void run();
}
class Hello extends AB{

    public void run(){System.out.println("Abstracted.....");}

    public static void main(String args[]){

        AB a = new Hello();

        a.run();
    }
}