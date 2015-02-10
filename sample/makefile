all:
	g++ -o HelloWorld.out HelloWorld.cpp
	mcs HelloWorld.cs
	javac HelloWorld.java

cpp:
	g++ -o HelloWorld.out HelloWorld.cpp && ./HelloWorld.out

cs:
	mcs HelloWorld.cs && mono HelloWorld.exe

java:
	javac HelloWorld.java && java HelloWorld

run:
	g++ -o HelloWorld.out HelloWorld.cpp && ./HelloWorld.out
	mcs HelloWorld.cs && mono HelloWorld.exe
	javac HelloWorld.java && java HelloWorld

clean:
	rm HelloWorld.out; rm HelloWorld.exe; rm HelloWorld.class
