
#include <stdio.h>



//uart begin
#define RCGCUART (*((volatile int *) 0x400FE618))
#define GPIO_PORTA_DEN (*((volatile int *) 0x4000451C))
#define GPIO_PORTA_DIR   (*((volatile int *) 0x40004400))
#define GPIO_PORTA_AFSEL (*((volatile int *) 0x40004420))
#define GPIO_PORTA_PCTL (*((volatile int *) 0x4000452C))
#define UART_INT (*((volatile int *) 0x4000C024))
#define UART_FRAC (*((volatile int *) 0x4000C028))
#define UART_CTL (*((volatile int *) 0x4000C030))
#define UART_LCRH (*((volatile int *) 0x4000C02C))
#define UART_FR (*((volatile int *) 0x4000C018))
#define UART_TDR (*((volatile int *) 0x4000C000))
#define UARTEN_RX 0x301
#define BIT8_NOPARITRY_1STOP_NOFIFO 0x60
#define GPIO_PORTA_PIN 0x03
//uart end


#define SYSCTL_RCGCGPIO_R   (*((volatile int *) 0x400FE608))
#define SYSCTL_RCGC_GPIO_BD 0x01


//I2C
#define SYSCTL_RCGCGPIO_R       (*((volatile unsigned long *)0x400FE608))
#define SYSCTL_RCGCI2C_R        (*((volatile unsigned long *)0x400FE620))


//*****************************************************************************
//
// I2C registers (I2C0)
//
//*****************************************************************************
#define I2C0_MSA_R              (*((volatile unsigned long *)0x40020000))
#define I2C0_MCS_R              (*((volatile unsigned long *)0x40020004))
#define I2C0_MDR_R              (*((volatile unsigned long *)0x40020008))
#define I2C0_MTPR_R             (*((volatile unsigned long *)0x4002000C))
#define I2C0_MIMR_R             (*((volatile unsigned long *)0x40020010))
#define I2C0_MRIS_R             (*((volatile unsigned long *)0x40020014))
#define I2C0_MMIS_R             (*((volatile unsigned long *)0x40020018))
#define I2C0_MICR_R             (*((volatile unsigned long *)0x4002001C))
#define I2C0_MCR_R              (*((volatile unsigned long *)0x40020020))
#define I2C0_MCLKOCNT_R         (*((volatile unsigned long *)0x40020024))
#define I2C0_MBMON_R            (*((volatile unsigned long *)0x4002002C))
#define I2C0_MCR2_R             (*((volatile unsigned long *)0x40020038))
#define I2C0_SOAR_R             (*((volatile unsigned long *)0x40020800))
#define I2C0_SCSR_R             (*((volatile unsigned long *)0x40020804))
#define I2C0_SDR_R              (*((volatile unsigned long *)0x40020808))
#define I2C0_SIMR_R             (*((volatile unsigned long *)0x4002080C))
#define I2C0_SRIS_R             (*((volatile unsigned long *)0x40020810))
#define I2C0_SMIS_R             (*((volatile unsigned long *)0x40020814))
#define I2C0_SICR_R             (*((volatile unsigned long *)0x40020818))
#define I2C0_SOAR2_R            (*((volatile unsigned long *)0x4002081C))
#define I2C0_SACKCTL_R          (*((volatile unsigned long *)0x40020820))
#define I2C0_PP_R               (*((volatile unsigned long *)0x40020FC0))
#define I2C0_PC_R               (*((volatile unsigned long *)0x40020FC4))



#define GPIO_PORTB_ODR_R        (*((volatile unsigned long *)0x4000550C))
#define GPIO_PORTB_GPIOPUR      (*((volatile unsigned long *)0x40005510)) //Set SCL to pull up




