public class Human {

  private String name = null;  // name
  private int gender = 0;      // gender(1:male, 2:female)
  private int length = 0;      // height
  private int weight = 0;      // weight
  private int vitality = 0;    // HP
  private int magic = 0;       // MP

  // constructor
  public Human(){
  }
  // getter･setter(name)
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  // getter･setter(gender)
  public int getGender() {
    return gender;
  }
  public void setGender(int gender) {
    this.gender = gender;
  }

  // getter･setter(height)
  public int getLength() {
    return length;
  }
  public void setLength(int length) {
    this.length = length;
  }

  // getter･setter(weight)
  public int getWeight() {
    return weight;
  }
  public void setWeight(int weight) {
    this.weight = weight;
  }

  // getter･setter(HP)
  public int getVitality() {
    return vitality;
  }
  public void setVitality(int vitality) {
    this.vitality = vitality;
  }

  // getter･setter(MP)
  public int getMagic() {
    return magic;
  }
  public void setMagic(int magic) {
    this.magic = magic;
  }

  // talk
  public void talk(String about){
    System.out.println(about);
  }
  // eat
  public void eatFood(String food){

    int foodType = 0;
    if(food == "medical plants"){
      foodType = 1;
    }else if (food == "magic water"){
      foodType = 2;
    }else{
      foodType = 3;
    }
    digestFood(foodType);  // digest food
  }

  // digest
  private void digestFood(int foodType){
    if(foodType == 1){
      vitality += 10; // heal HP 10pt
    }else if (foodType == 2){
      magic += 10;    // heal MP 10pt
    }else{
      vitality += 1;  // heal HP 1pt
    }
  }
}
