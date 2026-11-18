// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 12

// FNetPropertyConditionManager @ 1441d1e80

FNetPropertyConditionManager * __thiscall
UE::Net::Private::FNetPropertyConditionManager::FNetPropertyConditionManager
          (FNetPropertyConditionManager *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FDelegateHandle FVar1;
  
  (this->PostGarbageCollectHandle).ID = 0;
  *(undefined8 *)&this->PropertyTrackerMap = 0;
  *(undefined8 *)&(this->PropertyTrackerMap).field_0x8 = 0;
  *(undefined8 *)&(this->PropertyTrackerMap).field_0x20 = 0;
  *(undefined4 *)&(this->PropertyTrackerMap).field_0x28 = 0;
  *(undefined4 *)&(this->PropertyTrackerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->PropertyTrackerMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PropertyTrackerMap).field_0x34 = 0;
  *(undefined8 *)&(this->PropertyTrackerMap).field_0x40 = 0;
  *(undefined4 *)&(this->PropertyTrackerMap).field_0x48 = 0;
  (this->LastFoundTrackerKey).ObjectIndex = 0;
  (this->LastFoundTrackerKey).ObjectSerialNumber = 0;
  this->LastFoundTracker = (FRepChangedPropertyTracker *)0x0;
  this->bAllowCreateTrackerFromSetPropertyActiveOverride = false;
  this_00 = FCoreUObjectDelegates::GetPostGarbageCollect();
  FVar1 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddRaw<UE::Net::Private::FNetPropertyConditionManager>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)this_00,(FNetPropertyConditionManager *)&stack0x00000008,(pmf_d330c22e)this)
  ;
                    /* WARNING: Load size is inaccurate */
  (this->PostGarbageCollectHandle).ID = *FVar1.ID;
  return this;
}

// ~FNetPropertyConditionManager @ 1441d3ea0

void __thiscall
UE::Net::Private::FNetPropertyConditionManager::~FNetPropertyConditionManager
          (FNetPropertyConditionManager *this)

{
  ulong64 uVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  ulong64 *puVar6;
  uint uVar7;
  longlong lVar8;
  FScriptContainerElement *this_01;
  FDestructionSentinel local_38;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            FCoreUObjectDelegates::GetPostGarbageCollect();
  uVar1 = (this->PostGarbageCollectHandle).ID;
  if (uVar1 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_38);
    uVar7 = 0;
    if (0 < (this_00->InvocationList).ArrayNum) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < (this_00->InvocationList).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_01 = (this_00->InvocationList).AllocatorInstance.Data + lVar8;
        if (((*(int *)&this_01[8].field_0x0 != 0) &&
            (*(longlong **)&this_01->field_0x0 != (longlong *)0x0)) &&
           (puVar6 = (ulong64 *)(**(code **)(**(longlong **)&this_01->field_0x0 + 0x40))(),
           *puVar6 == uVar1)) {
          if ((*(int *)&this_01[8].field_0x0 != 0) &&
             (*(undefined8 **)&this_01->field_0x0 != (undefined8 *)0x0)) {
            (**(code **)**(undefined8 **)&this_01->field_0x0)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)this_01,0,0,0x10);
            *(undefined4 *)&this_01[8].field_0x0 = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
          break;
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x10;
      } while ((int)uVar7 < (this_00->InvocationList).ArrayNum);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  *(undefined4 *)&(this->PropertyTrackerMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PropertyTrackerMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PropertyTrackerMap);
  return;
}

// FindOrCreatePropertyTracker @ 1441db1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedPtr<FRepChangedPropertyTracker,1> * __thiscall
UE::Net::Private::FNetPropertyConditionManager::FindOrCreatePropertyTracker
          (FNetPropertyConditionManager *this,
          TSharedPtr<FRepChangedPropertyTracker,1> *__return_storage_ptr__,FObjectKey param_1)

