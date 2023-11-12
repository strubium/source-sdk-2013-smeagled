# Source SDK 2013 Smeagled 
This is my modified copy of the Source SDK to serve as a base for a game I am working on 

Features:
* Compiling under VS2022!!!
* Props will now use their scrapeSmooth sound if they have one
* On death, you will not go into third person.
* ent_fire's delay can now be a decimal
* SCHED_HOLD_RALLY_POINT now uses the right operator
* HUGE compile time increase for vrad.exe (Was 30 minutes, now 6.5)
  * I highly recommend looking at the original PR for this, it's very cool https://github.com/ValveSoftware/source-sdk-2013/pull/436   
* vrad.exe now uses 32 threads instead of 16      
