public class Main {
    public static void main(String[] args) {
        Copier cp = new Copier();
        cp.copy(new KeyboardReader(), new DiskWriter());
    }
}