//Keypad Registers BEGIN
#define PORT_F_DIR (*((volatile int *) 0x40025400))
#define PORT_C_DIR (*((volatile int *) 0x40006400))
#define PORT_F_DEN (*((volatile int *) 0x4002551C))
#define PORT_C_DEN (*((volatile int *) 0x4000651C))
#define PORT_F_PDR (*((volatile int *) 0x40025514))
#define PORT_F_DATA (*((volatile int *) 0x400253FC))
#define PORT_C_DATA (*((volatile int *) 0x400063FC))
#define PORT_C_PDR (*((volatile int *) 0x40006514))
#define GPIO_PORTF_DATA_R       (*((volatile unsigned long *)0x400253FC))
//Keypad Registers END



//Registers for the LEDs
#define GPIO_PORTB_DATA_R       (*((volatile unsigned long *)0x400053FC))


//GPIO Addresses BEGIN
#define RCGCGPIO            (*((volatile unsigned long *) 0x400FE608)) //GPIO Clock Register Address
#define GPIOAFSEL_PORT_E    (*((volatile unsigned long *) 0x40024420)) //GPIOAFSEL Port E Address -> ADC Input Pin
#define GPIOAFSEL_PORT_B    (*((volatile unsigned long *) 0x40005420)) //GPIOAFSEL Port B Address -> M0PWM0 Output Pin
#define GPIOPCTL_PORT_B     (*((volatile unsigned long *) 0x4000552C)) //GPIOPCTL for Port B
#define GPIODIR_PORT_B      (*((volatile unsigned long *) 0x40005400)) //GPIODIR for Port B
#define GPIODEN_PORT_E      (*((volatile unsigned long *) 0x4002451C)) //GPIODEN for Port E
#define GPIODEN_PORT_B      (*((volatile unsigned long *) 0x4000551C)) //GPIODEN for Port B
#define GPIOAMSEL_PORT_E    (*((volatile unsigned long *) 0x40024528)) //GPIOAMSEL for Port E
//GPIO Addresses END

//ADC Addresses BEGIN
#define RCGCADC              (*((volatile unsigned long *) 0x400FE638))
#define ADC0ACTSS            (*((volatile unsigned long *) 0x40038000))
#define ADC0EMUX             (*((volatile unsigned long *) 0x40038014))
#define ADC0SSMUX3           (*((volatile unsigned long *) 0x400380A0))
#define ADC0SSCTL3           (*((volatile unsigned long *) 0x400380A4))
#define ADC0PSSI             (*((volatile unsigned long *) 0x40038028))
#define ADC0RIS              (*((volatile unsigned long *) 0x40038004))
#define ADC0ISC              (*((volatile unsigned long *) 0x4003800C))
#define ADC0SSFIFO3          (*((volatile unsigned long *) 0x400380A8))
//ADC Addresses END

//PWM Addresses BEGIN
#define RCGCPWM              (*((volatile unsigned long *) 0x400FE640))
#define PWM0CTL              (*((volatile unsigned long *) 0x40028040))
#define PWM0CMPA             (*((volatile unsigned long *) 0x40028058))
#define PWM0GENA             (*((volatile unsigned long *) 0x40028060))
#define PWM0LOAD             (*((volatile unsigned long *) 0x40028050))
#define PWM0ENABLE           (*((volatile unsigned long *) 0x40028008))
//PWM ADdresses END



void initializeLEDs();

//Function to add Delay
void Delay(unsigned int);

//Function to read from the UART
char UART_Rx();

//Function to transmit to the UART
void UART_Tx(char data);

//Function to initialize timer
void InitializeTimer();

//Function to initialize UART
void UART_ini();

//Function to initialize keypad
void keypad_ini();

//Function to initialize PWM
void PWM_initialize();

