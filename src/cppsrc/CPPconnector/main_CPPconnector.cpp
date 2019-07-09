#include <napi.h>

std::string hello(){
  return "Hello World";
}

Napi::String HelloWrapped(const Napi::CallbackInfo& info) 
{
  Napi::Env env = info.Env();
  Napi::String returnValue = Napi::String::New(env, hello());
  
  return returnValue;
}

Napi::Object Init(Napi::Env env, Napi::Object exports) 
{
  exports.Set(
"hello", Napi::Function::New(env, HelloWrapped)
  );
 
  return exports;
}

Napi::Object InitAll(Napi::Env env, Napi::Object exports) {
  return Init(env, exports);
}













NODE_API_MODULE(testaddon, InitAll)