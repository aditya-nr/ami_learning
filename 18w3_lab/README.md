### Write a program for ATM withdrawal
- At start it enable deposit where you have to deposit money with the denomination of 500, 200, 100, 50. Once deposited it should display the available total balance and the denomination details. (This should happen only one time )
- Then a menu should show to withdraw, Balance enquiry, Exit
- when the withdrawal amount was entered it should check whether it is a valid input? , Balance is available in account? Amount is within the available denominations
- After withdrawal it should show the available total balance alone. 
- Proper denomination is calculated based on the availability and decremented from the total denominations
- when balance enquiry menu is selected display the balance total amount and the available denomination
- when exit is selected display "Thanks for visiting " and terminate the program

## Compile 
```bash
make 
```

## Run
```bash
make run
```

## Generate documentation
```bash
doxygen Doxyfile
```

## Generate pdf documentation
```bash
doxygen Doxyfile
cd docs/latex
make
mv refman.pdf ../..
make clean
cd ../..
```