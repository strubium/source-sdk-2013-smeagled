# Source SDK 2013 Smeagled 
This is my modified copy of the Source SDK to serve as a base for a multiplayer game I am working on.

Features:
* Compiling under VS2022!!! (Based on [ozxybox](https://github.com/Source-SDK-Resources/source-sdk-vs2022)'s work)
* On death, you will not go into third person.
* ent_fire's delay can now be a decimal
* HUGE compile time increase for vrad.exe (Was 30 minutes, now 6.5)
  * I highly recommend looking at the original PR for this, it's very cool https://github.com/ValveSoftware/source-sdk-2013/pull/436   
* vrad.exe now uses 32 threads instead of 16
* Proximity voice chat in multiplayer
* Improved the preformence of Glow Outlines
* Removed MOTD's 
* Added Footstep sounds when you walk on props
* Added View Bobbing
* Improved Vechicle networking
* Higher Quality projected textures
* Added support for 4 shadow maps
* Texture Streaming, based on <code>[Arsenio2044](https://github.com/Arsenio2044/arsenio-src/tree/Arsenio-2023-engine)</code>
* Twice the number of entites (Was 2048, is now 4096)
* Brush based ladders
  * "add <code>%compileladder" 1 </code> and it will work as a ladder
* SSE2 Support

Bug Fixes:
* Props will now use their scrapeSmooth sound if they have one
* SCHED_HOLD_RALLY_POINT now uses the right operator
* Fixed <code>func_monitor</code> not networking properly in multiplayer
* Fixed being unable to detonate <code>weapon_slam</code> when having a satchel in the world and ready tripmine in hands.
* When using HL2MP, the BASEPLAYERCLASS will CBaseMultiplayerPlayer, instead of CBasePlayer
* "Node Graph out of Date. Rebuilding..." will only display if you're in developer mode.
* Fixed infinite recursion by using incorrect key on value conversation in <code>baseentity_shared.cpp</code>
* Fixed Ambient generic not wanted to stop and toggle
* Fixed smoothing groups not working on detail brushes 

Coming Soon: 
* Webm video support (Using [Webm Video Services](https://github.com/nooodles-ahh/video_services/tree/master))
* 7.1 surround sound support (Using Creative Alchemy)
* DirectX 9 by default (Source 2013 sometimes defaults to using DirectX 8) 
* VPhysics Jolt (Optimized Physics)  
