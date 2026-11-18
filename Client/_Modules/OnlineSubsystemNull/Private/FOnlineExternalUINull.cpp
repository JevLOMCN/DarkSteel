// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 17

// FOnlineExternalUINull @ 14ed10f70

FOnlineExternalUINull * __thiscall
FOnlineExternalUINull::FOnlineExternalUINull
          (FOnlineExternalUINull *this,FOnlineSubsystemNull *param_1)

{
  this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOnlineExternalUINull__6B_;
  this->_padding_ = 2;
  this->_padding_ = 2;
  this->NullSubsystem = param_1;
  return this;
}

// ~FOnlineExternalUINull @ 14ed12b90

void __thiscall FOnlineExternalUINull::~FOnlineExternalUINull(FOnlineExternalUINull *this)

{
  this->_padding_ = (longlong)&___7FOnlineExternalUINull__6B_;
  IOnlineExternalUI::~IOnlineExternalUI((IOnlineExternalUI *)this);
  return;
}

// operator() @ 14ed14ac0

void __thiscall
`FOnlineExternalUINull::OnIdentityLoginComplete'::__l2::<lambda_1>::operator()(void *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  FOnlineError *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 local_78;
  TReferenceControllerBase<1> *local_70;
  FReadAccessScope local_68;
  FOnlineError local_50;
  
  pFVar4 = FOnlineError::FOnlineError(&local_50,*(bool *)((longlong)this + 0x14));
  uVar1 = *(undefined4 *)((longlong)this + 0x10);
  uVar2 = *(undefined8 *)this;
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18),
             &local_68);
  if ((*(int *)((longlong)this + 0x28) == 0) ||
     (plVar3 = *(longlong **)((longlong)this + 0x20), plVar3 == (longlong *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
  }
  else {
    local_78 = uVar2;
    local_70 = pTVar5;
    (**(code **)(*plVar3 + 0x68))(plVar3,&local_78,uVar1,pFVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (local_50.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.ErrorMessage.TextData.Reference + 0x10))();
  }
  if (local_50.ErrorCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.ErrorCode.Data.AllocatorInstance.Data);
  }
  if (local_50.ErrorRaw.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.ErrorRaw.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ed158c0

void __thiscall `FOnlineExternalUINull::ShowLoginUI'::__l2::<lambda_1>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FOnlineIdentityNull *this_00;
  longlong lVar2;
  code *pcVar3;
  ForElementType<TAlignedBytes<16,16>_> FVar4;
  int iVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  int iVar10;
  undefined1 local_148 [8];
  ForAnyElementType local_140;
  int local_138;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_130;
  FDelegateAllocation local_128;
  FOnlineAccountCredentials local_118;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  
  iVar10 = *(int *)((longlong)this + 8);
  if (FOnlineSubsystemNull::bForceShowLoginUIUserChange) {
    iVar10 = iVar10 + 1;
  }
  puVar8 = (undefined8 *)
           (**(code **)(**(longlong **)(*(longlong *)this + 0x68) + 0x80))
                     (*(longlong **)(*(longlong *)this + 0x68),local_38);
  pTVar1 = (TReferenceControllerBase<1> *)puVar8[1];
  this_00 = (FOnlineIdentityNull *)*puVar8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  if (this_00 == (FOnlineIdentityNull *)0x0) goto LAB_14ed15d2e;
  lVar2 = *(longlong *)this;
  local_148 = (undefined1  [8])0x0;
  local_140.Data = (FScriptContainerElement *)0x0;
  local_138 = 0;
  local_130.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_128.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_130,(FWriteAccessScope *)&local_58);
  local_40 = &local_128;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,&local_128);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXV__TSharedPtr___CBVFUniqueNetId___00__HAEBUFOnlineError___ZUFDefaultDelegateUserPolicy______6B_
    ;
    TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *)(puVar8 + 1),
               (TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *)((longlong)this + 0x10));
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[4] = uVar9;
    *puVar8 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFOnlineExternalUINull____A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy__V__TDelegate___A6AXV__TSharedPtr___CBVFUniqueNetId___00__HAEBUFOnlineError___ZUFDefaultDelegateUserPolicy______6B_
    ;
    puVar8[6] = FOnlineExternalUINull::OnIdentityLoginComplete;
    puVar8[5] = lVar2;
    if (lVar2 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && MethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                         ,0x1d8,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_130,(FWriteAccessScope *)&local_b8);
  iVar5 = local_128.DelegateSize;
  FVar4 = local_128.DelegateAllocator;
  local_128.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_128.DelegateSize = 0;
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
             (FWriteAccessScope *)&local_a0);
  if (local_138 == 0) {
LAB_14ed15a7e:
    if (local_140.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data);
    }
  }
  else if (local_140.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_140.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_140,0,0,0x10);
    local_138 = 0;
    goto LAB_14ed15a7e;
  }
  local_140.Data = (FScriptContainerElement *)FVar4;
  local_138 = iVar5;
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_130,(FWriteAccessScope *)&local_88);
  if ((local_128.DelegateSize != 0) &&
     (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_128.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_128,0,0,0x10);
    local_128.DelegateSize = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (local_128.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_128.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_130.AccessDetector);
  ::FString::FString(&local_c8,L"DummyId");
  ::FString::FString(&local_d8,L"DummyUser");
  ::FString::FString(&local_e8,L"ShowLoginUI");
  FVar6.Data = local_e8.Data.AllocatorInstance.Data;
  local_118.Type.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_e8.Data.ArrayNum == 0) {
    local_118.Type.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_e8.Data.ArrayNum,0,(ForAnyElementType *)&local_118,local_e8.Data.ArrayNum,
               &local_118.Type.Data.ArrayMax);
    memcpy(local_118.Type.Data.AllocatorInstance.Data,FVar6.Data,
           (longlong)local_e8.Data.ArrayNum * 2);
  }
  FVar6.Data = local_d8.Data.AllocatorInstance.Data;
  local_118.Id.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_d8.Data.ArrayNum == 0) {
    local_118.Id.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_d8.Data.ArrayNum,0,(ForAnyElementType *)&local_118.Id,
               local_d8.Data.ArrayNum,&local_118.Id.Data.ArrayMax);
    memcpy(local_118.Id.Data.AllocatorInstance.Data,FVar6.Data,(longlong)local_d8.Data.ArrayNum * 2)
    ;
  }
  FVar6.Data = local_c8.Data.AllocatorInstance.Data;
  local_118.Token.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_c8.Data.ArrayNum == 0) {
    local_118.Token.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)&local_118.Token,
               local_c8.Data.ArrayNum,&local_118.Token.Data.ArrayMax);
    memcpy(local_118.Token.Data.AllocatorInstance.Data,FVar6.Data,
           (longlong)local_c8.Data.ArrayNum * 2);
  }
  FOnlineIdentityNull::LoginInternal
            (this_00,iVar10,&local_118,
             (TDelegate<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
              *)local_148);
  if (local_118.Token.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Token.Data.AllocatorInstance.Data);
  }
  if (local_118.Id.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Id.Data.AllocatorInstance.Data);
  }
  if (local_118.Type.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Type.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
             (FWriteAccessScope *)&local_70);
  if ((local_138 != 0) &&
     ((ForElementType<TAlignedBytes<16,16>_>)local_140.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_140.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_140,0,0,0x10);
    local_138 = 0;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if ((ForElementType<TAlignedBytes<16,16>_>)local_140.Data !=
      (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free(local_140.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_148);
LAB_14ed15d2e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// CloseWebURL @ 14ed1e9b0

bool __thiscall FOnlineExternalUINull::CloseWebURL(FOnlineExternalUINull *this)

{
  return false;
}

// OnIdentityLoginComplete @ 14ed292b0

void __thiscall
FOnlineExternalUINull::OnIdentityLoginComplete
          (FOnlineExternalUINull *this,int param_1,bool param_2,FUniqueNetId *param_3,
          FString *param_4,
          TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
          *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  FOnlineSubsystemNull *this_00;
  TSharedRef<FUniqueNetId_const_,1> *pTVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  atomic<int> *paVar5;
  undefined1 local_88 [8];
  FDelegateAllocation local_80;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  FUniqueNetId *local_50;
  TReferenceControllerBase<1> *local_48;
  int local_40;
  undefined1 local_3c;
  TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
  local_38;
  
  pTVar2 = TSharedFromThis<FUniqueNetId,1>::AsShared
                     ((TSharedFromThis<FUniqueNetId,1> *)&param_3->field_0x8,
                      (TSharedRef<FUniqueNetId_const_,1> *)local_88);
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  local_50 = pTVar2->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_80.DelegateAllocator);
  this_00 = this->NullSubsystem;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  local_48 = pTVar1;
  local_40 = param_1;
  local_3c = param_2;
  TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
            (&local_38,param_5);
  local_88 = (undefined1  [8])0x0;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_80.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_70);
  local_58 = &local_80;
  puVar3 = UE::Core::Private::DelegateAllocate(0x48,&local_80);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::OnIdentityLoginComplete'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = local_50;
    puVar3[4] = local_48;
    local_48 = (TReferenceControllerBase<1> *)0x0;
    local_50 = (FUniqueNetId *)0x0;
    *(int *)(puVar3 + 5) = local_40;
    *(undefined1 *)((longlong)puVar3 + 0x2c) = local_3c;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar3 + 6),
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_38);
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  FOnlineSubsystemImpl::ExecuteDelegateNextTick
            ((FOnlineSubsystemImpl *)this_00,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_70);
  if ((local_80.DelegateSize != 0) &&
     (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)*(longlong *)local_80.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_80,0,0,0x10);
    local_80.DelegateSize = 0;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_80.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  return;
}

