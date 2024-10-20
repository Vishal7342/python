import speech_recognition as sr
import pyttsx3
import os
import datetime
from Speak import speak

# Initialize the recognizer and TTS engine

def take_command():
    r = sr.Recognizer()
    engine = pyttsx3.init()

    """Listen for commands from the user."""
    with sr.Microphone() as source:
        print("Listening...")
        r.pause_threshold = 1
        audio = r.listen(source,0,8)

    try:
        print("Recognizing...")
        query = r.recognize_google(audio, language='en-in')
        print(f"User said: {query}\n")
        
    except Exception as e:
        print(e)
        print("Say that again please...")
        return ""
    
    query = str(query).lower()    
    return query

while(1):
    take_command()
    def greet():
        # """Greet the user based on the time of day."""
        hour = datetime.datetime.now().hour
        if 0 <= hour < 12:
            speak("Good morning!")
        elif 12 <= hour < 18:
            speak("Good afternoon!")
        elif 18 <= hour < 24:
            speak("ok")
        else:
            speak("Good evening!")
        speak("I am JARVIS. How can I assist you today?")
        
    greet()
    
    exit(0)   


# def Listen():
#     r = sr.Recognizer()

#     with sr.Microphone() as source:
#         print("Listening....")
#         r.pause_threshold = 1
#         audio = r.listen(source,0,8)
#         print(f"User said: {query}\n")
#     try:
#         print("Recognizing...")
#         query = r.recognize_google(audio,language="en")

#     except:
#         print(e)
#         print("Say that again please...")
#         return ""

#     query = str(query).lower()
    
#     return query

# Listen()