// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommonEngineUtils
// Functions: 1

// Find @ 14f006830

TOnlineId<UE::Online::OnlineIdHandleTags::FSession> * __thiscall
TMapBase<FString,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>_>
::Find(TMapBase<FString,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *pTVar6;
  
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
  iVar2 = TSet<TTuple<FString,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>,TDefaultMapHashableKeyFuncs<FString,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    pTVar6 = (TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *)0x0;
    if (lVar4 != 0) {
      pTVar6 = (TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *)(lVar4 + 0x10);
    }
    return pTVar6;
  }
  return (TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *)0x0;
}

