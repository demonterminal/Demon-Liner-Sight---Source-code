# Demon-Liner-Sight---Source-code
Demon Liner Sight is a startup build for developing terminals with C++ and with a lot of power and this is the official Source Code on Demon Liner Sight GitHub. Don't forget to check it out right now!

## Startup Planning!
Ok so are you planing to really get started with ?If yes then follow the guid!

## Guide
### Step1.) Select the appropriate branch and try to select the latest branch available to ensure the smoother experience.
### Step2.) Download the source code as zip.
### Setp3.) Create a destination directory.
### Setp4.) Extract the Source code to the Destination directory.
### Step5.) Finally compile the main.cxx file with command
<pre><code>
g++ ./path-to-destination-directory main.cxx -o main
</code></pre>
### Step6.) If you don't get any kind of error then launch the main executabbble by
<pre><code>
./path-to-destination-directory/main.out
</code></pre>
### Make sure to replace path-to-destination-directory with actuall path to destination directory to ensure that there is not any error.
## Finally if everything done smoothly then, Congratulations! You has setted up the Demon Liner Sight Source Code in your computer and you are ready to go. But before doing any thingg make sure to also check the supported platforms.

## Supported platforms
Linux
Android
MS Windows 10 & MS Windows 11

# Source Code Explanation of Demon Liner Sight
./root/
--main.cxx : This file contains all the commands executable format which allows you to run commands on CLI
--sys_commands.hpp : This file contains all the system commands of Demon Liner Sight (Also known as std command) make sure to modify this if adding custom commands
--sys_func.hpp : This file contains all the callable functions for CLI (make sure to edit this if dding custom functions)
--sys_var.hpp : This file contains all the non callable but important and critical variables for C++ CLI.
./root/commands/ : This directory contains all the commands with extension .hpp for c++ to execute directly.
./root/config/boot/ : This contains CLI Startup files which are necessary to load the CLI custom data

# Congrattulations for completing the reading! If you are still here then why wait go ahead and install this source code in your project 
