# TwinCAT C++ - Fourier Series Online Changeable

This project include an RT Online Changeable driver module with versioning for TwinCAT build 4024. To use the module, you will want to first set the default publish version in the TMC editor, and then adjust your project settings to build against your OEM certificate from Beckhoff.

If you do not have an OEM Cert, you can self-sign one, and put your PC in test mode; the steps are on Infosys.

# Use of the code

Inside SignalDemo.cpp you will find the main code, and you can assign the type of signal here:
See this link for the signal types: https://en.wikipedia.org/wiki/Fourier_series

```CPP
	// Type of signal to generate
	SignalType = Pulse;
```

There are a few different signal types to choose from:

```CPP
    Square
    Sawtooth
    Triangle
    Fibonacci
    Pulse
```

There are also some various settings in the hedder file to play with:

```CPP
	int harmonics = 12;
	double amplitude = 1.0;
	double frequency = 1.00; // Frequency in Hz
```