public class Yuusya extends Human {

  // constructor
  public Yuusya(){
    super.setName("Brave man");
    super.setGender(1);
    super.setLength(180);
    super.setWeight(70);
    super.setVitality(100);
    super.setMagic(5);
  }

  public void specialAttack(Human target){
    String name = super.getName();
    super.setVitality(super.getVitality() - 20);
    System.out.println( name  + "'s attack");
    System.out.println( name + "'s special move！");

    target.setVitality(target.getVitality() - 50);
    System.out.println( "inflict 50pt damege on " + target.getName() );

    super.setVitality(super.getVitality() - 10);
    System.out.println( name + "'s HP become " + super.getVitality() );
    System.out.println("");
  }
}
