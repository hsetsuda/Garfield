public class main {
  // main process
  public static void main(String[] args){
    Yuusya yuusya = new Yuusya();        // create Yuusya object
    Wizard wizard = new Wizard();        // create Wizard object
    Cleric crelic = new Cleric();        // create Cleric object
    LastBoss lastBoss = new LastBoss();  // create LastBoss object

    // encount 
    System.out.println( lastBoss.getName() + " is apper !");

    // battle start
    yuusya.specialAttack(lastBoss);   // brave man attack
    wizard.magicAttack(lastBoss);   // wizared attack
    lastBoss.specialEvilAttack(yuusya); // lastboss attack
    crelic.healingMagic(yuusya);    // cleric heal brave man


    // use healing item
    System.out.println(yuusya.getName() + " use medical plants");
    yuusya.eatFood("medical plants");
    System.out.println(wizard.getName() + " use magic water");
    wizard.eatFood("magic water");
    System.out.println("");

    // show character status
    showStatus(yuusya);
    showStatus(wizard);
    showStatus(crelic);
    showStatus(lastBoss);

  }

  // status showing method
  private static void showStatus(Human target){
    System.out.println("- " + target.getName() + " 's status---");
    if(target.getGender() == 1){
      System.out.println("gender : man");
    }else{
      System.out.println( "gender : female");
    }
    System.out.println("height ： " + target.getLength());
    System.out.println("weight ： " + target.getWeight());
    System.out.println("  HP   ： " + target.getVitality());
    System.out.println("  MP   ： " + target.getMagic());
    System.out.println("");

  }
}
