// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 12

// FStatsCommon @ 14ef70090

FStatsCommon * __thiscall
UE::Online::FStatsCommon::FStatsCommon(FStatsCommon *this,FOnlineServicesCommon *param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar5;
  FOnlineAsyncOpQueueParallel *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FStatsCommon *pFVar8;
  FString local_38;
  TSharedRef<UE::Online::IOnlineServices,1> local_28;
  
  ::FString::FString(&local_38,L"Stats");
  this->_padding_ = (longlong)param_1;
  this->_padding_ =
       (longlong)&TOnlineComponent<UE::Online::IStats>::_vftable__for__UE__Online__IStats__;
  this->_padding_ =
       (longlong)
       &TOnlineComponent<UE::Online::IStats>::_vftable__for__UE__Online__IOnlineComponent__;
  pTVar5 = TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
                     ((TSharedFromThis<UE::Online::IOnlineServices,1> *)&param_1->field_0x8,
                      &local_28);
  pTVar7 = (pTVar5->SharedReferenceCount).ReferenceController;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    this->_padding_ = (longlong)this;
    this->_padding_ = 0;
  }
  else {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    this->_padding_ = (longlong)this;
    this->_padding_ = (longlong)pTVar7;
    LOCK();
    pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  _Src.Data = local_38.Data.AllocatorInstance.Data;
  plVar1 = &this->_padding_;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *plVar1 = 0;
  *(int *)&this->_padding_ = local_38.Data.ArrayNum;
  if (local_38.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)plVar1,local_38.Data.ArrayNum,
               piVar2);
    memcpy((void *)*plVar1,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
  }
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  pFVar6 = FOnlineServicesCommon::GetParallelQueue(param_1);
  FOnlineAsyncOpQueueSerial::FOnlineAsyncOpQueueSerial
            ((FOnlineAsyncOpQueueSerial *)&this->_padding_,pFVar6);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  this->_padding_ = (longlong)&_vftable__for__UE__Online__IStats__;
  this->_padding_ = (longlong)&_vftable__for__UE__Online__IOnlineComponent__;
  *(undefined8 *)&this->StatDefinitions = 0;
  *(undefined8 *)&(this->StatDefinitions).field_0x8 = 0;
  *(undefined8 *)&(this->StatDefinitions).field_0x20 = 0;
  *(undefined4 *)&(this->StatDefinitions).field_0x28 = 0;
  *(undefined4 *)&(this->StatDefinitions).field_0x2c = 0x80;
  *(undefined4 *)&(this->StatDefinitions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StatDefinitions).field_0x34 = 0;
  *(undefined8 *)&(this->StatDefinitions).field_0x40 = 0;
  *(undefined4 *)&(this->StatDefinitions).field_0x48 = 0;
  pTVar7 = ::operator_new(0x30);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnStatsUpdatedEvent).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FUpdateStats::Params_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnStatsUpdatedEvent).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUParams_FUpdateStats_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar7[1]._padding_ = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnStatsUpdatedEvent).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FUpdateStats::Params_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar7 + 1);
    (this->OnStatsUpdatedEvent).DelegateRef.SharedReferenceCount.ReferenceController = pTVar7;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FUpdateStats::Params_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar7 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FUpdateStats::Params_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FStatsCommon *)(*pcVar3)();
        return pFVar8;
      }
    }
  }
  (this->CachedUsersStats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedUsersStats).ArrayNum = 0;
  (this->CachedUsersStats).ArrayMax = 0;
  return this;
}

