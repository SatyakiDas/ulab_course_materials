package decorator;

public class HorizontalScrollBarWindow extends Window {
    public HorizontalScrollBarWindow(Window wrapee) {
        super(wrapee);
    }

    @Override
    public void draw() {
        if (wrapee != null) {
            wrapee.draw();
        }
        System.out.println("Drawing Horizontal Scrollbar");
    }
}
