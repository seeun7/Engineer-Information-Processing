public static void main(String[] args){
  Set a = new HashSet(); // HashSet은 중복을 허용하지 않고 순서 X
 
  a.add(7)
  System.out.println(a); // [7]
 
  a.add(5)
  System.out.println(a); // [5, 7]
 
  a.add(5)
  System.out.println(a); // [5, 7]
 
  a.remove(5)
  System.out.println(a); // [7]
 
  System.out.println(a.size()); // 1  
 
} 


class SuperObject {
    public void paint(){
        draw();
    }
 
    public void draw(){
        draw();
        System.out.println("Super Object");
    }
}
class SubObject extends SuperObject { // SuperObject에 속한 변수와 메서드를 상속받
    public void paint(){
        super.draw(); //super를 사용했으므로 부모클래스의 draw가 수행됨 
    }
 
    public void draw(){
        System.out.println("Sub Object");
    }
}
public class Test{
    public static void main(String[] args){
        SuperObject a = new SubObject(); // 자식 인스턴스 생성시 자료형을 부모로 지정 => 묵시적 형변환 
        a.paint(); // 오버라이딩 된 자식 인스턴스의 paint 수행 후 부모의 draw 수행됨 
    } 
} 
// Sub Object
// Super Object
