# Robotic-Guide-BOTS
The objective of the hack is to bring bots that can act as substitutes for tour guides in case of their absenceThe bots will follow a line drawn on the museum floor which will take them from one exhibit to the other. the exhibits will be given an RFID tag which will be scanned by the bots. Now this tag will be recognised by the bot and the details of the exhibit will be explained to the people by using a pre-recorded audio from its database.
WORKING:
The first set of arduino codes ("line follower.ino") controls the movemennt of the bot which is basically a line follower robot.
The second arduino code ("rfid-py") reads the rfid tags using the rfid scanner and sends the tag id serially.
The python code("rfid_pi") is run in a raspberry pi development board into which we store the audio files corresponding to each rfid tags. The python code plays the audio corresponding to the tag id it recieved from the arduino.
