// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// RegisterAll @ 14ae7fe30

void __cdecl
Metasound::Frontend::RegistrationPrivate::FRegistrationListBase::RegisterAll
          (FModuleInfo *param_1,FRegistrationAction *param_2)

{
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  for (; param_2 != (FRegistrationAction *)0x0; param_2 = param_2->Next) {
    if (param_2->Register != (_func___cdecl_bool_FModuleInfo_ptr *)0x0) {
      (*param_2->Register)(param_1);
    }
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// UnregisterAll @ 14ae8dcb0

void __cdecl
Metasound::Frontend::RegistrationPrivate::FRegistrationListBase::UnregisterAll
          (FModuleInfo *param_1,FRegistrationAction *param_2)

{
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  for (; param_2 != (FRegistrationAction *)0x0; param_2 = param_2->Next) {
    if (param_2->Unregister != (_func___cdecl_bool_FModuleInfo_ptr *)0x0) {
      (*param_2->Unregister)(param_1);
    }
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

