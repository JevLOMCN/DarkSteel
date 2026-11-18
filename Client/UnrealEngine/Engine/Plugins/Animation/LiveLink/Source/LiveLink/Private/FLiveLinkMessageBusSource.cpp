// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 33

// FLiveLinkMessageBusSource @ 14d011a50

/* WARNING: Enum "Type": Some values do not have unique names */

FLiveLinkMessageBusSource * __thiscall
FLiveLinkMessageBusSource::FLiveLinkMessageBusSource
          (FLiveLinkMessageBusSource *this,FText *param_1,FText *param_2,FMessageAddress *param_3,
          double param_4)

{
  ITextData *pIVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  
  (this->MessageEndpoint).Object = (FMessageEndpoint *)0x0;
  (this->MessageEndpoint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&___7FLiveLinkMessageBusSource__6B_;
  uVar2 = (param_3->UniqueId).A;
  uVar3 = (param_3->UniqueId).B;
  uVar4 = (param_3->UniqueId).C;
  uVar5 = (param_3->UniqueId).D;
  this->Client = (ILiveLinkClient *)0x0;
  (this->ConnectionAddress).UniqueId.A = uVar2;
  (this->ConnectionAddress).UniqueId.B = uVar3;
  (this->ConnectionAddress).UniqueId.C = uVar4;
  (this->ConnectionAddress).UniqueId.D = uVar5;
  this->bIsValid = (atomic<bool>)0x0;
  this->bIsShuttingDown = (atomic<bool>)0x0;
  (this->SourceGuid).A = 0;
  (this->SourceGuid).B = 0;
  (this->SourceGuid).C = 0;
  (this->SourceGuid).D = 0;
  (this->RoleInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RoleInstances).ArrayNum = 0;
  (this->RoleInstances).ArrayMax = 0;
  (this->SourceType).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->TextData).Reference;
  (this->SourceType).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->SourceType).Flags = param_1->Flags;
  (this->SourceMachineName).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_2->TextData).Reference;
  (this->SourceMachineName).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->SourceMachineName).Flags = param_2->Flags;
  this->ConnectionLastActive = 0.0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ConnectionLastActiveSection,4000)
  ;
  this->CachedThroughput = 0.0;
  this->LastThroughputUpdate = 0.0;
  this->AccumulatedBytes = 0.0;
  this->bDiscovering = false;
  this->bInitialized = false;
  this->MachineTimeOffset = param_4;
  return this;
}

// AddAnnotations @ 14d0206a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkMessageBusSource::AddAnnotations
          (FLiveLinkMessageBusSource *this,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  FName local_28;
  FString local_20;
  
  pTVar1 = CVarLiveLinkSupportCompressPayloads.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      lVar3 = 4;
      goto LAB_14d0206cf;
    }
  }
  lVar3 = 0;
LAB_14d0206cf:
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) != 0) {
    local_28 = FLiveLinkMessageAnnotation::CompressedPayloadSupport;
    ::FString::FString(&local_20,L"");
    TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
    Emplace<FName,FString>
              ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                *)param_1,&local_28,&local_20);
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// CreateAndInitializeMessageEndpoint @ 14d0317e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkMessageBusSource::CreateAndInitializeMessageEndpoint(FLiveLinkMessageBusSource *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName *pFVar3;
  FMessageEndpointBuilder local_58;
  
  pFVar3 = (FName *)(**(code **)(this->_padding_ + 0x70))();
  FMessageEndpointBuilder::FMessageEndpointBuilder(&local_58,pFVar3);
  (**(code **)(this->_padding_ + 0x78))(this,&local_58);
  (**(code **)(this->_padding_ + 0x80))(this,&this->MessageEndpoint);
  DestructItems<TSharedPtr<IMessageHandler,1>,int>
            ((TSharedPtr<IMessageHandler,1> *)local_58.Handlers.AllocatorInstance.Data,
             local_58.Handlers.ArrayNum);
  if ((TSharedPtr<IMessageHandler,1> *)local_58.Handlers.AllocatorInstance.Data !=
      (TSharedPtr<IMessageHandler,1> *)0x0) {
    FMemory::Free(local_58.Handlers.AllocatorInstance.Data);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_58.OnNotification);
  if (local_58.BusPtr.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
  {
    LOCK();
    paVar1 = &(local_58.BusPtr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_58.BusPtr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.BusPtr.WeakReferenceCount.ReferenceController,1);
    }
  }
  return;
}

// GetAddress @ 14d0480e0

/* WARNING: Enum "Type": Some values do not have unique names */

FMessageAddress * __thiscall
FLiveLinkMessageBusSource::GetAddress
          (FLiveLinkMessageBusSource *this,FMessageAddress *__return_storage_ptr__)

{
  FMessageEndpoint *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  (__return_storage_ptr__->UniqueId).A = 0;
  (__return_storage_ptr__->UniqueId).B = 0;
  (__return_storage_ptr__->UniqueId).C = 0;
  (__return_storage_ptr__->UniqueId).D = 0;
  pFVar1 = (this->MessageEndpoint).Object;
  if (pFVar1 != (FMessageEndpoint *)0x0) {
    uVar2 = (pFVar1->Address).UniqueId.B;
    uVar3 = (pFVar1->Address).UniqueId.C;
    uVar4 = (pFVar1->Address).UniqueId.D;
    (__return_storage_ptr__->UniqueId).A = (pFVar1->Address).UniqueId.A;
    (__return_storage_ptr__->UniqueId).B = uVar2;
    (__return_storage_ptr__->UniqueId).C = uVar3;
    (__return_storage_ptr__->UniqueId).D = uVar4;
  }
  return __return_storage_ptr__;
}

// GetDeadSourceTimeout @ 14d04ae70

/* WARNING: Enum "Type": Some values do not have unique names */

double __thiscall FLiveLinkMessageBusSource::GetDeadSourceTimeout(FLiveLinkMessageBusSource *this)

{
  UClass *this_00;
  
  this_00 = ULiveLinkSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
    return *(double *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[4].field_0x8;
  }
  return *(double *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[4].field_0x8;
}

// GetSettingsClass @ 14d054ae0

/* WARNING: Enum "Type": Some values do not have unique names */

TSubclassOf<ULiveLinkSourceSettings> __thiscall
FLiveLinkMessageBusSource::GetSettingsClass(FLiveLinkMessageBusSource *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = ULiveLinkMessageBusSourceSettings::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<ULiveLinkSourceSettings>)in_RDX.field0_0x0;
}

// GetSourceMachineName @ 14d055640

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
FLiveLinkMessageBusSource::GetSourceMachineName
          (FLiveLinkMessageBusSource *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->SourceMachineName).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->SourceMachineName).Flags;
  return __return_storage_ptr__;
}

// GetSourceName @ 14d055720

/* WARNING: Enum "Type": Some values do not have unique names */

FName * __thiscall FLiveLinkMessageBusSource::GetSourceName(FLiveLinkMessageBusSource *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::Name,L"LiveLinkMessageBusSource");
      _Init_thread_footer(&::_TSS0);
      return &::Name;
    }
  }
  return &::Name;
}

// GetSourceStatus @ 14d055ec0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
FLiveLinkMessageBusSource::GetSourceStatus
          (FLiveLinkMessageBusSource *this,FText *__return_storage_ptr__)

{
  char cVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  if ((((this->ConnectionAddress).UniqueId.D == 0 && (this->ConnectionAddress).UniqueId.C == 0) &&
      (this->ConnectionAddress).UniqueId.B == 0) && (this->ConnectionAddress).UniqueId.A == 0) {
    pwVar3 = L"Waiting for connection";
    pwVar2 = L"InvalidConnection";
  }
  else {
    cVar1 = (**(code **)(this->_padding_ + 0x28))();
    if (cVar1 == '\0') {
      pwVar3 = L"Not responding";
      pwVar2 = L"TimeoutStatus";
    }
    else {
      pwVar3 = L"Active";
      pwVar2 = L"ActiveStatus";
    }
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"LiveLinkMessageBusSource",pwVar2,pwVar3);
  return __return_storage_ptr__;
}

// GetSourceToolTip @ 14d056100

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
FLiveLinkMessageBusSource::GetSourceToolTip
          (FLiveLinkMessageBusSource *this,FText *__return_storage_ptr__)

{
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"Throughput: %.1f KB/s");
  FText::FromString(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetSourceType @ 14d0562f0

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
FLiveLinkMessageBusSource::GetSourceType
          (FLiveLinkMessageBusSource *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->SourceType).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->SourceType).Flags;
  return __return_storage_ptr__;
}

