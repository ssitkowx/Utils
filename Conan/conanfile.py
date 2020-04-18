from conans import ConanFile, CMake, tools
import os, re

class Conan(ConanFile):
    name            = "Utils"
    version         = "1.0"
    license         = "freeware"
    repoUrl         = "https://github.com/ssitkowx"
    url             = repoUrl + '/' + name + '.git'
    downloadsPath   = "C:/Users/sitko/.conan/download"
    description     = ""
    settings        = "os", "compiler", "build_type", "arch"
    options         = {"shared": [True, False]}
    default_options = "shared=False"
    generators      = "cmake"
    author          = "sylsit"
    requires        = "gtest/1.8.1@bincrafters/stable"
    build_requires  = []

    def build(self):
        projectPath  = os.getcwd().replace('\Conan','')
        projectBuild = projectPath + '\\Build'
        
        if not os.path.exists(projectPath + '\\CMakeLists.txt'):
            projectPath  = self.downloadsPath + '\\' + self.name
            projectBuild = projectPath + '\\Build'

        if self.settings.os == 'Windows' and self.settings.compiler == 'Visual Studio':
            cmake = CMake(self)
            cmake.configure(source_dir=projectPath, build_dir=projectBuild)
            cmake.build()
        else:
            raise Exception('Unsupported platform or compiler')
            
        tools.replace_in_file(projectPath + "\\CMakeLists.txt", "Template", self.name, False)
