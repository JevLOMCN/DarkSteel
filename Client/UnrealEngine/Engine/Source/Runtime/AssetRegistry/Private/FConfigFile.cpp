// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// GetBool @ 142b95e10

bool __thiscall
FConfigFile::GetBool(FConfigFile *this,wchar_t *param_1,wchar_t *param_2,bool *param_3)

{
  bool bVar1;
  FConfigSection *this_00;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  AcquireSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  this_00 = TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
            ::Find((TMapBase<FString,FConfigSection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>_>
                    *)this,&local_18);
  ReleaseSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (this_00 != (FConfigSection *)0x0) {
    bVar1 = FConfigSection::GetBool(this_00,param_2,param_3);
    return bVar1;
  }
  return false;
}

