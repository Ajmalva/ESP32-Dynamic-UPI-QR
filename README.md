# ESP32-Dynamic-UPI-QR

This repository showcases a project that leverages the power of an ESP32 microcontroller and a TFT display to dynamically generate and display payment QR codes for UPI services such as Google Pay, Paytm, PhonePe, and others. By integrating with the [`qrcode_espi`](https://github.com/yoprogramo/QRcode_eSPI) library, this project enables real-time creation and rendering of QR codes, facilitating seamless digital transactions.

## Features

- **Dynamic QR Code Generation**: Utilizes the [`qrcode_espi`](https://github.com/yoprogramo/QRcode_eSPI) library to generate payment QR codes in real-time.
- **UPI Integration**: Supports various UPI services including Google Pay, Paytm, and PhonePe.
- **TFT Display**: Displays the generated QR codes on a vibrant TFT display, making it easy for users to scan and pay.
- **ESP32 Based**: Takes advantage of the versatile and powerful ESP32 microcontroller for efficient processing and connectivity.

## Requirements

- **Hardware**:
  - ESP32 microcontroller
  - TFT display compatible with the ESP32

- **Libraries**:
  - [`qrcode_espi`](https://github.com/yoprogramo/QRcode_eSPI) for QR code generation
  - [`TFT_eSPI`](https://github.com/Bodmer/TFT_eSPI) or any other suitable library for controlling the TFT display

## Setup and Installation

1. **Hardware Connections**:
   - Connect the TFT display to the ESP32 according to the pin configuration mentioned in the library documentation.

2. **Software Setup**:
   - Clone this repository.
   - Install the required libraries ([`qrcode_espi`](https://github.com/yoprogramo/QRcode_eSPI) and [`TFT_eSPI`](https://github.com/Bodmer/TFT_eSPI)).
   - Obtain your UPI URL details and add them to the code.

3. **UPI URL**:
   - Open Google Pay or other UPI services, add any amount and generate a QR code.
  
     
     ![Copy of UPI](https://github.com/Ajmalva/ESP32-Dynamic-UPI-QR/assets/84183186/51e1bc45-f5e0-44d6-a9d1-babdf6cf2761)

   - Scan the generated QR code to obtain the UPI URL. Use QR scanner or [`scanqr.org`](https://scanqr.org/).
   - You will get a URL similar to this(sample): `upi://pay?pa=zesto@okaxis&pn=Zesto Ryu&am=20.00&cu=INR&aid=uGICvfGNncCpSg`.
  
      ![UPI](https://github.com/Ajmalva/ESP32-Dynamic-UPI-QR/assets/84183186/44935ee9-0f45-4d79-9721-a56706c24147)
   - Modify the UPI and amount details in the URL to generate dynamic QR codes.
  
     ![Code](https://github.com/Ajmalva/ESP32-Dynamic-UPI-QR/assets/84183186/f896529c-847f-4199-a515-c56c16f70362)

   - Apply your UPI URL to the code.


4. **Running the Code**:
   - Upload the example code to the ESP32 using the Arduino IDE or PlatformIO.
   - Modify the UPI URL with your UPI URL.
   - Ensure the ESP32 is connected to a power source and the TFT display is properly connected.
   - Compile and upload the code.
   - The ESP32 will generate and display the QR code dynamically on the TFT display.

## Usage

Once set up, input the required amount via the serial monitor and the TFT display will show a QR code that can be scanned using any UPI-based payment app such as Google Pay, Paytm, or PhonePe. The QR code will direct the payer to the respective payment page, making transactions quick and convenient.

## Contributing

Contributions are welcome! If you have suggestions for improvements or new features, feel free to open an issue or submit a pull request.

## License

This project is licensed under the MIT License.
