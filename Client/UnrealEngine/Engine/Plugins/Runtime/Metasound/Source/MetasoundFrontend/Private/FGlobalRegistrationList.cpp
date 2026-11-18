// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 4

// GetHeadAction @ 14ae75b60

FRegistrationAction ** __cdecl
Metasound::Frontend::RegistrationPrivate::FGlobalRegistrationList::GetHeadAction(void)

{
  return &Head;
}

// GetRegisterTailAction @ 14ae787a0

FRegistrationAction ** __cdecl
Metasound::Frontend::RegistrationPrivate::FGlobalRegistrationList::GetRegisterTailAction(void)

{
  return &Tail;
}

// RegisterAll @ 14ae7fd80

void __cdecl
Metasound::Frontend::RegistrationPrivate::FGlobalRegistrationList::RegisterAll
          (FModuleInfo *param_1,FRegistrationAction *param_2)

{
  FRegistrationAction *pFVar1;
  FRegistrationAction *pFVar2;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_Audio_MetaSound.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_Audio_MetaSound.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  pFVar2 = Tail;
  for (pFVar1 = param_2; (pFVar1 != pFVar2 && (pFVar1 != (FRegistrationAction *)0x0));
      pFVar1 = pFVar1->Next) {
    if (pFVar1->Register != (_func___cdecl_bool_FModuleInfo_ptr *)0x0) {
      (*pFVar1->Register)(param_1);
    }
  }
  Tail = param_2;
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// UnregisterAll @ 14ae8dc70

void __cdecl
Metasound::Frontend::RegistrationPrivate::FGlobalRegistrationList::UnregisterAll
          (FModuleInfo *param_1,FRegistrationAction *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\MetasoundFrontendModuleRegistrationMacros.cpp"
                     ,0x65,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

