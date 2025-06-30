# StateMachineAndMore_DO-178
Developed and validated code and algorithms for the DO-178C avionics standard. These are just some of the huge amount of trials and projects developed

# Bias-correcting operator of a signal
In this example exercise we went to create an operator whose goal is to correct bias using a cumulative average of the various elements of the value window. Then the average difference of the corrected and original value without bias is calculated, and if it exceeds a threshold the system will warn of the warning.
The generated code is DO-178C certified , has not been covered by testing , but only with simulations and debugging , and is written in C.
The modules of the little project are as follows :
1. **Random Operator** = operator which is used to distort the signal randomly , being deterministic code at the same input will result in the same distortion , by nature of the code itself. The random function implemented is the Linear Congruential Generator
 ![Random Operator](img/random.png)
2. **Correcting Operator** =
3. **Iterative Operator** =
