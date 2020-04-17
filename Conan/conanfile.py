from conans import ConanFile, CMake, tools
import os, re

class Conan(ConanFile):
    name            = "Utils"
    version         = "1.0"
    license         = "freeware"
    repoUrl         = "https://github.com/ssitkowx"
    url             = repoUrl + '/' + name + '.git'
    downloadsPath   = "C:/Users/sitko/.conan/download"
    buildPackage    = True
    description     = ""
    settings        = "os", "compiler", "build_type", "arch"
    options         = {"shared": [True, False]}
    default_options = "shared=False"
    generators      = "cmake"
    author          = "sylsit"
    requires        = "gtest/1.8.1@bincrafters/stable"
    build_requires  = []

    def build(self):
        projectPath  = os.getcwd()
        projectBuild = ""
        
        if self.buildPackage == True:
            projectPath  = downloadsPath + '\\' + self.name
            projectBuild = projectPath + '\\Build'
        else:
            projectPath  = projectPath.replace('\Conan','')
            projectBuild = projectPath + '\\Build'

        print ("!!!2")
        print (projectPath)
        if self.settings.os == 'Windows' and self.settings.compiler == 'Visual Studio':
            cmake = CMake(self)
            cmake.configure(source_dir=projectPath, build_dir=projectBuild)
            cmake.build()
        else:
            raise Exception('Unsupported platform or compiler')
            
        tools.replace_in_file(projectPath + "\\CMakeLists.txt", "Template", self.name, False)
        
    def package(self):   
        projectPath  = os.getcwd()
        projectBuild = ""
        
        if self.buildPackage == True:
            projectPath  = downloadsPath + '\\' + self.name
            projectBuild = projectPath + '\\Build'
        else:
            projectPath  = projectPath.replace('\Conan','')
            projectBuild = projectPath + '\\Build'
            
        print ("!!!3")
        print (projectPath)    
    
        self.copy('*.h'     , dst='include', src= projectPath + '\\Project' , keep_path=False)
        self.copy('*.hxx'   , dst='include', src= projectPath + '\\Project' , keep_path=False)
        self.copy('*.lib'   , dst='lib'    , src= projectPath + '\Build\lib', keep_path=False)
        self.copy('*.dll'   , dst='bin'    , src= projectPath + '\Build\bin', keep_path=False)
        self.copy('*.dylib*', dst='lib'    , src= projectPath + '\Build\lib', keep_path=False)
        self.copy('*.so'    , dst='lib'    , src= projectPath + '\Build\lib', keep_path=False)
        self.copy('*.a'     , dst='lib'    , src= projectPath + '\Build\lib', keep_path=False)

    def package_info(self):
        self.cpp_info.libs = [self.name]
