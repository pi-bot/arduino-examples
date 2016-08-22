# sketchbook
The Arduino IDE sketchbook for the PiBot.  Contains all code examples for use with the arduino-tutorials repo.

### Installation
From the PiBots raspberry Pi Terminal do:
```
cd ~/
rm -rf sketchebook
git clone https://www.github.com/pi-bot/sketchbook.git
```
This will delete the arduiono sketches folder and replace with our piBot version. This folder is now a repo 
and linked to the remote URL. You can check this by:

```
cd sketchbook
git remote -v
```

This should give the details of the repo of your current folder. In order to change and upload changes to
 the repo you need to do some preparation: 
```
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
```

These need to be the same as the user name and password that you have set up for your GitHub account.

For me this is:
```
git config --global user.email "code@pibot.org"
git config --global user.email "pi-bot@github.com"
```

Now it is possible to make changes to the repo locally, then push changes. E.g I changed the README.md file locally and then pushed changes by:  

```  
git commit -a
git push -u origin master
```

It should ask for your password and then proceed to install the changes. You can add authentication to 
remove the need to add the passwords each time.  See Github documentation for this. 

###Editing on Github.com
Because most of what we're doing is text based its pretty convenient to use the GitHub website to edit files and commit the changes .  I've been doing this alot as its easier to then update the repo locally with a simple:

```
git pull
````

###Folder Structure

I've just found out that the Arduino IDE expects each sketch (ending .ino) to exist in a folder of the same name. 
For this reason we will need to have many folders. See [here](https://programmingelectronics.com/understanding-the-arduino-sketchbook-opening-and-saving-arduino-sketches/) for a guide on how the arduino uses the scketchbook. 
 
###Pushing a local repo to git

**PLEASE IGNORE**
This is what I did to create the intial repo in git:
```  
git remote add origin  https://www.github.com/pi-bot/sketchbook.git
```


TBC.
