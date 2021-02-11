package template_method;

public class SilverTravelPackage extends TravelPackage {
    @Override
    protected void transportBetweenPlaces() {
        System.out.println("Using Non AC coach for transportation");
    }

    @Override
    protected void stayInRoom() {
        System.out.println("Staying in Non AC room with No TV");
    }

    @Override
    protected void eatFood() {
        System.out.println("Eating Eggs, Rice and Vegetables");
    }
}