// HandleClearSubject @ 14d0584f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkMessageBusSource::HandleClearSubject
          (FLiveLinkMessageBusSource *this,FLiveLinkClearSubject *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  LARGE_INTEGER local_res8;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  FName local_18;
  
  lpCriticalSection = &this->ConnectionLastActiveSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    QueryPerformanceCounter(&local_res8);
    this->ConnectionLastActive =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_18 = param_1->SubjectName;
    if (local_18 != (FName)0x0) {
      local_28 = (this->SourceGuid).A;
      uStack_24 = (this->SourceGuid).B;
      uStack_20 = (this->SourceGuid).C;
      uStack_1c = (this->SourceGuid).D;
      (**(code **)((longlong)*this->Client + 0xa0))(this->Client,&local_28);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HandleHeartbeat @ 14d0585a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkMessageBusSource::HandleHeartbeat
          (FLiveLinkMessageBusSource *this,FLiveLinkHeartbeatMessage *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  LARGE_INTEGER local_res8;
  
  lpCriticalSection = &this->ConnectionLastActiveSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    QueryPerformanceCounter(&local_res8);
    this->ConnectionLastActive =
         (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
                    /* WARNING: Could not recover jumptable at 0x00014d0585f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Initialize @ 14d05aff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveLinkMessageBusSource::Initialize(FLiveLinkMessageBusSource *this)

{
  int *piVar1;
  atomic<int> *paVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar3;
  atomic<int> aVar4;
  longlong lVar5;
  UObject *pUVar6;
  FWeakObjectPtr *pFVar7;
  FName FVar8;
  code *pcVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  FName *pFVar15;
  FModuleManager *this_00;
  IModuleInterface *pIVar16;
  FLiveLinkMessageBusDiscoveryManager *this_01;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  UClass *pUVar19;
  undefined1 local_res8 [8];
  UObject *local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FWeakObjectPtr local_b8;
  TArray<TSubclassOf<ULiveLinkRole>,TSizedDefaultAllocator<32>_> local_b0;
  FMessageEndpointBuilder local_a0;
  
  if (this->bInitialized == false) {
    FLiveLinkRoleTrait::GetRoles(&local_b0);
    iVar10 = local_b0.ArrayNum;
    uVar17 = (ulonglong)local_b0.ArrayNum;
    pUVar19 = (UClass *)0x0;
    pFVar3 = local_b0.AllocatorInstance.Data + uVar17 * 8;
    FVar18.Data = local_b0.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar17 != iVar10) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSubclassOf<ULiveLinkRole>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar18.Data == pFVar3) break;
      lVar5 = *(longlong *)FVar18.Data;
      pUVar14 = pUVar19;
      if ((lVar5 != 0) &&
         (pUVar13 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar13 != (UClass *)0x0)) {
        iVar12 = (int)pUVar13->_padding_;
        if ((*(int *)(lVar5 + 0x38) < iVar12) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar12 * 8) !=
            &pUVar13->_padding_)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if (bVar11) {
          pUVar14 = *(UClass **)FVar18.Data;
        }
      }
      if ((pUVar14->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar14);
      }
      pUVar6 = (pUVar14->ClassDefaultObject).field0_0x0.DebugPtr;
      pUVar14 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
      iVar12 = (int)pUVar14->_padding_;
      if (((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar12) ||
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar12 * 8) !=
           &pUVar14->_padding_)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Ret->IsA(T::StaticClass())",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                              ,0x1181,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      local_b8.ObjectIndex = 0;
      local_b8.ObjectSerialNumber = 0;
      local_res10 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_res10);
      pFVar7 = (FWeakObjectPtr *)(this->RoleInstances).AllocatorInstance.Data;
      if (((pFVar7 <= &local_b8) && (&local_b8 < pFVar7 + (this->RoleInstances).ArrayMax)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar12 = (this->RoleInstances).ArrayNum;
      piVar1 = &(this->RoleInstances).ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->RoleInstances).AllocatorInstance,piVar1);
      }
      FVar18.Data = FVar18.Data + 8;
      (this->RoleInstances).ArrayNum = iVar12 + 1;
      *(FWeakObjectPtr *)((this->RoleInstances).AllocatorInstance.Data + (longlong)iVar12 * 8) =
           local_b8;
      uVar17 = (ulonglong)(uint)local_b0.ArrayNum;
    }
    if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.AllocatorInstance.Data);
    }
    pFVar15 = (FName *)(**(code **)(this->_padding_ + 0x70))(this);
    FMessageEndpointBuilder::FMessageEndpointBuilder(&local_a0,pFVar15);
    (**(code **)(this->_padding_ + 0x78))(this,&local_a0);
    (**(code **)(this->_padding_ + 0x80))(this,&this->MessageEndpoint);
    DestructItems<TSharedPtr<IMessageHandler,1>,int>
              ((TSharedPtr<IMessageHandler,1> *)local_a0.Handlers.AllocatorInstance.Data,
               local_a0.Handlers.ArrayNum);
    if ((TSharedPtr<IMessageHandler,1> *)local_a0.Handlers.AllocatorInstance.Data !=
        (TSharedPtr<IMessageHandler,1> *)0x0) {
      FMemory::Free(local_a0.Handlers.AllocatorInstance.Data);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_a0.OnNotification);
    if (local_a0.BusPtr.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
       ) {
      LOCK();
      paVar2 = &(local_a0.BusPtr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if ((aVar4 == (atomic<int>)0x1) &&
         (local_a0.BusPtr.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0)) {
        (**(code **)((local_a0.BusPtr.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_a0.BusPtr.WeakReferenceCount.ReferenceController,1);
      }
    }
    if ((((this->ConnectionAddress).UniqueId.D == 0 && (this->ConnectionAddress).UniqueId.C == 0) &&
        (this->ConnectionAddress).UniqueId.B == 0) && (this->ConnectionAddress).UniqueId.A == 0) {
      if (this->bDiscovering == false) {
        pFVar15 = ::FName::FName(&local_res20,"LiveLink");
        FVar8 = *pFVar15;
        this_00 = FModuleManager::Get();
        pIVar16 = FModuleManager::LoadModuleChecked(this_00,FVar8);
        this_01 = (FLiveLinkMessageBusDiscoveryManager *)
                  (**(code **)((longlong)*pIVar16 + 0x50))(pIVar16);
        FLiveLinkMessageBusDiscoveryManager::AddDiscoveryMessageRequest(this_01);
      }
      LOCK();
      this->bIsValid = (atomic<bool>)0x0;
      UNLOCK();
    }
    else {
      (**(code **)(this->_padding_ + 0xa0))(this);
    }
    lpCriticalSection = &this->ConnectionLastActiveSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    QueryPerformanceCounter(&local_res18);
    this->ConnectionLastActive =
         (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->bInitialized = true;
  }
  return;
}

// InitializeAndPushFrameData_AnyThread @ 14d05bd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkMessageBusSource::InitializeAndPushFrameData_AnyThread
          (FLiveLinkMessageBusSource *this,FName param_1,FLiveLinkSubjectKey *param_2,
          TSharedRef<IMessageContext,1> *param_3,UScriptStruct *param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FWeakObjectPtr FVar7;
  bool bVar8;
  UScriptStruct *pUVar9;
  FLiveLinkSerializedFrameData *this_00;
  UScriptStruct *pUVar10;
  UClass *pUVar11;
  void *pvVar12;
  double *pdVar13;
  UObject *pUVar14;
  FText *this_01;
  FString *pFVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  FName local_res10 [3];
  undefined1 auStackY_208 [32];
  <lambda_1> local_1d8;
  FStructOnScope local_1d0;
  FWeakObjectPtr local_1a8;
  FWeakObjectPtr local_1a0;
  FWeakObjectPtr local_198;
  UScriptStruct *local_190;
  LARGE_INTEGER local_188;
  UObject *local_180;
  LARGE_INTEGER local_178;
  UScriptStruct *local_170;
  LARGE_INTEGER local_168;
  FStructOnScope local_160;
  FString local_138;
  longlong *local_128 [2];
  undefined1 local_118 [88];
  undefined4 local_c0;
  FFrameTime local_b8;
  FFrameRate FStack_b0;
  TArray<float,TSizedDefaultAllocator<32>_> local_a8;
  double local_98;
  FFrameTime FStack_90;
  FFrameRate local_88;
  int local_80;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_res10[0] = param_1;
  FStructOnScope::FStructOnScope(&local_1d0);
  if (param_4 != (UScriptStruct *)0x0) {
    pUVar9 = FLiveLinkSerializedFrameData::StaticStruct();
    if (pUVar9 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar9->_padding_;
      if (((int)param_4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar9->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        this_00 = (FLiveLinkSerializedFrameData *)(**(code **)((longlong)*param_3->Object + 0x18))()
        ;
        FStructOnScope::FStructOnScope(&local_160);
        FLiveLinkSerializedFrameData::GetPayload(this_00,&local_160);
        pUVar9 = (UScriptStruct *)FWeakObjectPtr::Get(&local_160.ScriptStruct.WeakPtr);
        pUVar10 = FLiveLinkFloatAnimationFrameData::StaticStruct();
        if (pUVar9 != pUVar10) {
          pUVar14 = FWeakObjectPtr::Get(&local_160.ScriptStruct.WeakPtr);
          pUVar9 = FLiveLinkBaseFrameData::StaticStruct();
          if (pUVar9 == (UScriptStruct *)0x0) {
LAB_14d05c0ce:
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Payload.GetStruct()->IsChildOf<FLiveLinkBaseFrameData>()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkMessageBusSource.cpp"
                               ,0x16a,L"");
            if (bVar8) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            iVar1 = (int)pUVar9->_padding_;
            if ((*(int *)&pUVar14[1].field_0x10 < iVar1) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)&pUVar14[1].field_0x8 + (longlong)iVar1 * 8) !=
                &pUVar9->_padding_)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (!bVar8) goto LAB_14d05c0ce;
          }
          pUVar14 = FWeakObjectPtr::Get(&local_160.ScriptStruct.WeakPtr);
          if (pUVar14 == (UObject *)0x0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InOtherStruct",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                               ,0x16d,L"");
            if (bVar8) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar14);
          }
          local_1a0.ObjectIndex = 0;
          local_1a0.ObjectSerialNumber = 0;
          local_180 = pUVar14;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar14);
          }
          FWeakObjectPtr::operator=(&local_1a0,(FObjectPtr)&local_180);
          FVar7 = local_1a0;
          (**(code **)(local_1d0._padding_ + 0x40))(&local_1d0);
          local_1d0.ScriptStruct.WeakPtr = FVar7;
          (**(code **)local_1d0._padding_)(&local_1d0);
          if ((double *)local_160.SampleStructMemory != (double *)0x0) {
            pUVar9 = (UScriptStruct *)(**(code **)(local_1d0._padding_ + 0x20))(&local_1d0);
            if (pUVar9 == (UScriptStruct *)0x0) {
LAB_14d05c1d0:
              pUVar9 = (UScriptStruct *)0x0;
            }
            else {
              pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
              iVar1 = (int)pUVar11->_padding_;
              if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar11->_padding_)) goto LAB_14d05c1d0;
            }
            pvVar12 = (void *)(**(code **)(local_1d0._padding_ + 0x18))(&local_1d0);
            UScriptStruct::CopyScriptStruct(pUVar9,pvVar12,local_160.SampleStructMemory,1);
          }
          dVar4 = *(double *)((longlong)local_160.SampleStructMemory + 8);
          dVar6 = *(double *)local_160.SampleStructMemory;
          QueryPerformanceCounter(&local_178);
          dVar5 = (double)local_178.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                  __real_4170000000000000;
          pdVar13 = (double *)(**(code **)(local_1d0._padding_ + 0x18))(&local_1d0);
          *pdVar13 = dVar4 + dVar6;
          pdVar13[1] = dVar5 - (dVar4 + dVar6);
          FStructOnScope::~FStructOnScope(&local_160);
          goto LAB_14d05c448;
        }
        FLiveLinkBaseFrameData::FLiveLinkBaseFrameData((FLiveLinkBaseFrameData *)local_118);
        local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.ArrayNum = 0;
        local_78.ArrayMax = 0;
        local_118._0_8_ = *(undefined8 *)local_160.SampleStructMemory;
        local_118._8_8_ = *(double *)((longlong)local_160.SampleStructMemory + 8);
        TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
        ::operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                     *)(local_118 + 0x10),
                    (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                     *)((longlong)local_160.SampleStructMemory + 0x10));
        local_b8 = *(FFrameTime *)((longlong)local_160.SampleStructMemory + 0x60);
        FStack_b0 = *(FFrameRate *)((longlong)local_160.SampleStructMemory + 0x68);
        TArray<float,TSizedDefaultAllocator<32>_>::operator=
                  (&local_a8,
                   (TArray<float,TSizedDefaultAllocator<32>_> *)
                   ((longlong)local_160.SampleStructMemory + 0x70));
        local_98 = *(double *)((longlong)local_160.SampleStructMemory + 0x80);
        FStack_90 = *(FFrameTime *)((longlong)local_160.SampleStructMemory + 0x88);
        local_88 = *(FFrameRate *)((longlong)local_160.SampleStructMemory + 0x90);
        local_80 = *(int *)((longlong)local_160.SampleStructMemory + 0x98);
        uVar2 = *(uint *)((longlong)local_160.SampleStructMemory + 0xa8);
        if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
        }
        if (local_78.ArrayMax < (int)uVar2) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,uVar2,&local_78.AllocatorInstance,local_78.ArrayNum,
                     &local_78.ArrayMax);
        }
        Algo::
        Transform<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_&,_FLiveLinkFloatAnimationFrameData::ToAnimData_::__l2::<lambda_1>_>
                  ((TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> *)
                   ((longlong)local_160.SampleStructMemory + 0xa0),&local_78,local_1d8);
        pUVar9 = FLiveLinkAnimationFrameData::StaticStruct();
        if (pUVar9 == (UScriptStruct *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InOtherStruct",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                             ,0x16d,L"");
          if (bVar8) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UScriptStruct *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        local_1a8.ObjectIndex = 0;
        local_1a8.ObjectSerialNumber = 0;
        local_190 = pUVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UScriptStruct *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        FWeakObjectPtr::operator=(&local_1a8,(FObjectPtr)&local_190);
        FVar7 = local_1a8;
        (**(code **)(local_1d0._padding_ + 0x40))(&local_1d0);
        local_1d0.ScriptStruct.WeakPtr = FVar7;
        (**(code **)local_1d0._padding_)(&local_1d0);
        pUVar9 = (UScriptStruct *)(**(code **)(local_1d0._padding_ + 0x20))(&local_1d0);
        if (pUVar9 == (UScriptStruct *)0x0) {
LAB_14d05bfda:
          pUVar9 = (UScriptStruct *)0x0;
        }
        else {
          pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
          iVar1 = (int)pUVar11->_padding_;
          if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar11->_padding_)) goto LAB_14d05bfda;
        }
        pvVar12 = (void *)(**(code **)(local_1d0._padding_ + 0x18))(&local_1d0);
        UScriptStruct::CopyScriptStruct(pUVar9,pvVar12,local_118,1);
        dVar6 = (double)local_118._8_8_ + (double)local_118._0_8_;
        QueryPerformanceCounter(&local_188);
        dVar4 = (double)local_188.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                __real_4170000000000000;
        pdVar13 = (double *)(**(code **)(local_1d0._padding_ + 0x18))(&local_1d0);
        *pdVar13 = dVar6;
        pdVar13[1] = dVar4 - dVar6;
        if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.AllocatorInstance.Data);
        }
        if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.AllocatorInstance.Data);
        }
        local_c0 = 0;
        if ((void *)local_118._80_8_ != (void *)0x0) {
          FMemory::Free((void *)local_118._80_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_118 + 0x10));
        FStructOnScope::~FStructOnScope(&local_160);
        goto LAB_14d05c448;
      }
    }
    pUVar9 = FLiveLinkBaseFrameData::StaticStruct();
    if (pUVar9 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar9->_padding_;
      if (((int)param_4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar9->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        pdVar13 = (double *)(**(code **)((longlong)*param_3->Object + 0x18))();
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_4);
        }
        local_170 = param_4;
        local_198.ObjectIndex = 0;
        local_198.ObjectSerialNumber = 0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_4);
        }
        FWeakObjectPtr::operator=(&local_198,(FObjectPtr)&local_170);
        FVar7 = local_198;
        (**(code **)(local_1d0._padding_ + 0x40))(&local_1d0);
        local_1d0.ScriptStruct.WeakPtr = FVar7;
        (**(code **)local_1d0._padding_)(&local_1d0);
        if (pdVar13 != (double *)0x0) {
          pUVar9 = (UScriptStruct *)(**(code **)(local_1d0._padding_ + 0x20))(&local_1d0);
          if (pUVar9 == (UScriptStruct *)0x0) {
LAB_14d05c32b:
            pUVar9 = (UScriptStruct *)0x0;
          }
          else {
            pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
            iVar1 = (int)pUVar11->_padding_;
            if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar11->_padding_)) goto LAB_14d05c32b;
          }
          pvVar12 = (void *)(**(code **)(local_1d0._padding_ + 0x18))(&local_1d0);
          UScriptStruct::CopyScriptStruct(pUVar9,pvVar12,pdVar13,1);
        }
        dVar4 = pdVar13[1];
        dVar6 = *pdVar13;
        QueryPerformanceCounter(&local_168);
        dVar5 = (double)local_168.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                __real_4170000000000000;
        pdVar13 = (double *)(**(code **)(local_1d0._padding_ + 0x18))(&local_1d0);
        *pdVar13 = dVar4 + dVar6;
        pdVar13[1] = dVar5 - (dVar4 + dVar6);
        goto LAB_14d05c448;
      }
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&NAME_InvalidFrameData,"LiveLinkMessageBusSource_InvalidFrameData");
      _Init_thread_footer(&::_TSS0);
    }
  }
  this_01 = (FText *)(**(code **)(this->_padding_ + 0x40))(this,local_128);
  pFVar15 = FText::ToString(this_01);
  pwVar16 = L"";
  if ((pFVar15->Data).ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
  }
  pFVar15 = ::FName::ToString(local_res10,&local_138);
  if ((pFVar15->Data).ArrayNum != 0) {
    pwVar16 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
  }
  FLiveLinkLog::Log_Internal<wchar_t_const_*,wchar_t_const_*>
            (Error,NAME_InvalidFrameData,param_2,
             (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*>)0x152a9f5e0,
             pwVar16,pwVar17);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
LAB_14d05c448:
  (**(code **)((longlong)*this->Client + 0x80))(this->Client,param_2,&local_1d0);
  FStructOnScope::~FStructOnScope(&local_1d0);
  return;
}

// InitializeAndPushStaticData_AnyThread @ 14d05c4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkMessageBusSource::InitializeAndPushStaticData_AnyThread
          (FLiveLinkMessageBusSource *this,FName param_1,TSubclassOf<ULiveLinkRole> param_2,
          FLiveLinkSubjectKey *param_3,TSharedRef<IMessageContext,1> *param_4,UScriptStruct *param_5
          )

{
  int iVar1;
  UObject *pUVar2;
  ILiveLinkClient *pIVar3;
  code *pcVar4;
  bool bVar5;
  UScriptStruct *pUVar6;
  void *pvVar7;
  UScriptStruct *pUVar8;
  UClass *pUVar9;
  void *pvVar10;
  UScriptStruct *local_res8;
  UObject *local_res18;
  FStructOnScope local_48;
  
  pUVar6 = FLiveLinkBaseStaticData::StaticStruct();
  pUVar8 = param_5;
  if (pUVar6 == (UScriptStruct *)0x0) {
LAB_14d05c541:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MessageTypeInfo->IsChildOf(FLiveLinkBaseStaticData::StaticStruct())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkMessageBusSource.cpp"
                       ,0x14a,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)param_5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_5->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_
       )) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14d05c541;
  }
  FStructOnScope::FStructOnScope(&local_48,(UStruct *)pUVar8);
  pvVar7 = (void *)(**(code **)((longlong)*param_4->Object + 0x18))();
  if (pUVar8 == (UScriptStruct *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOtherStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                       ,0x16d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  param_5 = (UScriptStruct *)0x0;
  local_res8 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&param_5,(FObjectPtr)&local_res8);
  pUVar8 = param_5;
  (**(code **)(local_48._padding_ + 0x40))(&local_48);
  local_48.ScriptStruct.WeakPtr = (FWeakObjectPtr)pUVar8;
  (**(code **)local_48._padding_)(&local_48);
  if (pvVar7 == (void *)0x0) goto LAB_14d05c68c;
  pUVar8 = (UScriptStruct *)(**(code **)(local_48._padding_ + 0x20))(&local_48);
  if (pUVar8 == (UScriptStruct *)0x0) {
LAB_14d05c669:
    pUVar8 = (UScriptStruct *)0x0;
  }
  else {
    pUVar9 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar9->_padding_)) goto LAB_14d05c669;
  }
  pvVar10 = (void *)(**(code **)(local_48._padding_ + 0x18))(&local_48);
  UScriptStruct::CopyScriptStruct(pUVar8,pvVar10,pvVar7,1);
LAB_14d05c68c:
  pUVar2 = *(UObject **)param_2.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  pIVar3 = this->Client;
  pcVar4 = *(code **)((longlong)*pIVar3 + 0x78);
  local_res18 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  (*pcVar4)(pIVar3,param_3,&local_res18,&local_48);
  FStructOnScope::~FStructOnScope(&local_48);
  return;
}

// InitializeMessageEndpoint @ 14d05c710

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkMessageBusSource::InitializeMessageEndpoint
          (FLiveLinkMessageBusSource *this,FMessageEndpointBuilder *param_1)

{
  TSharedPtr<IMessageHandler,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TRawPtrProxy<TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkMessageBusSource>_> local_res8;
  TRawPtrProxy<TRawMessageHandler<FLiveLinkClearSubject,FLiveLinkMessageBusSource>_> local_res10;
  TRawPtrProxy<TRawMessageCatchall<FLiveLinkMessageBusSource>_> local_res18 [2];
  TSharedPtr<IMessageHandler,1> local_78;
  TSharedPtr<IMessageHandler,1> local_68;
  TSharedPtr<IMessageHandler,1> local_58;
  TSharedPtr<FMessageEndpoint,1> local_48;
  
  local_res8.Object = ::operator_new(0x18);
  if (local_res8.Object ==
      (TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkMessageBusSource> *)0x0) {
    local_res8.Object =
         (TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkMessageBusSource> *)0x0;
  }
  else {
    (local_res8.Object)->Handler = this;
    (local_res8.Object)->_padding_ =
         (longlong)
         &___7__TRawMessageHandler_UFLiveLinkHeartbeatMessage__VFLiveLinkMessageBusSource____6B_;
    (local_res8.Object)->Func = (pmf_59aa31ac)HandleHeartbeat;
    if (this == (FLiveLinkMessageBusSource *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandler != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                         ,0x58,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkMessageBusSource>_>
            (&local_78,&local_res8);
  pTVar1 = (TSharedPtr<IMessageHandler,1> *)(param_1->Handlers).AllocatorInstance.Data;
  if ((pTVar1 <= &local_78) && (&local_78 < pTVar1 + (param_1->Handlers).ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (param_1->Handlers).ArrayNum;
  if (iVar4 == (param_1->Handlers).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(param_1->Handlers).AllocatorInstance,&(param_1->Handlers).ArrayMax);
  }
  (param_1->Handlers).ArrayNum = iVar4 + 1;
  pFVar5 = (param_1->Handlers).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(IMessageHandler **)pFVar5 = local_78.Object;
  *(TReferenceControllerBase<1> **)(pFVar5 + 8) = local_78.SharedReferenceCount.ReferenceController;
  local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_78.Object = (IMessageHandler *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_res10.Object = ::operator_new(0x18);
  if (local_res10.Object ==
      (TRawMessageHandler<FLiveLinkClearSubject,FLiveLinkMessageBusSource> *)0x0) {
    local_res10.Object = (TRawMessageHandler<FLiveLinkClearSubject,FLiveLinkMessageBusSource> *)0x0;
  }
  else {
    (local_res10.Object)->Handler = this;
    (local_res10.Object)->_padding_ =
         (longlong)
         &___7__TRawMessageHandler_UFLiveLinkClearSubject__VFLiveLinkMessageBusSource____6B_;
    (local_res10.Object)->Func = (pmf_b1ceca78)HandleClearSubject;
    if (this == (FLiveLinkMessageBusSource *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandler != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                         ,0x58,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FLiveLinkClearSubject,FLiveLinkMessageBusSource>_>
            (&local_68,&local_res10);
  pTVar1 = (TSharedPtr<IMessageHandler,1> *)(param_1->Handlers).AllocatorInstance.Data;
  if ((pTVar1 <= &local_68) && (&local_68 < pTVar1 + (param_1->Handlers).ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (param_1->Handlers).ArrayNum;
  if (iVar4 == (param_1->Handlers).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(param_1->Handlers).AllocatorInstance,&(param_1->Handlers).ArrayMax);
  }
  (param_1->Handlers).ArrayNum = iVar4 + 1;
  pFVar5 = (param_1->Handlers).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(IMessageHandler **)pFVar5 = local_68.Object;
  *(TReferenceControllerBase<1> **)(pFVar5 + 8) = local_68.SharedReferenceCount.ReferenceController;
  local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_68.Object = (IMessageHandler *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  param_1->RecipientThread = AnyNormalThreadNormalTask;
  local_res18[0].Object = ::operator_new(0x18);
  if (local_res18[0].Object == (TRawMessageCatchall<FLiveLinkMessageBusSource> *)0x0) {
    local_res18[0].Object = (TRawMessageCatchall<FLiveLinkMessageBusSource> *)0x0;
  }
  else {
    (local_res18[0].Object)->Handler = this;
    (local_res18[0].Object)->_padding_ =
         (longlong)&___7__TRawMessageCatchall_VFLiveLinkMessageBusSource____6B_;
    (local_res18[0].Object)->Func = (pmf_b9b689ab)InternalHandleMessage;
    if (this == (FLiveLinkMessageBusSource *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandler != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                         ,0x24,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageCatchall<FLiveLinkMessageBusSource>_>
            (&local_58,local_res18);
  pTVar1 = (TSharedPtr<IMessageHandler,1> *)(param_1->Handlers).AllocatorInstance.Data;
  if ((pTVar1 <= &local_58) && (&local_58 < pTVar1 + (param_1->Handlers).ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (param_1->Handlers).ArrayNum;
  if (iVar4 == (param_1->Handlers).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(param_1->Handlers).AllocatorInstance,&(param_1->Handlers).ArrayMax);
  }
  (param_1->Handlers).ArrayNum = iVar4 + 1;
  pFVar5 = (param_1->Handlers).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(IMessageHandler **)pFVar5 = local_58.Object;
  *(TReferenceControllerBase<1> **)(pFVar5 + 8) = local_58.SharedReferenceCount.ReferenceController;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_58.Object = (IMessageHandler *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FMessageEndpointBuilder::Build(param_1,&local_48);
  if (&this->MessageEndpoint != &local_48) {
    (this->MessageEndpoint).Object = local_48.Object;
    local_48.Object = (FMessageEndpoint *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MessageEndpoint).SharedReferenceCount,&local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return;
}

// InitializeSettings @ 14d05cb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkMessageBusSource::InitializeSettings
          (FLiveLinkMessageBusSource *this,ULiveLinkSourceSettings *param_1)

{
  return;
}

// InternalHandleMessage @ 14d05d5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkMessageBusSource::InternalHandleMessage
          (FLiveLinkMessageBusSource *this,TSharedRef<IMessageContext,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  IMessageContext *pIVar2;
  LARGE_INTEGER LVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  longlong lVar9;
  FWeakObjectPtr *pFVar10;
  UObject *pUVar11;
  UScriptStruct *pUVar12;
  TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
  *pTVar13;
  FString *pFVar14;
  FText *pFVar15;
  UObject *pUVar16;
  UClass *pUVar17;
  UObject *pUVar18;
  ulonglong uVar19;
  wchar_t *pwVar20;
  LARGE_INTEGER *pLVar21;
  wchar_t *pwVar22;
  LARGE_INTEGER local_res8;
  TSharedRef<IMessageContext,1> *local_res10;
  uint local_res18;
  LARGE_INTEGER local_res20;
  FString local_a8;
  FLiveLinkSubjectKey local_98;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  LARGE_INTEGER local_70;
  FLiveLinkSubjectKey local_68;
  
  lpCriticalSection = &this->ConnectionLastActiveSection;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  QueryPerformanceCounter(&local_res8);
  this->ConnectionLastActive =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pIVar2 = param_1->Object;
  lVar9 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2);
  if (lVar9 == 0) {
    return;
  }
  pFVar10 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2);
  bVar8 = FWeakObjectPtr::IsValid(pFVar10,false,true);
  if (!bVar8) {
    return;
  }
  if (this->bIsShuttingDown != (atomic<bool>)0x0) {
    return;
  }
  pFVar10 = (FWeakObjectPtr *)(**(code **)((longlong)*param_1->Object + 0x20))();
  pUVar11 = FWeakObjectPtr::Get(pFVar10);
  if (pUVar11 == (UObject *)0x0) {
    return;
  }
  pUVar12 = FLiveLinkBaseStaticData::StaticStruct();
  if (pUVar12 == (UScriptStruct *)0x0) {
LAB_14d05d6c7:
    bVar8 = false;
  }
  else {
    iVar1 = (int)pUVar12->_padding_;
    if ((*(int *)&pUVar11[1].field_0x10 < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar11[1].field_0x8 + (longlong)iVar1 * 8) !=
        &pUVar12->_padding_)) goto LAB_14d05d6c7;
    bVar8 = true;
  }
  pUVar12 = FLiveLinkBaseFrameData::StaticStruct();
  if (pUVar12 == (UScriptStruct *)0x0) {
LAB_14d05d6fc:
    bVar5 = false;
  }
  else {
    iVar1 = (int)pUVar12->_padding_;
    if ((*(int *)&pUVar11[1].field_0x10 < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar11[1].field_0x8 + (longlong)iVar1 * 8) !=
        &pUVar12->_padding_)) goto LAB_14d05d6fc;
    bVar5 = true;
  }
  pUVar12 = FLiveLinkSerializedFrameData::StaticStruct();
  if (pUVar12 != (UScriptStruct *)0x0) {
    iVar1 = (int)pUVar12->_padding_;
    if ((iVar1 <= *(int *)&pUVar11[1].field_0x10) &&
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar11[1].field_0x8 + (longlong)iVar1 * 8) ==
        &pUVar12->_padding_)) {
      bVar6 = true;
      goto LAB_14d05d72a;
    }
  }
  bVar6 = false;
LAB_14d05d72a:
  if (((!bVar8) && (!bVar5)) && (!bVar6)) {
    return;
  }
  local_res20.QuadPart = 0;
  pTVar13 = (TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             *)(**(code **)*param_1->Object)();
  pFVar14 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::Find(pTVar13,FLiveLinkMessageAnnotation::SubjectAnnotation);
  pwVar22 = L"";
  if (pFVar14 != (FString *)0x0) {
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    ::FName::FName((FName *)&local_res8.s,pwVar20);
    local_res20 = local_res8;
  }
  if (local_res20.QuadPart == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&NAME_InvalidSubject,"LiveLinkMessageBusSource_InvalidSubject");
      _Init_thread_footer(&::_TSS0);
    }
    pFVar15 = (FText *)(**(code **)(this->_padding_ + 0x40))(this,&local_a8);
    pFVar14 = FText::ToString(pFVar15);
    if ((pFVar14->Data).ArrayNum != 0) {
      pwVar22 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    local_98.Source.A = (this->SourceGuid).A;
    local_98.Source.B = (this->SourceGuid).B;
    local_98.Source.C = (this->SourceGuid).C;
    local_98.Source.D = (this->SourceGuid).D;
    local_res8.QuadPart = 0;
    local_98.SubjectName.Name.ComparisonIndex.Value = 0;
    local_98.SubjectName.Name.Number = 0;
    FLiveLinkLog::Log_Internal<wchar_t_const_*>
              (Error,NAME_InvalidSubject,&local_98,
               (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152a9f350,pwVar22);
    if (local_a8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    (**(code **)(*(longlong *)local_a8.Data.AllocatorInstance.Data + 0x10))();
    return;
  }
  if (!bVar8) {
    local_80 = (this->SourceGuid).A;
    uStack_7c = (this->SourceGuid).B;
    uStack_78 = (this->SourceGuid).C;
    uStack_74 = (this->SourceGuid).D;
    local_70 = local_res20;
    (**(code **)(this->_padding_ + 0x90))(this,local_res20.QuadPart,&local_80,local_res10,pUVar11);
    return;
  }
  local_res8.QuadPart = 0;
  pTVar13 = (TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             *)(**(code **)*local_res10->Object)();
  pFVar14 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::Find(pTVar13,FLiveLinkMessageAnnotation::RoleAnnotation);
  if (pFVar14 != (FString *)0x0) {
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    ::FName::FName((FName *)&local_res8.s,pwVar20);
  }
  LVar3 = local_res8;
  local_res18 = (this->RoleInstances).ArrayNum;
  uVar19 = (ulonglong)(int)local_res18;
  pLVar21 = (LARGE_INTEGER *)(this->RoleInstances).AllocatorInstance.Data;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)(pLVar21 + uVar19);
  do {
    FVar7.Data = local_a8.Data.AllocatorInstance.Data;
    if ((this->RoleInstances).ArrayNum != (int)uVar19) {
      `TCheckedPointerIterator<TWeakObjectPtr<ULiveLinkRole,FWeakObjectPtr>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res8);
    }
    if (pLVar21 == (LARGE_INTEGER *)FVar7.Data) goto LAB_14d05da15;
    local_res8 = *pLVar21;
    pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res8.s);
    if (pUVar16 != (UObject *)0x0) {
      if (LVar3.QuadPart == 0) {
        pUVar18 = (UObject *)(**(code **)(*(longlong *)pUVar16 + 0x2b0))(pUVar16);
        if (pUVar18 == pUVar11) break;
      }
      else if (LVar3.QuadPart == *(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x18)) {
        lVar9 = (**(code **)(*(longlong *)pUVar16 + 0x2b0))(pUVar16);
        if (lVar9 != 0) {
          if ((*(int *)&pUVar11[1].field_0x10 < *(int *)(lVar9 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)&pUVar11[1].field_0x8 + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
              lVar9 + 0x30)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) break;
        }
        if ((bVar5) && (lVar9 = (**(code **)(*(longlong *)pUVar16 + 0x2b8))(pUVar16), lVar9 != 0)) {
          if ((*(int *)&pUVar11[1].field_0x10 < *(int *)(lVar9 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)&pUVar11[1].field_0x8 + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
              lVar9 + 0x30)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) break;
        }
      }
    }
    uVar19 = (ulonglong)local_res18;
    pLVar21 = pLVar21 + 1;
  } while( true );
  LVar3 = (LARGE_INTEGER)*(LARGE_INTEGER *)&pUVar16->field_0x10;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if ((UObject *)LVar3.QuadPart == (UObject *)0x0) goto LAB_14d05da15;
    UE::GC::MarkAsReachable((UObject *)LVar3);
  }
  if (((UObject *)LVar3.QuadPart != (UObject *)0x0) &&
     (pUVar17 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar17 != (UClass *)0x0)) {
    iVar1 = (int)pUVar17->_padding_;
    if ((*(int *)(LVar3.QuadPart + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(LVar3.QuadPart + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar17->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      local_80 = (this->SourceGuid).A;
      uStack_7c = (this->SourceGuid).B;
      uStack_78 = (this->SourceGuid).C;
      uStack_74 = (this->SourceGuid).D;
      local_70.s = local_res20.s;
      pcVar4 = *(code **)(this->_padding_ + 0x88);
      local_res8 = LVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)LVar3);
      }
      (*pcVar4)(this,local_res20.QuadPart,&local_res8,&local_80,local_res10,pUVar11);
      return;
    }
  }
LAB_14d05da15:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&NAME_InvalidRole,"LiveLinkMessageBusSource_InvalidRole");
    _Init_thread_footer(&::_TSS2);
  }
  pFVar15 = (FText *)(**(code **)(this->_padding_ + 0x40))(this,&local_98);
  pFVar14 = FText::ToString(pFVar15);
  if ((pFVar14->Data).ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
  }
  pFVar14 = ::FName::ToString((FName *)&local_res20.s,&local_a8);
  if ((pFVar14->Data).ArrayNum != 0) {
    pwVar22 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
  }
  local_68.Source.A = (this->SourceGuid).A;
  local_68.Source.B = (this->SourceGuid).B;
  local_68.Source.C = (this->SourceGuid).C;
  local_68.Source.D = (this->SourceGuid).D;
  local_68.SubjectName.Name = (FName)local_res20;
  FLiveLinkLog::Log_Internal<wchar_t_const_*,wchar_t_const_*>
            (Error,NAME_InvalidRole,&local_68,
             (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*>)0x152a9f3e0,
             pwVar22,pwVar20);
  if ((LARGE_INTEGER *)local_a8.Data.AllocatorInstance.Data != (LARGE_INTEGER *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if ((longlong *)local_98.Source._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_98.Source._0_8_ + 0x10))();
  }
  return;
}

// InvalidSourceStatus @ 14d05ea00

FText * __cdecl FLiveLinkMessageBusSource::InvalidSourceStatus(FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"LiveLinkMessageBusSource",L"InvalidConnection",
             L"Waiting for connection");
  return __return_storage_ptr__;
}

// IsSourceStillValid @ 14d0604b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLiveLinkMessageBusSource::IsSourceStillValid(FLiveLinkMessageBusSource *this)

{
  if (((((this->ConnectionAddress).UniqueId.D != 0 || (this->ConnectionAddress).UniqueId.C != 0) ||
       (this->ConnectionAddress).UniqueId.B != 0) || (this->ConnectionAddress).UniqueId.A != 0) &&
     (this->bIsValid != (atomic<bool>)0x0)) {
    return true;
  }
  return false;
}

// PostInitializeMessageEndpoint @ 14d06ccb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkMessageBusSource::PostInitializeMessageEndpoint
          (FLiveLinkMessageBusSource *this,TSharedPtr<FMessageEndpoint,1> *param_1)

{
  return;
}

// PushClientSubjectFrameData_AnyThread @ 14d071600

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkMessageBusSource::PushClientSubjectFrameData_AnyThread
          (FLiveLinkMessageBusSource *this,FLiveLinkSubjectKey *param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014d071607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->Client + 0x80))();
  return;
}

// PushClientSubjectStaticData_AnyThread @ 14d071620

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkMessageBusSource::PushClientSubjectStaticData_AnyThread
          (FLiveLinkMessageBusSource *this,FLiveLinkSubjectKey *param_1,
          TSubclassOf<ULiveLinkRole> param_2,
          FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_3)

{
  ILiveLinkClient *pIVar1;
  code *pcVar2;
  UObject *local_res8;
  
  pIVar1 = this->Client;
  local_res8 = *(UObject **)param_2.Class.field0_0x0;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x78);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  (*pcVar2)(pIVar1,param_1,&local_res8,param_3);
  return;
}

// ReceiveClient @ 14d074d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkMessageBusSource::ReceiveClient
          (FLiveLinkMessageBusSource *this,ILiveLinkClient *param_1,FGuid *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_2->A;
  uVar2 = param_2->B;
  uVar3 = param_2->C;
  uVar4 = param_2->D;
  this->Client = param_1;
  (this->SourceGuid).A = uVar1;
  (this->SourceGuid).B = uVar2;
  (this->SourceGuid).C = uVar3;
  (this->SourceGuid).D = uVar4;
  Initialize(this);
  return;
}

// RequestSourceShutdown @ 14d07a510

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLiveLinkMessageBusSource::RequestSourceShutdown(FLiveLinkMessageBusSource *this)

{
  TSharedPtr<FMessageEndpoint,1> *pTVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  atomic<int> *paVar2;
  int *piVar3;
  atomic<int> aVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  FName *pFVar9;
  FModuleManager *pFVar10;
  IModuleInterface *pIVar11;
  longlong lVar12;
  FMessageEndpoint **local_res8;
  FName local_res10;
  FName local_res18 [2];
  longlong local_58;
  FSharedReferencer<1> FStack_50;
  FMessageEndpoint *local_48;
  TReferenceControllerBase<1> *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (this->bInitialized != false) {
    if (this->bDiscovering != false) {
      pFVar9 = ::FName::FName(&local_res10,"LiveLink");
      FVar5 = *pFVar9;
      pFVar10 = FModuleManager::Get();
      pIVar11 = FModuleManager::LoadModuleChecked(pFVar10,FVar5);
      lVar12 = (**(code **)((longlong)*pIVar11 + 0x50))(pIVar11);
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + -1;
      UNLOCK();
    }
    pFVar9 = ::FName::FName(local_res18,"LiveLink");
    FVar5 = *pFVar9;
    pFVar10 = FModuleManager::Get();
    pIVar11 = FModuleManager::LoadModuleChecked(pFVar10,FVar5);
    lVar12 = (**(code **)((longlong)*pIVar11 + 0x48))(pIVar11);
    pTVar1 = &this->MessageEndpoint;
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar12 + 8);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    local_48 = pTVar1->Object;
    local_40 = (this->MessageEndpoint).SharedReferenceCount.ReferenceController;
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_40->WeakReferenceCount = (atomic<int>)((int)local_40->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_38._0_4_ = (this->ConnectionAddress).UniqueId.A;
    local_38._4_4_ = (this->ConnectionAddress).UniqueId.B;
    uStack_30._0_4_ = (this->ConnectionAddress).UniqueId.C;
    uStack_30._4_4_ = (this->ConnectionAddress).UniqueId.D;
    if ((*(FMessageEndpoint ***)(lVar12 + 0x30) <= &local_48) &&
       (&local_48 < *(FMessageEndpoint ***)(lVar12 + 0x30) + (longlong)*(int *)(lVar12 + 0x3c) * 4))
    {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    local_res8 = &local_48;
    TArray<FLiveLinkHeartbeatEmitter::FHeartbeatRecipient,TSizedDefaultAllocator<32>_>::
    RemoveAll<_TArray<FLiveLinkHeartbeatEmitter::FHeartbeatRecipient,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
              ((TArray<FLiveLinkHeartbeatEmitter::FHeartbeatRecipient,TSizedDefaultAllocator<32>_> *
               )(lVar12 + 0x30),(<lambda_1> *)&local_res8);
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &local_40->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(local_40->_padding_ + 8))(local_40,1);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    if (pTVar1->Object != (FMessageEndpoint *)0x0) {
      pTVar1->Object->Enabled = false;
    }
    local_58 = 0;
    FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FMessageEndpoint,1> *)&local_58) {
      pTVar1->Object = (FMessageEndpoint *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MessageEndpoint).SharedReferenceCount,&FStack_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_50.ReferenceController);
    (this->ConnectionAddress).UniqueId.C = 0;
    (this->ConnectionAddress).UniqueId.D = 0;
    piVar3 = &(this->RoleInstances).ArrayMax;
    (this->ConnectionAddress).UniqueId.A = 0;
    (this->ConnectionAddress).UniqueId.B = 0;
    (this->RoleInstances).ArrayNum = 0;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->RoleInstances).AllocatorInstance,0,piVar3);
    }
    this->bInitialized = false;
    LOCK();
    this->bIsShuttingDown = (atomic<bool>)0x1;
    UNLOCK();
  }
  return true;
}

// SendConnectMessage @ 14d07d8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveLinkMessageBusSource::SendConnectMessage(FLiveLinkMessageBusSource *this)

{
  uint *puVar1;
  ForElementType<unsigned_int> this_00;
  int iVar2;
  FName FVar3;
  void *pvVar4;
  undefined8 uVar5;
  TReferenceControllerBase<1> *pTVar6;
  FName FVar7;
  FName FVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FName *pFVar13;
  ulonglong uVar14;
  FMessageEndpoint *pFVar15;
  FName *pFVar16;
  FModuleManager *this_01;
  IModuleInterface *pIVar17;
  FLiveLinkHeartbeatEmitter *this_02;
  int iVar18;
  ForAnyElementType FVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  FScriptContainerElement *_Dst;
  undefined8 *puVar23;
  ForElementType<unsigned_int> FVar24;
  ulonglong uVar25;
  uint uVar26;
  undefined1 auStackY_188 [32];
  FTimespan local_148;
  FName local_140;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_138;
  TSharedPtr<IMessageAttachment,1> local_128;
  undefined4 local_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  FName local_108;
  FString FStack_100;
  longlong *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ForElementType<FSetElementId> local_b0;
  int local_a8;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  this_00 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_140 = (FName)FMemory::Malloc(4,0);
  pFVar16 = (FName *)0x0;
  *(int *)local_140 = 2;
  pTVar9 = CVarLiveLinkSupportCompressPayloads.Ref;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  bVar10 = IsInParallelGameThread();
  if (bVar10) {
LAB_14d07d933:
    pFVar13 = pFVar16;
  }
  else {
    bVar10 = IsInGameThread();
    pFVar13 = (FName *)&DAT_00000004;
    if (bVar10) goto LAB_14d07d933;
  }
  if (*(int *)((longlong)pTVar9->ShadowedValue + (longlong)&pFVar13->ComparisonIndex) == 0)
  goto LAB_14d07ddb2;
  local_108 = FLiveLinkMessageAnnotation::CompressedPayloadSupport;
  ::FString::FString(&FStack_100,L"");
  if (local_64 == 0) {
    iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x20,8,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                        (int *)(local_98 + 0xc));
    iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                       ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
    FVar24 = this_00;
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar24 = local_78;
    }
    uVar12 = iVar11 >> 0x1f & 0x1f;
    iVar11 = iVar11 + uVar12;
    puVar1 = (uint *)((longlong)FVar24 + (longlong)(iVar11 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << (((byte)iVar11 & 0x1f) - (char)uVar12 & 0x1f));
    iVar11 = local_68;
  }
  else {
    local_64 = local_64 + -1;
    iVar11 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0x20 + 4);
    iVar18 = local_68;
    if (local_64 != 0) {
      *(undefined4 *)(local_98._0_8_ + (longlong)iVar11 * 0x20) = 0xffffffff;
    }
  }
  local_68 = iVar11;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_98,(FSparseArrayAllocationInfo *)&local_138,iVar18);
  pFVar13 = (FName *)CONCAT44(local_138.ArrayMax,local_138.ArrayNum);
  if (pFVar13 != (FName *)0x0) {
    *pFVar13 = local_108;
    pFVar13[1].ComparisonIndex = 0;
    pFVar13[1].Number = 0;
    pFVar13[1] = (FName)FStack_100.Data.AllocatorInstance.Data;
    FStack_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar13[2].ComparisonIndex.Value = FStack_100.Data.ArrayNum;
    pFVar13[2].Number = FStack_100.Data.ArrayMax;
    FStack_100.Data.ArrayNum = 0;
    FStack_100.Data.ArrayMax = 0;
    pFVar13[3].ComparisonIndex.Value = 0xffffffff;
    pFVar16 = pFVar13;
  }
  FVar3 = *pFVar16;
  iVar18 = (int)local_138.AllocatorInstance.Data;
  uVar12 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
  uVar12 = uVar12 + FVar3.Number;
  local_148.Ticks._0_4_ = uVar12;
  iVar11 = local_98._8_4_;
  if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
    FVar19.Data = local_60;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FVar19.Data = local_58.Data;
    }
    for (iVar2 = *(int *)(FVar19.Data + (ulonglong)(local_50 - 1 & uVar12) * 4); iVar2 != -1;
        iVar2 = *(int *)(local_98._0_8_ + (longlong)iVar2 * 0x20 + 0x18)) {
      if (*(FName *)(local_98._0_8_ + (longlong)iVar2 * 0x20) == *pFVar16) {
        if (iVar2 != -1) {
          _Dst = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar2 * 0x20);
          pvVar4 = *(void **)(_Dst + 8);
          if (pvVar4 != (void *)0x0) {
            FMemory::Free(pvVar4);
          }
          memmove(_Dst,pFVar16,0x18);
          TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::RemoveAtUninitialized
                    ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_98,iVar18,1);
          iVar18 = iVar2;
        }
        if (iVar2 != -1) goto LAB_14d07dd92;
        iVar11 = local_98._8_4_;
        uVar12 = (uint)local_148.Ticks;
        break;
      }
    }
  }
  uVar26 = iVar11 - local_64;
  uVar22 = 1;
  if (3 < uVar26) {
    uVar20 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    uVar22 = 1 << ((byte)lVar21 & 0x1f);
  }
  if (((int)uVar26 < 1) || ((int)uVar22 <= (int)local_50)) {
    uVar12 = local_50 - 1 & uVar12;
    pFVar16[3].Number = uVar12;
    FVar19.Data = local_60;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FVar19.Data = local_58.Data;
    }
    uVar20 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
    pFVar16[3].ComparisonIndex.Value = *(uint *)(FVar19.Data + uVar20 * 4);
    *(int *)(FVar19.Data + uVar20 * 4) = iVar18;
  }
  else {
    local_50 = uVar22;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
    }
    if (uVar22 != 0) {
      uVar12 = uVar22;
      if (uVar22 < 2) {
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          uVar12 = 0;
          goto LAB_14d07dbbd;
        }
      }
      else {
LAB_14d07dbbd:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar12,4);
      }
      if (0 < (int)uVar22) {
        uVar25 = (ulonglong)uVar22;
        uVar20 = 0;
        do {
          FVar19.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar19.Data = local_58.Data;
          }
          uVar14 = uVar20 & (longlong)(int)uVar22 - 1U;
          uVar20 = uVar20 + 1;
          *(undefined4 *)(FVar19.Data + uVar14 * 4) = 0xffffffff;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
    }
    if (local_50 != 0) {
      iVar18 = 0;
      local_128.Object = (IMessageAttachment *)&DAT_100000000;
      iStack_114 = 0;
      iStack_110 = 0;
      if (local_70 != 0) {
        FVar24 = this_00;
        if (local_78 != (ForElementType<unsigned_int>)0x0) {
          FVar24 = local_78;
        }
        uVar12 = *(uint *)FVar24;
        iStack_110 = 0;
        while (uVar12 == 0) {
          iStack_110 = iStack_110 + 0x20;
          lVar21 = (longlong)iVar18;
          iVar18 = iVar18 + 1;
          uVar20 = (ulonglong)local_128.Object >> 0x20;
          local_128.Object = (IMessageAttachment *)CONCAT44((int)uVar20,iVar18);
          if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18)
          goto LAB_14d07dcbc;
          uVar12 = *(uint *)((uchar *)((longlong)FVar24 + 4) + lVar21 * 4);
        }
        local_128.Object =
             (IMessageAttachment *)CONCAT44(-uVar12 & uVar12,SUB84(local_128.Object,0));
        uVar20 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iStack_114 = (int)lVar21 + -1 + iStack_110;
        if (local_70 < iStack_114) {
LAB_14d07dcbc:
          iStack_114 = local_70;
        }
      }
      local_118 = 0xffffffff;
      local_f0 = (longlong *)local_98;
      local_e8.CurrentBitIndex = iStack_114;
      local_e8.UnvisitedBitMask = 0xffffffff;
      local_e8._28_4_ = uStack_10c;
      local_e8.BaseBitIndex = iStack_110;
      local_e8._padding_ = (longlong)local_128.Object;
      iVar18 = iStack_114;
      local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)this_00;
      local_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
      if (iStack_114 < local_70) {
        do {
          puVar23 = (undefined8 *)((longlong)iVar18 * 0x20 + *local_f0);
          uVar5 = *puVar23;
          uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
          uVar12 = local_50 - 1 & uVar12 + (int)((ulonglong)uVar5 >> 0x20);
          *(uint *)((longlong)puVar23 + 0x1c) = uVar12;
          FVar19.Data = local_60;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FVar19.Data = local_58.Data;
          }
          uVar20 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
          *(undefined4 *)(puVar23 + 3) = *(undefined4 *)(FVar19.Data + uVar20 * 4);
          *(int *)(FVar19.Data + uVar20 * 4) = iVar18;
          local_e8.UnvisitedBitMask = local_e8.UnvisitedBitMask & ~local_e8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e8);
          iVar18 = local_e8.CurrentBitIndex;
        } while (local_e8.CurrentBitIndex < *(int *)((longlong)local_e8.Array + 0x18));
      }
    }
  }
LAB_14d07dd92:
  if ((FName)FStack_100.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(FStack_100.Data.AllocatorInstance.Data);
  }
LAB_14d07ddb2:
  FVar3 = local_140;
  if ((local_140 != (FName)0x0) &&
     ((((this->ConnectionAddress).UniqueId.D != 0 || (this->ConnectionAddress).UniqueId.C != 0) ||
      (this->ConnectionAddress).UniqueId.B != 0) || (this->ConnectionAddress).UniqueId.A != 0)) {
    pFVar15 = (this->MessageEndpoint).Object;
    if ((pFVar15 != (FMessageEndpoint *)0x0) &&
       ((((pFVar15->BusPtr).Object != (IMessageBus *)0x0 &&
         (pTVar6 = (pFVar15->BusPtr).WeakReferenceCount.ReferenceController,
         pTVar6 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar6->SharedReferenceCount)))
       ) {
      pFVar15 = TSharedPtr<FMessageEndpoint,1>::operator->(&this->MessageEndpoint);
      FVar7.ComparisonIndex.Value = (this->ConnectionAddress).UniqueId.A;
      FVar7.Number = (this->ConnectionAddress).UniqueId.B;
      FVar8.ComparisonIndex.Value = (this->ConnectionAddress).UniqueId.C;
      FVar8.Number = (this->ConnectionAddress).UniqueId.D;
      local_148.Ticks = 0;
      local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.ComparisonIndex.Value = 0xf4373fff;
      local_140.Number = 0x2bca2875;
      local_138.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,1,0,&local_138.AllocatorInstance,1,&local_138.ArrayMax);
      *(FName *)local_138.AllocatorInstance.Data = FVar7;
      *(FName *)(local_138.AllocatorInstance.Data + 8) = FVar8;
      local_f0 = (longlong *)0x0;
      local_128.Object = (IMessageAttachment *)0x0;
      local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_e8._padding_ = 0;
      local_c8 = ___xmm_00000000ffffffff0000008000000000;
      uStack_c0 = _UNK_150631d98;
      local_e8.BaseBitIndex = 0;
      local_e8._28_4_ = 0;
      local_b0 = (ForElementType<FSetElementId>)0x0;
      local_a8 = 0;
      local_108 = FVar7;
      FStack_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar8;
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)&local_f0,
                  (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)local_98);
      FMessageEndpoint::Send<FLiveLinkConnectMessage>
                (pFVar15,(FLiveLinkConnectMessage *)FVar3,None,
                 (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                  *)&local_f0,&local_128,&local_138,&local_148,(FDateTime *)&local_140);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_128.SharedReferenceCount.ReferenceController);
      if ((FName *)local_138.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_138.AllocatorInstance.Data);
      }
    }
  }
  pFVar16 = ::FName::FName(&local_140,"LiveLink");
  FVar3 = *pFVar16;
  this_01 = FModuleManager::Get();
  pIVar17 = FModuleManager::LoadModuleChecked(this_01,FVar3);
  this_02 = (FLiveLinkHeartbeatEmitter *)(**(code **)((longlong)*pIVar17 + 0x48))(pIVar17);
  FLiveLinkHeartbeatEmitter::StartHeartbeat(this_02,&this->ConnectionAddress,&this->MessageEndpoint)
  ;
  LOCK();
  this->bIsValid = (atomic<bool>)0x1;
  UNLOCK();
  LOCK();
  this->bIsShuttingDown = (atomic<bool>)0x0;
  UNLOCK();
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)local_98,0);
  if (local_78 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return;
}

// StartDiscovering @ 14d080030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveLinkMessageBusSource::StartDiscovering(FLiveLinkMessageBusSource *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  IModuleInterface *pIVar3;
  FLiveLinkMessageBusDiscoveryManager *this_01;
  FName local_res8 [4];
  
  if (this->bDiscovering == false) {
    pFVar2 = ::FName::FName(local_res8,"LiveLink");
    FVar1 = *pFVar2;
    this_00 = FModuleManager::Get();
    pIVar3 = FModuleManager::LoadModuleChecked(this_00,FVar1);
    this_01 = (FLiveLinkMessageBusDiscoveryManager *)(**(code **)((longlong)*pIVar3 + 0x50))(pIVar3)
    ;
    FLiveLinkMessageBusDiscoveryManager::AddDiscoveryMessageRequest(this_01);
    return;
  }
  return;
}

// StartHeartbeatEmitter @ 14d0802a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveLinkMessageBusSource::StartHeartbeatEmitter(FLiveLinkMessageBusSource *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  IModuleInterface *pIVar3;
  FLiveLinkHeartbeatEmitter *this_01;
  FName local_res8;
  
  pFVar2 = ::FName::FName(&local_res8,"LiveLink");
  FVar1 = *pFVar2;
  this_00 = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  this_01 = (FLiveLinkHeartbeatEmitter *)(**(code **)((longlong)*pIVar3 + 0x48))(pIVar3);
  FLiveLinkHeartbeatEmitter::StartHeartbeat(this_01,&this->ConnectionAddress,&this->MessageEndpoint)
  ;
  return;
}

// StopDiscovering @ 14d080900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveLinkMessageBusSource::StopDiscovering(FLiveLinkMessageBusSource *this)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this_00;
  IModuleInterface *pIVar3;
  longlong lVar4;
  FName local_res8 [4];
  
  if (this->bDiscovering != false) {
    pFVar2 = ::FName::FName(local_res8,"LiveLink");
    FVar1 = *pFVar2;
    this_00 = FModuleManager::Get();
    pIVar3 = FModuleManager::LoadModuleChecked(this_00,FVar1);
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x50))(pIVar3);
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + -1;
    UNLOCK();
  }
  return;
}

// TimeoutSourceStatus @ 14d083010

FText * __cdecl FLiveLinkMessageBusSource::TimeoutSourceStatus(FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"LiveLinkMessageBusSource",L"TimeoutStatus",L"Not responding");
  return __return_storage_ptr__;
}

// Update @ 14d0864c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveLinkMessageBusSource::Update(FLiveLinkMessageBusSource *this)

{
  LPCRITICAL_SECTION lpCriticalSection;
  FWindowsRecursiveMutex *lpCriticalSection_00;
  int iVar1;
  int iVar2;
  FName FVar3;
  FProviderPollResult *pFVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  atomic<double> aVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FModuleManager *pFVar13;
  IModuleInterface *pIVar14;
  longlong lVar15;
  FText *pFVar16;
  FString *pFVar17;
  UClass *this_00;
  ForAnyElementType FVar18;
  TSharedPtr<FProviderPollResult,1> *pTVar19;
  double dVar20;
  float fVar21;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_res10;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  longlong *local_108 [2];
  FText local_f8;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  TOptional<FMessageTransportStatistics> local_d8;
  
  if ((((this->ConnectionAddress).UniqueId.D != 0 || (this->ConnectionAddress).UniqueId.C != 0) ||
      (this->ConnectionAddress).UniqueId.B != 0) || (this->ConnectionAddress).UniqueId.A != 0) {
    this_00 = ULiveLinkSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    aVar9 = FApp::CurrentTime;
    fVar21 = 0.0;
    dVar20 = *(double *)((this_00->ClassDefaultObject).field0_0x0.DebugPtr + 4);
    UE::LiveLinkHub::FClientNetworkStatisticsModel::GetLatestNetworkStatistics
              (&local_d8,&this->ConnectionAddress);
    if (local_d8.bIsSet != false) {
      fVar21 = (float)local_d8.TypedValue.TotalBytesReceived - this->AccumulatedBytes;
      this->AccumulatedBytes = (float)local_d8.TypedValue.TotalBytesReceived;
      if (local_d8.TypedValue.IPv4AsString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.TypedValue.IPv4AsString.Data.AllocatorInstance.Data);
      }
    }
    if (__real_3ff0000000000000 < (double)aVar9 - (double)this->LastThroughputUpdate) {
      this->CachedThroughput = fVar21 * __real_3a83126f;
      this->LastThroughputUpdate = (float)(double)aVar9;
    }
    LOCK();
    this->bIsValid = (atomic<bool>)((double)aVar9 - this->ConnectionLastActive < dVar20);
    UNLOCK();
    if ((this->bIsValid == (atomic<bool>)0x0) &&
       (dVar20 = (double)(**(code **)(this->_padding_ + 0x98))(this),
       dVar20 < (double)aVar9 - this->ConnectionLastActive)) {
      (**(code **)(this->_padding_ + 0x30))(this);
      if (GLiveLinkMessageBusSourceReconnectAfterTimeout == 0) {
        local_e8 = (this->SourceGuid).A;
        uStack_e4 = (this->SourceGuid).B;
        uStack_e0 = (this->SourceGuid).C;
        uStack_dc = (this->SourceGuid).D;
        (**(code **)((longlong)*this->Client + 0x20))(this->Client,&local_e8);
      }
      else {
        Initialize(this);
      }
    }
    return;
  }
  StartDiscovering(this);
  pFVar12 = ::FName::FName(&local_res18,"LiveLink");
  FVar3 = *pFVar12;
  pFVar13 = FModuleManager::Get();
  pIVar14 = FModuleManager::LoadModuleChecked(pFVar13,FVar3);
  lVar15 = (**(code **)((longlong)*pIVar14 + 0x50))(pIVar14);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar15 + 0x68);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(lpCriticalSection);
    iVar1 = *(int *)(lVar15 + 0x38);
    pTVar19 = *(TSharedPtr<FProviderPollResult,1> **)(lVar15 + 0x30);
    local_128.Data = (FScriptContainerElement *)0x0;
    local_120 = iVar1;
    if (iVar1 == 0) {
      local_11c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,0,&local_128,iVar1,&local_11c);
      ConstructItems<TSharedPtr<FProviderPollResult,1>,TSharedPtr<FProviderPollResult,1>,int>
                (local_128.Data,pTVar19,iVar1);
    }
    LeaveCriticalSection(lpCriticalSection);
    iVar1 = local_120;
    pTVar19 = (TSharedPtr<FProviderPollResult,1> *)(local_128.Data + (longlong)local_120 * 0x10);
    FVar18.Data = local_128.Data;
    while( true ) {
      if (local_120 != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FProviderPollResult,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if ((TSharedPtr<FProviderPollResult,1> *)FVar18.Data == pTVar19) goto LAB_14d0867df;
      if ((((TSharedPtr<FProviderPollResult,1> *)FVar18.Data)->Object == (FProviderPollResult *)0x0)
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_118 = (this->SourceGuid).A;
      uStack_114 = (this->SourceGuid).B;
      uStack_110 = (this->SourceGuid).C;
      uStack_10c = (this->SourceGuid).D;
      pFVar4 = ((TSharedPtr<FProviderPollResult,1> *)FVar18.Data)->Object;
      pFVar16 = (FText *)(**(code **)((longlong)*this->Client + 0x50))
                                   (this->Client,local_108,&local_118);
      pFVar17 = FText::ToString(pFVar16);
      iVar11 = (pFVar4->Name).Data.ArrayNum;
      iVar2 = (pFVar17->Data).ArrayNum;
      if (iVar2 == iVar11) {
        if (iVar2 < 2) {
          bVar10 = true;
        }
        else {
          iVar11 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(pFVar17->Data).AllocatorInstance.Data,
                              (wchar_t *)(pFVar4->Name).Data.AllocatorInstance.Data);
          bVar10 = iVar11 == 0;
        }
      }
      else {
        bVar10 = iVar11 + iVar2 == 1;
      }
      if (local_108[0] != (longlong *)0x0) {
        (**(code **)(*local_108[0] + 0x10))();
      }
      if (bVar10) break;
      FVar18.Data = FVar18.Data + 0x10;
    }
    if ((((TSharedPtr<FProviderPollResult,1> *)FVar18.Data)->Object == (FProviderPollResult *)0x0)
       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = ((TSharedPtr<FProviderPollResult,1> *)FVar18.Data)->Object;
    uVar6 = (pFVar4->Address).UniqueId.B;
    uVar7 = (pFVar4->Address).UniqueId.C;
    uVar8 = (pFVar4->Address).UniqueId.D;
    (this->ConnectionAddress).UniqueId.A = (pFVar4->Address).UniqueId.A;
    (this->ConnectionAddress).UniqueId.B = uVar6;
    (this->ConnectionAddress).UniqueId.C = uVar7;
    (this->ConnectionAddress).UniqueId.D = uVar8;
    if ((((TSharedPtr<FProviderPollResult,1> *)FVar18.Data)->Object == (FProviderPollResult *)0x0)
       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar16 = FText::FromString(&local_f8,
                                &((TSharedPtr<FProviderPollResult,1> *)FVar18.Data)->Object->
                                 MachineName);
    FText::operator=(&this->SourceMachineName,pFVar16);
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
    }
    if ((((TSharedPtr<FProviderPollResult,1> *)FVar18.Data)->Object == (FProviderPollResult *)0x0)
       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this->MachineTimeOffset =
         ((TSharedPtr<FProviderPollResult,1> *)FVar18.Data)->Object->MachineTimeOffset;
    if (this->bDiscovering != false) {
      pFVar12 = ::FName::FName(&local_res20,"LiveLink");
      FVar3 = *pFVar12;
      pFVar13 = FModuleManager::Get();
      pIVar14 = FModuleManager::LoadModuleChecked(pFVar13,FVar3);
      lVar15 = (**(code **)((longlong)*pIVar14 + 0x50))(pIVar14);
      LOCK();
      *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + -1;
      UNLOCK();
    }
    (**(code **)(this->_padding_ + 0xa0))(this);
    lpCriticalSection_00 = &this->ConnectionLastActiveSection;
    if (lpCriticalSection_00 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      QueryPerformanceCounter(&local_res10);
      this->ConnectionLastActive =
           (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
LAB_14d0867df:
      DestructItems<TSharedPtr<FProviderPollResult,1>,int>
                ((TSharedPtr<FProviderPollResult,1> *)local_128.Data,local_120);
      if ((TSharedPtr<FProviderPollResult,1> *)local_128.Data !=
          (TSharedPtr<FProviderPollResult,1> *)0x0) {
        FMemory::Free(local_128.Data);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ValidSourceStatus @ 14d088c80

FText * __cdecl FLiveLinkMessageBusSource::ValidSourceStatus(FText *__return_storage_ptr__)

{
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"LiveLinkMessageBusSource",L"ActiveStatus",L"Active");
  return __return_storage_ptr__;
}

