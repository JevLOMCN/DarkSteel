// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GlobalConfigurationDataCore
// Functions: 1

// Find @ 14e9b8490

TSharedRef<FJsonValue,1> * __thiscall
TMapBase<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>
::Find(TMapBase<FString,TSharedRef<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>_>
       *this,FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  TSharedRef<FJsonValue,1> *pTVar6;
  
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar3 = TSet<TTuple<FString,TSharedRef<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FJsonValue,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x28;
    pTVar6 = (TSharedRef<FJsonValue,1> *)0x0;
    if (lVar1 != 0) {
      pTVar6 = (TSharedRef<FJsonValue,1> *)(lVar1 + 0x10);
    }
    return pTVar6;
  }
  return (TSharedRef<FJsonValue,1> *)0x0;
}

