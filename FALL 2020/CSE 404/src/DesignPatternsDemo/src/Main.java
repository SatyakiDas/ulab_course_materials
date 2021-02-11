import template_method.DiamondTravelPackage;
import template_method.GoldTravelPackage;
import template_method.SilverTravelPackage;
import template_method.TravelPackage;

public class Main {

    public static void main(String[] args) {
//        Window w = new NoScrollBarWindow(new VerticalScrollBarWindow(new HorizontalScrollBarWindow(null)));
//        w.draw();

//        TravelPackage tp = new DiamondTravelPackage();
//        tp.transportStrategy();
//        tp.roomStrategy();
//        tp.foodStrategy();

        TravelPackage tp = new DiamondTravelPackage();
        tp.travel();


    }

}