// ShowAccountCreationUI @ 14ed2eec0

bool __thiscall
FOnlineExternalUINull::ShowAccountCreationUI
          (FOnlineExternalUINull *this,int param_1,
          TDelegate<void___cdecl(int,FOnlineAccountCredentials_const_&,FOnlineError_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  return false;
}

// ShowAccountUpgradeUI @ 14ed2eed0

bool __thiscall
FOnlineExternalUINull::ShowAccountUpgradeUI(FOnlineExternalUINull *this,FUniqueNetId *param_1)

{
  return false;
}

// ShowAchievementsUI @ 14ed2eee0

bool __thiscall FOnlineExternalUINull::ShowAchievementsUI(FOnlineExternalUINull *this,int param_1)

{
  return false;
}

// ShowFriendsUI @ 14ed2eef0

bool __thiscall FOnlineExternalUINull::ShowFriendsUI(FOnlineExternalUINull *this,int param_1)

{
  return false;
}

// ShowInviteUI @ 14ed2ef00

bool __thiscall
FOnlineExternalUINull::ShowInviteUI(FOnlineExternalUINull *this,int param_1,FName param_2)

{
  return false;
}

// ShowLeaderboardUI @ 14ed2ef10

bool __thiscall
FOnlineExternalUINull::ShowLeaderboardUI(FOnlineExternalUINull *this,FString *param_1)

{
  return false;
}

// ShowLoginUI @ 14ed2ef20

bool __thiscall
FOnlineExternalUINull::ShowLoginUI
          (FOnlineExternalUINull *this,int param_1,bool param_2,bool param_3,
          TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
          *param_4)

{
  FOnlineSubsystemNull *this_00;
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  FOnlineExternalUINull *local_30;
  int local_28;
  TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
  local_20;
  
  this_00 = this->NullSubsystem;
  local_30 = this;
  local_28 = param_1;
  TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
            (&local_20,param_4);
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar1 = UE::Core::Private::DelegateAllocate(0x40,&local_60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineExternalUINull::ShowLoginUI'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar1[3] = local_30;
    *(int *)(puVar1 + 4) = local_28;
    TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedPtr<FUniqueNetId_const_,1>,int,FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *)(puVar1 + 5),&local_20);
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  FOnlineSubsystemImpl::ExecuteDelegateNextTick
            ((FOnlineSubsystemImpl *)this_00,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_20);
  return true;
}

// ShowProfileUI @ 14ed2f090

bool __thiscall
FOnlineExternalUINull::ShowProfileUI
          (FOnlineExternalUINull *this,FUniqueNetId *param_1,FUniqueNetId *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3)

{
  return false;
}

// ShowSendMessageUI @ 14ed2f110

bool __thiscall
FOnlineExternalUINull::ShowSendMessageUI
          (FOnlineExternalUINull *this,int param_1,FShowSendMessageParams *param_2,
          TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_3)

{
  return false;
}

// ShowStoreUI @ 14ed2f120

bool __thiscall
FOnlineExternalUINull::ShowStoreUI
          (FOnlineExternalUINull *this,int param_1,FShowStoreParams *param_2,
          TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_3)

{
  return false;
}

// ShowWebURL @ 14ed2f130

bool __thiscall
FOnlineExternalUINull::ShowWebURL
          (FOnlineExternalUINull *this,FString *param_1,FShowWebUrlParams *param_2,
          TDelegate<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *param_3)

{
  return false;
}

