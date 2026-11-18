// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 1

// FindOrAddImpl<FString> @ 14b294ac0

uint * __thiscall
TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
::FindOrAddImpl<FString>
          (TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (uint *)(lVar2 + 0x10);
  }
  local_res20 = param_2;
  TSet<TTuple<FString,unsigned_int>,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FString_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (uint *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 0x10);
}

