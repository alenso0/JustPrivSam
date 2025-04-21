import java.util.HashMap;
import java.util.Map;

class HashMapDemo{
    public static void main(String args[]){
        HashMap<String, Integer> studentScores = new HashMap<>();
        
        studentScores.put("Alice", 85);
        studentScores.put("Bob", 92);
        studentScores.put("Charlie", 78);
        studentScores.put("Diana", 90);
        System.out.println(studentScores);
    }
}