{
  uint *puVar1;
  UClass *this_00;
  code *pcVar2;
  ulonglong uVar3;
  bool bVar4;
  TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_> *pTVar5;
  UObject *pUVar6;
  TSharedPtr<FRepChangedPropertyTracker,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  ForElementType<unsigned_int> FVar9;
  int _Val;
  FRepChangedPropertyTracker *pFVar10;
  uint uVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  FObjectKey local_res18;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  TSharedPtr<FRepChangedPropertyTracker,1> local_100;
  FWeakObjectPtr local_f0;
  TPairInitializer<FObjectKey_const_&,TSharedPtr<FRepChangedPropertyTracker,1>_const_&> local_e8;
  FObjectKey *local_d8;
  TSharedPtr<FRepChangedPropertyTracker,1> *local_d0;
  undefined1 local_c8 [32];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  TBitArray<FDefaultBitArrayAllocator> local_98;
  undefined4 local_78;
  undefined4 local_74;
  void *local_68;
  undefined4 local_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_res18 = param_1;
  local_e8.Value = (TSharedPtr<FRepChangedPropertyTracker,1> *)param_1;
  pTVar5 = TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
                   *)&this->PropertyTrackerMap,(FObjectKey *)&local_e8.Value);
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar5 == (TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_> *)0x0) {
    __return_storage_ptr__->Object = (FRepChangedPropertyTracker *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar10 = *(FRepChangedPropertyTracker **)&pTVar5->field_0x8;
    __return_storage_ptr__->Object = pFVar10;
    pTVar8 = *(TReferenceControllerBase<1> **)&pTVar5->field_0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      pFVar10 = __return_storage_ptr__->Object;
      param_1 = local_res18;
    }
    if (pFVar10 != (FRepChangedPropertyTracker *)0x0) {
      return __return_storage_ptr__;
    }
  }
  local_f0.ObjectIndex = param_1.ObjectIndex;
  local_f0.ObjectSerialNumber = param_1.ObjectSerialNumber;
  pUVar6 = FWeakObjectPtr::Get(&local_f0);
  if (pUVar6 == (UObject *)0x0) {
    `UE::Net::Private::FNetPropertyConditionManager::FindOrCreatePropertyTracker'::__l17::<lambda_1>
    ::operator()(local_108);
  }
  else {
    this_00 = *(UClass **)&pUVar6->field_0x10;
    if ((this_00 == (UClass *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ObjectClass",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\PropertyConditions\\PropertyConditions.cpp"
                           ,0x5d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FRepChangedPropertyTracker,1> *)(*pcVar2)();
      return pTVar7;
    }
    UClass::SetUpRuntimeReplicationData(this_00);
    local_c8._24_4_ = (this_00->ClassReps).ArrayNum;
    local_c8._16_8_ = (ForElementType<unsigned_int>)0x0;
    local_c8._28_4_ = 0x80;
    uVar11 = local_c8._24_4_ + 0x1f >> 5;
    if (local_c8._24_4_ + 0x1f >> 5 != 0) {
      if (4 < uVar11) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation((ForElementType<unsigned_int> *)local_c8,0,uVar11,4);
        local_c8._28_4_ = uVar11 << 5;
      }
      FVar9 = (ForElementType<unsigned_int>)local_c8;
      if ((ForElementType<unsigned_int>)local_c8._16_8_ != (ForElementType<unsigned_int>)0x0) {
        FVar9 = (ForElementType<unsigned_int>)local_c8._16_8_;
      }
      if (uVar11 < 9) {
        _Val = -1;
      }
      else {
        _Val = 0xff;
      }
      memset((void *)FVar9,_Val,(ulonglong)uVar11 << 2);
      uVar11 = local_c8._24_4_ & 0x8000001f;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
      }
      if (uVar11 != 0) {
        FVar9 = (ForElementType<unsigned_int>)local_c8;
        if ((ForElementType<unsigned_int>)local_c8._16_8_ != (ForElementType<unsigned_int>)0x0) {
          FVar9 = (ForElementType<unsigned_int>)local_c8._16_8_;
        }
        puVar1 = (uint *)((longlong)FVar9 +
                         (longlong)
                         ((int)(local_c8._24_4_ + ((int)local_c8._24_4_ >> 0x1f & 0x1fU)) >> 5) * 4)
        ;
        *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar11 & 0x1f);
      }
    }
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0 = 0;
    local_98.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_98.NumBits = 0;
    local_98.MaxBits = 0x80;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_58 = 0;
    (**(code **)(*(longlong *)pUVar6 + 0x1f0))(pUVar6,local_c8);
    pTVar8 = ::operator_new(0x88);
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      local_100.Object = (FRepChangedPropertyTracker *)___xmm_00000000000000000000000000000010;
      pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000010;
      local_100.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar8->SharedReferenceCount = (atomic<int>)0x1;
      pTVar8->WeakReferenceCount = (atomic<int>)0x1;
      pTVar8->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFRepChangedPropertyTracker___00_SharedPointerInternals__6B_
      ;
      FCustomPropertyConditionState::FCustomPropertyConditionState
                ((FCustomPropertyConditionState *)(pTVar8 + 1),
                 (FCustomPropertyConditionState *)local_c8);
      pTVar13 = pTVar8 + 1;
      if ((pTVar13 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FRepChangedPropertyTracker,1> *)(*pcVar2)();
        return pTVar7;
      }
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      local_100.SharedReferenceCount.ReferenceController = pTVar8;
      pTVar12 = pTVar8;
      local_100.Object = (FRepChangedPropertyTracker *)pTVar13;
    }
    if (__return_storage_ptr__ != &local_100) {
      __return_storage_ptr__->Object = (FRepChangedPropertyTracker *)pTVar13;
      local_100.Object = (FRepChangedPropertyTracker *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_100.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_100.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    local_d8 = &local_res18;
    local_d0 = __return_storage_ptr__;
    TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FObjectKey_const_&,TSharedPtr<FRepChangedPropertyTracker,1>_const_&>_>
              ((TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
                *)&this->PropertyTrackerMap,&local_e8,(bool *)&local_d8);
    local_60 = 0;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    uVar3 = local_a0 >> 0x20;
    local_a0 = local_a0 & 0xffffffff00000000;
    if ((int)uVar3 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&local_a8,0,(int *)((longlong)&local_a0 + 4));
    }
    local_78 = 0xffffffff;
    local_74 = 0;
    local_98.NumBits = 0;
    if (0x80 < (uint)local_98.MaxBits) {
      local_98.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_98,0);
    }
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
    }
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
    if ((ForElementType<unsigned_int>)local_c8._16_8_ != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_c8._16_8_);
    }
  }
  return __return_storage_ptr__;
}

// FindPropertyTracker @ 1441db5a0

TSharedPtr<FRepChangedPropertyTracker,1> * __thiscall
UE::Net::Private::FNetPropertyConditionManager::FindPropertyTracker
          (FNetPropertyConditionManager *this,
          TSharedPtr<FRepChangedPropertyTracker,1> *__return_storage_ptr__,FObjectKey param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_> *pTVar2;
  FObjectKey local_res18 [2];
  
  local_res18[0] = param_1;
  pTVar2 = TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
                   *)&this->PropertyTrackerMap,local_res18);
  if (pTVar2 == (TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_> *)0x0) {
    __return_storage_ptr__->Object = (FRepChangedPropertyTracker *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = *(FRepChangedPropertyTracker **)&pTVar2->field_0x8;
    pTVar1 = *(TReferenceControllerBase<1> **)&pTVar2->field_0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// Get @ 1441db900

FNetPropertyConditionManager * __cdecl UE::Net::Private::FNetPropertyConditionManager::Get(void)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this;
  FDelegateHandle FVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      this = FCoreUObjectDelegates::GetPostGarbageCollect();
      FVar1 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
              AddRaw<UE::Net::Private::FNetPropertyConditionManager>
                        ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                          *)this,(FNetPropertyConditionManager *)&stack0x00000008,
                         (pmf_d330c22e)0x154bb3fd0);
                    /* WARNING: Load size is inaccurate */
      ::Singleton.PostGarbageCollectHandle.ID = *FVar1.ID;
      atexit(`UE::Net::Private::FNetPropertyConditionManager::Get'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// LogMemory @ 1441e1c80

void __thiscall
UE::Net::Private::FNetPropertyConditionManager::LogMemory
          (FNetPropertyConditionManager *this,FOutputDevice *param_1)

{
  TMap<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>_>
  *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  TMap<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>_>
  *local_100;
  int iStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  FArchiveState local_c8;
  longlong local_38;
  longlong local_30;
  
  FArchiveState::FArchiveState(&local_c8);
  pTVar1 = &this->PropertyTrackerMap;
  lVar7 = (longlong)*(int *)&(this->PropertyTrackerMap).field_0x48;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->PropertyTrackerMap).field_0x10;
  local_c8._padding_ = (longlong)&___7FArchiveCountMem__6B_;
  local_c8._43_1_ = local_c8._43_1_ & 0xef | 4;
  uStack_f4 = 1;
  iStack_f8 = 0;
  local_38 = ((ulonglong)(*(int *)&(this->PropertyTrackerMap).field_0x28 + 0x1fU >> 5) + lVar7 +
             (longlong)*(int *)&(this->PropertyTrackerMap).field_0x8 * 8) * 4;
  local_e0 = 0;
  local_30 = ((ulonglong)(*(int *)&(this->PropertyTrackerMap).field_0x2c + 0x1fU >> 5) + lVar7 +
             (longlong)*(int *)&(this->PropertyTrackerMap).field_0xc * 8) * 4;
  iVar3 = *(int *)&(this->PropertyTrackerMap).field_0x28;
  iStack_e4 = 0;
  if (iVar3 != 0) {
    puVar6 = *(uint **)&(this->PropertyTrackerMap).field_0x20;
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)TStack_120.Array;
    }
    uVar4 = *puVar6;
    while (uVar4 == 0) {
      lVar7 = (longlong)iStack_f8;
      local_e0 = local_e0 + 0x20;
      iStack_f8 = iStack_f8 + 1;
      iStack_e4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f8) goto LAB_1441e1d8c;
      uVar4 = puVar6[lVar7 + 1];
    }
    uStack_f4 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uStack_f4 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_e4 = local_e0 + -1 + (int)lVar7;
    if (iVar3 < iStack_e4) {
      iStack_e4 = iVar3;
    }
  }
