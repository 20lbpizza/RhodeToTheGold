/**
 * This is the starting point for all new projects.  This file's purpose is
 * pretty small, but important.  In here we create our application and begin
 * the application.
 *
 * @file main.cpp
 * @author Geoff Conklin
 * @date 20171109 - Inital file inception
 */

int main(int argc, char* argv[])
{

  // 1)
  int ExitCode = 0; // Todo, create error handler class and set default value here
                    // Todo, create generic log file programs
  AppClass::IApp* App = new(std::nothrow) AppClass::MyApplication(); // Use std::nothrow to return null if constructor fails
  assert(NULL != App && "main() Can't create Application");          // If pointer is null then terminate program with message

  // 2)
  App->ProcessArguments(argc, argv);
  ExitCode = App->Run();

  // 3)
  delete App;
  App = NULL;
  return ExitCode;
}

/*
1) Attempt to open app and error handle if failure. Also open logfile.
2) Input arguments for the application and then run the application
3) Garbage collect and return ecode
*/
