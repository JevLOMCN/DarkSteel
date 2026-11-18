// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemNull
// Functions: 22

// FOnlineIdentityNull @ 14ed10fd0

FOnlineIdentityNull * __thiscall
FOnlineIdentityNull::FOnlineIdentityNull(FOnlineIdentityNull *this,FOnlineSubsystemNull *param_1)

{
  ForAnyElementType FVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined1 local_a8 [8];
  FDelegateAllocation local_a0;
  FOnlineAccountCredentials local_90;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  FString local_40;
  FString local_30;
  FString local_20;
  
  IOnlineIdentity::IOnlineIdentity((IOnlineIdentity *)this);
  this->NullSubsystem = param_1;
  this->_padding_ = (longlong)&___7FOnlineIdentityNull__6B_;
  *(undefined8 *)&this->UserIds = 0;
  *(undefined8 *)&(this->UserIds).field_0x8 = 0;
  *(undefined8 *)&(this->UserIds).field_0x20 = 0;
  *(undefined4 *)&(this->UserIds).field_0x28 = 0;
  *(undefined4 *)&(this->UserIds).field_0x2c = 0x80;
  *(undefined4 *)&(this->UserIds).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UserIds).field_0x34 = 0;
  *(undefined8 *)&(this->UserIds).field_0x40 = 0;
  *(undefined4 *)&(this->UserIds).field_0x48 = 0;
  *(undefined8 *)&this->UserAccounts = 0;
  *(undefined8 *)&(this->UserAccounts).field_0x8 = 0;
  *(undefined8 *)&(this->UserAccounts).field_0x20 = 0;
  *(undefined4 *)&(this->UserAccounts).field_0x28 = 0;
  *(undefined4 *)&(this->UserAccounts).field_0x2c = 0x80;
  *(undefined4 *)&(this->UserAccounts).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->UserAccounts).field_0x34 = 0;
  *(undefined8 *)&(this->UserAccounts).field_0x40 = 0;
  *(undefined4 *)&(this->UserAccounts).field_0x48 = 0;
  if (FOnlineSubsystemNull::bAutoLoginAtStartup != false) {
    ::FString::FString(&local_20,L"DummyId");
    ::FString::FString(&local_30,L"DummyUser");
    ::FString::FString(&local_40,L"DummyType");
    FVar1.Data = local_40.Data.AllocatorInstance.Data;
    local_90.Type.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_40.Data.ArrayNum == 0) {
      local_90.Type.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_40.Data.ArrayNum,0,(ForAnyElementType *)&local_90,local_40.Data.ArrayNum,
                 &local_90.Type.Data.ArrayMax);
      memcpy(local_90.Type.Data.AllocatorInstance.Data,FVar1.Data,
             (longlong)local_40.Data.ArrayNum * 2);
    }
    FVar1.Data = local_30.Data.AllocatorInstance.Data;
    local_90.Id.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_30.Data.ArrayNum == 0) {
      local_90.Id.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_30.Data.ArrayNum,0,(ForAnyElementType *)&local_90.Id,
                 local_30.Data.ArrayNum,&local_90.Id.Data.ArrayMax);
      memcpy(local_90.Id.Data.AllocatorInstance.Data,FVar1.Data,(longlong)local_30.Data.ArrayNum * 2
            );
    }
    FVar1.Data = local_20.Data.AllocatorInstance.Data;
    local_90.Token.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_20.Data.ArrayNum == 0) {
      local_90.Token.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_20.Data.ArrayNum,0,(ForAnyElementType *)&local_90.Token,
                 local_20.Data.ArrayNum,&local_90.Token.Data.ArrayMax);
      memcpy(local_90.Token.Data.AllocatorInstance.Data,FVar1.Data,
             (longlong)local_20.Data.ArrayNum * 2);
    }
    local_a8 = (undefined1  [8])0x0;
    local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_60);
    local_48 = &local_a0;
    puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_a0);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::Login'::`2'::<lambda_1>_>
                 ::_vftable_;
      puVar2[3] = this;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    LoginInternal(this,0,&local_90,
                  (TDelegate<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                   *)local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
               (FWriteAccessScope *)&local_60);
    if ((local_a0.DelegateSize != 0) &&
       (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_a0,0,0,0x10);
      local_a0.DelegateSize = 0;
    }
    if (local_60.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
    }
    if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_a0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_a8);
    if (local_90.Token.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Token.Data.AllocatorInstance.Data);
    }
    if (local_90.Id.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Id.Data.AllocatorInstance.Data);
    }
    if (local_90.Type.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Type.Data.AllocatorInstance.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// ~FOnlineIdentityNull @ 14ed12bd0

void __thiscall FOnlineIdentityNull::~FOnlineIdentityNull(FOnlineIdentityNull *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FOnlineIdentityNull__6B_;
  *(undefined4 *)&(this->UserAccounts).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UserAccounts).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UserAccounts);
  *(undefined4 *)&(this->UserIds).field_0x48 = 0;
  pvVar1 = *(void **)&(this->UserIds).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FUniqueNetId_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FUniqueNetId_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<FUniqueNetId_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->UserIds);
  IOnlineIdentity::~IOnlineIdentity((IOnlineIdentity *)this);
  return;
}

// operator() @ 14ed14f30

