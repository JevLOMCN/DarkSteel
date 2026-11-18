// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DesktopPlatform
// Functions: 2

// FindOrAddImpl<FString_const_&> @ 142d1b790

FRegistryKey ** __thiscall
TMapBase<FString,FRegistryKey_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRegistryKey_*,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,FRegistryKey_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRegistryKey_*,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,FRegistryKey_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryKey_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FRegistryKey **)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,FRegistryKey_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryKey_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FRegistryKey **)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 0x10);
}

// FindOrAddImpl<FString_const_&> @ 142d1b820

FRegistryValue ** __thiscall
TMapBase<FString,FRegistryValue_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRegistryValue_*,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,FRegistryValue_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRegistryValue_*,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,FRegistryValue_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryValue_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FRegistryValue **)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,FRegistryValue_*>,TDefaultMapHashableKeyFuncs<FString,FRegistryValue_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FRegistryValue **)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 0x10);
}

