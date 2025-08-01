Apply Login screen Backhground

1. Check which Display manager you are using:
   sudo cat/etc/systemd/display-manager.services
    
    if its: Description=Light Display Manager,  its lightdm 

2. Copy Wallpaper Imgage to Default location from current 
    sudo cp /current image path/image.jpg/usr/share/backgrounds/			
 
    In my case it looks like this:
    sudo cp /home/kirti/Downloads/Walls/Log.jpg  /usr/share/backgrounds/

3. Check which greeter is used
	cat /etc/lightdm/lightdm.conf | grep greeter-session
	If it apears:
	greeter-session=lightdm-slick-greeter
	It's slick greeter

4. Install Required packages of that greeter hete its slick-greeter
	sudo pacman -S slick-greeter lightdm lightdm-settings gtk3 gnome-themes-extra
    
	- If packages are missing, install yay to get them from AUR:
	
	sudo pacman -S git base-devel
    cd ~
    git clone https://aur.archlinux.org/yay.git
    cd yay
    makepkg -si

5. To install lightdom-setting
    yay -S slick-greeter lightdm-settings

6. Check slick-greeter configure properly or not 
	 open: 
	 sudo nano /etc/lightdm/slick-greeter.conf 
	- Add: 
        [Greeter]
        background=/usr/share/backgrounds/Log.jpg

	- If file is empty create it and add: 

7. Now open lightdm from and add login BG from GUI: 
	sudo lightdm-settings  				# Make sure lightdm-setting should be installed img should appear in bg
	Appearance<Background				# Login window will open in root so check carefully
	Save and click okay 

8. To Apply changes Restart lightdm:
	sudo systemctl restart lightdm		#Logout and login it should appear

