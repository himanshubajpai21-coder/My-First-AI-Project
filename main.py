import speech_recognition as sr

# Initialize the recognizer
r = sr.Recognizer()

# Use the microphone as the source
with sr.Microphone() as source:
    print("Adjusting for background noise... please wait.")
    r.adjust_for_ambient_noise(source, duration=1)
    print("I'm listening! Say something like 'Open Google'...")
    
    # Listen for the user's voice
    audio = r.listen(source)

try:
    # Use Google's free web API to recognize the speech
    text = r.recognize_google(audio)
    print(f"You said: {text}")
    
    # Simple logic to make it 'smart'
    if "google" in text.lower():
        import webbrowser
        webbrowser.open("https://www.google.com")
        print("Opening Google for you!")

except sr.UnknownValueError:
    print("Sorry, I couldn't understand the audio.")
except sr.RequestError:
    print("Could not request results from the service.")# Auto detect text files and perform LF normalization
* text=auto
