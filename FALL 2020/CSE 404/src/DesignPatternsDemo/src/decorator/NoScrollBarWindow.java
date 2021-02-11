package decorator;

public class NoScrollBarWindow extends Window {


    public NoScrollBarWindow(Window wrapee) {
        super(wrapee);
    }

    @Override
    public void draw() {
        if (wrapee != null) {
            wrapee.draw();
        }
        System.out.println("Drawing Window");
    }
}
