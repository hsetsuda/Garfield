public class LastBoss extends Human{
  // constructor
  public LastBoss(){
    super.setName("LastBoss");
    super.setGender(1);
    super.setLength(210);
    super.setWeight(120);
    super.setVitality(500);
    super.setMagic(40);
  }

  public void specialEvilAttack(Human target){
    String name = super.getName();
    System.out.println( name  + "'s attack");
    System.out.println( name + "'s evel special move !");

    target.setVitality(target.getVitality() - 30);
    System.out.println( target.getName() + " is influcted 30ot damege");

    super.setVitality(super.getVitality() - 10);
    System.out.println( name + "'s HP become " + super.getVitality() );
    System.out.println("");
  }

}
