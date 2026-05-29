# This is a Templete for README.md

# Project title

A brief description of what this project does and who it's for.

## Description

Provide a more detailed explanation of the project. What problem does it solve? What are the key features?

## Getting Started
### 1. BOM Hardware

List of equipment device in below table:

<table border="1" cellpadding="6" cellspacing="0">
  <tr>
    <th align="left">No.</th>
    <th align="left">Equipment</th>
    <th align="left">Device name</th>
    <th align="left">Quantity</th>
  </tr>
  <tr><td align="left">1</td><td align="left">VCU</td><td align="left">Pi Zero 2w (3.3V)</td><td align="left">1</td></tr>
  <tr><td align="left">2</td><td align="left">ECU</td><td align="left">STM32F415RGTX (3.3V)</td><td align="left">1</td></tr>
  <tr><td align="left">3</td><td align="left">Capture card</td><td align="left">llano 3.0 Fullhd 60Hz</td><td align="left">1</td></tr>
  <tr><td align="left">4</td><td align="left">UART to com</td><td align="left">CH340</td><td align="left">1</td></tr>
  <tr><td align="left">5</td><td align="left">Encoder 600RPM pnp type</td><td align="left">YT06-OP-600F-1M-5-24V</td><td align="left">1</td></tr>
  <tr><td align="left">6</td><td align="left">Battery sensor</td><td align="left">Potentiometer 10K Ohm</td><td align="left">1</td></tr>
  <tr><td align="left">7</td><td align="left">Button</td><td align="left">Momentary Push Buttons</td><td align="left">5</td></tr>
  <tr><td align="left">8</td><td align="left">Breadboard</td><td align="left">MB-102 400 8.5x5.5x1cm</td><td align="left">1</td></tr>
  <tr><td align="left">9</td><td align="left">Jump wire</td><td align="left">Male-female wires</td><td align="left">20</td></tr>
  <tr><td align="left">10</td><td align="left">Display wire</td><td align="left">Mini HDMI to HDMI</td><td align="left">1</td></tr>
  <tr><td align="left">11</td><td align="left">Power wire</td><td align="left">Mini USBA to USBA</td><td align="left">1</td></tr>
  <tr><td align="left">12</td><td align="left">SDCard</td><td align="left">SDCard 64Gb</td><td align="left">1</td></tr>
  <tr><td align="left">13</td><td align="left">STM32 circuit debugger</td><td align="left">STLink v2</td><td align="left">1</td></tr>
  <tr><td align="left">14</td><td align="left">Power</td><td align="left">Adapter 10 VDC</td><td align="left">1</td></tr>
  <tr><td align="left">15</td><td align="left">Power converter</td><td align="left">Power module 10V to 3.3/5V</td><td align="left">1</td></tr>
  <tr><td align="left">16</td><td align="left">Logic Shift</td><td align="left">TXS0108E 8 Channel Logic 1.4V-5.5V</td><td align="left">1</td></tr>
</table>

### 2. Prerequisites

List any software, libraries, or tools that need to be installed before using the project.

```bash
# Example prerequisite installation command
npm install -g some-cli-tool
```

### 3. Installation

Provide step-by-step instructions on how to install the project.

1. Clone the repo
   ```bash
   git clone https://github.com/your_username/your_project_name.git
   ```
2. Navigate to the project directory
   ```bash
   cd your_project_name
   ```
3. Install dependencies (example for Node.js)
   ```bash
   npm install
   ```
   *(Adjust based on your project's package manager, e.g., pip install -r requirements.txt for Python)*

## Usage

Explain how to use the project after installation. Provide code examples or command-line usage instructions.

```python
# Example Python usage
import your_module

result = your_module.some_function()
print(result)
```

```bash
# Example command-line usage
your_script --input data.txt --output results.txt
```

Include screenshots or GIFs if applicable to demonstrate usage.

## Features

- View available commands (`help`)
- Get the actual IP address of the machine (`myip`)
- Display the listening port number (`myport`)
- Establish TCP connections with other peers (`connect`)
- View all active connections (`list`)
- Terminate specific connections (`terminate`)
- Send messages to connected peers (`send`)
- Exit the program and clean up all active connections (`exit`)

## Directory structure:
```
.
├── inc/
│   ├── header1.h           
│   ├── header2.h           
│   ├── header3.h
│   ├── header4.h
│   └── header5.h
├── src/
│   ├── source1.c
│   ├── source2.c
│   ├── source3.c
│   ├── source4.c
│   └── source5.c
├── main.c
├── Makefile
└── README.md
```

## High level design
<!-- add picture by ![Alt text](image_url_or_path) -->

Function block of model MVC:

![MVC model](./MVC.jpg) 

Some UML C++:

![Class diagram](https://media.geeksforgeeks.org/wp-content/uploads/20240308165524/Class-Diagram-example.webp)

## Contributing

Explain how others can contribute to the project. Include guidelines for pull requests, reporting bugs, and suggesting enhancements.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

Refer to a `CONTRIBUTING.md` file for more detailed guidelines if you have one.

## License

Specify the license under which the project is distributed.

Distributed under the [License Name] License. See `LICENSE.txt` for more information.

*(Choose an appropriate license, e.g., MIT, Apache 2.0, GPLv3. If you don't have a LICENSE.txt file, remove the reference or create one.)*

---

## Contact

Your Name - [@your_twitter](https://twitter.com/your_twitter) - your.email@example.com

Project Link: [https://github.com/your_username/your_project_name](https://github.com/your_username/your_project_name)

---

## Acknowledgements

List any resources, libraries, or individuals you want to thank or acknowledge.

*   [Resource Name](https://example.com)
*   Readme Template Inspiration
*   etc.


