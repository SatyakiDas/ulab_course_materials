public class Main {

    public static void main(String[] args) {

        Rectangle r = new Square();
        G(r);

    }

    static void G(Rectangle r) {
        r.setWidth(5);
        r.setHeight(4);
        System.out.println(r.getHeight() * r.getWidth() == 20);
    }
}
