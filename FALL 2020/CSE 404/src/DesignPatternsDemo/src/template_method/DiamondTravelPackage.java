package template_method;

public class DiamondTravelPackage extends TravelPackage {
    @Override
    protected void transportBetweenPlaces() {
        System.out.println("Using Plane for transportation");
    }

    @Override
    protected void stayInRoom() {
        System.out.println("Staying in AC room with TV, personal Wifi and access to swimming pool");
    }

    @Override
    protected void eatFood() {
        System.out.println("Eating Biriyani, Thai/Chinese");
    }
}