void __thiscall `FOnlineIdentityNull::RevokeAuthToken'::__l2::<lambda_1>::operator()(void *this)

{
  undefined8 uVar1;
  longlong *plVar2;
  FString *pFVar3;
  FOnlineError *pFVar4;
  FString local_78;
  FReadAccessScope local_68;
  FOnlineError local_50;
  
  pFVar3 = ::FString::FString(&local_78,L"RevokeAuthToken not implemented");
  pFVar4 = FOnlineError::FOnlineError(&local_50,pFVar3);
  uVar1 = *(undefined8 *)this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x10),
             &local_68);
  if ((*(int *)((longlong)this + 0x20) != 0) &&
     (plVar2 = *(longlong **)((longlong)this + 0x18), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,uVar1,pFVar4);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  if (local_50.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.ErrorMessage.TextData.Reference + 0x10))();
  }
  if (local_50.ErrorCode.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.ErrorCode.Data.AllocatorInstance.Data);
  }
  if (local_50.ErrorRaw.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.ErrorRaw.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// AutoLogin @ 14ed1c440

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FOnlineIdentityNull::AutoLogin(FOnlineIdentityNull *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  undefined1 uVar4;
  int iVar5;
  wchar_t *pwVar6;
  FStaticBasicLogRecord *pFVar7;
  longlong lVar8;
  int iVar9;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  ForAnyElementType local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  pwVar6 = FCommandLine::Get();
  FParse::Value(pwVar6,L"AUTH_LOGIN=",&local_78,true,(wchar_t **)0x0);
  pwVar6 = FCommandLine::Get();
  FParse::Value(pwVar6,L"AUTH_PASSWORD=",&local_88,true,(wchar_t **)0x0);
  pwVar6 = FCommandLine::Get();
  FParse::Value(pwVar6,L"AUTH_TYPE=",&local_68,true,(wchar_t **)0x0);
  FVar3.Data = local_68.Data.AllocatorInstance.Data;
  lVar8 = (longlong)local_68.Data.ArrayNum;
  iVar9 = 0;
  iVar5 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar5 = iVar9;
  }
  if (iVar5 < 1) {
    iVar5 = local_88.Data.ArrayNum + -1;
    if (local_88.Data.ArrayNum == 0) {
      iVar5 = iVar9;
    }
    if (0 < iVar5) goto LAB_14ed1c515;
    iVar5 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar5 = iVar9;
    }
    if (0 < iVar5) goto LAB_14ed1c515;
    bVar2 = false;
  }
  else {
LAB_14ed1c515:
    bVar2 = true;
  }
  if (local_78.Data.ArrayNum < 2) {
    if (FOnlineSubsystemNull::bRequireLoginCredentials == false) {
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = 0;
      local_38.Data = (FScriptContainerElement *)0x0;
      local_30 = 0;
      local_28.Data = (FScriptContainerElement *)0x0;
      local_20 = 0;
      uVar4 = (**(code **)(this->_padding_ + 0x88))(this,param_1,&local_48);
LAB_14ed1c6e7:
      if (local_28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data);
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      goto LAB_14ed1c76d;
    }
    if ((bVar2) && (2 < (byte)LogOnlineIdentity._0_1_)) {
      ::FString::PrintfImpl(&local_58,L"AutoLogin missing AUTH_LOGIN=<login id>.");
      pFVar7 = &::LOG_Static;
      goto LAB_14ed1c73a;
    }
  }
  else if (local_88.Data.ArrayNum < 2) {
    if ((bVar2) && (2 < (byte)LogOnlineIdentity._0_1_)) {
      ::FString::PrintfImpl(&local_58,L"AutoLogin missing AUTH_PASSWORD=<password>.");
      pFVar7 = &::LOG_Static;
LAB_14ed1c73a:
      UE::Logging::Private::BasicLog<3>(pFVar7,(FLogCategoryBase *)&LogOnlineIdentity);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if (1 < local_68.Data.ArrayNum) {
      local_48.Data = (FScriptContainerElement *)0x0;
      pcVar1 = *(code **)(this->_padding_ + 0x88);
      local_40 = CONCAT44(local_40._4_4_,local_68.Data.ArrayNum);
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,&local_48,local_68.Data.ArrayNum,
                 (int *)((longlong)&local_40 + 4));
      memcpy(local_48.Data,FVar3.Data,lVar8 * 2);
      FVar3.Data = local_78.Data.AllocatorInstance.Data;
      lVar8 = (longlong)local_78.Data.ArrayNum;
      local_38.Data = (FScriptContainerElement *)0x0;
      local_30 = CONCAT44(local_30._4_4_,local_78.Data.ArrayNum);
      if (local_78.Data.ArrayNum == 0) {
        local_30 = local_78.Data._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_78.Data.ArrayNum,0,&local_38,local_78.Data.ArrayNum,
                   (int *)((longlong)&local_30 + 4));
        memcpy(local_38.Data,FVar3.Data,lVar8 * 2);
      }
      FVar3.Data = local_88.Data.AllocatorInstance.Data;
      lVar8 = (longlong)local_88.Data.ArrayNum;
      local_28.Data = (FScriptContainerElement *)0x0;
      local_20 = CONCAT44(local_20._4_4_,local_88.Data.ArrayNum);
      if (local_88.Data.ArrayNum == 0) {
        local_20 = local_88.Data._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_88.Data.ArrayNum,0,&local_28,local_88.Data.ArrayNum,
                   (int *)((longlong)&local_20 + 4));
        memcpy(local_28.Data,FVar3.Data,lVar8 * 2);
      }
      uVar4 = (*pcVar1)(this,param_1,&local_48);
      goto LAB_14ed1c6e7;
    }
    if ((bVar2) && (2 < (byte)LogOnlineIdentity._0_1_)) {
      ::FString::PrintfImpl(&local_58,L"AutoLogin missing AUTH_TYPE=<type>.");
      pFVar7 = &::LOG_Static;
      goto LAB_14ed1c73a;
    }
  }
  uVar4 = 0;
LAB_14ed1c76d:
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return (bool)uVar4;
}

// CreateUniquePlayerId @ 14ed21730

TSharedPtr<FUniqueNetId_const_,1> * __thiscall
FOnlineIdentityNull::CreateUniquePlayerId
          (FOnlineIdentityNull *this,TSharedPtr<FUniqueNetId_const_,1> *__return_storage_ptr__,
          FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FUniqueNetIdNull_const_,1> *pTVar2;
  TSharedRef<FUniqueNetIdNull_const_,1> local_18;
  
  pTVar2 = FUniqueNetIdNull::Create<FString_const_&>(&local_18,param_1);
  __return_storage_ptr__->Object = (FUniqueNetId *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateUniquePlayerId @ 14ed21780

TSharedPtr<FUniqueNetId_const_,1> * __thiscall
FOnlineIdentityNull::CreateUniquePlayerId
          (FOnlineIdentityNull *this,TSharedPtr<FUniqueNetId_const_,1> *__return_storage_ptr__,
          uchar *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<FUniqueNetIdNull_const_,1> *pTVar2;
  FString local_28;
  TSharedRef<FUniqueNetIdNull_const_,1> local_18;
  
  if ((param_1 == (uchar *)0x0) || (param_2 < 1)) {
    __return_storage_ptr__->Object = (FUniqueNetId *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    ::FString::ConstructFromPtrSize(&local_28,(wchar_t *)param_1,param_2);
    pTVar2 = FUniqueNetIdNull::Create<FString_&>(&local_18,&local_28);
    __return_storage_ptr__->Object = (FUniqueNetId *)pTVar2->Object;
    pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GenerateRandomUserId @ 14ed243f0

FString * __thiscall
FOnlineIdentityNull::GenerateRandomUserId
          (FOnlineIdentityNull *this,FString *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  ISocketSubsystem *pIVar7;
  FOutputDeviceRedirector *pFVar8;
  longlong *plVar9;
  FString *pFVar10;
  void **ppvVar11;
  FGuid *this_00;
  ForAnyElementType FVar12;
  undefined1 local_res20 [8];
  void *local_b8;
  void *local_b0;
  FString local_a8;
  FString local_98;
  FName local_88;
  FName local_80;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  void *local_68 [2];
  FString local_58;
  FString local_48;
  FGuid local_38;
  
  local_b8 = (void *)0x0;
  local_b0 = (void *)0x0;
  pFVar6 = ::FName::FName(&local_88,L"WINDOWS");
  pIVar7 = ISocketSubsystem::Get(pFVar6);
  cVar3 = (**(code **)(pIVar7->_padding_ + 0x80))(pIVar7,&local_b8);
  if (cVar3 == '\0') {
    pFVar6 = ::FName::FName(&local_80,L"WINDOWS");
    pIVar7 = ISocketSubsystem::Get(pFVar6);
    pcVar1 = *(code **)(pIVar7->_padding_ + 0xe0);
    pFVar8 = GetGlobalLogSingleton();
    plVar9 = (longlong *)(*pcVar1)(pIVar7,local_78,pFVar8,local_res20);
    pTVar2 = (TReferenceControllerBase<1> *)plVar9[1];
    plVar9 = (longlong *)*plVar9;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    if ((plVar9 == (longlong *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pFVar10 = (FString *)(*pcVar1)();
      return pFVar10;
    }
    ppvVar11 = (void **)(**(code **)(*plVar9 + 0x80))(plVar9,local_68);
    if (&local_b8 != ppvVar11) {
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      local_b8 = *ppvVar11;
      *ppvVar11 = (void *)0x0;
      local_b0 = ppvVar11[1];
      ppvVar11[1] = (void *)0x0;
    }
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  bVar4 = FOnlineSubsystemNull::bForceStableNullId;
  FVar12.Data = (FScriptContainerElement *)0x0;
  if (FOnlineSubsystemNull::bAddUserNumToNullId != false) {
    ::FString::PrintfImpl(&local_98,L"-%d");
    FVar12.Data = local_98.Data.AllocatorInstance.Data;
  }
  bVar5 = FWindowsPlatformProcess::IsFirstInstance();
  if ((bVar5) || (bVar4 != false)) {
    pFVar10 = FGenericPlatformMisc::GetLoginId(&local_48);
    ::FString::ToUpper(pFVar10,&local_58);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s-%s%s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    this_00 = FGuid::NewGuid(&local_38);
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.Data.ArrayNum = 0;
    local_a8.Data.ArrayMax = 0;
    FGuid::AppendString(this_00,&local_a8,Digits);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s-%s%s");
    local_48.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  return __return_storage_ptr__;
}

// GetAllUserAccounts @ 14ed246e0

TArray<TSharedPtr<FUserOnlineAccount,1>,TSizedDefaultAllocator<32>_> * __thiscall
FOnlineIdentityNull::GetAllUserAccounts
          (FOnlineIdentityNull *this,
          TArray<TSharedPtr<FUserOnlineAccount,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TSharedPtr<FUserOnlineAccount,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  uint *puVar9;
  undefined8 local_98;
  longlong local_90;
  TMap<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<TSharedRef<FUserOnlineAccountNull,1>_>_>
  *local_88;
  int iStack_80;
  uint uStack_7c;
  undefined1 *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  TMap<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<TSharedRef<FUserOnlineAccountNull,1>_>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  local_88 = &this->UserAccounts;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_78 = &(this->UserAccounts).field_0x10;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar5 = *(int *)&(this->UserAccounts).field_0x28;
  iStack_80 = 0;
  uStack_7c = 1;
  local_68 = iStack_80;
  iStack_6c = 0;
  if (iVar5 != 0) {
    puVar9 = *(uint **)&(this->UserAccounts).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)local_78;
    }
    uVar2 = *puVar9;
    local_68 = 0;
    iStack_80 = 0;
    while (uVar2 == 0) {
      lVar7 = (longlong)iStack_80;
      local_68 = local_68 + 0x20;
      iStack_80 = iStack_80 + 1;
      iStack_6c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_80) goto LAB_14ed247a0;
      uVar2 = puVar9[lVar7 + 1];
    }
    uStack_7c = -uVar2 & uVar2;
    uVar1 = (ulonglong)uStack_7c * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_6c = local_68 + -1 + (int)lVar7;
    if (iVar5 < iStack_6c) {
      iStack_6c = iVar5;
    }
  }
LAB_14ed247a0:
  uStack_70 = 0xffffffff;
  TStack_50._padding_ = CONCAT44(uStack_7c,iStack_80);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = iStack_6c;
  TStack_50.BaseBitIndex = local_68;
  iStack_64 = iStack_6c;
  local_58 = local_88;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_78;
  TStack_50.CurrentBitIndex = iStack_6c;
  if (iStack_6c < iVar5) {
    do {
      local_98 = *(undefined8 *)
                  (*(longlong *)local_58 + 0x10 + (longlong)TStack_50.CurrentBitIndex * 0x28);
      local_90 = *(longlong *)
                  (*(longlong *)local_58 + 0x18 + (longlong)TStack_50.CurrentBitIndex * 0x28);
      if (local_90 != 0) {
        LOCK();
        *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
        UNLOCK();
      }
      pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar8 <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 <
           pFVar8 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<TSharedPtr<FUserOnlineAccount,1>,TSizedDefaultAllocator<32>_> *)(*pcVar3)()
        ;
        return pTVar6;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar8 = local_98;
      *(longlong *)(pFVar8 + 8) = local_90;
      local_90 = 0;
      local_98 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// GetAuthToken @ 14ed24990

FString * __thiscall
FOnlineIdentityNull::GetAuthToken
          (FOnlineIdentityNull *this,FString *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  undefined4 in_register_00000084;
  longlong *local_28;
  TReferenceControllerBase<1> *local_20;
  longlong local_18;
  TReferenceControllerBase<1> *local_10;
  
  (**(code **)(this->_padding_ + 0x110))(this,&local_18,CONCAT44(in_register_00000084,param_1));
  if (local_18 != 0) {
    pcVar1 = *(code **)(this->_padding_ + 0x100);
    if ((local_18 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    (*pcVar1)(this,&local_28,local_18);
    if (local_28 != (longlong *)0x0) {
      if ((local_28 == (longlong *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
      (**(code **)(*local_28 + 0x30))(local_28,__return_storage_ptr__);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
      goto LAB_14ed24a76;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
LAB_14ed24a76:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return __return_storage_ptr__;
}

// GetAuthType @ 14ed24aa0

FString * __thiscall
FOnlineIdentityNull::GetAuthType(FOnlineIdentityNull *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetLoginStatus @ 14ed25630

Type __thiscall FOnlineIdentityNull::GetLoginStatus(FOnlineIdentityNull *this,FUniqueNetId *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  Type TVar5;
  int iVar6;
  undefined8 *puVar7;
  ForAnyElementType _Str;
  longlong *plVar8;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  FString local_38;
  FString local_28;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  (**(code **)(this->_padding_ + 0x100))(this,&local_48,param_1);
  TVar5 = UsingLocalProfile;
  bVar4 = true;
  bVar2 = false;
  if (local_48 == (longlong *)0x0) {
LAB_14ed256c2:
    bVar4 = bVar2;
    bVar2 = false;
  }
  else {
    if ((local_48 == (longlong *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar5 = (*pcVar1)();
      return TVar5;
    }
    puVar7 = (undefined8 *)(**(code **)(*local_48 + 8))(local_48,local_18);
    cVar3 = (**(code **)(*(longlong *)*puVar7 + 0x28))();
    bVar2 = true;
    if (cVar3 == '\0') goto LAB_14ed256c2;
    bVar2 = true;
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  if (bVar2) {
    if (FOnlineSubsystemNull::bForceOfflineMode == false) {
      if (FOnlineSubsystemNull::bOnlineRequiresSecondLogin != false) {
        ::FString::FString(&local_38,L"0");
        plVar8 = local_48;
        if ((local_48 == (longlong *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), plVar8 = local_48, bVar4)) {
          pcVar1 = (code *)swi(3);
          TVar5 = (*pcVar1)();
          return TVar5;
        }
        pcVar1 = *(code **)(*plVar8 + 0x20);
        ::FString::FString(&local_28,L"null:logincount");
        (*pcVar1)(plVar8,&local_28,&local_38);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        _Str.Data = (FScriptContainerElement *)L"";
        if (local_38.Data.ArrayNum != 0) {
          _Str.Data = local_38.Data.AllocatorInstance.Data;
        }
        iVar6 = _wtoi((wchar_t *)_Str.Data);
        if (iVar6 < 2) {
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          goto LAB_14ed257aa;
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      TVar5 = LoggedIn;
    }
  }
  else {
    TVar5 = NotLoggedIn;
  }
LAB_14ed257aa:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return TVar5;
}

// GetLoginStatus @ 14ed257e0

Type __thiscall FOnlineIdentityNull::GetLoginStatus(FOnlineIdentityNull *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  longlong local_18;
  TReferenceControllerBase<1> *local_10;
  
  (**(code **)(this->_padding_ + 0x110))(this,&local_18,param_1);
  if (local_18 == 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    return NotLoggedIn;
  }
  pcVar1 = *(code **)(this->_padding_ + 0x130);
  if ((local_18 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar3 = (*pcVar1)();
    return TVar3;
  }
  TVar3 = (*pcVar1)(this,local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return TVar3;
}

// GetPlatformUserIdFromUniqueNetId @ 14ed25d20

FPlatformUserId __thiscall
FOnlineIdentityNull::GetPlatformUserIdFromUniqueNetId
          (FOnlineIdentityNull *this,FUniqueNetId *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *local_18;
  TReferenceControllerBase<1> *local_10;
  
  iVar4 = 0;
  do {
    (**(code **)(this->_padding_ + 0x110))(this,&local_18,iVar4);
    if (local_18 != (undefined8 *)0x0) {
      if ((local_18 == (undefined8 *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return (FPlatformUserId)iVar4;
      }
      cVar3 = (**(code **)*local_18)();
      if (cVar3 != '\0') {
        (**(code **)(this->_padding_ + 0x180))(this,param_1,iVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_10);
        goto LAB_14ed25db6;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    iVar4 = iVar4 + 1;
    if (3 < iVar4) {
      *(undefined4 *)param_1 = 0xffffffff;
LAB_14ed25db6:
      return (FPlatformUserId)(int)param_1;
    }
  } while( true );
}

// GetPlayerNickname @ 14ed25e00

FString * __thiscall
FOnlineIdentityNull::GetPlayerNickname
          (FOnlineIdentityNull *this,FString *__return_storage_ptr__,FUniqueNetId *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x30))(param_1);
  return __return_storage_ptr__;
}

// GetPlayerNickname @ 14ed25e30

FString * __thiscall
FOnlineIdentityNull::GetPlayerNickname
          (FOnlineIdentityNull *this,FString *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  undefined4 in_register_00000084;
  longlong *local_18;
  TReferenceControllerBase<1> *local_10;
  
  (**(code **)(this->_padding_ + 0x110))(this,&local_18,CONCAT44(in_register_00000084,param_1));
  if (local_18 == (longlong *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"NullUser");
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    return __return_storage_ptr__;
  }
  if ((local_18 == (longlong *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  (**(code **)(*local_18 + 0x30))(local_18,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return __return_storage_ptr__;
}

// GetUniquePlayerId @ 14ed267f0

TSharedPtr<FUniqueNetId_const_,1> * __thiscall
FOnlineIdentityNull::GetUniquePlayerId
          (FOnlineIdentityNull *this,TSharedPtr<FUniqueNetId_const_,1> *__return_storage_ptr__,
          int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *puVar5;
  
  if (*(int *)&(this->UserIds).field_0x8 != *(int *)&(this->UserIds).field_0x34) {
    puVar5 = *(undefined1 **)&(this->UserIds).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->UserIds).field_0x38;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->UserIds).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar2 * 0x20 + *(longlong *)&this->UserIds);
        if (*piVar3 == param_1) {
          piVar4 = piVar3 + 2;
          if (piVar3 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          if (piVar4 != (int *)0x0) {
            __return_storage_ptr__->Object = *(FUniqueNetId **)piVar4;
            pTVar1 = *(TReferenceControllerBase<1> **)(piVar4 + 2);
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
            if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
              return __return_storage_ptr__;
            }
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
            return __return_storage_ptr__;
          }
          break;
        }
        iVar2 = piVar3[6];
      } while (iVar2 != -1);
    }
  }
  __return_storage_ptr__->Object = (FUniqueNetId *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetUserAccount @ 14ed268a0

TSharedPtr<FUserOnlineAccount,1> * __thiscall
FOnlineIdentityNull::GetUserAccount
          (FOnlineIdentityNull *this,TSharedPtr<FUserOnlineAccount,1> *__return_storage_ptr__,
          FUniqueNetId *param_1)

{
  TSharedRef<FUniqueNetId_const_,1> *pTVar1;
  TSharedRef<FUserOnlineAccountNull,1> *pTVar2;
  TSharedPtr<FUserOnlineAccount,1> local_38;
  TSharedRef<FUniqueNetId_const_,1> local_28;
  TSharedRef<FUniqueNetId_const_,1> local_18;
  
  __return_storage_ptr__->Object = (FUserOnlineAccount *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar1 = TSharedFromThis<FUniqueNetId,1>::AsShared
                     ((TSharedFromThis<FUniqueNetId,1> *)&param_1->field_0x8,&local_18);
  local_28.SharedReferenceCount.ReferenceController =
       (pTVar1->SharedReferenceCount).ReferenceController;
  local_28.Object = pTVar1->Object;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = TMapBase<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<TSharedRef<FUserOnlineAccountNull,1>_>_>
           ::Find((TMapBase<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>,FDefaultSetAllocator,TUniqueNetIdMapKeyFuncs<TSharedRef<FUserOnlineAccountNull,1>_>_>
                   *)&this->UserAccounts,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar1->SharedReferenceCount).ReferenceController);
  if (pTVar2 != (TSharedRef<FUserOnlineAccountNull,1> *)0x0) {
    local_38.SharedReferenceCount.ReferenceController =
         (pTVar2->SharedReferenceCount).ReferenceController;
    local_38.Object = (FUserOnlineAccount *)pTVar2->Object;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (__return_storage_ptr__ != &local_38) {
      __return_storage_ptr__->Object = local_38.Object;
      local_38.Object = (FUserOnlineAccount *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_38.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// GetUserPrivilege @ 14ed26a30

void __thiscall
FOnlineIdentityNull::GetUserPrivilege
          (FOnlineIdentityNull *this,FUniqueNetId *param_1,Type param_2,
          TDelegate<void___cdecl(FUniqueNetId_const_&,EUserPrivileges::Type,unsigned_int),FDefaultDelegateUserPolicy>
          *param_3,EShowPrivilegeResolveUI param_4)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  if ((FOnlineSubsystemNull::bForceOfflineMode) && (param_2 == CanPlayOnline)) {
    TDelegate<void___cdecl(FUniqueNetId_const_&,enum_EUserPrivileges::Type,unsigned_int),FDefaultDelegateUserPolicy>
    ::ExecuteIfBound(param_3,param_1,CanPlayOnline,0x400);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_28);
  if ((*(int *)&param_3->field_0x10 != 0) &&
     (plVar1 = *(longlong **)&param_3->field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2,0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// Login @ 14ed281e0

bool __thiscall
FOnlineIdentityNull::Login(FOnlineIdentityNull *this,int param_1,FOnlineAccountCredentials *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar2 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXH_NAEBVFUniqueNetId__AEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::Login'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar2[3] = this;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  bVar1 = LoginInternal(this,param_1,param_2,
                        (TDelegate<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
                         *)local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return bVar1;
}

// LoginInternal @ 14ed28320

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FOnlineIdentityNull::LoginInternal
          (FOnlineIdentityNull *this,int param_1,FOnlineAccountCredentials *param_2,
          TDelegate<void___cdecl(int,bool,FUniqueNetId_const_&,FString_const_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar1
  ;
  undefined1 *puVar2;
  TReferenceControllerBase<1> *pTVar3;
  FUniqueNetIdNull *pFVar4;
  undefined8 uVar5;
  code *pcVar6;
  FName FVar7;
  FName FVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  TSharedPtr<FUniqueNetId_const_,1> *this_00;
  FUserOnlineAccountNull *pFVar13;
  FUserOnlineAccountNull *pFVar14;
  TSharedRef<FUniqueNetId_const_,1> *pTVar15;
  TSharedRef<FUniqueNetIdNull_const_,1> *pTVar16;
  undefined8 *puVar17;
  ForAnyElementType _Str;
  FUserOnlineAccountNull *pFVar18;
  int local_res10 [2];
  TSharedPtr<FUserOnlineAccountNull,1> local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  undefined1 local_1b8 [16];
  TRawPtrProxy<FUserOnlineAccountNull> local_1a8;
  undefined1 local_1a0 [16];
  TPairInitializer<FString_&&,FString_const_&> local_190;
  FUserOnlineAccountNull *local_178;
  TReferenceControllerBase<1> *pTStack_170;
  undefined8 local_168;
  TReferenceControllerBase<1> *local_160;
  FUniqueNetIdNull *local_158;
  TReferenceControllerBase<1> *local_150;
  undefined8 local_148;
  FSharedReferencer<1> local_140;
  FString local_138;
  TSharedRef<FUniqueNetIdNull_const_,1> local_128;
  FString *local_118;
  undefined1 *local_110;
  FString local_108;
  FUniqueNetIdNull **local_f8;
  FUserOnlineAccountNull **local_f0;
  int *local_e8;
  undefined8 *local_e0;
  TSharedRef<FUniqueNetId_const_,1> local_d8;
  FString local_c8;
  FString local_b8;
  TSharedRef<FUniqueNetIdNull_const_,1> local_a8;
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  TSharedRef<FUniqueNetId_const_,1> local_48;
  
  pFVar18 = (FUserOnlineAccountNull *)0x0;
  local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.Data.ArrayNum = 0;
  local_1f8.Data.ArrayMax = 0;
  local_208.Object = (FUserOnlineAccountNull *)0x0;
  local_208.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_res10[0] = param_1;
  if (3 < (uint)param_1) {
    ::FString::PrintfImpl(&local_1c8,L"Invalid LocalUserNum=%d");
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    local_1f8.Data.AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
    local_1f8.Data.ArrayNum = local_1c8.Data.ArrayNum;
    local_1f8.Data.ArrayMax = local_1c8.Data.ArrayMax;
    local_1c8.Data.ArrayNum = 0;
    local_1c8.Data.ArrayMax = 0;
    local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar13 = local_208.Object;
    goto LAB_14ed28a54;
  }
  if ((FOnlineSubsystemNull::bRequireShowLoginUI) &&
     (iVar11 = ::FString::Find(&param_2->Type,L"LoginUI",7,IgnoreCase,FromStart,-1), iVar11 == -1))
  {
    ::FString::operator=(&local_1f8,L"Only supports login using ShowLoginUI");
    pFVar13 = local_208.Object;
    goto LAB_14ed28a54;
  }
  iVar11 = local_res10[0];
  if ((FOnlineSubsystemNull::bRequireLoginCredentials != false) && ((param_2->Id).Data.ArrayNum < 2)
     ) {
    ::FString::operator=(&local_1f8,L"Invalid account id, string empty");
    pFVar13 = local_208.Object;
    goto LAB_14ed28a54;
  }
  this_00 = TMapBase<int,TSharedPtr<FUniqueNetId_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUniqueNetId_const_,1>,0>_>
            ::Find((TMapBase<int,TSharedPtr<FUniqueNetId_const_,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUniqueNetId_const_,1>,0>_>
                    *)&this->UserIds,local_res10[0]);
  if (this_00 == (TSharedPtr<FUniqueNetId_const_,1> *)0x0) {
    GenerateRandomUserId(this,(FString *)local_1a0,iVar11);
    pTVar16 = FUniqueNetIdNull::Create<FString_&>(&local_a8,(FString *)local_1a0);
    local_158 = pTVar16->Object;
    local_150 = (pTVar16->SharedReferenceCount).ReferenceController;
    if (local_150 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_150->SharedReferenceCount = (atomic<int>)((int)local_150->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    pFVar13 = ::operator_new(0xb8);
    local_1a8.Object = pFVar18;
    if (pFVar13 != (FUserOnlineAccountNull *)0x0) {
      pFVar13->_padding_ = (longlong)&___7FUserOnlineAccountNull__6B_;
      pFVar14 = ::operator_new(0x30);
      FVar7 = NULL_SUBSYSTEM;
      local_190.Value = (FString *)pFVar18;
      if (pFVar14 != (FUserOnlineAccountNull *)0x0) {
        pTVar1 = &pFVar14->AdditionalAuthData;
        (pFVar14->UserIdPtr).Object = (FUniqueNetId *)0x0;
        (pFVar14->UserIdPtr).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar14->_padding_ = (longlong)&___7FUniqueNetIdString__6B_;
        *(undefined8 *)pTVar1 = 0;
        local_1b8._0_8_ = local_1a0._0_8_;
        puVar2 = &(pFVar14->AdditionalAuthData).field_0xc;
        local_1b8._8_8_ = local_1a0._8_8_;
        iVar11 = (int)local_1a0._8_8_;
        *(int *)&(pFVar14->AdditionalAuthData).field_0x8 = iVar11;
        if (iVar11 == 0) {
          *(undefined4 *)puVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar11,0,(ForAnyElementType *)pTVar1,iVar11,(int *)puVar2);
          memcpy(*(void **)pTVar1,(void *)local_1b8._0_8_,(longlong)(int)local_1b8._8_4_ * 2);
        }
        FVar8 = NULL_SUBSYSTEM;
        NULL_SUBSYSTEM.ComparisonIndex = FVar7.ComparisonIndex.Value;
        NULL_SUBSYSTEM.Number = FVar7.Number;
        uVar12 = NULL_SUBSYSTEM.Number;
        *(uint *)&(pFVar14->AdditionalAuthData).field_0x10 = NULL_SUBSYSTEM.ComparisonIndex.Value;
        NULL_SUBSYSTEM = FVar8;
        *(uint *)&(pFVar14->AdditionalAuthData).field_0x14 = uVar12;
        pFVar14->_padding_ = (longlong)&___7FUniqueNetIdNull__6B_;
        local_190.Value = (FString *)pFVar14;
        if (((((pFVar14->UserIdPtr).Object != (FUniqueNetId *)0x0) &&
             (pTVar3 = (pFVar14->UserIdPtr).SharedReferenceCount.ReferenceController,
             pTVar3 != (TReferenceControllerBase<1> *)0x0)) &&
            (0 < (int)pTVar3->SharedReferenceCount)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!InObject || !InObject->DoesSharedInstanceExist()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x7a5,L"Trying to share an already-shared object"), bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
      }
      TSharedRef<FUniqueNetIdNull_const_,1>::TSharedRef<FUniqueNetIdNull_const_,1><FUniqueNetIdNull>
                (&local_128,(TRawPtrProxy<FUniqueNetIdNull> *)&local_190.Value);
      (pFVar13->UserIdPtr).Object = (FUniqueNetId *)local_128.Object;
      (pFVar13->UserIdPtr).SharedReferenceCount.ReferenceController =
           local_128.SharedReferenceCount.ReferenceController;
      if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_128.SharedReferenceCount.ReferenceController);
      *(undefined8 *)&pFVar13->AdditionalAuthData = 0;
      *(undefined8 *)&(pFVar13->AdditionalAuthData).field_0x8 = 0;
      *(undefined8 *)&(pFVar13->AdditionalAuthData).field_0x20 = 0;
      *(undefined4 *)&(pFVar13->AdditionalAuthData).field_0x28 = 0;
      *(undefined4 *)&(pFVar13->AdditionalAuthData).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar13->AdditionalAuthData).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar13->AdditionalAuthData).field_0x34 = 0;
      *(undefined8 *)&(pFVar13->AdditionalAuthData).field_0x40 = 0;
      *(undefined4 *)&(pFVar13->AdditionalAuthData).field_0x48 = 0;
      *(undefined8 *)&pFVar13->UserAttributes = 0;
      *(undefined8 *)&(pFVar13->UserAttributes).field_0x8 = 0;
      *(undefined8 *)&(pFVar13->UserAttributes).field_0x20 = 0;
      *(undefined4 *)&(pFVar13->UserAttributes).field_0x28 = 0;
      *(undefined4 *)&(pFVar13->UserAttributes).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar13->UserAttributes).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar13->UserAttributes).field_0x34 = 0;
      *(undefined8 *)&(pFVar13->UserAttributes).field_0x40 = 0;
      *(undefined4 *)&(pFVar13->UserAttributes).field_0x48 = 0;
      local_1a8.Object = pFVar13;
    }
    TSharedPtr<FUserOnlineAccountNull,1>::operator=<FUserOnlineAccountNull>(&local_208,&local_1a8);
    pFVar13 = local_208.Object;
    if ((local_208.Object == (FUserOnlineAccountNull *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    ::FString::FString(&local_108,L"id");
    local_118 = &local_108;
    local_110 = local_1a0;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&pFVar13->UserAttributes,&local_190,(bool *)&local_118);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if ((pFVar13 == (FUserOnlineAccountNull *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    local_178 = local_208.Object;
    pTStack_170 = local_208.SharedReferenceCount.ReferenceController;
    if (local_208.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_208.Object == (FUserOnlineAccountNull *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    local_f8 = &local_158;
    local_f0 = &local_178;
    TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>,TUniqueNetIdMapKeyFuncs<TSharedRef<FUserOnlineAccountNull,1>_>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TSharedRef<FUniqueNetId_const_,1>_const_&,TSharedRef<FUserOnlineAccountNull,1>_&&>_>
              ((TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>,TUniqueNetIdMapKeyFuncs<TSharedRef<FUserOnlineAccountNull,1>_>,FDefaultSetAllocator>
                *)&this->UserAccounts,
               (TPairInitializer<TSharedRef<FUniqueNetId_const_,1>_const_&,TSharedRef<FUserOnlineAccountNull,1>_&&>
                *)local_1b8,(bool *)&local_f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_170)
    ;
    if ((pFVar13 == (FUserOnlineAccountNull *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    puVar17 = (undefined8 *)(**(code **)(pFVar13->_padding_ + 8))(pFVar13,local_98);
    local_168 = *puVar17;
    local_160 = (TReferenceControllerBase<1> *)puVar17[1];
    if (local_160 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_160->SharedReferenceCount = (atomic<int>)((int)local_160->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e8 = local_res10;
    local_e0 = &local_168;
    TSet<TTuple<int,TSharedPtr<FUniqueNetId_const_,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUniqueNetId_const_,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,TSharedPtr<FUniqueNetId_const_,1>_&&>_>
              ((TSet<TTuple<int,TSharedPtr<FUniqueNetId_const_,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUniqueNetId_const_,1>,0>,FDefaultSetAllocator>
                *)&this->UserIds,
               (TPairInitializer<int_const_&,TSharedPtr<FUniqueNetId_const_,1>_&&> *)(local_1b8 + 8)
               ,(bool *)&local_e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_160);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_150);
    if ((FScriptContainerElement *)local_1a0._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1a0._0_8_);
    }
  }
  else {
    pTVar15 = TSharedPtr<FUniqueNetId_const_,1>::ToSharedRef(this_00,&local_48);
    pTVar3 = (pTVar15->SharedReferenceCount).ReferenceController;
    local_d8.Object = pTVar15->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_d8.SharedReferenceCount.ReferenceController = pTVar3;
    uVar12 = (**(code **)(*(longlong *)local_d8.Object + 0x40))();
    iVar11 = TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>,TUniqueNetIdMapKeyFuncs<TSharedRef<FUserOnlineAccountNull,1>_>,FDefaultSetAllocator>
             ::FindIndexByHash<TSharedRef<FUniqueNetId_const_,1>_>
                       ((TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>,TUniqueNetIdMapKeyFuncs<TSharedRef<FUserOnlineAccountNull,1>_>,FDefaultSetAllocator>
                         *)&this->UserAccounts,uVar12,&local_d8);
    if (iVar11 == -1) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      pFVar13 = pFVar18;
LAB_14ed28854:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
    }
    else {
      pFVar13 = (FUserOnlineAccountNull *)
                (*(longlong *)&this->UserAccounts + (longlong)iVar11 * 0x28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (pFVar13 == (FUserOnlineAccountNull *)0x0) goto LAB_14ed28854;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar15->SharedReferenceCount).ReferenceController);
    local_140.ReferenceController = *(TReferenceControllerBase<1> **)&pFVar13->AdditionalAuthData;
    local_208.Object =
         (FUserOnlineAccountNull *)(pFVar13->UserIdPtr).SharedReferenceCount.ReferenceController;
    if (local_140.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_140.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_140.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_148 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_208.SharedReferenceCount,&local_140);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_140.ReferenceController);
    pFVar13 = local_208.Object;
  }
  ::FString::FString(&local_1e8,L"0");
  if ((pFVar13 == (FUserOnlineAccountNull *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  pcVar6 = *(code **)(pFVar13->_padding_ + 0x20);
  ::FString::FString(&local_c8,L"null:logincount");
  (*pcVar6)(pFVar13,&local_c8,&local_1e8);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  _Str.Data = (FScriptContainerElement *)L"";
  if (local_1e8.Data.ArrayNum != 0) {
    _Str.Data = local_1e8.Data.AllocatorInstance.Data;
  }
  _wtoi((wchar_t *)_Str.Data);
  ::FString::PrintfImpl(&local_1d8,L"%d");
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  local_1e8.Data.AllocatorInstance.Data = local_1d8.Data.AllocatorInstance.Data;
  local_1e8.Data.ArrayNum = local_1d8.Data.ArrayNum;
  local_1e8.Data.ArrayMax = local_1d8.Data.ArrayMax;
  local_1d8.Data.ArrayNum = 0;
  local_1d8.Data.ArrayMax = 0;
  local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((pFVar13 == (FUserOnlineAccountNull *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  pcVar6 = *(code **)(pFVar13->_padding_ + 0x48);
  ::FString::FString(&local_b8,L"null:logincount");
  (*pcVar6)(pFVar13,&local_b8,&local_1e8);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
LAB_14ed28a54:
  if (local_1f8.Data.ArrayNum < 2) {
    if ((pFVar13 == (FUserOnlineAccountNull *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar10 = (*pcVar6)();
      return (bool)uVar10;
    }
    puVar17 = (undefined8 *)(**(code **)(pFVar13->_padding_ + 8))(pFVar13,local_88);
    iVar11 = local_res10[0];
    uVar5 = *puVar17;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_60);
    if (*(int *)&param_3->field_0x10 != 0) {
      pFVar18 = *(FUserOnlineAccountNull **)&param_3->field_0x8;
    }
    (**(code **)(pFVar18->_padding_ + 0x60))(pFVar18,iVar11,1,uVar5,&local_1f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    bVar9 = true;
  }
  else {
    if (2 < (byte)LogOnlineIdentity._0_1_) {
      ::FString::PrintfImpl(&local_138,L"Login request failed. %s");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineIdentity);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
    pTVar16 = FUniqueNetIdNull::EmptyId();
    iVar11 = local_res10[0];
    pFVar4 = pTVar16->Object;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_3,&local_78);
    if (*(int *)&param_3->field_0x10 != 0) {
      pFVar18 = *(FUserOnlineAccountNull **)&param_3->field_0x8;
    }
    (**(code **)(pFVar18->_padding_ + 0x60))(pFVar18,iVar11,0,pFVar4,&local_1f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    bVar9 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_208.SharedReferenceCount.ReferenceController);
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  return bVar9;
}

// Logout @ 14ed28bf0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FOnlineIdentityNull::Logout(FOnlineIdentityNull *this,int param_1)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong *plVar6;
  int local_res8 [2];
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  FString local_38;
  TSharedRef<FUniqueNetId_const_,1> local_28;
  
  (**(code **)(this->_padding_ + 0x110))(this,&local_48,param_1);
  if (local_48 == (longlong *)0x0) {
    if (2 < (byte)LogOnlineIdentity._0_1_) {
      ::FString::PrintfImpl(&local_38,L"No logged in user found for LocalUserNum=%d.");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineIdentity);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(this->_padding_ + 0xd0))(this,param_1,0);
    bVar3 = false;
  }
  else {
    plVar6 = local_48;
    if ((local_48 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), plVar6 = local_48, bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    pTVar2 = local_40;
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((plVar6 == (longlong *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    local_28.SharedReferenceCount.ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (*(int *)&(this->UserAccounts).field_0x8 != *(int *)&(this->UserAccounts).field_0x34) {
      uVar5 = (**(code **)(*plVar6 + 0x40))(plVar6);
      TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>,TUniqueNetIdMapKeyFuncs<TSharedRef<FUserOnlineAccountNull,1>_>,FDefaultSetAllocator>
      ::RemoveImpl<TSharedRef<FUniqueNetId_const_,1>_>
                ((TSet<TTuple<TSharedRef<FUniqueNetId_const_,1>,TSharedRef<FUserOnlineAccountNull,1>_>,TUniqueNetIdMapKeyFuncs<TSharedRef<FUserOnlineAccountNull,1>_>,FDefaultSetAllocator>
                  *)&this->UserAccounts,uVar5,&local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    local_res8[0] = param_1;
    if (*(int *)&(this->UserIds).field_0x8 != *(int *)&(this->UserIds).field_0x34) {
      TSet<TTuple<int,TSharedPtr<FUniqueNetId_const_,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUniqueNetId_const_,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<int>((TSet<TTuple<int,TSharedPtr<FUniqueNetId_const_,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUniqueNetId_const_,1>,0>,FDefaultSetAllocator>
                         *)&this->UserIds,param_1,local_res8);
    }
    (**(code **)(this->_padding_ + 0xd0))(this,param_1,1);
    bVar3 = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return bVar3;
}

// RevokeAuthToken @ 14ed2e6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOnlineIdentityNull::RevokeAuthToken
          (FOnlineIdentityNull *this,FUniqueNetId *param_1,
          TDelegate<void___cdecl(FUniqueNetId_const_&,FOnlineError_const_&),FDefaultDelegateUserPolicy>
          *param_2)

{
  FOnlineSubsystemNull *this_00;
  ForElementType<TAlignedBytes<16,16>_> FVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  FMRSWRecursiveAccessDetector local_30;
  TReferenceControllerBase<1> *local_28;
  TDelegate<void___cdecl(FUniqueNetId_const_&,FOnlineError_const_&),FDefaultDelegateUserPolicy>
  local_20;
  
  if (3 < (byte)LogOnlineIdentity._0_1_) {
    ::FString::PrintfImpl
              ((FString *)local_68,L"FOnlineIdentityNull::RevokeAuthToken not implemented");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineIdentity);
    if ((atomic<unsigned___int64>)local_68 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_68);
    }
  }
  TSharedFromThis<FUniqueNetId,1>::AsShared
            ((TSharedFromThis<FUniqueNetId,1> *)&param_1->field_0x8,
             (TSharedRef<FUniqueNetId_const_,1> *)local_68);
  FVar1 = local_60.DelegateAllocator;
  this_00 = this->NullSubsystem;
  local_30.State = (atomic<unsigned___int64>)local_68;
  local_28 = (TReferenceControllerBase<1> *)local_60.DelegateAllocator;
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)local_60.DelegateAllocator + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)local_60.DelegateAllocator + 8) + 1);
    UNLOCK();
  }
  TDelegate<void___cdecl(FUniqueNetId_const_&,FOnlineError_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FUniqueNetId_const_&,FOnlineError_const_&),FDefaultDelegateUserPolicy>
            (&local_20,param_2);
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar2 = UE::Core::Private::DelegateAllocate(0x40,&local_60);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FOnlineIdentityNull::RevokeAuthToken'::`2'::<lambda_1>_>
               ::_vftable_;
    *(atomic<unsigned___int64> *)(puVar2 + 3) = local_30.State;
    puVar2[4] = local_28;
    if (local_28 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_28->SharedReferenceCount = (atomic<int>)((int)local_28->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegate<void___cdecl(FUniqueNetId_const_&,FOnlineError_const_&),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FUniqueNetId_const_&,FOnlineError_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(FUniqueNetId_const_&,FOnlineError_const_&),FDefaultDelegateUserPolicy>
                *)(puVar2 + 5),&local_20);
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
    (**(code **)*(longlong *)local_60.DelegateAllocator)();
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FVar1);
  return;
}

