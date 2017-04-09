import java.util.*;

public class Student {
        
    // the Student class has
    // one field
    public int id;
        
    // the Student class has
    // one constructor
    public Student(int inputID) {
        id = inputID;
    }
        
    // the Student class has
    // two methods
    public void setId(int newValue) {
        id = newValue;
    }
        
    public int getId() {
    	return id;
    }




static Map<Integer, Student> map = new HashMap<Integer,Student>();  // declare a hashmap

   public Map<Integer, Student> buildMap(Student[]students){        //declares a function buildMap that takes 
              for(Student s: students) map.put(s.getId(),s);        // and iterates through all of them and puts each of them into the map with an id
              return map;
              }



}



