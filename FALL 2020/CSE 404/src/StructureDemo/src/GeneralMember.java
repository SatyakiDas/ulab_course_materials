import java.util.ArrayList;

public class GeneralMember {

    public String name;
    public String userName;
    private String password;
    private int salary;

    public ArrayList<ProfessionalBackground> comprehensiveProfessionalBackground;

    public GeneralMember(String name, String userName) {
        this.name = name;
        this.userName = userName;

        password = "sfjhdsjfhsdjklfhsdjkfh";
        salary = 50000;

        comprehensiveProfessionalBackground = new ArrayList<ProfessionalBackground>();
    }

    public void addProfessionalBackground(ProfessionalBackground pb) {
        comprehensiveProfessionalBackground.add(pb);
    }
}
