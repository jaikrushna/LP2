class Ticket:
    def _init_(self, id, title, description, status="Open"):
        self.id = id
        self.title = title
        self.description = description
        self.status = status

class HelpDesk:
    def _init_(self):
        self.tickets = []
        self.next_ticket_id = 1

    def create_ticket(self, title, description):
        ticket = Ticket(self ,next_ticket_id, title, description)
        self.tickets.append(ticket)
        self.next_ticket_id += 1
        print(f"Ticket #{ticket.id} created.")

    def close_ticket(self, ticket_id):
        for ticket in self.tickets:
            if ticket.id == ticket_id:
                ticket.status = "Closed"
                print(f"Ticket #{ticket.id} closed.")
                return
        print("Ticket not found.")

    def display_tickets(self):
        print("Tickets:")
        for ticket in self.tickets:
            print(f"Ticket #{ticket.id} - {ticket.title} ({ticket.status})")
            print(f"Description: {ticket.description}")
            print()

# Creating a help desk object
help_desk = HelpDesk()
# User input for creating tickets
while True:
    title = input("Enter the ticket title (or 'quit' to exit): ")
    if title.lower() == "quit":
        break
    description = input("Enter the ticket description: ")
    help_desk.create_ticket(title, description)
    print()

# User input for closing tickets
while True:
    ticket_id = input("Enter the ticket ID to close (or 'quit' to exit): ")
    if ticket_id.lower() == "quit":
        break
    try:
        ticket_id = int(ticket_id)
        help_desk.close_ticket(ticket_id)
    except ValueError:
        print("Invalid ticket ID. Please enter a valid integer.")
    print()

# Displaying tickets
help_desk.display_tickets()
