In summary to compile in a terminal:

    Open a terminal window

    change the working directory to the directory of the program

    Make sure names of folders and files do not have spaces in them

    To compile the program: g++ filename.cpp -o executableName

    To execute the program: ./executableName

Common mistakes when executing in the terminal:

    Make sure there are no spaces in filenames

    Make sure all the files you need are in the working directory (including header files), use 'ls' to check











Compiling

Compiling is the process of translating the code that you've written into machine code that processors understand. Every program, regardless of the source language, needs to be compiled in order to execute. This is true even for scripting languages like Python or JavaScript. In these cases, the interpreter (or a similar system) is responsible for compiling code on the fly in a process known as just-in-time compiling. To the user, compilation and execution of scripting languages are effectively a single action. (Of course, the actual process of compiling code at run-time is much more complicated than what was described here in one sentence. It's also very much dependent on the exact language and runtime in question.)

Unlike scripted languages, compiled languages treat compilation and execution as two distinct steps. Compiling a program leaves you with an executable (often called a "binary"), a non-human readable file with machine code that the processor can run.

The nice thing about binaries is that they're generally distributable. So long as it was built with the right architecture in mind, you can copy an executable and run it immediately on other machines (like downloading a .exe file on Windows) without any need to share your source code or have the user perform any intermediate tasks before execution.

There are many tools available to help you compile, ranging from barebones tools, such as g++ on Unix, to complex build systems that are integrated into IDEs like Visual Studio and Eclipse.

There is a high-level build tool called CMake that is fairly popular and cross-platform. CMake in and of itself, however, does not compile code. CMake results in compilation configurations. It depends on a lower-level build tool called Make to manage compiling from source. And then Make depends on a compiler to do the actual compiling.

The script for this video is included below.
Object Files

Compiling source code, like a single .cpp file, results in something called an object file. An object file contains machine code but may not be executable in and of itself. Among other things, object files describe their own public APIs (usually called symbols) as well as references that need to be resolved from other object files. Depended upon object files might come from other source files within the same project or from external or system libraries.

In order to be executable, object files need to be linked together.
Linking

Linking is the process of creating an executable by effectively combining object files. During the linking process, the linker (the thing that does the linking) resolves symbolic references between object files and outputs a self-contained binary with all the machine code needed to execute.

As an aside, linking is not required for all programs. Most operating systems allow dynamic linking, in which symbolic references point to libraries that are not compiled into the resulting binary. With dynamic linking, these references are resolved at runtime. An example of this is a program that depends on a system library. At runtime, the symbolic references of the program resolve to the symbols of the system library.

There are pros and cons of dynamic linking. On the one hand, dynamically linked libraries are not linked within binaries, which keeps the overall file size down. However, if the library changes at any point, your code will automatically link to the new version. Like any changing dependency, difficult to fix and surprising bugs sometimes arise when versions change.
Compiling to Executable with a Compiler

Technically, you only need a compiler to compile C++ source code to a binary. A compiler does the dirty work of writing machine code for a given processor architecture. There are many compilers available. For this course, we picked the open source GNU Compiler Collection, more commonly called G++ or GCC. gcc is a command line tool.

There are two challenges with using gcc alone, both of which relate to the fact that most C++ projects are large. For one thing, you need to pass the paths for all of the project's source header files and cpp files to gcc. This is in addition to any compiler flags or options. You can easily end up with single call to gcc that spans multiple lines on a terminal, which is unruly and error-prone.

Secondly, large projects will usually contain multiple linked binaries, each of which is compiled individually. If you're working in large project and only change one .cpp file, you generally only need to recompile that one binary - the rest of your project does not need to be compiled again! Compiling an entire project can take up to hours for large projects, and as such being intelligent about only compiling binaries with updated source code can save lots of time. GCC in and of itself is not smart enough to recognize what files in your project have changed and which haven't, and as such will recompile binaries needlessly - you'd need to manually change your gcc calls for the same optimizations. Luckily, there are tools that solve both of these problems!


Make sure you have the C++ libraries loaded on your machine.

Let's find out if we have C++ on our computer.
At the terminal prompt, type in

g++ -help


for win https://arachnoid.com/cpptutor/setup_windows.html