// BatchQueryStats @ 14ef86710

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FBatchQueryStats> * __thiscall
UE::Online::FStatsCommon::BatchQueryStats
          (FStatsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FBatchQueryStats> *__return_storage_ptr__,Params *param_1
          )

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FBatchQueryStats>,1> *pTVar8
  ;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FBatchQueryStats>,1>
  local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"BatchQueryStats");
  pTVar6 = TOnlineComponent<UE::Online::IStats>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IStats> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FBatchQueryStats>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FBatchQueryStats>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FBatchQueryStats> *)0x0) {
    FMemory::Free(local_98.Object);
  }
  iVar1 = (int)this->_padding_;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  ::FString::AssignRange(&(local_78.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar9);
  local_68.bIsSet = false;
  pcVar3 = *(code **)((local_78.Object)->_padding_ + 8);
  pFVar7 = Errors::NotImplemented(&local_38,&local_68);
  (*pcVar3)(local_78.Object,pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Details.SharedReferenceCount.ReferenceController);
  if (local_68.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  pTVar8 = TOnlineAsyncOp<UE::Online::FBatchQueryStats>::CreateSharedState
                     (local_78.Object,&local_98);
  (__return_storage_ptr__->State).Object = pTVar8->Object;
  pTVar4 = (pTVar8->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CacheUserStats @ 14ef86bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::Online::FStatsCommon::CacheUserStats(FStatsCommon *this,FUserStats *param_1)

{
  undefined1 *puVar1;
  TArray<UE::Online::FUserStats,TSizedDefaultAllocator<32>_> *pTVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined1 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  TMap<FString,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>_>
  *pTVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  wchar_t *pwVar13;
  int iVar14;
  FString *pFVar15;
  uint uVar16;
  uint uVar17;
  FString *pFVar18;
  FScriptContainerElement *pFVar19;
  undefined1 *puVar20;
  uint *puVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  TMap<FString,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>_>
  *pTVar24;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  TMap<FString,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>_>
  *local_d0;
  uint uStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint local_b0;
  uint uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  int local_9c;
  TMap<FString,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>_>
  *local_98;
  TMap<FString,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  ForAnyElementType local_60;
  undefined8 uStack_58;
  FScriptContainerElement *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pTVar2 = &this->CachedUsersStats;
  pFVar22 = (pTVar2->AllocatorInstance).Data;
  iVar14 = (this->CachedUsersStats).ArrayNum;
  pFVar19 = (FScriptContainerElement *)0x0;
  pFVar12 = pFVar22 + (longlong)iVar14 * 0x58;
  for (; (pFVar23 = pFVar19, pFVar22 != pFVar12 &&
         (pFVar23 = pFVar22, *(uint *)pFVar22 != (param_1->AccountId).Value));
      pFVar22 = pFVar22 + 0x58) {
  }
  uStack_c8 = 0;
  if (pFVar23 == (FScriptContainerElement *)0x0) {
    if (iVar14 == (this->CachedUsersStats).ArrayMax) {
      iVar14 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x858,&pTVar2->AllocatorInstance,&(this->CachedUsersStats).ArrayMax);
      (this->CachedUsersStats).ArrayNum = iVar14;
    }
    iVar14 = (this->CachedUsersStats).ArrayNum;
    pFVar22 = (pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0x58;
    (this->CachedUsersStats).ArrayNum = iVar14 + 1;
    *(uint *)pFVar22 = (param_1->AccountId).Value;
    *(undefined8 *)
     &((TSet<TTuple<FString,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
        *)(pFVar22 + 8))->Elements = 0;
    *(undefined8 *)(pFVar22 + 0x10) = 0;
    *(undefined8 *)(pFVar22 + 0x28) = 0;
    *(undefined4 *)(pFVar22 + 0x30) = 0;
    *(undefined4 *)(pFVar22 + 0x34) = 0x80;
    *(undefined4 *)(pFVar22 + 0x38) = 0xffffffff;
    *(undefined4 *)(pFVar22 + 0x3c) = 0;
    *(undefined8 *)(pFVar22 + 0x48) = 0;
    *(undefined4 *)(pFVar22 + 0x50) = 0;
    TSet<TTuple<FString,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                 *)(pFVar22 + 8),
                (TSet<TTuple<FString,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                 *)&param_1->Stats);
    return;
  }
  uVar10 = *(uint *)&(param_1->Stats).field_0x28;
  uStack_c4 = 1;
  puVar1 = &(param_1->Stats).field_0x10;
  pTVar24 = &param_1->Stats;
  local_b0 = 0;
  uStack_b4 = local_b0;
  if (uVar10 != 0) {
    puVar21 = *(uint **)&(param_1->Stats).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar17 = *puVar21;
    pFVar22 = pFVar19;
    local_b0 = 0;
    uStack_c8 = 0;
    while (uVar17 == 0) {
      iVar14 = (int)pFVar19;
      local_b0 = (int)pFVar22 + 0x20;
      pFVar22 = (FScriptContainerElement *)(ulonglong)local_b0;
      uStack_c8 = iVar14 + 1;
      pFVar19 = (FScriptContainerElement *)(ulonglong)uStack_c8;
      uStack_b4 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_c8)
      goto LAB_14ef86ccd;
      uVar17 = puVar21[(longlong)iVar14 + 1];
    }
    uStack_c4 = -uVar17 & uVar17;
    uVar3 = (ulonglong)uStack_c4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_a0 = (int)lVar11;
    uStack_b4 = local_a0 + -1 + local_b0;
    if ((int)uVar10 < (int)uStack_b4) {
      uStack_b4 = uVar10;
    }
  }
LAB_14ef86ccd:
  uVar17 = *(uint *)&(param_1->Stats).field_0x28;
  iStack_a8 = *(int *)&(param_1->Stats).field_0x8 - *(int *)&(param_1->Stats).field_0x34;
  uVar16 = uVar17 & 0xffffffe0;
  uStack_b8 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_c4,uStack_c8);
  TStack_88.CurrentBitIndex = uStack_b4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar17 >> 5;
  TStack_88._28_4_ = uStack_b4;
  TStack_88.BaseBitIndex = local_b0;
  uStack_68 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = pTVar24;
  local_c0 = puVar1;
  uStack_ac = uStack_b4;
  local_98 = pTVar24;
  local_90 = pTVar24;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || ((int)uVar10 < (int)uVar17)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar10 = *(uint *)&(param_1->Stats).field_0x28;
  if (uVar17 != uVar10) {
    puVar5 = *(undefined1 **)&(param_1->Stats).field_0x20;
    puVar20 = puVar1;
    if (puVar5 != (undefined1 *)0x0) {
      puVar20 = puVar5;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar11 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14ef86dd0;
      uVar17 = *(uint *)(puVar20 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_9c = (int)lVar11;
    uVar17 = local_9c + -1 + uVar16;
    if ((int)uVar10 < (int)uVar17) {
      uVar17 = uVar10;
    }
  }
LAB_14ef86dd0:
  do {
    pTVar8 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      local_d8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_d8);
    }
    if (((TStack_88.CurrentBitIndex == uVar17) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar24))
    {
      return;
    }
    pFVar15 = (FString *)(*(longlong *)pTVar8 + (longlong)TStack_88.CurrentBitIndex * 0x38);
    iVar14 = (pFVar15->Data).ArrayNum;
    if (iVar14 == 0) {
      pwVar13 = L"";
      iVar14 = 0;
    }
    else {
      pwVar13 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
      iVar14 = iVar14 + -1;
    }
    uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar13);
    iVar14 = TSet<TTuple<FString,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                         *)(pFVar23 + 8),uVar10,pFVar15);
    if (iVar14 == -1) {
LAB_14ef86f2b:
      TMapBase<FString,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>_>
      ::Emplace<FString_const_&,UE::Online::FSchemaVariant_const_&>
                ((TMapBase<FString,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Online::FSchemaVariant,0>_>
                  *)(pFVar23 + 8),pFVar15,(FSchemaVariant *)(pFVar15 + 1));
    }
    else {
      lVar11 = (longlong)iVar14 * 0x38 + *(longlong *)(pFVar23 + 8);
      pFVar18 = (FString *)(lVar11 + 0x10);
      if (lVar11 == 0) {
        pFVar18 = (FString *)0x0;
      }
      if (pFVar18 == (FString *)0x0) goto LAB_14ef86f2b;
      if (pFVar15 + 1 != pFVar18) {
        bVar4 = *(byte *)&pFVar15[2].Data.AllocatorInstance.Data;
        local_50 = (FScriptContainerElement *)CONCAT71(local_50._1_7_,bVar4);
        if ((3 < bVar4) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xec,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<FString,__int64,double,bool>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[bVar4])(&local_60,pFVar15 + 1);
        pFVar22 = pFVar18[1].Data.AllocatorInstance.Data;
        pFVar19 = (pFVar18->Data).AllocatorInstance.Data;
        uVar7._0_4_ = (pFVar18->Data).ArrayNum;
        uVar7._4_4_ = (pFVar18->Data).ArrayMax;
        (pFVar18->Data).AllocatorInstance.Data = local_60.Data;
        (pFVar18->Data).ArrayNum = (undefined4)uStack_58;
        (pFVar18->Data).ArrayMax = uStack_58._4_4_;
        pFVar18[1].Data.AllocatorInstance.Data = local_50;
        local_60.Data = pFVar19;
        uStack_58 = uVar7;
        local_50 = pFVar22;
        if ((3 < ((ulonglong)pFVar22 & 0xff)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[(ulonglong)pFVar22 & 0xff])(&local_60);
      }
      *(char *)&pFVar18[1].Data.ArrayNum = (char)pFVar15[2].Data.ArrayNum;
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    pTVar24 = local_98;
  } while( true );
}