LAB_1441e1d8c:
  uStack_e8 = 0xffffffff;
  iStack_dc = TStack_120.CurrentBitIndex;
  TStack_120._padding_ = CONCAT44(uStack_f4,iStack_f8);
  TStack_120.UnvisitedBitMask = 0xffffffff;
  TStack_120._28_4_ = TStack_120.CurrentBitIndex;
  TStack_120.BaseBitIndex = local_e0;
  local_100 = pTVar1;
  local_f0 = (undefined1 *)TStack_120.Array;
  TStack_120.CurrentBitIndex = iStack_e4;
  if (iStack_e4 < iVar3) {
    do {
      if (*(longlong *)((longlong)TStack_120.CurrentBitIndex * 0x20 + 8 + *(longlong *)pTVar1) != 0)
      {
        lVar7 = *(longlong *)((longlong)TStack_120.CurrentBitIndex * 0x20 + 8 + *(longlong *)pTVar1)
        ;
        if (*(code **)(local_c8._padding_ + 0x10) == FArchiveCountMem::CountBytes) {
          local_38 = local_38 + 0x78;
          local_30 = local_30 + 0x78;
        }
        else {
          (**(code **)(local_c8._padding_ + 0x10))(&local_c8,0x78,0x78);
        }
        lVar5 = (ulonglong)(*(int *)(lVar7 + 0x1c) + 0x1fU >> 5) * 4;
        lVar7 = (ulonglong)(*(int *)(lVar7 + 0x18) + 0x1fU >> 5) * 4;
        if (*(code **)(local_c8._padding_ + 0x10) == FArchiveCountMem::CountBytes) {
          local_38 = local_38 + lVar7;
          local_30 = local_30 + lVar5;
        }
        else {
          (**(code **)(local_c8._padding_ + 0x10))(&local_c8,lVar7,lVar5);
        }
      }
      TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
    } while (TStack_120.CurrentBitIndex < (TStack_120.Array)->NumBits);
  }
  FOutputDevice::LogfImpl(param_1,L"  Property Condition Memory: %u");
  FArchive::~FArchive((FArchive *)&local_c8);
  return;
}

