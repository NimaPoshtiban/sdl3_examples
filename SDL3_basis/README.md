# SDL Basic Window Rendering

## dependencies
- [SDL3](https://github.com/libsdl-org/SDL)
  -  Get a copy of the SDL source. You can clone the repo or download the "Source Code" asset from [the latest release.](https://github.com/libsdl-org/SDL/releases/latest)
  - If you've downloaded a release, make sure to extract the contents somewhere you can find it.
  - Create a new project in Visual Studio, using the C++ Empty Project template
  - Add hello.c to the Source Files
  - Right-click the solution, select Add an existing project, navigate to `VisualC/SDL` from within the source you cloned or downloaded above, and add SDL.vcxproj
  - Select your main project and go to Project -> Add -> Reference and select SDL3
  - Select your main project and go to Project -> Properties, set the filter at the top to "All Configurations" and "All Platforms", select C/C++ -> General and add the SDL include directory to "Additional Include Directories"
  - Build and run!
