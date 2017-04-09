public class StudentMap{

  
static Map<Integer, Student> map = new HashMap<Integer,Student>();  // declare a hashmap


public Map<Integer, Student> buildMap(Student[]students){        //declares a function buildMap that takes
              for(Student s: students) map.put(s.getId(),s);        // and iterates through all student objects in an array  
              return map;					    // puts each into the map with an id	
              }
   

  
  



 public static void main(String[] args){

//	Student s(27, Erica); When you create an object you Declare s as Student and assign the inatntiated object  like this:
	Student s = new Student(27, "Erica");


	System.out.println("Student " + s.getId()+ "  -  " + s.getName());

/*
	Student s1(25, Erin);
*/

	Student s1 = new Student(25, "Erin");
	Student[] students = {s, s1};



	StudentMap m = new StudentMap();
	Map<Integer, Student> m2 = m.buildMap(students); 
	 

	//m.buildMap(students); //where did you declare buildMap? // answer: Map.java

}  
  
  
  


}
