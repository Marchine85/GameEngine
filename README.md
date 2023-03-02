# GameEngine (Name: Chocolate)
FH Game Engine Developement


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
#####	2. Compared to many other version control systems, Git has a distributed version control system, which means that repositories can be distributed
#####	to several local machines where people can work independently on it.

## Name known issues related to game engines (Unreal, Unity) and version control systems:

#####	- Large file sizes: version control systems have problems (get slow) in handling large file sizes which are typical to game engines, due to textures, 3d objects, audio, etc.
#####	- Binary files: hard to compare with typical file comparisons.
#####	- Folder Structure: can be complex, multiple people working on it, changes to structure might be hard for version control systems.
#####	- Auto-generated Metadata files by Unity or Unreal Engine can be hard to handle for version control systems when merging.
#####	- ...
