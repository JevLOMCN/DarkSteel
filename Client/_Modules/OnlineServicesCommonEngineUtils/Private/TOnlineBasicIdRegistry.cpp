// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommonEngineUtils
// Functions: 3

// ~TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString> @ 14f004b40

void __thiscall
UE::Online::TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString>::
~TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString>
          (TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString> *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  *(undefined4 *)&(this->IdValueToHandleMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->IdValueToHandleMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IdValueToHandleMap);
  DestructItems<FString,int>
            ((FString *)(this->IdValues).AllocatorInstance.Data,(this->IdValues).ArrayNum);
  pFVar2 = (this->IdValues).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (BVar4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014f004ba1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
    return;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// FindIdValue @ 14f006b50

FString * __thiscall
UE::Online::TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString>::FindIdValue
          (TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString> *this,
          FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  uint uVar5;
  uint uVar6;
  
  if ((EOnlineServices)(param_1->Value >> 0x18) == this->OnlineServicesType) {
    if ((param_1->Value & 0xffffff) != 0) {
      AcquireSRWLockShared((PSRWLOCK)&this->Lock);
      uVar6 = param_1->Value & 0xffffff;
      uVar1 = uVar6 - 1;
      if ((-1 < (int)uVar1) && ((int)uVar1 < (this->IdValues).ArrayNum)) {
        uVar5 = 0;
        if ((int)uVar1 < (this->IdValues).ArrayNum) {
          uVar5 = ~uVar1 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar2)();
          return pFVar4;
        }
        ::FString::FString(__return_storage_ptr__,
                           (FString *)
                           ((this->IdValues).AllocatorInstance.Data +
                           (ulonglong)uVar6 * 0x10 + -0x10));
        ReleaseSRWLockShared((PSRWLOCK)&this->Lock);
        return __return_storage_ptr__;
      }
      ReleaseSRWLockShared((PSRWLOCK)&this->Lock);
    }
  }
  else {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9215982768960307118>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineIdCommon.h"
                       ,0x52,"Handle.GetOnlineServicesType() == OnlineServicesType");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar2)();
      return pFVar4;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// FindOrAddHandle @ 14f007320

TOnlineId<UE::Online::OnlineIdHandleTags::FSession> __thiscall
UE::Online::TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString>::
FindOrAddHandle(TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString> *this,
               FString *param_1)

{
  int *piVar1;
  EOnlineServices EVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *pTVar7;
  FString *in_R8;
  bool local_28 [8];
  FString *local_20;
  
  AcquireSRWLockShared((PSRWLOCK)&this->Lock);
  pTVar7 = TMapBase<FString,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>_>
           ::Find((TMapBase<FString,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>_>
                   *)&this->IdValueToHandleMap,in_R8);
  if (pTVar7 == (TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *)0x0) {
    uVar6 = (uint)this->OnlineServicesType << 0x18;
  }
  else {
    uVar6 = pTVar7->Value;
  }
  *(uint *)&(param_1->Data).AllocatorInstance.Data = uVar6;
  ReleaseSRWLockShared((PSRWLOCK)&this->Lock);
  if (((ulonglong)(param_1->Data).AllocatorInstance.Data & 0xffffff) == 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
    pTVar7 = TMapBase<FString,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>_>
             ::Find((TMapBase<FString,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>_>
                     *)&this->IdValueToHandleMap,in_R8);
    if (pTVar7 != (TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *)0x0) {
      *(uint *)&(param_1->Data).AllocatorInstance.Data = pTVar7->Value;
    }
    if (((ulonglong)(param_1->Data).AllocatorInstance.Data & 0xffffff) == 0) {
      iVar5 = (this->IdValues).ArrayNum;
      piVar1 = &(this->IdValues).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->IdValues).AllocatorInstance,piVar1);
      }
      (this->IdValues).ArrayNum = iVar5 + 1;
      ::FString::FString((FString *)
                         ((this->IdValues).AllocatorInstance.Data + (longlong)iVar5 * 0x10),in_R8);
      uVar6 = (this->IdValues).ArrayNum;
      EVar2 = this->OnlineServicesType;
      if (0xfeffffff < uVar6) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Handle < 0xFF000000",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Public\\Online\\CoreOnline.h"
                           ,0x13a,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (TOnlineId<UE::Online::OnlineIdHandleTags::FSession>)uVar6;
        }
      }
      *(uint *)&(param_1->Data).AllocatorInstance.Data = (uint)EVar2 << 0x18 | uVar6 & 0xffffff;
      local_20 = param_1;
      TSet<TTuple<FString,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>,TDefaultMapHashableKeyFuncs<FString,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FString_const_&,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_&>_>
                ((TSet<TTuple<FString,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_>,TDefaultMapHashableKeyFuncs<FString,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>,0>,FDefaultSetAllocator>
                  *)&this->IdValueToHandleMap,
                 (TPairInitializer<FString_const_&,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSession>_&>
                  *)&stack0x00000008,local_28);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  }
  return (TOnlineId<UE::Online::OnlineIdHandleTags::FSession>)(uint)param_1;
}

