// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 3

// FindOrAddImpl<FString_const_&> @ 141e07270

TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x10);
}

// Find @ 141e1d8b0

FPlugin ** __thiscall
TMapBase<FString,FPlugin_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPlugin_*,0>_>::
Find(TMapBase<FString,FPlugin_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FPlugin_*,0>_>
     *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  FPlugin **ppFVar6;
  
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
  iVar2 = TSet<TTuple<FString,FPlugin_*>,TDefaultMapHashableKeyFuncs<FString,FPlugin_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    ppFVar6 = (FPlugin **)0x0;
    if (lVar4 != 0) {
      ppFVar6 = (FPlugin **)(lVar4 + 0x10);
    }
    return ppFVar6;
  }
  return (FPlugin **)0x0;
}

// Find @ 141e1d940

TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
::Find(TMapBase<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>_>
       *this,FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  
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
  iVar3 = TSet<TTuple<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x28;
    pTVar6 = (TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> *)0x0;
    if (lVar1 != 0) {
      pTVar6 = (TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x10);
    }
    return pTVar6;
  }
  return (TArray<TSharedRef<FPlugin,1>,TSizedDefaultAllocator<32>_> *)0x0;
}