//Function to initialize I2C
void initializeI2C(void);
int I2C3_Write_Multiple(int slave_address, int slave_memory_address, int bytes_count, int * data);
int I2C3_read_Multiple(int slave_address, int slave_memory_address, int bytes_count, int * data);
void write_single_char(int, char, int);
void readWholeString(int memAddr, int EEPROMaddress, int size);
char read_one_char(int memAddr, int EEPROMaddress);
void write_multiple(int memAddr, char * data[], int numBytes, int EEPROMaddress);
int playMode = 1, recordMode = 0, playbackMode = 0;
float previousLoad = 16000;

int main(void) {

  //Initializing UART
  UART_ini();

  //Initializing Keypad
  keypad_ini();

  //Initializing PWM
  PWM_initialize();

  //char arrays for symbols
  char symbol[4][4] = {
    {
      '1',
      '2',
      '3',
      'A'
    },
    {
      '4',
      '5',
      '6',
      'B'
    },
    {
      '7',
      '8',
      '9',
      'C'
    },
    {
      '*',
      '0',
      '#',
      'D'
    }
  };

  //Initialize I2C
  initializeI2C();

  //Initializing LEDs
  initializeLEDs();

  char buf = '$';
  char * sequence[30];
  int num = 0;

  //Default mode : A
  GPIO_PORTB_DATA_R = 00000001;
  while (1) {

    //Initializing loop values
    int i, j;

    //Looping Twice
    for (i = 0; i < 4; i++) {
      PORT_F_DATA = (1U << (i + 1));

      for (j = 0; j < 4; j++) {

        if (((PORT_C_DATA & 0xFF)) & ((1U << (j + 4)))) {

          if (symbol[i][j] != '*' && symbol[i][j] != '0' && symbol[i][j] != '#' && symbol[i][j] != 'D') {

            if (playMode) {

              if (symbol[i][j] != 'A') {

                if (symbol[i][j] == 'B') {
                  num = 0;
                  GPIO_PORTB_DATA_R &= ~(1 << 0);
                  playMode = 0;
                  recordMode = 1;
                  GPIO_PORTB_DATA_R |= (1 << 1);

                } else if (symbol[i][j] == 'C') {

                  GPIO_PORTB_DATA_R &= ~(1 << 0);
                  playMode = 0;
                  playbackMode = 1;
                  GPIO_PORTB_DATA_R |= (1 << 5);
                  readWholeString(0x0, 0xA0, num);
                } else {

                  float loadValue = (((symbol[i][j]) - '0') * (1000)) + 5000; //Calculate value for wave to send to LED

                  PWM0LOAD = loadValue;
                  PWM0CMPA = loadValue / 2;
                  previousLoad = loadValue;
                  //UART_Tx(PWM0CMPA);
                  UART_Tx(symbol[i][j]);
                }

              }
            } else if (playbackMode) {
              //GPIO_PORTB_DATA_R  |= (1<<5);
              if (symbol[i][j] == 'A' || symbol[i][j] == 'B' || symbol[i][j] == 'C') {

                if (symbol[i][j] == 'A') {

                  GPIO_PORTB_DATA_R &= ~(1 << 5);
                  playMode = 1;
                  playbackMode = 0;
                  // num = 0;
                  GPIO_PORTB_DATA_R = 00000001;
                } else if (symbol[i][j] == 'B') {

                  GPIO_PORTB_DATA_R &= ~(1 << 5);
                  recordMode = 1;
                  playbackMode = 0;
                  num = 0;

                  GPIO_PORTB_DATA_R |= (1 << 1);

                } else {
                  readWholeString(0x0, 0xA0, num);
                }
              }

            } else if (recordMode) {

              //GPIO_PORTB_DATA_R  |= (1<<1);
              if (symbol[i][j] == 'A') {

                GPIO_PORTB_DATA_R &= ~(1 << 1);
                write_multiple(0x0, sequence, num, 0xA0);
                // Clear the array
                int g;
                for (g = 0; g < num; g++) {
                  sequence[i] = '\0';
                }
                buf = '$';
                playMode = 1;
                recordMode = 0;
                GPIO_PORTB_DATA_R = 00000001;
              } else if (symbol[i][j] == 'C') {

                GPIO_PORTB_DATA_R &= ~(1 << 1);
                write_multiple(0x0, sequence, num, 0xA0);
                int g;
                for (g = 0; g < num; g++) {
                  sequence[i] = '\0';
                }
                buf = '$';
                playbackMode = 1;
                recordMode = 0;
                GPIO_PORTB_DATA_R |= (1 << 5);
                readWholeString(0x0, 0xA0, num);

              } else if (symbol[i][j] == 'B') {
                int g;
                for (g = 0; g < num; g++) {
                  sequence[i] = '\0';
                }
                buf = '$';
                num = 0;

              } else {
                char holdValue = symbol[i][j];

                float loadValue = (((holdValue) - '0') * (1000)) + 5000; //Calculate value for wave to send to LED
                PWM0LOAD = loadValue;
                PWM0CMPA = loadValue / 2;
                previousLoad = loadValue;

                if (buf != symbol[i][j]) {
                  sequence[num] = holdValue;
                  buf = holdValue;
                  UART_Tx(holdValue);
                  num++;
                }

              }

            }

            //Send to EEPROM, increment a global counter to keep track of key presses
            Delay(1000000);
            PWM0CMPA = previousLoad;

          }
        }

      }

    }

  }

}

