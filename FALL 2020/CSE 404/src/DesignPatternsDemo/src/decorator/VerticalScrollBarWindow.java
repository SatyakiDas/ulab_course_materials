package decorator;

public class VerticalScrollBarWindow extends Window {
    public VerticalScrollBarWindow(Window wrapee) {
        super(wrapee);
    }

    @Override
    public void draw() {
        if (wrapee != null) {
            wrapee.draw();
        }
        System.out.println("Drawing Vertical Scrollbar");
    }
}
