public class FacialRecognitionDoor implements Door {
    FacialRecognitionDoorAdaptor frda = new FacialRecognitionDoorAdaptor();

    @Override
    public void lock() {
        frda.runFacialRecognition();
        System.out.println("Lock after facial recognition");
    }

    @Override
    public void unlock() {
        frda.runFacialRecognition();
        System.out.println("Unlock after facial recognition");
    }
}
