#include <CPPconnector.h>
//#include <mathLibrary.h>
#include <napi.h>


std::string get_from_shared_library(int input){
  std::string result = get_output(input);
  //fibonacci_init(1, 1);
  return result;//"Hello";
}

Napi::String wrapped_get_from_shared_library(const Napi::CallbackInfo& info) 
{
  Napi::Env env = info.Env();
  if(info.Length()<1||!info[0].IsNumber()){
	Napi::TypeError::New(env, "one number is expected").ThrowAsJavaScriptException();
  }
  Napi::Number input = info[0].As<Napi::Number>();
  Napi::String returnValue = Napi::String::New(env, get_from_shared_library(input.Int32Value()));
  
  return returnValue;
}

Napi::Object Init(Napi::Env env, Napi::Object exports) 
{
  exports.Set(
"hello", Napi::Function::New(env, wrapped_get_from_shared_library)
  );
 
  return exports;
}

Napi::Object InitAll(Napi::Env env, Napi::Object exports) {
  return Init(env, exports);
}






NODE_API_MODULE(testaddon, InitAll)
