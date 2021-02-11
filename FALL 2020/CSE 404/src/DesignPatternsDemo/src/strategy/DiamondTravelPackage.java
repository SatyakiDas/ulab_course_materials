package strategy;

public class DiamondTravelPackage implements TravelPackage {
    @Override
    public void transportStrategy() {
        System.out.println("Travel by Air");
    }

    @Override
    public void roomStrategy() {
        System.out.println("AC, TV, Wifi, Access to swimming pool");
    }

    @Override
    public void foodStrategy() {
        System.out.println("Biriyani, Thai/Chinese");
    }
}
