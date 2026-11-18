// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 116

// StaticClass @ 14b449e70

UClass * __cdecl UDS_ChattingManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ChattingManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ChattingManager",
               &Z_Registration_Info_UClass_UDS_ChattingManager.InnerSingleton,
               StaticRegisterNativesUDS_ChattingManager,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ChattingManager>,
               InternalVTableHelperCtorCaller<UDS_ChattingManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ChattingManager.InnerSingleton;
}

// UDS_ChattingManager @ 14b44e3b0

UDS_ChattingManager * __thiscall
UDS_ChattingManager::UDS_ChattingManager(UDS_ChattingManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->ChattingCloseTime = 5.0;
  this->_padding_ = (longlong)&___7UDS_ChattingManager__6B_;
  *(undefined8 *)&this->ChattingCommonDataMap = 0;
  *(undefined8 *)&(this->ChattingCommonDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->ChattingCommonDataMap).field_0x20 = 0;
  this->MessageMaxCount = 200;
  *(undefined4 *)&(this->ChattingCommonDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->ChattingCommonDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChattingCommonDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->ChattingCommonDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChattingCommonDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->ChattingCommonDataMap).field_0x48 = 0;
  (this->ChattingTabDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChattingTabDatas).ArrayNum = 0;
  (this->ChattingTabDatas).ArrayMax = 0;
  *(undefined8 *)&this->ChattingTabDataMap = 0;
  *(undefined8 *)&(this->ChattingTabDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->ChattingTabDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->ChattingTabDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->ChattingTabDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChattingTabDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->ChattingTabDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChattingTabDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->ChattingTabDataMap).field_0x48 = 0;
  *(undefined8 *)&this->ChattingExtraCommandMap = 0;
  *(undefined8 *)&(this->ChattingExtraCommandMap).field_0x8 = 0;
  *(undefined8 *)&(this->ChattingExtraCommandMap).field_0x20 = 0;
  *(undefined4 *)&(this->ChattingExtraCommandMap).field_0x28 = 0;
  *(undefined4 *)&(this->ChattingExtraCommandMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChattingExtraCommandMap).field_0x34 = 0;
  *(undefined4 *)&(this->ChattingExtraCommandMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChattingExtraCommandMap).field_0x40 = 0;
  *(undefined4 *)&(this->ChattingExtraCommandMap).field_0x48 = 0;
  (this->ChattingDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChattingDatas).ArrayNum = 0;
  (this->ChattingDatas).ArrayMax = 0;
  (this->ChatStateData).ChattingTypeFlagAll = 0;
  (this->ChatStateData).ChattingTypeFlag = 0;
  (this->ChatUserCache).Object = (FDS_ChatUserCache *)0x0;
  (this->ChatUserCache).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChatRoomManager).Object = (FDS_ChatRoomManager *)0x0;
  (this->ChatRoomManager).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChatCustomTabManager).Object = (FDS_ChatCustomTabManager *)0x0;
  (this->ChatCustomTabManager).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChatBookmarkManager).Object = (FDS_ChatBookmarkManager *)0x0;
  (this->ChatBookmarkManager).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChatOption).field0_0x0.DebugPtr = (UDS_M_ChatOption *)0x0;
  (this->ChatStateData).InputChattingType = Zone;
  (this->ChatStateData).ChattingTabType = Total;
  (this->ChatStateData).SubTabIndex = -1;
  return this;
}

// UDS_ChattingManager @ 14b44e520

UDS_ChattingManager * __thiscall
UDS_ChattingManager::UDS_ChattingManager(UDS_ChattingManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->ChattingCloseTime = 5.0;
  this->_padding_ = (longlong)&___7UDS_ChattingManager__6B_;
  *(undefined8 *)&this->ChattingCommonDataMap = 0;
  *(undefined8 *)&(this->ChattingCommonDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->ChattingCommonDataMap).field_0x20 = 0;
  this->MessageMaxCount = 200;
  *(undefined4 *)&(this->ChattingCommonDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->ChattingCommonDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChattingCommonDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->ChattingCommonDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChattingCommonDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->ChattingCommonDataMap).field_0x48 = 0;
  (this->ChattingTabDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChattingTabDatas).ArrayNum = 0;
  (this->ChattingTabDatas).ArrayMax = 0;
  *(undefined8 *)&this->ChattingTabDataMap = 0;
  *(undefined8 *)&(this->ChattingTabDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->ChattingTabDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->ChattingTabDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->ChattingTabDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChattingTabDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->ChattingTabDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChattingTabDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->ChattingTabDataMap).field_0x48 = 0;
  *(undefined8 *)&this->ChattingExtraCommandMap = 0;
  *(undefined8 *)&(this->ChattingExtraCommandMap).field_0x8 = 0;
  *(undefined8 *)&(this->ChattingExtraCommandMap).field_0x20 = 0;
  *(undefined4 *)&(this->ChattingExtraCommandMap).field_0x28 = 0;
  *(undefined4 *)&(this->ChattingExtraCommandMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChattingExtraCommandMap).field_0x34 = 0;
  *(undefined4 *)&(this->ChattingExtraCommandMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChattingExtraCommandMap).field_0x40 = 0;
  *(undefined4 *)&(this->ChattingExtraCommandMap).field_0x48 = 0;
  (this->ChattingDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChattingDatas).ArrayNum = 0;
  (this->ChattingDatas).ArrayMax = 0;
  (this->ChatStateData).ChattingTypeFlagAll = 0;
  (this->ChatStateData).ChattingTypeFlag = 0;
  (this->ChatUserCache).Object = (FDS_ChatUserCache *)0x0;
  (this->ChatUserCache).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChatRoomManager).Object = (FDS_ChatRoomManager *)0x0;
  (this->ChatRoomManager).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChatCustomTabManager).Object = (FDS_ChatCustomTabManager *)0x0;
  (this->ChatCustomTabManager).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChatBookmarkManager).Object = (FDS_ChatBookmarkManager *)0x0;
  (this->ChatBookmarkManager).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChatOption).field0_0x0.DebugPtr = (UDS_M_ChatOption *)0x0;
  (this->ChatStateData).InputChattingType = Zone;
  (this->ChatStateData).ChattingTabType = Total;
  (this->ChatStateData).SubTabIndex = -1;
  return this;
}

// ~UDS_ChattingManager @ 14b450970

void __thiscall UDS_ChattingManager::~UDS_ChattingManager(UDS_ChattingManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_ChattingManager__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChatBookmarkManager).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChatCustomTabManager).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChatRoomManager).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChatUserCache).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->ChattingDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ChattingExtraCommandMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ChattingExtraCommandMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,enum_EDS_CommandType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,enum_EDS_CommandType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ChattingExtraCommandMap);
  *(undefined4 *)&(this->ChattingTabDataMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ChattingTabDataMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ChattingTabType,TWeakPtr<FDS_ChattingTabData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ChattingTabType,TWeakPtr<FDS_ChattingTabData,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ChattingTabDataMap);
  DestructItems<TSharedPtr<FDS_ChattingTabData,1>,int>
            ((TSharedPtr<FDS_ChattingTabData,1> *)(this->ChattingTabDatas).AllocatorInstance.Data,
             (this->ChattingTabDatas).ArrayNum);
  pFVar1 = (this->ChattingTabDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ChattingCommonDataMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ChattingCommonDataMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_ChattingType,FDS_ChattingCommonData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_ChattingType,FDS_ChattingCommonData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->ChattingCommonDataMap);
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b454530

UClass * __cdecl UDS_ChattingManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ChattingManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ChattingManager",
               &Z_Registration_Info_UClass_UDS_ChattingManager.InnerSingleton,
               StaticRegisterNativesUDS_ChattingManager,0x1a8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ChattingManager>,
               InternalVTableHelperCtorCaller<UDS_ChattingManager>,local_res8,
               UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ChattingManager.InnerSingleton;
}

// StaticRegisterNativesUDS_ChattingManager @ 14b455190

void __cdecl UDS_ChattingManager::StaticRegisterNativesUDS_ChattingManager(void)

{
  return;
}

// AddOrUpdateChatUserInfo @ 14b9e0470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ChatUserInfo,1> * __thiscall
UDS_ChattingManager::AddOrUpdateChatUserInfo
          (UDS_ChattingManager *this,TSharedPtr<FDS_ChatUserInfo,1> *__return_storage_ptr__,
          FDS_ChatUserInfo *param_1)

{
  FDS_ChatUserCache *this_00;
  longlong lVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  TSharedPtr<FDS_ChatUserInfo,1> *pTVar7;
  UDS_ChatEvent *pUVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this_01;
  FSharedReferencer<1> FVar12;
  undefined1 *puVar13;
  undefined1 auStackY_3b8 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_388;
  ForAnyElementType local_380;
  int local_378;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_370;
  FDelegateAllocation local_368;
  undefined1 local_358 [8];
  ForAnyElementType local_350;
  int local_348;
  TSharedPtr<FDS_ChatUserInfo,1> local_340;
  UDS_ChattingManager *local_330;
  FDestructionSentinel local_328;
  FDestructionSentinel local_310;
  FDestructionSentinel local_2f8;
  FDestructionSentinel local_2e0;
  FDestructionSentinel local_2c8;
  FDelegateAllocation *local_2b0;
  FReadAccessScope local_2a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  this_00 = (this->ChatUserCache).Object;
  if (this_00 == (FDS_ChatUserCache *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_ChattingManager::AddOrUpdateChatUserInfo",0x2c,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_288.Ptr,0x5f1,L"ChatUserCache.IsValid() == false");
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
    __return_storage_ptr__->Object = (FDS_ChatUserInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  lVar1 = param_1->PlayerUID;
  if (lVar1 < 1) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_ChattingManager::AddOrUpdateChatUserInfo",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_168.Ptr,0x5f8,L"playerUID <= 0ll");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    __return_storage_ptr__->Object = (FDS_ChatUserInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  FDS_ChatUserCache::AddOrUpdate(this_00,&local_340,param_1);
  if (local_340.Object == (FDS_ChatUserInfo *)0x0) {
    __return_storage_ptr__->Object = (FDS_ChatUserInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FVar12.ReferenceController = local_340.SharedReferenceCount.ReferenceController;
    goto LAB_14b9e0987;
  }
  if ((local_340.Object == (FDS_ChatUserInfo *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar7 = (TSharedPtr<FDS_ChatUserInfo,1> *)(*pcVar2)();
    return pTVar7;
  }
  bVar4 = FDS_ChatUserInfo::IsValidNickname(local_340.Object);
  if (bVar4) {
    pUVar8 = UDS_ChatEvent::GetEvent();
    if ((pUVar8 != (UDS_ChatEvent *)0x0) &&
       (*(int *)&(pUVar8->OnRefreshUserInfo).Subscriptions.field_0x8 !=
        *(int *)&(pUVar8->OnRefreshUserInfo).Subscriptions.field_0x34)) {
      puVar13 = *(undefined1 **)&(pUVar8->OnRefreshUserInfo).Subscriptions.field_0x40;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = &(pUVar8->OnRefreshUserInfo).Subscriptions.field_0x38;
      }
      iVar5 = *(int *)(puVar13 +
                      ((ulonglong)
                       (*(int *)&(pUVar8->OnRefreshUserInfo).Subscriptions.field_0x48 - 1) &
                      (lVar1 >> 0x20) * 0x17 + lVar1) * 4);
      if (iVar5 != -1) {
        do {
          plVar9 = (longlong *)
                   ((longlong)iVar5 * 0x50 + *(longlong *)&(pUVar8->OnRefreshUserInfo).Subscriptions
                   );
          if (*plVar9 == lVar1) {
            this_01 = (TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
                      (plVar9 + 1);
            if (plVar9 == (longlong *)0x0) {
              this_01 = (TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)0x0;
            }
            if (this_01 !=
                (TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)0x0) {
              TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast
                        (this_01);
            }
            break;
          }
          iVar5 = (int)plVar9[9];
        } while (iVar5 != -1);
      }
    }
  }
  else {
    local_370.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_368.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_368.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_370,(FWriteAccessScope *)&local_2c8);
    local_2b0 = &local_368;
    puVar10 = UE::Core::Private::DelegateAllocate(0x28,&local_368);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy___J__6B_;
      puVar10[1] = lVar1;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ChattingManager____A6AXXZUFDefaultDelegateUserPolicy___J__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar10[3] = 0;
      local_330 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_330);
      puVar10[4] = OnSearchPlayerByPlayerUID;
    }
    if (local_2c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c8.Accessor,&local_2c8);
    }
    local_358 = (undefined1  [8])0x0;
    local_350.Data = (FScriptContainerElement *)0x0;
    local_348 = 0;
    local_388.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_380.Data = (FScriptContainerElement *)0x0;
    local_378 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_370,&local_2a8);
    if ((local_368.DelegateSize != 0) &&
       (local_368.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (**(code **)(*(longlong *)local_368.DelegateAllocator + 0x50))
                (local_368.DelegateAllocator,&local_388);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_2a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_388,(FWriteAccessScope *)&local_328);
    iVar5 = local_378;
    FVar3.Data = local_380.Data;
    local_380.Data = (FScriptContainerElement *)0x0;
    local_378 = 0;
    if (local_328.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_328.Accessor,&local_328);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_358,
               (FWriteAccessScope *)&local_310);
    if (local_348 == 0) {
LAB_14b9e0868:
      if (local_350.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_350.Data);
      }
    }
    else if (local_350.Data != (FScriptContainerElement *)0x0) {
      (*(code *)**(undefined8 **)local_350.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_350,0,0,0x10);
      local_348 = 0;
      goto LAB_14b9e0868;
    }
    local_350.Data = FVar3.Data;
    local_348 = iVar5;
    if (local_310.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_310.Accessor,&local_310);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_388,(FWriteAccessScope *)&local_2f8);
    if ((local_378 != 0) && (local_380.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_380.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_380,0,0,0x10);
      local_378 = 0;
    }
    if (local_2f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2f8.Accessor,&local_2f8);
    }
    if (local_380.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_380.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_388.AccessDetector);
    FDS_PlayerRepo::RequestSearchPlayersByPlayerUID
              (lVar1,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_358);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_370,(FWriteAccessScope *)&local_2e0);
    if ((local_368.DelegateSize != 0) &&
       (local_368.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_368.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_368,0,0,0x10);
      local_368.DelegateSize = 0;
    }
    if (local_2e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e0.Accessor,&local_2e0);
    }
    if (local_368.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_368.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_370.AccessDetector);
  }
  FVar12.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_340.SharedReferenceCount.ReferenceController;
  __return_storage_ptr__->Object = local_340.Object;
LAB_14b9e0987:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  return __return_storage_ptr__;
}

// AddSystemMessage @ 14b9e0a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_ChattingManager::AddSystemMessage(EDS_ChattingType param_1,FString *param_2)

{
  bool bVar1;
  UDS_ChattingManager *this;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UDS_ChattingData *this_00;
  UDS_ChattingDataSet *this_01;
  UDS_ChatEvent *pUVar4;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_168;
  UDS_ChattingData *local_160;
  FWeakObjectPtr local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this = GetInst();
  if (this == (UDS_ChattingManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ChattingManager::AddSystemMessage",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0xa29,L"chattingManager == nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else if ((char)this->_padding_ != '\x01') {
    TDS_DataSetGetter<UDS_ChattingDataSet>::Get((ulong64)local_158);
    bVar1 = FWeakObjectPtr::IsValid(local_158);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(local_158);
      this_00 = NewObject<UDS_ChattingData>(pUVar3);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UDS_ChattingData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      UDS_ChattingData::SetChattingData(this_00,param_1,param_2);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (this_00 != (UDS_ChattingData *)0x0) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UDS_ChattingData *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
      }
      local_168.ObjectIndex = 0;
      local_168.ObjectSerialNumber = 0;
      local_160 = this_00;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UDS_ChattingData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_160);
      bVar1 = IsShowChattingData(this,(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>)local_168);
      if (bVar1) {
        this_00->bIsRead = true;
      }
      this_01 = (UDS_ChattingDataSet *)FWeakObjectPtr::Get(local_158);
      local_160 = this_00;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UDS_ChattingData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      UDS_ChattingDataSet::AddChattingData(this_01,(TObjectPtr<UDS_ChattingData>)&local_160);
      pUVar4 = UDS_ChatEvent::GetEvent();
      if (pUVar4 != (UDS_ChatEvent *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (this_00 != (UDS_ChattingData *)0x0) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_00 != (UDS_ChattingData *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_00);
          }
        }
        local_168.ObjectIndex = 0;
        local_168.ObjectSerialNumber = 0;
        local_160 = this_00;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_00 != (UDS_ChattingData *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_160);
        FDS_EventDelegate<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_>::Broadcast
                  (&pUVar4->OnAddChatMessage,
                   (TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>)local_168);
        bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &pUVar4->OnUpdateMarkMessageAsRead);
        if (bVar1) {
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    (&(pUVar4->OnUpdateMarkMessageAsRead).Delegate);
        }
      }
    }
  }
  return;
}

// Destroyed @ 14b9e8020

void __thiscall UDS_ChattingManager::Destroyed(UDS_ChattingManager *this)

{
  int *piVar1;
  TSharedPtr<FDS_ChatUserCache,1> *pTVar2;
  TSharedPtr<FDS_ChatRoomManager,1> *pTVar3;
  TSharedPtr<FDS_ChatCustomTabManager,1> *pTVar4;
  TSharedPtr<FDS_ChatBookmarkManager,1> *pTVar5;
  FDS_ChatCustomTabManager *pFVar6;
  FDS_ChatBookmarkManager *pFVar7;
  UDS_M_ChatOption *this_00;
  UDS_PartyEvent *pUVar8;
  UDS_DungeonEvent *pUVar9;
  undefined8 local_58;
  FSharedReferencer<1> FStack_50;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar2 = &this->ChatUserCache;
  if (pTVar2->Object != (FDS_ChatUserCache *)0x0) {
    FDS_ChatUserCache::Clear(pTVar2->Object);
    local_58 = 0;
    FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar2 != (TSharedPtr<FDS_ChatUserCache,1> *)&local_58) {
      pTVar2->Object = (FDS_ChatUserCache *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ChatUserCache).SharedReferenceCount,&FStack_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_50.ReferenceController);
  }
  pTVar3 = &this->ChatRoomManager;
  if (pTVar3->Object != (FDS_ChatRoomManager *)0x0) {
    FDS_ChatRoomManager::Clear(pTVar3->Object);
    local_48 = 0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TSharedPtr<FDS_ChatRoomManager,1> *)&local_48) {
      pTVar3->Object = (FDS_ChatRoomManager *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ChatRoomManager).SharedReferenceCount,&FStack_40);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_40.ReferenceController);
  }
  pTVar4 = &this->ChatCustomTabManager;
  pFVar6 = pTVar4->Object;
  if (pFVar6 != (FDS_ChatCustomTabManager *)0x0) {
    DestructItems<TSharedPtr<FDS_ChatCustomData,1>,int>
              ((TSharedPtr<FDS_ChatCustomData,1> *)(pFVar6->CustomDatas).AllocatorInstance.Data,
               (pFVar6->CustomDatas).ArrayNum);
    piVar1 = &(pFVar6->CustomDatas).ArrayMax;
    (pFVar6->CustomDatas).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(pFVar6->CustomDatas).AllocatorInstance,0,piVar1);
    }
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&pFVar6->CustomFilter != (TSharedPtr<FDS_ChatCustomFilter,1> *)&local_38) {
      (pFVar6->CustomFilter).Object = (FDS_ChatCustomFilter *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar6->CustomFilter).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TSharedPtr<FDS_ChatCustomTabManager,1> *)&local_28) {
      pTVar4->Object = (FDS_ChatCustomTabManager *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ChatCustomTabManager).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
  }
  pTVar5 = &this->ChatBookmarkManager;
  pFVar7 = pTVar5->Object;
  if (pFVar7 != (FDS_ChatBookmarkManager *)0x0) {
    DestructItems<TSharedPtr<FDS_ChatBookmarkData,1>,int>
              ((TSharedPtr<FDS_ChatBookmarkData,1> *)(pFVar7->BookmarkDatas).AllocatorInstance.Data,
               (pFVar7->BookmarkDatas).ArrayNum);
    piVar1 = &(pFVar7->BookmarkDatas).ArrayMax;
    (pFVar7->BookmarkDatas).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(pFVar7->BookmarkDatas).AllocatorInstance,0,piVar1);
    }
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TSharedPtr<FDS_ChatBookmarkManager,1> *)&local_18) {
      pTVar5->Object = (FDS_ChatBookmarkManager *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ChatBookmarkManager).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  this_00 = (this->ChatOption).field0_0x0.DebugPtr;
  if (this_00 != (UDS_M_ChatOption *)0x0) {
    UDS_M_ChatOption::UnbindGameOption(this_00);
    (this->ChatOption).field0_0x0.DebugPtr = (UDS_M_ChatOption *)0x0;
  }
  pUVar8 = UDS_PartyEvent::GetEvent();
  if (pUVar8 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar8->OnLeftParty,this);
  }
  pUVar9 = UDS_DungeonEvent::GetEvent();
  if (pUVar9 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar9->OnLeftRaidParty,this);
  }
  return;
}

// GetBookmarkCount @ 14b9ecd50

int __thiscall UDS_ChattingManager::GetBookmarkCount(UDS_ChattingManager *this)

{
  int iVar1;
  FDS_ChatBookmarkManager *pFVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar2 = (this->ChatBookmarkManager).Object;
  if (pFVar2 != (FDS_ChatBookmarkManager *)0x0) {
    iVar5 = 0;
    pFVar6 = (pFVar2->BookmarkDatas).AllocatorInstance.Data;
    iVar1 = (pFVar2->BookmarkDatas).ArrayNum;
    pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pFVar2->BookmarkDatas).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<FDS_ChatBookmarkData,1>_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar7) break;
      piVar3 = *(int **)pFVar6;
      if ((((piVar3 != (int *)0x0) && ((char)piVar3[1] != '\0')) && (-1 < *piVar3)) &&
         (-1 < piVar3[2])) {
        iVar4 = DS_CommonDataHelper::ChattingMaxFavoriteCount();
        if (*piVar3 < iVar4) {
          iVar5 = iVar5 + 1;
        }
      }
      pFVar6 = pFVar6 + 0x10;
    }
    return iVar5;
  }
  return 0;
}

// GetBookmarkData @ 14b9ed020

TSharedPtr<FDS_ChatBookmarkData,1> * __thiscall
UDS_ChattingManager::GetBookmarkData
          (UDS_ChattingManager *this,TSharedPtr<FDS_ChatBookmarkData,1> *__return_storage_ptr__,
          int param_1)

{
  FDS_ChatBookmarkManager *this_00;
  
  this_00 = (this->ChatBookmarkManager).Object;
  if (this_00 != (FDS_ChatBookmarkManager *)0x0) {
    FDS_ChatBookmarkManager::GetBookmarkData(this_00,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FDS_ChatBookmarkData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetBookmarkData @ 14b9ed060

TSharedPtr<FDS_ChatBookmarkData,1> * __thiscall
UDS_ChattingManager::GetBookmarkData
          (UDS_ChattingManager *this,TSharedPtr<FDS_ChatBookmarkData,1> *__return_storage_ptr__,
          EDS_ChattingTabType param_1,int param_2)

{
  FDS_ChatBookmarkManager *this_00;
  
  this_00 = (this->ChatBookmarkManager).Object;
  if (this_00 != (FDS_ChatBookmarkManager *)0x0) {
    FDS_ChatBookmarkManager::GetBookmarkData(this_00,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FDS_ChatBookmarkData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChatConversation @ 14b9ed240

TSharedPtr<FDS_ChatConversation,1> * __thiscall
UDS_ChattingManager::GetChatConversation
          (UDS_ChattingManager *this,TSharedPtr<FDS_ChatConversation,1> *__return_storage_ptr__,
          FString *param_1)

{
  longlong lVar1;
  FDS_ChatRoomManager *this_00;
  TReferenceControllerBase<1> *pTVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  
  this_00 = (this->ChatRoomManager).Object;
  if (this_00 == (FDS_ChatRoomManager *)0x0) {
    __return_storage_ptr__->Object = (FDS_ChatConversation *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar4 = (param_1->Data).ArrayNum;
    if (iVar4 == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar5 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar7);
    iVar4 = TSet<TTuple<FString,TSharedPtr<FDS_ChatConversation,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TSharedPtr<FDS_ChatConversation,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>,FDefaultSetAllocator>
                        *)this_00,uVar3,param_1);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this_00->ChatConversationMap + (longlong)iVar4 * 0x28;
      puVar6 = (undefined8 *)(lVar1 + 0x10);
      if (lVar1 == 0) {
        puVar6 = (undefined8 *)0x0;
      }
      if (puVar6 != (undefined8 *)0x0) {
        __return_storage_ptr__->Object = (FDS_ChatConversation *)*puVar6;
        pTVar2 = (TReferenceControllerBase<1> *)puVar6[1];
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
        if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
          return __return_storage_ptr__;
        }
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        return __return_storage_ptr__;
      }
    }
    __return_storage_ptr__->Object = (FDS_ChatConversation *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  return __return_storage_ptr__;
}

// GetChatConversationByGroupID @ 14b9ed310

TSharedPtr<FDS_ChatConversation,1> * __thiscall
UDS_ChattingManager::GetChatConversationByGroupID
          (UDS_ChattingManager *this,TSharedPtr<FDS_ChatConversation,1> *__return_storage_ptr__,
          FString *param_1)

{
  FDS_ChatRoomManager *this_00;
  
  this_00 = (this->ChatRoomManager).Object;
  if (this_00 == (FDS_ChatRoomManager *)0x0) {
    __return_storage_ptr__->Object = (FDS_ChatConversation *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  FDS_ChatRoomManager::FindChatConversationByGroupID(this_00,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetChatCustomFilter @ 14b9ed350

TSharedPtr<FDS_ChatCustomFilter,1> * __thiscall
UDS_ChattingManager::GetChatCustomFilter
          (UDS_ChattingManager *this,TSharedPtr<FDS_ChatCustomFilter,1> *__return_storage_ptr__)

{
  FDS_ChatCustomTabManager *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = (this->ChatCustomTabManager).Object;
  if (pFVar1 == (FDS_ChatCustomTabManager *)0x0) {
    __return_storage_ptr__->Object = (FDS_ChatCustomFilter *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = (pFVar1->CustomFilter).Object;
    pTVar2 = (pFVar1->CustomFilter).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetChatIconID @ 14b9ed390

int __thiscall
UDS_ChattingManager::GetChatIconID(UDS_ChattingManager *this,EDS_ChattingType param_1)

{
  FDS_ChatRoomManager *this_00;
  code *pcVar1;
  FDS_ChatRoomData *pFVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  FDS_ChattingGroupIconListTableRow *pFVar6;
  EDS_ChattingType *pEVar7;
  EDS_ChattingType *pEVar8;
  undefined1 *puVar9;
  TSharedPtr<FDS_ChatRoomData,1> local_18;
  
  switch(param_1 - 0xe) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    this_00 = (this->ChatRoomManager).Object;
    if (this_00 == (FDS_ChatRoomManager *)0x0) {
      local_18.Object = (FDS_ChatRoomData *)0x0;
      local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      FDS_ChatRoomManager::FindChatRoom(this_00,&local_18,Group,param_1 - 0xe);
    }
    pFVar2 = local_18.Object;
    if (local_18.Object != (FDS_ChatRoomData *)0x0) {
      if ((local_18.Object == (FDS_ChatRoomData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (0 < pFVar2->GroupIconID) {
        pFVar6 = FDS_ChattingGroupIconListTableRow::GetRef((longlong)pFVar2->GroupIconID,true);
        iVar4 = pFVar6->ID_Icon;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        return iVar4;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (*(int *)&(this->ChattingCommonDataMap).field_0x8 !=
      *(int *)&(this->ChattingCommonDataMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->ChattingCommonDataMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->ChattingCommonDataMap).field_0x38;
    }
    uVar5 = *(undefined4 *)
             (puVar9 + ((ulonglong)(*(int *)&(this->ChattingCommonDataMap).field_0x48 - 1) &
                       (ulonglong)param_1) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        pEVar7 = (EDS_ChattingType *)
                 ((longlong)(int)uVar5 * 0x58 + *(longlong *)&this->ChattingCommonDataMap);
        if (*pEVar7 == param_1) {
          pEVar8 = pEVar7 + 8;
          if (pEVar7 == (EDS_ChattingType *)0x0) {
            pEVar8 = (EDS_ChattingType *)0x0;
          }
          if (pEVar8 == (EDS_ChattingType *)0x0) {
            return 0;
          }
          return *(undefined4 *)(pEVar8 + 8);
        }
        uVar5 = *(undefined4 *)(pEVar7 + 0x50);
      } while (uVar5 != 0xffffffff);
    }
  }
  return 0;
}

// GetChatRoomData @ 14b9ed600

TSharedPtr<FDS_ChatRoomData,1> * __thiscall
UDS_ChattingManager::GetChatRoomData
          (UDS_ChattingManager *this,TSharedPtr<FDS_ChatRoomData,1> *__return_storage_ptr__,
          EDS_ChattingTabType param_1,int param_2)

{
  FDS_ChatRoomManager *this_00;
  
  this_00 = (this->ChatRoomManager).Object;
  if (this_00 == (FDS_ChatRoomManager *)0x0) {
    __return_storage_ptr__->Object = (FDS_ChatRoomData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  FDS_ChatRoomManager::FindChatRoom(this_00,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// GetChatRoomDataByConversationID @ 14b9ed640

TSharedPtr<FDS_ChatRoomData,1> * __thiscall
UDS_ChattingManager::GetChatRoomDataByConversationID
          (UDS_ChattingManager *this,TSharedPtr<FDS_ChatRoomData,1> *__return_storage_ptr__,
          FString *param_1)

{
  FDS_ChatRoomManager *this_00;
  
  this_00 = (this->ChatRoomManager).Object;
  if (this_00 == (FDS_ChatRoomManager *)0x0) {
    __return_storage_ptr__->Object = (FDS_ChatRoomData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  FDS_ChatRoomManager::FindChatRoomByConversationID(this_00,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetChatRoomDataByGroupID @ 14b9ed680

TSharedPtr<FDS_ChatRoomData,1> * __thiscall
UDS_ChattingManager::GetChatRoomDataByGroupID
          (UDS_ChattingManager *this,TSharedPtr<FDS_ChatRoomData,1> *__return_storage_ptr__,
          FString *param_1)

{
  FDS_ChatRoomManager *this_00;
  
  this_00 = (this->ChatRoomManager).Object;
  if (this_00 == (FDS_ChatRoomManager *)0x0) {
    __return_storage_ptr__->Object = (FDS_ChatRoomData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  FDS_ChatRoomManager::FindChatRoomByGroupID(this_00,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetChatRoomDataByWhisper @ 14b9ed6c0

TSharedPtr<FDS_ChatRoomData,1> * __thiscall
UDS_ChattingManager::GetChatRoomDataByWhisper
          (UDS_ChattingManager *this,TSharedPtr<FDS_ChatRoomData,1> *__return_storage_ptr__,
          FString *param_1)

{
  FDS_ChatRoomManager *this_00;
  
  this_00 = (this->ChatRoomManager).Object;
  if (this_00 == (FDS_ChatRoomManager *)0x0) {
    __return_storage_ptr__->Object = (FDS_ChatRoomData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  FDS_ChatRoomManager::FindChatRoomByWhisper(this_00,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetChatRoomDataByWhisper @ 14b9ed700

TSharedPtr<FDS_ChatRoomData,1> * __thiscall
UDS_ChattingManager::GetChatRoomDataByWhisper
          (UDS_ChattingManager *this,TSharedPtr<FDS_ChatRoomData,1> *__return_storage_ptr__,
          long64 param_1)

{
  FDS_ChatRoomManager *this_00;
  
  this_00 = (this->ChatRoomManager).Object;
  if (this_00 == (FDS_ChatRoomManager *)0x0) {
    __return_storage_ptr__->Object = (FDS_ChatRoomData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  FDS_ChatRoomManager::FindChatRoomByWhisper(this_00,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetChatRoomDataCount @ 14b9ed740

int __thiscall
UDS_ChattingManager::GetChatRoomDataCount(UDS_ChattingManager *this,EDS_ChattingTabType param_1)

{
  FDS_ChatRoomManager *pFVar1;
  char *pcVar2;
  undefined4 uVar3;
  EDS_ChattingTabType *pEVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  EDS_ChattingTabType *pEVar8;
  int iVar9;
  undefined1 local_res8 [8];
  EDS_ChattingTabType *pEVar10;
  
  pFVar1 = (this->ChatRoomManager).Object;
  if (pFVar1 == (FDS_ChatRoomManager *)0x0) {
    return 0;
  }
  pEVar10 = (EDS_ChattingTabType *)0x0;
  iVar9 = 0;
  if (*(int *)&(pFVar1->ChatRoomDataMap).field_0x8 != *(int *)&(pFVar1->ChatRoomDataMap).field_0x34)
  {
    puVar5 = *(undefined1 **)&(pFVar1->ChatRoomDataMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(pFVar1->ChatRoomDataMap).field_0x38;
    }
    uVar3 = *(undefined4 *)
             (puVar5 + ((ulonglong)(*(int *)&(pFVar1->ChatRoomDataMap).field_0x48 - 1) &
                       (ulonglong)param_1) * 4);
    if (uVar3 != 0xffffffff) {
      while (pEVar4 = (EDS_ChattingTabType *)
                      ((longlong)(int)uVar3 * 0x20 + *(longlong *)&pFVar1->ChatRoomDataMap),
            *pEVar4 != param_1) {
        uVar3 = *(undefined4 *)(pEVar4 + 0x18);
        if (uVar3 == 0xffffffff) {
          return 0;
        }
      }
      pEVar8 = pEVar4 + 8;
      if (pEVar4 == (EDS_ChattingTabType *)0x0) {
        pEVar8 = pEVar10;
      }
      if (pEVar8 != (EDS_ChattingTabType *)0x0) {
        puVar6 = *(undefined8 **)pEVar8;
        uVar3 = *(undefined4 *)(pEVar8 + 8);
        puVar7 = puVar6 + (longlong)(int)uVar3 * 2;
        while( true ) {
          iVar9 = (int)pEVar10;
          if (*(undefined4 *)(pEVar8 + 8) != uVar3) {
            `TCheckedPointerIterator<TSharedPtr<FDS_ChatRoomData,1>_const_,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_res8);
          }
          if (puVar6 == puVar7) break;
          pcVar2 = (char *)*puVar6;
          if (((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) && (*(longlong *)(pcVar2 + 8) != 0)) {
            pEVar10 = (EDS_ChattingTabType *)(ulonglong)(iVar9 + 1);
          }
          puVar6 = puVar6 + 2;
        }
      }
    }
  }
  return iVar9;
}

// GetChatUserInfo @ 14b9ed860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ChatUserInfo,1> * __thiscall
UDS_ChattingManager::GetChatUserInfo
          (UDS_ChattingManager *this,TSharedPtr<FDS_ChatUserInfo,1> *__return_storage_ptr__,
          FString *param_1)

{
  FDS_ChatUserCache *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = (this->ChatUserCache).Object;
  if (this_00 == (FDS_ChatUserCache *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ChattingManager::GetChatUserInfo",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x637,L"ChatUserCache.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    __return_storage_ptr__->Object = (FDS_ChatUserInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    FDS_ChatUserCache::FindByNickname(this_00,__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// GetChatUserInfo @ 14b9ed960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FDS_ChatUserInfo,1> * __thiscall
UDS_ChattingManager::GetChatUserInfo
          (UDS_ChattingManager *this,TSharedPtr<FDS_ChatUserInfo,1> *__return_storage_ptr__,
          long64 param_1)

{
  FDS_ChatUserCache *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = (this->ChatUserCache).Object;
  if (this_00 == (FDS_ChatUserCache *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ChattingManager::GetChatUserInfo",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x62c,L"ChatUserCache.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    __return_storage_ptr__->Object = (FDS_ChatUserInfo *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    FDS_ChatUserCache::FindByPlayerUID(this_00,__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// GetChattingChannelName @ 14b9eda60

FDS_StringBaseID * __thiscall
UDS_ChattingManager::GetChattingChannelName
          (UDS_ChattingManager *this,FDS_StringBaseID *__return_storage_ptr__,
          EDS_ChattingType param_1)

{
  undefined4 uVar1;
  EDS_ChattingType *pEVar2;
  EDS_ChattingType *pEVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->ChattingCommonDataMap).field_0x8 !=
      *(int *)&(this->ChattingCommonDataMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ChattingCommonDataMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ChattingCommonDataMap).field_0x38;
    }
    uVar1 = *(undefined4 *)
             (puVar4 + ((ulonglong)(*(int *)&(this->ChattingCommonDataMap).field_0x48 - 1) &
                       (ulonglong)param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar2 = (EDS_ChattingType *)
                 ((longlong)(int)uVar1 * 0x58 + *(longlong *)&this->ChattingCommonDataMap);
        if (*pEVar2 == param_1) {
          pEVar3 = pEVar2 + 8;
          if (pEVar2 == (EDS_ChattingType *)0x0) {
            pEVar3 = (EDS_ChattingType *)0x0;
          }
          if (pEVar3 != (EDS_ChattingType *)0x0) {
            __return_storage_ptr__->_padding_ = (longlong)&___7FDS_StringBaseID__6B_;
            __return_storage_ptr__->ID = *(undefined8 *)(pEVar3 + 0x18);
            return __return_storage_ptr__;
          }
          break;
        }
        uVar1 = *(undefined4 *)(pEVar2 + 0x50);
      } while (uVar1 != 0xffffffff);
    }
  }
  __return_storage_ptr__->ID = 0;
  __return_storage_ptr__->_padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  return __return_storage_ptr__;
}

// GetChattingColor @ 14b9edb00

FLinearColor * __thiscall
UDS_ChattingManager::GetChattingColor
          (UDS_ChattingManager *this,FLinearColor *__return_storage_ptr__,EDS_ChattingType param_1)

{
  int iVar1;
  UDS_M_ChatOption *this_00;
  undefined8 uVar2;
  undefined4 uVar3;
  EDS_ChattingType *pEVar4;
  FLinearColor *pFVar5;
  EDS_ChattingType *pEVar6;
  undefined1 *puVar7;
  FLinearColor local_18;
  
  iVar1 = *(int *)&(this->ChattingCommonDataMap).field_0x8;
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  if (iVar1 != *(int *)&(this->ChattingCommonDataMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ChattingCommonDataMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ChattingCommonDataMap).field_0x38;
    }
    uVar3 = *(undefined4 *)
             (puVar7 + ((ulonglong)(*(int *)&(this->ChattingCommonDataMap).field_0x48 - 1) &
                       (ulonglong)param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar4 = (EDS_ChattingType *)
                 ((longlong)(int)uVar3 * 0x58 + *(longlong *)&this->ChattingCommonDataMap);
        if (*pEVar4 == param_1) {
          pEVar6 = pEVar4 + 8;
          if (pEVar4 == (EDS_ChattingType *)0x0) {
            pEVar6 = (EDS_ChattingType *)0x0;
          }
          if (pEVar6 != (EDS_ChattingType *)0x0) {
            uVar2 = *(undefined8 *)(pEVar6 + 0x40);
            *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)(pEVar6 + 0x38);
            *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar4 + 0x50);
      } while (uVar3 != 0xffffffff);
    }
  }
  this_00 = (this->ChatOption).field0_0x0.DebugPtr;
  if (this_00 != (UDS_M_ChatOption *)0x0) {
    pFVar5 = UDS_M_ChatOption::GetChattingTypeColor(this_00,&local_18,param_1);
    uVar2 = *(undefined8 *)((longlong)&pFVar5->field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pFVar5->field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
  }
  return __return_storage_ptr__;
}

// GetChattingCommand @ 14b9edbb0

FDS_StringBaseID * __thiscall
UDS_ChattingManager::GetChattingCommand
          (UDS_ChattingManager *this,FDS_StringBaseID *__return_storage_ptr__,
          EDS_ChattingType param_1)

{
  undefined4 uVar1;
  EDS_ChattingType *pEVar2;
  EDS_ChattingType *pEVar3;
  undefined1 *puVar4;
  EDS_ChattingType *pEVar5;
  
  pEVar5 = (EDS_ChattingType *)0x0;
  if (*(int *)&(this->ChattingCommonDataMap).field_0x8 !=
      *(int *)&(this->ChattingCommonDataMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ChattingCommonDataMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ChattingCommonDataMap).field_0x38;
    }
    uVar1 = *(undefined4 *)
             (puVar4 + ((ulonglong)(*(int *)&(this->ChattingCommonDataMap).field_0x48 - 1) &
                       (ulonglong)param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar2 = (EDS_ChattingType *)
                 ((longlong)(int)uVar1 * 0x58 + *(longlong *)&this->ChattingCommonDataMap);
        if (*pEVar2 == param_1) {
          pEVar3 = pEVar2 + 8;
          if (pEVar2 == (EDS_ChattingType *)0x0) {
            pEVar3 = pEVar5;
          }
          pEVar5 = (EDS_ChattingType *)0x0;
          if ((pEVar3 != (EDS_ChattingType *)0x0) && (0 < (int)*(undefined4 *)(pEVar3 + 0x30))) {
            pEVar5 = *(EDS_ChattingType **)(*(undefined8 *)(pEVar3 + 0x28) + 8);
          }
          break;
        }
        uVar1 = *(undefined4 *)(pEVar2 + 0x50);
      } while (uVar1 != 0xffffffff);
    }
  }
  __return_storage_ptr__->_padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  __return_storage_ptr__->ID = (long64)pEVar5;
  return __return_storage_ptr__;
}

// GetChattingCommandDatas @ 14b9edc50

TArray<FDS_ChattingCommandData,TSizedDefaultAllocator<32>_> * __thiscall
UDS_ChattingManager::GetChattingCommandDatas
          (UDS_ChattingManager *this,
          TArray<FDS_ChattingCommandData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FDS_ChatRoomManager *this_00;
  code *pcVar2;
  undefined8 uVar3;
  FDS_ChatRoomData *pFVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  FDS_ChattingCommandData *pFVar9;
  FDS_PartyRepo *this_01;
  TArray<FDS_ChattingCommandData,TSizedDefaultAllocator<32>_> *pTVar10;
  FDS_RaidPartyRepo *this_02;
  char *pcVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  char *pcVar14;
  EDS_ChattingType EVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  TSharedPtr<FDS_ChatRoomData,1> local_1f8;
  FDS_ChattingCommandData local_1e8;
  FDS_ChattingCommandData local_1a8;
  FDS_ChattingCommandData local_168;
  FDS_ChattingCommandData local_128;
  FDS_ChattingCommandData local_e8;
  FDS_ChattingCommandData local_a8;
  FDS_ChattingCommandData local_68;
  
  pcVar11 = (char *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar7 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x40,8,0x18,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  iVar18 = 0;
  iVar6 = iVar18;
  if (*(int *)&(this->ChattingCommonDataMap).field_0x8 !=
      *(int *)&(this->ChattingCommonDataMap).field_0x34) {
    puVar12 = *(undefined1 **)&(this->ChattingCommonDataMap).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->ChattingCommonDataMap).field_0x38;
    }
    iVar16 = *(int *)(puVar12 +
                     (ulonglong)(*(int *)&(this->ChattingCommonDataMap).field_0x48 - 1U & 3) * 4);
    if (iVar16 != -1) {
      do {
        pcVar8 = (char *)((longlong)iVar16 * 0x58 + *(longlong *)&this->ChattingCommonDataMap);
        if (*pcVar8 == '\x03') {
          pcVar14 = pcVar8 + 8;
          if (pcVar8 == (char *)0x0) {
            pcVar14 = pcVar11;
          }
          if (pcVar14 != (char *)0x0) {
            iVar6 = *(int *)(pcVar14 + 0x20);
          }
          break;
        }
        iVar16 = *(int *)(pcVar8 + 0x50);
      } while (iVar16 != -1);
    }
  }
  puVar12 = &(this->ChattingCommonDataMap).field_0x40;
  pFVar9 = FDS_ChattingCommandData::FDS_ChattingCommandData(&local_1e8,iVar6,Zone,0);
  iVar6 = __return_storage_ptr__->ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar6 + 1;
  pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x40;
  *(int *)pFVar17 = pFVar9->CommandNumber;
  pFVar17[4] = (FScriptContainerElement)pFVar9->ChattingType;
  *(undefined ***)(pFVar17 + 8) = &___7FDS_StringBaseID__6B_;
  *(long64 *)(pFVar17 + 0x10) = (pFVar9->Command).ID;
  *(undefined ***)(pFVar17 + 0x18) = &___7FDS_StringBaseID__6B_;
  *(long64 *)(pFVar17 + 0x20) = (pFVar9->CommandName).ID;
  *(int *)(pFVar17 + 0x28) = pFVar9->CommandIconID;
  uVar3 = *(undefined8 *)((longlong)&(pFVar9->CommandColor).field0_0x0 + 8);
  *(undefined8 *)(pFVar17 + 0x2c) = *(undefined8 *)&(pFVar9->CommandColor).field0_0x0;
  *(undefined8 *)(pFVar17 + 0x34) = uVar3;
  *(int *)(pFVar17 + 0x3c) = pFVar9->SubIndex;
  iVar6 = iVar18;
  if (*(int *)&(this->ChattingCommonDataMap).field_0x8 !=
      *(int *)&(this->ChattingCommonDataMap).field_0x34) {
    puVar13 = *(undefined1 **)puVar12;
    if (*(undefined1 **)puVar12 == (undefined1 *)0x0) {
      puVar13 = &(this->ChattingCommonDataMap).field_0x38;
    }
    iVar16 = *(int *)(puVar13 +
                     (ulonglong)(*(int *)&(this->ChattingCommonDataMap).field_0x48 - 1U & 2) * 4);
    if (iVar16 != -1) {
      do {
        pcVar8 = (char *)((longlong)iVar16 * 0x58 + *(longlong *)&this->ChattingCommonDataMap);
        if (*pcVar8 == '\x02') {
          pcVar14 = pcVar8 + 8;
          if (pcVar8 == (char *)0x0) {
            pcVar14 = pcVar11;
          }
          if (pcVar14 != (char *)0x0) {
            iVar6 = *(int *)(pcVar14 + 0x20);
          }
          break;
        }
        iVar16 = *(int *)(pcVar8 + 0x50);
      } while (iVar16 != -1);
    }
  }
  pFVar9 = FDS_ChattingCommandData::FDS_ChattingCommandData(&local_1a8,iVar6,ZoneGroup,0);
  iVar6 = __return_storage_ptr__->ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar6 + 1;
  pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x40;
  *(int *)pFVar17 = pFVar9->CommandNumber;
  pFVar17[4] = (FScriptContainerElement)pFVar9->ChattingType;
  *(undefined ***)(pFVar17 + 8) = &___7FDS_StringBaseID__6B_;
  *(long64 *)(pFVar17 + 0x10) = (pFVar9->Command).ID;
  *(undefined ***)(pFVar17 + 0x18) = &___7FDS_StringBaseID__6B_;
  *(long64 *)(pFVar17 + 0x20) = (pFVar9->CommandName).ID;
  *(int *)(pFVar17 + 0x28) = pFVar9->CommandIconID;
  uVar3 = *(undefined8 *)((longlong)&(pFVar9->CommandColor).field0_0x0 + 8);
  *(undefined8 *)(pFVar17 + 0x2c) = *(undefined8 *)&(pFVar9->CommandColor).field0_0x0;
  *(undefined8 *)(pFVar17 + 0x34) = uVar3;
  *(int *)(pFVar17 + 0x3c) = pFVar9->SubIndex;
  if (*(int *)&(this->ChattingCommonDataMap).field_0x8 !=
      *(int *)&(this->ChattingCommonDataMap).field_0x34) {
    puVar13 = *(undefined1 **)puVar12;
    if (*(undefined1 **)puVar12 == (undefined1 *)0x0) {
      puVar13 = &(this->ChattingCommonDataMap).field_0x38;
    }
    iVar6 = *(int *)(puVar13 +
                    (ulonglong)(*(int *)&(this->ChattingCommonDataMap).field_0x48 - 1U & 1) * 4);
    if (iVar6 != -1) {
      do {
        pcVar8 = (char *)((longlong)iVar6 * 0x58 + *(longlong *)&this->ChattingCommonDataMap);
        if (*pcVar8 == '\x01') {
          pcVar14 = pcVar8 + 8;
          if (pcVar8 == (char *)0x0) {
            pcVar14 = pcVar11;
          }
          if (pcVar14 != (char *)0x0) {
            iVar7 = *(int *)(pcVar14 + 0x20);
          }
          break;
        }
        iVar6 = *(int *)(pcVar8 + 0x50);
      } while (iVar6 != -1);
    }
  }
  pFVar9 = FDS_ChattingCommandData::FDS_ChattingCommandData(&local_168,iVar7,World,0);
  iVar7 = __return_storage_ptr__->ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar7 + 1;
  pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x40;
  *(int *)pFVar17 = pFVar9->CommandNumber;
  pFVar17[4] = (FScriptContainerElement)pFVar9->ChattingType;
  *(undefined ***)(pFVar17 + 8) = &___7FDS_StringBaseID__6B_;
  *(long64 *)(pFVar17 + 0x10) = (pFVar9->Command).ID;
  *(undefined ***)(pFVar17 + 0x18) = &___7FDS_StringBaseID__6B_;
  *(long64 *)(pFVar17 + 0x20) = (pFVar9->CommandName).ID;
  *(int *)(pFVar17 + 0x28) = pFVar9->CommandIconID;
  uVar3 = *(undefined8 *)((longlong)&(pFVar9->CommandColor).field0_0x0 + 8);
  *(undefined8 *)(pFVar17 + 0x2c) = *(undefined8 *)&(pFVar9->CommandColor).field0_0x0;
  *(undefined8 *)(pFVar17 + 0x34) = uVar3;
  *(int *)(pFVar17 + 0x3c) = pFVar9->SubIndex;
  if (*(int *)&(this->ChattingCommonDataMap).field_0x8 !=
      *(int *)&(this->ChattingCommonDataMap).field_0x34) {
    puVar13 = *(undefined1 **)puVar12;
    if (*(undefined1 **)puVar12 == (undefined1 *)0x0) {
      puVar13 = &(this->ChattingCommonDataMap).field_0x38;
    }
    iVar7 = *(int *)(puVar13 +
                    (ulonglong)(*(int *)&(this->ChattingCommonDataMap).field_0x48 - 1U & 10) * 4);
    if (iVar7 != -1) {
      do {
        pcVar8 = (char *)((longlong)iVar7 * 0x58 + *(longlong *)&this->ChattingCommonDataMap);
        if (*pcVar8 == '\n') {
          pcVar14 = pcVar8 + 8;
          if (pcVar8 == (char *)0x0) {
            pcVar14 = pcVar11;
          }
          if (pcVar14 != (char *)0x0) {
            iVar18 = *(int *)(pcVar14 + 0x20);
          }
          break;
        }
        iVar7 = *(int *)(pcVar8 + 0x50);
      } while (iVar7 != -1);
    }
  }
  pFVar9 = FDS_ChattingCommandData::FDS_ChattingCommandData(&local_128,iVar18,Whisper,0);
  iVar7 = __return_storage_ptr__->ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&__return_storage_ptr__->AllocatorInstance,piVar1);
  }
  __return_storage_ptr__->ArrayNum = iVar7 + 1;
  pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x40;
  *(int *)pFVar17 = pFVar9->CommandNumber;
  pFVar17[4] = (FScriptContainerElement)pFVar9->ChattingType;
  *(undefined ***)(pFVar17 + 8) = &___7FDS_StringBaseID__6B_;
  *(long64 *)(pFVar17 + 0x10) = (pFVar9->Command).ID;
  *(undefined ***)(pFVar17 + 0x18) = &___7FDS_StringBaseID__6B_;
  *(long64 *)(pFVar17 + 0x20) = (pFVar9->CommandName).ID;
  *(int *)(pFVar17 + 0x28) = pFVar9->CommandIconID;
  uVar3 = *(undefined8 *)((longlong)&(pFVar9->CommandColor).field0_0x0 + 8);
  *(undefined8 *)(pFVar17 + 0x2c) = *(undefined8 *)&(pFVar9->CommandColor).field0_0x0;
  *(undefined8 *)(pFVar17 + 0x34) = uVar3;
  *(int *)(pFVar17 + 0x3c) = pFVar9->SubIndex;
  this_01 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  bVar5 = FDS_PartyRepo::IsPartyJoined(this_01);
  if (bVar5) {
    iVar7 = GetCommandNumber(this,Party);
    pFVar9 = FDS_ChattingCommandData::FDS_ChattingCommandData(&local_e8,iVar7,Party,0);
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x40;
    *(int *)pFVar17 = pFVar9->CommandNumber;
    pFVar17[4] = (FScriptContainerElement)pFVar9->ChattingType;
    *(undefined ***)(pFVar17 + 8) = &___7FDS_StringBaseID__6B_;
    *(long64 *)(pFVar17 + 0x10) = (pFVar9->Command).ID;
    *(undefined ***)(pFVar17 + 0x18) = &___7FDS_StringBaseID__6B_;
    *(long64 *)(pFVar17 + 0x20) = (pFVar9->CommandName).ID;
    *(int *)(pFVar17 + 0x28) = pFVar9->CommandIconID;
    uVar3 = *(undefined8 *)((longlong)&(pFVar9->CommandColor).field0_0x0 + 8);
    *(undefined8 *)(pFVar17 + 0x2c) = *(undefined8 *)&(pFVar9->CommandColor).field0_0x0;
    *(undefined8 *)(pFVar17 + 0x34) = uVar3;
    *(int *)(pFVar17 + 0x3c) = pFVar9->SubIndex;
  }
  this_00 = (this->ChatRoomManager).Object;
  if ((this_00 != (FDS_ChatRoomManager *)0x0) &&
     (iVar7 = FDS_ChatRoomManager::GetMaxChatRoomCount(this_00,Group), 0 < iVar7)) {
    do {
      if (((this->ChatRoomManager).Object == (FDS_ChatRoomManager *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        pTVar10 = (TArray<FDS_ChattingCommandData,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar10;
      }
      iVar18 = (int)pcVar11;
      FDS_ChatRoomManager::FindChatRoom((this->ChatRoomManager).Object,&local_1f8,Group,iVar18);
      pFVar4 = local_1f8.Object;
      if (local_1f8.Object != (FDS_ChatRoomData *)0x0) {
        if ((local_1f8.Object == (FDS_ChatRoomData *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          pTVar10 = (TArray<FDS_ChattingCommandData,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar10;
        }
        if ((pFVar4->ChattingTabType != None) &&
           ((pFVar4->ChatConversation).Object != (FDS_ChatConversation *)0x0)) {
          EVar15 = (char)pcVar11 + Group1;
          iVar6 = GetCommandNumber(this,EVar15);
          pFVar9 = FDS_ChattingCommandData::FDS_ChattingCommandData(&local_a8,iVar6,EVar15,iVar18);
          iVar6 = __return_storage_ptr__->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x840,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          __return_storage_ptr__->ArrayNum = iVar6 + 1;
          pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x40;
          *(int *)pFVar17 = pFVar9->CommandNumber;
          pFVar17[4] = (FScriptContainerElement)pFVar9->ChattingType;
          *(undefined ***)(pFVar17 + 8) = &___7FDS_StringBaseID__6B_;
          *(long64 *)(pFVar17 + 0x10) = (pFVar9->Command).ID;
          *(undefined ***)(pFVar17 + 0x18) = &___7FDS_StringBaseID__6B_;
          *(long64 *)(pFVar17 + 0x20) = (pFVar9->CommandName).ID;
          *(int *)(pFVar17 + 0x28) = pFVar9->CommandIconID;
          uVar3 = *(undefined8 *)((longlong)&(pFVar9->CommandColor).field0_0x0 + 8);
          *(undefined8 *)(pFVar17 + 0x2c) = *(undefined8 *)&(pFVar9->CommandColor).field0_0x0;
          *(undefined8 *)(pFVar17 + 0x34) = uVar3;
          *(int *)(pFVar17 + 0x3c) = pFVar9->SubIndex;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1f8.SharedReferenceCount.ReferenceController);
      pcVar11 = (char *)(ulonglong)(iVar18 + 1U);
    } while ((int)(iVar18 + 1U) < iVar7);
  }
  iVar7 = 0;
  this_02 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar5 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(this_02);
  if (bVar5) {
    if (*(int *)&(this->ChattingCommonDataMap).field_0x8 !=
        *(int *)&(this->ChattingCommonDataMap).field_0x34) {
      puVar13 = *(undefined1 **)puVar12;
      if (*(undefined1 **)puVar12 == (undefined1 *)0x0) {
        puVar13 = &(this->ChattingCommonDataMap).field_0x38;
      }
      iVar18 = *(int *)(puVar13 +
                       (ulonglong)(*(int *)&(this->ChattingCommonDataMap).field_0x48 - 1U & 6) * 4);
      if (iVar18 != -1) {
        do {
          pcVar11 = (char *)((longlong)iVar18 * 0x58 + *(longlong *)&this->ChattingCommonDataMap);
          if (*pcVar11 == '\x06') {
            pcVar8 = pcVar11 + 8;
            if (pcVar11 == (char *)0x0) {
              pcVar8 = (char *)0x0;
            }
            if (pcVar8 != (char *)0x0) {
              iVar7 = *(int *)(pcVar8 + 0x20);
            }
            break;
          }
          iVar18 = *(int *)(pcVar11 + 0x50);
        } while (iVar18 != -1);
      }
    }
    pFVar9 = FDS_ChattingCommandData::FDS_ChattingCommandData(&local_68,iVar7,RaidParty,0);
    iVar7 = __return_storage_ptr__->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar7 + 1;
    pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x40;
    *(int *)pFVar17 = pFVar9->CommandNumber;
    pFVar17[4] = (FScriptContainerElement)pFVar9->ChattingType;
    *(undefined ***)(pFVar17 + 8) = &___7FDS_StringBaseID__6B_;
    *(long64 *)(pFVar17 + 0x10) = (pFVar9->Command).ID;
    *(undefined ***)(pFVar17 + 0x18) = &___7FDS_StringBaseID__6B_;
    *(long64 *)(pFVar17 + 0x20) = (pFVar9->CommandName).ID;
    *(int *)(pFVar17 + 0x28) = pFVar9->CommandIconID;
    uVar3 = *(undefined8 *)((longlong)&(pFVar9->CommandColor).field0_0x0 + 8);
    *(undefined8 *)(pFVar17 + 0x2c) = *(undefined8 *)&(pFVar9->CommandColor).field0_0x0;
    *(undefined8 *)(pFVar17 + 0x34) = uVar3;
    *(int *)(pFVar17 + 0x3c) = pFVar9->SubIndex;
  }
  AlgoImpl::Reverse<FDS_ChattingCommandData>
            ((FDS_ChattingCommandData *)(__return_storage_ptr__->AllocatorInstance).Data,
             __return_storage_ptr__->ArrayNum);
  return __return_storage_ptr__;
}

// GetChattingCommandType @ 14b9ee380

EDS_ChattingType __thiscall
UDS_ChattingManager::GetChattingCommandType(UDS_ChattingManager *this,FString *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  EDS_ChattingType EVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  EDS_ChattingType *pEVar14;
  uint uVar15;
  longlong *plVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar9 = *(int *)&(this->ChattingCommonDataMap).field_0x28;
  puVar1 = &(this->ChattingCommonDataMap).field_0x10;
  iVar17 = 0;
  uVar7 = 1;
  iVar19 = 0;
  iVar8 = 0;
  if (iVar9 != 0) {
    puVar20 = *(uint **)&(this->ChattingCommonDataMap).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar15 = *puVar20;
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar8 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14b9ee42e;
      uVar15 = puVar20[lVar11 + 1];
    }
    uVar7 = -uVar15 & uVar15;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar19;
    if (iVar9 < iVar8) {
      iVar8 = iVar9;
    }
  }
LAB_14b9ee42e:
  uVar15 = *(uint *)&(this->ChattingCommonDataMap).field_0x28;
  uVar13 = uVar15 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar7,iVar17);
  TStack_68.CurrentBitIndex = iVar8;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar15 >> 5;
  TStack_68._28_4_ = iVar8;
  TStack_68.BaseBitIndex = iVar19;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->ChattingCommonDataMap).field_0x8 -
                       *(int *)&(this->ChattingCommonDataMap).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar9 < (int)uVar15)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    EVar6 = (*pcVar4)();
    return EVar6;
  }
  uVar7 = *(uint *)&(this->ChattingCommonDataMap).field_0x28;
  if (uVar15 != uVar7) {
    puVar18 = *(undefined1 **)&(this->ChattingCommonDataMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar15 == 0) {
      lVar11 = (longlong)iVar17;
      uVar13 = uVar13 + 0x20;
      iVar17 = iVar17 + 1;
      uVar15 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14b9ee530;
      uVar15 = *(uint *)(puVar18 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar15 = (int)lVar11 + -1 + uVar13;
    if ((int)uVar7 < (int)uVar15) {
      uVar15 = uVar7;
    }
  }
LAB_14b9ee530:
  do {
    if (*(int *)&(this->ChattingCommonDataMap).field_0x8 -
        *(int *)&(this->ChattingCommonDataMap).field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_ChattingType,FDS_ChattingCommonData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar15) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return None;
    }
    pEVar14 = (EDS_ChattingType *)
              ((longlong)TStack_68.CurrentBitIndex * 0x58 +
              *(longlong *)&this->ChattingCommonDataMap);
    uVar3 = *(undefined4 *)(pEVar14 + 0x38);
    plVar12 = *(longlong **)(pEVar14 + 0x30);
    plVar16 = plVar12 + (longlong)(int)uVar3 * 2;
    while( true ) {
      if (*(undefined4 *)(pEVar14 + 0x38) != uVar3) {
        `TCheckedPointerIterator<FDS_StringBaseID_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (plVar12 == plVar16) break;
      puVar10 = (undefined8 *)(**(code **)(*plVar12 + 8))(plVar12);
      iVar9 = (param_1->Data).ArrayNum;
      iVar17 = *(int *)(puVar10 + 1);
      if (iVar17 == iVar9) {
        if (iVar17 < 2) goto LAB_14b9ee5ed;
        iVar9 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)*puVar10,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar5 = iVar9 == 0;
      }
      else {
        bVar5 = iVar9 + iVar17 == 1;
      }
      if (bVar5) {
LAB_14b9ee5ed:
        return *pEVar14;
      }
      plVar12 = plVar12 + 2;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// GetChattingTabColor @ 14b9ee620

FLinearColor * __thiscall
UDS_ChattingManager::GetChattingTabColor
          (UDS_ChattingManager *this,FLinearColor *__return_storage_ptr__,
          EDS_ChattingTabType param_1,int param_2)

{
  UDS_M_ChatOption *this_00;
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  FLinearColor *pFVar4;
  TSharedPtr<FDS_ChattingTabData,1> local_38;
  FLinearColor local_28;
  FLinearColor local_18;
  
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  GetChattingTabData(this,&local_38,param_1);
  if (local_38.Object != (FDS_ChattingTabData *)0x0) {
    if (local_38.Object == (FDS_ChattingTabData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FLinearColor *)(*pcVar1)();
        return pFVar4;
      }
    }
    uVar2 = *(undefined8 *)((longlong)&((local_38.Object)->TabColor).field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         *(undefined8 *)&((local_38.Object)->TabColor).field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
  }
  this_00 = (this->ChatOption).field0_0x0.DebugPtr;
  if (((this_00 != (UDS_M_ChatOption *)0x0) && (param_1 != Total)) && (param_1 != Custom)) {
    if (param_1 == Group) {
      if (param_2 < 0) goto LAB_14b9ee6e9;
      pFVar4 = &local_18;
    }
    else {
      if (param_1 == Favorite) goto LAB_14b9ee6e9;
      pFVar4 = &local_28;
    }
    pFVar4 = UDS_M_ChatOption::GetChattingTabTypeColor(this_00,pFVar4,param_1,param_2);
    uVar2 = *(undefined8 *)((longlong)&pFVar4->field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pFVar4->field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar2;
  }
LAB_14b9ee6e9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetChattingTabData @ 14b9ee720

TSharedPtr<FDS_ChattingTabData,1> * __thiscall
UDS_ChattingManager::GetChattingTabData
          (UDS_ChattingManager *this,TSharedPtr<FDS_ChattingTabData,1> *__return_storage_ptr__,
          EDS_ChattingTabType param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  undefined4 uVar3;
  atomic<int> aVar4;
  EDS_ChattingTabType *pEVar5;
  undefined1 *puVar6;
  EDS_ChattingTabType *pEVar7;
  bool bVar8;
  
  if (*(int *)&(this->ChattingTabDataMap).field_0x8 !=
      *(int *)&(this->ChattingTabDataMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ChattingTabDataMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ChattingTabDataMap).field_0x38;
    }
    uVar3 = *(undefined4 *)
             (puVar6 + ((ulonglong)(*(int *)&(this->ChattingTabDataMap).field_0x48 - 1) &
                       (ulonglong)param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_ChattingTabType *)
                 ((longlong)(int)uVar3 * 0x20 + *(longlong *)&this->ChattingTabDataMap);
        if (*pEVar5 == param_1) {
          __return_storage_ptr__->Object = (FDS_ChattingTabData *)0x0;
          pEVar7 = pEVar5 + 8;
          if (pEVar5 == (EDS_ChattingTabType *)0x0) {
            pEVar7 = (EDS_ChattingTabType *)0x0;
          }
          if (pEVar7 == (EDS_ChattingTabType *)0x0) goto LAB_14b9ee78d;
          pTVar1 = *(TReferenceControllerBase<1> **)(pEVar7 + 8);
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
          if (pTVar1 == (TReferenceControllerBase<1> *)0x0) goto LAB_14b9ee7d3;
          aVar2 = pTVar1->SharedReferenceCount;
          goto joined_r0x00014b9ee7be;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  __return_storage_ptr__->Object = (FDS_ChattingTabData *)0x0;
LAB_14b9ee78d:
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
  while( true ) {
    LOCK();
    aVar4 = pTVar1->SharedReferenceCount;
    bVar8 = aVar2 == aVar4;
    if (bVar8) {
      pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
      aVar4 = aVar2;
    }
    UNLOCK();
    aVar2 = aVar4;
    if (bVar8) break;
joined_r0x00014b9ee7be:
    if (aVar2 == (atomic<int>)0x0) {
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      break;
    }
  }
LAB_14b9ee7d3:
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = *(FDS_ChattingTabData **)pEVar7;
  return __return_storage_ptr__;
}

// GetCommandNumber @ 14b9ee960

int __thiscall
UDS_ChattingManager::GetCommandNumber(UDS_ChattingManager *this,EDS_ChattingType param_1)

{
  undefined4 uVar1;
  EDS_ChattingType *pEVar2;
  EDS_ChattingType *pEVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->ChattingCommonDataMap).field_0x8 !=
      *(int *)&(this->ChattingCommonDataMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ChattingCommonDataMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ChattingCommonDataMap).field_0x38;
    }
    uVar1 = *(undefined4 *)
             (puVar4 + ((ulonglong)(*(int *)&(this->ChattingCommonDataMap).field_0x48 - 1) &
                       (ulonglong)param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar2 = (EDS_ChattingType *)
                 ((longlong)(int)uVar1 * 0x58 + *(longlong *)&this->ChattingCommonDataMap);
        if (*pEVar2 == param_1) {
          pEVar3 = pEVar2 + 8;
          if (pEVar2 == (EDS_ChattingType *)0x0) {
            pEVar3 = (EDS_ChattingType *)0x0;
          }
          if (pEVar3 == (EDS_ChattingType *)0x0) {
            return 0;
          }
          return *(undefined4 *)(pEVar3 + 0x20);
        }
        uVar1 = *(undefined4 *)(pEVar2 + 0x50);
      } while (uVar1 != 0xffffffff);
    }
  }
  return 0;
}

// GetCustomData @ 14b9eece0

TSharedPtr<FDS_ChatCustomData,1> * __thiscall
UDS_ChattingManager::GetCustomData
          (UDS_ChattingManager *this,TSharedPtr<FDS_ChatCustomData,1> *__return_storage_ptr__,
          int param_1)

{
  FDS_ChatCustomTabManager *this_00;
  
  this_00 = (this->ChatCustomTabManager).Object;
  if (this_00 != (FDS_ChatCustomTabManager *)0x0) {
    FDS_ChatCustomTabManager::GetCustomData(this_00,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FDS_ChatCustomData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetCustomTabCount @ 14b9ef320

int __thiscall UDS_ChattingManager::GetCustomTabCount(UDS_ChattingManager *this)

{
  int iVar1;
  FDS_ChatCustomTabManager *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  pFVar2 = (this->ChatCustomTabManager).Object;
  if (pFVar2 != (FDS_ChatCustomTabManager *)0x0) {
    pFVar3 = (pFVar2->CustomDatas).AllocatorInstance.Data;
    iVar5 = 0;
    iVar1 = (pFVar2->CustomDatas).ArrayNum;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pFVar2->CustomDatas).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedPtr<FDS_ChatCustomData,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar4) break;
      if ((*(longlong *)pFVar3 != 0) && (*(longlong *)(*(longlong *)pFVar3 + 8) != 0)) {
        iVar5 = iVar5 + 1;
      }
      pFVar3 = pFVar3 + 0x10;
    }
    return iVar5;
  }
  return 0;
}

// GetEmptyBookmarkIndex @ 14b9efd70

int __thiscall UDS_ChattingManager::GetEmptyBookmarkIndex(UDS_ChattingManager *this)

{
  int *piVar1;
  FDS_ChatBookmarkManager *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  pFVar2 = (this->ChatBookmarkManager).Object;
  if (pFVar2 == (FDS_ChatBookmarkManager *)0x0) {
    return -1;
  }
  uVar7 = 0;
  if (0 < (pFVar2->BookmarkDatas).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (pFVar2->BookmarkDatas).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      piVar1 = *(int **)((pFVar2->BookmarkDatas).AllocatorInstance.Data + lVar8);
      if (piVar1 != (int *)0x0) {
        if ((char)piVar1[1] == '\0') {
          return uVar7;
        }
        if (*piVar1 < 0) {
          return uVar7;
        }
        if (piVar1[2] < 0) {
          return uVar7;
        }
        iVar6 = DS_CommonDataHelper::ChattingMaxFavoriteCount();
        if (iVar6 <= *piVar1) {
          return uVar7;
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar7 < (pFVar2->BookmarkDatas).ArrayNum);
  }
  return -1;
}

// GetEmptyChatRoomDataIndex @ 14b9efd90

int __thiscall
UDS_ChattingManager::GetEmptyChatRoomDataIndex
          (UDS_ChattingManager *this,EDS_ChattingTabType param_1)

{
  FDS_ChatRoomManager *this_00;
  int iVar1;
  
  this_00 = (this->ChatRoomManager).Object;
  if (this_00 == (FDS_ChatRoomManager *)0x0) {
    return -1;
  }
  iVar1 = FDS_ChatRoomManager::GetEmptySlotIndex(this_00,param_1);
  return iVar1;
}

// GetEmptyCustomDataIndex @ 14b9efe70

int __thiscall UDS_ChattingManager::GetEmptyCustomDataIndex(UDS_ChattingManager *this)

{
  FDS_ChatCustomTabManager *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  pFVar1 = (this->ChatCustomTabManager).Object;
  if (pFVar1 == (FDS_ChatCustomTabManager *)0x0) {
    return -1;
  }
  uVar7 = 0;
  if (0 < (pFVar1->CustomDatas).ArrayNum) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (pFVar1->CustomDatas).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
      lVar2 = *(longlong *)((pFVar1->CustomDatas).AllocatorInstance.Data + lVar8);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == 0)) {
        return uVar7;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar7 < (pFVar1->CustomDatas).ArrayNum);
  }
  return -1;
}

// GetExtraCommandType @ 14b9f0090

EDS_CommandType __thiscall
UDS_ChattingManager::GetExtraCommandType(UDS_ChattingManager *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  EDS_CommandType *pEVar4;
  int iVar5;
  wchar_t *pwVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  iVar2 = TSet<TTuple<FString,enum_EDS_CommandType>,TDefaultMapHashableKeyFuncs<FString,enum_EDS_CommandType,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->ChattingExtraCommandMap,uVar1,param_1);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)&this->ChattingExtraCommandMap;
    pEVar4 = (EDS_CommandType *)(lVar3 + 0x10);
    if (lVar3 == 0) {
      pEVar4 = (EDS_CommandType *)0x0;
    }
    if (pEVar4 != (EDS_CommandType *)0x0) {
      return *pEVar4;
    }
  }
  return None;
}

// GetIMEMode @ 14b9f08a0

EDS_IMEMode __cdecl UDS_ChattingManager::GetIMEMode(void)

{
  return None;
}

// GetInst @ 14b9f0a40

UDS_ChattingManager * __cdecl UDS_ChattingManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_ChattingManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_ChattingManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_ChattingManager_NoRegister();
  pUVar3 = (UDS_ChattingManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_ChattingManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_ChattingManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_ChattingManager *)0x0;
}

// GetKeyActionType @ 14b9f0b90

EDS_KeyActionType __cdecl UDS_ChattingManager::GetKeyActionType(EDS_ChattingTabType param_1)

{
  EDS_KeyActionType EVar1;
  
  if (param_1 == Custom) {
    return IA_Chatting_SelectCustomTab;
  }
  if (param_1 != Whisper) {
    if (param_1 != Group) {
      EVar1 = IA_Chatting_SelectFavorite;
      if (param_1 != Favorite) {
        EVar1 = None;
      }
      return EVar1;
    }
    return IA_Chatting_SelectChattingGroup;
  }
  return IA_Chatting_SelectWhisperTarget;
}

// GetRecentWhispers @ 14b9f1120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedPtr<FDS_ChatUserInfo,1>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_ChattingManager::GetRecentWhispers
          (UDS_ChattingManager *this,
          TArray<TSharedPtr<FDS_ChatUserInfo,1>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          )

{
  FDS_ChatUserCache *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = (this->ChatUserCache).Object;
  if (this_00 == (FDS_ChatUserCache *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ChattingManager::GetRecentWhispers",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x659,L"ChatUserCache.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    FDS_ChatUserCache::GetRecentWhispers(this_00,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetUnreadCount @ 14b9f1d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UDS_ChattingManager::GetUnreadCount
          (UDS_ChattingManager *this,EDS_ChattingTabType param_1,int param_2)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UDS_ChattingDataSet *this_00;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_168;
  TSharedPtr<FDS_ChattingTabData,1> local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  TDS_DataSetGetter<UDS_ChattingDataSet>::Get((ulong64)&local_168);
  bVar3 = FWeakObjectPtr::IsValid(&local_168);
  if (bVar3) {
    if (param_1 == Custom) {
      iVar4 = GetUnreadCountForCustomTab(this,param_2);
    }
    else if (param_1 == Whisper) {
      iVar4 = GetUnreadCountForWhisperTab(this,param_2);
    }
    else if (param_1 == Group) {
      iVar4 = GetUnreadCountForGroupTab(this,param_2);
    }
    else if (param_1 == Favorite) {
      iVar4 = GetUnreadCountForFavoriteTab(this,param_2);
    }
    else {
      GetChattingTabData(this,&local_160,param_1);
      if (local_160.Object == (FDS_ChattingTabData *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_160.SharedReferenceCount.ReferenceController);
        iVar4 = 0;
      }
      else {
        if (local_160.Object == (FDS_ChattingTabData *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            iVar4 = (*pcVar2)();
            return iVar4;
          }
        }
        uVar1 = (local_160.Object)->ChattingTypeFlag;
        this_00 = (UDS_ChattingDataSet *)FWeakObjectPtr::Get(&local_168);
        iVar4 = UDS_ChattingDataSet::GetUnreadCountByTypeFlag(this_00,uVar1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_160.SharedReferenceCount.ReferenceController);
      }
    }
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ChattingManager::GetUnreadCount",0x23,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_148.Ptr,0x711,L"chattingDataSet.IsValid() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    iVar4 = 0;
  }
  return iVar4;
}

// GetUnreadCountForCustomTab @ 14b9f1f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UDS_ChattingManager::GetUnreadCountForCustomTab(UDS_ChattingManager *this,int param_1)

{
  FDS_ChatCustomTabManager *pFVar1;
  code *pcVar2;
  FDS_ChatCustomData *pFVar3;
  bool bVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UDS_ChattingDataSet *pUVar7;
  ulong64 uVar8;
  uint uVar9;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_178;
  TSharedPtr<FDS_ChatCustomData,1> local_170;
  TSharedPtr<FDS_ChatCustomData,1> local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  ulonglong uVar10;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  TDS_DataSetGetter<UDS_ChattingDataSet>::Get((ulong64)&local_178);
  bVar4 = FWeakObjectPtr::IsValid(&local_178);
  if (bVar4) {
    if (param_1 == -1) {
      uVar8 = 0;
      iVar5 = DS_CommonDataHelper::ChattingCustomTabCount();
      uVar10 = uVar8;
      if (0 < iVar5) {
        do {
          pFVar1 = (this->ChatCustomTabManager).Object;
          if (pFVar1 == (FDS_ChatCustomTabManager *)0x0) {
            local_160.Object = (FDS_ChatCustomData *)0x0;
            local_160.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          }
          else {
            FDS_ChatCustomTabManager::GetCustomData(pFVar1,&local_160,(int)uVar10);
          }
          pFVar3 = local_160.Object;
          if (local_160.Object != (FDS_ChatCustomData *)0x0) {
            if ((local_160.Object == (FDS_ChatCustomData *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              iVar5 = (*pcVar2)();
              return iVar5;
            }
            if (pFVar3->ChatFilterFlags != 0) {
              uVar8 = uVar8 | pFVar3->ChatFilterFlags;
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_160.SharedReferenceCount.ReferenceController);
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
        } while ((int)uVar9 < iVar5);
      }
      pUVar7 = (UDS_ChattingDataSet *)FWeakObjectPtr::Get(&local_178);
      iVar5 = UDS_ChattingDataSet::GetUnreadCountByTypeFlag(pUVar7,uVar8);
      return iVar5;
    }
    pFVar1 = (this->ChatCustomTabManager).Object;
    if (pFVar1 == (FDS_ChatCustomTabManager *)0x0) {
      local_170.Object = (FDS_ChatCustomData *)0x0;
      local_170.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      FDS_ChatCustomTabManager::GetCustomData(pFVar1,&local_170,param_1);
    }
    pFVar3 = local_170.Object;
    if (local_170.Object != (FDS_ChatCustomData *)0x0) {
      if ((local_170.Object == (FDS_ChatCustomData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      if (pFVar3->ChatFilterFlags != 0) {
        pUVar7 = (UDS_ChattingDataSet *)FWeakObjectPtr::Get(&local_178);
        iVar5 = UDS_ChattingDataSet::GetUnreadCountByTypeFlag(pUVar7,pFVar3->ChatFilterFlags);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_170.SharedReferenceCount.ReferenceController);
        return iVar5;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_170.SharedReferenceCount.ReferenceController);
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ChattingManager::GetUnreadCountForCustomTab",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_148.Ptr,0x98b,L"chattingDataSet.IsValid() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return 0;
}

// GetUnreadCountForFavoriteTab @ 14b9f21c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UDS_ChattingManager::GetUnreadCountForFavoriteTab(UDS_ChattingManager *this,int param_1)

{
  FDS_ChatBookmarkManager *pFVar1;
  code *pcVar2;
  FDS_ChatBookmarkData *pFVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  int iVar8;
  int iVar9;
  undefined1 auStackY_1a8 [32];
  TSharedPtr<FDS_ChatBookmarkData,1> local_178;
  TSharedPtr<FDS_ChatBookmarkData,1> local_168;
  FWeakObjectPtr local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  TDS_DataSetGetter<UDS_ChattingDataSet>::Get((ulong64)local_158);
  bVar4 = FWeakObjectPtr::IsValid(local_158);
  if (bVar4) {
    if (param_1 == -1) {
      iVar8 = 0;
      iVar5 = DS_CommonDataHelper::ChattingMaxFavoriteCount();
      iVar9 = 0;
      if (iVar5 < 1) {
        return 0;
      }
      do {
        pFVar1 = (this->ChatBookmarkManager).Object;
        if (pFVar1 == (FDS_ChatBookmarkManager *)0x0) {
          local_168.Object = (FDS_ChatBookmarkData *)0x0;
          local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          FDS_ChatBookmarkManager::GetBookmarkData(pFVar1,&local_168,iVar9);
        }
        pFVar3 = local_168.Object;
        if (local_168.Object != (FDS_ChatBookmarkData *)0x0) {
          if ((local_168.Object == (FDS_ChatBookmarkData *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          if ((((pFVar3->ChattingTabType != None) && (-1 < pFVar3->BookmarkIndex)) &&
              (-1 < pFVar3->SubTabIndex)) &&
             (iVar6 = DS_CommonDataHelper::ChattingMaxFavoriteCount(), pFVar3->BookmarkIndex < iVar6
             )) {
            iVar6 = GetUnreadCount(this,pFVar3->ChattingTabType,pFVar3->SubTabIndex);
            iVar8 = iVar8 + iVar6;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_168.SharedReferenceCount.ReferenceController);
        iVar9 = iVar9 + 1;
        if (iVar5 <= iVar9) {
          return iVar8;
        }
      } while( true );
    }
    pFVar1 = (this->ChatBookmarkManager).Object;
    if (pFVar1 == (FDS_ChatBookmarkManager *)0x0) {
      local_178.Object = (FDS_ChatBookmarkData *)0x0;
      local_178.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      FDS_ChatBookmarkManager::GetBookmarkData(pFVar1,&local_178,param_1);
    }
    pFVar3 = local_178.Object;
    if (local_178.Object != (FDS_ChatBookmarkData *)0x0) {
      if ((local_178.Object == (FDS_ChatBookmarkData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      if (((pFVar3->ChattingTabType != None) && (-1 < pFVar3->BookmarkIndex)) &&
         ((-1 < pFVar3->SubTabIndex &&
          (iVar5 = DS_CommonDataHelper::ChattingMaxFavoriteCount(), pFVar3->BookmarkIndex < iVar5)))
         ) {
        iVar5 = GetUnreadCount(this,pFVar3->ChattingTabType,pFVar3->SubTabIndex);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_178.SharedReferenceCount.ReferenceController);
        return iVar5;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
  }
  else {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ChattingManager::GetUnreadCountForFavoriteTab",0x31,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_148.Ptr,0x9ed,L"chattingDataSet.IsValid() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return 0;
}

// GetUnreadCountForGroupTab @ 14b9f2450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_ChattingManager::GetUnreadCountForGroupTab(UDS_ChattingManager *this,int param_1)

{
  FDS_ChatRoomManager *this_00;
  code *pcVar1;
  FDS_ChatRoomData *pFVar2;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UDS_ChattingDataSet *pUVar6;
  ulong64 uVar7;
  undefined1 auStackY_2c8 [32];
  FWeakObjectPtr local_298;
  TSharedPtr<FDS_ChatRoomData,1> local_290;
  TSharedPtr<FDS_ChattingTabData,1> local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  TDS_DataSetGetter<UDS_ChattingDataSet>::Get((ulong64)&local_298);
  bVar3 = FWeakObjectPtr::IsValid(&local_298);
  if (!bVar3) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"UDS_ChattingManager::GetUnreadCountForGroupTab",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_268.Ptr,0x9cb,L"chattingDataSet.IsValid() == false");
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
    return 0;
  }
  GetChattingTabData(this,&local_280,Group);
  if (local_280.Object == (FDS_ChattingTabData *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    iVar4 = 0;
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ChattingManager::GetUnreadCountForGroupTab",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_148.Ptr,0x9d2,L"chattingTabData.IsValid() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else if (param_1 == -1) {
    if ((local_280.Object == (FDS_ChattingTabData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
    uVar7 = (local_280.Object)->ChattingTypeFlag;
    pUVar6 = (UDS_ChattingDataSet *)FWeakObjectPtr::Get(&local_298);
    iVar4 = UDS_ChattingDataSet::GetUnreadCountByTypeFlag(pUVar6,uVar7);
  }
  else {
    this_00 = (this->ChatRoomManager).Object;
    if (this_00 == (FDS_ChatRoomManager *)0x0) {
      local_290.Object = (FDS_ChatRoomData *)0x0;
      local_290.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      FDS_ChatRoomManager::FindChatRoom(this_00,&local_290,Group,param_1);
    }
    pFVar2 = local_290.Object;
    if (local_290.Object != (FDS_ChatRoomData *)0x0) {
      if ((local_290.Object == (FDS_ChatRoomData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if ((pFVar2->ChattingTabType != None) &&
         ((pFVar2->ChatConversation).Object != (FDS_ChatConversation *)0x0)) {
        if ((local_280.Object == (FDS_ChattingTabData *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        uVar7 = FDS_ChattingTabData::GetChattingTypeFlag(local_280.Object,param_1);
        pUVar6 = (UDS_ChattingDataSet *)FWeakObjectPtr::Get(&local_298);
        iVar4 = UDS_ChattingDataSet::GetUnreadCountByTypeFlag(pUVar6,uVar7);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_290.SharedReferenceCount.ReferenceController);
        goto LAB_14b9f26f6;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_290.SharedReferenceCount.ReferenceController);
    iVar4 = 0;
  }
LAB_14b9f26f6:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_280.SharedReferenceCount.ReferenceController);
  return iVar4;
}

// GetUnreadCountForWhisperTab @ 14b9f2730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UDS_ChattingManager::GetUnreadCountForWhisperTab(UDS_ChattingManager *this,int param_1)

{
  FDS_ChatRoomManager *this_00;
  FDS_ChatConversation *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  long64 lVar3;
  code *pcVar4;
  FDS_ChatRoomData *pFVar5;
  bool bVar6;
  int iVar7;
  UDS_LogManager *pUVar8;
  UDS_ChattingDataSet *pUVar9;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  TSharedPtr<FDS_ChatRoomData,1> local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  TDS_DataSetGetter<UDS_ChattingDataSet>::Get((ulong64)&local_158);
  bVar6 = FWeakObjectPtr::IsValid(&local_158);
  if (bVar6) {
    if (param_1 == -1) {
      pUVar9 = (UDS_ChattingDataSet *)FWeakObjectPtr::Get(&local_158);
      iVar7 = UDS_ChattingDataSet::GetUnreadCountByType(pUVar9,Whisper);
      return iVar7;
    }
    this_00 = (this->ChatRoomManager).Object;
    if (this_00 == (FDS_ChatRoomManager *)0x0) {
      local_150.Object = (FDS_ChatRoomData *)0x0;
      local_150.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      FDS_ChatRoomManager::FindChatRoom(this_00,&local_150,Whisper,param_1);
    }
    pFVar5 = local_150.Object;
    if (local_150.Object != (FDS_ChatRoomData *)0x0) {
      if ((local_150.Object == (FDS_ChatRoomData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      if ((pFVar5->ChattingTabType != None) &&
         (pFVar1 = (pFVar5->ChatConversation).Object, pFVar1 != (FDS_ChatConversation *)0x0)) {
        pTVar2 = (pFVar5->ChatConversation).SharedReferenceCount.ReferenceController;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        lVar3 = pFVar1->WhisperPlayerUID;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        pUVar9 = (UDS_ChattingDataSet *)FWeakObjectPtr::Get(&local_158);
        iVar7 = UDS_ChattingDataSet::GetUnreadCountByWhisper(pUVar9,lVar3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_150.SharedReferenceCount.ReferenceController);
        return iVar7;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_150.SharedReferenceCount.ReferenceController);
  }
  else {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ChattingManager::GetUnreadCountForWhisperTab",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_138.Ptr,0x9af,L"chattingDataSet.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return 0;
}

// Init @ 14b9f4120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_ChattingManager::Init(UDS_ChattingManager *this)

{
  TMap<EDS_ChattingType,FDS_ChattingCommonData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ChattingType,FDS_ChattingCommonData,0>_>
  *this_00;
  TTypeCompatibleBytes<FDS_ChatRoomManager> **ppTVar1;
  EDS_ChattingType EVar2;
  uint uVar3;
  longlong lVar4;
  FDS_ChatRoomManager *this_01;
  code *pcVar5;
  undefined8 this_02;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  UClass *pUVar10;
  UDS_M_ChatOption *this_03;
  TIntrusiveReferenceController<FDS_ChatRoomManager,1> *pTVar11;
  UDS_PartyEvent *pUVar12;
  UDS_DungeonEvent *pUVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  TTypeCompatibleBytes<FDS_ChatRoomManager> *pTVar18;
  TIntrusiveReferenceController<FDS_ChatRoomManager,1> *pTVar19;
  ForAnyElementType FVar20;
  ulonglong uVar21;
  TTypeCompatibleBytes<FDS_ChatRoomManager> *pTVar22;
  float fVar23;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined1 local_1c6 [6];
  ulonglong local_1c0;
  FScriptContainerElement *local_1b8;
  TTypeCompatibleBytes<FDS_ChatRoomManager> *local_1b0;
  FSharedReferencer<1> FStack_1a8;
  TTypeCompatibleBytes<FDS_ChatRoomManager> *local_1a0;
  FSharedReferencer<1> FStack_198;
  TTypeCompatibleBytes<FDS_ChatRoomManager> *local_190;
  FSharedReferencer<1> FStack_188;
  TTypeCompatibleBytes<FDS_ChatRoomManager> *local_180;
  FSharedReferencer<1> FStack_178;
  undefined1 local_170 [16];
  TArray<FDS_ChattingBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_160;
  TArray<FDS_ChattingCommandTableRow_const_*,TSizedDefaultAllocator<32>_> local_150;
  TArray<FDS_ChattingCommandTableRow_const_*,TSizedDefaultAllocator<32>_> local_140;
  TPairInitializer<EDS_ChattingType_&&,FDS_ChattingCommonData_&> local_130;
  FDS_ChattingCommonData *local_120;
  bool local_118 [8];
  longlong local_110;
  FDS_ChattingCommonData local_108;
  undefined1 local_b8 [128];
  ForAnyElementType local_38;
  
  local_38.Data = (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStackY_1f8);
  local_170._8_8_ = this;
  iVar7 = DS_CommonDataHelper::ChattingMaxCount();
  FDS_ChatService::Init(iVar7);
  fVar23 = DS_CommonDataHelper::ChattingCloseTime();
  this->ChattingCloseTime = fVar23;
  this->MessageMaxCount = 100;
  FDS_ChattingCommandTableRow::GetAll(&local_150);
  FDS_ChattingBaseTableRow::GetAll(&local_160);
  this_00 = &this->ChattingCommonDataMap;
  local_170._0_8_ = this_00;
  TSet<TTuple<enum_EDS_ChattingType,FDS_ChattingCommonData>,TDefaultMapHashableKeyFuncs<enum_EDS_ChattingType,FDS_ChattingCommonData,0>,FDefaultSetAllocator>
  ::Reset(this_00);
  TSet<TTuple<enum_EDS_ChattingType,FDS_ChattingCommonData>,TDefaultMapHashableKeyFuncs<enum_EDS_ChattingType,FDS_ChattingCommonData,0>,FDefaultSetAllocator>
  ::Reserve(this_00,local_160.ArrayNum);
  uVar14 = (ulonglong)local_160.ArrayNum;
  uVar21 = 0;
  local_1c0 = 0;
  local_1c6._2_4_ = local_160.ArrayNum;
  pFVar17 = local_160.AllocatorInstance.Data + uVar14 * 8;
  FVar20.Data = local_160.AllocatorInstance.Data;
  local_1b8 = pFVar17;
  while( true ) {
    if (local_160.ArrayNum != (uint)uVar14) {
      local_1c8 = 0;
      `TCheckedPointerIterator<FDS_ChattingBaseTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1c8);
    }
    this_02 = local_170._8_8_;
    if (FVar20.Data == pFVar17) break;
    EVar2 = (*(FDS_ChattingBaseTableRow **)FVar20.Data)->ChattingType;
    if ((EVar2 != None) && (EVar2 != Max)) {
      local_1c0 = uVar21 | 1L << ((ulonglong)EVar2 & 0x3f);
      FDS_ChattingCommonData::FDS_ChattingCommonData
                (&local_108,*(FDS_ChattingBaseTableRow **)FVar20.Data);
      iVar7 = local_150.ArrayNum;
      pFVar17 = local_150.AllocatorInstance.Data + (longlong)local_150.ArrayNum * 8;
      FVar16.Data = local_150.AllocatorInstance.Data;
      while( true ) {
        if (local_150.ArrayNum != iVar7) {
          local_1c7 = 0;
          `TCheckedPointerIterator<FDS_ChattingCommandTableRow_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_1c7);
        }
        if (FVar16.Data == pFVar17) break;
        lVar4 = *(longlong *)FVar16.Data;
        if (*(EDS_ChattingType *)(lVar4 + 0x11) == EVar2) {
          if (local_108.Commands.ArrayNum == local_108.Commands.ArrayMax) {
            local_108.Commands.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_108.Commands.AllocatorInstance,&local_108.Commands.ArrayMax
                           );
          }
          *(undefined ***)
           (local_108.Commands.AllocatorInstance.Data + (longlong)local_108.Commands.ArrayNum * 0x10
           ) = &___7FDS_StringBaseID__6B_;
          *(undefined8 *)
           (local_108.Commands.AllocatorInstance.Data +
           (longlong)local_108.Commands.ArrayNum * 0x10 + 8) = *(undefined8 *)(lVar4 + 0x30);
          local_108.Commands.ArrayNum = local_108.Commands.ArrayNum + 1;
        }
        FVar16.Data = FVar16.Data + 8;
      }
      local_1c6[0] = local_108.ChattingType;
      local_130.Value = (FDS_ChattingCommonData *)local_1c6;
      local_120 = &local_108;
      TSet<TTuple<enum_EDS_ChattingType,FDS_ChattingCommonData>,TDefaultMapHashableKeyFuncs<enum_EDS_ChattingType,FDS_ChattingCommonData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_ChattingType_&&,FDS_ChattingCommonData_&>_>
                ((void *)local_170._0_8_,&local_130,(bool *)&local_130.Value);
      uVar21 = local_1c0;
      pFVar17 = local_1b8;
      if (local_108.Commands.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Commands.AllocatorInstance.Data);
        pFVar17 = local_1b8;
      }
    }
    uVar14 = (ulonglong)(uint)local_1c6._2_4_;
    FVar20.Data = FVar20.Data + 8;
  }
  *(undefined2 *)(local_170._8_8_ + 0x158) = 0x103;
  *(undefined4 *)(local_170._8_8_ + 0x15c) = 0xffffffff;
  *(ulonglong *)(local_170._8_8_ + 0x148) = local_1c0;
  *(ulonglong *)(local_170._8_8_ + 0x150) = local_1c0;
  if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.AllocatorInstance.Data);
  }
  if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
  }
  InitChattingTabDataMap((UDS_ChattingManager *)this_02);
  TSet<TTuple<FString,enum_EDS_CommandType>,TDefaultMapHashableKeyFuncs<FString,enum_EDS_CommandType,0>,FDefaultSetAllocator>
  ::Reset((void *)(this_02 + 0xe8));
  FDS_ChattingCommandTableRow::GetAll(&local_140);
  iVar7 = local_140.ArrayNum;
  pFVar17 = local_140.AllocatorInstance.Data + (longlong)local_140.ArrayNum * 8;
  FVar20.Data = local_140.AllocatorInstance.Data;
  while( true ) {
    if (local_140.ArrayNum != iVar7) {
      local_1c6[1] = 0;
      `TCheckedPointerIterator<FDS_ChattingCommandTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_1c6 + 1);
    }
    if (FVar20.Data == pFVar17) break;
    lVar4 = *(longlong *)FVar20.Data;
    if (*(char *)(lVar4 + 0x11) == '\0') {
      local_118 = (bool  [8])(**(code **)(*(longlong *)(lVar4 + 0x28) + 8))(lVar4 + 0x28);
      local_110 = lVar4 + 0x12;
      TSet<TTuple<FString,enum_EDS_CommandType>,TDefaultMapHashableKeyFuncs<FString,enum_EDS_CommandType,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,enum_EDS_CommandType_const_&>_>
                ((void *)(this_02 + 0xe8),
                 (TPairInitializer<FString_const_&,EDS_CommandType_const_&> *)(local_1c6 + 2),
                 local_118);
    }
    FVar20.Data = FVar20.Data + 8;
  }
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  this_03 = *(UDS_M_ChatOption **)(this_02 + 0x1a0);
  if (this_03 == (UDS_M_ChatOption *)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this_02,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar10 = Z_Construct_UClass_UDS_M_ChatOption_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar10);
    local_b8._8_8_ = this_02;
    this_03 = (UDS_M_ChatOption *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar15 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar15 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_03 != (UDS_M_ChatOption *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this_03);
    }
    *(UDS_M_ChatOption **)(this_02 + 0x1a0) = this_03;
    if (this_03 == (UDS_M_ChatOption *)0x0) goto LAB_14b9f4444;
  }
  UDS_M_ChatOption::Init(this_03);
  UDS_M_ChatOption::BindGameOption(*(UDS_M_ChatOption **)(this_02 + 0x1a0));
LAB_14b9f4444:
  uVar8 = DS_CommonDataHelper::ChattingMaxWhisperTargetSaveCount();
  pTVar11 = ::operator_new(0xd8);
  pTVar22 = (TTypeCompatibleBytes<FDS_ChatRoomManager> *)&DAT_00000010;
  if (pTVar11 == (TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)0x0) {
    pTVar11 = (TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)0x0;
    local_1b0 = ___xmm_00000000000000000000000000000010;
    pTVar18 = (TTypeCompatibleBytes<FDS_ChatRoomManager> *)&DAT_00000010;
    FStack_1a8.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
  }
  else {
    *(undefined4 *)&pTVar11->_padding_ = 1;
    pTVar18 = &pTVar11->ObjectStorage;
    *(undefined4 *)((longlong)&pTVar11->_padding_ + 4) = 1;
    pTVar11->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFDS_ChatUserCache___00_SharedPointerInternals__6B_;
    (pTVar11->ObjectStorage).Pad[0x18] = '\0';
    (pTVar11->ObjectStorage).Pad[0x19] = '\0';
    (pTVar11->ObjectStorage).Pad[0x1a] = '\0';
    (pTVar11->ObjectStorage).Pad[0x1b] = '\0';
    (pTVar11->ObjectStorage).Pad[0x1c] = '\0';
    (pTVar11->ObjectStorage).Pad[0x1d] = '\0';
    (pTVar11->ObjectStorage).Pad[0x1e] = '\0';
    (pTVar11->ObjectStorage).Pad[0x1f] = '\0';
    (pTVar11->ObjectStorage).Pad[0x20] = '\0';
    (pTVar11->ObjectStorage).Pad[0x21] = '\0';
    (pTVar11->ObjectStorage).Pad[0x22] = '\0';
    (pTVar11->ObjectStorage).Pad[0x23] = '\0';
    (pTVar11->ObjectStorage).Pad[0x24] = '\0';
    (pTVar11->ObjectStorage).Pad[0x25] = '\0';
    (pTVar11->ObjectStorage).Pad[0x26] = '\0';
    (pTVar11->ObjectStorage).Pad[0x27] = '\0';
    (pTVar11->ObjectStorage).Pad[0x40] = '\0';
    (pTVar11->ObjectStorage).Pad[0x41] = '\0';
    (pTVar11->ObjectStorage).Pad[0x42] = '\0';
    (pTVar11->ObjectStorage).Pad[0x43] = '\0';
    (pTVar11->ObjectStorage).Pad[0x44] = '\0';
    (pTVar11->ObjectStorage).Pad[0x45] = '\0';
    (pTVar11->ObjectStorage).Pad[0x46] = '\0';
    (pTVar11->ObjectStorage).Pad[0x47] = '\0';
    (pTVar11->ObjectStorage).Pad[0x50] = '\0';
    (pTVar11->ObjectStorage).Pad[0x51] = '\0';
    (pTVar11->ObjectStorage).Pad[0x52] = '\0';
    (pTVar11->ObjectStorage).Pad[0x53] = '\0';
    (pTVar11->ObjectStorage).Pad[0x54] = '\0';
    (pTVar11->ObjectStorage).Pad[0x55] = '\0';
    (pTVar11->ObjectStorage).Pad[0x56] = '\0';
    (pTVar11->ObjectStorage).Pad[0x57] = '\0';
    (pTVar11->ObjectStorage).Pad[0x68] = '\0';
    (pTVar11->ObjectStorage).Pad[0x69] = '\0';
    (pTVar11->ObjectStorage).Pad[0x6a] = '\0';
    (pTVar11->ObjectStorage).Pad[0x6b] = '\0';
    (pTVar11->ObjectStorage).Pad[0x6c] = '\0';
    (pTVar11->ObjectStorage).Pad[0x6d] = '\0';
    (pTVar11->ObjectStorage).Pad[0x6e] = '\0';
    (pTVar11->ObjectStorage).Pad[0x6f] = '\0';
    (pTVar11->ObjectStorage).Pad[0x70] = '\0';
    (pTVar11->ObjectStorage).Pad[0x71] = '\0';
    (pTVar11->ObjectStorage).Pad[0x72] = '\0';
    (pTVar11->ObjectStorage).Pad[0x73] = '\0';
    (pTVar11->ObjectStorage).Pad[0x74] = '\0';
    (pTVar11->ObjectStorage).Pad[0x75] = '\0';
    (pTVar11->ObjectStorage).Pad[0x76] = '\0';
    (pTVar11->ObjectStorage).Pad[0x77] = '\0';
    (pTVar11->ObjectStorage).Pad[0x90] = '\0';
    (pTVar11->ObjectStorage).Pad[0x91] = '\0';
    (pTVar11->ObjectStorage).Pad[0x92] = '\0';
    (pTVar11->ObjectStorage).Pad[0x93] = '\0';
    (pTVar11->ObjectStorage).Pad[0x94] = '\0';
    (pTVar11->ObjectStorage).Pad[0x95] = '\0';
    (pTVar11->ObjectStorage).Pad[0x96] = '\0';
    (pTVar11->ObjectStorage).Pad[0x97] = '\0';
    (pTVar11->ObjectStorage).Pad[0xa0] = '\0';
    (pTVar11->ObjectStorage).Pad[0xa1] = '\0';
    (pTVar11->ObjectStorage).Pad[0xa2] = '\0';
    (pTVar11->ObjectStorage).Pad[0xa3] = '\0';
    (pTVar11->ObjectStorage).Pad[0xa4] = '\0';
    (pTVar11->ObjectStorage).Pad[0xa5] = '\0';
    (pTVar11->ObjectStorage).Pad[0xa6] = '\0';
    (pTVar11->ObjectStorage).Pad[0xa7] = '\0';
    (pTVar11->ObjectStorage).Pad[8] = '\0';
    (pTVar11->ObjectStorage).Pad[9] = '\0';
    (pTVar11->ObjectStorage).Pad[10] = '\0';
    (pTVar11->ObjectStorage).Pad[0xb] = '\0';
    (pTVar11->ObjectStorage).Pad[0xc] = '\0';
    (pTVar11->ObjectStorage).Pad[0xd] = '\0';
    (pTVar11->ObjectStorage).Pad[0xe] = '\0';
    (pTVar11->ObjectStorage).Pad[0xf] = '\0';
    (pTVar11->ObjectStorage).Pad[0x10] = '\0';
    (pTVar11->ObjectStorage).Pad[0x11] = '\0';
    (pTVar11->ObjectStorage).Pad[0x12] = '\0';
    (pTVar11->ObjectStorage).Pad[0x13] = '\0';
    (pTVar11->ObjectStorage).Pad[0x14] = '\0';
    (pTVar11->ObjectStorage).Pad[0x15] = '\0';
    (pTVar11->ObjectStorage).Pad[0x16] = '\0';
    (pTVar11->ObjectStorage).Pad[0x17] = '\0';
    (pTVar11->ObjectStorage).Pad[0x28] = '\0';
    (pTVar11->ObjectStorage).Pad[0x29] = '\0';
    (pTVar11->ObjectStorage).Pad[0x2a] = '\0';
    (pTVar11->ObjectStorage).Pad[0x2b] = '\0';
    (pTVar11->ObjectStorage).Pad[0x2c] = '\0';
    (pTVar11->ObjectStorage).Pad[0x2d] = '\0';
    (pTVar11->ObjectStorage).Pad[0x2e] = '\0';
    (pTVar11->ObjectStorage).Pad[0x2f] = '\0';
    (pTVar11->ObjectStorage).Pad[0] = 0xe8;
    (pTVar11->ObjectStorage).Pad[1] = '\x03';
    (pTVar11->ObjectStorage).Pad[2] = '\0';
    (pTVar11->ObjectStorage).Pad[3] = '\0';
    (pTVar11->ObjectStorage).Pad[4] = '\x05';
    (pTVar11->ObjectStorage).Pad[5] = '\0';
    (pTVar11->ObjectStorage).Pad[6] = '\0';
    (pTVar11->ObjectStorage).Pad[7] = '\0';
    (pTVar11->ObjectStorage).Pad[0x30] = '\0';
    (pTVar11->ObjectStorage).Pad[0x31] = '\0';
    (pTVar11->ObjectStorage).Pad[0x32] = '\0';
    (pTVar11->ObjectStorage).Pad[0x33] = '\0';
    (pTVar11->ObjectStorage).Pad[0x34] = 0x80;
    (pTVar11->ObjectStorage).Pad[0x35] = '\0';
    (pTVar11->ObjectStorage).Pad[0x36] = '\0';
    (pTVar11->ObjectStorage).Pad[0x37] = '\0';
    (pTVar11->ObjectStorage).Pad[0x3c] = '\0';
    (pTVar11->ObjectStorage).Pad[0x3d] = '\0';
    (pTVar11->ObjectStorage).Pad[0x3e] = '\0';
    (pTVar11->ObjectStorage).Pad[0x3f] = '\0';
    (pTVar11->ObjectStorage).Pad[0x38] = 0xff;
    (pTVar11->ObjectStorage).Pad[0x39] = 0xff;
    (pTVar11->ObjectStorage).Pad[0x3a] = 0xff;
    (pTVar11->ObjectStorage).Pad[0x3b] = 0xff;
    (pTVar11->ObjectStorage).Pad[0x48] = '\0';
    (pTVar11->ObjectStorage).Pad[0x49] = '\0';
    (pTVar11->ObjectStorage).Pad[0x4a] = '\0';
    (pTVar11->ObjectStorage).Pad[0x4b] = '\0';
    (pTVar11->ObjectStorage).Pad[0x4c] = '\0';
    (pTVar11->ObjectStorage).Pad[0x4d] = '\0';
    (pTVar11->ObjectStorage).Pad[0x4e] = '\0';
    (pTVar11->ObjectStorage).Pad[0x4f] = '\0';
    (pTVar11->ObjectStorage).Pad[0x58] = '\0';
    (pTVar11->ObjectStorage).Pad[0x59] = '\0';
    (pTVar11->ObjectStorage).Pad[0x5a] = '\0';
    (pTVar11->ObjectStorage).Pad[0x5b] = '\0';
    (pTVar11->ObjectStorage).Pad[0x5c] = '\0';
    (pTVar11->ObjectStorage).Pad[0x5d] = '\0';
    (pTVar11->ObjectStorage).Pad[0x5e] = '\0';
    (pTVar11->ObjectStorage).Pad[0x5f] = '\0';
    (pTVar11->ObjectStorage).Pad[0x60] = '\0';
    (pTVar11->ObjectStorage).Pad[0x61] = '\0';
    (pTVar11->ObjectStorage).Pad[0x62] = '\0';
    (pTVar11->ObjectStorage).Pad[99] = '\0';
    (pTVar11->ObjectStorage).Pad[100] = '\0';
    (pTVar11->ObjectStorage).Pad[0x65] = '\0';
    (pTVar11->ObjectStorage).Pad[0x66] = '\0';
    (pTVar11->ObjectStorage).Pad[0x67] = '\0';
    (pTVar11->ObjectStorage).Pad[0x78] = '\0';
    (pTVar11->ObjectStorage).Pad[0x79] = '\0';
    (pTVar11->ObjectStorage).Pad[0x7a] = '\0';
    (pTVar11->ObjectStorage).Pad[0x7b] = '\0';
    (pTVar11->ObjectStorage).Pad[0x7c] = '\0';
    (pTVar11->ObjectStorage).Pad[0x7d] = '\0';
    (pTVar11->ObjectStorage).Pad[0x7e] = '\0';
    (pTVar11->ObjectStorage).Pad[0x7f] = '\0';
    (pTVar11->ObjectStorage).Pad[0x80] = '\0';
    (pTVar11->ObjectStorage).Pad[0x81] = '\0';
    (pTVar11->ObjectStorage).Pad[0x82] = '\0';
    (pTVar11->ObjectStorage).Pad[0x83] = '\0';
    (pTVar11->ObjectStorage).Pad[0x84] = 0x80;
    (pTVar11->ObjectStorage).Pad[0x85] = '\0';
    (pTVar11->ObjectStorage).Pad[0x86] = '\0';
    (pTVar11->ObjectStorage).Pad[0x87] = '\0';
    (pTVar11->ObjectStorage).Pad[0x8c] = '\0';
    (pTVar11->ObjectStorage).Pad[0x8d] = '\0';
    (pTVar11->ObjectStorage).Pad[0x8e] = '\0';
    (pTVar11->ObjectStorage).Pad[0x8f] = '\0';
    (pTVar11->ObjectStorage).Pad[0x88] = 0xff;
    (pTVar11->ObjectStorage).Pad[0x89] = 0xff;
    (pTVar11->ObjectStorage).Pad[0x8a] = 0xff;
    (pTVar11->ObjectStorage).Pad[0x8b] = 0xff;
    (pTVar11->ObjectStorage).Pad[0x98] = '\0';
    (pTVar11->ObjectStorage).Pad[0x99] = '\0';
    (pTVar11->ObjectStorage).Pad[0x9a] = '\0';
    (pTVar11->ObjectStorage).Pad[0x9b] = '\0';
    (pTVar11->ObjectStorage).Pad[0x9c] = '\0';
    (pTVar11->ObjectStorage).Pad[0x9d] = '\0';
    (pTVar11->ObjectStorage).Pad[0x9e] = '\0';
    (pTVar11->ObjectStorage).Pad[0x9f] = '\0';
    (pTVar11->ObjectStorage).Pad[0xa8] = '\0';
    (pTVar11->ObjectStorage).Pad[0xa9] = '\0';
    (pTVar11->ObjectStorage).Pad[0xaa] = '\0';
    (pTVar11->ObjectStorage).Pad[0xab] = '\0';
    (pTVar11->ObjectStorage).Pad[0xac] = '\0';
    (pTVar11->ObjectStorage).Pad[0xad] = '\0';
    (pTVar11->ObjectStorage).Pad[0xae] = '\0';
    (pTVar11->ObjectStorage).Pad[0xaf] = '\0';
    (pTVar11->ObjectStorage).Pad[0xb0] = '\0';
    (pTVar11->ObjectStorage).Pad[0xb1] = '\0';
    (pTVar11->ObjectStorage).Pad[0xb2] = '\0';
    (pTVar11->ObjectStorage).Pad[0xb3] = '\0';
    (pTVar11->ObjectStorage).Pad[0xb4] = '\0';
    (pTVar11->ObjectStorage).Pad[0xb5] = '\0';
    (pTVar11->ObjectStorage).Pad[0xb6] = '\0';
    (pTVar11->ObjectStorage).Pad[0xb7] = '\0';
    (pTVar11->ObjectStorage).Pad[0xb8] = '\0';
    (pTVar11->ObjectStorage).Pad[0xb9] = '\0';
    (pTVar11->ObjectStorage).Pad[0xba] = '\0';
    (pTVar11->ObjectStorage).Pad[0xbb] = '\0';
    (pTVar11->ObjectStorage).Pad[0xbc] = '\0';
    (pTVar11->ObjectStorage).Pad[0xbd] = '\0';
    (pTVar11->ObjectStorage).Pad[0xbe] = '\0';
    (pTVar11->ObjectStorage).Pad[0xbf] = '\0';
    (pTVar11->ObjectStorage).Pad[0xc0] = '\0';
    (pTVar11->ObjectStorage).Pad[0xc1] = '\0';
    (pTVar11->ObjectStorage).Pad[0xc2] = '\0';
    (pTVar11->ObjectStorage).Pad[0xc3] = '\0';
    (pTVar11->ObjectStorage).Pad[0xc4] = '\0';
    (pTVar11->ObjectStorage).Pad[0xc5] = '\0';
    (pTVar11->ObjectStorage).Pad[0xc6] = '\0';
    (pTVar11->ObjectStorage).Pad[199] = '\0';
    if ((pTVar18 == (TTypeCompatibleBytes<FDS_ChatRoomManager> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    LOCK();
    *(int *)&pTVar11->_padding_ = (int)pTVar11->_padding_ + 1;
    UNLOCK();
    FStack_1a8.ReferenceController = (TReferenceControllerBase<1> *)pTVar11;
    local_1b0 = pTVar18;
  }
  ppTVar1 = (TTypeCompatibleBytes<FDS_ChatRoomManager> **)(this_02 + 0x160);
  if (ppTVar1 != &local_1b0) {
    *ppTVar1 = pTVar18;
    local_1b0 = (TTypeCompatibleBytes<FDS_ChatRoomManager> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(this_02 + 0x168),&FStack_1a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1a8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar11);
  if ((*ppTVar1 == (TTypeCompatibleBytes<FDS_ChatRoomManager> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar18 = *ppTVar1;
  pTVar18->Pad[0] = 0xe8;
  pTVar18->Pad[1] = '\x03';
  pTVar18->Pad[2] = '\0';
  pTVar18->Pad[3] = '\0';
  *(uint *)(pTVar18->Pad + 4) = uVar8;
  if (((int)uVar8 < 1) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3672835107011428362>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Chat\\DS_ChatUserCache.cpp"
                         ,10,"MaxRecentWhispers > 0"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)pTVar18->Pad;
  if ((uint)(*(int *)(pTVar18->Pad + 0x10) - *(int *)(pTVar18->Pad + 0x3c)) < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar3);
    }
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(pTVar18->Pad + 8),uVar3);
    if (uVar3 < 4) {
      iVar7 = 1;
    }
    else {
      uVar21 = (ulonglong)((uVar3 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_1b8 = (FScriptContainerElement *)CONCAT44(local_1b8._4_4_,(int)lVar4);
      iVar7 = 1 << ((byte)lVar4 & 0x1f);
    }
    if ((*(int *)(pTVar18->Pad + 0x50) == 0) || (*(int *)(pTVar18->Pad + 0x50) < iVar7)) {
      *(int *)(pTVar18->Pad + 0x50) = iVar7;
      TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
                *)(pTVar18->Pad + 8));
    }
  }
  uVar3 = *(uint *)pTVar18->Pad;
  if ((uint)(*(int *)(pTVar18->Pad + 0x60) - *(int *)(pTVar18->Pad + 0x8c)) < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar3);
    }
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(pTVar18->Pad + 0x58),uVar3);
    if (uVar3 < 4) {
      iVar7 = 1;
    }
    else {
      uVar21 = (ulonglong)((uVar3 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_1c0 = CONCAT44(local_1c0._4_4_,(int)lVar4);
      iVar7 = 1 << ((byte)lVar4 & 0x1f);
    }
    if ((*(int *)(pTVar18->Pad + 0xa0) == 0) || (*(int *)(pTVar18->Pad + 0xa0) < iVar7)) {
      *(int *)(pTVar18->Pad + 0xa0) = iVar7;
      TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
                *)(pTVar18->Pad + 0x58));
    }
  }
  uVar3 = *(uint *)pTVar18->Pad;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (*(int *)(pTVar18->Pad + 0xc4) < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,(ForAnyElementType *)(pTVar18->Pad + 0xb8),*(int *)(pTVar18->Pad + 0xc0),
               (int *)(pTVar18->Pad + 0xc4));
  }
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  if (*(int *)(pTVar18->Pad + 0xb4) < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar8,(ForAnyElementType *)(pTVar18->Pad + 0xa8),*(int *)(pTVar18->Pad + 0xb0),
               (int *)(pTVar18->Pad + 0xb4));
  }
  iVar7 = DS_CommonDataHelper::ChattingMaxWhisperListSaveCount();
  iVar9 = DS_CommonDataHelper::ChattingMaxGroupJoinCount();
  pTVar11 = ::operator_new(0x1a8);
  if (pTVar11 == (TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)0x0) {
    pTVar11 = (TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)0x0;
    local_1a0 = ___xmm_00000000000000000000000000000010;
    FStack_198.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
    pTVar18 = (TTypeCompatibleBytes<FDS_ChatRoomManager> *)&DAT_00000010;
  }
  else {
    pTVar11 = SharedPointerInternals::TIntrusiveReferenceController<FDS_ChatRoomManager,1>::
              TIntrusiveReferenceController<FDS_ChatRoomManager,1><>(pTVar11);
    pTVar18 = &pTVar11->ObjectStorage;
    if ((pTVar18 == (TTypeCompatibleBytes<FDS_ChatRoomManager> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_1a0 = pTVar18;
    FStack_198.ReferenceController = (TReferenceControllerBase<1> *)pTVar11;
    if (pTVar11 != (TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)0x0) {
      LOCK();
      *(int *)&pTVar11->_padding_ = (int)pTVar11->_padding_ + 1;
      UNLOCK();
    }
  }
  ppTVar1 = (TTypeCompatibleBytes<FDS_ChatRoomManager> **)(this_02 + 0x170);
  if (ppTVar1 != &local_1a0) {
    *ppTVar1 = pTVar18;
    local_1a0 = (TTypeCompatibleBytes<FDS_ChatRoomManager> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(this_02 + 0x178),&FStack_198);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_198.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar11);
  if ((*ppTVar1 == (TTypeCompatibleBytes<FDS_ChatRoomManager> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_01 = (FDS_ChatRoomManager *)*ppTVar1;
  this_01->MaxWhisperRooms = iVar7;
  this_01->MaxGroupRooms = iVar9;
  if ((iVar7 < 1) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_166746886881935351>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Chat\\DS_ChatRoomManager.cpp"
                         ,9,"MaxWhisperRooms > 0"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this_01->MaxGroupRooms < 1) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_166746886881935350>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Chat\\DS_ChatRoomManager.cpp"
                         ,10,"MaxGroupRooms > 0"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FDS_ChatRoomManager::InitChatRoomSlots(this_01,Whisper,this_01->MaxWhisperRooms);
  FDS_ChatRoomManager::InitChatRoomSlots(this_01,Group,this_01->MaxGroupRooms);
  FDS_ChatRoomManager::InitChatRoomSlots(this_01,Party,1);
  FDS_ChatRoomManager::InitChatRoomSlots(this_01,RaidParty,1);
  iVar7 = DS_CommonDataHelper::ChattingCustomTabCount();
  FStack_188.ReferenceController = ::operator_new(0x38);
  pTVar11 = (TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)0x0;
  if ((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController ==
      (TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)0x0) {
    local_190 = ___xmm_00000000000000000000000000000010;
    pTVar18 = (TTypeCompatibleBytes<FDS_ChatRoomManager> *)&DAT_00000010;
    FStack_188.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
    pTVar19 = pTVar11;
  }
  else {
    *(undefined4 *)
     &((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
      _padding_ = 1;
    pTVar18 = &((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)
               FStack_188.ReferenceController)->ObjectStorage;
    *(undefined4 *)
     ((longlong)
      &((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
       _padding_ + 4) = 1;
    ((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    _padding_ = (longlong)
                &
                ___7__TIntrusiveReferenceController_VFDS_ChatCustomTabManager___00_SharedPointerInternals__6B_
    ;
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[1] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[2] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[3] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[4] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[5] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[6] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[7] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[8] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[9] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[10] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0xb] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0xc] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0xd] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0xe] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0xf] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x10] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x11] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x12] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x13] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x14] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x15] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x16] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x17] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x18] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x19] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x1a] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x1b] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x1c] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x1d] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x1e] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x1f] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x20] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x21] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x22] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x23] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x24] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x25] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x26] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController)->
    ObjectStorage).Pad[0x27] = '\0';
    if ((pTVar18 == (TTypeCompatibleBytes<FDS_ChatRoomManager> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    LOCK();
    *(int *)&((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController
             )->_padding_ =
         (int)((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)
              FStack_188.ReferenceController)->_padding_ + 1;
    UNLOCK();
    pTVar19 = (TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_188.ReferenceController
    ;
    local_190 = pTVar18;
  }
  ppTVar1 = (TTypeCompatibleBytes<FDS_ChatRoomManager> **)(this_02 + 0x180);
  if (ppTVar1 != &local_190) {
    *ppTVar1 = pTVar18;
    local_190 = (TTypeCompatibleBytes<FDS_ChatRoomManager> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(this_02 + 0x188),&FStack_188);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_188.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar19);
  if ((*ppTVar1 == (TTypeCompatibleBytes<FDS_ChatRoomManager> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FDS_ChatCustomTabManager::Init((FDS_ChatCustomTabManager *)*ppTVar1,iVar7);
  iVar7 = DS_CommonDataHelper::ChattingMaxFavoriteCount();
  FStack_178.ReferenceController = ::operator_new(0x28);
  if ((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController ==
      (TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)0x0) {
    local_180 = ___xmm_00000000000000000000000000000010;
    FStack_178.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
  }
  else {
    *(undefined4 *)
     &((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
      _padding_ = 1;
    pTVar22 = &((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)
               FStack_178.ReferenceController)->ObjectStorage;
    *(undefined4 *)
     ((longlong)
      &((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
       _padding_ + 4) = 1;
    ((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    _padding_ = (longlong)
                &
                ___7__TIntrusiveReferenceController_VFDS_ChatBookmarkManager___00_SharedPointerInternals__6B_
    ;
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[0] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[1] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[2] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[3] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[4] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[5] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[6] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[7] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[8] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[9] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[10] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[0xb] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[0xc] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[0xd] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[0xe] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[0xf] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[0x10] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[0x11] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[0x12] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[0x13] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[0x14] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[0x15] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[0x16] = '\0';
    (((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController)->
    ObjectStorage).Pad[0x17] = '\0';
    if ((pTVar22 == (TTypeCompatibleBytes<FDS_ChatRoomManager> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    LOCK();
    *(int *)&((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController
             )->_padding_ =
         (int)((TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)
              FStack_178.ReferenceController)->_padding_ + 1;
    UNLOCK();
    pTVar11 = (TIntrusiveReferenceController<FDS_ChatRoomManager,1> *)FStack_178.ReferenceController
    ;
    local_180 = pTVar22;
  }
  ppTVar1 = (TTypeCompatibleBytes<FDS_ChatRoomManager> **)(this_02 + 400);
  if (ppTVar1 != &local_180) {
    *ppTVar1 = pTVar22;
    local_180 = (TTypeCompatibleBytes<FDS_ChatRoomManager> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(this_02 + 0x198),&FStack_178);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_178.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar11);
  if ((*ppTVar1 == (TTypeCompatibleBytes<FDS_ChatRoomManager> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FDS_ChatBookmarkManager::Init((FDS_ChatBookmarkManager *)*ppTVar1,iVar7);
  pUVar12 = UDS_PartyEvent::GetEvent();
  if (pUVar12 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar12->OnLeftParty,
               (void *)this_02);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ChattingManager>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar12->OnLeftParty,(UDS_ChattingManager *)(local_170 + 8),(pmf_ffdfacde)this_02);
  }
  pUVar13 = UDS_DungeonEvent::GetEvent();
  if (pUVar13 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar13->OnLeftRaidParty,
               (void *)this_02);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ChattingManager>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar13->OnLeftRaidParty,(UDS_ChattingManager *)local_170,(pmf_ffdfacde)this_02);
  }
  return;
}

// InitChatOption @ 14b9f74b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_ChattingManager::InitChatOption(UDS_ChattingManager *this)

{
  UClass *pUVar1;
  UDS_M_ChatOption *this_00;
  longlong *plVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this_00 = (this->ChatOption).field0_0x0.DebugPtr;
  if (this_00 == (UDS_M_ChatOption *)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = Z_Construct_UClass_UDS_M_ChatOption_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar1);
    local_98._8_8_ = this;
    this_00 = (UDS_M_ChatOption *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar2 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar2 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UDS_M_ChatOption *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->ChatOption).field0_0x0.DebugPtr = this_00;
    if (this_00 == (UDS_M_ChatOption *)0x0) {
      return;
    }
  }
  UDS_M_ChatOption::Init(this_00);
  UDS_M_ChatOption::BindGameOption((this->ChatOption).field0_0x0.DebugPtr);
  return;
}

// InitChattingCommonDataMap @ 14b9f7810

void __thiscall UDS_ChattingManager::InitChattingCommonDataMap(UDS_ChattingManager *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  EDS_ChattingType EVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  TMap<EDS_ChattingType,FDS_ChattingCommonData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ChattingType,FDS_ChattingCommonData,0>_>
  *this_00;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  EDS_ChattingType local_res10 [8];
  uint local_res18;
  TArray<FDS_ChattingBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_d8;
  TArray<FDS_ChattingCommandTableRow_const_*,TSizedDefaultAllocator<32>_> local_c8;
  TMap<EDS_ChattingType,FDS_ChattingCommonData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_ChattingType,FDS_ChattingCommonData,0>_>
  *local_b8;
  EDS_ChattingType *local_b0;
  FDS_ChattingCommonData *local_a8;
  FDS_ChattingCommonData local_98;
  
  FDS_ChattingCommandTableRow::GetAll(&local_c8);
  FDS_ChattingBaseTableRow::GetAll(&local_d8);
  this_00 = &this->ChattingCommonDataMap;
  local_b8 = this_00;
  TSet<TTuple<enum_EDS_ChattingType,FDS_ChattingCommonData>,TDefaultMapHashableKeyFuncs<enum_EDS_ChattingType,FDS_ChattingCommonData,0>,FDefaultSetAllocator>
  ::Reset(this_00);
  TSet<TTuple<enum_EDS_ChattingType,FDS_ChattingCommonData>,TDefaultMapHashableKeyFuncs<enum_EDS_ChattingType,FDS_ChattingCommonData,0>,FDefaultSetAllocator>
  ::Reserve(this_00,local_d8.ArrayNum);
  uVar6 = (ulonglong)local_d8.ArrayNum;
  uVar10 = 0;
  local_res18 = local_d8.ArrayNum;
  pFVar1 = local_d8.AllocatorInstance.Data + uVar6 * 8;
  FVar9.Data = local_d8.AllocatorInstance.Data;
  while( true ) {
    if (local_d8.ArrayNum != (uint)uVar6) {
      `TCheckedPointerIterator<FDS_ChattingBaseTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (FVar9.Data == pFVar1) break;
    EVar3 = (*(FDS_ChattingBaseTableRow **)FVar9.Data)->ChattingType;
    if ((EVar3 != None) && (EVar3 != Max)) {
      uVar10 = uVar10 | 1L << ((ulonglong)EVar3 & 0x3f);
      FDS_ChattingCommonData::FDS_ChattingCommonData
                (&local_98,*(FDS_ChattingBaseTableRow **)FVar9.Data);
      iVar5 = local_c8.ArrayNum;
      pFVar2 = local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayNum * 8;
      FVar8.Data = local_c8.AllocatorInstance.Data;
      while( true ) {
        if (local_c8.ArrayNum != iVar5) {
          `TCheckedPointerIterator<FDS_ChattingCommandTableRow_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (FVar8.Data == pFVar2) break;
        lVar4 = *(longlong *)FVar8.Data;
        if (*(EDS_ChattingType *)(lVar4 + 0x11) == EVar3) {
          if (local_98.Commands.ArrayNum == local_98.Commands.ArrayMax) {
            local_98.Commands.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_98.Commands.AllocatorInstance,&local_98.Commands.ArrayMax);
          }
          lVar7 = (longlong)local_98.Commands.ArrayNum;
          local_98.Commands.ArrayNum = local_98.Commands.ArrayNum + 1;
          *(undefined ***)(local_98.Commands.AllocatorInstance.Data + lVar7 * 0x10) =
               &___7FDS_StringBaseID__6B_;
          *(undefined8 *)(local_98.Commands.AllocatorInstance.Data + lVar7 * 0x10 + 8) =
               *(undefined8 *)(lVar4 + 0x30);
        }
        FVar8.Data = FVar8.Data + 8;
      }
      local_res10[0] = local_98.ChattingType;
      local_b0 = local_res10;
      local_a8 = &local_98;
      TSet<TTuple<enum_EDS_ChattingType,FDS_ChattingCommonData>,TDefaultMapHashableKeyFuncs<enum_EDS_ChattingType,FDS_ChattingCommonData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_ChattingType_&&,FDS_ChattingCommonData_&>_>
                (local_b8,(TPairInitializer<EDS_ChattingType_&&,FDS_ChattingCommonData_&> *)
                          &stack0x00000020,(bool *)&local_b0);
      if (local_98.Commands.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Commands.AllocatorInstance.Data);
      }
    }
    uVar6 = (ulonglong)local_res18;
    FVar9.Data = FVar9.Data + 8;
  }
  (this->ChatStateData).InputChattingType = Zone;
  (this->ChatStateData).ChattingTabType = Total;
  (this->ChatStateData).SubTabIndex = -1;
  (this->ChatStateData).ChattingTypeFlagAll = uVar10;
  (this->ChatStateData).ChattingTypeFlag = uVar10;
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  return;
}

// InitChattingExtraCommandMap @ 14b9f79e0

void __thiscall UDS_ChattingManager::InitChattingExtraCommandMap(UDS_ChattingManager *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  ForAnyElementType FVar4;
  undefined1 local_res8 [16];
  TArray<FDS_ChattingCommandTableRow_const_*,TSizedDefaultAllocator<32>_> local_38;
  undefined8 local_28;
  longlong local_20;
  
  TSet<TTuple<FString,enum_EDS_CommandType>,TDefaultMapHashableKeyFuncs<FString,enum_EDS_CommandType,0>,FDefaultSetAllocator>
  ::Reset(&this->ChattingExtraCommandMap);
  FDS_ChattingCommandTableRow::GetAll(&local_38);
  iVar3 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar4.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FDS_ChattingCommandTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar4.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar4.Data;
    if (*(char *)(lVar2 + 0x11) == '\0') {
      local_28 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 8))(lVar2 + 0x28);
      local_20 = lVar2 + 0x12;
      TSet<TTuple<FString,enum_EDS_CommandType>,TDefaultMapHashableKeyFuncs<FString,enum_EDS_CommandType,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,enum_EDS_CommandType_const_&>_>
                (&this->ChattingExtraCommandMap,
                 (TPairInitializer<FString_const_&,EDS_CommandType_const_&> *)(local_res8 + 8),
                 (bool *)&local_28);
    }
    FVar4.Data = FVar4.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// IsShowChattingData @ 14b9f9d90

bool __thiscall
UDS_ChattingManager::IsShowChattingData
          (UDS_ChattingManager *this,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr> param_1)

{
  FDS_ChatBookmarkManager *this_00;
  FDS_ChatRoomManager *this_01;
  TReferenceControllerBase<1> *pTVar1;
  FDS_ChatUserInfo *pFVar2;
  longlong lVar3;
  code *pcVar4;
  FDS_ChatRoomData *pFVar5;
  FDS_ChatBookmarkData *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  UObject *pUVar10;
  UDS_ChattingData *this_02;
  long64 lVar11;
  int iVar12;
  EDS_ChattingTabType EVar13;
  FWeakObjectPtr local_res10;
  TSharedPtr<FDS_ChatRoomData,1> local_28;
  TSharedPtr<FDS_ChatBookmarkData,1> local_18;
  
  local_res10 = param_1.WeakPtr;
  pUVar10 = FWeakObjectPtr::Get(&local_res10);
  if (((this->ChatStateData).ChattingTypeFlag >> ((ulonglong)(byte)pUVar10[2].field_0x10 & 0x3f) & 1
      ) == 0) {
    return false;
  }
  iVar12 = (this->ChatStateData).SubTabIndex;
  EVar13 = (this->ChatStateData).ChattingTabType;
  if (EVar13 == Favorite) {
    this_00 = (this->ChatBookmarkManager).Object;
    if (this_00 == (FDS_ChatBookmarkManager *)0x0) {
      local_18.Object = (FDS_ChatBookmarkData *)0x0;
      local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      FDS_ChatBookmarkManager::GetBookmarkData(this_00,&local_18,iVar12);
    }
    pFVar6 = local_18.Object;
    if (local_18.Object != (FDS_ChatBookmarkData *)0x0) {
      if ((local_18.Object == (FDS_ChatBookmarkData *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      if ((((pFVar6->ChattingTabType != None) && (-1 < pFVar6->BookmarkIndex)) &&
          (-1 < pFVar6->SubTabIndex)) &&
         (iVar9 = DS_CommonDataHelper::ChattingMaxFavoriteCount(), pFVar6->BookmarkIndex < iVar9)) {
        EVar13 = pFVar6->ChattingTabType;
        iVar12 = pFVar6->SubTabIndex;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (EVar13 == Whisper) {
    this_01 = (this->ChatRoomManager).Object;
    if (this_01 == (FDS_ChatRoomManager *)0x0) {
      local_28.Object = (FDS_ChatRoomData *)0x0;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      FDS_ChatRoomManager::FindChatRoom(this_01,&local_28,Whisper,iVar12);
    }
    pFVar5 = local_28.Object;
    if (local_28.Object != (FDS_ChatRoomData *)0x0) {
      if ((local_28.Object == (FDS_ChatRoomData *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      if ((pFVar5->ChattingTabType != None) &&
         ((pFVar5->ChatConversation).Object != (FDS_ChatConversation *)0x0)) {
        pTVar1 = (pFVar5->Whisper).SharedReferenceCount.ReferenceController;
        pFVar2 = (pFVar5->Whisper).Object;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pFVar2 != (FDS_ChatUserInfo *)0x0) {
          this_02 = (UDS_ChattingData *)FWeakObjectPtr::Get(&local_res10);
          lVar11 = UDS_ChattingData::GetWhisperTargetUID(this_02);
          lVar3 = pFVar2->PlayerUID;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_28.SharedReferenceCount.ReferenceController);
          return lVar11 == lVar3;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return true;
}

// IsValidCustomIndex @ 14b9fa3e0

bool __thiscall UDS_ChattingManager::IsValidCustomIndex(UDS_ChattingManager *this,int param_1)

{
  FDS_ChatCustomTabManager *pFVar1;
  
  pFVar1 = (this->ChatCustomTabManager).Object;
  if (((pFVar1 != (FDS_ChatCustomTabManager *)0x0) && (-1 < param_1)) &&
     (param_1 < pFVar1->MaxCustomTabCount)) {
    return param_1 < (pFVar1->CustomDatas).ArrayNum;
  }
  return false;
}

// MarkChatRoomMessageAsRead @ 14b9fc600

void __thiscall
UDS_ChattingManager::MarkChatRoomMessageAsRead
          (UDS_ChattingManager *this,EDS_ChattingTabType param_1,int param_2)

{
  FDS_ChatRoomManager *this_00;
  FDS_ChatConversation *pFVar1;
  code *pcVar2;
  FDS_ChatRoomData *pFVar3;
  bool bVar4;
  TSharedPtr<FDS_ChatRoomData,1> local_28;
  TSharedPtr<FDS_ChatConversation,1> local_18;
  
  this_00 = (this->ChatRoomManager).Object;
  if (this_00 == (FDS_ChatRoomManager *)0x0) {
    local_28.Object = (FDS_ChatRoomData *)0x0;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    FDS_ChatRoomManager::FindChatRoom(this_00,&local_28,param_1,param_2);
  }
  pFVar3 = local_28.Object;
  if (local_28.Object != (FDS_ChatRoomData *)0x0) {
    if (local_28.Object == (FDS_ChatRoomData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((pFVar3->ChattingTabType != None) &&
       (pFVar1 = (pFVar3->ChatConversation).Object, pFVar1 != (FDS_ChatConversation *)0x0)) {
      local_18.SharedReferenceCount.ReferenceController =
           (pFVar3->ChatConversation).SharedReferenceCount.ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18.Object = pFVar1;
      RequestMarkConversationAsRead(this,&local_18);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// MarkCustomTabMessageAsRead @ 14b9fc6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::MarkCustomTabMessageAsRead(UDS_ChattingManager *this,int param_1)

{
  TSharedPtr<FDS_ChatRoomManager,1> *this_00;
  FDS_ChatCustomTabManager *this_01;
  ulonglong uVar1;
  FDS_ChatConversation *pFVar2;
  code *pcVar3;
  FDS_ChatRoomData *pFVar4;
  FDS_ChatCustomData *pFVar5;
  bool bVar6;
  int iVar7;
  UDS_LogManager *pUVar8;
  FDS_ChatRoomManager *pFVar9;
  int iVar10;
  undefined1 auStackY_1d8 [32];
  TSharedPtr<FDS_ChatRoomData,1> local_1a8;
  TSharedPtr<FDS_ChatCustomData,1> local_198;
  TSharedPtr<FDS_ChatRoomData,1> local_188;
  TSharedPtr<FDS_ChatConversation,1> local_178;
  TSharedPtr<FDS_ChatConversation,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  this_01 = (this->ChatCustomTabManager).Object;
  if (this_01 == (FDS_ChatCustomTabManager *)0x0) {
    local_198.Object = (FDS_ChatCustomData *)0x0;
    local_198.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    FDS_ChatCustomTabManager::GetCustomData(this_01,&local_198,param_1);
  }
  pFVar5 = local_198.Object;
  if (local_198.Object != (FDS_ChatCustomData *)0x0) {
    if ((local_198.Object == (FDS_ChatCustomData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar1 = pFVar5->ChatFilterFlags;
    if (uVar1 != 0) {
      this_00 = &this->ChatRoomManager;
      if (this_00->Object == (FDS_ChatRoomManager *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 != (UDS_LogManager *)0x0) {
          pUVar8 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_ChattingManager::MarkCustomTabMessageAsRead",0x2f,Yes);
          UDS_LogManager::PrintLog
                    (pUVar8,1,Warning,local_158.Ptr,0x958,L"ChatRoomManager.IsValid() == false");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
      else if ((uVar1 >> 10 & 1) == 0) {
        pFVar9 = TSharedPtr<FDS_ChatRoomManager,1>::operator->(this_00);
        iVar7 = FDS_ChatRoomManager::GetMaxChatRoomCount(pFVar9,Group);
        iVar10 = 0;
        if (0 < iVar7) {
          do {
            if ((uVar1 >> ((ulonglong)(iVar10 + 0xeU & 0xff) & 0x3f) & 1) != 0) {
              if (this_00->Object == (FDS_ChatRoomManager *)0x0) {
                local_1a8.Object = (FDS_ChatRoomData *)0x0;
                local_1a8.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
              }
              else {
                FDS_ChatRoomManager::FindChatRoom(this_00->Object,&local_1a8,Group,iVar10);
              }
              pFVar4 = local_1a8.Object;
              if (local_1a8.Object != (FDS_ChatRoomData *)0x0) {
                if ((local_1a8.Object == (FDS_ChatRoomData *)0x0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                if ((pFVar4->ChattingTabType != None) &&
                   (pFVar2 = (pFVar4->ChatConversation).Object,
                   pFVar2 != (FDS_ChatConversation *)0x0)) {
                  local_168.SharedReferenceCount.ReferenceController =
                       (pFVar4->ChatConversation).SharedReferenceCount.ReferenceController;
                  if (local_168.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_168.SharedReferenceCount.ReferenceController)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  local_168.Object = pFVar2;
                  RequestMarkConversationAsRead(this,&local_168);
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_1a8.SharedReferenceCount.ReferenceController);
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar7);
        }
      }
      else {
        pFVar9 = TSharedPtr<FDS_ChatRoomManager,1>::operator->(this_00);
        iVar7 = FDS_ChatRoomManager::GetMaxChatRoomCount(pFVar9,Group);
        iVar10 = 0;
        if (0 < iVar7) {
          do {
            if ((this_00->Object == (FDS_ChatRoomManager *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FDS_ChatRoomManager::FindChatRoom(this_00->Object,&local_188,Group,iVar10);
            pFVar4 = local_188.Object;
            if (local_188.Object != (FDS_ChatRoomData *)0x0) {
              if ((local_188.Object == (FDS_ChatRoomData *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if ((pFVar4->ChattingTabType != None) &&
                 (pFVar2 = (pFVar4->ChatConversation).Object, pFVar2 != (FDS_ChatConversation *)0x0)
                 ) {
                local_178.SharedReferenceCount.ReferenceController =
                     (pFVar4->ChatConversation).SharedReferenceCount.ReferenceController;
                if (local_178.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_178.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_178.Object = pFVar2;
                RequestMarkConversationAsRead(this,&local_178);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_188.SharedReferenceCount.ReferenceController);
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar7);
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  return;
}

// OnAddGroupMember @ 14b9fcd40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::OnAddGroupMember
          (UDS_ChattingManager *this,FString *param_1,long64 param_2,FString *param_3,int param_4,
          int param_5,bool param_6)

{
  int iVar1;
  FScriptContainerElement *_Src;
  FDS_ChatRoomManager *pFVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FDS_ChatUserInfo *pFVar5;
  UDS_LogManager *pUVar6;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  undefined1 auStackY_238 [32];
  FDS_ChatUserInfo local_1d8;
  long64 local_1a8;
  TSharedPtr<FDS_ChatUserInfo,1> local_1a0;
  FString local_190;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1d8.UserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.Nickname.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.UserID.Data.ArrayNum = 0;
  local_1d8.UserID.Data.ArrayMax = 0;
  local_1d8.PlayerUID = 0;
  local_1d8.Nickname.Data.ArrayNum = 0;
  local_1d8.Nickname.Data.ArrayMax = 0;
  local_1d8.CharID = 0;
  local_1d8.CharLevel = 0;
  local_1a8 = param_2;
  pFVar5 = (FDS_ChatUserInfo *)DS_Util::FromInt64(&local_190,param_2);
  if (&local_1d8 != pFVar5) {
    if (local_1d8.UserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.UserID.Data.AllocatorInstance.Data);
    }
    local_1d8.UserID.Data.AllocatorInstance.Data = (pFVar5->UserID).Data.AllocatorInstance.Data;
    (pFVar5->UserID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.UserID.Data.ArrayNum = (pFVar5->UserID).Data.ArrayNum;
    local_1d8.UserID.Data.ArrayMax = (pFVar5->UserID).Data.ArrayMax;
    (pFVar5->UserID).Data.ArrayNum = 0;
    (pFVar5->UserID).Data.ArrayMax = 0;
  }
  if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_190.Data.AllocatorInstance.Data);
  }
  local_1d8.PlayerUID = param_2;
  if (&local_1d8.Nickname != param_3) {
    iVar1 = (param_3->Data).ArrayNum;
    _Src = (param_3->Data).AllocatorInstance.Data;
    local_1d8.Nickname.Data.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_1d8.Nickname.Data.ArrayMax == 0)) {
      local_1d8.Nickname.Data.ArrayNum = 0;
      local_1d8.Nickname.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,local_1d8.Nickname.Data.ArrayMax,(ForAnyElementType *)&local_1d8.Nickname
                 ,iVar1,&local_1d8.Nickname.Data.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_1d8.Nickname.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
      }
    }
  }
  local_1d8.CharLevel = param_5;
  local_1d8.CharID = param_4;
  AddOrUpdateChatUserInfo(this,&local_1a0,&local_1d8);
  if (local_1a0.Object == (FDS_ChatUserInfo *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_ChattingManager::OnAddGroupMember",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_178.Ptr,0x545,L"chatUserInfo.IsValid() == false");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
    }
  }
  else {
    pFVar2 = (this->ChatRoomManager).Object;
    if ((pFVar2 == (FDS_ChatRoomManager *)0x0) ||
       (pTVar7 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                 ::Find((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                         *)&pFVar2->IndexByGroupID,param_1),
       pTVar7 == (TWeakPtr<FDS_ChatRoomData,1> *)0x0)) {
LAB_14b9fcf4e:
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar8 = (pTVar7->WeakReferenceCount).ReferenceController;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar8->SharedReferenceCount;
        do {
          if (aVar3 == (atomic<int>)0x0) goto LAB_14b9fcf4e;
          LOCK();
          aVar4 = pTVar8->SharedReferenceCount;
          bVar9 = aVar3 == aVar4;
          if (bVar9) {
            pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar4 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar4;
        } while (!bVar9);
        if (pTVar7->Object != (FDS_ChatRoomData *)0x0) {
          FDS_ChatRoomData::AddGroupMember(pTVar7->Object,&local_1a0);
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 != (UDS_LogManager *)0x0) {
            pUVar6 = UDS_LogManager::GetInst();
            local_178._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_178,"UDS_ChattingManager::OnAddGroupMember",0x25,Yes);
            UDS_LogManager::PrintLog
                      (pUVar6,1,Display,local_178.Ptr,0x54e,
                       L"[Chat] OnAddGroupMember - GroupID : %s, PlayerUID : %lld, Nickname : %s, CharID : %d, CharLevel : %d, IsKicked : %d"
                      );
            if ((void *)local_178._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_178._padding_);
            }
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a0.SharedReferenceCount.ReferenceController);
  if (local_1d8.Nickname.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Nickname.Data.AllocatorInstance.Data);
  }
  if (local_1d8.UserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.UserID.Data.AllocatorInstance.Data);
  }
  return;
}

// OnChangeGroupChatRoomInfo @ 14b9fd090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::OnChangeGroupChatRoomInfo
          (UDS_ChattingManager *this,FString *param_1,FString *param_2,int param_3,bool param_4)

{
  undefined1 *puVar1;
  FDS_EventDelegate<bool_const_,FString_const_&> *this_00;
  FDS_ChatRoomManager *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDS_ChatConversation *pFVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  atomic<int> aVar8;
  bool bVar9;
  char cVar10;
  atomic<int> aVar11;
  uint uVar12;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar13;
  UDS_LogManager *pUVar14;
  UDS_ChatEvent *pUVar15;
  TReferenceControllerBase<1> *pTVar16;
  longlong lVar17;
  uint uVar18;
  FDS_ChatRoomData *pFVar19;
  bool bVar20;
  undefined1 auStackY_2e8 [32];
  FDestructionSentinel local_2a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  pFVar2 = (this->ChatRoomManager).Object;
  if ((pFVar2 == (FDS_ChatRoomManager *)0x0) ||
     (pTVar13 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                ::Find((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                        *)&pFVar2->IndexByGroupID,param_1),
     pTVar13 == (TWeakPtr<FDS_ChatRoomData,1> *)0x0)) {
    pTVar16 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar16 = (pTVar13->WeakReferenceCount).ReferenceController;
    pFVar19 = (FDS_ChatRoomData *)0x0;
    if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
      aVar8 = pTVar16->SharedReferenceCount;
      do {
        if (aVar8 == (atomic<int>)0x0) {
          pTVar16 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14b9fd106;
        }
        LOCK();
        aVar11 = pTVar16->SharedReferenceCount;
        bVar20 = aVar8 == aVar11;
        if (bVar20) {
          pTVar16->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
          aVar11 = aVar8;
        }
        UNLOCK();
        aVar8 = aVar11;
      } while (!bVar20);
      pFVar19 = pTVar13->Object;
    }
LAB_14b9fd106:
    if (pFVar19 != (FDS_ChatRoomData *)0x0) {
      pTVar3 = (pFVar19->ChatConversation).SharedReferenceCount.ReferenceController;
      pFVar4 = (pFVar19->ChatConversation).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar4 == (FDS_ChatConversation *)0x0) {
        pUVar14 = UDS_LogManager::GetInst();
        if (pUVar14 != (UDS_LogManager *)0x0) {
          pUVar14 = UDS_LogManager::GetInst();
          local_288._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_288,"UDS_ChattingManager::OnChangeGroupChatRoomInfo",0x2e,Yes);
          UDS_LogManager::PrintLog
                    (pUVar14,1,Warning,local_288.Ptr,0x4d1,
                     L"chatConversation.IsValid() == false (GroupID : %s)");
          if ((void *)local_288._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_288._padding_);
          }
        }
      }
      else {
        ::FString::operator=(&pFVar4->ShowName,param_2);
        pFVar19->GroupIconID = param_3;
        pFVar19->bIsInviteGranted = param_4;
        pUVar15 = UDS_ChatEvent::GetEvent();
        if (pUVar15 != (UDS_ChatEvent *)0x0) {
          FDS_EventDelegate<FString_const_&>::Broadcast
                    (&pUVar15->OnRefreshChatRoom,&pFVar4->ConversationID);
          this_00 = &pUVar15->OnChangedGroupOwner;
          bVar20 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                             ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
          if (bVar20) {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                       (FWriteAccessScope *)&local_2a0);
            puVar1 = &(pUVar15->OnChangedGroupOwner).Delegate.field_0x1c;
            *(int *)puVar1 = *(int *)puVar1 + 1;
            bVar20 = false;
            uVar18 = *(int *)&(pUVar15->OnChangedGroupOwner).Delegate.field_0x10 - 1;
            if (-1 < (int)uVar18) {
              lVar17 = (longlong)(int)uVar18 << 4;
              bVar20 = false;
              do {
                uVar12 = 0;
                if ((int)uVar18 < *(int *)&(pUVar15->OnChangedGroupOwner).Delegate.field_0x10) {
                  uVar12 = ~uVar18 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                lVar5 = *(longlong *)&(pUVar15->OnChangedGroupOwner).Delegate.field_0x8;
                if (((*(int *)(lVar5 + 8 + lVar17) == 0) ||
                    (plVar6 = *(longlong **)(lVar5 + lVar17), plVar6 == (longlong *)0x0)) ||
                   (cVar10 = (**(code **)(*plVar6 + 0x68))(plVar6,1,param_1), cVar10 == '\0')) {
                  bVar20 = true;
                }
                lVar17 = lVar17 + -0x10;
                uVar18 = uVar18 - 1;
              } while (-1 < (int)uVar18);
            }
            puVar1 = &(pUVar15->OnChangedGroupOwner).Delegate.field_0x1c;
            *(int *)puVar1 = *(int *)puVar1 + -1;
            if (bVar20) {
              TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
            }
            if (local_2a0.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a0.Accessor,&local_2a0);
            }
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      goto LAB_14b9fd3cf;
    }
  }
  pUVar14 = UDS_LogManager::GetInst();
  if (pUVar14 != (UDS_LogManager *)0x0) {
    pUVar14 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_ChattingManager::OnChangeGroupChatRoomInfo",0x2e,Yes);
    UDS_LogManager::PrintLog
              (pUVar14,1,Warning,local_168.Ptr,0x4ca,
               L"groupChatRoomData.IsValid() == false (GroupID : %s)");
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
  }
LAB_14b9fd3cf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  return;
}

// OnChangeGroupChatRoomOwner @ 14b9fd400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::OnChangeGroupChatRoomOwner
          (UDS_ChattingManager *this,FString *param_1,long64 param_2)

{
  undefined1 *puVar1;
  TMap<__int64,TSharedPtr<FDS_ChatUserInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>_>
  *this_00;
  int iVar2;
  FDS_ChatRoomManager *pFVar3;
  FDS_ChatRoomData *pFVar4;
  FDS_ChatUserInfo *pFVar5;
  longlong lVar6;
  code *pcVar7;
  atomic<int> aVar8;
  atomic<int> aVar9;
  int iVar10;
  int iVar11;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar12;
  UDS_LogManager *pUVar13;
  TSharedPtr<FDS_ChatUserInfo,1> *pTVar14;
  undefined1 *puVar15;
  uint uVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  bool bVar19;
  undefined1 auStackY_418 [32];
  int local_3d8 [2];
  FSparseArrayAllocationInfo local_3d0;
  FDS_ChatUserInfo *local_3c0;
  TReferenceControllerBase<1> *pTStack_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_418;
  pFVar3 = (this->ChatRoomManager).Object;
  if (pFVar3 == (FDS_ChatRoomManager *)0x0) {
    pTVar18 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar12 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
              ::Find((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                      *)&pFVar3->IndexByGroupID,param_1);
    if (pTVar12 == (TWeakPtr<FDS_ChatRoomData,1> *)0x0) {
LAB_14b9fd46e:
      pTVar18 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar18 = (pTVar12->WeakReferenceCount).ReferenceController;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        aVar8 = pTVar18->SharedReferenceCount;
        do {
          if (aVar8 == (atomic<int>)0x0) goto LAB_14b9fd46e;
          LOCK();
          aVar9 = pTVar18->SharedReferenceCount;
          bVar19 = aVar8 == aVar9;
          if (bVar19) {
            pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
            aVar9 = aVar8;
          }
          UNLOCK();
          aVar8 = aVar9;
        } while (!bVar19);
        pFVar4 = pTVar12->Object;
        if (pFVar4 != (FDS_ChatRoomData *)0x0) {
          puVar1 = &(pFVar4->GroupMembers).field_0x8;
          if (*(int *)puVar1 != *(int *)&(pFVar4->GroupMembers).field_0x34) {
            puVar15 = *(undefined1 **)&(pFVar4->GroupMembers).field_0x40;
            if (puVar15 == (undefined1 *)0x0) {
              puVar15 = &(pFVar4->GroupMembers).field_0x38;
            }
            iVar11 = *(int *)(puVar15 +
                             (ulonglong)
                             (*(int *)&(pFVar4->GroupMembers).field_0x48 - 1U &
                             (int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) * 4);
            if (iVar11 != -1) {
              do {
                if (*(longlong *)((longlong)iVar11 * 0x20 + *(longlong *)&pFVar4->GroupMembers) ==
                    param_2) {
                  pTVar14 = TMapBase<__int64,TSharedPtr<FDS_ChatUserInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>_>
                            ::FindChecked((TMapBase<__int64,TSharedPtr<FDS_ChatUserInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>_>
                                           *)&pFVar4->GroupMembers,param_2);
                  pTVar17 = (pTVar14->SharedReferenceCount).ReferenceController;
                  pFVar5 = pTVar14->Object;
                  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar17->SharedReferenceCount =
                         (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  if (pFVar5 == (FDS_ChatUserInfo *)0x0) goto LAB_14b9fd59a;
                  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar17->SharedReferenceCount =
                         (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  local_3c0 = (pFVar4->GroupOwner).Object;
                  pTStack_3b8 = (pFVar4->GroupOwner).SharedReferenceCount.ReferenceController;
                  (pFVar4->GroupOwner).Object = pFVar5;
                  (pFVar4->GroupOwner).SharedReferenceCount.ReferenceController = pTVar17;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTStack_3b8);
                  if (((pFVar4->GroupOwner).Object == (FDS_ChatUserInfo *)0x0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar19)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar6 = ((pFVar4->GroupOwner).Object)->PlayerUID;
                  if (*(int *)&(pFVar4->GroupMembers).field_0x8 ==
                      *(int *)&(pFVar4->GroupMembers).field_0x34) goto LAB_14b9fd767;
                  puVar15 = *(undefined1 **)&(pFVar4->GroupMembers).field_0x40;
                  if (puVar15 == (undefined1 *)0x0) {
                    puVar15 = &(pFVar4->GroupMembers).field_0x38;
                  }
                  iVar11 = *(int *)(puVar15 +
                                   ((lVar6 >> 0x20) * 0x17 + lVar6 &
                                   (ulonglong)(*(int *)&(pFVar4->GroupMembers).field_0x48 - 1)) * 4)
                  ;
                  if (iVar11 == -1) goto LAB_14b9fd719;
                  goto LAB_14b9fd700;
                }
                iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 +
                                 *(longlong *)&pFVar4->GroupMembers);
              } while (iVar11 != -1);
            }
          }
          pUVar13 = UDS_LogManager::GetInst();
          if (pUVar13 != (UDS_LogManager *)0x0) {
            pUVar13 = UDS_LogManager::GetInst();
            local_288._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_288,"FDS_ChatRoomData::GetGroupMember",0x20,Yes);
            UDS_LogManager::PrintLog
                      (pUVar13,1,Warning,local_288.Ptr,0x1e0,
                       L"Not exist in GroupMembers. PlayerUID : %lld");
            if ((void *)local_288._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_288._padding_);
            }
          }
          pTVar17 = (TReferenceControllerBase<1> *)0x0;
LAB_14b9fd59a:
          pUVar13 = UDS_LogManager::GetInst();
          if (pUVar13 != (UDS_LogManager *)0x0) {
            pUVar13 = UDS_LogManager::GetInst();
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"UDS_ChattingManager::OnChangeGroupChatRoomOwner",0x2f,Yes);
            UDS_LogManager::PrintLog
                      (pUVar13,1,Warning,local_168.Ptr,0x52e,L"chatUserInfo.IsValid() == false");
            if ((void *)local_168._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_168._padding_);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar17);
        }
      }
    }
  }
  goto LAB_14b9fd478;
  while (iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 + *(longlong *)&pFVar4->GroupMembers),
        iVar11 != -1) {
LAB_14b9fd700:
    if (*(longlong *)((longlong)iVar11 * 0x20 + *(longlong *)&pFVar4->GroupMembers) == lVar6)
    goto LAB_14b9fd92e;
  }
LAB_14b9fd719:
  lVar6 = pFVar5->PlayerUID;
  puVar15 = *(undefined1 **)&(pFVar4->GroupMembers).field_0x40;
  if (puVar15 == (undefined1 *)0x0) {
    puVar15 = &(pFVar4->GroupMembers).field_0x38;
  }
  iVar11 = *(int *)(puVar15 +
                   ((lVar6 >> 0x20) * 0x17 + lVar6 &
                   (ulonglong)(*(int *)&(pFVar4->GroupMembers).field_0x48 - 1)) * 4);
  if (iVar11 != -1) {
    do {
      if (*(longlong *)((longlong)iVar11 * 0x20 + *(longlong *)&pFVar4->GroupMembers) == lVar6) {
        pUVar13 = UDS_LogManager::GetInst();
        if (pUVar13 != (UDS_LogManager *)0x0) {
          pUVar13 = UDS_LogManager::GetInst();
          local_3a8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_3a8,"FDS_ChatRoomData::AddGroupMember",0x20,Yes);
          UDS_LogManager::PrintLog
                    (pUVar13,1,Warning,local_3a8.Ptr,0x1c4,
                     L"[Chat] ChatRoom member already exists. PlayerUID : %lld, Nickname : %s");
          if ((void *)local_3a8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_3a8._padding_);
          }
        }
        goto LAB_14b9fd92e;
      }
      iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 + *(longlong *)&pFVar4->GroupMembers);
    } while (iVar11 != -1);
  }
LAB_14b9fd767:
  iVar11 = *(int *)&(pFVar4->GroupMembers).field_0x34;
  this_00 = &pFVar4->GroupMembers;
  if (iVar11 == 0) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,8,1,(ForAnyElementType *)this_00,(int *)puVar1,
                        (int *)&(pFVar4->GroupMembers).field_0xc);
    puVar1 = &(pFVar4->GroupMembers).field_0x10;
    iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                       ((TBitArray<FDefaultBitArrayAllocator> *)puVar1,1);
    puVar15 = *(undefined1 **)&(pFVar4->GroupMembers).field_0x20;
    uVar16 = iVar11 >> 0x1f & 0x1f;
    iVar11 = iVar11 + uVar16;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    *(uint *)(puVar15 + (longlong)(iVar11 >> 5) * 4) =
         *(uint *)(puVar15 + (longlong)(iVar11 >> 5) * 4) &
         ~(1 << (((byte)iVar11 & 0x1f) - (char)uVar16 & 0x1f));
  }
  else {
    iVar10 = *(int *)&(pFVar4->GroupMembers).field_0x30;
    iVar2 = *(int *)((longlong)iVar10 * 0x20 + 4 + *(longlong *)&this_00->field_0x0);
    iVar11 = iVar11 + -1;
    *(int *)&(pFVar4->GroupMembers).field_0x30 = iVar2;
    *(int *)&(pFVar4->GroupMembers).field_0x34 = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *(longlong *)&this_00->field_0x0) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_00,&local_3d0,iVar10);
  if (local_3d0.Pointer !=
      (TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_> *)0x0) {
    *(long64 *)local_3d0.Pointer = pFVar5->PlayerUID;
    *(FDS_ChatUserInfo **)((longlong)local_3d0.Pointer + 8) = pFVar5;
    *(TReferenceControllerBase<1> **)((longlong)local_3d0.Pointer + 0x10) = pTVar17;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_3d0.Pointer + 0x18) = 0xffffffff;
  }
  local_3d8[0] = local_3d0.Index;
  uVar16 = (int)((ulonglong)*(undefined8 *)local_3d0.Pointer >> 0x20) * 0x17 +
           (int)*(undefined8 *)local_3d0.Pointer;
  bVar19 = TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
           ::TryReplaceExisting
                     ((TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
                       *)this_00,uVar16,local_3d0.Pointer,local_3d8,(bool *)0x0);
  if (!bVar19) {
    TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
    ::RehashOrLink((TSet<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>,FDefaultSetAllocator>
                    *)this_00,uVar16,local_3d0.Pointer,local_3d8[0]);
  }
LAB_14b9fd92e:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
LAB_14b9fd478:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  return;
}

// OnDeleteConversation @ 14b9fe690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::OnDeleteConversation(UDS_ChattingManager *this,FString *param_1)

{
  FDS_ChatRoomManager *this_00;
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_ChattingDataSet *this_01;
  UDS_ChatEvent *pUVar5;
  undefined1 auStackY_218 [32];
  FWeakObjectPtr local_1e8 [2];
  undefined1 local_1d8 [120];
  void *local_160;
  undefined4 local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_218;
  this_00 = (this->ChatRoomManager).Object;
  if (this_00 == (FDS_ChatRoomManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ChattingManager::OnDeleteConversation",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0x3ce,L"ChatRoomManager.IsValid() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    FDS_ChatRoomManager::RemoveChatRoomByConversationID
              (this_00,(FDS_ChatRoomData *)local_1d8,param_1);
    uVar2 = local_1d8._16_8_;
    if ((local_1d8[0] == None) ||
       ((FDS_ChatConversation *)local_1d8._8_8_ == (FDS_ChatConversation *)0x0)) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_ChattingManager::OnDeleteConversation",0x29,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_148.Ptr,0x3d5,L"removedChatRoomData.IsValid() == false");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      if ((TReferenceControllerBase<1> *)local_1d8._16_8_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *(atomic<int> *)(local_1d8._16_8_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_1d8._16_8_ + 8) + 1);
        UNLOCK();
      }
      if ((FDS_ChatConversation *)local_1d8._8_8_ == (FDS_ChatConversation *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_ChattingManager::OnDeleteConversation",0x29,Yes);
          UDS_LogManager::PrintLog
                    (pUVar4,1,Warning,local_148.Ptr,0x3dc,L"chatConversation.IsValid() == false");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
      else {
        lVar1 = *(long64 *)(local_1d8._8_8_ + 0x30);
        if (0 < lVar1) {
          TDS_DataSetGetter<UDS_ChattingDataSet>::Get((ulong64)local_1e8);
          bVar3 = FWeakObjectPtr::IsValid(local_1e8);
          if (bVar3) {
            this_01 = (UDS_ChattingDataSet *)FWeakObjectPtr::Get(local_1e8);
            UDS_ChattingDataSet::RemoveChattingData(this_01,lVar1);
          }
          if (((this->ChatStateData).ChattingTabType == local_1d8[0]) &&
             ((this->ChatStateData).SubTabIndex == local_1d8._4_4_)) {
            SetChattingTabType(this,Total,-1);
          }
        }
        UpdateBookmark(this,local_1d8[0],local_1d8._4_4_,false);
        pUVar5 = UDS_ChatEvent::GetEvent();
        if (pUVar5 != (UDS_ChatEvent *)0x0) {
          bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                             &pUVar5->OnUpdateChattingTabs);
          if (bVar3) {
            TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                      (&(pUVar5->OnUpdateChattingTabs).Delegate);
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)uVar2);
    }
    local_158 = 0;
    if (local_160 != (void *)0x0) {
      FMemory::Free(local_160);
    }
    TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_1d8 + 0x38));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1d8._48_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1d8._32_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_1d8._16_8_);
  }
  return;
}

// OnDismissGroupChatRoom @ 14b9fe9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_ChattingManager::OnDismissGroupChatRoom(UDS_ChattingManager *this,FString *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  UDS_ChattingDataSet *this_00;
  UDS_ChatEvent *pUVar4;
  undefined1 auStack_d8 [32];
  FWeakObjectPtr local_b8 [2];
  undefined1 local_a8 [120];
  void *local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  RemoveChatRoomDataByGroupID(this,(FDS_ChatRoomData *)local_a8,param_1);
  if ((local_a8[0] != None) &&
     ((FDS_ChatConversation *)local_a8._8_8_ != (FDS_ChatConversation *)0x0)) {
    TDS_DataSetGetter<UDS_ChattingDataSet>::Get((ulong64)local_b8);
    bVar3 = FWeakObjectPtr::IsValid(local_b8);
    uVar1 = local_a8._4_4_;
    if (bVar3) {
      this_00 = (UDS_ChattingDataSet *)FWeakObjectPtr::Get(local_b8);
      UDS_ChattingDataSet::RemoveChattingData(this_00,(char)uVar1 + Group1);
    }
    pUVar4 = UDS_ChatEvent::GetEvent();
    if (pUVar4 != (UDS_ChatEvent *)0x0) {
      bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar4->OnUpdateChattingTabs);
      if (bVar3) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar4->OnUpdateChattingTabs).Delegate);
      }
    }
    if (((this->ChatStateData).ChattingTabType == local_a8[0]) &&
       ((this->ChatStateData).SubTabIndex == local_a8._4_4_)) {
      SetChattingTabType(this,Total,-1);
    }
    uVar2 = local_a8._16_8_;
    if ((TReferenceControllerBase<1> *)local_a8._16_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_a8._16_8_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_a8._16_8_ + 8) + 1);
      UNLOCK();
    }
    if ((FDS_ChatConversation *)local_a8._8_8_ != (FDS_ChatConversation *)0x0) {
      RequestDeleteConversation(this,(FString *)local_a8._8_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)uVar2);
  }
  local_28 = 0;
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_a8 + 0x38));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_a8._48_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_a8._32_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_a8._16_8_);
  return;
}

// OnExtraCommand @ 14b9ff2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::OnExtraCommand
          (UDS_ChattingManager *this,EDS_CommandType param_1,FString *param_2)

{
  FString *pFVar1;
  FSharedReferencer<1> FVar2;
  longlong lVar3;
  FDS_ChatRoomManager *this_00;
  code *pcVar4;
  ForAnyElementType FVar5;
  int iVar6;
  FDS_ChatRoomData *pFVar7;
  bool bVar8;
  UDS_LogManager *pUVar9;
  FDS_PartyRepo *pFVar10;
  FDS_PartyMemberInfo *pFVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  FDS_ChatUserCache *this_01;
  undefined1 auStackY_2a8 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_268;
  ForAnyElementType local_260;
  int local_258;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_250;
  FDelegateAllocation local_248;
  undefined1 local_238 [8];
  ForAnyElementType local_230;
  int local_228;
  TArray<TSharedPtr<FDS_ChatUserInfo,1>,TSizedDefaultAllocator<32>_> local_220;
  TSharedPtr<FDS_ChatRoomData,1> local_210;
  UDS_ChattingManager *local_200;
  FDestructionSentinel local_1f8;
  FDestructionSentinel local_1e0;
  FDestructionSentinel local_1c8;
  FDestructionSentinel local_1b0;
  FDestructionSentinel local_198;
  FDelegateAllocation *local_180;
  FReadAccessScope local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  if (param_1 == WhisperReply) {
    if ((this->ChatUserCache).Object == (FDS_ChatUserCache *)0x0) {
      return;
    }
    this_01 = TSharedPtr<FDS_ChatUserCache,1>::operator->(&this->ChatUserCache);
    FDS_ChatUserCache::GetRecentWhispers(this_01,&local_220);
    if (0 < local_220.ArrayNum) {
      FVar2.ReferenceController =
           *(TReferenceControllerBase<1> **)(local_220.AllocatorInstance.Data + 8);
      lVar3 = *(longlong *)local_220.AllocatorInstance.Data;
      if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar2.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (lVar3 != 0) {
        pFVar1 = (FString *)(lVar3 + 0x18);
        SendChattingMessage(this,Whisper,pFVar1);
        this_00 = (this->ChatRoomManager).Object;
        if (this_00 == (FDS_ChatRoomManager *)0x0) {
          local_210.Object = (FDS_ChatRoomData *)0x0;
          local_210.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          FDS_ChatRoomManager::FindChatRoomByWhisper(this_00,&local_210,pFVar1);
        }
        pFVar7 = local_210.Object;
        if (local_210.Object != (FDS_ChatRoomData *)0x0) {
          if ((local_210.Object == (FDS_ChatRoomData *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((pFVar7->ChattingTabType != None) &&
             ((pFVar7->ChatConversation).Object != (FDS_ChatConversation *)0x0)) {
            SetChattingTabType(this,Whisper,pFVar7->SubTabIndex);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_210.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar2.ReferenceController);
    }
    DestructItems<TSharedPtr<FDS_ChatUserInfo,1>,int>
              ((TSharedPtr<FDS_ChatUserInfo,1> *)local_220.AllocatorInstance.Data,local_220.ArrayNum
              );
LAB_14b9ff748:
    if ((TSharedPtr<FDS_ChatUserInfo,1> *)local_220.AllocatorInstance.Data !=
        (TSharedPtr<FDS_ChatUserInfo,1> *)0x0) {
      FMemory::Free(local_220.AllocatorInstance.Data);
    }
    return;
  }
  if (param_1 != PartyInvite) {
    if (param_1 == PartyKick) {
      pFVar10 = TDS_Singleton<FDS_PartyRepo>::GetInst();
      pFVar11 = FDS_PartyInfo::GetPartyMemberInfo(&pFVar10->PartyInfo,param_2);
      FDS_PartyService::OpenPartyKickPopup(pFVar11->PlayerUID);
      return;
    }
    if (param_1 == PartyLeave) {
      FDS_PartyService::OpenPartyLeavePopup();
      return;
    }
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar9 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_ChattingManager::OnExtraCommand",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar9,1,Warning,local_158.Ptr,0x23a,L"[Chat] Unhandled type - InCommandType : %d");
    local_220.AllocatorInstance.Data = (FScriptContainerElement *)local_158._padding_;
    goto LAB_14b9ff748;
  }
  local_250.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_248.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_248.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_250,(FWriteAccessScope *)&local_198);
  local_180 = &local_248;
  puVar12 = UE::Core::Private::DelegateAllocate(0x30,&local_248);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    ::FString::FString((FString *)(puVar12 + 1),param_2);
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[3] = uVar13;
    *puVar12 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ChattingManager____A6AXXZUFDefaultDelegateUserPolicy__VFString____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ChattingManager *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar12[4] = 0;
    local_200 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_ChattingManager *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar12 + 4),(FObjectPtr)&local_200);
    puVar12[5] = OnRequestPartyInvite;
  }
  if (local_198.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
  }
  local_238 = (undefined1  [8])0x0;
  local_230.Data = (FScriptContainerElement *)0x0;
  local_228 = 0;
  local_268.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_260.Data = (FScriptContainerElement *)0x0;
  local_258 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_250,&local_178);
  if ((local_248.DelegateSize != 0) &&
     (local_248.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_248.DelegateAllocator + 0x50))
              (local_248.DelegateAllocator,&local_268);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_178);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_268,(FWriteAccessScope *)&local_1f8);
  iVar6 = local_258;
  FVar5.Data = local_260.Data;
  local_260.Data = (FScriptContainerElement *)0x0;
  local_258 = 0;
  if (local_1f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f8.Accessor,&local_1f8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_238,
             (FWriteAccessScope *)&local_1e0);
  if (local_228 != 0) {
    if (local_230.Data == (FScriptContainerElement *)0x0) goto LAB_14b9ff548;
    (*(code *)**(undefined8 **)local_230.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_230,0,0,0x10);
    local_228 = 0;
  }
  if (local_230.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data);
  }
LAB_14b9ff548:
  local_230.Data = FVar5.Data;
  local_228 = iVar6;
  if (local_1e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e0.Accessor,&local_1e0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_268,(FWriteAccessScope *)&local_1c8);
  if ((local_258 != 0) && (local_260.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_260.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_260,0,0,0x10);
    local_258 = 0;
  }
  if (local_1c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c8.Accessor,&local_1c8);
  }
  if (local_260.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_268.AccessDetector);
  FDS_PlayerRepo::RequestSearchPlayersByName
            (param_2,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_238);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_250,(FWriteAccessScope *)&local_1b0);
  if ((local_248.DelegateSize != 0) &&
     (local_248.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_248.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_248,0,0,0x10);
    local_248.DelegateSize = 0;
  }
  if (local_1b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b0.Accessor,&local_1b0);
  }
  if (local_248.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_248.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_250.AccessDetector);
  return;
}

// OnGroupChatRoomInfo @ 14b9ffc10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::OnGroupChatRoomInfo
          (UDS_ChattingManager *this,FDS_ChatGroupInfo *param_1,bool param_2)

{
  FSharedReferencer<1> *pFVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  atomic<int> aVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  uint uVar10;
  atomic<int> aVar11;
  int iVar12;
  UDS_LogManager *pUVar13;
  FString *pFVar14;
  FString *pFVar15;
  TSharedPtr<FDS_ChatConversation,1> *pTVar16;
  FDS_ChatRoomData *pFVar17;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar18;
  FDS_ChatRoomManager *pFVar19;
  TSharedPtr<FDS_ChatRoomData,1> *pTVar20;
  UDS_ChatEvent *pUVar21;
  FDS_ChatRoomData *pFVar22;
  FSharedReferencer<1> FVar23;
  longlong lVar24;
  int iVar25;
  FDS_ChatConversation *pFVar26;
  undefined1 auStackY_438 [32];
  TSharedPtr<FDS_ChatRoomData,1> local_3f0;
  FDS_ChatRoomData *local_3e0;
  FSharedReferencer<1> local_3d8 [2];
  FDS_ChatConversation local_3c8;
  TSharedPtr<FDS_ChatConversation,1> local_368;
  FString local_358;
  TSharedPtr<FDS_ChatConversation,1> local_348;
  FDS_ChatGroupInfo *local_338;
  TSharedPtr<FDS_ChatConversation,1> local_330;
  undefined8 local_320;
  FSharedReferencer<1> local_318;
  UDS_ChattingManager *local_310;
  FDS_ChatUserInfo local_308;
  TSharedPtr<FDS_ChatUserInfo,1> local_2d8;
  TSharedPtr<FDS_ChatRoomData,1> local_2c8;
  FDS_ChatConversation *local_2b8;
  TReferenceControllerBase<1> *pTStack_2b0;
  FString local_2a8;
  FString local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_438;
  pFVar19 = (this->ChatRoomManager).Object;
  local_338 = param_1;
  local_310 = this;
  if (pFVar19 == (FDS_ChatRoomManager *)0x0) {
    pUVar13 = UDS_LogManager::GetInst();
    if (pUVar13 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar13 = UDS_LogManager::GetInst();
    local_288._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_288,"UDS_ChattingManager::OnGroupChatRoomInfo",0x28,Yes);
    UDS_LogManager::PrintLog
              (pUVar13,1,Warning,local_288.Ptr,0x48c,L"ChatRoomManager.IsValid() == false");
    if ((void *)local_288._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_288._padding_);
    return;
  }
  FDS_ChatRoomManager::FindChatConversationByGroupID(pFVar19,&local_368,&param_1->GroupID);
  pFVar22 = (FDS_ChatRoomData *)0x0;
  if (local_368.Object == (FDS_ChatConversation *)0x0) {
    local_3c8.ConversationID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3c8.WhisperPlayerUID = 0;
    local_3c8.ShowName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3c8.GroupID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3c8.GroupID.Data.ArrayNum = 0;
    local_3c8.GroupID.Data.ArrayMax = 0;
    local_3c8.WhisperUserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3c8.WhisperUserID.Data.ArrayNum = 0;
    local_3c8.WhisperUserID.Data.ArrayMax = 0;
    local_3c8.ShowName.Data.ArrayNum = 0;
    local_3c8.ShowName.Data.ArrayMax = 0;
    local_3c8.OrderKey = 0;
    local_3c8.UnreadCount = 0;
    local_3c8.bIsBookmark = false;
    pFVar14 = ::FString::FString(&local_2a8,&param_1->GroupName);
    pFVar15 = ::FString::FString(&local_298,&param_1->GroupID);
    ::FString::ConcatCF(&local_358,L"group_",pFVar15);
    if (local_3c8.ConversationID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.ConversationID.Data.AllocatorInstance.Data);
    }
    local_3c8.ConversationID.Data.AllocatorInstance.Data = local_358.Data.AllocatorInstance.Data;
    local_3c8.ConversationID.Data.ArrayNum = local_358.Data.ArrayNum;
    local_358.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3c8.ConversationID.Data.ArrayMax = local_358.Data.ArrayMax;
    local_358.Data.ArrayNum = 0;
    local_358.Data.ArrayMax = 0;
    ::FString::operator=(&local_3c8.GroupID,pFVar15);
    iVar12 = (pFVar14->Data).ArrayNum;
    iVar25 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar25 = 0;
    }
    ::FString::AssignRange
              (&local_3c8.ShowName,(wchar_t *)(pFVar14->Data).AllocatorInstance.Data,iVar25);
    pFVar5 = (pFVar15->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pFVar5 = (pFVar14->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    if (((this->ChatRoomManager).Object == (FDS_ChatRoomManager *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar17 = pFVar22;
    if (1 < local_3c8.ConversationID.Data.ArrayNum) {
      iVar12 = local_3c8.ConversationID.Data.ArrayNum + -1;
      pFVar19 = (this->ChatRoomManager).Object;
      if (local_3c8.ConversationID.Data.ArrayNum == 0) {
        iVar12 = 0;
      }
      uVar10 = FCrc::Strihash_DEPRECATED<wchar_t>
                         (iVar12,(wchar_t *)local_3c8.ConversationID.Data.AllocatorInstance.Data);
      pTVar16 = TMapBase<FString,TSharedPtr<FDS_ChatConversation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>_>
                ::FindOrAddImpl<FString_const_&>
                          ((TMapBase<FString,TSharedPtr<FDS_ChatConversation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>_>
                            *)pFVar19,uVar10,&local_3c8.ConversationID);
      iVar12 = local_3c8.ConversationID.Data.ArrayNum;
      FVar8.Data = local_3c8.ConversationID.Data.AllocatorInstance.Data;
      pFVar26 = pTVar16->Object;
      if (pFVar26 == (FDS_ChatConversation *)0x0) {
        pFVar17 = ::operator_new(0x68);
        FVar8.Data = local_3c8.ConversationID.Data.AllocatorInstance.Data;
        if (pFVar17 == (FDS_ChatRoomData *)0x0) {
          local_348.Object = ___xmm_00000000000000000000000000000010;
          pFVar26 = (FDS_ChatConversation *)&DAT_00000010;
          local_348.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)_UNK_150651568;
          pFVar17 = pFVar22;
        }
        else {
          *(undefined4 *)&(pFVar17->ChatConversation).Object = 1;
          pFVar1 = &(pFVar17->ChatConversation).SharedReferenceCount;
          *(undefined4 *)((longlong)&(pFVar17->ChatConversation).Object + 4) = 1;
          *(undefined ***)pFVar17 =
               &
               ___7__TIntrusiveReferenceController_UFDS_ChatConversation___00_SharedPointerInternals__6B_
          ;
          piVar2 = (int *)((longlong)&(pFVar17->Whisper).Object + 4);
          pFVar1->ReferenceController = (TReferenceControllerBase<1> *)0x0;
          lVar24 = (longlong)local_3c8.ConversationID.Data.ArrayNum;
          *(int *)&(pFVar17->Whisper).Object = local_3c8.ConversationID.Data.ArrayNum;
          if (local_3c8.ConversationID.Data.ArrayNum == 0) {
            *piVar2 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_3c8.ConversationID.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,
                       local_3c8.ConversationID.Data.ArrayNum,piVar2);
            memcpy(pFVar1->ReferenceController,FVar8.Data,lVar24 * 2);
          }
          FVar8.Data = local_3c8.GroupID.Data.AllocatorInstance.Data;
          pFVar1 = &(pFVar17->Whisper).SharedReferenceCount;
          pFVar1->ReferenceController = (TReferenceControllerBase<1> *)0x0;
          piVar2 = (int *)((longlong)&(pFVar17->GroupOwner).Object + 4);
          lVar24 = (longlong)local_3c8.GroupID.Data.ArrayNum;
          *(int *)&(pFVar17->GroupOwner).Object = local_3c8.GroupID.Data.ArrayNum;
          if (local_3c8.GroupID.Data.ArrayNum == 0) {
            *piVar2 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_3c8.GroupID.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,
                       local_3c8.GroupID.Data.ArrayNum,piVar2);
            memcpy(pFVar1->ReferenceController,FVar8.Data,lVar24 * 2);
          }
          FVar8.Data = local_3c8.WhisperUserID.Data.AllocatorInstance.Data;
          pFVar1 = &(pFVar17->GroupOwner).SharedReferenceCount;
          pFVar1->ReferenceController = (TReferenceControllerBase<1> *)0x0;
          puVar3 = &(pFVar17->GroupMembers).field_0x4;
          lVar24 = (longlong)local_3c8.WhisperUserID.Data.ArrayNum;
          *(int *)&pFVar17->GroupMembers = local_3c8.WhisperUserID.Data.ArrayNum;
          if (local_3c8.WhisperUserID.Data.ArrayNum == 0) {
            *(undefined4 *)puVar3 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_3c8.WhisperUserID.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,
                       local_3c8.WhisperUserID.Data.ArrayNum,(int *)puVar3);
            memcpy(pFVar1->ReferenceController,FVar8.Data,lVar24 * 2);
          }
          FVar8.Data = local_3c8.ShowName.Data.AllocatorInstance.Data;
          puVar3 = &(pFVar17->GroupMembers).field_0x10;
          *(long64 *)&(pFVar17->GroupMembers).field_0x8 = local_3c8.WhisperPlayerUID;
          puVar4 = &(pFVar17->GroupMembers).field_0x1c;
          *(undefined8 *)puVar3 = 0;
          lVar24 = (longlong)local_3c8.ShowName.Data.ArrayNum;
          *(int *)&(pFVar17->GroupMembers).field_0x18 = local_3c8.ShowName.Data.ArrayNum;
          if (local_3c8.ShowName.Data.ArrayNum == 0) {
            *(undefined4 *)puVar4 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_3c8.ShowName.Data.ArrayNum,0,(ForAnyElementType *)puVar3,
                       local_3c8.ShowName.Data.ArrayNum,(int *)puVar4);
            memcpy(*(void **)puVar3,FVar8.Data,lVar24 * 2);
          }
          pFVar26 = (FDS_ChatConversation *)&(pFVar17->ChatConversation).SharedReferenceCount;
          *(ulong64 *)&(pFVar17->GroupMembers).field_0x20 = local_3c8.OrderKey;
          *(int *)&(pFVar17->GroupMembers).field_0x28 = local_3c8.UnreadCount;
          (pFVar17->GroupMembers).field_0x2c = local_3c8.bIsBookmark;
          if ((pFVar26 == (FDS_ChatConversation *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          LOCK();
          *(int *)&(pFVar17->ChatConversation).Object =
               *(int *)&(pFVar17->ChatConversation).Object + 1;
          UNLOCK();
          local_348.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar17;
          this = local_310;
          local_348.Object = pFVar26;
        }
        if (pTVar16 != &local_348) {
          pTVar16->Object = pFVar26;
          local_348.Object = (FDS_ChatConversation *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&pTVar16->SharedReferenceCount,&local_348.SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_348.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar17);
      }
      else {
        if (pFVar26 != &local_3c8) {
          lVar24 = (longlong)local_3c8.ConversationID.Data.ArrayNum;
          piVar2 = &(pFVar26->ConversationID).Data.ArrayMax;
          iVar25 = *piVar2;
          (pFVar26->ConversationID).Data.ArrayNum = local_3c8.ConversationID.Data.ArrayNum;
          if ((local_3c8.ConversationID.Data.ArrayNum == 0) && (iVar25 == 0)) {
            *piVar2 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_3c8.ConversationID.Data.ArrayNum,iVar25,
                       (ForAnyElementType *)pFVar26,local_3c8.ConversationID.Data.ArrayNum,piVar2);
            if (iVar12 != 0) {
              memcpy((pFVar26->ConversationID).Data.AllocatorInstance.Data,FVar8.Data,lVar24 * 2);
            }
          }
        }
        FVar8.Data = local_3c8.GroupID.Data.AllocatorInstance.Data;
        pFVar14 = &pFVar26->GroupID;
        if (pFVar14 != &local_3c8.GroupID) {
          iVar25 = local_3c8.GroupID.Data.ArrayNum;
          lVar24 = (longlong)local_3c8.GroupID.Data.ArrayNum;
          piVar2 = &(pFVar26->GroupID).Data.ArrayMax;
          iVar12 = *piVar2;
          (pFVar26->GroupID).Data.ArrayNum = local_3c8.GroupID.Data.ArrayNum;
          if ((local_3c8.GroupID.Data.ArrayNum == 0) && (iVar12 == 0)) {
            *piVar2 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_3c8.GroupID.Data.ArrayNum,iVar12,(ForAnyElementType *)pFVar14,
                       local_3c8.GroupID.Data.ArrayNum,piVar2);
            if (iVar25 != 0) {
              memcpy((pFVar14->Data).AllocatorInstance.Data,FVar8.Data,lVar24 * 2);
            }
          }
        }
        FVar8.Data = local_3c8.WhisperUserID.Data.AllocatorInstance.Data;
        pFVar14 = &pFVar26->WhisperUserID;
        if (pFVar14 != &local_3c8.WhisperUserID) {
          iVar25 = local_3c8.WhisperUserID.Data.ArrayNum;
          lVar24 = (longlong)local_3c8.WhisperUserID.Data.ArrayNum;
          piVar2 = &(pFVar26->WhisperUserID).Data.ArrayMax;
          iVar12 = *piVar2;
          (pFVar26->WhisperUserID).Data.ArrayNum = local_3c8.WhisperUserID.Data.ArrayNum;
          if ((local_3c8.WhisperUserID.Data.ArrayNum == 0) && (iVar12 == 0)) {
            *piVar2 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_3c8.WhisperUserID.Data.ArrayNum,iVar12,(ForAnyElementType *)pFVar14
                       ,local_3c8.WhisperUserID.Data.ArrayNum,piVar2);
            if (iVar25 != 0) {
              memcpy((pFVar14->Data).AllocatorInstance.Data,FVar8.Data,lVar24 * 2);
            }
          }
        }
        FVar8.Data = local_3c8.ShowName.Data.AllocatorInstance.Data;
        pFVar14 = &pFVar26->ShowName;
        pFVar26->WhisperPlayerUID = local_3c8.WhisperPlayerUID;
        if (pFVar14 != &local_3c8.ShowName) {
          iVar25 = local_3c8.ShowName.Data.ArrayNum;
          lVar24 = (longlong)local_3c8.ShowName.Data.ArrayNum;
          piVar2 = &(pFVar26->ShowName).Data.ArrayMax;
          iVar12 = *piVar2;
          (pFVar26->ShowName).Data.ArrayNum = local_3c8.ShowName.Data.ArrayNum;
          if ((local_3c8.ShowName.Data.ArrayNum == 0) && (iVar12 == 0)) {
            *piVar2 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_3c8.ShowName.Data.ArrayNum,iVar12,(ForAnyElementType *)pFVar14,
                       local_3c8.ShowName.Data.ArrayNum,piVar2);
            if (iVar25 != 0) {
              memcpy((pFVar14->Data).AllocatorInstance.Data,FVar8.Data,lVar24 * 2);
            }
          }
        }
        pFVar26->OrderKey = local_3c8.OrderKey;
        pFVar26->UnreadCount = local_3c8.UnreadCount;
        pFVar26->bIsBookmark = local_3c8.bIsBookmark;
      }
      pFVar17 = (FDS_ChatRoomData *)(pTVar16->SharedReferenceCount).ReferenceController;
      param_1 = local_338;
      if (pFVar17 != (FDS_ChatRoomData *)0x0) {
        LOCK();
        *(int *)&(pFVar17->ChatConversation).Object =
             *(int *)&(pFVar17->ChatConversation).Object + 1;
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar17);
    if (local_3c8.ShowName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.ShowName.Data.AllocatorInstance.Data);
    }
    if (local_3c8.WhisperUserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.WhisperUserID.Data.AllocatorInstance.Data);
    }
    if (local_3c8.GroupID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.GroupID.Data.AllocatorInstance.Data);
    }
    if (local_3c8.ConversationID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.ConversationID.Data.AllocatorInstance.Data);
    }
  }
  pFVar19 = (this->ChatRoomManager).Object;
  if (pFVar19 == (FDS_ChatRoomManager *)0x0) {
    local_330.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_368.Object = (FDS_ChatConversation *)pFVar22;
  }
  else {
    FDS_ChatRoomManager::FindChatConversationByGroupID(pFVar19,&local_330,&param_1->GroupID);
    local_368.Object = local_330.Object;
  }
  local_330.Object = (FDS_ChatConversation *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_368.SharedReferenceCount,&local_330.SharedReferenceCount);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_330.SharedReferenceCount.ReferenceController);
  pFVar26 = local_368.Object;
  if ((FDS_ChatRoomData *)local_368.Object == (FDS_ChatRoomData *)0x0) {
    pUVar13 = UDS_LogManager::GetInst();
    if (pUVar13 != (UDS_LogManager *)0x0) {
      pUVar13 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_ChattingManager::OnGroupChatRoomInfo",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar13,1,Warning,local_168.Ptr,0x49b,L"chatConversation.IsValid() == false");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    goto LAB_14ba0075d;
  }
  pFVar19 = (this->ChatRoomManager).Object;
  if ((pFVar19 == (FDS_ChatRoomManager *)0x0) ||
     (pTVar18 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                ::Find((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                        *)&pFVar19->IndexByGroupID,&param_1->GroupID),
     pTVar18 == (TWeakPtr<FDS_ChatRoomData,1> *)0x0)) {
LAB_14ba003fd:
    local_3e0 = (FDS_ChatRoomData *)0x0;
    local_3d8[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_14ba00402:
    local_308.UserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.Nickname.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_308.UserID.Data.ArrayNum = 0;
    local_308.UserID.Data.ArrayMax = 0;
    local_308.PlayerUID = 0;
    local_308.Nickname.Data.ArrayNum = 0;
    local_308.Nickname.Data.ArrayMax = 0;
    local_308.CharID = 0;
    local_308.CharLevel = 0;
    ::FString::operator=(&local_308.UserID,&param_1->OwnerUserID);
    local_308.PlayerUID = param_1->OwnerPlayerUID;
    AddOrUpdateChatUserInfo(this,&local_2d8,&local_308);
    pFVar19 = TSharedPtr<FDS_ChatRoomManager,1>::operator->(&this->ChatRoomManager);
    if (((FDS_ChatRoomData *)pFVar26 == (FDS_ChatRoomData *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(int *)&((TSharedPtr<FDS_ChatConversation,1> *)((longlong)pFVar26 + 8))->Object < 2) {
      local_318.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar18 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                ::Find((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                        *)&pFVar19->IndexByGroupID,
                       (FString *)
                       &((TSharedPtr<FDS_ChatConversation,1> *)((longlong)pFVar26 + 8))->
                        SharedReferenceCount);
      local_3f0.Object = (FDS_ChatRoomData *)0x0;
      if (pTVar18 == (TWeakPtr<FDS_ChatRoomData,1> *)0x0) {
LAB_14ba004d3:
        local_3f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_14ba004db:
        FVar23.ReferenceController = local_3f0.SharedReferenceCount.ReferenceController;
        pFVar17 = local_3f0.Object;
        iVar12 = FDS_ChatRoomManager::GetEmptySlotIndex(pFVar19,Group);
        if (iVar12 == -1) {
          local_318.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar23.ReferenceController);
          goto LAB_14ba0067b;
        }
        pTVar20 = FDS_ChatRoomManager::FindChatRoom(pFVar19,&local_2c8,Group,iVar12);
        if (&local_3f0 != pTVar20) {
          local_3f0.Object = pTVar20->Object;
          pTVar20->Object = (FDS_ChatRoomData *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_3f0.SharedReferenceCount,&pTVar20->SharedReferenceCount);
          pFVar17 = local_3f0.Object;
          FVar23.ReferenceController = local_3f0.SharedReferenceCount.ReferenceController;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2c8.SharedReferenceCount.ReferenceController);
        bVar9 = pFVar17 == (FDS_ChatRoomData *)0x0;
      }
      else {
        FVar23.ReferenceController = (pTVar18->WeakReferenceCount).ReferenceController;
        local_3f0.SharedReferenceCount.ReferenceController = FVar23.ReferenceController;
        if (FVar23.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14ba004db;
        aVar7 = (FVar23.ReferenceController)->SharedReferenceCount;
        do {
          if (aVar7 == (atomic<int>)0x0) goto LAB_14ba004d3;
          LOCK();
          aVar11 = (FVar23.ReferenceController)->SharedReferenceCount;
          bVar9 = aVar7 == aVar11;
          if (bVar9) {
            (FVar23.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
            aVar11 = aVar7;
          }
          UNLOCK();
          aVar7 = aVar11;
        } while (!bVar9);
        if (FVar23.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14ba004db;
        pFVar17 = pTVar18->Object;
        bVar9 = false;
        local_3f0.Object = pFVar17;
        if (pFVar17 == (FDS_ChatRoomData *)0x0) goto LAB_14ba004db;
      }
      pFVar22 = (FDS_ChatRoomData *)0x0;
      local_318.ReferenceController = FVar23.ReferenceController;
      if (pFVar17 != (FDS_ChatRoomData *)0x0) {
        if ((bVar9) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_368.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_368.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_368.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_2b8 = (pFVar17->ChatConversation).Object;
        pTStack_2b0 = (pFVar17->ChatConversation).SharedReferenceCount.ReferenceController;
        (pFVar17->ChatConversation).Object = pFVar26;
        (pFVar17->ChatConversation).SharedReferenceCount.ReferenceController =
             local_368.SharedReferenceCount.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_2b0);
        pFVar22 = local_3f0.Object;
        if ((local_3f0.Object == (FDS_ChatRoomData *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FDS_ChatRoomData::SetGroupOwner(pFVar22,&local_2d8);
        if ((pFVar22 == (FDS_ChatRoomData *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar22->GroupIconID = param_1->GroupIconID;
        pFVar22->bIsInviteGranted = param_1->bIsInviteGranted;
        FDS_ChatRoomManager::RegisterChatRoomIndex(pFVar19,&local_3f0);
        local_318.ReferenceController = local_3f0.SharedReferenceCount.ReferenceController;
      }
      local_3f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_3f0.Object = (FDS_ChatRoomData *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
LAB_14ba0067b:
    local_320 = 0;
    local_3e0 = pFVar22;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_3d8,&local_318);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_318.ReferenceController);
    pFVar22 = local_3e0;
    if (local_3e0 != (FDS_ChatRoomData *)0x0) {
      if ((local_3e0 == (FDS_ChatRoomData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((pFVar22->ChattingTabType != None) &&
         (pFVar26 = (pFVar22->ChatConversation).Object, pFVar26 != (FDS_ChatConversation *)0x0)) {
        UpdateBookmark(this,pFVar22->ChattingTabType,pFVar22->SubTabIndex,pFVar26->bIsBookmark);
        pUVar21 = UDS_ChatEvent::GetEvent();
        if (pUVar21 != (UDS_ChatEvent *)0x0) {
          FDS_EventDelegate<>::Broadcast(&pUVar21->OnUpdateChattingTabs);
        }
        if (param_2) {
          SetChattingTabType(this,pFVar22->ChattingTabType,pFVar22->SubTabIndex);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d8.SharedReferenceCount.ReferenceController);
    if (local_308.Nickname.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.Nickname.Data.AllocatorInstance.Data);
    }
    FVar23.ReferenceController = local_3d8[0].ReferenceController;
    if (local_308.UserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.UserID.Data.AllocatorInstance.Data);
      FVar23.ReferenceController = local_3d8[0].ReferenceController;
    }
  }
  else {
    FVar23.ReferenceController = (pTVar18->WeakReferenceCount).ReferenceController;
    local_3e0 = (FDS_ChatRoomData *)0x0;
    local_3d8[0].ReferenceController = FVar23.ReferenceController;
    if (FVar23.ReferenceController == (TReferenceControllerBase<1> *)0x0) goto LAB_14ba00402;
    aVar7 = (FVar23.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar7 == (atomic<int>)0x0) goto LAB_14ba003fd;
      LOCK();
      aVar11 = (FVar23.ReferenceController)->SharedReferenceCount;
      bVar9 = aVar7 == aVar11;
      if (bVar9) {
        (FVar23.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar11 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar11;
    } while (!bVar9);
    if ((FVar23.ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
       (pFVar17 = pTVar18->Object, local_3e0 = pFVar17, pFVar17 == (FDS_ChatRoomData *)0x0))
    goto LAB_14ba00402;
    ::FString::operator=((FString *)&pFVar26->ShowName,&param_1->GroupName);
    pFVar17->GroupIconID = param_1->GroupIconID;
    pFVar17->bIsInviteGranted = param_1->bIsInviteGranted;
    pUVar21 = UDS_ChatEvent::GetEvent();
    if (pUVar21 != (UDS_ChatEvent *)0x0) {
      FDS_EventDelegate<FString_const_&>::Broadcast
                (&pUVar21->OnRefreshChatRoom,&pFVar26->ConversationID);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar23.ReferenceController);
LAB_14ba0075d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_368.SharedReferenceCount.ReferenceController);
  return;
}

// OnLeaveGroupChatRoom @ 14ba01160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_ChattingManager::OnLeaveGroupChatRoom(UDS_ChattingManager *this,FString *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  UDS_ChattingDataSet *this_00;
  UDS_ChatEvent *pUVar4;
  undefined1 auStack_d8 [32];
  FWeakObjectPtr local_b8 [2];
  undefined1 local_a8 [120];
  void *local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  RemoveChatRoomDataByGroupID(this,(FDS_ChatRoomData *)local_a8,param_1);
  if ((local_a8[0] != None) &&
     ((FDS_ChatConversation *)local_a8._8_8_ != (FDS_ChatConversation *)0x0)) {
    TDS_DataSetGetter<UDS_ChattingDataSet>::Get((ulong64)local_b8);
    bVar3 = FWeakObjectPtr::IsValid(local_b8);
    uVar1 = local_a8._4_4_;
    if (bVar3) {
      this_00 = (UDS_ChattingDataSet *)FWeakObjectPtr::Get(local_b8);
      UDS_ChattingDataSet::RemoveChattingData(this_00,(char)uVar1 + Group1);
    }
    pUVar4 = UDS_ChatEvent::GetEvent();
    if (pUVar4 != (UDS_ChatEvent *)0x0) {
      bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar4->OnUpdateChattingTabs);
      if (bVar3) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar4->OnUpdateChattingTabs).Delegate);
      }
    }
    if (((this->ChatStateData).ChattingTabType == local_a8[0]) &&
       ((this->ChatStateData).SubTabIndex == local_a8._4_4_)) {
      SetChattingTabType(this,Total,-1);
    }
    uVar2 = local_a8._16_8_;
    if ((TReferenceControllerBase<1> *)local_a8._16_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *(atomic<int> *)(local_a8._16_8_ + 8) =
           (atomic<int>)((int)*(atomic<int> *)(local_a8._16_8_ + 8) + 1);
      UNLOCK();
    }
    if ((FDS_ChatConversation *)local_a8._8_8_ != (FDS_ChatConversation *)0x0) {
      RequestDeleteConversation(this,(FString *)local_a8._8_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)uVar2);
  }
  local_28 = 0;
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,TSharedPtr<FDS_ChatUserInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_a8 + 0x38));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_a8._48_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_a8._32_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_a8._16_8_);
  return;
}

// OnLeftParty @ 14ba012e0

void __thiscall UDS_ChattingManager::OnLeftParty(UDS_ChattingManager *this)

{
  if ((this->ChatStateData).ChattingTabType == Party) {
    SetChattingTabType(this,Total,-1);
  }
  if ((this->ChatStateData).InputChattingType == Party) {
    SetInputChattingType(this,Zone);
    return;
  }
  return;
}

// OnLeftRaidParty @ 14ba01330

void __thiscall UDS_ChattingManager::OnLeftRaidParty(UDS_ChattingManager *this)

{
  if ((this->ChatStateData).ChattingTabType == RaidParty) {
    SetChattingTabType(this,Total,-1);
  }
  if ((this->ChatStateData).InputChattingType == RaidParty) {
    SetInputChattingType(this,Zone);
    return;
  }
  return;
}

// OnMarkConversation @ 14ba01380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::OnMarkConversation(UDS_ChattingManager *this,FString *param_1,bool param_2)

{
  longlong lVar1;
  char cVar2;
  FDS_ChatRoomManager *pFVar3;
  FString *pFVar4;
  atomic<int> aVar5;
  uint uVar6;
  int iVar7;
  atomic<int> aVar8;
  UDS_LogManager *pUVar9;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar10;
  UDS_ChatEvent *pUVar11;
  int iVar12;
  wchar_t *pwVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined1 auStackY_188 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pFVar3 = (this->ChatRoomManager).Object;
  if (pFVar3 == (FDS_ChatRoomManager *)0x0) {
LAB_14ba013c1:
    pTVar15 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    iVar7 = (param_1->Data).ArrayNum;
    if (iVar7 == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar12 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar12 = 0;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar13);
    iVar7 = TSet<TTuple<FString,TSharedPtr<FDS_ChatConversation,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TSharedPtr<FDS_ChatConversation,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>,FDefaultSetAllocator>
                        *)pFVar3,uVar6,param_1);
    if (iVar7 == -1) goto LAB_14ba013c1;
    lVar1 = *(longlong *)&pFVar3->ChatConversationMap + (longlong)iVar7 * 0x28;
    puVar16 = (undefined8 *)(lVar1 + 0x10);
    if (lVar1 == 0) {
      puVar16 = (undefined8 *)0x0;
    }
    if (puVar16 == (undefined8 *)0x0) goto LAB_14ba013c1;
    pFVar4 = (FString *)*puVar16;
    pTVar15 = (TReferenceControllerBase<1> *)puVar16[1];
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar4 != (FString *)0x0) {
      cVar2 = *(char *)((longlong)&pFVar4[5].Data.AllocatorInstance.Data + 4);
      *(bool *)((longlong)&pFVar4[5].Data.AllocatorInstance.Data + 4) = param_2;
      if ((bool)cVar2 != param_2) {
        pFVar3 = (this->ChatRoomManager).Object;
        if ((pFVar3 == (FDS_ChatRoomManager *)0x0) ||
           (pTVar10 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                      ::Find((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                              *)&pFVar3->IndexByConversationID,pFVar4),
           pTVar10 == (TWeakPtr<FDS_ChatRoomData,1> *)0x0)) {
LAB_14ba0152e:
          pTVar14 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar14 = (pTVar10->WeakReferenceCount).ReferenceController;
          if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
            aVar5 = pTVar14->SharedReferenceCount;
            do {
              if (aVar5 == (atomic<int>)0x0) goto LAB_14ba0152e;
              LOCK();
              aVar8 = pTVar14->SharedReferenceCount;
              bVar17 = aVar5 == aVar8;
              if (bVar17) {
                pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
                aVar8 = aVar5;
              }
              UNLOCK();
              aVar5 = aVar8;
            } while (!bVar17);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
      }
      pUVar11 = UDS_ChatEvent::GetEvent();
      if (pUVar11 != (UDS_ChatEvent *)0x0) {
        FDS_EventDelegate<FString_const_&>::Broadcast(&pUVar11->OnRefreshChatRoom,param_1);
        bVar17 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                           ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                            &pUVar11->OnUpdateChattingTabs);
        if (bVar17) {
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    (&(pUVar11->OnUpdateChattingTabs).Delegate);
        }
      }
      goto LAB_14ba0143c;
    }
  }
  pUVar9 = UDS_LogManager::GetInst();
  if (pUVar9 != (UDS_LogManager *)0x0) {
    pUVar9 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_ChattingManager::OnMarkConversation",0x27,Yes);
    UDS_LogManager::PrintLog
              (pUVar9,1,Warning,local_158.Ptr,0x3ad,L"chatConversation.IsValid() == false");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
LAB_14ba0143c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  return;
}

// OnRecvConversation @ 14ba02a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::OnRecvConversation(UDS_ChattingManager *this,FDS_ChatConversation *param_1)

{
  int *piVar1;
  TSharedPtr<FDS_ChatRoomManager,1> *this_00;
  FScriptContainerElement *_Src;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  bool bVar5;
  atomic<int> aVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  UDS_LogManager *pUVar10;
  FDS_ChatRoomManager *pFVar11;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar12;
  FDS_ChatUserInfo *pFVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  FDS_ChatRoomData *pFVar16;
  FDS_ChatRoomData *pFVar17;
  undefined1 auStackY_368 [32];
  FSharedReferencer<1> FStack_320;
  FString local_318;
  TSharedPtr<FDS_ChatConversation,1> local_308;
  FDS_ChatUserInfo local_2f8;
  undefined8 local_2c8;
  FSharedReferencer<1> local_2c0;
  undefined8 local_2b8;
  FSharedReferencer<1> local_2b0;
  TSharedPtr<FDS_ChatUserInfo,1> local_2a8;
  FString local_298;
  TSharedPtr<FDS_ChatRoomData,1> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_368;
  this_00 = &this->ChatRoomManager;
  if (this_00->Object == (FDS_ChatRoomManager *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar10 = UDS_LogManager::GetInst();
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"UDS_ChattingManager::OnRecvConversation",0x27,Yes);
    UDS_LogManager::PrintLog
              (pUVar10,1,Warning,local_278.Ptr,0x371,L"ChatRoomManager.IsValid() == false");
    FVar14.Data = (FScriptContainerElement *)local_278._padding_;
    goto LAB_14ba02ff0;
  }
  local_318.Data.ArrayNum = (param_1->ConversationID).Data.ArrayNum;
  lVar15 = (longlong)local_318.Data.ArrayNum;
  pFVar16 = (FDS_ChatRoomData *)0x0;
  _Src = (param_1->ConversationID).Data.AllocatorInstance.Data;
  local_318.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_318.Data.ArrayNum == 0) {
    local_318.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_318.Data.ArrayNum,0,(ForAnyElementType *)&local_318,local_318.Data.ArrayNum
               ,&local_318.Data.ArrayMax);
    memcpy(local_318.Data.AllocatorInstance.Data,_Src,lVar15 * 2);
  }
  if ((this_00->Object == (FDS_ChatRoomManager *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FDS_ChatRoomManager::AddOrUpdateChatConversation(this_00->Object,&local_308,param_1);
  if (local_308.Object == (FDS_ChatConversation *)0x0) {
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_ChattingManager::OnRecvConversation",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar10,1,Warning,local_158.Ptr,0x379,L"chatConversation.IsValid() == false");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    FStack_320.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((local_308.Object == (FDS_ChatConversation *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar15 = (local_308.Object)->WhisperPlayerUID;
    if (0 < lVar15) {
      pFVar11 = TSharedPtr<FDS_ChatRoomManager,1>::operator->(this_00);
      pTVar12 = TMapBase<__int64,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                ::Find((TMapBase<__int64,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                        *)&pFVar11->IndexByWhisper,lVar15);
      pFVar17 = pFVar16;
      if (pTVar12 == (TWeakPtr<FDS_ChatRoomData,1> *)0x0) {
LAB_14ba02cc2:
        local_2c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        local_2c0.ReferenceController = (pTVar12->WeakReferenceCount).ReferenceController;
        if (local_2c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          aVar3 = (local_2c0.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar3 == (atomic<int>)0x0) goto LAB_14ba02cc2;
            LOCK();
            aVar6 = (local_2c0.ReferenceController)->SharedReferenceCount;
            bVar4 = aVar3 == aVar6;
            if (bVar4) {
              (local_2c0.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
              aVar6 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar6;
          } while (!bVar4);
          pFVar17 = pTVar12->Object;
        }
      }
      local_2c8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_320,&local_2c0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2c0.ReferenceController);
      if (pFVar17 == (FDS_ChatRoomData *)0x0) {
        local_2f8.UserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2f8.Nickname.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2f8.UserID.Data.ArrayNum = 0;
        local_2f8.UserID.Data.ArrayMax = 0;
        local_2f8.PlayerUID = 0;
        local_2f8.Nickname.Data.ArrayNum = 0;
        local_2f8.Nickname.Data.ArrayMax = 0;
        local_2f8.CharID = 0;
        local_2f8.CharLevel = 0;
        pFVar13 = (FDS_ChatUserInfo *)DS_Util::FromInt64(&local_298,lVar15);
        if (&local_2f8 != pFVar13) {
          if (local_2f8.UserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8.UserID.Data.AllocatorInstance.Data);
          }
          local_2f8.UserID.Data.AllocatorInstance.Data =
               (pFVar13->UserID).Data.AllocatorInstance.Data;
          (pFVar13->UserID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2f8.UserID.Data.ArrayNum = (pFVar13->UserID).Data.ArrayNum;
          local_2f8.UserID.Data.ArrayMax = (pFVar13->UserID).Data.ArrayMax;
          (pFVar13->UserID).Data.ArrayNum = 0;
          (pFVar13->UserID).Data.ArrayMax = 0;
        }
        if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
        }
        local_2f8.PlayerUID = lVar15;
        ::FString::operator=(&local_2f8.Nickname,&(local_308.Object)->ShowName);
        iVar8 = ((local_308.Object)->WhisperUserID).Data.ArrayNum;
        if (local_2f8.Nickname.Data.ArrayNum == iVar8) {
          if (1 < local_2f8.Nickname.Data.ArrayNum) {
            iVar8 = wcscmp((wchar_t *)local_2f8.Nickname.Data.AllocatorInstance.Data,
                           (wchar_t *)
                           ((local_308.Object)->WhisperUserID).Data.AllocatorInstance.Data);
            bVar4 = iVar8 == 0;
            goto LAB_14ba02da3;
          }
LAB_14ba02daa:
          ::FString::Reset(&local_2f8.Nickname,0);
        }
        else {
          bVar4 = local_2f8.Nickname.Data.ArrayNum + iVar8 == 1;
LAB_14ba02da3:
          if (bVar4) goto LAB_14ba02daa;
        }
        AddOrUpdateChatUserInfo(this,&local_2a8,&local_2f8);
        UpdateRecentWhispers(this,lVar15);
        pFVar11 = TSharedPtr<FDS_ChatRoomManager,1>::operator->(this_00);
        FDS_ChatRoomManager::AddWhisperChatRoom(pFVar11,&local_288,&local_308,&local_2a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_288.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2a8.SharedReferenceCount.ReferenceController);
        if (local_2f8.Nickname.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.Nickname.Data.AllocatorInstance.Data);
        }
        if (local_2f8.UserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.UserID.Data.AllocatorInstance.Data);
        }
      }
    }
    if ((this_00->Object == (FDS_ChatRoomManager *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar11 = this_00->Object;
    iVar8 = local_318.Data.ArrayNum + -1;
    FVar14.Data = local_318.Data.AllocatorInstance.Data;
    if (local_318.Data.ArrayNum == 0) {
      iVar8 = 0;
      FVar14.Data = (FScriptContainerElement *)L"";
    }
    uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar14.Data);
    iVar8 = TSet<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
                        *)&pFVar11->IndexByConversationID,uVar7,&local_318);
    if (iVar8 == -1) {
LAB_14ba02ed8:
      local_2b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      lVar15 = *(longlong *)&pFVar11->IndexByConversationID + (longlong)iVar8 * 0x28;
      pFVar17 = (FDS_ChatRoomData *)(lVar15 + 0x10);
      if (lVar15 == 0) {
        pFVar17 = pFVar16;
      }
      if (pFVar17 == (FDS_ChatRoomData *)0x0) goto LAB_14ba02ed8;
      local_2b0.ReferenceController =
           (TReferenceControllerBase<1> *)(pFVar17->ChatConversation).Object;
      if ((FDS_ChatConversation *)local_2b0.ReferenceController != (FDS_ChatConversation *)0x0) {
        iVar8 = (((FDS_ChatConversation *)local_2b0.ReferenceController)->ConversationID).Data.
                ArrayNum;
        do {
          if (iVar8 == 0) goto LAB_14ba02ed8;
          piVar1 = &(((FDS_ChatConversation *)local_2b0.ReferenceController)->ConversationID).Data.
                    ArrayNum;
          LOCK();
          iVar9 = *piVar1;
          bVar4 = iVar8 == iVar9;
          if (bVar4) {
            *piVar1 = iVar8 + 1;
            iVar9 = iVar8;
          }
          UNLOCK();
          iVar8 = iVar9;
        } while (!bVar4);
        pFVar16 = *(FDS_ChatRoomData **)pFVar17;
      }
    }
    local_2b8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_320,&local_2b0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2b0.ReferenceController);
    if (pFVar16 != (FDS_ChatRoomData *)0x0) {
      if ((pFVar16 == (FDS_ChatRoomData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pFVar16->ChattingTabType != None) &&
         ((pFVar16->ChatConversation).Object != (FDS_ChatConversation *)0x0)) {
        if ((local_308.Object == (FDS_ChatConversation *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar4 = (local_308.Object)->bIsBookmark;
        if ((pFVar16 == (FDS_ChatRoomData *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UpdateBookmark(this,pFVar16->ChattingTabType,pFVar16->SubTabIndex,bVar4);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_320.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_308.SharedReferenceCount.ReferenceController);
  FVar14.Data = local_318.Data.AllocatorInstance.Data;
LAB_14ba02ff0:
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return;
}

// OnRecvCustomInfo @ 14ba03120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::OnRecvCustomInfo
          (UDS_ChattingManager *this,int param_1,FString *param_2,FString *param_3)

{
  undefined1 *puVar1;
  FDS_EventDelegate<int_const_> *this_00;
  FDS_ChatCustomTabManager *this_01;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  FDS_ChatCustomData *pFVar5;
  FDS_ChatCustomData *pFVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  UDS_LogManager *pUVar12;
  ulong64 uVar13;
  UDS_ChatEvent *pUVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStackY_1e8 [32];
  TSharedPtr<FDS_ChatCustomData,1> local_1a8;
  FString local_198;
  FDestructionSentinel local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this_01 = (this->ChatCustomTabManager).Object;
  if (this_01 == (FDS_ChatCustomTabManager *)0x0) {
    local_1a8.Object = (FDS_ChatCustomData *)0x0;
    local_1a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    FDS_ChatCustomTabManager::GetCustomData(this_01,&local_1a8,param_1);
  }
  pFVar5 = local_1a8.Object;
  if (local_1a8.Object == (FDS_ChatCustomData *)0x0) {
    pUVar12 = UDS_LogManager::GetInst();
    if (pUVar12 != (UDS_LogManager *)0x0) {
      pUVar12 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_ChattingManager::OnRecvCustomInfo",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar12,1,Warning,local_168.Ptr,0x730,
                 L"chatCustomData.IsValid() == false (InCustomIndex : %d)");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else {
    if ((local_1a8.Object == (FDS_ChatCustomData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((param_2->Data).ArrayNum < 2) {
      uVar13 = 0;
    }
    else {
      uVar13 = _wtoi64((wchar_t *)(param_2->Data).AllocatorInstance.Data);
    }
    pFVar6 = local_1a8.Object;
    pFVar5->ChatFilterFlags = uVar13;
    if ((local_1a8.Object == (FDS_ChatCustomData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((param_3->Data).ArrayNum < 2) {
      bVar7 = false;
    }
    else {
      iVar10 = _wtoi((wchar_t *)(param_3->Data).AllocatorInstance.Data);
      bVar7 = 0 < iVar10;
    }
    pFVar5 = local_1a8.Object;
    pFVar6->bIsBookmark = bVar7;
    if ((local_1a8.Object == (FDS_ChatCustomData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UpdateBookmark(this,Custom,param_1,pFVar5->bIsBookmark);
    pUVar14 = UDS_ChatEvent::GetEvent();
    if (pUVar14 != (UDS_ChatEvent *)0x0) {
      this_00 = &pUVar14->OnRecvCustomData;
      bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
      if (bVar7) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_188);
        puVar1 = &(pUVar14->OnRecvCustomData).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar7 = false;
        uVar15 = *(int *)&(pUVar14->OnRecvCustomData).Delegate.field_0x10 - 1;
        if (-1 < (int)uVar15) {
          lVar16 = (longlong)(int)uVar15 << 4;
          bVar7 = false;
          do {
            uVar11 = 0;
            if ((int)uVar15 < *(int *)&(pUVar14->OnRecvCustomData).Delegate.field_0x10) {
              uVar11 = ~uVar15 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar2 = *(longlong *)&(pUVar14->OnRecvCustomData).Delegate.field_0x8;
            if (((*(int *)(lVar16 + 8 + lVar2) == 0) ||
                (plVar3 = *(longlong **)(lVar16 + lVar2), plVar3 == (longlong *)0x0)) ||
               (cVar9 = (**(code **)(*plVar3 + 0x68))(), cVar9 == '\0')) {
              bVar7 = true;
            }
            lVar16 = lVar16 + -0x10;
            uVar15 = uVar15 - 1;
          } while (-1 < (int)uVar15);
        }
        puVar1 = &(pUVar14->OnRecvCustomData).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar7) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
        }
        if (local_188.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
        }
      }
      local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.Data.ArrayNum = 0;
      local_198.Data.ArrayMax = 0;
      FDS_EventDelegate<FString_const_&>::Broadcast(&pUVar14->OnRefreshChatRoom,&local_198);
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar14->OnUpdateChattingTabs);
      if (bVar7) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar14->OnUpdateChattingTabs).Delegate);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.SharedReferenceCount.ReferenceController);
  return;
}

// OnRecvRefreshCustomInfo @ 14ba03680

void __thiscall UDS_ChattingManager::OnRecvRefreshCustomInfo(UDS_ChattingManager *this)

{
  bool bVar1;
  UDS_ChatEvent *pUVar2;
  FString local_18;
  
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FDS_EventDelegate<FString_const_&>::Broadcast(&pUVar2->OnRefreshChatRoom,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar2->OnUpdateChattingTabs);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar2->OnUpdateChattingTabs).Delegate);
      return;
    }
  }
  return;
}

// OnRecvTranslateMessage @ 14ba036f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::OnRecvTranslateMessage
          (UDS_ChattingManager *this,ulong64 param_1,FString *param_2)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_DataSetBase *this_00;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_01;
  UObject *pUVar4;
  UClass *pUVar5;
  UDS_ChatEvent *pUVar6;
  longlong lVar7;
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this_02;
  undefined1 *puVar8;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_168;
  FWeakObjectPtr local_160;
  UObject *local_158;
  undefined1 local_150 [8];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  TDS_DataSetGetter<UDS_ChattingDataSet>::Get((ulong64)&local_160);
  bVar2 = FWeakObjectPtr::IsValid(&local_160);
  if (!bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_ChattingManager::OnRecvTranslateMessage",0x2b,Yes);
    UDS_LogManager::PrintLog
              (pUVar3,1,Warning,local_148.Ptr,0x8a3,L"chattingDataSet.IsValid() == false");
    goto LAB_14ba037a6;
  }
  this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_160);
  this_01 = UDS_DataSetBase::GetData(this_00,(ulong64)local_150);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
  if (pUVar4 == (UObject *)0x0) {
LAB_14ba03810:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_ChattingData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14ba03810;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_168.ObjectIndex = 0;
  local_168.ObjectSerialNumber = 0;
  local_158 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_158);
  bVar2 = FWeakObjectPtr::IsValid(&local_168);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_168);
    ::FString::operator=((FString *)&pUVar4[3].field_0x20,param_2);
    pUVar6 = UDS_ChatEvent::GetEvent();
    if (pUVar6 == (UDS_ChatEvent *)0x0) {
      return;
    }
    if (*(int *)&(pUVar6->OnTranslateChatMessage).Subscriptions.field_0x8 ==
        *(int *)&(pUVar6->OnTranslateChatMessage).Subscriptions.field_0x34) {
      return;
    }
    puVar8 = *(undefined1 **)&(pUVar6->OnTranslateChatMessage).Subscriptions.field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(pUVar6->OnTranslateChatMessage).Subscriptions.field_0x38;
    }
    iVar1 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(pUVar6->OnTranslateChatMessage).Subscriptions.field_0x48 -
                               1U & (local_168.ObjectSerialNumber ^ local_168.ObjectIndex)) * 4);
    while( true ) {
      if (iVar1 == -1) {
        return;
      }
      bVar2 = TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>::UEOpEquals<UDS_ChattingData,bool>
                        ((TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr> *)
                         (*(longlong *)&(pUVar6->OnTranslateChatMessage).Subscriptions +
                         (longlong)iVar1 * 0x50),
                         (TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr> *)&local_168);
      if (bVar2) break;
      iVar1 = *(int *)((longlong)iVar1 * 0x50 + 0x48 +
                      *(longlong *)&(pUVar6->OnTranslateChatMessage).Subscriptions);
    }
    if (iVar1 == -1) {
      return;
    }
    lVar7 = (longlong)iVar1 * 0x50 + *(longlong *)&(pUVar6->OnTranslateChatMessage).Subscriptions;
    if (lVar7 == 0) {
      return;
    }
    this_02 = (TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)(lVar7 + 8);
    if (this_02 == (TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)0x0) {
      return;
    }
    TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>::Broadcast(this_02);
    return;
  }
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar3 = UDS_LogManager::GetInst();
  local_148._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_148,"UDS_ChattingManager::OnRecvTranslateMessage",0x2b,Yes);
  UDS_LogManager::PrintLog
            (pUVar3,1,Warning,local_148.Ptr,0x8aa,
             L"chattingDataSet.IsValid() == false  (InChattingDataKey : %llu)");
LAB_14ba037a6:
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// OnRecvUserInfo @ 14ba039e0

void __thiscall
UDS_ChattingManager::OnRecvUserInfo
          (UDS_ChattingManager *this,FString *param_1,FString *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  wchar_t *_Str;
  TSharedPtr<FDS_ChatUserInfo,1> local_68;
  FDS_ChatUserInfo local_58;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar4 = _wtoi64(_Str);
  local_58.UserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.UserID.Data.ArrayNum = 0;
  local_58.UserID.Data.ArrayMax = 0;
  local_58.PlayerUID = 0;
  local_58.Nickname.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Nickname.Data.ArrayNum = 0;
  local_58.Nickname.Data.ArrayMax = 0;
  local_58.CharID = 0;
  local_58.CharLevel = 0;
  if (&local_58 != (FDS_ChatUserInfo *)param_1) {
    uVar1 = (param_1->Data).ArrayNum;
    pFVar3 = (param_1->Data).AllocatorInstance.Data;
    local_58.UserID.Data.ArrayMax = 0;
    local_58.UserID.Data.ArrayNum = uVar1;
    if (uVar1 == 0) {
      local_58.UserID.Data.ArrayNum = 0;
      local_58.UserID.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_58,uVar1,&local_58.UserID.Data.ArrayMax);
      if (uVar1 != 0) {
        memcpy(local_58.UserID.Data.AllocatorInstance.Data,pFVar3,(longlong)(int)uVar1 * 2);
      }
    }
  }
  local_58.PlayerUID = lVar4;
  if (&local_58.Nickname != param_2) {
    iVar2 = (param_2->Data).ArrayNum;
    pFVar3 = (param_2->Data).AllocatorInstance.Data;
    local_58.Nickname.Data.ArrayNum = iVar2;
    if ((iVar2 == 0) && (local_58.Nickname.Data.ArrayMax == 0)) {
      local_58.Nickname.Data.ArrayNum = 0;
      local_58.Nickname.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar2,local_58.Nickname.Data.ArrayMax,(ForAnyElementType *)&local_58.Nickname,
                 iVar2,&local_58.Nickname.Data.ArrayMax);
      if (iVar2 != 0) {
        memcpy(local_58.Nickname.Data.AllocatorInstance.Data,pFVar3,(longlong)iVar2 * 2);
      }
    }
  }
  local_58.CharLevel = param_4;
  local_58.CharID = param_3;
  AddOrUpdateChatUserInfo(this,&local_68,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  if (local_58.Nickname.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Nickname.Data.AllocatorInstance.Data);
  }
  if (local_58.UserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UserID.Data.AllocatorInstance.Data);
  }
  return;
}

// OnRemoveGroupMember @ 14ba03ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::OnRemoveGroupMember
          (UDS_ChattingManager *this,FString *param_1,long64 param_2,FString *param_3,bool param_4)

{
  FDS_ChatRoomManager *pFVar1;
  FDS_ChatRoomData *pFVar2;
  int iVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar6;
  UObject *pUVar7;
  FDS_ChatRoomData *pFVar8;
  FDS_ChatRoomData *this_00;
  bool bVar9;
  undefined1 auStackY_1e8 [32];
  FWeakObjectPtr local_198;
  TSharedPtr<FDS_ChatUserInfo,1> local_190;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pUVar5 = UDS_LogManager::GetInst();
  this_00 = (FDS_ChatRoomData *)0x0;
  if (pUVar5 != (UDS_LogManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    local_178._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_178,"UDS_ChattingManager::OnRemoveGroupMember",0x28,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Display,local_178.Ptr,0x558,
               L"[Chat] OnRemoveGroupMember - GroupID : %s, PlayerUID : %lld, Nickname : %s, IsKicked : %d"
              );
    if ((void *)local_178._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_178._padding_);
    }
  }
  pFVar1 = (this->ChatRoomManager).Object;
  pFVar8 = this_00;
  if ((pFVar1 != (FDS_ChatRoomManager *)0x0) &&
     (pTVar6 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
               ::Find((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                       *)&pFVar1->IndexByGroupID,param_1),
     pTVar6 != (TWeakPtr<FDS_ChatRoomData,1> *)0x0)) {
    pFVar2 = (FDS_ChatRoomData *)(pTVar6->WeakReferenceCount).ReferenceController;
    pFVar8 = pFVar2;
    if (pFVar2 != (FDS_ChatRoomData *)0x0) {
      iVar3 = *(int *)&(pFVar2->ChatConversation).Object;
      do {
        pFVar8 = this_00;
        if (iVar3 == 0) goto LAB_14ba03d01;
        LOCK();
        iVar4 = *(int *)&(pFVar2->ChatConversation).Object;
        bVar9 = iVar3 == iVar4;
        if (bVar9) {
          *(int *)&(pFVar2->ChatConversation).Object = iVar3 + 1;
          iVar4 = iVar3;
        }
        UNLOCK();
        iVar3 = iVar4;
      } while (!bVar9);
      this_00 = pTVar6->Object;
      pFVar8 = pFVar2;
    }
LAB_14ba03d01:
    if (this_00 != (FDS_ChatRoomData *)0x0) {
      UDS_PlayerData::GetMainPlayerData();
      bVar9 = FWeakObjectPtr::IsValid(&local_198);
      if ((bVar9) &&
         (pUVar7 = FWeakObjectPtr::Get(&local_198), *(longlong *)&pUVar7[6].field_0x8 == param_2)) {
        OnLeaveGroupChatRoom(this,param_1);
      }
      else {
        FDS_ChatRoomData::RemoveGroupMember(this_00,&local_190,param_2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_190.SharedReferenceCount.ReferenceController);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar8);
  return;
}

// OnRequestPartyInvite @ 14ba03eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::OnRequestPartyInvite(UDS_ChattingManager *this,FString *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  FDS_PlayerRepo *this_00;
  Player *pPVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  pPVar3 = FDS_PlayerRepo::FindCharTableByName(this_00,param_1);
  lVar1 = (pPVar3->_impl_).player_uid_;
  if (lVar1 < 1) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ChattingManager::OnRequestPartyInvite",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x246,L"[Chat] Player not found : %s")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    FDS_PartyService::RequestPartyInvite((pPVar3->_impl_).game_server_index_,lVar1);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// OnSearchPlayerByPlayerUID @ 14ba03fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::OnSearchPlayerByPlayerUID(UDS_ChattingManager *this,long64 param_1)

{
  FString *pFVar1;
  int iVar2;
  FDS_ChatUserCache *this_00;
  code *pcVar3;
  FDS_ChatUserInfo *pFVar4;
  UDS_LogManager *pUVar5;
  FDS_PlayerRepo *pFVar6;
  FString *pFVar7;
  char *pcVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  undefined1 auStackY_2e8 [32];
  undefined1 local_2b8 [8];
  TSharedPtr<FDS_ChatUserInfo,1> local_2b0;
  FString local_2a0;
  TSharedPtr<FDS_ChatUserInfo,1> local_290;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  if ((this->ChatUserCache).Object == (FDS_ChatUserCache *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_ChattingManager::OnSearchPlayerByPlayerUID",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_278.Ptr,0x664,L"ChatUserCache.IsValid() == false");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
  }
  else {
    pFVar6 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
    iVar2 = (pFVar6->PlayerList).ArrayNum;
    if (iVar2 != 0) {
      pFVar10 = (pFVar6->PlayerList).AllocatorInstance.Data;
      pFVar9 = pFVar10 + (longlong)iVar2 * 0x90;
      while( true ) {
        if ((pFVar6->PlayerList).ArrayNum != iVar2) {
          local_2b8[0] = 0;
          `TCheckedPointerIterator<misc::Player_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_2b8);
        }
        if (pFVar10 == pFVar9) {
          return;
        }
        if (*(longlong *)(pFVar10 + 0x50) == param_1) break;
        pFVar10 = pFVar10 + 0x90;
      }
      this_00 = (this->ChatUserCache).Object;
      if (this_00 == (FDS_ChatUserCache *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_ChattingManager::GetChatUserInfo",0x24,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_158.Ptr,0x62c,L"ChatUserCache.IsValid() == false");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
        local_2b0.Object = (FDS_ChatUserInfo *)0x0;
        local_2b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        FDS_ChatUserCache::FindByPlayerUID(this_00,&local_2b0,param_1);
      }
      pFVar4 = local_2b0.Object;
      bVar11 = local_2b0.Object == (FDS_ChatUserInfo *)0x0;
      if (local_2b0.Object != (FDS_ChatUserInfo *)0x0) {
        pcVar8 = (char *)(*(ulonglong *)(pFVar10 + 0x18) & 0xfffffffffffffffc);
        if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
          pcVar8 = *(char **)pcVar8;
        }
        pFVar7 = DS_Util::ConvertUTF8ToFString(&local_2a0,pcVar8);
        if ((bVar11) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = &pFVar4->Nickname;
        if (pFVar1 != pFVar7) {
          pFVar10 = (pFVar1->Data).AllocatorInstance.Data;
          if (pFVar10 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar10);
          }
          (pFVar1->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
          (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar4->Nickname).Data.ArrayNum = (pFVar7->Data).ArrayNum;
          (pFVar4->Nickname).Data.ArrayMax = (pFVar7->Data).ArrayMax;
          (pFVar7->Data).ArrayNum = 0;
          (pFVar7->Data).ArrayMax = 0;
        }
        if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
        }
        if ((pFVar4 == (FDS_ChatUserInfo *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        AddOrUpdateChatUserInfo(this,&local_290,pFVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_290.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2b0.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// OnSearchPlayerForMessage @ 14ba042d0

void __thiscall
UDS_ChattingManager::OnSearchPlayerForMessage
          (UDS_ChattingManager *this,FString *param_1,FString *param_2)

{
  int iVar1;
  long64 lVar2;
  ForAnyElementType _Src;
  int iVar3;
  FDS_PlayerRepo *pFVar4;
  FDS_ChatUserInfo *pFVar5;
  char *pcVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 local_res20 [8];
  FString local_78;
  TSharedPtr<FDS_ChatUserInfo,1> local_68;
  FDS_ChatUserInfo local_58;
  
  pFVar4 = TDS_Singleton<FDS_PlayerRepo>::GetInst();
  iVar1 = (pFVar4->PlayerList).ArrayNum;
  if (iVar1 != 0) {
    pFVar7 = (pFVar4->PlayerList).AllocatorInstance.Data;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x90;
    do {
      if ((pFVar4->PlayerList).ArrayNum != iVar1) {
        `TCheckedPointerIterator<misc::Player_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar7 == pFVar8) break;
      pcVar6 = (char *)(*(ulonglong *)(pFVar7 + 0x18) & 0xfffffffffffffffc);
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar6 = *(char **)pcVar6;
      }
      DS_Util::ConvertUTF8ToFString(&local_78,pcVar6);
      iVar3 = (param_1->Data).ArrayNum;
      if (local_78.Data.ArrayNum == iVar3) {
        if (local_78.Data.ArrayNum < 2) goto LAB_14ba0439e;
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_78.Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar9 = iVar3 == 0;
      }
      else {
        bVar9 = local_78.Data.ArrayNum + iVar3 == 1;
      }
      if (bVar9) goto LAB_14ba0439e;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      pFVar7 = pFVar7 + 0x90;
    } while( true );
  }
LAB_14ba044e7:
  pFVar7 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  pFVar7 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return;
LAB_14ba0439e:
  lVar2 = *(long64 *)(pFVar7 + 0x50);
  local_58.Nickname.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.UserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Nickname.Data.ArrayNum = 0;
  local_58.Nickname.Data.ArrayMax = 0;
  local_58.CharID = 0;
  local_58.CharLevel = 0;
  local_58.UserID.Data.ArrayNum = 0;
  local_58.UserID.Data.ArrayMax = 0;
  local_58.PlayerUID = 0;
  pFVar5 = (FDS_ChatUserInfo *)DS_Util::FromInt64((FString *)&local_68,lVar2);
  if (&local_58 != pFVar5) {
    if (local_58.UserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.UserID.Data.AllocatorInstance.Data);
    }
    local_58.UserID.Data.AllocatorInstance.Data = (pFVar5->UserID).Data.AllocatorInstance.Data;
    (pFVar5->UserID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.UserID.Data.ArrayNum = (pFVar5->UserID).Data.ArrayNum;
    local_58.UserID.Data.ArrayMax = (pFVar5->UserID).Data.ArrayMax;
    (pFVar5->UserID).Data.ArrayNum = 0;
    (pFVar5->UserID).Data.ArrayMax = 0;
  }
  if (local_68.Object != (FDS_ChatUserInfo *)0x0) {
    FMemory::Free(local_68.Object);
  }
  _Src.Data = local_78.Data.AllocatorInstance.Data;
  local_58.Nickname.Data.ArrayNum = local_78.Data.ArrayNum;
  local_58.PlayerUID = lVar2;
  if ((local_78.Data.ArrayNum == 0) && (local_58.Nickname.Data.ArrayMax == 0)) {
    local_58.Nickname.Data.ArrayNum = 0;
    local_58.Nickname.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,local_58.Nickname.Data.ArrayMax,
               (ForAnyElementType *)&local_58.Nickname,local_78.Data.ArrayNum,
               &local_58.Nickname.Data.ArrayMax);
    if (local_78.Data.ArrayNum != 0) {
      memcpy(local_58.Nickname.Data.AllocatorInstance.Data,_Src.Data,
             (longlong)local_78.Data.ArrayNum * 2);
    }
  }
  local_58._40_8_ = *(undefined8 *)(pFVar7 + 0x74);
  AddOrUpdateChatUserInfo(this,&local_68,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SendWhisperChattingMessage(this,lVar2,param_2);
  UpdateRecentWhispers(this,lVar2);
  if (local_58.Nickname.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Nickname.Data.AllocatorInstance.Data);
  }
  if (local_58.UserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UserID.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  goto LAB_14ba044e7;
}

// ParseChattingCommand @ 14ba0adc0

void __thiscall
UDS_ChattingManager::ParseChattingCommand
          (UDS_ChattingManager *this,FString *param_1,EDS_ChattingType *param_2,
          EDS_CommandType *param_3,FString *param_4)

{
  bool bVar1;
  EDS_ChattingType EVar2;
  FScriptContainerElement FVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  wchar_t *pwVar11;
  int iVar12;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  *param_2 = None;
  *param_3 = None;
  if ((param_1->Data).ArrayNum < 2) {
    return;
  }
  ::FString::TrimStartAndEnd(param_1,&local_48);
  iVar6 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  if ((iVar6 < 2) || (bVar1 = ::FString::StartsWith(&local_48,L"/",1,IgnoreCase), !bVar1))
  goto LAB_14ba0b00f;
  iVar4 = ::FString::Find(&local_48,L" ",1,IgnoreCase,FromStart,-1);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pwVar11 = L"";
  iVar6 = 0;
  if (iVar4 == -1) {
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = iVar6;
    }
    ::FString::AssignRange(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar4);
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::FString::operator=(param_4,&local_28);
    FVar8.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    iVar7 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar7 = iVar6;
    }
    if (iVar4 < iVar7) {
      iVar7 = iVar4;
    }
    iVar12 = iVar6;
    if (0 < iVar7) {
      iVar12 = iVar7;
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    ::FString::ConstructFromPtrSize(&local_28,(wchar_t *)FVar8.Data,iVar12);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_58.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_58.Data.ArrayNum = local_28.Data.ArrayNum;
    local_58.Data.ArrayMax = local_28.Data.ArrayMax;
    ::FString::RightChop(&local_48,&local_38,iVar4 + 1);
    FVar8.Data = local_38.Data.AllocatorInstance.Data;
    if (param_4 != &local_38) {
      pFVar10 = (param_4->Data).AllocatorInstance.Data;
      if (pFVar10 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar10);
      }
      (param_4->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (param_4->Data).ArrayNum = local_38.Data.ArrayNum;
      (param_4->Data).ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar8.Data = (FScriptContainerElement *)0x0;
    }
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  ::FString::RemoveFromStart(&local_58,L"/",1,IgnoreCase);
  EVar2 = GetChattingCommandType(this,&local_58);
  *param_2 = EVar2;
  if (EVar2 == None) {
    if (local_58.Data.ArrayNum != 0) {
      iVar6 = local_58.Data.ArrayNum + -1;
      pwVar11 = (wchar_t *)local_58.Data.AllocatorInstance.Data;
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar11);
    iVar6 = TSet<TTuple<FString,enum_EDS_CommandType>,TDefaultMapHashableKeyFuncs<FString,enum_EDS_CommandType,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>(&this->ChattingExtraCommandMap,uVar5,&local_58);
    if (iVar6 == -1) {
LAB_14ba0afed:
      FVar3 = (FScriptContainerElement)0x0;
    }
    else {
      lVar9 = (longlong)iVar6 * 0x20 + *(longlong *)&this->ChattingExtraCommandMap;
      pFVar10 = (FScriptContainerElement *)(lVar9 + 0x10);
      if (lVar9 == 0) {
        pFVar10 = (FScriptContainerElement *)0x0;
      }
      if (pFVar10 == (FScriptContainerElement *)0x0) goto LAB_14ba0afed;
      FVar3 = *pFVar10;
    }
    *param_3 = (EDS_CommandType)FVar3;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_14ba0b00f:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// RemoveChatRoomData @ 14ba0f130

FDS_ChatRoomData * __thiscall
UDS_ChattingManager::RemoveChatRoomData
          (UDS_ChattingManager *this,FDS_ChatRoomData *__return_storage_ptr__,
          EDS_ChattingTabType param_1,int param_2)

{
  FDS_ChatRoomManager *this_00;
  
  this_00 = (this->ChatRoomManager).Object;
  if (this_00 == (FDS_ChatRoomManager *)0x0) {
    *(undefined2 *)&__return_storage_ptr__->field_0x1 = 0;
    __return_storage_ptr__->field_0x3 = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x10 = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x18 = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x38 = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x48 = 0;
    *(undefined2 *)&__return_storage_ptr__->field_0x8d = 0;
    __return_storage_ptr__->field_0x8f = 0;
    (__return_storage_ptr__->ChatConversation).Object = (FDS_ChatConversation *)0x0;
    (__return_storage_ptr__->ChatConversation).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->Whisper).Object = (FDS_ChatUserInfo *)0x0;
    (__return_storage_ptr__->Whisper).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->GroupOwner).Object = (FDS_ChatUserInfo *)0x0;
    (__return_storage_ptr__->GroupOwner).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)&__return_storage_ptr__->GroupMembers = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x8 = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x20 = 0;
    __return_storage_ptr__->ChattingTabType = None;
    __return_storage_ptr__->SubTabIndex = -1;
    *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x28 = 0;
    *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x2c = 0x80;
    *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x34 = 0;
    *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x30 = 0xffffffff;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x40 = 0;
    __return_storage_ptr__->GroupIconID = 0;
    __return_storage_ptr__->bIsInviteGranted = false;
    return __return_storage_ptr__;
  }
  FDS_ChatRoomManager::RemoveChatRoom(this_00,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// RemoveChatRoomDataByConversationID @ 14ba0f1e0

FDS_ChatRoomData * __thiscall
UDS_ChattingManager::RemoveChatRoomDataByConversationID
          (UDS_ChattingManager *this,FDS_ChatRoomData *__return_storage_ptr__,FString *param_1)

{
  FDS_ChatRoomManager *this_00;
  
  this_00 = (this->ChatRoomManager).Object;
  if (this_00 == (FDS_ChatRoomManager *)0x0) {
    *(undefined2 *)&__return_storage_ptr__->field_0x1 = 0;
    __return_storage_ptr__->field_0x3 = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x10 = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x18 = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x38 = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x48 = 0;
    *(undefined2 *)&__return_storage_ptr__->field_0x8d = 0;
    __return_storage_ptr__->field_0x8f = 0;
    (__return_storage_ptr__->ChatConversation).Object = (FDS_ChatConversation *)0x0;
    (__return_storage_ptr__->ChatConversation).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->Whisper).Object = (FDS_ChatUserInfo *)0x0;
    (__return_storage_ptr__->Whisper).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->GroupOwner).Object = (FDS_ChatUserInfo *)0x0;
    (__return_storage_ptr__->GroupOwner).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)&__return_storage_ptr__->GroupMembers = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x8 = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x20 = 0;
    __return_storage_ptr__->ChattingTabType = None;
    __return_storage_ptr__->SubTabIndex = -1;
    *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x28 = 0;
    *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x2c = 0x80;
    *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x34 = 0;
    *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x30 = 0xffffffff;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x40 = 0;
    __return_storage_ptr__->GroupIconID = 0;
    __return_storage_ptr__->bIsInviteGranted = false;
    return __return_storage_ptr__;
  }
  FDS_ChatRoomManager::RemoveChatRoomByConversationID(this_00,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// RemoveChatRoomDataByGroupID @ 14ba0f290

FDS_ChatRoomData * __thiscall
UDS_ChattingManager::RemoveChatRoomDataByGroupID
          (UDS_ChattingManager *this,FDS_ChatRoomData *__return_storage_ptr__,FString *param_1)

{
  FDS_ChatRoomManager *this_00;
  
  this_00 = (this->ChatRoomManager).Object;
  if (this_00 == (FDS_ChatRoomManager *)0x0) {
    *(undefined2 *)&__return_storage_ptr__->field_0x1 = 0;
    __return_storage_ptr__->field_0x3 = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x10 = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x18 = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x38 = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x48 = 0;
    *(undefined2 *)&__return_storage_ptr__->field_0x8d = 0;
    __return_storage_ptr__->field_0x8f = 0;
    (__return_storage_ptr__->ChatConversation).Object = (FDS_ChatConversation *)0x0;
    (__return_storage_ptr__->ChatConversation).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->Whisper).Object = (FDS_ChatUserInfo *)0x0;
    (__return_storage_ptr__->Whisper).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->GroupOwner).Object = (FDS_ChatUserInfo *)0x0;
    (__return_storage_ptr__->GroupOwner).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)&__return_storage_ptr__->GroupMembers = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x8 = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x20 = 0;
    __return_storage_ptr__->ChattingTabType = None;
    __return_storage_ptr__->SubTabIndex = -1;
    *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x28 = 0;
    *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x2c = 0x80;
    *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x34 = 0;
    *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x30 = 0xffffffff;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x40 = 0;
    __return_storage_ptr__->GroupIconID = 0;
    __return_storage_ptr__->bIsInviteGranted = false;
    return __return_storage_ptr__;
  }
  FDS_ChatRoomManager::RemoveChatRoomByGroupID(this_00,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// RemoveChatRoomDataByWhisper @ 14ba0f340

FDS_ChatRoomData * __thiscall
UDS_ChattingManager::RemoveChatRoomDataByWhisper
          (UDS_ChattingManager *this,FDS_ChatRoomData *__return_storage_ptr__,long64 param_1)

{
  FDS_ChatRoomManager *this_00;
  
  this_00 = (this->ChatRoomManager).Object;
  if (this_00 == (FDS_ChatRoomManager *)0x0) {
    *(undefined2 *)&__return_storage_ptr__->field_0x1 = 0;
    __return_storage_ptr__->field_0x3 = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x10 = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x18 = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x38 = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x48 = 0;
    *(undefined2 *)&__return_storage_ptr__->field_0x8d = 0;
    __return_storage_ptr__->field_0x8f = 0;
    (__return_storage_ptr__->ChatConversation).Object = (FDS_ChatConversation *)0x0;
    (__return_storage_ptr__->ChatConversation).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->Whisper).Object = (FDS_ChatUserInfo *)0x0;
    (__return_storage_ptr__->Whisper).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->GroupOwner).Object = (FDS_ChatUserInfo *)0x0;
    (__return_storage_ptr__->GroupOwner).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)&__return_storage_ptr__->GroupMembers = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x8 = 0;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x20 = 0;
    __return_storage_ptr__->ChattingTabType = None;
    __return_storage_ptr__->SubTabIndex = -1;
    *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x28 = 0;
    *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x2c = 0x80;
    *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x34 = 0;
    *(undefined4 *)&(__return_storage_ptr__->GroupMembers).field_0x30 = 0xffffffff;
    *(undefined8 *)&(__return_storage_ptr__->GroupMembers).field_0x40 = 0;
    __return_storage_ptr__->GroupIconID = 0;
    __return_storage_ptr__->bIsInviteGranted = false;
    return __return_storage_ptr__;
  }
  FDS_ChatRoomManager::RemoveChatRoomByWhisper(this_00,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// RemoveChatUserInfo @ 14ba0f3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_ChatUserInfo * __thiscall
UDS_ChattingManager::RemoveChatUserInfo
          (UDS_ChattingManager *this,FDS_ChatUserInfo *__return_storage_ptr__,FString *param_1)

{
  FDS_ChatUserCache *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = (this->ChatUserCache).Object;
  if (this_00 == (FDS_ChatUserCache *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ChattingManager::RemoveChatUserInfo",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_148.Ptr,0x621,L"ChatUserCache.IsValid() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    (__return_storage_ptr__->UserID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UserID).Data.ArrayNum = 0;
    (__return_storage_ptr__->UserID).Data.ArrayMax = 0;
    __return_storage_ptr__->PlayerUID = 0;
    (__return_storage_ptr__->Nickname).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Nickname).Data.ArrayNum = 0;
    (__return_storage_ptr__->Nickname).Data.ArrayMax = 0;
    __return_storage_ptr__->CharID = 0;
    __return_storage_ptr__->CharLevel = 0;
  }
  else {
    FDS_ChatUserCache::Remove(this_00,__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// RemoveChatUserInfo @ 14ba0f500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_ChatUserInfo * __thiscall
UDS_ChattingManager::RemoveChatUserInfo
          (UDS_ChattingManager *this,FDS_ChatUserInfo *__return_storage_ptr__,long64 param_1)

{
  FDS_ChatUserCache *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = (this->ChatUserCache).Object;
  if (this_00 == (FDS_ChatUserCache *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ChattingManager::RemoveChatUserInfo",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_148.Ptr,0x616,L"ChatUserCache.IsValid() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    (__return_storage_ptr__->UserID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->UserID).Data.ArrayNum = 0;
    (__return_storage_ptr__->UserID).Data.ArrayMax = 0;
    __return_storage_ptr__->PlayerUID = 0;
    (__return_storage_ptr__->Nickname).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Nickname).Data.ArrayNum = 0;
    (__return_storage_ptr__->Nickname).Data.ArrayMax = 0;
    __return_storage_ptr__->CharID = 0;
    __return_storage_ptr__->CharLevel = 0;
  }
  else {
    FDS_ChatUserCache::Remove(this_00,__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// RequestBookmarkConversation @ 14ba12d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::RequestBookmarkConversation
          (UDS_ChattingManager *this,FString *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_TencentCloudChatManager *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_298 [32];
  TSharedPtr<FDS_V2TIMRequestMarkConversation,1> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
  this_00 = UDS_TencentCloudChatManager::GetInst();
  if (this_00 == (UDS_TencentCloudChatManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_ChattingManager::RequestBookmarkConversation",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_258.Ptr,0x30c,L"tencentChatManager == nullptr");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
  }
  else if (this_00->ChatState == LoggedIn) {
    UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestMarkConversation>(this_00,&local_268);
    if (local_268.Object == (FDS_V2TIMRequestMarkConversation *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    ::FString::operator=(&(local_268.Object)->ConversationID,param_1);
    (local_268.Object)->bIsBookmark = param_2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_268.SharedReferenceCount.ReferenceController);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::Request_BookmarkConversation",0x39,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x260,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// RequestChangeGroupChatRoomOwner @ 14ba12f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::RequestChangeGroupChatRoomOwner
          (UDS_ChattingManager *this,FString *param_1,long64 param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  UDS_TencentCloudChatManager *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_298 [32];
  TSharedPtr<FDS_V2TIMRequestTransferGroupOwner,1> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
  this_00 = UDS_TencentCloudChatManager::GetInst();
  if (this_00 == (UDS_TencentCloudChatManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_ChattingManager::RequestChangeGroupChatRoomOwner",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_258.Ptr,0x480,L"tencentChatManager == nullptr");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
  }
  else if (this_00->ChatState == LoggedIn) {
    UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestTransferGroupOwner>(this_00,&local_268)
    ;
    if (local_268.Object == (FDS_V2TIMRequestTransferGroupOwner *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    ::FString::operator=(&(local_268.Object)->GroupID,param_1);
    if (local_268.Object == (FDS_V2TIMRequestTransferGroupOwner *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (local_268.Object)->PlayerUID = param_2;
    (local_268.Object)->bLeaveAfter = param_3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_268.SharedReferenceCount.ReferenceController);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::Request_ChangeGroupOwner",0x35,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x392,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// RequestCreateGroupChatRoom @ 14ba13190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::RequestCreateGroupChatRoom
          (UDS_ChattingManager *this,FString *param_1,int param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UDS_TencentCloudChatManager *this_00;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_2d8 [32];
  TSharedPtr<FDS_V2TIMRequestCreateGroup,1> local_2a8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  this_00 = UDS_TencentCloudChatManager::GetInst();
  if (this_00 == (UDS_TencentCloudChatManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_ChattingManager::RequestCreateGroupChatRoom",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_278.Ptr,0x400,L"tencentChatManager == nullptr");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
  }
  else {
    iVar3 = GetChatRoomDataCount(this,Group);
    iVar4 = DS_CommonDataHelper::ChattingMaxGroupJoinCount();
    if (iVar3 < iVar4) {
      iVar3 = DS_CommonDataHelper::ChattingMaxGroupMemberCount();
      if (this_00->ChatState == LoggedIn) {
        UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestCreateGroup>(this_00,&local_2a8);
        if ((local_2a8.Object == (FDS_V2TIMRequestCreateGroup *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        ::FString::operator=(&(local_2a8.Object)->GroupName,param_1);
        (local_2a8.Object)->GroupIconID = param_2;
        (local_2a8.Object)->bIsInviteGranted = param_3;
        (local_2a8.Object)->MaxMemberCount = iVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2a8.SharedReferenceCount.ReferenceController);
      }
      else {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_TencentCloudChatManager::Request_CreateGroup",0x30,Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_158.Ptr,799,L"[TCC] IsLoggedIn() == false");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
      }
    }
    else {
      local_298._0_8_ = 0;
      local_298._8_8_ = 0;
      local_298._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0xc54c,Complete_None_01,&local_298);
    }
  }
  return;
}

// RequestDeleteConversation @ 14ba133c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::RequestDeleteConversation(UDS_ChattingManager *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_TencentCloudChatManager *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_298 [32];
  TSharedPtr<FDS_V2TIMRequestDeleteConversation,1> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
  this_00 = UDS_TencentCloudChatManager::GetInst();
  if (this_00 == (UDS_TencentCloudChatManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_ChattingManager::RequestDeleteConversation",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_258.Ptr,0x300,L"tencentChatManager == nullptr");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
  }
  else if (this_00->ChatState == LoggedIn) {
    UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestDeleteConversation>(this_00,&local_268)
    ;
    if (local_268.Object == (FDS_V2TIMRequestDeleteConversation *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    ::FString::operator=(&(local_268.Object)->ConversationID,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_268.SharedReferenceCount.ReferenceController);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::Request_DeleteConversation",0x37,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x26e,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// RequestGroupChatRoomInfo @ 14ba13590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::RequestGroupChatRoomInfo
          (UDS_ChattingManager *this,FString *param_1,FString *param_2,int param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  UDS_TencentCloudChatManager *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_2a8 [32];
  TSharedPtr<FDS_V2TIMRequestSetGroupInfo,1> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  this_00 = UDS_TencentCloudChatManager::GetInst();
  if (this_00 == (UDS_TencentCloudChatManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"UDS_ChattingManager::RequestGroupChatRoomInfo",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_268.Ptr,0x413,L"tencentChatManager == nullptr");
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
  }
  else if (this_00->ChatState == LoggedIn) {
    UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestSetGroupInfo>(this_00,&local_278);
    if (local_278.Object == (FDS_V2TIMRequestSetGroupInfo *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    ::FString::operator=(&(local_278.Object)->GroupID,param_1);
    ::FString::operator=(&(local_278.Object)->GroupName,param_2);
    (local_278.Object)->bIsInviteGranted = param_4;
    (local_278.Object)->GroupIconID = param_3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_278.SharedReferenceCount.ReferenceController);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_TencentCloudChatManager::Request_ChangeGroupInfo",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x33c,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return;
}

// RequestGroupMemberList @ 14ba13780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::RequestGroupMemberList
          (UDS_ChattingManager *this,FString *param_1,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_2)

{
  UDS_TencentCloudChatManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_188 [32];
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = UDS_TencentCloudChatManager::GetInst();
  if (this_00 == (UDS_TencentCloudChatManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ChattingManager::RequestGroupMemberList",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x41f,L"tencentChatManager == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_158._0_8_ = 0;
    local_158._8_8_ = 0;
    local_158._16_4_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_158,param_2);
    UDS_TencentCloudChatManager::Request_GroupMemberList(this_00,param_1,&local_158);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// RequestJoinGroupChatRoom @ 14ba138c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::RequestJoinGroupChatRoom(UDS_ChattingManager *this,FString *param_1)

{
  FDS_ChatRoomManager *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  int iVar5;
  int iVar6;
  UDS_TencentCloudChatManager *this_00;
  UDS_LogManager *pUVar7;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  undefined1 auStackY_3f8 [32];
  TSharedPtr<FDS_V2TIMRequestJoinGroup,1> local_3b8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  this_00 = UDS_TencentCloudChatManager::GetInst();
  if (this_00 == (UDS_TencentCloudChatManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_388._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_388,"UDS_ChattingManager::RequestJoinGroupChatRoom",0x2d,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_388.Ptr,0x42b,L"tencentChatManager == nullptr");
    if ((void *)local_388._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_388._padding_);
    return;
  }
  pFVar1 = (this->ChatRoomManager).Object;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  pTVar10 = pTVar9;
  if (((pFVar1 != (FDS_ChatRoomManager *)0x0) &&
      (pTVar8 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                ::Find((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                        *)&pFVar1->IndexByGroupID,param_1),
      pTVar8 != (TWeakPtr<FDS_ChatRoomData,1> *)0x0)) &&
     (pTVar11 = (pTVar8->WeakReferenceCount).ReferenceController, pTVar10 = pTVar11,
     pTVar11 != (TReferenceControllerBase<1> *)0x0)) {
    aVar3 = pTVar11->SharedReferenceCount;
    do {
      pTVar10 = pTVar9;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14ba139d1;
      LOCK();
      aVar4 = pTVar11->SharedReferenceCount;
      bVar12 = aVar3 == aVar4;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar12);
    pTVar10 = pTVar11;
    if (pTVar8->Object != (FDS_ChatRoomData *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_268._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_268,"UDS_ChattingManager::RequestJoinGroupChatRoom",0x2d,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_268.Ptr,0x432,
                   L"[Chat] Already Joined Group - GroupID : %s");
        if ((void *)local_268._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_268._padding_);
        }
      }
      goto LAB_14ba13b98;
    }
  }
LAB_14ba139d1:
  iVar5 = GetChatRoomDataCount(this,Group);
  iVar6 = DS_CommonDataHelper::ChattingMaxGroupJoinCount();
  pTVar11 = pTVar10;
  if (iVar5 < iVar6) {
    if (this_00->ChatState == LoggedIn) {
      UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestJoinGroup>(this_00,&local_3b8);
      if ((local_3b8.Object == (FDS_V2TIMRequestJoinGroup *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FString::operator=(&(local_3b8.Object)->GroupID,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3b8.SharedReferenceCount.ReferenceController);
    }
    else {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_TencentCloudChatManager::Request_JoinGroup",0x2e,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_148.Ptr,0x359,L"[TCC] IsLoggedIn() == false");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
  }
  else {
    local_3a8._0_8_ = 0;
    local_3a8._8_8_ = 0;
    local_3a8._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0xc54c,Complete_None_01,&local_3a8);
  }
LAB_14ba13b98:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return;
}

// RequestKickGroupMember @ 14ba13be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::RequestKickGroupMember
          (UDS_ChattingManager *this,FString *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  UDS_TencentCloudChatManager *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_298 [32];
  TSharedPtr<FDS_V2TIMRequestKickGroupMember,1> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_298;
  this_00 = UDS_TencentCloudChatManager::GetInst();
  if (this_00 == (UDS_TencentCloudChatManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_258._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_258,"UDS_ChattingManager::RequestKickGroupMember",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_258.Ptr,0x474,L"tencentChatManager == nullptr");
      if ((void *)local_258._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_258._padding_);
      }
    }
  }
  else if (this_00->ChatState == LoggedIn) {
    UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestKickGroupMember>(this_00,&local_268);
    if (local_268.Object == (FDS_V2TIMRequestKickGroupMember *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    ::FString::operator=(&(local_268.Object)->GroupID,param_1);
    if (local_268.Object == (FDS_V2TIMRequestKickGroupMember *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (local_268.Object)->PlayerUID = param_2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_268.SharedReferenceCount.ReferenceController);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_TencentCloudChatManager::Request_KickGroupMember",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,899,L"[TCC] IsLoggedIn() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// RequestLeaveGroupChatRoom @ 14ba13df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::RequestLeaveGroupChatRoom(UDS_ChattingManager *this,FString *param_1)

{
  FDS_ChatRoomManager *pFVar1;
  FDS_ChatRoomData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDS_ChatUserInfo *pFVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  UDS_TencentCloudChatManager *this_00;
  UDS_LogManager *pUVar8;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar9;
  UObject *pUVar10;
  FDS_ChatRoomData *pFVar11;
  FDS_ChatRoomData *pFVar12;
  bool bVar13;
  undefined1 auStackY_768 [32];
  FWeakObjectPtr local_728;
  TSharedPtr<FDS_V2TIMRequestDismissGroup,1> local_720;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_708;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_768;
  this_00 = UDS_TencentCloudChatManager::GetInst();
  if (this_00 == (UDS_TencentCloudChatManager *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_708._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_708,"UDS_ChattingManager::RequestLeaveGroupChatRoom",0x2e,Yes);
    UDS_LogManager::PrintLog(pUVar8,1,Warning,local_708.Ptr,0x444,L"tencentChatManager == nullptr");
    if ((void *)local_708._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_708._padding_);
    return;
  }
  pFVar1 = (this->ChatRoomManager).Object;
  if ((pFVar1 == (FDS_ChatRoomManager *)0x0) ||
     (pTVar9 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
               ::Find((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                       *)&pFVar1->IndexByGroupID,param_1),
     pTVar9 == (TWeakPtr<FDS_ChatRoomData,1> *)0x0)) {
    pFVar12 = (FDS_ChatRoomData *)0x0;
  }
  else {
    pFVar2 = (FDS_ChatRoomData *)(pTVar9->WeakReferenceCount).ReferenceController;
    pFVar11 = (FDS_ChatRoomData *)0x0;
    pFVar12 = pFVar2;
    if (pFVar2 != (FDS_ChatRoomData *)0x0) {
      iVar6 = *(int *)&(pFVar2->ChatConversation).Object;
      do {
        pFVar11 = (FDS_ChatRoomData *)0x0;
        pFVar12 = (FDS_ChatRoomData *)0x0;
        if (iVar6 == 0) goto LAB_14ba13f01;
        LOCK();
        iVar7 = *(int *)&(pFVar2->ChatConversation).Object;
        bVar13 = iVar6 == iVar7;
        if (bVar13) {
          *(int *)&(pFVar2->ChatConversation).Object = iVar6 + 1;
          iVar7 = iVar6;
        }
        UNLOCK();
        iVar6 = iVar7;
      } while (!bVar13);
      pFVar11 = pTVar9->Object;
      pFVar12 = pFVar2;
    }
LAB_14ba13f01:
    if (pFVar11 != (FDS_ChatRoomData *)0x0) {
      pTVar3 = (pFVar11->GroupOwner).SharedReferenceCount.ReferenceController;
      pFVar4 = (pFVar11->GroupOwner).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar4 == (FDS_ChatUserInfo *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        if (pUVar8 != (UDS_LogManager *)0x0) {
          pUVar8 = UDS_LogManager::GetInst();
          local_5e8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_5e8,"UDS_ChattingManager::RequestLeaveGroupChatRoom",0x2e,Yes);
          UDS_LogManager::PrintLog
                    (pUVar8,1,Warning,local_5e8.Ptr,0x452,
                     L"groupOwner.IsValid() == false (GroupID : %s)");
          if ((void *)local_5e8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_5e8._padding_);
          }
        }
      }
      else {
        UDS_PlayerData::GetMainPlayerData();
        bVar13 = FWeakObjectPtr::IsValid(&local_728);
        if (bVar13) {
          pUVar10 = FWeakObjectPtr::Get(&local_728);
          if (*(longlong *)&pUVar10[6].field_0x8 == pFVar4->PlayerUID) {
            if (*(int *)&(pFVar11->GroupMembers).field_0x8 -
                *(int *)&(pFVar11->GroupMembers).field_0x34 == 1) {
              if (this_00->ChatState == LoggedIn) {
                UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestDismissGroup>
                          (this_00,&local_720);
                if ((local_720.Object == (FDS_V2TIMRequestDismissGroup *)0x0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar13)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                ::FString::operator=(&(local_720.Object)->GroupID,param_1);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_720.SharedReferenceCount.ReferenceController);
              }
              else {
                pUVar8 = UDS_LogManager::GetInst();
                if (pUVar8 != (UDS_LogManager *)0x0) {
                  pUVar8 = UDS_LogManager::GetInst();
                  local_3a8._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_3a8,"UDS_TencentCloudChatManager::Request_DismissGroup",0x31,Yes
                            );
                  UDS_LogManager::PrintLog
                            (pUVar8,1,Warning,local_3a8.Ptr,0x375,L"[TCC] IsLoggedIn() == false");
                  if ((void *)local_3a8._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_3a8._padding_);
                  }
                }
              }
            }
            else {
              pUVar8 = UDS_LogManager::GetInst();
              if (pUVar8 != (UDS_LogManager *)0x0) {
                pUVar8 = UDS_LogManager::GetInst();
                local_288._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_288,"UDS_ChattingManager::RequestLeaveGroupChatRoom",0x2e,Yes);
                UDS_LogManager::PrintLog
                          (pUVar8,1,Warning,local_288.Ptr,0x466,
                           L"[Chat] Group Owner & GroupMemberCount() > 1");
                if ((void *)local_288._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_288._padding_);
                }
              }
            }
          }
          else {
            UDS_TencentCloudChatManager::Request_LeaveGroup(this_00,param_1);
          }
        }
        else {
          pUVar8 = UDS_LogManager::GetInst();
          if (pUVar8 != (UDS_LogManager *)0x0) {
            pUVar8 = UDS_LogManager::GetInst();
            local_4c8._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_4c8,"UDS_ChattingManager::RequestLeaveGroupChatRoom",0x2e,Yes);
            UDS_LogManager::PrintLog
                      (pUVar8,1,Warning,local_4c8.Ptr,0x459,L"myPlayerData.IsValid() == false");
            if ((void *)local_4c8._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_4c8._padding_);
            }
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      goto LAB_14ba142c4;
    }
  }
  pUVar8 = UDS_LogManager::GetInst();
  if (pUVar8 != (UDS_LogManager *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_ChattingManager::RequestLeaveGroupChatRoom",0x2e,Yes);
    UDS_LogManager::PrintLog
              (pUVar8,1,Warning,local_168.Ptr,1099,
               L"groupChatRoomData.IsValid() == false (GroupID : %s)");
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
  }
LAB_14ba142c4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar12);
  return;
}

// RequestMarkAllConversationAsRead @ 14ba14300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ChattingManager::RequestMarkAllConversationAsRead(UDS_ChattingManager *this)

{
  FDS_ChatConversation *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FDS_ChatRoomData *pFVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  UDS_TencentCloudChatManager *this_00;
  UDS_LogManager *pUVar8;
  FDS_ChatRoomManager *pFVar9;
  ForAnyElementType FVar10;
  TSharedPtr<FDS_ChatRoomManager,1> *this_01;
  int iVar11;
  int iVar12;
  double dVar13;
  undefined1 auStackY_558 [32];
  FString local_510;
  FDS_MarkAsReadKey local_500;
  TSharedPtr<FDS_ChatRoomData,1> local_4e8;
  TSharedPtr<FDS_ChatRoomData,1> local_4d8;
  TSharedPtr<FDS_V2TIMRequestMarkMessageAsRead,1> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_558;
  this_00 = UDS_TencentCloudChatManager::GetInst();
  if (this_00 == (UDS_TencentCloudChatManager *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_4b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4b8,"UDS_ChattingManager::RequestMarkAllConversationAsRead",0x35,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_4b8.Ptr,0x336,L"tencentChatManager == nullptr");
      if ((void *)local_4b8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4b8._padding_);
      }
    }
  }
  else {
    this_01 = &this->ChatRoomManager;
    pFVar9 = this_01->Object;
    if (pFVar9 == (FDS_ChatRoomManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 != (UDS_LogManager *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        local_398._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_398,"UDS_ChattingManager::RequestMarkAllConversationAsRead",0x35,Yes);
        UDS_LogManager::PrintLog
                  (pUVar8,1,Warning,local_398.Ptr,0x33c,L"ChatRoomManager.IsValid() == false");
        if ((void *)local_398._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_398._padding_);
        }
      }
    }
    else if (*(int *)&(pFVar9->ChatConversationMap).field_0x8 !=
             *(int *)&(pFVar9->ChatConversationMap).field_0x34) {
      bVar6 = false;
      pFVar9 = TSharedPtr<FDS_ChatRoomManager,1>::operator->(this_01);
      iVar7 = FDS_ChatRoomManager::GetMaxChatRoomCount(pFVar9,Whisper);
      iVar12 = 0;
      iVar11 = iVar12;
      if (0 < iVar7) {
        do {
          if ((this_01->Object == (FDS_ChatRoomManager *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FDS_ChatRoomManager::FindChatRoom(this_01->Object,&local_4e8,Whisper,iVar11);
          pFVar4 = local_4e8.Object;
          if (local_4e8.Object != (FDS_ChatRoomData *)0x0) {
            if ((local_4e8.Object == (FDS_ChatRoomData *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((pFVar4->ChattingTabType != None) &&
               (pFVar1 = (pFVar4->ChatConversation).Object, pFVar1 != (FDS_ChatConversation *)0x0))
            {
              pTVar2 = (pFVar4->ChatConversation).SharedReferenceCount.ReferenceController;
              if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
                UNLOCK();
              }
              if (0 < pFVar1->UnreadCount) {
                bVar6 = true;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar2);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_4e8.SharedReferenceCount.ReferenceController);
                break;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar2);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_4e8.SharedReferenceCount.ReferenceController);
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar7);
      }
      if ((this_01->Object == (FDS_ChatRoomManager *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar11 = FDS_ChatRoomManager::GetMaxChatRoomCount(this_01->Object,Group);
      if (0 < iVar11) {
        do {
          if ((this_01->Object == (FDS_ChatRoomManager *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FDS_ChatRoomManager::FindChatRoom(this_01->Object,&local_4d8,Group,iVar12);
          pFVar4 = local_4d8.Object;
          if (local_4d8.Object != (FDS_ChatRoomData *)0x0) {
            if ((local_4d8.Object == (FDS_ChatRoomData *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((pFVar4->ChattingTabType != None) &&
               (pFVar1 = (pFVar4->ChatConversation).Object, pFVar1 != (FDS_ChatConversation *)0x0))
            {
              pTVar2 = (pFVar4->ChatConversation).SharedReferenceCount.ReferenceController;
              if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
                UNLOCK();
              }
              if (0 < pFVar1->UnreadCount) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar2);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_4d8.SharedReferenceCount.ReferenceController);
                goto LAB_14ba14670;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar2);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_4d8.SharedReferenceCount.ReferenceController);
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar11);
      }
      if (bVar6) {
LAB_14ba14670:
        if (this_00->ChatState == LoggedIn) {
          dVar13 = UDS_TimeUtilManager::GetCurrentServerTime();
          local_500.GroupID.Data.ArrayNum = 0;
          local_500.GroupID.Data.ArrayMax = 0;
          local_500.PlayerUID = 0;
          local_500.GroupID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          bVar6 = TDS_SequentialRequestHandler<FDS_MarkAsReadKey,FDS_MarkAsReadKey>::
                  TryRequestOrDefer(&this_00->MarkAsReadHandler,&local_500,&local_500,dVar13);
          FVar10.Data = local_500.GroupID.Data.AllocatorInstance.Data;
          if (bVar6) {
            UDS_TencentCloudChatManager::MakeRequest<FDS_V2TIMRequestMarkMessageAsRead>
                      (this_00,&local_4c8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_4c8.SharedReferenceCount.ReferenceController);
            pUVar8 = UDS_LogManager::GetInst();
            FVar10.Data = local_500.GroupID.Data.AllocatorInstance.Data;
            if (pUVar8 != (UDS_LogManager *)0x0) {
              pUVar8 = UDS_LogManager::GetInst();
              if (local_500.PlayerUID == 0) {
                if (local_500.GroupID.Data.ArrayNum < 2) {
                  ::FString::FString(&local_510,L"All");
                }
                else {
                  ::FString::PrintfImpl(&local_510,L"Group:%s");
                }
              }
              else {
                ::FString::PrintfImpl(&local_510,L"C2C:%lld");
              }
              local_158._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_158,"UDS_TencentCloudChatManager::Request_MarkAllMessageAsRead",0x39
                         ,Yes);
              UDS_LogManager::PrintLog
                        (pUVar8,1,Display,local_158.Ptr,0x2eb,
                         L"[TCC] MarkAsRead - Request_MarkAllMessageAsRead : %s");
              if ((void *)local_158._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_158._padding_);
              }
              FVar10.Data = local_500.GroupID.Data.AllocatorInstance.Data;
              if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_510.Data.AllocatorInstance.Data);
                FVar10.Data = local_500.GroupID.Data.AllocatorInstance.Data;
              }
            }
          }
        }
        else {
          pUVar8 = UDS_LogManager::GetInst();
          if (pUVar8 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar8 = UDS_LogManager::GetInst();
          local_278._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_278,"UDS_TencentCloudChatManager::Request_MarkAllMessageAsRead",0x39,Yes
                    );
          UDS_LogManager::PrintLog
                    (pUVar8,1,Warning,local_278.Ptr,0x2e0,L"[TCC] IsLoggedIn() == false");
          FVar10.Data = (FScriptContainerElement *)local_278._padding_;
        }
        if (FVar10.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar10.Data);
        }
      }
    }
  }
  return;
}

// RequestMarkConversationAsRead @ 14ba14880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::RequestMarkConversationAsRead
          (UDS_ChattingManager *this,TSharedPtr<FDS_ChatConversation,1> *param_1)

{
  UDS_TencentCloudChatManager *this_00;
  UDS_LogManager *pUVar1;
  FDS_ChatConversation *pFVar2;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_TencentCloudChatManager::GetInst();
  if (this_00 == (UDS_TencentCloudChatManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) goto LAB_14ba14a41;
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ChattingManager::RequestMarkConversationAsRead",0x32,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x318,L"tencentChatManager == nullptr");
  }
  else {
    if ((param_1->Object != (FDS_ChatConversation *)0x0) &&
       (1 < (param_1->Object->ConversationID).Data.ArrayNum)) {
      pFVar2 = TSharedPtr<FDS_ChatConversation,1>::operator->(param_1);
      if (0 < pFVar2->UnreadCount) {
        pFVar2 = TSharedPtr<FDS_ChatConversation,1>::operator->(param_1);
        if ((pFVar2->GroupID).Data.ArrayNum < 2) {
          pFVar2 = TSharedPtr<FDS_ChatConversation,1>::operator->(param_1);
          if (0 < pFVar2->WhisperPlayerUID) {
            pFVar2 = TSharedPtr<FDS_ChatConversation,1>::operator->(param_1);
            UDS_TencentCloudChatManager::Request_MarkC2CMessageAsRead
                      (this_00,pFVar2->WhisperPlayerUID);
          }
        }
        else {
          pFVar2 = TSharedPtr<FDS_ChatConversation,1>::operator->(param_1);
          UDS_TencentCloudChatManager::Request_MarkGroupMessageAsRead(this_00,&pFVar2->GroupID);
        }
      }
      goto LAB_14ba14a41;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) goto LAB_14ba14a41;
    pUVar1 = UDS_LogManager::GetInst();
    TSharedPtr<FDS_ChatConversation,1>::operator->(param_1);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ChattingManager::RequestMarkConversationAsRead",0x32,Yes);
    UDS_LogManager::PrintLog
              (pUVar1,1,Warning,local_138.Ptr,0x31e,
               L"InChatConversation.IsValid() == false  (InConversationID : %s)");
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14ba14a41:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RequestSetCustomInfo @ 14ba14a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::RequestSetCustomInfo
          (UDS_ChattingManager *this,int param_1,FDS_ChatCustomData *param_2)

{
  FDS_ChatCustomTabManager *pFVar1;
  ulong64 uVar2;
  code *pcVar3;
  FDS_ChatCustomData *pFVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UDS_TencentCloudChatManager *this_00;
  undefined1 auStackY_3e8 [32];
  TSharedPtr<FDS_ChatCustomData,1> local_3a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  pFVar1 = (this->ChatCustomTabManager).Object;
  if (pFVar1 == (FDS_ChatCustomTabManager *)0x0) {
    local_3a8.Object = (FDS_ChatCustomData *)0x0;
    local_3a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    FDS_ChatCustomTabManager::GetCustomData(pFVar1,&local_3a8,param_1);
  }
  pFVar4 = local_3a8.Object;
  if (local_3a8.Object == (FDS_ChatCustomData *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14ba14d10;
    pUVar6 = UDS_LogManager::GetInst();
    local_388._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_388,"UDS_ChattingManager::RequestSetCustomInfo",0x29,Yes);
    UDS_LogManager::PrintLog
              (pUVar6,1,Warning,local_388.Ptr,0x74f,
               L"chatCustomData.IsValid() == false (InCustomIndex : %d)");
    local_398.AllocatorInstance.Data = (FScriptContainerElement *)local_388._padding_;
  }
  else {
    if (local_3a8.Object == (FDS_ChatCustomData *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar2 = param_2->ChatFilterFlags;
    if (pFVar4 == (FDS_ChatCustomData *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar4->ChatFilterFlags = uVar2;
    pFVar4->bIsBookmark = param_2->bIsBookmark;
    this_00 = UDS_TencentCloudChatManager::GetInst();
    if (this_00 == (UDS_TencentCloudChatManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14ba14d10;
      pUVar6 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"UDS_ChattingManager::RequestSetCustomInfo",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_268.Ptr,0x763,L"tencentChatManager == nullptr");
      local_398.AllocatorInstance.Data = (FScriptContainerElement *)local_268._padding_;
    }
    else {
      pFVar1 = (this->ChatCustomTabManager).Object;
      if (pFVar1 == (FDS_ChatCustomTabManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 == (UDS_LogManager *)0x0) goto LAB_14ba14d10;
        pUVar6 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_ChattingManager::RequestSetCustomInfo",0x29,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_148.Ptr,0x769,L"ChatCustomTabManager.IsValid() == false");
        local_398.AllocatorInstance.Data = (FScriptContainerElement *)local_148._padding_;
      }
      else {
        FDS_ChatCustomTabManager::GetCustomInfoStrings(pFVar1,&local_398);
        UDS_TencentCloudChatManager::Request_SetCustomInfos(this_00,&local_398);
        DestructItems<FString,int>((FString *)local_398.AllocatorInstance.Data,local_398.ArrayNum);
      }
    }
  }
  if (local_398.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.AllocatorInstance.Data);
  }
LAB_14ba14d10:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3a8.SharedReferenceCount.ReferenceController);
  return;
}

// RequestSetCustomInfo @ 14ba14d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ChattingManager::RequestSetCustomInfo(UDS_ChattingManager *this)

{
  FDS_ChatCustomTabManager *this_00;
  UDS_TencentCloudChatManager *this_01;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  uint uVar2;
  wchar_t *pwVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_01 = UDS_TencentCloudChatManager::GetInst();
  if (this_01 == (UDS_TencentCloudChatManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ChattingManager::RequestSetCustomInfo",0x29,Yes);
    pwVar3 = L"tencentChatManager == nullptr";
    uVar2 = 0x763;
  }
  else {
    this_00 = (this->ChatCustomTabManager).Object;
    if (this_00 != (FDS_ChatCustomTabManager *)0x0) {
      FDS_ChatCustomTabManager::GetCustomInfoStrings(this_00,&local_148);
      UDS_TencentCloudChatManager::Request_SetCustomInfos(this_01,&local_148);
      DestructItems<FString,int>((FString *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
      goto LAB_14ba14e84;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ChattingManager::RequestSetCustomInfo",0x29,Yes);
    pwVar3 = L"ChatCustomTabManager.IsValid() == false";
    uVar2 = 0x769;
  }
  UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,uVar2,pwVar3);
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)local_138._padding_;
LAB_14ba14e84:
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  return;
}

// RequestTranslateMessage @ 14ba14ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::RequestTranslateMessage
          (UDS_ChattingManager *this,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UDS_TencentCloudChatManager *pUVar4;
  UDS_DataBase *this_00;
  ulong64 uVar5;
  FWeakObjectPtr local_res10 [3];
  undefined1 auStackY_188 [32];
  uint uVar6;
  wchar_t *pwVar7;
  undefined1 local_158 [8];
  ulong64 local_150;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    if (pUVar3[5].field_0x2 == '\x01') {
      return;
    }
    pUVar4 = UDS_TencentCloudChatManager::GetInst();
    if (pUVar4 != (UDS_TencentCloudChatManager *)0x0) {
      pUVar3 = FWeakObjectPtr::Get(local_res10);
      pUVar3[5].field_0x2 = 1;
      pUVar3 = FWeakObjectPtr::Get(local_res10);
      this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(local_res10);
      uVar5 = UDS_DataBase::GetUniqueKey(this_00);
      if (pUVar4->ChatState == LoggedIn) {
        local_150 = uVar5;
        ::FString::FString(&local_148,(FString *)&pUVar3[3].field_0x10);
        TSet<TTuple<unsigned___int64,FString>,DefaultKeyFuncs<TTuple<unsigned___int64,FString>,0>,FDefaultSetAllocator>
        ::Emplace<TTuple<unsigned___int64,FString>_const_&>
                  (&(pUVar4->TranslateMessageBatcher).BatchedDataContainer,
                   (TTuple<unsigned___int64,FString> *)local_158,(bool *)&local_150);
      }
      else {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_TencentCloudChatManager::Request_TranslateMessage",0x35,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_138.Ptr,0x2f5,L"[TCC] IsLoggedIn() == false");
        local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_138._padding_;
      }
      if (local_148.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ChattingManager::RequestTranslateMessage",0x2c,Yes);
    pwVar7 = L"tencentChatManager == nullptr";
    uVar6 = 0x895;
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ChattingManager::RequestTranslateMessage",0x2c,Yes);
    pwVar7 = L"InChattingData.IsValid() == false";
    uVar6 = 0x889;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar6,pwVar7);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// SendChattingMessage @ 14ba18bc0

void __thiscall
UDS_ChattingManager::SendChattingMessage
          (UDS_ChattingManager *this,EDS_ChattingType param_1,FString *param_2)

{
  int iVar1;
  FDS_ChatRoomManager *this_00;
  FDS_ChatUserInfo *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  int iVar5;
  FDS_ChatRoomData *pFVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  wchar_t *pwVar10;
  TSharedPtr<FDS_ChatRoomData,1> local_38;
  FString local_28;
  FString local_18;
  
  switch(param_1) {
  case Whisper:
    break;
  default:
    FDS_ChatService::SendChatMessage(param_1,param_2);
    return;
  case Group1:
  case Group2:
  case Group3:
  case Group4:
  case Group5:
  case Group6:
  case Group7:
  case Group8:
  case Group9:
  case Group10:
    SendGroupChattingMessage(this,param_1,param_2);
    return;
  }
  if ((this->ChatStateData).ChattingTabType != Whisper) {
    iVar8 = ::FString::Find(param_2,L" ",1,IgnoreCase,FromStart,-1);
    if (1 < iVar8 + 1U) {
      iVar1 = (param_2->Data).ArrayNum;
      iVar9 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar9 = 0;
      }
      if (iVar8 != iVar9 + -1) {
        if (iVar8 < iVar9) {
          iVar9 = iVar8;
        }
        iVar5 = 0;
        if (0 < iVar9) {
          iVar5 = iVar9;
        }
        if (iVar1 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
        }
        ::FString::ConstructFromPtrSize(&local_18,pwVar10,iVar5);
        ::FString::RightChop(param_2,&local_28,iVar8 + 1);
        SendWhisperChattingMessage(this,&local_18,&local_28);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
    return;
  }
  this_00 = (this->ChatRoomManager).Object;
  if (this_00 == (FDS_ChatRoomManager *)0x0) {
    local_38.Object = (FDS_ChatRoomData *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    FDS_ChatRoomManager::FindChatRoom(this_00,&local_38,Whisper,(this->ChatStateData).SubTabIndex);
  }
  pFVar6 = local_38.Object;
  if (local_38.Object != (FDS_ChatRoomData *)0x0) {
    if ((local_38.Object == (FDS_ChatRoomData *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (pFVar6->Whisper).Object;
    pTVar3 = (pFVar6->Whisper).SharedReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar2 != (FDS_ChatUserInfo *)0x0) {
      SendWhisperChattingMessage(this,&pFVar2->Nickname,param_2);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// SendGroupChatLink @ 14ba18e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::SendGroupChatLink
          (UDS_ChattingManager *this,FString *param_1,long64 param_2,FString *param_3,
          FString *param_4)

{
  FDS_ChatRoomManager *pFVar1;
  FDS_ChatConversation *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar6;
  UDS_LogManager *pUVar7;
  TReferenceControllerBase<1> *pTVar8;
  FDS_ChatRoomData *pFVar9;
  bool bVar10;
  undefined1 auStackY_1f8 [32];
  uint uVar11;
  wchar_t *pwVar12;
  FString local_1b8;
  FString local_1a8;
  FDS_ChatLinkData local_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pFVar1 = (this->ChatRoomManager).Object;
  if ((pFVar1 == (FDS_ChatRoomManager *)0x0) ||
     (pTVar6 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
               ::Find((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                       *)&pFVar1->IndexByGroupID,param_1),
     pTVar6 == (TWeakPtr<FDS_ChatRoomData,1> *)0x0)) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar8 = (pTVar6->WeakReferenceCount).ReferenceController;
    pFVar9 = (FDS_ChatRoomData *)0x0;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar8->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          pTVar8 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14ba18e82;
        }
        LOCK();
        aVar5 = pTVar8->SharedReferenceCount;
        bVar10 = aVar4 == aVar5;
        if (bVar10) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar5 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar5;
      } while (!bVar10);
      pFVar9 = pTVar6->Object;
    }
LAB_14ba18e82:
    if (pFVar9 != (FDS_ChatRoomData *)0x0) {
      pFVar2 = (pFVar9->ChatConversation).Object;
      pTVar3 = (pFVar9->ChatConversation).SharedReferenceCount.ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar2 == (FDS_ChatConversation *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_ChattingManager::SendGroupChatLink",0x26,Yes);
          pwVar12 = L"chatConversation.IsValid() == false == false (GroupID : %s)";
          uVar11 = 0x2eb;
LAB_14ba18f17:
          UDS_LogManager::PrintLog(pUVar7,1,Warning,local_168.Ptr,uVar11,pwVar12);
          local_198.LinkText.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)local_168._padding_;
LAB_14ba19036:
          if (local_198.LinkText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.LinkText.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        if (1 < (pFVar2->ConversationID).Data.ArrayNum) {
          DS_ChatHelper::MakeGroupChatLinkText(&local_198,param_1,&pFVar2->ShowName);
          ::FString::ConcatFC(&local_1b8,&local_198.FullLinkText,L" ");
          ::FString::ConcatFF(&local_1a8,&local_1b8,param_4);
          if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          }
          SendWhisperChattingMessage(this,param_2,param_3,&local_1a8);
          if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
          }
          if (local_198.FullLinkText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_198.FullLinkText.Data.AllocatorInstance.Data);
          }
          goto LAB_14ba19036;
        }
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_ChattingManager::SendGroupChatLink",0x26,Yes);
          pwVar12 = L"chatConversation.IsValidConversation() == false (GroupID : %s)";
          uVar11 = 0x2f1;
          goto LAB_14ba18f17;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      goto LAB_14ba190e9;
    }
  }
  pUVar7 = UDS_LogManager::GetInst();
  if (pUVar7 != (UDS_LogManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_ChattingManager::SendGroupChatLink",0x26,Yes);
    UDS_LogManager::PrintLog
              (pUVar7,1,Warning,local_168.Ptr,0x2e4,
               L"groupChatRoomData.IsValid() == false (GroupID : %s)");
    if ((FScriptContainerElement *)local_168._padding_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
  }
LAB_14ba190e9:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// SendGroupChattingMessage @ 14ba19120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::SendGroupChattingMessage
          (UDS_ChattingManager *this,EDS_ChattingType param_1,FString *param_2)

{
  FDS_ChatRoomManager *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FDS_ChatConversation *pFVar2;
  code *pcVar3;
  FDS_ChatRoomData *pFVar4;
  bool bVar5;
  UDS_TencentCloudChatManager *pUVar6;
  UDS_LogManager *pUVar7;
  undefined1 auStackY_3c8 [32];
  TSharedPtr<FDS_ChatRoomData,1> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_388;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  pUVar6 = UDS_TencentCloudChatManager::GetInst();
  if (pUVar6 == (UDS_TencentCloudChatManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_388._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_388,"UDS_ChattingManager::SendGroupChattingMessage",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_388.Ptr,0x7c2,L"tencentChatManager == nullptr");
      if ((void *)local_388._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_388._padding_);
      }
    }
  }
  else {
    this_00 = (this->ChatRoomManager).Object;
    if (this_00 == (FDS_ChatRoomManager *)0x0) {
      local_398.Object = (FDS_ChatRoomData *)0x0;
      local_398.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      FDS_ChatRoomManager::FindChatRoom(this_00,&local_398,Group,param_1 - 0xe);
    }
    pFVar4 = local_398.Object;
    if (local_398.Object == (FDS_ChatRoomData *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_268._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_268,"UDS_ChattingManager::SendGroupChattingMessage",0x2d,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_268.Ptr,0x7ca,L"groupChatRoomData.IsValid() == false");
        if ((void *)local_268._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_268._padding_);
        }
      }
    }
    else {
      if (local_398.Object == (FDS_ChatRoomData *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar1 = (pFVar4->ChatConversation).SharedReferenceCount.ReferenceController;
      pFVar2 = (pFVar4->ChatConversation).Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar2 == (FDS_ChatConversation *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_ChattingManager::SendGroupChattingMessage",0x2d,Yes);
          UDS_LogManager::PrintLog
                    (pUVar7,1,Warning,local_148.Ptr,0x7d1,L"chatConversation.IsValid() == false");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
      }
      else {
        FDS_ChatService::SendGroupMessage(param_1,&pFVar2->GroupID,param_2);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_398.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SendLocationInfoLink @ 14ba193d0

void __thiscall
UDS_ChattingManager::SendLocationInfoLink(UDS_ChattingManager *this,FDS_WorldMapMarkerInfo *param_1)

{
  FString *pFVar1;
  FDS_StringUiID local_68;
  TVector<double>_u_0 local_58;
  FString local_40;
  FDS_ChatLinkData local_30;
  
  local_58._s_0.X = (param_1->MarkerGlobalPos).field0_0x0._s_0.X;
  local_58._s_0.Y = (param_1->MarkerGlobalPos).field0_0x0._s_0.Y;
  local_58._s_0.Z = 0.0;
  DS_ChatHelper::MakeLocationInfoLinkText
            (&local_30,param_1->IslandID,param_1->IndoorGroupID,param_1->Floor,
             (TVector<double> *)&local_58._s_0,&param_1->Memo);
  local_68.ID = 0xc5be;
  local_68._padding_ = (longlong)&___7FDS_StringUiID__6B_;
  pFVar1 = FDS_StringUiID::Str(&local_68);
  ::FString::ConcatFC((FString *)&local_58._s_0,&local_30.FullLinkText,L" ");
  ::FString::ConcatFF(&local_40,(FString *)&local_58._s_0,pFVar1);
  if ((void *)local_58._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_58._s_0.X);
  }
  SendChattingMessage(this,(this->ChatStateData).InputChattingType,&local_40);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  if (local_30.FullLinkText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.FullLinkText.Data.AllocatorInstance.Data);
  }
  if (local_30.LinkText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.LinkText.Data.AllocatorInstance.Data);
  }
  return;
}

// SendLocationInfoLink @ 14ba194e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::SendLocationInfoLink(UDS_ChattingManager *this,FString *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UDS_ZoneManager *this_00;
  FDS_ZoneBaseTableRow *this_01;
  UDS_MovementCore *this_02;
  FString *pFVar4;
  undefined1 auStackY_218 [32];
  uint uVar5;
  wchar_t *pwVar6;
  ulong64 local_1d8;
  FWeakObjectPtr local_1d0;
  FDS_StringUiID local_1c8;
  FString local_1b8;
  FString local_1a8;
  FDS_ChatLinkData local_198;
  TVector<double> local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_1d8 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  pFVar2 = FDS_EntityBase::GetEntityBase(&local_1d8);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_ChattingManager::SendLocationInfoLink",0x29,Yes);
    pwVar6 = L"entityBase == nullptr (MainPlayerCurrentEntityID : %llu)";
    uVar5 = 0x2b6;
  }
  else {
    (**(code **)(pFVar2->_padding_ + 0x78))(pFVar2,&local_1d0);
    bVar1 = FWeakObjectPtr::IsValid(&local_1d0);
    if (bVar1) {
      this_00 = UDS_ZoneManager::GetInst();
      if (this_00 == (UDS_ZoneManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        local_158._padding_ = (longlong)this_00;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_ChattingManager::SendLocationInfoLink",0x29,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,0x2c4,L"zoneManager == nullptr");
        local_198.LinkText.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)local_158._padding_;
      }
      else {
        this_01 = UDS_ZoneManager::GetCurZoneBaseTableRow(this_00);
        bVar1 = FDS_ZoneBaseTableRow::IsValid(this_01);
        if ((!bVar1) && (pUVar3 = UDS_LogManager::GetInst(), pUVar3 != (UDS_LogManager *)0x0)) {
          pUVar3 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_ChattingManager::SendLocationInfoLink",0x29,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_158.Ptr,0x2cb,
                     L"curZoneBaseTableRow.IsValid() == false ()");
          if ((UDS_ZoneManager *)local_158._padding_ != (UDS_ZoneManager *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
        this_02 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_1d0);
        UDS_MovementCore::GetActorLocation(this_02,&local_170);
        DS_ChatHelper::MakeLocationInfoLinkText
                  (&local_198,this_00->IslandID,this_01->ID_MapIndoorGroup,0,&local_170,param_1);
        local_1c8.ID = 0xc5be;
        local_1c8._padding_ = (longlong)&___7FDS_StringUiID__6B_;
        pFVar4 = FDS_StringUiID::Str(&local_1c8);
        ::FString::ConcatFC(&local_1b8,&local_198.FullLinkText,L" ");
        ::FString::ConcatFF(&local_1a8,&local_1b8,pFVar4);
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
        SendChattingMessage(this,(this->ChatStateData).InputChattingType,&local_1a8);
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        if (local_198.FullLinkText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.FullLinkText.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14ba1980a;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_ChattingManager::SendLocationInfoLink",0x29,Yes);
    pwVar6 = L"movementCore.IsValid() == false (MainPlayerCurrentEntityID : %llu)";
    uVar5 = 0x2bd;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,uVar5,pwVar6);
  local_198.LinkText.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_158._padding_;
LAB_14ba1980a:
  if ((UDS_ZoneManager *)local_198.LinkText.Data.AllocatorInstance.Data != (UDS_ZoneManager *)0x0) {
    FMemory::Free(local_198.LinkText.Data.AllocatorInstance.Data);
  }
  return;
}

// SendPartyChatLink @ 14ba19840

void __thiscall
UDS_ChattingManager::SendPartyChatLink
          (UDS_ChattingManager *this,long64 param_1,long64 param_2,FString *param_3)

{
  FString *pFVar1;
  FDS_StringIDWrapper local_a8;
  undefined8 local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FDS_ChatLinkData local_68;
  FStringFormatArg local_40;
  FString local_20;
  
  DS_ChatHelper::MakePartyInviteLinkText(&local_68,param_1,param_2,param_3);
  local_a0 = 0xc5bd;
  local_a8 = (FDS_StringIDWrapper)&___7FDS_StringUiID__6B_;
  pFVar1 = ::FString::FString(&local_20,param_3);
  FStringFormatArg::FStringFormatArg(&local_40,pFVar1);
  pFVar1 = FDS_StringIDWrapper::Format(&local_a8,&local_78,&local_40);
  ::FString::ConcatFC(&local_98,&local_68.FullLinkText,L" ");
  ::FString::ConcatFF(&local_88,&local_98,pFVar1);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_40.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.StringValue.Data.AllocatorInstance.Data);
  }
  SendChattingMessage(this,(this->ChatStateData).InputChattingType,&local_88);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_68.FullLinkText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.FullLinkText.Data.AllocatorInstance.Data);
  }
  if (local_68.LinkText.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.LinkText.Data.AllocatorInstance.Data);
  }
  return;
}

// SendWhisperChattingMessage @ 14ba19960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::SendWhisperChattingMessage
          (UDS_ChattingManager *this,FString *param_1,FString *param_2)

{
  FDS_ChatUserCache *this_00;
  long64 lVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  int iVar4;
  FDS_ChatUserInfo *pFVar5;
  bool bVar6;
  UDS_LogManager *pUVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  undefined1 auStackY_4d8 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4a8;
  ForAnyElementType local_4a0;
  int local_498;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_490;
  FDelegateAllocation local_488;
  undefined1 local_478 [8];
  ForAnyElementType local_470;
  int local_468;
  TSharedPtr<FDS_ChatUserInfo,1> local_460;
  UDS_ChattingManager *local_450;
  FDestructionSentinel local_448;
  FDestructionSentinel local_430;
  FDestructionSentinel local_418;
  FDestructionSentinel local_400;
  FDestructionSentinel local_3e8;
  FDelegateAllocation *local_3d0;
  FReadAccessScope local_3c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  if ((param_1->Data).ArrayNum < 2) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_3a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_3a8,"UDS_ChattingManager::SendWhisperChattingMessage",0x2f,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_3a8.Ptr,0x7ed,L"InNickname.IsEmpty() == true");
    if ((void *)local_3a8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_3a8._padding_);
    return;
  }
  if ((param_2->Data).ArrayNum < 2) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_288._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_288,"UDS_ChattingManager::SendWhisperChattingMessage",0x2f,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_288.Ptr,0x7f3,L"InMessage.IsEmpty() == true");
    if ((void *)local_288._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_288._padding_);
    return;
  }
  this_00 = (this->ChatUserCache).Object;
  if (this_00 == (FDS_ChatUserCache *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_ChattingManager::GetChatUserInfo",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_168.Ptr,0x637,L"ChatUserCache.IsValid() == false");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
    local_460.Object = (FDS_ChatUserInfo *)0x0;
    local_460.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    FDS_ChatUserCache::FindByNickname(this_00,&local_460,param_1);
  }
  pFVar5 = local_460.Object;
  if (local_460.Object != (FDS_ChatUserInfo *)0x0) {
    if ((local_460.Object == (FDS_ChatUserInfo *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar1 = pFVar5->PlayerUID;
    SendWhisperChattingMessage(this,lVar1,param_2);
    UpdateRecentWhispers(this,lVar1);
    goto LAB_14ba19e5d;
  }
  local_490.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_488.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_488.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_490,(FWriteAccessScope *)&local_3e8);
  local_3d0 = &local_488;
  puVar8 = UE::Core::Private::DelegateAllocate(0x40,&local_488);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__VFString__V2___6B_
    ;
    ::FString::FString((FString *)(puVar8 + 1),param_1);
    ::FString::FString((FString *)(puVar8 + 3),param_2);
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[5] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_ChattingManager____A6AXXZUFDefaultDelegateUserPolicy__VFString__V3___6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[6] = 0;
    local_450 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 6),(FObjectPtr)&local_450);
    puVar8[7] = OnSearchPlayerForMessage;
  }
  if (local_3e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3e8.Accessor,&local_3e8);
  }
  local_478 = (undefined1  [8])0x0;
  local_470.Data = (FScriptContainerElement *)0x0;
  local_468 = 0;
  local_4a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_4a0.Data = (FScriptContainerElement *)0x0;
  local_498 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_490,&local_3c8);
  if ((local_488.DelegateSize != 0) &&
     (local_488.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_488.DelegateAllocator + 0x50))
              (local_488.DelegateAllocator,&local_4a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_3c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_4a8,(FWriteAccessScope *)&local_448);
  iVar4 = local_498;
  FVar3.Data = local_4a0.Data;
  local_4a0.Data = (FScriptContainerElement *)0x0;
  local_498 = 0;
  if (local_448.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_448.Accessor,&local_448);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_478,
             (FWriteAccessScope *)&local_430);
  if (local_468 == 0) {
LAB_14ba19d4c:
    if (local_470.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_470.Data);
    }
  }
  else if (local_470.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_470.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_470,0,0,0x10);
    local_468 = 0;
    goto LAB_14ba19d4c;
  }
  local_470.Data = FVar3.Data;
  local_468 = iVar4;
  if (local_430.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_430.Accessor,&local_430);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_4a8,(FWriteAccessScope *)&local_418);
  if ((local_498 != 0) && (local_4a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_4a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_4a0,0,0,0x10);
    local_498 = 0;
  }
  if (local_418.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_418.Accessor,&local_418);
  }
  if (local_4a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4a8.AccessDetector);
  FDS_PlayerRepo::RequestSearchPlayersByName
            (param_1,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_478);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_490,(FWriteAccessScope *)&local_400);
  if ((local_488.DelegateSize != 0) &&
     (local_488.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_488.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_488,0,0,0x10);
    local_488.DelegateSize = 0;
  }
  if (local_400.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_400.Accessor,&local_400);
  }
  if (local_488.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_488.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_490.AccessDetector);
LAB_14ba19e5d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_460.SharedReferenceCount.ReferenceController);
  return;
}

// SendWhisperChattingMessage @ 14ba19e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::SendWhisperChattingMessage
          (UDS_ChattingManager *this,long64 param_1,FString *param_2,FString *param_3)

{
  UDS_LogManager *pUVar1;
  FDS_ChatUserInfo *pFVar2;
  ForAnyElementType FVar3;
  undefined1 auStackY_1d8 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FDS_ChatUserInfo local_1a8;
  TSharedPtr<FDS_ChatUserInfo,1> local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (param_1 < 1) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_ChattingManager::SendWhisperChattingMessage",0x2f,Yes);
    pwVar5 = L"InTargetPlayerUID <= 0ll";
    uVar4 = 0x80b;
  }
  else if ((param_2->Data).ArrayNum < 2) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_ChattingManager::SendWhisperChattingMessage",0x2f,Yes);
    pwVar5 = L"InNickname.IsEmpty() == true";
    uVar4 = 0x811;
  }
  else {
    if (1 < (param_3->Data).ArrayNum) {
      local_1a8.UserID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.Nickname.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.UserID.Data.ArrayNum = 0;
      local_1a8.UserID.Data.ArrayMax = 0;
      local_1a8.Nickname.Data.ArrayNum = 0;
      local_1a8.Nickname.Data.ArrayMax = 0;
      local_1a8.CharID = 0;
      local_1a8.CharLevel = 0;
      local_1a8.PlayerUID = 0;
      pFVar2 = (FDS_ChatUserInfo *)DS_Util::FromInt64((FString *)&local_178,param_1);
      if (&local_1a8 != pFVar2) {
        if (local_1a8.UserID.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.UserID.Data.AllocatorInstance.Data);
        }
        local_1a8.UserID.Data.AllocatorInstance.Data = (pFVar2->UserID).Data.AllocatorInstance.Data;
        (pFVar2->UserID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a8.UserID.Data.ArrayNum = (pFVar2->UserID).Data.ArrayNum;
        local_1a8.UserID.Data.ArrayMax = (pFVar2->UserID).Data.ArrayMax;
        (pFVar2->UserID).Data.ArrayNum = 0;
        (pFVar2->UserID).Data.ArrayMax = 0;
      }
      if (local_178.Object != (FDS_ChatUserInfo *)0x0) {
        FMemory::Free(local_178.Object);
      }
      local_1a8.PlayerUID = param_1;
      ::FString::operator=(&local_1a8.Nickname,param_2);
      AddOrUpdateChatUserInfo(this,&local_178,&local_1a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178.SharedReferenceCount.ReferenceController);
      SendWhisperChattingMessage(this,param_1,param_3);
      UpdateRecentWhispers(this,param_1);
      FVar3.Data = local_1a8.UserID.Data.AllocatorInstance.Data;
      if (local_1a8.Nickname.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Nickname.Data.AllocatorInstance.Data);
        FVar3.Data = local_1a8.UserID.Data.AllocatorInstance.Data;
      }
      goto LAB_14ba1a0bc;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_ChattingManager::SendWhisperChattingMessage",0x2f,Yes);
    pwVar5 = L"InMessage.IsEmpty() == true";
    uVar4 = 0x817;
  }
  UDS_LogManager::PrintLog(pUVar1,1,Warning,local_168.Ptr,uVar4,pwVar5);
  FVar3.Data = (FScriptContainerElement *)local_168._padding_;
LAB_14ba1a0bc:
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  return;
}

// SendWhisperChattingMessage @ 14ba1a0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::SendWhisperChattingMessage
          (UDS_ChattingManager *this,long64 param_1,FString *param_2)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  uint uVar2;
  wchar_t *pwVar3;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (param_1 < 1) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ChattingManager::SendWhisperChattingMessage",0x2f,Yes);
    pwVar3 = L"InTargetPlayerUID <= 0ll";
    uVar2 = 0x7dc;
  }
  else {
    if (1 < (param_2->Data).ArrayNum) {
      FDS_ChatService::SendWhisperMessage(param_1,param_2);
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ChattingManager::SendWhisperChattingMessage",0x2f,Yes);
    pwVar3 = L"InMessage.IsEmpty() == true";
    uVar2 = 0x7e2;
  }
  UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,uVar2,pwVar3);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// SetChattingTabType @ 14ba1ab20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::SetChattingTabType
          (UDS_ChattingManager *this,EDS_ChattingTabType param_1,int param_2)

{
  undefined1 *puVar1;
  FDS_EventDelegate<unsigned___int64_const_> *this_00;
  FDS_EventDelegate<EDS_ChattingTabType_const_,int_const_> *this_01;
  EDS_ChattingTabType EVar2;
  int iVar3;
  FDS_ChatCustomTabManager *this_02;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  FDS_ChatCustomData *pFVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  UDS_LogManager *pUVar12;
  ulong64 uVar13;
  UDS_ChatEvent *pUVar14;
  uint uVar15;
  longlong lVar16;
  FScriptContainerElement FVar17;
  undefined1 auStackY_1e8 [32];
  TSharedPtr<FDS_ChatCustomData,1> local_1b8;
  TSharedPtr<FDS_ChattingTabData,1> local_1a8;
  FDestructionSentinel local_198;
  FDestructionSentinel local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  GetChattingTabData(this,&local_1a8,param_1);
  if (local_1a8.Object == (FDS_ChattingTabData *)0x0) {
    pUVar12 = UDS_LogManager::GetInst();
    if (pUVar12 != (UDS_LogManager *)0x0) {
      pUVar12 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_ChattingManager::SetChattingTabType",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar12,1,Warning,local_168.Ptr,0x171,L"chattingTabData.IsValid() == false");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else {
    (this->ChatStateData).ChattingTabType = param_1;
    (this->ChatStateData).SubTabIndex = param_2;
    if ((local_1a8.Object == (FDS_ChattingTabData *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar13 = FDS_ChattingTabData::GetChattingTypeFlag(local_1a8.Object,param_2);
    if ((local_1a8.Object == (FDS_ChattingTabData *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((param_2 < 0) || (((local_1a8.Object)->ShowChattingTypes).ArrayNum <= param_2)) {
      FVar17 = (FScriptContainerElement)(local_1a8.Object)->InputChattingType;
    }
    else {
      uVar15 = 0;
      if (param_2 < ((local_1a8.Object)->ShowChattingTypes).ArrayNum) {
        uVar15 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar17 = ((local_1a8.Object)->ShowChattingTypes).AllocatorInstance.Data[param_2];
    }
    UpdateChattingDatasForTabType(this,param_1,param_2,uVar13);
    if (param_1 == Custom) {
      this_02 = (this->ChatCustomTabManager).Object;
      if (this_02 == (FDS_ChatCustomTabManager *)0x0) {
        local_1b8.Object = (FDS_ChatCustomData *)0x0;
        local_1b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        FDS_ChatCustomTabManager::GetCustomData(this_02,&local_1b8,param_2);
      }
      pFVar7 = local_1b8.Object;
      if (local_1b8.Object != (FDS_ChatCustomData *)0x0) {
        if ((local_1b8.Object == (FDS_ChatCustomData *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (pFVar7->ChatFilterFlags != 0) {
          FVar17 = (FScriptContainerElement)(this->ChatStateData).InputChattingType;
          uVar13 = pFVar7->ChatFilterFlags;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1b8.SharedReferenceCount.ReferenceController);
    }
    (this->ChatStateData).ChattingTypeFlag = uVar13;
    pUVar14 = UDS_ChatEvent::GetEvent();
    if (pUVar14 != (UDS_ChatEvent *)0x0) {
      this_00 = &pUVar14->OnChangedChatType;
      bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
      if (bVar8) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_198);
        puVar1 = &(pUVar14->OnChangedChatType).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar8 = false;
        uVar15 = *(int *)&(pUVar14->OnChangedChatType).Delegate.field_0x10 - 1;
        if (-1 < (int)uVar15) {
          lVar16 = (longlong)(int)uVar15 << 4;
          bVar8 = false;
          do {
            uVar11 = 0;
            if ((int)uVar15 < *(int *)&(pUVar14->OnChangedChatType).Delegate.field_0x10) {
              uVar11 = ~uVar15 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar4 = *(longlong *)&(pUVar14->OnChangedChatType).Delegate.field_0x8;
            if (((*(int *)(lVar4 + 8 + lVar16) == 0) ||
                (plVar5 = *(longlong **)(lVar4 + lVar16), plVar5 == (longlong *)0x0)) ||
               (cVar10 = (**(code **)(*plVar5 + 0x68))(), cVar10 == '\0')) {
              bVar8 = true;
            }
            lVar16 = lVar16 + -0x10;
            uVar15 = uVar15 - 1;
          } while (-1 < (int)uVar15);
        }
        puVar1 = &(pUVar14->OnChangedChatType).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar8) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
        }
        if (local_198.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
        }
      }
    }
    SetInputChattingType(this,(EDS_ChattingType)FVar17);
    SetMarkMessageAsRead
              (this,(this->ChatStateData).ChattingTabType,(this->ChatStateData).SubTabIndex);
    pUVar14 = UDS_ChatEvent::GetEvent();
    if (pUVar14 != (UDS_ChatEvent *)0x0) {
      iVar3 = (this->ChatStateData).SubTabIndex;
      this_01 = &pUVar14->OnChangeChattingTabType;
      EVar2 = (this->ChatStateData).ChattingTabType;
      bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_01);
      if (bVar8) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,
                   (FWriteAccessScope *)&local_180);
        puVar1 = &(pUVar14->OnChangeChattingTabType).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar8 = false;
        uVar15 = *(int *)&(pUVar14->OnChangeChattingTabType).Delegate.field_0x10 - 1;
        if (-1 < (int)uVar15) {
          lVar16 = (longlong)(int)uVar15 << 4;
          bVar8 = false;
          do {
            uVar11 = 0;
            if ((int)uVar15 < *(int *)&(pUVar14->OnChangeChattingTabType).Delegate.field_0x10) {
              uVar11 = ~uVar15 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar4 = *(longlong *)&(pUVar14->OnChangeChattingTabType).Delegate.field_0x8;
            if (((*(int *)(lVar4 + 8 + lVar16) == 0) ||
                (plVar5 = *(longlong **)(lVar4 + lVar16), plVar5 == (longlong *)0x0)) ||
               (cVar10 = (**(code **)(*plVar5 + 0x68))(plVar5,EVar2,iVar3), cVar10 == '\0')) {
              bVar8 = true;
            }
            lVar16 = lVar16 + -0x10;
            uVar15 = uVar15 - 1;
          } while (-1 < (int)uVar15);
        }
        puVar1 = &(pUVar14->OnChangeChattingTabType).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar8) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_01,false);
        }
        if (local_180.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
        }
      }
      bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar14->OnUpdateMarkMessageAsRead);
      if (bVar8) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar14->OnUpdateMarkMessageAsRead).Delegate);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.SharedReferenceCount.ReferenceController);
  return;
}

// SetChattingTypeFlag @ 14ba1b090

void __thiscall UDS_ChattingManager::SetChattingTypeFlag(UDS_ChattingManager *this,ulong64 param_1)

{
  undefined1 *puVar1;
  FDS_EventDelegate<unsigned___int64_const_> *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UDS_ChatEvent *pUVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_38;
  
  (this->ChatStateData).ChattingTypeFlag = param_1;
  pUVar9 = UDS_ChatEvent::GetEvent();
  if (pUVar9 != (UDS_ChatEvent *)0x0) {
    this_00 = &pUVar9->OnChangedChatType;
    bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_38);
      puVar1 = &(pUVar9->OnChangedChatType).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar5 = false;
      uVar10 = *(int *)&(pUVar9->OnChangedChatType).Delegate.field_0x10 - 1;
      if (-1 < (int)uVar10) {
        lVar11 = (longlong)(int)uVar10 << 4;
        bVar5 = false;
        do {
          uVar8 = 0;
          if ((int)uVar10 < *(int *)&(pUVar9->OnChangedChatType).Delegate.field_0x10) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)&(pUVar9->OnChangedChatType).Delegate.field_0x8;
          if (((*(int *)(lVar2 + 8 + lVar11) == 0) ||
              (plVar3 = *(longlong **)(lVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
            bVar5 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      puVar1 = &(pUVar9->OnChangedChatType).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar5) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
  }
  return;
}

// SetDataByChatResponse @ 14ba1b9e0

void __thiscall
UDS_ChattingManager::SetDataByChatResponse(UDS_ChattingManager *this,FDS_ChatMessageInfo *param_1)

{
  int iVar1;
  FDS_ChatRoomManager *pFVar2;
  FWeakObjectPtr FVar3;
  FDS_ChatRoomData *pFVar4;
  UDS_M_ChatOption *pUVar5;
  atomic<int> aVar6;
  bool bVar7;
  atomic<int> aVar8;
  UDS_ChattingDataSet *pUVar9;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar10;
  UObject *pUVar11;
  FWeakObjectPtr this_00;
  UDS_ChatEvent *pUVar12;
  FWeakObjectPtr FVar13;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  
  TDS_DataSetGetter<UDS_ChattingDataSet>::Get((ulong64)&local_res18);
  bVar7 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar7) {
    return;
  }
  pUVar9 = (UDS_ChattingDataSet *)FWeakObjectPtr::Get(&local_res18);
  bVar7 = UDS_ChattingDataSet::CheckMessageID(pUVar9,&param_1->MessageID);
  if (bVar7) {
    return;
  }
  this_00.ObjectIndex = 0;
  this_00.ObjectSerialNumber = 0;
  if (param_1->ConversationType == 2) {
    pFVar2 = (this->ChatRoomManager).Object;
    FVar13 = this_00;
    if (((pFVar2 != (FDS_ChatRoomManager *)0x0) &&
        (pTVar10 = TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                   ::Find((TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
                           *)&pFVar2->IndexByGroupID,&param_1->GroupID),
        pTVar10 != (TWeakPtr<FDS_ChatRoomData,1> *)0x0)) &&
       (FVar3 = (FWeakObjectPtr)(pTVar10->WeakReferenceCount).ReferenceController, FVar13 = FVar3,
       FVar3 != (FWeakObjectPtr)0x0)) {
      aVar6 = *(atomic<int> *)((longlong)FVar3 + 8);
      do {
        FVar13 = this_00;
        if (aVar6 == (atomic<int>)0x0) goto LAB_14ba1ba96;
        LOCK();
        aVar8 = *(atomic<int> *)((longlong)FVar3 + 8);
        bVar7 = aVar6 == aVar8;
        if (bVar7) {
          *(atomic<int> *)((longlong)FVar3 + 8) = (atomic<int>)((int)aVar6 + 1);
          aVar8 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar8;
      } while (!bVar7);
      pFVar4 = pTVar10->Object;
      FVar13 = FVar3;
      if (((pFVar4 != (FDS_ChatRoomData *)0x0) && (pFVar4->ChattingTabType != None)) &&
         ((pFVar4->ChatConversation).Object != (FDS_ChatConversation *)0x0)) {
        iVar1 = pFVar4->SubTabIndex;
        pUVar11 = FWeakObjectPtr::Get(&local_res18);
        this_00 = (FWeakObjectPtr)NewObject<UDS_ChattingData>(pUVar11);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (FWeakObjectPtr)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        UDS_ChattingData::SetChattingData
                  ((UDS_ChattingData *)this_00,(char)iVar1 + Group1,iVar1,param_1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)FVar3);
        goto LAB_14ba1bb4f;
      }
    }
LAB_14ba1ba96:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar13);
  }
  else {
    if (param_1->ConversationType != 1) {
      return;
    }
    pUVar11 = FWeakObjectPtr::Get(&local_res18);
    this_00 = (FWeakObjectPtr)NewObject<UDS_ChattingData>(pUVar11);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (FWeakObjectPtr)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    UDS_ChattingData::SetChattingData((UDS_ChattingData *)this_00,Whisper,-1,param_1);
  }
LAB_14ba1bb4f:
  if (this_00 != (FWeakObjectPtr)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (UE::GC::MarkAsReachable((UObject *)this_00),
       UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_38 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_38);
    bVar7 = IsShowChattingData(this,(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>)local_res20);
    if ((bVar7) && (*(bool *)((longlong)this_00 + 200) = true, param_1->IsRead == false)) {
      SetMarkMessageAsRead
                (this,(this->ChatStateData).ChattingTabType,(this->ChatStateData).SubTabIndex);
    }
    pUVar9 = (UDS_ChattingDataSet *)FWeakObjectPtr::Get(&local_res18);
    local_res20 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    UDS_ChattingDataSet::AddChattingData(pUVar9,(TObjectPtr<UDS_ChattingData>)&local_res20);
    pUVar5 = (this->ChatOption).field0_0x0.DebugPtr;
    if ((pUVar5 != (UDS_M_ChatOption *)0x0) && (pUVar5->bIsAutoTranslateMessage == true)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable((UObject *)this_00),
         UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_38 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_38);
      RequestTranslateMessage(this,(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>)local_res20);
    }
    pUVar12 = UDS_ChatEvent::GetEvent();
    if (pUVar12 != (UDS_ChatEvent *)0x0) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable((UObject *)this_00),
         UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_38 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_38);
      FDS_EventDelegate<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_>::Broadcast
                (&pUVar12->OnAddChatMessage,
                 (TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>)local_res20);
      bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar12->OnUpdateMarkMessageAsRead);
      if (bVar7) {
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&(pUVar12->OnUpdateMarkMessageAsRead).Delegate);
      }
    }
  }
  return;
}

// SetDataByChatResponse @ 14ba1bd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_ChattingManager::SetDataByChatResponse(UDS_ChattingManager *this,ChatResponse *param_1)

{
  EDS_ChattingType EVar1;
  UDS_M_ChatOption *pUVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UDS_ChattingData *this_00;
  UDS_ChattingDataSet *this_01;
  UDS_ChatEvent *pUVar6;
  char *pcVar7;
  undefined1 auStackY_1c8 [32];
  FWeakObjectPtr local_188;
  UDS_ChattingData *local_180;
  FWeakObjectPtr local_178;
  FString local_170;
  FString local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  TDS_DataSetGetter<UDS_ChattingDataSet>::Get((ulong64)&local_178);
  bVar3 = FWeakObjectPtr::IsValid(&local_178);
  if (!bVar3) {
    return;
  }
  pcVar7 = (char *)((ulonglong)(param_1->_impl_).sender_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc)
  ;
  EVar1 = (EDS_ChattingType)(param_1->_impl_).chatting_type_;
  if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
    pcVar7 = *(char **)pcVar7;
  }
  DS_Util::ConvertUTF8ToFString(&local_160,pcVar7);
  pcVar7 = (char *)((ulonglong)(param_1->_impl_).text_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
    pcVar7 = *(char **)pcVar7;
  }
  DS_Util::ConvertUTF8ToFString(&local_170,pcVar7);
  if (EVar1 == None) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ChattingManager::SetDataByChatResponse",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Display,local_148.Ptr,0x832,
                 L"chattingType == EDS_ChattingType::None - ChatMsg : %s");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    goto LAB_14ba1c054;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_178);
  this_00 = NewObject<UDS_ChattingData>(pUVar5);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UDS_ChattingData *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  UDS_ChattingData::SetChattingData
            (this_00,EVar1,-1,(param_1->_impl_).sender_player_uid_,&local_160,&local_170);
  if (this_00->bIsMyChat == true) {
LAB_14ba1bf20:
    this_00->bIsRead = true;
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (UE::GC::MarkAsReachable((UObject *)this_00),
       UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    local_188.ObjectIndex = 0;
    local_188.ObjectSerialNumber = 0;
    local_180 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_180);
    bVar3 = IsShowChattingData(this,(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>)local_188);
    if (bVar3) goto LAB_14ba1bf20;
  }
  this_01 = (UDS_ChattingDataSet *)FWeakObjectPtr::Get(&local_178);
  local_180 = this_00;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  UDS_ChattingDataSet::AddChattingData(this_01,(TObjectPtr<UDS_ChattingData>)&local_180);
  pUVar2 = (this->ChatOption).field0_0x0.DebugPtr;
  if ((pUVar2 != (UDS_M_ChatOption *)0x0) && (pUVar2->bIsAutoTranslateMessage == true)) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (UE::GC::MarkAsReachable((UObject *)this_00),
       UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    local_188.ObjectIndex = 0;
    local_188.ObjectSerialNumber = 0;
    local_180 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_180);
    RequestTranslateMessage(this,(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>)local_188);
  }
  pUVar6 = UDS_ChatEvent::GetEvent();
  if (pUVar6 != (UDS_ChatEvent *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (UE::GC::MarkAsReachable((UObject *)this_00),
       UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    local_188.ObjectIndex = 0;
    local_188.ObjectSerialNumber = 0;
    local_180 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_180);
    FDS_EventDelegate<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_>::Broadcast
              (&pUVar6->OnAddChatMessage,(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>)local_188)
    ;
    bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar6->OnUpdateMarkMessageAsRead);
    if (bVar3) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar6->OnUpdateMarkMessageAsRead).Delegate);
    }
  }
LAB_14ba1c054:
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  return;
}

// SetInputChattingType @ 14ba1cb40

bool __thiscall
UDS_ChattingManager::SetInputChattingType(UDS_ChattingManager *this,EDS_ChattingType param_1)

{
  undefined1 *puVar1;
  FDS_EventDelegate<EDS_ChattingType_const_> *this_00;
  FDS_ChatRoomManager *this_01;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  FDS_ChatRoomData *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  FDS_PartyRepo *this_02;
  FDS_RaidPartyRepo *this_03;
  UDS_ChatEvent *pUVar11;
  uint uVar12;
  longlong lVar13;
  TSharedPtr<FDS_ChatRoomData,1> local_48;
  FDestructionSentinel local_38;
  
  switch(param_1) {
  case World:
  case ZoneGroup:
  case Zone:
  case Whisper:
    (this->ChatStateData).InputChattingType = param_1;
    break;
  default:
    return false;
  case Party:
    this_02 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    bVar6 = FDS_PartyRepo::IsPartyJoined(this_02);
    if (!bVar6) {
      return false;
    }
    (this->ChatStateData).InputChattingType = param_1;
    break;
  case RaidParty:
    this_03 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar6 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(this_03);
    if (!bVar6) {
      return false;
    }
    (this->ChatStateData).InputChattingType = param_1;
    break;
  case Group1:
  case Group2:
  case Group3:
  case Group4:
  case Group5:
  case Group6:
  case Group7:
  case Group8:
  case Group9:
  case Group10:
    this_01 = (this->ChatRoomManager).Object;
    if (this_01 == (FDS_ChatRoomManager *)0x0) {
      local_48.Object = (FDS_ChatRoomData *)0x0;
      local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      FDS_ChatRoomManager::FindChatRoom(this_01,&local_48,Group,param_1 - 0xe);
    }
    pFVar5 = local_48.Object;
    if (local_48.Object != (FDS_ChatRoomData *)0x0) {
      if ((local_48.Object == (FDS_ChatRoomData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      if ((pFVar5->ChattingTabType != None) &&
         ((pFVar5->ChatConversation).Object != (FDS_ChatConversation *)0x0)) {
        (this->ChatStateData).InputChattingType = param_1;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
        break;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    return false;
  }
  pUVar11 = UDS_ChatEvent::GetEvent();
  if (pUVar11 != (UDS_ChatEvent *)0x0) {
    this_00 = &pUVar11->OnChangeInputChattingType;
    bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar6) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_38);
      puVar1 = &(pUVar11->OnChangeInputChattingType).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar6 = false;
      uVar12 = *(int *)&(pUVar11->OnChangeInputChattingType).Delegate.field_0x10 - 1;
      if (-1 < (int)uVar12) {
        lVar13 = (longlong)(int)uVar12 << 4;
        bVar6 = false;
        do {
          uVar10 = 0;
          if ((int)uVar12 < *(int *)&(pUVar11->OnChangeInputChattingType).Delegate.field_0x10) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          lVar2 = *(longlong *)&(pUVar11->OnChangeInputChattingType).Delegate.field_0x8;
          if (((*(int *)(lVar13 + 8 + lVar2) == 0) ||
              (plVar3 = *(longlong **)(lVar13 + lVar2), plVar3 == (longlong *)0x0)) ||
             (cVar9 = (**(code **)(*plVar3 + 0x68))(), cVar9 == '\0')) {
            bVar6 = true;
          }
          lVar13 = lVar13 + -0x10;
          uVar12 = uVar12 - 1;
        } while (-1 < (int)uVar12);
      }
      puVar1 = &(pUVar11->OnChangeInputChattingType).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar6) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
  }
  return true;
}

// SetMarkMessageAsRead @ 14ba1d0a0

void __thiscall
UDS_ChattingManager::SetMarkMessageAsRead
          (UDS_ChattingManager *this,EDS_ChattingTabType param_1,int param_2)

{
  FDS_ChatRoomManager *this_00;
  FDS_ChatConversation *pFVar1;
  code *pcVar2;
  FDS_ChatRoomData *pFVar3;
  bool bVar4;
  TSharedPtr<FDS_ChatRoomData,1> local_28;
  TSharedPtr<FDS_ChatConversation,1> local_18;
  
  if (param_1 == Total) {
    RequestMarkAllConversationAsRead(this);
    return;
  }
  if (param_1 != Custom) {
    if ((param_1 != Whisper) && (param_1 != Group)) {
      return;
    }
    this_00 = (this->ChatRoomManager).Object;
    if (this_00 == (FDS_ChatRoomManager *)0x0) {
      local_28.Object = (FDS_ChatRoomData *)0x0;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      FDS_ChatRoomManager::FindChatRoom(this_00,&local_28,param_1,param_2);
    }
    pFVar3 = local_28.Object;
    if (local_28.Object != (FDS_ChatRoomData *)0x0) {
      if (local_28.Object == (FDS_ChatRoomData *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((pFVar3->ChattingTabType != None) &&
         (pFVar1 = (pFVar3->ChatConversation).Object, pFVar1 != (FDS_ChatConversation *)0x0)) {
        local_18.SharedReferenceCount.ReferenceController =
             (pFVar3->ChatConversation).SharedReferenceCount.ReferenceController;
        if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_18.Object = pFVar1;
        RequestMarkConversationAsRead(this,&local_18);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  MarkCustomTabMessageAsRead(this,param_2);
  return;
}

// UpdateBookmark @ 14ba23840

bool __thiscall
UDS_ChattingManager::UpdateBookmark
          (UDS_ChattingManager *this,EDS_ChattingTabType param_1,int param_2,bool param_3)

{
  FDS_ChatBookmarkManager *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  UDS_ChatEvent *pUVar6;
  TSharedPtr<FDS_ChatBookmarkData,1> local_58;
  TSharedPtr<FDS_ChatBookmarkData,1> local_48;
  TSharedPtr<FDS_ChatBookmarkData,1> local_38;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  this_00 = (this->ChatBookmarkManager).Object;
  if (this_00 == (FDS_ChatBookmarkManager *)0x0) goto LAB_14ba23911;
  if (param_3) {
    FDS_ChatBookmarkManager::GetBookmarkData(this_00,&local_58,param_1,param_2);
    if (local_58.Object == (FDS_ChatBookmarkData *)0x0) {
      iVar5 = FDS_ChatBookmarkManager::GetEmptyBookmarkIndex(this_00);
      if (iVar5 == -1) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
      }
      else {
        FDS_ChatBookmarkManager::GetBookmarkData(this_00,&local_48,iVar5);
        if (local_48.Object != (FDS_ChatBookmarkData *)0x0) {
          if ((local_48.Object == (FDS_ChatBookmarkData *)0x0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          (local_48.Object)->ChattingTabType = param_1;
          (local_48.Object)->SubTabIndex = param_2;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_48.SharedReferenceCount.ReferenceController);
          goto LAB_14ba239c1;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
      }
LAB_14ba23911:
      bVar2 = false;
      if (param_3) {
        local_28._0_8_ = 0;
        local_28._8_8_ = 0;
        local_28._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0xc54b,Complete_None_01,&local_28);
        return false;
      }
      goto LAB_14ba239c8;
    }
  }
  else {
    FDS_ChatBookmarkManager::GetBookmarkData(this_00,&local_38,param_1,param_2);
    local_58.SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    if (local_38.Object != (FDS_ChatBookmarkData *)0x0) {
      if ((local_38.Object == (FDS_ChatBookmarkData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      (local_38.Object)->ChattingTabType = None;
      (local_38.Object)->SubTabIndex = -1;
      local_58.SharedReferenceCount.ReferenceController =
           local_38.SharedReferenceCount.ReferenceController;
    }
  }
LAB_14ba239c1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  bVar2 = true;
LAB_14ba239c8:
  pUVar6 = UDS_ChatEvent::GetEvent();
  if (pUVar6 != (UDS_ChatEvent *)0x0) {
    bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar6->OnUpdateChattingTabs);
    if (bVar4) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar6->OnUpdateChattingTabs).Delegate);
    }
  }
  return bVar2;
}

// UpdateChattingDatas @ 14ba23b00

void __thiscall
UDS_ChattingManager::UpdateChattingDatas
          (UDS_ChattingManager *this,ulong64 param_1,long64 param_2,bool param_3,bool param_4)

{
  bool bVar1;
  UDS_ChattingDataSet *this_00;
  FWeakObjectPtr local_res8;
  
  (this->ChattingDatas).ArrayNum = 0;
  if ((this->ChattingDatas).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->ChattingDatas).AllocatorInstance,0,&(this->ChattingDatas).ArrayMax);
  }
  TDS_DataSetGetter<UDS_ChattingDataSet>::Get((ulong64)&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    this_00 = (UDS_ChattingDataSet *)FWeakObjectPtr::Get(&local_res8);
    UDS_ChattingDataSet::GetChattingDatas
              (this_00,param_1,param_2,&this->ChattingDatas,param_3,param_4);
  }
  return;
}

// UpdateChattingDatas @ 14ba23bc0

void __thiscall
UDS_ChattingManager::UpdateChattingDatas
          (UDS_ChattingManager *this,ulong64 param_1,bool param_2,bool param_3)

{
  bool bVar1;
  UDS_ChattingDataSet *this_00;
  FWeakObjectPtr local_res8;
  
  (this->ChattingDatas).ArrayNum = 0;
  if ((this->ChattingDatas).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->ChattingDatas).AllocatorInstance,0,&(this->ChattingDatas).ArrayMax);
  }
  TDS_DataSetGetter<UDS_ChattingDataSet>::Get((ulong64)&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    this_00 = (UDS_ChattingDataSet *)FWeakObjectPtr::Get(&local_res8);
    UDS_ChattingDataSet::GetChattingDatas(this_00,param_1,0,&this->ChattingDatas,param_2,param_3);
  }
  return;
}

// UpdateChattingDatasForTabType @ 14ba23c80

void __thiscall
UDS_ChattingManager::UpdateChattingDatasForTabType
          (UDS_ChattingManager *this,EDS_ChattingTabType param_1,int param_2,ulong64 param_3)

{
  int *piVar1;
  FDS_ChatRoomManager *this_00;
  FDS_ChatUserInfo *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  long64 lVar4;
  FDS_ChatCustomTabManager *this_01;
  code *pcVar5;
  FDS_ChatRoomData *pFVar6;
  FDS_ChatCustomData *pFVar7;
  bool bVar8;
  UDS_ChattingDataSet *this_02;
  FSharedReferencer<1> FVar9;
  FWeakObjectPtr local_38;
  TSharedPtr<FDS_ChatRoomData,1> local_30;
  TSharedPtr<FDS_ChatCustomData,1> local_20;
  
  if (param_1 == Custom) {
    this_01 = (this->ChatCustomTabManager).Object;
    if (this_01 == (FDS_ChatCustomTabManager *)0x0) {
      local_20.Object = (FDS_ChatCustomData *)0x0;
      local_20.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      FDS_ChatCustomTabManager::GetCustomData(this_01,&local_20,param_2);
    }
    pFVar7 = local_20.Object;
    FVar9.ReferenceController = local_20.SharedReferenceCount.ReferenceController;
    if (local_20.Object != (FDS_ChatCustomData *)0x0) {
      if ((local_20.Object == (FDS_ChatCustomData *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar9.ReferenceController = local_20.SharedReferenceCount.ReferenceController;
      if (pFVar7->ChatFilterFlags != 0) {
        UpdateChattingDatas(this,pFVar7->ChatFilterFlags,true,true);
        FVar9.ReferenceController = local_20.SharedReferenceCount.ReferenceController;
      }
    }
  }
  else {
    if (param_1 != Whisper) {
      UpdateChattingDatas(this,param_3,true,true);
      return;
    }
    this_00 = (this->ChatRoomManager).Object;
    if (this_00 == (FDS_ChatRoomManager *)0x0) {
      local_30.Object = (FDS_ChatRoomData *)0x0;
      local_30.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      FDS_ChatRoomManager::FindChatRoom(this_00,&local_30,Whisper,param_2);
    }
    pFVar6 = local_30.Object;
    FVar9.ReferenceController = local_30.SharedReferenceCount.ReferenceController;
    if (local_30.Object != (FDS_ChatRoomData *)0x0) {
      if ((local_30.Object == (FDS_ChatRoomData *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar9.ReferenceController = local_30.SharedReferenceCount.ReferenceController;
      if ((pFVar6->ChattingTabType != None) &&
         ((pFVar6->ChatConversation).Object != (FDS_ChatConversation *)0x0)) {
        pFVar2 = (pFVar6->Whisper).Object;
        pTVar3 = (pFVar6->Whisper).SharedReferenceCount.ReferenceController;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pFVar2 != (FDS_ChatUserInfo *)0x0) {
          piVar1 = &(this->ChattingDatas).ArrayMax;
          lVar4 = pFVar2->PlayerUID;
          (this->ChattingDatas).ArrayNum = 0;
          if (*piVar1 < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,0,&(this->ChattingDatas).AllocatorInstance,0,piVar1);
          }
          TDS_DataSetGetter<UDS_ChattingDataSet>::Get((ulong64)&local_38);
          bVar8 = FWeakObjectPtr::IsValid(&local_38);
          if (bVar8) {
            this_02 = (UDS_ChattingDataSet *)FWeakObjectPtr::Get(&local_38);
            UDS_ChattingDataSet::GetChattingDatas
                      (this_02,param_3,lVar4,&this->ChattingDatas,true,true);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        FVar9.ReferenceController = local_30.SharedReferenceCount.ReferenceController;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  return;
}

// UpdateRecentWhispers @ 14ba243a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ChattingManager::UpdateRecentWhispers(UDS_ChattingManager *this,long64 param_1)

{
  FDS_ChatUserCache *this_00;
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_ChatEvent *pUVar3;
  undefined1 auStackY_168 [32];
  uint uVar4;
  wchar_t *pwVar5;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = (this->ChatUserCache).Object;
  if (this_00 == (FDS_ChatUserCache *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ChattingManager::UpdateRecentWhispers",0x29,Yes);
    pwVar5 = L"ChatUserCache.IsValid() == false";
    uVar4 = 0x642;
  }
  else {
    if (0 < param_1) {
      FDS_ChatUserCache::MarkAsRecentWhisper(this_00,param_1);
      pUVar3 = UDS_ChatEvent::GetEvent();
      if (pUVar3 == (UDS_ChatEvent *)0x0) {
        return;
      }
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar3->OnRefreshRecentWhispers);
      if (!bVar1) {
        return;
      }
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->OnRefreshRecentWhispers).Delegate);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ChattingManager::UpdateRecentWhispers",0x29,Yes);
    pwVar5 = L"InPlayerUID <= 0ll";
    uVar4 = 0x648;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

