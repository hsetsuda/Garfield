public class Cleric extends Human {
  // constructor
  public Cleric(){
    super.setName("Cleric");
    super.setGender(2);
    super.setLength(160);
    super.setWeight(50);
    super.setVitality(20);
    super.setMagic(70);
  }

  // healing spell
  public void healingMagic(Human target){
    String name = super.getName();
    System.out.println( name + " use healing spell !");

    target.setVitality(target.getVitality() + 20);
    System.out.println( target.getName() + "'s HP become " + target.getVitality() );

    target.setMagic(super.getMagic() - 10); 
    System.out.println( name + "'s MP become " + super.getMagic() );
    System.out.println("");
  }

}
