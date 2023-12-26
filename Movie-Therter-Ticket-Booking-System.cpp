#include <iostream>
#include <string>

using namespace std;

class MovieTicketBookingSystem {
private:
  string firstName;
  string lastName;
  string username;
  string password;
  long mobileNumber;
  string city;
  int selectedTheater;
  int selectedDate;
  int selectedMovie;
  int selectedShowtime;
  int selectedSection;
  int selectedSeats;
  string customerNames[15];
  bool bookingConfirmed;

public:




  void userRegister() {
    cout << "\n\t\t\t\tREGISTER\n\t\t_______________________________________\n";
    cout << "\t\tEnter Your First Name: ";
    cin >> firstName;
    cout << "\t\tEnter Your Last Name: ";
    cin >> lastName;
    cout << "\t\tCreate Your Username: ";
    cin >> username;
    cout << "\t\tCreate Your Password: ";
    cin >> password;
    cout << "\t\tEnter Your City Name: ";
    cin >> city;
    cout << "\t\tEnter Mobile Number: ";
    cin >> mobileNumber;
    cout << "\n\t\tRegistration is "
            "SUCCESSFUL\n\t\t_______________________________________";
  }

  void userLogin() {
    cout << "\n\t\t\t\tLOGIN\n\t\t_______________________________________\n";
    while (true) {
      string enteredUsername, enteredPassword;
      cout << "\t\tEnter Your Username: ";
      cin >> enteredUsername;
      if (enteredUsername == username) {
        cout << "\t\tEnter Your Password: ";
        cin >> enteredPassword;
        if (enteredPassword == password) {
          cout << "\t\tYou Login Successfully\n";
          break;
        } else {
          cout << "\t\tInvalid username or password. Please Re-enter.\n";
        }
      } else {
        cout << "\t\tInvalid username or password. Please Re-enter.\n";
      }
    }
  }

  void enterDate() {
    while (true) {
      cout << "\n\t\t\t\tBOOKING "
              "TICKET\n\t\t_______________________________________\n";
      cout << "\t\t1. Book Tickets\n";
      cout << "\t\t0. Exit\n";
      cout << "\t\tEnter Your Choice: ";
      cin >> bookingConfirmed;
      cout << "\n\t\tEnter Date: ";
      cin >> selectedDate;
      if (selectedDate >= 1 && selectedDate <= 31) {
        break;
      } else {
        cout << "\n\t\tInvalid Date. Please Re-enter.\n";
      }
    }
  }

  void selectTheater() {
    cout << "\n\t\t\t\tTheater\n\t\t_______________________________________\n";
    cout << "\n\t\tSelect Theater:\n";
    cout << "\t\t1. DB Mall\n";
    cout << "\t\t2. Ashima Mall\n";
    cout << "\t\t3. Bharat Takij\n";
    cout << "\t\tSelect Movie Theater: ";

    while (true) {
      cin >> selectedTheater;
      if (selectedTheater >= 1 && selectedTheater <= 3) {
        break;
      } else {
        cout << "\t\tINVALID THEATER. RE-ENTER: \n";
      }
    }
  }

  void selectMovie() {
    while (true) {
      cout << "\n\t\t\t\t\tMOVIE\n\t\t-----------------------------------------"
              "\n";
      cout << "\t\t1. Movie: Animal\n\t\tRuntime: 3h 21m\n";
      cout << "\t\t2. Movie: Sam Bhadur\n\t\tRuntime: 2h 30m\n";
      cout << "\t\t3. Movie: Tiger 3\n\t\tRuntime: 2h 35m\n";
      cout << "\t\t________________________________________________________\n";
      cout << "\n\t\tEnter Your Movie Choice: ";
      cin >> selectedMovie;
      if (selectedMovie >= 1 && selectedMovie <= 3) {
        break;
      } else {
        cout << "\n\t\tInvalid Movie. Please Re-enter.\n";
      }
    }
  }

  void selectShowtime() {
    while (true) {
      cout << "\n\t\t\t\t\tSHOWTIME\n\t\t--------------------------------------"
              "---\n";
      if (selectedMovie == 1 || selectedMovie == 3) {
        cout << "\t\t1. 09:30 AM\n"
             << "\t\t2. 10:45 AM\n"
             << "\t\t3. 05:25 PM\n"
             << "\t\t4. 06:45 PM\n";
      } else {
        cout << "\t\t1. 10:00 AM\n"
             << "\t\t2. 01:00 PM\n"
             << "\t\t3. 06:00 PM\n"
             << "\t\t4. 07:00 PM\n";
      }
      cout << "\t\t________________________________________________________\n";
      cout << "\t\tEnter Showtime Choice: ";
      cin >> selectedShowtime;
      if (selectedShowtime >= 1 && selectedShowtime <= 4) {
        break;
      } else {
        cout << "\n\t\tInvalid Showtime. Please Re-enter.\n";
      }
    }
  }

  void seatBooking() {
    while (true) {
      cout << "\n\t\t\t\t\tSeat "
              "Booking\n\t\t--------------------------------------------\n";
      cout << "\t\t1. Gold Section\n"
           << "\t\t2. Premium Section\n"
           << "\t\t3. Standard Section\n";
      cout << "\t\t__________________________________________________\n";
      cout << "\t\tSelection Section: ";
      cin >> selectedSection;
      if (selectedSection >= 1 && selectedSection <= 3) {
        break;
      } else {
        cout << "\n\t\tInvalid Section. Please Re-enter.\n";
      }
    }
  }

