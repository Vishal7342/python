import speech_recognition as sr
import pyttsx3
import os

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