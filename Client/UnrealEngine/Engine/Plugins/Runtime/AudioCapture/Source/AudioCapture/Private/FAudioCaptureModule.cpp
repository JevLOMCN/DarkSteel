// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCapture
// Functions: 2

// StartupModule @ 14d0cd9d0

void __thiscall FAudioCaptureModule::StartupModule(FAudioCaptureModule *this)

{
  bool bVar1;
  FModuleManager *this_00;
  FName *pFVar2;
  ForAnyElementType FVar3;
  FLLMScope local_res10 [2];
  FMemScope local_res18;
  FName local_res20;
  FString local_18;
  
  FLLMScope::FLLMScope(local_res10,Audio,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,Audio,true);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  bVar1 = FConfigCacheIni::GetString
                    (GConfig,L"Audio",L"AudioCaptureModuleName",&local_18,&GEngineIni);
  if (bVar1) {
    this_00 = FModuleManager::Get();
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar3.Data = local_18.Data.AllocatorInstance.Data;
    }
    pFVar2 = ::FName::FName(&local_res20,(wchar_t *)FVar3.Data);
    FModuleManager::LoadModule(this_00,*pFVar2,None);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// ShutdownModule @ 14d0cdab0

void __thiscall FAudioCaptureModule::ShutdownModule(FAudioCaptureModule *this)

{
  return;
}