// GetCachedStats @ 14efaaa30

TOnlineResult<UE::Online::FGetCachedStats> * __thiscall
UE::Online::FStatsCommon::GetCachedStats
          (FStatsCommon *this,TOnlineResult<UE::Online::FGetCachedStats> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  FUserStats *pFVar2;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  iVar1 = (this->CachedUsersStats).ArrayNum;
  pFVar2 = (FUserStats *)(this->CachedUsersStats).AllocatorInstance.Data;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10._0_4_ = iVar1;
  if (iVar1 == 0) {
    local_10._4_4_ = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar1,0,&local_18,iVar1,(int *)((longlong)&local_10 + 4));
    ConstructItems<UE::Online::FUserStats,UE::Online::FUserStats,int>(local_18.Data,pFVar2,iVar1);
  }
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x8 = local_18.Data;
  *(undefined4 *)&__return_storage_ptr__->field_0x14 = local_10._4_4_;
  *(int *)&__return_storage_ptr__->field_0x10 = (int)local_10;
  __return_storage_ptr__->field_0x30 = 0;
  *(undefined ***)__return_storage_ptr__ =
       &___7__TOnlineResult_UFGetCachedStats_Online_UE___Online_UE__6B_;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  DestructItems<UE::Online::FUserStats,int>((FUserStats *)0x0,0);
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return __return_storage_ptr__;
}

