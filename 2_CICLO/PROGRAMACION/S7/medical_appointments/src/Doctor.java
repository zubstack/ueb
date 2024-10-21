public class Doctor{

    public int id;
    private String name;
    private String speciality;

    public Doctor (String name){
        this.name = name;
    }

    public void sayName(){
        System.out.println("Hi, I'm doctor "+ this.name);
    }
}
