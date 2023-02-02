# minitalk
## Foreword
- The cis-3-Hexen-1-ol, also known as (Z)-3-hexen-1-ol and leaf alcohol, is a colorless oily liquid with an intense grassy-green odor of freshly cut green grass and leaves.
    - It is produced in small amounts by most plants and it acts as an attractant to many predatory insects. cis-3-Hexen-1-ol is a very important aroma compound that is used in fruit and vegetable flavors and in perfumes.
    - The yearly production is about 30 tonnes. 

## The Project:

- I must have created a communication program in the form of a client and a server.
- The server must be started first. After its launch, it has to print its PID.
- The client takes two parameters:
- The server PID.
- The string to send.
- The client must send the string passed as a parameter to the server.
    Once the string has been received, the server must print it.
- The server has to display the string pretty quickly. Quickly means that if I would have thought it takes too long, then it was probably too long.
- My server should have been able to receive strings from several clients in a row without needing to restart.
- The communication between my client and my server has to be done only using UNIX signals.
- I could have only used these two signals: SIGUSR1 and SIGUSR2.

## Run the project
Inside a terminal that is in the project's root directory:
```
make
./server
```
Inside another terminal in the same directory:
```
./client <PID> <text to send>
```
#### Please read the [***Subject File***](https://cdn.intra.42.fr/pdf/pdf/56849/en.subject.pdf)