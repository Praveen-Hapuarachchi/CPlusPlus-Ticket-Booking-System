# 🎟️ C++ Ticket Booking System

A simple console-based **Ticket Booking System** built in C++ that allows users to book, view, and cancel tickets for various sports events. The system uses a **hash table** to efficiently manage ticket bookings.

## Features 🚀

- **🎫 Book Tickets**: Allows users to book tickets for different sports events (e.g., Cricket, Rugby).
- **👀 View Tickets**: Displays a list of all booked tickets.
- **❌ Cancel Tickets**: Enables users to cancel their ticket bookings.
- **🔑 Efficient Ticket Management**: Utilizes a hash table and linked list for fast booking and cancellation operations.

## Technologies Used 💻

- **C++**: The program is written in C++ using object-oriented principles.
- **🔑 Hash Table**: Hash table implementation for efficient ticket management.
- **🔗 Linked List**: Linked list to store ticket information for each event.

## Classes and Structure 📚

### 1. `Ticket_Node` 📜
- Represents a node in the ticket list.
- Contains customer ID and a pointer to the next ticket.

### 2. `Ticket_List` 🗂️
- Manages the list of tickets for a given event.
- Provides methods to:
  - Book a ticket (first, last, or specific position).
  - Remove the first booked ticket.

### 3. `T_Item` 🏷️
- Represents a ticket item with customer details (ID and name).

### 4. `T_Table` 📊
- Hash table for managing tickets.
- Provides methods for:
  - Booking a ticket.
  - Removing a ticket by customer ID.
  - Checking if a ticket exists.

### 5. `match` ⚽🏏🏀
- Stores match details (event name, match type, teams, start time).

### 6. **Main Menu** 📝
- The program offers an interactive console menu for:
  - Booking tickets.
  - Viewing current ticket bookings.
  - Canceling tickets.
  - Navigating event options.

## Installation 🔧

Follow these steps to set up the project:

1. **Clone the repository**:

   ```bash
   git clone https://github.com/Praveen-Hapuarachchi/CPlusPlus-Ticket-Booking-System.git
   cd CPlusPlus-Ticket-Booking-System
