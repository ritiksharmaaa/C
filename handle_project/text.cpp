// in thsi we are see how we have to set up a cpp project since i am not working in cpp for building web project but learn for dsa  but lit bit exploring how we build an actula project from cpp . 

// //  here is soe commad to create some basic commad for diffrent typ eod cpp file .

// Step	                                                 Command
// Compile .cpp to .obj       	                         g++ -c source_file.cpp
// Create Static Library.a	                            ar rcs liblibrary.a source_file.o
// Create Shared Library .so (Linux/macOS)	            g++ -shared -o liblibrary.so source_file.o
// Create DLL .dll (Windows)	                        `g++ -shared -o library.dll source_file.o
// Create Import Library .a (for DLL)	                dlltool --def library.def --output-lib liblibrary.a




//  what is .obj file 
// it nothing a obj file is file which not have main function or withou linker . but it a compiled code but not fully coplete becuase to run this you need some other libray to convert it to main.exe file 


// what is .h file 
// .h file have use in two way first use as another file to seprate the   code related to each type of functinality basicalyy orgnize 
// second you can use for givving direction to other rogram to know what the librar . have what type of function  have in libray which we can use it in this .h file we just need to delare the function not define it functinality . 

// .dll and .so file  // 
// this is file which have the actuual declaration of th efunction but it a compiled file of that fucntion declartion in .h file at the end we have to link it to our main program to form a .exe file which

// this exe file tell os when the main program run linker tell os to please load dll and so file olso in the meory .
// so when main proram call this function use it 

// also no two timw calling same dll and so . if one profram load it to memory annother want this dll os give the referce to that memory insted creat copy of into our program .

// what is .lib file 

// lib is nothing it a statci linker . mean no use for other progrsm onlhy you use it and it direclty embed into you main .exe. and yaa basically it not compiled basiclally colection of obj file which can embed in our main program when we build our main.ex 