//Note: PORT USED FOR UART : PORTA
//        PINS USED: A1 and A2
void UART_ini() {
  SYSCTL_RCGCGPIO_R |= (1 << 0);

  //enabling the UART and system clocks
  RCGCUART = 0x01;
  SYSCTL_RCGCGPIO_R |= SYSCTL_RCGC_GPIO_BD;

  //configuring the GPIO ports for the UART
  GPIO_PORTA_AFSEL |= GPIO_PORTA_PIN;
  GPIO_PORTA_DEN |= GPIO_PORTA_PIN;
  GPIO_PORTA_PCTL |= 0x00000011;

  //Configuring the UART registers(BAUD rate, parameters for LCRH and enabling the UART)
  UART_CTL = 0x00;
  UART_INT = 0x068;
  UART_FRAC = 0x0B;
  UART_LCRH = BIT8_NOPARITRY_1STOP_NOFIFO;
  UART_CTL = UARTEN_RX;

}
//Note: Ports Used for UART: PORT F AND C
//      Pins USED: F1,F2,F3,F4 and C4,C5,C6,C7
void keypad_ini() {
  SYSCTL_RCGCGPIO_R |= (1 << 2);
  SYSCTL_RCGCGPIO_R |= (1 << 5);
  PORT_F_DIR |= 0x1E;
  PORT_F_DEN |= 0x1E;
  PORT_C_DEN |= 0xF0;
  PORT_C_DIR &= ~(0xF0);
  PORT_C_PDR |= 0xF0;

}

void PWM_initialize() {
  RCGCGPIO |= (1 << 1);

  //PWM0 Clock Enable and M0PWM0 Configuration
  RCGCPWM = 0x1; //Enable PWM0 Clock
  GPIOAFSEL_PORT_B = 0x40; //Enable Alternate Function for Port B, Pin 6
  GPIOPCTL_PORT_B = 0x4000000; //Set Pin 6 to have Alternate Function 4 - M0PWM0
  GPIODIR_PORT_B = 0x40; //Enable Port B, Pin 6 to Output
  GPIODEN_PORT_B = 0x40; //Enable Digital Function for Port B, Pin 6
  //PWM0 Configuration START
  PWM0CTL = 0x0; //Clear PWM0, set to count down mode
  PWM0GENA = 0xC2; //Set pwmA to toggle HIGH at cmpA, drive pwmA low at ZERO
  PWM0LOAD = 0x3E80; //Set LOAD to arbitrary num, chose 16000 as an example
  PWM0CTL = 0x1; //Enable PWM0 Timers
  PWM0ENABLE = 0x1; //Send output to pwm pin
}