  void reserveSeat() {
    if (selectedSection == 1) {
      cout << "\t\tGold Section\n\t\t Per Seat 250/-\n";
    } else if (selectedSection == 2) {
      cout << "\t\tPremium Section\n\t\t Per Seat 230/-\n";
    } else {
      cout << "\t\tStandard Section\n\t\t Per Seat 200/-\n";
    }

    cout << "\t\tEnter Number of Seats: ";
    cin >> selectedSeats;
  }

  void enterCustomerInfo() {
    cout << "\n\t\t\t\t\tCustomer "
            "Info\n\t\t--------------------------------------------\n";
    for (int i = 1; i <= selectedSeats; i++) {
      cout << "\n\t\tCustomer Names " << i << ": ";
      cin >> customerNames[i];
    }
    cout << "\n\t\tEnter Mobile Number: ";
    cin >> mobileNumber;
    cout << "\n\t\tYour Tickets Has Been Booked Successfully\n"
         << "\t\t--------------------------------------------\n";
  }

  void bill() {
    int totalBill;

    switch (selectedSection) {
    case 1:
      totalBill = selectedSeats * 250;
      break;
    case 2:
      totalBill = selectedSeats * 230;
      break;
    case 3:
      totalBill = selectedSeats * 200;
      break;
    default:
      cout << "\t\tInvalid section";
      return;
    }
    cout << "\t\tTicket Price: " << totalBill << "Rs\n";
  }

  void bookingDetails() {
    long mobile = mobileNumber;
    cout << "\n\n\t\t\t\tBooking Info and "
            "Bill\n\t\t--------------------------------------------\n";
    cout << "\t\tNumber of Seats: " << selectedSeats << endl;
    for (int i = 1; i <= selectedSeats; ++i) {
      cout << "\t\tCustomer Name: " << customerNames[i] << endl;
    }
    if (selectedMovie == 1) {
      cout << "\t\tMovie: Animal\n";
    } else if (selectedMovie == 2) {
      cout << "\t\tMovie: Sam Bhadur\n";
    } else if (selectedMovie == 3) {
      cout << "\t\tMovie: Tiger 3\n";
    }
    if (selectedSection == 1) {
      cout << "\t\tTicket Type: Gold Section\n";
    } else if (selectedSection == 2) {
      cout << "\t\tTicket Type: Premium Section\n";
    } else if (selectedSection == 3) {
      cout << "\t\tTicket Type: Standard Section\n";
    }

    if (selectedSection == 1) {
      string goldSeats[] = {" G1 ",  " G2 ",  " G3 ",  " G4 ",  " G5 ",
                            " G6 ",  " G7 ",  " G8 ",  " G9 ",  " G10 ",
                            " G11 ", " G12 ", " G13 ", " G14 ", " G15"};
      for (int i = 0; i < selectedSeats; i++) {
        cout << "\t\tSeat No: " << goldSeats[i] << endl;
      }
    } else if (selectedSection == 2) {
      string premiumSeats[] = {" P1 ",  " P2 ",  " P3 ",  " P4 ",  " P5 ",
                               " P6 ",  " P7 ",  " P8 ",  " P9 ",  " P10 ",
                               " P11 ", " P12 ", " P13 ", " P14 ", " P15"};
      for (int i = 0; i < selectedSeats; i++) {
        cout << "\t\tSeat No: " << premiumSeats[i] << endl;
      }
    } else if (selectedSection == 3) {
      string standardSeats[] = {" S1 ",  " S2 ",  " S3 ",  " S4 ",  " S5 ",
                                " S6 ",  " S7 ",  " S8 ",  " S9 ",  " S10 ",
                                " S11 ", " S12 ", " S13 ", " S14 ", " S15"};
      for (int i = 0; i < selectedSeats; i++) {
        cout << "\t\tSeat No: " << standardSeats[i] << endl;
      }
    }
    bill();
    cout << "\t\tMobile Number: " << mobile << endl;
  }
};

int main() {
  int selection;
  cout << "\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\t\t\tWelcome to "
          "Movie Ticket Booking "
          "System\n\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
  cout << "\t\tPlease Select Service\n";
  cout << "\t\t1. Register\n";
  cout << "\t\t2. Login\n";
  cout << "\t\t0. Exit\n";
  cout << "\t\t__________________________________________________\n";
  cout << "\t\tSelect Your Choice: ";
  cin >> selection;
  MovieTicketBookingSystem TicketSystem;
  if (selection == 1) {
    TicketSystem.userRegister();
    TicketSystem.userLogin();
    TicketSystem.selectTheater();
    TicketSystem.enterDate();
    TicketSystem.selectMovie();
    TicketSystem.selectShowtime();
    TicketSystem.seatBooking();
    TicketSystem.reserveSeat();
    TicketSystem.enterCustomerInfo();
    TicketSystem.bookingDetails();
  } else if (selection == 0) {
    cout << "\t\tTHANK YOU\n";
  }
  return 0;
}