// GetStatDefinition @ 14efae170

FStatDefinition * __thiscall
UE::Online::FStatsCommon::GetStatDefinition(FStatsCommon *this,FString *param_1)

{
  FStatDefinition *pFVar1;
  
  pFVar1 = TMapBase<FString,UE::Online::FStatDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Online::FStatDefinition,0>_>
           ::Find((TMapBase<FString,UE::Online::FStatDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Online::FStatDefinition,0>_>
                   *)&this->StatDefinitions,param_1);
  return pFVar1;
}

// OnStatsUpdated @ 14efb1620

TOnlineEvent<void___cdecl(UE::Online::FUpdateStats::Params_const_&)> __thiscall
UE::Online::FStatsCommon::OnStatsUpdated(FStatsCommon *this)

{
  TOnlineEventCallable<void___cdecl(UE::Online::FUpdateStats::Params_const_&)> *in_RDX;
  
  (in_RDX->DelegateRef).Object =
       (TMulticastDelegate<void___cdecl(UE::Online::FUpdateStats::Params_const_&),FDefaultDelegateUserPolicy>
        *)&this->OnStatsUpdatedEvent;
  return (TOnlineEvent<void___cdecl(UE::Online::FUpdateStats::Params_const_&)>)in_RDX;
}

// QueryStats @ 14efb1a60

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FQueryStats> * __thiscall
UE::Online::FStatsCommon::QueryStats
          (FStatsCommon *this,TOnlineAsyncOpHandle<UE::Online::FQueryStats> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FQueryStats>,1> *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FQueryStats>,1> local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"QueryStats");
  pTVar6 = TOnlineComponent<UE::Online::IStats>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IStats> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FQueryStats>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FQueryStats>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FQueryStats> *)0x0) {
    FMemory::Free(local_98.Object);
  }
  iVar1 = (int)this->_padding_;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  ::FString::AssignRange(&(local_78.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar9);
  local_68.bIsSet = false;
  pcVar3 = *(code **)((local_78.Object)->_padding_ + 8);
  pFVar7 = Errors::NotImplemented(&local_38,&local_68);
  (*pcVar3)(local_78.Object,pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Details.SharedReferenceCount.ReferenceController);
  if (local_68.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  pTVar8 = TOnlineAsyncOp<UE::Online::FQueryStats>::CreateSharedState(local_78.Object,&local_98);
  (__return_storage_ptr__->State).Object = pTVar8->Object;
  pTVar4 = (pTVar8->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// RegisterCommands @ 14efb2690

void __thiscall UE::Online::FStatsCommon::RegisterCommands(FStatsCommon *this)

{
  TOnlineInterfaceOperationExecHandler<UE::Online::FStatsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUpdateStats>_(__cdecl_UE::Online::FStatsCommon::*)(UE::Online::FUpdateStats::Params_&&)>
  *pTVar1;
  TOnlineInterfaceOperationExecHandler<UE::Online::FStatsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUpdateStats>_(__cdecl_UE::Online::FStatsCommon::*)(UE::Online::FUpdateStats::Params_&&)>
  *pTVar2;
  TOnlineInterfaceOperationExecHandler<UE::Online::FStatsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUpdateStats>_(__cdecl_UE::Online::FStatsCommon::*)(UE::Online::FUpdateStats::Params_&&)>
  *local_res8;
  wchar_t *local_res10;
  uint uStack_1c;
  
  pTVar2 = (TOnlineInterfaceOperationExecHandler<UE::Online::FStatsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUpdateStats>_(__cdecl_UE::Online::FStatsCommon::*)(UE::Online::FUpdateStats::Params_&&)>
            *)0x0;
  pTVar1 = ::operator_new(0x20);
  local_res8 = pTVar2;
  if (pTVar1 != (TOnlineInterfaceOperationExecHandler<UE::Online::FStatsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUpdateStats>_(__cdecl_UE::Online::FStatsCommon::*)(UE::Online::FUpdateStats::Params_&&)>
                 *)0x0) {
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFStatsCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFUpdateStats_Online_UE___23___QEAUParams_FUpdateStats_23__Z_Online_UE__6B_
    ;
    *(code **)&pTVar1->Function = _vcall__0__flat______;
    *(ulonglong *)&(pTVar1->Function).field_0x8 = (ulonglong)uStack_1c << 0x20;
    pTVar1->Interface = this;
    local_res8 = pTVar1;
  }
  local_res10 = L"UpdateStats";
  TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
  ::
  Emplace<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FStatsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUpdateStats>_(__cdecl_UE::Online::FStatsCommon::*)(UE::Online::FUpdateStats::Params_&&)>_*_&>
            ((TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
              *)&this->_padding_,&local_res10,&local_res8);
  pTVar1 = ::operator_new(0x20);
  local_res8 = pTVar2;
  if (pTVar1 != (TOnlineInterfaceOperationExecHandler<UE::Online::FStatsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUpdateStats>_(__cdecl_UE::Online::FStatsCommon::*)(UE::Online::FUpdateStats::Params_&&)>
                 *)0x0) {
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFStatsCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFQueryStats_Online_UE___23___QEAUParams_FQueryStats_23__Z_Online_UE__6B_
    ;
    *(code **)&pTVar1->Function = _vcall__8__flat______;
    *(ulonglong *)&(pTVar1->Function).field_0x8 = (ulonglong)uStack_1c << 0x20;
    pTVar1->Interface = this;
    local_res8 = pTVar1;
  }
  local_res10 = L"QueryStats";
  TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
  ::
  Emplace<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FStatsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryStats>_(__cdecl_UE::Online::FStatsCommon::*)(UE::Online::FQueryStats::Params_&&)>_*_&>
            ((TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
              *)&this->_padding_,&local_res10,
             (TOnlineInterfaceOperationExecHandler<UE::Online::FStatsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FQueryStats>_(__cdecl_UE::Online::FStatsCommon::*)(UE::Online::FQueryStats::Params_&&)>
              **)&local_res8);
  pTVar1 = ::operator_new(0x20);
  local_res8 = pTVar2;
  if (pTVar1 != (TOnlineInterfaceOperationExecHandler<UE::Online::FStatsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUpdateStats>_(__cdecl_UE::Online::FStatsCommon::*)(UE::Online::FUpdateStats::Params_&&)>
                 *)0x0) {
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFStatsCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFBatchQueryStats_Online_UE___23___QEAUParams_FBatchQueryStats_23__Z_Online_UE__6B_
    ;
    *(code **)&pTVar1->Function = _vcall__16__flat______;
    *(ulonglong *)&(pTVar1->Function).field_0x8 = (ulonglong)uStack_1c << 0x20;
    pTVar1->Interface = this;
    local_res8 = pTVar1;
  }
  local_res10 = L"BatchQueryStats";
  TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
  ::
  Emplace<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FStatsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FBatchQueryStats>_(__cdecl_UE::Online::FStatsCommon::*)(UE::Online::FBatchQueryStats::Params_&&)>_*_&>
            ((TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
              *)&this->_padding_,&local_res10,
             (TOnlineInterfaceOperationExecHandler<UE::Online::FStatsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FBatchQueryStats>_(__cdecl_UE::Online::FStatsCommon::*)(UE::Online::FBatchQueryStats::Params_&&)>
              **)&local_res8);
  pTVar1 = ::operator_new(0x20);
  local_res8 = pTVar2;
  if (pTVar1 != (TOnlineInterfaceOperationExecHandler<UE::Online::FStatsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUpdateStats>_(__cdecl_UE::Online::FStatsCommon::*)(UE::Online::FUpdateStats::Params_&&)>
                 *)0x0) {
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFStatsCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFTriggerEvent_Online_UE___23___QEAUParams_FTriggerEvent_23__Z_Online_UE__6B_
    ;
    *(code **)&pTVar1->Function = _vcall__24__flat______;
    *(ulonglong *)&(pTVar1->Function).field_0x8 = (ulonglong)uStack_1c << 0x20;
    pTVar1->Interface = this;
    local_res8 = pTVar1;
  }
  local_res10 = L"TriggerEvent";
  TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
  ::
  Emplace<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FStatsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FTriggerEvent>_(__cdecl_UE::Online::FStatsCommon::*)(UE::Online::FTriggerEvent::Params_&&)>_*_&>
            ((TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
              *)&this->_padding_,&local_res10,
             (TOnlineInterfaceOperationExecHandler<UE::Online::FStatsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FTriggerEvent>_(__cdecl_UE::Online::FStatsCommon::*)(UE::Online::FTriggerEvent::Params_&&)>
              **)&local_res8);
  pTVar1 = ::operator_new(0x20);
  if (pTVar1 != (TOnlineInterfaceOperationExecHandler<UE::Online::FStatsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FUpdateStats>_(__cdecl_UE::Online::FStatsCommon::*)(UE::Online::FUpdateStats::Params_&&)>
                 *)0x0) {
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TOnlineInterfaceOperationExecHandler_VFStatsCommon_Online_UE__P8123_EAA_AV__TOnlineAsyncOpHandle_UFResetStats_Online_UE___23___QEAUParams_FResetStats_23__Z_Online_UE__6B_
    ;
    *(code **)&pTVar1->Function = _vcall__32__flat______;
    *(ulonglong *)&(pTVar1->Function).field_0x8 = (ulonglong)uStack_1c << 0x20;
    pTVar1->Interface = this;
    pTVar2 = pTVar1;
  }
  local_res10 = L"ResetStats";
  local_res8 = pTVar2;
  TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
  ::
  Emplace<wchar_t_const_*_&,UE::Online::TOnlineInterfaceOperationExecHandler<UE::Online::FStatsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FResetStats>_(__cdecl_UE::Online::FStatsCommon::*)(UE::Online::FResetStats::Params_&&)>_*_&>
            ((TMapBase<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TUniquePtr<UE::Online::IOnlineExecHandler,TDefaultDelete<UE::Online::IOnlineExecHandler>_>,0>_>
              *)&this->_padding_,&local_res10,
             (TOnlineInterfaceOperationExecHandler<UE::Online::FStatsCommon,UE::Online::TOnlineAsyncOpHandle<UE::Online::FResetStats>_(__cdecl_UE::Online::FStatsCommon::*)(UE::Online::FResetStats::Params_&&)>
              **)&local_res8);
  return;
}

// ResetStats @ 14efb3470

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FResetStats> * __thiscall
UE::Online::FStatsCommon::ResetStats
          (FStatsCommon *this,TOnlineAsyncOpHandle<UE::Online::FResetStats> *__return_storage_ptr__,
          Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FResetStats>,1> *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FResetStats>,1> local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"ResetStats");
  pTVar6 = TOnlineComponent<UE::Online::IStats>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IStats> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FResetStats>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FResetStats>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FResetStats> *)0x0) {
    FMemory::Free(local_98.Object);
  }
  iVar1 = (int)this->_padding_;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  ::FString::AssignRange(&(local_78.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar9);
  local_68.bIsSet = false;
  pcVar3 = *(code **)((local_78.Object)->_padding_ + 8);
  pFVar7 = Errors::NotImplemented(&local_38,&local_68);
  (*pcVar3)(local_78.Object,pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Details.SharedReferenceCount.ReferenceController);
  if (local_68.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  pTVar8 = TOnlineAsyncOp<UE::Online::FResetStats>::CreateSharedState(local_78.Object,&local_98);
  (__return_storage_ptr__->State).Object = pTVar8->Object;
  pTVar4 = (pTVar8->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// TriggerEvent @ 14efba140

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FTriggerEvent> * __thiscall
UE::Online::FStatsCommon::TriggerEvent
          (FStatsCommon *this,
          TOnlineAsyncOpHandle<UE::Online::FTriggerEvent> *__return_storage_ptr__,Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FTriggerEvent>,1> *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FTriggerEvent>,1> local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"TriggerEvent");
  pTVar6 = TOnlineComponent<UE::Online::IStats>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IStats> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FTriggerEvent>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FTriggerEvent>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FTriggerEvent> *)0x0) {
    FMemory::Free(local_98.Object);
  }
  iVar1 = (int)this->_padding_;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  ::FString::AssignRange(&(local_78.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar9);
  local_68.bIsSet = false;
  pcVar3 = *(code **)((local_78.Object)->_padding_ + 8);
  pFVar7 = Errors::NotImplemented(&local_38,&local_68);
  (*pcVar3)(local_78.Object,pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Details.SharedReferenceCount.ReferenceController);
  if (local_68.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  pTVar8 = TOnlineAsyncOp<UE::Online::FTriggerEvent>::CreateSharedState(local_78.Object,&local_98);
  (__return_storage_ptr__->State).Object = pTVar8->Object;
  pTVar4 = (pTVar8->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// UpdateConfig @ 14efc3c20

void __thiscall UE::Online::FStatsCommon::UpdateConfig(FStatsCommon *this)

{
  int iVar1;
  FScriptContainerElement *_Src;
  int iVar2;
  ForAnyElementType FVar3;
  FStatDefinition *pFVar4;
  undefined1 local_res8 [16];
  FStatsCommonConfig local_68;
  FString local_58;
  FString *local_48;
  FStatDefinition *local_40;
  
  local_68.StatDefinitions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.StatDefinitions.ArrayNum = 0;
  local_68.StatDefinitions.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  FOnlineServicesCommon::LoadConfig<UE::Online::FStatsCommonConfig>
            ((FOnlineServicesCommon *)this->_padding_,&local_68,(FString *)&this->_padding_,
             &local_58);
  iVar2 = local_68.StatDefinitions.ArrayNum;
  pFVar4 = (FStatDefinition *)
           (local_68.StatDefinitions.AllocatorInstance.Data +
           (longlong)local_68.StatDefinitions.ArrayNum * 0x38);
  FVar3.Data = local_68.StatDefinitions.AllocatorInstance.Data;
  while( true ) {
    if (local_68.StatDefinitions.ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Online::FStatDefinition,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((FStatDefinition *)FVar3.Data == pFVar4) break;
    iVar1 = (((FStatDefinition *)FVar3.Data)->Name).Data.ArrayNum;
    _Src = (((FStatDefinition *)FVar3.Data)->Name).Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_58,iVar1,&local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
    local_48 = &local_58;
    local_40 = (FStatDefinition *)FVar3.Data;
    TSet<TTuple<FString,UE::Online::FStatDefinition>,TDefaultMapHashableKeyFuncs<FString,UE::Online::FStatDefinition,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,UE::Online::FStatDefinition_&&>_>
              ((TSet<TTuple<FString,UE::Online::FStatDefinition>,TDefaultMapHashableKeyFuncs<FString,UE::Online::FStatDefinition,0>,FDefaultSetAllocator>
                *)&this->_padding_,
               (TPairInitializer<FString_&&,UE::Online::FStatDefinition_&&> *)(local_res8 + 8),
               (bool *)&local_48);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FVar3.Data = FVar3.Data + 0x38;
  }
  DestructItems<UE::Online::FStatDefinition,int>
            ((FStatDefinition *)local_68.StatDefinitions.AllocatorInstance.Data,
             local_68.StatDefinitions.ArrayNum);
  if ((FStatDefinition *)local_68.StatDefinitions.AllocatorInstance.Data != (FStatDefinition *)0x0)
  {
    FMemory::Free(local_68.StatDefinitions.AllocatorInstance.Data);
  }
  return;
}

// UpdateStats @ 14efc3d90

/* WARNING: Enum "Type": Some values do not have unique names */

TOnlineAsyncOpHandle<UE::Online::FUpdateStats> * __thiscall
UE::Online::FStatsCommon::UpdateStats
          (FStatsCommon *this,TOnlineAsyncOpHandle<UE::Online::FUpdateStats> *__return_storage_ptr__
          ,Params *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  EOnlineServices EVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  FOnlineError *pFVar7;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FUpdateStats>,1> *pTVar8;
  int iVar9;
  TSharedRef<UE::Online::Private::IOnlineAsyncOpSharedState<UE::Online::FUpdateStats>,1> local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>,1> local_78;
  TOptional<UE::Online::FOnlineError> local_68;
  FOnlineError local_38;
  
  plVar2 = (longlong *)this->_padding_;
  ::FString::FString((FString *)&local_98,L"UpdateStats");
  pTVar6 = TOnlineComponent<UE::Online::IStats>::GetConfigSectionHeirarchy
                     ((TOnlineComponent<UE::Online::IStats> *)this,&local_88,(FString *)&local_98);
  if ((1 < (byte)LogOnlineServices._0_1_) && ((char)plVar2[0x5e] != '\0')) {
    EVar5 = (**(code **)(*plVar2 + 0x98))(plVar2);
    Online::LexToString(EVar5);
    Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_UE::Online::FOnlineServicesCommon::LogErrorIfOnlineServicesHasShutdown<UE::Online::FUpdateStats>(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
  }
  FOnlineAsyncOpCache::GetOp<UE::Online::FUpdateStats>
            ((FOnlineAsyncOpCache *)(plVar2 + 8),&local_78,param_1,pTVar6);
  DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_98.Object != (IOnlineAsyncOpSharedState<UE::Online::FUpdateStats> *)0x0) {
    FMemory::Free(local_98.Object);
  }
  iVar1 = (int)this->_padding_;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  ::FString::AssignRange(&(local_78.Object)->InterfaceName,(wchar_t *)this->_padding_,iVar9);
  local_68.bIsSet = false;
  pcVar3 = *(code **)((local_78.Object)->_padding_ + 8);
  pFVar7 = Errors::NotImplemented(&local_38,&local_68);
  (*pcVar3)(local_78.Object,pFVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.Details.SharedReferenceCount.ReferenceController);
  if (local_68.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  pTVar8 = TOnlineAsyncOp<UE::Online::FUpdateStats>::CreateSharedState(local_78.Object,&local_98);
  (__return_storage_ptr__->State).Object = pTVar8->Object;
  pTVar4 = (pTVar8->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->State).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