void UART_Tx(char data) {
  while ((UART_FR & 0x20));
  UART_TDR = data;

}

char UART_Rx() {
  char data;
  while ((UART_FR & 0x10));
  data = UART_TDR;
  return ((unsigned char) data);
}

void initializeI2C(void) {
  //Enable the I2C clock using RCGCI2C register
  SYSCTL_RCGCI2C_R |= (1 << 0);

  //Enable clock on port B
  SYSCTL_RCGCGPIO_R |= (1 << 1);
  //enable appropriate pins for AFSEL
  //GPIOAFSEL_PORT_B |= (1<<2) || (1<<3);
  GPIOAFSEL_PORT_B |= (1 << 2);
  GPIOAFSEL_PORT_B |= (1 << 3);
  //set PCTL for pin 2 and 3
  //GPIOPCTL_PORT_B |= (3<<8) || (3<<12);
  GPIOPCTL_PORT_B |= (3 << 8);
  GPIOPCTL_PORT_B |= (3 << 12);
  //Enable Pull Up Resistors for SCL
  GPIO_PORTB_GPIOPUR = 0xC; //Set PB2 and PB2 (SDAand SCL) to enable pull up resistors
  //open drain for I2CSDA
  GPIO_PORTB_ODR_R |= (1 << 3);
  //digital enable these pins
  //GPIODEN_PORT_B |= (1<<2) || (1<<3);
  GPIODEN_PORT_B |= (1 << 2);
  GPIODEN_PORT_B |= (1 << 3);
  //I2CMCR initialize
  I2C0_MCR_R = 0x00000010;

  //I2CMTPR
  I2C0_MTPR_R = 0x7; //setting clock to be slow

}

void I2C_wait_till_done(void) {
  while (I2C0_MCS_R & 0x01);
  Delay(1000); /* wait until I2C master is not busy */

}
int checkForError() {
  if (I2C0_MCS_R & (1 << 1)) {
    return 1;
  }
  return 0;
}
void write_multiple(int memAddr, char * data[], int numBytes, int EEPROMaddress) {

  int a = 0;
  for (a = 0; a < numBytes; a++) {
    write_single_char(memAddr + a, data[a], EEPROMaddress);
    Delay(100000);
  }

}
void write_single_char(int memAddr, char data, int EEPROMaddress) {
  I2C0_MSA_R = EEPROMaddress;
  I2C0_MSA_R &= ~(0x01);
  I2C0_MDR_R = (memAddr >> 8) & 0xFF;
  I2C0_MCS_R = 0x03;

  while (I2C0_MCS_R & 0x01);
  //Send Memory Address
  I2C0_MDR_R = memAddr & 0xFF;
  I2C0_MCS_R = 0x01;

  while (I2C0_MCS_R & 0x01);
  //Send Data Bit
  I2C0_MDR_R = data;
  I2C0_MCS_R = 0x05; //Generate STOP, Write to EEPROM
}

char read_one_char(int memAddr, int EEPROMaddress) {
  I2C0_MSA_R = EEPROMaddress;
  I2C0_MSA_R &= ~(0x01);
  I2C0_MDR_R = (memAddr >> 8) & 0xFF;
  I2C0_MCS_R = 0x03;

  while (I2C0_MCS_R & 0x01);

  I2C0_MDR_R = memAddr & 0xFF; //This line is the proper code line
  //I2C0_MDR_R = 0; //DEBUG ONLY, TESTING IF IT WRITES FIRST CHARACTER

  I2C0_MCS_R = 0x01;
  while (I2C0_MCS_R & 0x01);
  I2C0_MSA_R = EEPROMaddress;
  I2C0_MSA_R |= 0x01;

  I2C0_MCS_R = 0x07;
  while (I2C0_MCS_R & 0x01);
  return I2C0_MDR_R;

}

