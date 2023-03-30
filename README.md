# GameEngine (Name: Chocolate)
FH Game Engine Developement

# EXERCISE 4 - Questions

## What is a precompiled header? Name pros and cons:

#####	Precompiled Headers (PCH) are headers which summarize commonly used headers into one to speed up compile time for large programs.

#####	Pros: Faster compile time; Simplifies build process; reduces memory usage

#####	Cons: Increased disk space; for small projects though, build time can increase; 

## Describe the layer of abstraction with your own words:

##### A layer of abstraction describes the way of hidding code complexity and simplify interaction. E.g. API, where programmers can use a simplified interface, and dont need to know or deal with underlying complexity. This allows programmers to focus on higher level implementation. Abstraction is a key concept in software development that can help create more modular, flexible, and maintainable code.

## Name the SOLID principles and describe them briefly:

#####	1. S ingle Responsibility Principle (SRP): A class has only one job and not multiple unrelated tasks.

#####	2. O pen-Closed Principle (OCP): Classes/Methods should be open for extension, but closed for modification.

#####	3. L iskov Substitution Principle (LSP): Objects of a super-class should be replaceable with objects of a sub-class without affecting or breaking the program.

#####	4. I nterface Segregation Principle (ISP): Break downinterfaces in smaller portions instead of having one monolithical complex one.

#####	5. D ependency Inversion Principle (DIP): High level modules shouldnt be directly dependent low level modules but on abstractions, like APIs.


# EXERCISE 3 - Questions

## What is the difference between a dynamic linked library and a static library?

#####	1. Dynamically Linked Library (*.dll files) is a library thats linked at runtime of the program, therefore its not incorporated into the compiled executable. They are loaded into the memory when running the program and can be shared by multiple programs at the same time.

#####	2. Static Library (*.lib files) is a library thats incorporated directly into the executable at compile time. Therefore, a static library is a direct part of the software and not separable anymore after compiling.

## Describe an event system with your own words:

##### An event system used for sending events to objects in the application based on input (keyboard, mouse, etc.). They components of the event system work together to send events.

## What is a Design Pattern?

#####	A design pattern in software engineering arises when a problem appears multiple times and different programmers working independently on similar solutions, which means that the individual solutions can be combined into one.

## Name and describe 2 Design Patterns (except façade or adapter):

##### 1. Singleton: This design pattern has only one instance (a "single" instance) which can be accessed globally. In other words its a class thats typically used many times by other parts of the code. An typical example is a logging class.

##### 2. Iterator: This design pattern provides an efficient way to traverse through elements of a collection. It is commonly used in many programming languages and frameworks, including Java, C#, and Python, and is particularly useful for working with collections of data, such as lists, arrays, and maps. It can simplify code by eliminating the need for explicit loop constructs and providing a more natural way to traverse the elements of a collection.


# EXERCISE 2 - Questions

## Describe a logging system with your own words:

#####	A logging system is basically a translator between the program and the user, telling the user whats going in which step and where errors or warnings in the execution appeared. It also tells the user important information about the ongoing process.

## What is the difference between git submodules and git subtrees?

#####	1. git submodules allows for cloning specific commits of repositories into main/parent repositories. So when the parent respository is updated also the link to the commit of the sub-repository is cloned/updated. Therefore in large projects people can work independently in different repositories which are dependent on each other.

#####	2. git subtrees allow for merging of repositories into sub-directories of the main repository. Therefore subtrees are directly part of a main repository and changes through the history of the project can be tracked within the main repository. 

## What is a build system in C++? Name 3 build systems:

#####	A build system is a tool to orchestrate the compiling and linking of code/files in a GUI or scriptable way to generate an executable file. 
#####	Build Systems:
#####	1. CMAKE
#####	2. MAKE
#####	3. PREMAKE
	

## What is a package manager in C++? Name 3 package manager:

#####	A package manager manages dependencies inside a project and 3rd party libraries. They are working as a project repository of packages and manage their updates and dependencies.
#####	Package Managers:
#####	1. VCPKG
#####	2. HUNTER
#####	3. CONAN


# EXERCISE 1 - Questions

## What is the difference between git and github?

#####	Git is a version control system that runs locally on your computer to manage file changes over time, collaborate with others, and revert to earlier versions if necessary.

#####	GitHub is a web platform where Git repositories are hosted and where on can collaborate with other developers. Repos in Github can be synced with local instances.
#####	Code can be shared and everybody can contribute and work on open source projects. Its also capable to host wiki documentations and other project-related resources.


## Name 3 benefits of a version control system:

#####	1. Track changes of projects (files), by when was it changed, who made the change and what was the change.

#####	2. Collaboration with other, multiple people can work on one project simultaniously.

#####	3. Since version control systems keep track of change, one can go back and recover old versions.

## Name 3 alternatives to git:

#####	Subversion (SVN), Azure DevOps, Mercurial

## Name 2 differences between git and other version control systems:

#####	1. Git has a unique branching mechanism, allowing different code branches to e.g. write different algorithms of the same project independently.
#####	2. Compared to many other version control systems, Git has a distributed version control system, which means that repositories can be distributed to several local machines where people can work independently on it.

## Name known issues related to game engines (Unreal, Unity) and version control systems:

#####	- Large file sizes: version control systems have problems (get slow) in handling large file sizes which are typical to game engines, due to textures, 3d objects, audio, etc.
#####	- Binary files: hard to compare with typical file comparisons.
#####	- Folder Structure: can be complex, multiple people working on it, changes to structure might be hard for version control systems.
#####	- Auto-generated Metadata files by Unity or Unreal Engine can be hard to handle for version control systems when merging.
#####	- ...
