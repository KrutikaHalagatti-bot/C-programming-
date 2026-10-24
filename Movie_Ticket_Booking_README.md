# Movie Ticket Booking System in C

## About the Project

The Movie Ticket Booking System is a console-based application developed using the C programming language.
It allows customers to book movie tickets,view booking details, calculate ticket prices, and check the remaining seat availability.

This project was created to practise C programming concepts through a practical application.

## Features

- Movie Listing: Displays available movies, ticket prices, and seat availability.
- Customer Details: Accepts customer names and mobile numbers.
- Input Validation: Validates movie selection, mobile number format, and ticket quantity.
- Ticket Booking: Allows customers to book tickets while checking seat availability.
- Booking ID: Assigns a booking ID to each successful booking during program execution.
- Discount Calculation: Provides a 5% discount for 3–4 tickets and a 15% discount for 5 or more tickets.
- Seat Management: Updates the remaining seats after a successful booking.
- Multiple Customers: Supports repeated bookings during the same program execution.
- Case-Insensitive Response: Accepts "yes", "YES", and "Yes" when asking whether another customer wants to book.

## C Concepts Used

- Structures ("struct")
- Arrays and strings
- User-defined functions
- Loops ("for", "while", and "do-while")
- Conditional statements ("if-else")
- String handling functions
- Input validation
- Basic arithmetic operations

## Movies Included

Movie---Ticket Price
Kalki 2:- ₹300
Spider Man:- ₹200
Jailer 2:- ₹200
Drishyam: The Conclusion :-₹250

## Discount Rules

Number of Tickets--- Discount
1–2:- 0%
3–4:- 5%
5 or more:- 15%

## Current Limitations

- Booking records are stored only during the current program execution.
- Booking IDs restart when the program is run again.
- Movie details and ticket prices are predefined in the source code.
- The project currently uses a console-based interface.

## Future Improvements

- Store booking records permanently using file handling.
- Retrieve previous bookings using a booking ID.
- Add cancellation and refund functionality.
- Allow movie details and seat capacities to be updated.

##  Author

Developed as a C programming learning project to strengthen problem-solving skills and understanding of structures, functions, arrays, strings, and input validation.