void readWholeString(int memAddr, int EEPROMaddress, int size) {
  //Update to include global variable so you can set it

  int i, f = 0;
  for (i = size; i > 0; i--, f++) {
    char buf = read_one_char(memAddr + f, EEPROMaddress);

    float loadValue = ((buf - '0') * (1000)) + 5000; //Calculate value for wave to send to LED
    PWM0LOAD = loadValue;
    PWM0CMPA = loadValue / 2;
    previousLoad = loadValue;
    UART_Tx(buf);
    Delay(1000000);
  }
}

/* Function to write multiple bytes of data over I2C */
int I2C3_Write_Multiple(int slave_address, int slave_memory_address, int bytes_count, int * data) {
  int error = 0;

  // Check if bytes_count is valid
  if (bytes_count <= 0)
    return -1; // No write was performed, invalid bytes_count

  // Send slave address and starting address
  I2C0_MSA_R = slave_address << 1; // Shift left to include the R/W bit
  I2C0_MDR_R = slave_memory_address; // Set memory address
  I2C0_MCS_R = 0x00000011; // Start and run the I2C transfer (Mark for debug later)

  // Wait until write is complete
  I2C_wait_till_done();

  // Send data one byte at a time
  while (bytes_count > 1) {
    // Write the next byte
    I2C0_MDR_R = * data++;
    // Send ACK after data transfer
    I2C0_MCS_R = 0x00000001;
    // Wait until transfer is complete
    I2C_wait_till_done();

    // Check for errors
    if (checkForError()) {
      // Handle error here
      error = 1;
    }
    bytes_count--;
  }

  // Send last byte and a STOP
  I2C0_MDR_R = * data++;
  I2C0_MCS_R = 0x00000101; // Stop the I2C transfer
  I2C_wait_till_done();

  // Check for errors
  if (checkForError()) {
    // Handle error here
    error = 1;
  }

  return error; // Return 0 if no error
}

/* Function to read multiple bytes of data over I2C */
int I2C3_read_Multiple(int slave_address, int slave_memory_address, int bytes_count, int * data) {
  int error = 0;
  // Send slave address and starting address
  I2C0_MSA_R = slave_address << 1; // Shift left to include the R/W bit
  //I2C0_MDR_R = slave_memory_address; // Set memory address
  I2C0_MCS_R = 0x00001011; // Start and run the I2C transfer

  // Wait until write is complete
  I2C_wait_till_done();

  // Check for errors
  if (checkForError()) {
    // Handle error here
    error = 1;
  }

  * data++ = I2C0_MDR_R; // Store the data received

  if (--bytes_count == 0) {
    // If single byte read, done
    return error; // Return 0 if no error
  }

  // Read the rest of the bytes
  while (bytes_count > 1) {
    I2C0_MCS_R = 0x00001001; // Continue reading data with ACK
    I2C_wait_till_done();
    // Check for errors
    if (checkForError()) {
      // Handle error here
      error = 1;
    }
    bytes_count--;
    * data++ = I2C0_MDR_R; // Store data received
  }

  I2C0_MCS_R = 0x00000101; // Continue reading data with NACK
  I2C_wait_till_done();

  // Check for errors
  if (checkForError()) {
    // Handle error here
    error = 1;
  }

  * data = I2C0_MDR_R; // Store data received

  return error; // Return 0 if no error
}
void Delay(unsigned int i) {
  while (i--);
}

//using PB0,PB1 and PB5 for this
void initializeLEDs() {
  //clock is already enabled

  //direction as output
  GPIODIR_PORT_B |= (1 << 0);
  GPIODIR_PORT_B |= (1 << 1);
  GPIODIR_PORT_B |= (1 << 5);

  //sets pins as digital
  GPIODEN_PORT_B |= (1 << 0);
  GPIODEN_PORT_B |= (1 << 1);
  GPIODEN_PORT_B |= (1 << 5);

}