// NotifyObjectDestroyed @ 1441e2ce0

void __thiscall
UE::Net::Private::FNetPropertyConditionManager::NotifyObjectDestroyed
          (FNetPropertyConditionManager *this,FObjectKey param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar5 = param_1.ObjectIndex;
  uVar2 = param_1.ObjectSerialNumber;
  if ((iVar5 == (this->LastFoundTrackerKey).ObjectIndex) &&
     (uVar2 == (this->LastFoundTrackerKey).ObjectSerialNumber)) {
    (this->LastFoundTrackerKey).ObjectIndex = 0;
    (this->LastFoundTrackerKey).ObjectSerialNumber = 0;
    this->LastFoundTracker = (FRepChangedPropertyTracker *)0x0;
  }
  if (*(int *)&(this->PropertyTrackerMap).field_0x8 !=
      *(int *)&(this->PropertyTrackerMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->PropertyTrackerMap).field_0x40;
    uVar7 = iVar5 - uVar2 ^ uVar2 >> 0xd;
    uVar4 = (-0x61c88647 - uVar7) - uVar2 ^ uVar7 << 8;
    uVar9 = (uVar2 - uVar4) - uVar7 ^ uVar4 >> 0xd;
    uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 0xc;
    uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 0x10;
    uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 >> 5;
    uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 3;
    uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 10;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->PropertyTrackerMap).field_0x38;
    }
    iVar8 = *(int *)(puVar6 + (((longlong)(int)((uVar9 - uVar4) - uVar7) ^ (ulonglong)(uVar4 >> 0xf)
                               ) & (longlong)*(int *)&(this->PropertyTrackerMap).field_0x48 - 1U) *
                              4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&(this->PropertyTrackerMap).field_0x0;
      while ((lVar3 = (longlong)iVar8 * 0x20, *(int *)(lVar3 + lVar1) != iVar5 ||
             (*(uint *)(lVar3 + 4 + lVar1) != uVar2))) {
        iVar8 = *(int *)(lVar3 + 0x18 + lVar1);
        if (iVar8 == -1) {
          return;
        }
      }
      TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
                       *)&this->PropertyTrackerMap,iVar8);
      return;
    }
  }
  return;
}

