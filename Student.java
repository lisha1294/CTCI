// see page72.txt for inspiration of code
import java.util.*;

public class Student {

    // the Student class has
    // one field

    public int id;
    private String name;

    // the Student class has
    // one constructor

    public Student(int inputID, String name) {  // you need to capitalize string

        id = inputID;
        this.name =name;

    }



    // the Student class has
    // three methods

    public void setId(int newValue) {
        id = newValue;
   }

    public int getId() {
    	return id;
    }


    public void setName(String newName){   // you need to capitalize string
       name = newName;
    }



    public String getName(){// you need to capitalize string
    return name;

    }

}
