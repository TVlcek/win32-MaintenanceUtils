# MaintenanceUtils
-small set of tools and utilities for automating everyday maintenance tasks in a form of a Windows GUI application

## Features (WIP):
-(Will) provide a handful of easy-to-use tools that would normally take time and effort to properly automate
with traditional scripting tools/ways such as Windows PowerShell, CMD, VBS at the touch of a fingertip.
-Meant to provide a generally sound and user friendly UI with overview
-Extremely lightweight, fast and easy to deploy -> built from scratch using raw Windows API (Win32 API) in C++
with little to no dependencies and no wrappers/frameworks and managed code that introduces performance overhead

### Prerequisites to build
-Requires atleast Microsoft Visual Studio 2022 (might build on older versions) with MSVC v143 compiler
-Windows SDK (10.0xx and newer)
-A 64 bit version of Windows (NT-based, so basically anything around or above Windows 2000/XP)

the solution is also set to strictly enforce C++ 20 standards (and newer)
**Note: Microsoft Visual C++ Runtime is statically linked, so MSVC builds it automatically into the .exe during runtime**