// PostGarbageCollect @ 1441e3b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::Private::FNetPropertyConditionManager::PostGarbageCollect
          (FNetPropertyConditionManager *this)

{
  TMap<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>_>
  *pTVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_PropertyConditions_PostGarbageCollect> FVar8;
  UObject *pUVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar10;
  FName FVar11;
  ulonglong uVar12;
  uint uVar13;
  FNameEntryId FVar14;
  longlong lVar15;
  LARGE_INTEGER local_res8;
  FName local_res10;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  longlong local_98;
  TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
  *local_88;
  char local_80;
  char cStack_7f;
  FStatMessage local_78;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  FVar14.Value = 0;
  FVar8 = StatPtr_STAT_PropertyConditions_PostGarbageCollect;
  if (StatPtr_STAT_PropertyConditions_PostGarbageCollect ==
      (FThreadSafeStaticStat<FStat_STAT_PropertyConditions_PostGarbageCollect>)0x0) {
    pFVar7 = ::FName::FName(&local_res10,"STAT_PropertyConditions_PostGarbageCollect");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_PropertyConditions_PostGarbageCollect>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_PropertyConditions_PostGarbageCollect,*pFVar7,
                       L"PropertyConditions PostGarbageCollect","STATGROUP_Net","STATCAT_Advanced",
                       L"Net",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar13 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\PropertyConditions\\PropertyConditions.cpp"
                   ,0x79);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      FVar14.Value = FVar10.Value;
      goto LAB_1441e3ccc;
    }
  }
  bVar4 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_1441e3ccc:
  pTVar1 = &this->PropertyTrackerMap;
  TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_68,
             (TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_80 = '\0';
  cStack_7f = '\0';
  stack0xffffffffffffff58 = local_68._16_16_;
  auStack_b0._0_8_ = local_68._8_8_;
  local_98 = local_48;
  pTStack_90 = pTStack_40;
  uVar12 = local_68._24_8_ >> 0x20;
  local_88 = (TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
              *)pTVar1;
  if (local_68._28_4_ < *(int *)(local_68._16_8_ + 0x18)) {
    do {
      lVar15 = (longlong)(int)uVar12 * 0x20;
      local_res8.s.LowPart = *(uint *)(*(longlong *)local_68._0_8_ + lVar15);
      local_res8.s.HighPart = *(uint *)(*(longlong *)local_68._0_8_ + 4 + lVar15);
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res8.s);
      if (pUVar9 == (UObject *)0x0) {
        if ((*(int *)(*(longlong *)local_68._0_8_ + lVar15) ==
             (this->LastFoundTrackerKey).ObjectIndex) &&
           (*(int *)(*(longlong *)local_68._0_8_ + 4 + lVar15) ==
            (this->LastFoundTrackerKey).ObjectSerialNumber)) {
          local_res10.ComparisonIndex.Value = 0;
          local_res10.Number = 0;
          (this->LastFoundTrackerKey).ObjectIndex = 0;
          (this->LastFoundTrackerKey).ObjectSerialNumber = 0;
          this->LastFoundTracker = (FRepChangedPropertyTracker *)0x0;
        }
        TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_90,(int)uVar12);
        local_80 = '\x01';
      }
      uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
      uVar12 = (ulonglong)uStack_9c;
    } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
    if ((local_80 != '\0') && (cStack_7f != '\0')) {
      uVar13 = *(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34;
      if (uVar13 < 4) {
        iVar6 = 1;
      }
      else {
        uVar12 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar15 & 0x1f);
      }
      if (((0 < (int)uVar13) && (local_88->HashSize < iVar6)) || (iVar6 < local_88->HashSize)) {
        local_88->HashSize = iVar6;
        TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
        ::Rehash(local_88);
      }
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar11 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_78.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_78.NameAndInfo.Index.Value = FVar14.Value;
      QueryPerformanceCounter(&local_res8);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_78);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// SetPropertyActive @ 1441ebe90

