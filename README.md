# cau-51251-spring-2025
**Basic Computer Programming (51251-02) 2025 Spring**

C Programming 예제풀이 및 실습/과제

# 개발 도구 설치 및 실행
- [Developer Survey - Most Popular IDE](https://survey.stackoverflow.co/2024/technology#1-integrated-development-environment)
    - VS Code 권장
-----------
## Windows
Visual Studio 혹은 VS Code 선택하여 사용

### - Visual Studio
- [Visual Studio](https://visualstudio.microsoft.com/ko/)에서 프로그램 다운로드 후 실행
    - Community 버전 (무료)
### - VS Code
#### [GCC 사용을 위한 MinGW64 설치 및 설정]
- [MinGW64](https://github.com/niXman/mingw-builds-binaries/releases)에서 본인의 환경에 맞는 버전 압축파일 다운로드 후 압축 해제
    - 권장: [x86_64-14.2.0-release-posix-seh-msvcrt-rt_v12-rev1.7z](https://github.com/niXman/mingw-builds-binaries/releases/download/14.2.0-rt_v12-rev1/x86_64-14.2.0-release-posix-seh-msvcrt-rt_v12-rev1.7z)
- 내 PC -> 로컬디스크(:C)로 "mingw64" 폴더 이동
- Windows+R -> 실행창에 sysdm.cpl 혹은 검색창에 '환경 변수' 입력 후 '시스템 환경 변수 편집' 선택
- '환경변수' ->  '시스템 변수' -> Path를 선택해 '편집' -> '새로 만들기' -> 제일 끝에 아래 경로 추가
    -     C:\mingw64\bin
- 컴퓨터 재부팅
- 검색창에 'cmd'를 입력 후 명령프롬프트를 열고 아래 실행
    -     gcc -v
 
#### [VS Code 설치]
- [Visual Studio Code](https://code.visualstudio.com/)에서 알맞은 프로그램 다운로드 후 설치
- <확장>에서 "Korean Language Pack for Visual Studio Code" 한글팩 설치
- <확장>에서 "C/C++ Extension Pack" 확장 기능 설치
- <확장>에서 "Code Runner" 확장 기능 설치

#### [c 파일 작성]
- C 파일 생성, 코드 작성 및 저장 (예시: hello.c)
-     #include <stdio.h>
      int main(void)
      {
          printf("Hello World!");
          return 0;
      }

#### [프로그램 실행]
- Run Code로 자동 실행 (단축키: Ctrl + Alt + N)
- 혹은 terminal 이용
    -     gcc hello.c -o hello
    -     ./hello
-----------
## MAC 
MAC의 경우 Visual Studio가 2024년 8월부로 지원되지 않음으로, VS Code 사용

### - VS Code
    
#### [Homebrew 설치]
- Command+스페이스 로 'terminal' 검색 후 terminal 창 열기
- Homebrew 패키지 관리자 설치
    -     bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install.sh)"
    
#### [Homebrew를 통해 GCC 설치]
- 설치
    -     brew install gcc
- 확인
    -     gcc --version    

#### [VS Code 설치]
- [Visual Studio Code](https://code.visualstudio.com/)에서 알맞은 프로그램 다운로드 후 설치
- <확장>(<Extension>)에서 "Korean Language Pack for Visual Studio Code" 한글팩 설치
- <확장>에서 "C/C++ Extension Pack" 확장 기능 설치
- <확장>에서 "Code Runner" 확장 기능 설치

#### [c 파일 작성]
- C 파일 생성, 코드 작성 및 저장 (예시: hello.c)
-     #include <stdio.h>
      int main(void)
      {
          printf("Hello World!");
          return 0;
      }
#### [프로그램 실행]
- terminal에서 다음 순차적으로 실행
    -       gcc hello.c -o hello
    -       ./hello
- 혹은 빌드 (Command + Shift + B) 후 터미널에서 실행
    -     ./hello
- 혹은 Run Code로 자동 실행

----------
## 에러 발생 시 시도해 볼 것들
1. VS Code 설정
- Command+Shift+P를 -> C/C++ 검색 -> "C/C++: 구성편집(UI)" 선택
- 아래와 같이 설정
    - MAC
        - 구성이름=Mac
        - 컴파일러 경로=/usr/local/bin/gcc
        - intelliSense 모드=gcc-x64
    - WINDOWS
        - 구성이름=windows-gcc-x64
        - 컴파일러 경로=C:\mingw64\bin\gcc.exe
        - intelliSense 모드=windows-gcc-x64

-----------
## (선택) Github



