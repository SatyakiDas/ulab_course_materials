public class TimedDoor implements Door {
    public TimeDoorAdaptor tda = new TimeDoorAdaptor();

    @Override
    public void lock() {
        tda.timeout();
        System.out.println("Lock after timeout");
    }

    @Override
    public void unlock() {
        tda.timeout();
        System.out.println("Unlock after timeout");
    }
}
