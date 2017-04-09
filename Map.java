public class Map{

static Map<Integer, Student> map = new HashMap<Integer,Student>();  // declare a hashmap


public Map<Integer, Student> buildMap(Student[]students){        //declares a function buildMap that takes
              for(Student s: students) map.put(s.getId(),s);        // and iterates through all student objects in an array  
              return map;					    // puts each into the map with an id	
              }
   



}
