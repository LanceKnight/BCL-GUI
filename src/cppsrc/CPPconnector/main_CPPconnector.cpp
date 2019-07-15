#include <CPPconnector.h>
#include <napi.h>


std::string &get_available_properties_from_bcl(){
  std::string result =  bcl::chemistry::LigandDesignHelper::GetAvailableProperties();
  return result;
}


std::string &get_available_predictions_from_bcl(){
  std::string result =  bcl::chemistry::LigandDesignHelper::GetAvailablePredictions();
  return result;
}


void set_jar_directory_from_bcl(const std::string &JAR_FILE_DIR){
  bcl::chemistry::LigandDesignHelper::SetJarDirectory(JAR_FILE_DIR);
}

std::string calculate_properties_from_bcl(const std::string &MOLECULE, const std::string &PROPERTIES){	
  bcl::chemistry::LigandDesignHelper::CalculateProperties(const std::string &MOLECULE, const std::string &PROPERTIES);
}

std::string process_molecule_from_bcl(const std::string &MOLECULE, const std::string &DESCRIPTORS){
	bcl::chemistry::LigandDesignHelper::ProcessMolecule(const std::string &MOLECULE, const std::string &PROPERTIES);
}


Napi::String wrapped_get_available_properties_from_bcl(const Napi::CallbackInfo& info) 
{
  Napi::Env env = info.Env();
  Napi::String returnValue = Napi::String::New(env, get_available_properties_from_bcl());
  
  return returnValue;
}


Napi::String wrapped_get_available_predictions_from_bcl(const Napi::CallbackInfo& info) 
{
  Napi::Env env = info.Env();
  Napi::String returnValue = Napi::String::New(env, get_available_predictions_from_bcl());
  
  return returnValue;
}


Napi::String wrapped_calculate_properties_from_bcl(const Napi::CallbackInfo& info) 
{
  Napi::Env env = info.Env();
  if(info.Length()<2||!info[0].IsString()||!info[1].IsString()){
	Napi::TypeError::New(env, "two strings are expected").ThrowAsJavaScriptException();
  }
  Napi::String input1 = info[0].As<Napi::String>();
  Napi::String input2 = info[1].As<Napi::String>();

  Napi::String return_value = Napi::String::New(env, calculate_properties_from_bcl(input1.String(), input2.String()));

  
  return return_value;
}


Napi::String wrapped_process_molecule_from_bcl(const Napi::CallbackInfo& info) 
{
  Napi::Env env = info.Env();
  if(info.Length()<2||!info[0].IsString()||!info[1].IsString()){
	Napi::TypeError::New(env, "two strings are expected").ThrowAsJavaScriptException();
  }
  Napi::String input1 = info[0].As<Napi::String>();
  Napi::String input2 = info[1].As<Napi::String>();

  Napi::String return_value = Napi::String::New(env, process_molecule_from_bcl(input1.String(), input2.String()));

  
  return return_value;
}

Napi::Object Init(Napi::Env env, Napi::Object exports) 
{
  exports.Set(
"get_available_properties_from_bcl", Napi::Function::New(env, wrapped_get_available_properties_from_bcl)
  );

  exports.Set(
"get_available_predictions_from_bcl", Napi::Function::New(env, wrapped_get_available_predictions_from_bcl)
  );

  exports.Set(
"calculate_properties_from_bcl", Napi::Function::New(env, wrapped_calculate_properties_from_bcl)
  );

  exports.Set(
"process_molecule_from_bcl", Napi::Function::New(env, wrapped_process_molecule_from_bcl)
  ); 
  return exports;
}

Napi::Object InitAll(Napi::Env env, Napi::Object exports) {
  return Init(env, exports);
}






NODE_API_MODULE(testaddon, InitAll)