void __thiscall
UE::Net::Private::FNetPropertyConditionManager::SetPropertyActive
          (FNetPropertyConditionManager *this,UObject *param_1,ushort param_2,bool param_3)

{
  FRepChangedPropertyTracker *this_00;
  TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  pTVar2 = (TReferenceControllerBase<1> *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_1 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable(param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  }
  pTVar1 = TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
                   *)&this->PropertyTrackerMap,(FObjectKey *)&local_res8);
  if (pTVar1 != (TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_> *)0x0) {
    pTVar2 = *(TReferenceControllerBase<1> **)&pTVar1->field_0x10;
    this_00 = *(FRepChangedPropertyTracker **)&pTVar1->field_0x8;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != (FRepChangedPropertyTracker *)0x0) {
      FRepChangedPropertyTracker::SetCustomIsActiveOverride(this_00,param_1,param_2,param_3);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// SetPropertyActiveOverride @ 1441ebf60

void __thiscall
UE::Net::Private::FNetPropertyConditionManager::SetPropertyActiveOverride
          (FNetPropertyConditionManager *this,UObject *param_1,ushort param_2,bool param_3)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr FVar2;
  int iVar3;
  TSharedPtr<FRepChangedPropertyTracker,1> *pTVar4;
  TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  int iVar7;
  FRepChangedPropertyTracker *pFVar8;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  TSharedPtr<FRepChangedPropertyTracker,1> local_48;
  
  pFVar8 = (FRepChangedPropertyTracker *)0x0;
  iVar7 = 0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  iVar3 = iVar7;
  if (param_1 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable(param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    iVar7 = local_res8.ObjectIndex;
    iVar3 = local_res8.ObjectSerialNumber;
  }
  FVar1 = local_res8;
  if ((((this->LastFoundTrackerKey).ObjectIndex != iVar7) ||
      ((this->LastFoundTrackerKey).ObjectSerialNumber != iVar3)) ||
     (this->LastFoundTracker == (FRepChangedPropertyTracker *)0x0)) {
    if (this->bAllowCreateTrackerFromSetPropertyActiveOverride == false) {
      pTVar5 = TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
                       *)&this->PropertyTrackerMap,(FObjectKey *)&local_res8);
      if (pTVar5 == (TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_> *)0x0) {
        pTVar6 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar6 = *(TReferenceControllerBase<1> **)&pTVar5->field_0x10;
        pFVar8 = *(FRepChangedPropertyTracker **)&pTVar5->field_0x8;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar4 = FindOrCreatePropertyTracker(this,&local_48,(FObjectKey)local_res8);
      pFVar8 = pTVar4->Object;
      pTVar6 = (pTVar4->SharedReferenceCount).ReferenceController;
      (pTVar4->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar4->Object = (FRepChangedPropertyTracker *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    FVar2 = local_res8;
    local_res8.ObjectIndex = FVar1.ObjectIndex;
    local_res8.ObjectSerialNumber = FVar1.ObjectSerialNumber;
    (this->LastFoundTrackerKey).ObjectIndex = local_res8.ObjectIndex;
    (this->LastFoundTrackerKey).ObjectSerialNumber = local_res8.ObjectSerialNumber;
    this->LastFoundTracker = pFVar8;
    local_res8 = FVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  if (this->LastFoundTracker != (FRepChangedPropertyTracker *)0x0) {
    FRepChangedPropertyTracker::SetCustomIsActiveOverride
              (this->LastFoundTracker,param_1,param_2,param_3);
  }
  return;
}

// SetPropertyDynamicCondition @ 1441ec0e0

void __thiscall
UE::Net::Private::FNetPropertyConditionManager::SetPropertyDynamicCondition
          (FNetPropertyConditionManager *this,UObject *param_1,ushort param_2,
          ELifetimeCondition param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  ELifetimeCondition EVar9;
  TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_> *pTVar10;
  short *psVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  TReferenceControllerBase<1> *pTVar15;
  ushort local_res8 [8];
  TPairInitializer<unsigned_short_const_&,short_&&> local_88;
  UObject *local_78;
  FObjectKey local_70;
  ushort *local_68;
  ushort *local_60;
  FDestructionSentinel local_58;
  
  local_res8[0] = 0;
  local_res8[1] = 0;
  local_res8[2] = 0;
  local_res8[3] = 0;
  if (param_1 == (UObject *)0x0) {
    local_70.ObjectIndex = 0;
    local_70.ObjectSerialNumber = 0;
  }
  else {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable(param_1);
    }
    local_88.Value = (short *)0x0;
    local_78 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_88.Value,(FObjectPtr)&local_78);
    local_70 = (FObjectKey)local_88.Value;
  }
  pTVar10 = TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>,0>,FDefaultSetAllocator>
                    *)&this->PropertyTrackerMap,&local_70);
  if (pTVar10 == (TTuple<FObjectKey,TSharedPtr<FRepChangedPropertyTracker,1>_> *)0x0) {
    pTVar15 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar15 = *(TReferenceControllerBase<1> **)&pTVar10->field_0x10;
    lVar14 = *(longlong *)&pTVar10->field_0x8;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar14 != 0) {
      if (*(int *)(lVar14 + 0x28) != *(int *)(lVar14 + 0x54)) {
        lVar12 = *(longlong *)(lVar14 + 0x60);
        if (*(longlong *)(lVar14 + 0x60) == 0) {
          lVar12 = lVar14 + 0x58;
        }
        iVar7 = *(int *)(lVar12 + ((ulonglong)(*(int *)(lVar14 + 0x68) - 1) & (ulonglong)param_2) *
                                  4);
        if (iVar7 != -1) {
          lVar12 = *(longlong *)
                    &((TSet<TTuple<unsigned_short,short>,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>,FDefaultSetAllocator>
                       *)(lVar14 + 0x20))->Elements;
          do {
            lVar1 = lVar12 + (longlong)iVar7 * 0xc;
            if (*(ushort *)(lVar12 + (longlong)iVar7 * 0xc) == param_2) {
              psVar11 = (short *)(lVar1 + 2);
              if (lVar1 == 0) {
                psVar11 = (short *)0x0;
              }
              if (psVar11 != (short *)0x0) {
                EVar9 = (ELifetimeCondition)*psVar11;
                goto LAB_1441ec1f1;
              }
              break;
            }
            iVar7 = *(int *)(lVar1 + 4);
          } while (iVar7 != -1);
        }
      }
      EVar9 = COND_Dynamic;
LAB_1441ec1f1:
      if (param_3 != EVar9) {
        *(int *)(lVar14 + 0x70) = *(int *)(lVar14 + 0x70) + 1;
        local_68 = local_res8;
        local_60 = local_res8 + 4;
        local_res8[0] = param_2;
        local_res8[4] = (ushort)param_3;
        TSet<TTuple<unsigned_short,short>,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<unsigned_short_const_&,short_&&>_>
                  ((TSet<TTuple<unsigned_short,short>,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>,FDefaultSetAllocator>
                    *)(lVar14 + 0x20),&local_88,(bool *)&local_68);
        bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &FPropertyConditionDelegates::OnPropertyDynamicConditionChangedDelegate);
        if (bVar4) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &FPropertyConditionDelegates::OnPropertyDynamicConditionChangedDelegate,
                     (FWriteAccessScope *)&local_58);
          bVar4 = false;
          FPropertyConditionDelegates::OnPropertyDynamicConditionChangedDelegate._28_4_ =
               FPropertyConditionDelegates::OnPropertyDynamicConditionChangedDelegate._28_4_ + 1;
          uVar13 = FPropertyConditionDelegates::OnPropertyDynamicConditionChangedDelegate._16_4_ - 1
          ;
          if (-1 < (int)uVar13) {
            lVar14 = (longlong)(int)uVar13 << 4;
            bVar4 = false;
            do {
              uVar8 = 0;
              if ((int)uVar13 <
                  (int)FPropertyConditionDelegates::OnPropertyDynamicConditionChangedDelegate._16_4_
                 ) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (((*(int *)(lVar14 + 8 +
                            FPropertyConditionDelegates::OnPropertyDynamicConditionChangedDelegate.
                            _8_8_) == 0) ||
                  (plVar2 = *(longlong **)
                             (lVar14 + FPropertyConditionDelegates::
                                       OnPropertyDynamicConditionChangedDelegate._8_8_),
                  plVar2 == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_1,(ulonglong)param_2,param_3),
                 cVar6 == '\0')) {
                bVar4 = true;
              }
              lVar14 = lVar14 + -0x10;
              uVar13 = uVar13 - 1;
            } while (-1 < (int)uVar13);
          }
          FPropertyConditionDelegates::OnPropertyDynamicConditionChangedDelegate._28_4_ =
               FPropertyConditionDelegates::OnPropertyDynamicConditionChangedDelegate._28_4_ + -1;
          if (bVar4) {
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &FPropertyConditionDelegates::OnPropertyDynamicConditionChangedDelegate,false
                      );
          }
          if (local_58.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return;
}

// operator() @ 1504b1b90

bool __thiscall
`UE::Net::Private::FNetPropertyConditionManager::FindOrCreatePropertyTracker'::__l17::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1326440025906216853>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1326440025906216853>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

