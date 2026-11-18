// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 3

// Find @ 14310f030

ISocketSubsystem ** __thiscall
TMapBase<FName,ISocketSubsystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,ISocketSubsystem_*,0>_>
::Find(TMapBase<FName,ISocketSubsystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,ISocketSubsystem_*,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ISocketSubsystem **ppIVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          ppIVar5 = (ISocketSubsystem **)0x0;
          if (lVar1 != 0) {
            ppIVar5 = (ISocketSubsystem **)(lVar1 + 8);
          }
          return ppIVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (ISocketSubsystem **)0x0;
}

// Find @ 14310f0d0

TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_> **
__thiscall
TMapBase<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>_>
::Find(TMapBase<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>
  **ppTVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    ppTVar6 = (TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>
               **)0x0;
    if (lVar4 != 0) {
      ppTVar6 = (TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>
                 **)(lVar4 + 0x10);
    }
    return ppTVar6;
  }
  return (TMap<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>
          **)0x0;
}

// Find @ 14310f160

FDateTime * __thiscall
TMapBase<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>::
Find(TMapBase<FString,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>_>
     *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FDateTime *pFVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,FDateTime>,TDefaultMapHashableKeyFuncs<FString,FDateTime,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pFVar6 = (FDateTime *)0x0;
    if (lVar4 != 0) {
      pFVar6 = (FDateTime *)(lVar4 + 0x10);
    }
    return pFVar6;
  }
  return (FDateTime *)0x0;
}

