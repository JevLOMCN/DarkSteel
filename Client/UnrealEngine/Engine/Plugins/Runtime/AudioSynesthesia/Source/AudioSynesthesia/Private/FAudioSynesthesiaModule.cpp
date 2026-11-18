// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 2

// StartupModule @ 14d813c10

void __thiscall Audio::FAudioSynesthesiaModule::StartupModule(FAudioSynesthesiaModule *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *pFVar3;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_Audio_Analysis.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_Audio_Analysis.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  FModuleManager::Get();
  pFVar2 = ::FName::FName(&local_res18,"AudioSynesthesiaCore");
  FVar1 = *pFVar2;
  pFVar3 = FModuleManager::Get();
  FModuleManager::LoadModuleChecked(pFVar3,FVar1);
  FModuleManager::Get();
  pFVar2 = ::FName::FName(&local_res18,"AudioAnalyzer");
  FVar1 = *pFVar2;
  pFVar3 = FModuleManager::Get();
  FModuleManager::LoadModuleChecked(pFVar3,FVar1);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// ShutdownModule @ 14d813cd0

void __thiscall Audio::FAudioSynesthesiaModule::ShutdownModule(FAudioSynesthesiaModule *this)

{
  return;
}

