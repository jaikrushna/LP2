import datetime

# Define the chatbot's responses
responses = {
    "hello": "Hello!",
    "how are you?": "I'm good, thank you!",
    "what's your name?": "My name is Chatbot.",
    "date": str(datetime.date.today()),
    "time": str(datetime.datetime.now().time()),
    "bye": "Goodbye!",
}

# Chatbot function
def chatbot():
    while True:
        user_input = input("User: ").lower()
        if user_input in responses:
            if user_input == "date" or user_input == "time":
                print("Chatbot:", "The current", user_input, "is", responses[user_input])
            else:
                print("Chatbot:", responses[user_input])
        else:
            print("Chatbot: I'm sorry, I don't understand.")

        if user_input == "bye":
            break

# Run the chatbot
chatbot()
