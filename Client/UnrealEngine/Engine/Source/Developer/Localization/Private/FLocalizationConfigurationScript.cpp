// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 3

// AddCommonSettings @ 146b4f0f0

void __thiscall
FLocalizationConfigurationScript::AddCommonSettings
          (FLocalizationConfigurationScript *this,FConfigSection *param_1)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"CommonSettings");
  AcquireSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
  ::Emplace<FString,FConfigSection_const_&>
            ((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
              *)this,&local_18,param_1);
  ReleaseSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AddGatherTextStep @ 146b4f920

void __thiscall
FLocalizationConfigurationScript::AddGatherTextStep
          (FLocalizationConfigurationScript *this,uint param_1,FConfigSection *param_2)

{
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"GatherTextStep%u");
  AcquireSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
  ::Emplace<FString,FConfigSection>
            ((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
              *)this,&local_18,param_2);
  ReleaseSRWLockExclusive((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// WriteWithSCC @ 146b91f70

bool __thiscall
FLocalizationConfigurationScript::WriteWithSCC
          (FLocalizationConfigurationScript *this,FString *param_1)

{
  bool bVar1;
  
  bVar1 = LocalizationConfigurationScript::WriteConfigFileWithSCC(param_1,this);
  return bVar1;
}

