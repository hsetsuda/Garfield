public class Wizard extends Human {

  // constructor
  public Wizard(){
    super.setName("Wizard");
    super.setGender(1);
    super.setLength(170);
    super.setWeight(60);
    super.setVitality(20);
    super.setMagic(50);
  }

  public void magicAttack(Human target){
    String name = super.getName();
    System.out.println( name  + "'s attack");
    System.out.println( name + " use attack spell !");

    target.setVitality(target.getVitality() - 20);
    System.out.println( "influct 20pt damege on " + target.getName() );

    super.setMagic(super.getMagic() - 10);
    System.out.println( name + "'s MP become " + super.getMagic() );
    System.out.println("");
  }

}
