// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Contains @ 147acbc80

bool __thiscall FConfigFile::Contains(FConfigFile *this,FString *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  AcquireSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar4 = L"";
    iVar3 = 0;
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
  iVar3 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
                      *)this,uVar2,param_1);
  ReleaseSRWLockShared((PSRWLOCK)&ConfigFileMapLock);
  return iVar3 != -1;
}

