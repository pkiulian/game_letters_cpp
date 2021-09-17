##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=snake_demo_easy
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/IDPP/Documents/cpp_workspace
ProjectPath            :=C:/Users/IDPP/Documents/cpp_workspace/snake_demo_easy
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=idpp
Date                   :=22/12/2020
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :="C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/g++.exe"
SharedObjectLinkerName :="C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/g++.exe" -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="snake_demo_easy.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :="C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/windres.exe"
LinkOptions            :=  -static
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := "C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/ar.exe" rcu
CXX      := "C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/g++.exe"
CC       := "C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/gcc.exe"
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/ScrollPosition.cpp$(ObjectSuffix) $(IntermediateDirectory)/Renderer.cpp$(ObjectSuffix) $(IntermediateDirectory)/Game.cpp$(ObjectSuffix) $(IntermediateDirectory)/Subject.cpp$(ObjectSuffix) $(IntermediateDirectory)/Observer.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/IDPP/Documents/cpp_workspace/snake_demo_easy/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/ScrollPosition.cpp$(ObjectSuffix): ScrollPosition.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ScrollPosition.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ScrollPosition.cpp$(DependSuffix) -MM ScrollPosition.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/IDPP/Documents/cpp_workspace/snake_demo_easy/ScrollPosition.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ScrollPosition.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ScrollPosition.cpp$(PreprocessSuffix): ScrollPosition.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ScrollPosition.cpp$(PreprocessSuffix) ScrollPosition.cpp

$(IntermediateDirectory)/Renderer.cpp$(ObjectSuffix): Renderer.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Renderer.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Renderer.cpp$(DependSuffix) -MM Renderer.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/IDPP/Documents/cpp_workspace/snake_demo_easy/Renderer.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Renderer.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Renderer.cpp$(PreprocessSuffix): Renderer.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Renderer.cpp$(PreprocessSuffix) Renderer.cpp

$(IntermediateDirectory)/Game.cpp$(ObjectSuffix): Game.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Game.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Game.cpp$(DependSuffix) -MM Game.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/IDPP/Documents/cpp_workspace/snake_demo_easy/Game.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Game.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Game.cpp$(PreprocessSuffix): Game.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Game.cpp$(PreprocessSuffix) Game.cpp

$(IntermediateDirectory)/Subject.cpp$(ObjectSuffix): Subject.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Subject.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Subject.cpp$(DependSuffix) -MM Subject.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/IDPP/Documents/cpp_workspace/snake_demo_easy/Subject.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Subject.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Subject.cpp$(PreprocessSuffix): Subject.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Subject.cpp$(PreprocessSuffix) Subject.cpp

$(IntermediateDirectory)/Observer.cpp$(ObjectSuffix): Observer.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Observer.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Observer.cpp$(DependSuffix) -MM Observer.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/IDPP/Documents/cpp_workspace/snake_demo_easy/Observer.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Observer.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Observer.cpp$(PreprocessSuffix): Observer.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Observer.cpp$(PreprocessSuffix) Observer.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


