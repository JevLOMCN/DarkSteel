// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 40

// FLiveLinkProvider @ 14cfe96c0

/* WARNING: Enum "Type": Some values do not have unique names */

FLiveLinkProvider * __thiscall
FLiveLinkProvider::FLiveLinkProvider(FLiveLinkProvider *this,FString *param_1,bool param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName FVar3;
  wchar_t *pwVar4;
  FName *pFVar5;
  FModuleManager *this_00;
  IModuleInterface *pIVar6;
  undefined8 *puVar7;
  FTaskGraphInterface *pFVar8;
  FName local_res8;
  FName local_res20;
  FDestructionSentinel local_98;
  undefined1 local_80 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  ForAnyElementType FStack_60;
  int local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  bool local_40;
  FName local_3c;
  Type local_34;
  
  this->_padding_ = (longlong)&___7FLiveLinkProvider__6B_;
  ::FString::FString(&this->ProviderName,param_1);
  pwVar4 = FWindowsPlatformProcess::ComputerName();
  ::FString::FString(&this->MachineName,pwVar4);
  (this->MessageEndpoint).Object = (FMessageEndpoint *)0x0;
  (this->MessageEndpoint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->ConnectedAddresses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConnectedAddresses).ArrayNum = 0;
  (this->ConnectedAddresses).ArrayMax = 0;
  (this->StaticDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticDatas).ArrayNum = 0;
  (this->StaticDatas).ArrayMax = 0;
  (this->FrameDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameDatas).ArrayNum = 0;
  (this->FrameDatas).ArrayMax = 0;
  *(undefined8 *)&this->Subjects = 0;
  *(undefined8 *)&(this->Subjects).field_0x8 = 0;
  *(undefined8 *)&(this->Subjects).field_0x20 = 0;
  *(undefined4 *)&(this->Subjects).field_0x28 = 0;
  *(undefined4 *)&(this->Subjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->Subjects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Subjects).field_0x34 = 0;
  *(undefined8 *)&(this->Subjects).field_0x40 = 0;
  *(undefined4 *)&(this->Subjects).field_0x48 = 0;
  *(undefined8 *)&this->OnConnectionStatusChanged = 0;
  *(undefined8 *)&(this->OnConnectionStatusChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnConnectionStatusChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnConnectionStatusChanged).field_0x18 = 2;
  if (param_2) {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_res8,pwVar4);
    pFVar5 = ::FName::FName(&local_res20,"Messaging");
    FVar3 = *pFVar5;
    this_00 = FModuleManager::Get();
    pIVar6 = FModuleManager::LoadModuleChecked(this_00,FVar3);
    puVar7 = (undefined8 *)(**(code **)((longlong)*pIVar6 + 0x68))(pIVar6,&local_98);
    local_80._0_8_ = *puVar7;
    local_80._8_8_ = puVar7[1];
    if ((TReferenceControllerBase<1> *)local_80._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_80._8_8_)->WeakReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_80._8_8_)->WeakReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_98.Accessor);
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_60.Data = (FScriptContainerElement *)0x0;
    local_3c = local_res8;
    local_80[0x10] = false;
    local_58 = 0;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48._0_4_ = 0;
    local_48._4_4_ = 0;
    local_40 = false;
    pFVar8 = FTaskGraphInterface::Get();
    local_34 = (**(code **)((longlong)*pFVar8 + 0x10))(pFVar8,0);
    CreateMessageEndpoint(this,(FMessageEndpointBuilder *)local_80);
    DestructItems<TSharedPtr<IMessageHandler,1>,int>
              ((TSharedPtr<IMessageHandler,1> *)local_50.Data,(int)local_48);
    if ((TSharedPtr<IMessageHandler,1> *)local_50.Data != (TSharedPtr<IMessageHandler,1> *)0x0) {
      FMemory::Free(local_50.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_98);
    if ((local_58 != 0) && (FStack_60.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_60.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_60,0,0,0x10);
      local_58 = 0;
    }
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
    }
    if (FStack_60.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_60.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
    if ((TReferenceControllerBase<1> *)local_80._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = (atomic<int> *)(local_80._8_8_ + 0xc);
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(*(longlong *)local_80._8_8_ + 8))(local_80._8_8_,1);
      }
    }
  }
  return this;
}

// FLiveLinkProvider @ 14cfe9930

/* WARNING: Enum "Type": Some values do not have unique names */

FLiveLinkProvider * __thiscall
FLiveLinkProvider::FLiveLinkProvider
          (FLiveLinkProvider *this,FString *param_1,FMessageEndpointBuilder *param_2)

{
  wchar_t *pwVar1;
  
  this->_padding_ = (longlong)&___7FLiveLinkProvider__6B_;
  ::FString::FString(&this->ProviderName,param_1);
  pwVar1 = FWindowsPlatformProcess::ComputerName();
  ::FString::FString(&this->MachineName,pwVar1);
  (this->MessageEndpoint).Object = (FMessageEndpoint *)0x0;
  (this->MessageEndpoint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->ConnectedAddresses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConnectedAddresses).ArrayNum = 0;
  (this->ConnectedAddresses).ArrayMax = 0;
  (this->StaticDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticDatas).ArrayNum = 0;
  (this->StaticDatas).ArrayMax = 0;
  (this->FrameDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameDatas).ArrayNum = 0;
  (this->FrameDatas).ArrayMax = 0;
  *(undefined8 *)&this->Subjects = 0;
  *(undefined8 *)&(this->Subjects).field_0x8 = 0;
  *(undefined8 *)&(this->Subjects).field_0x20 = 0;
  *(undefined4 *)&(this->Subjects).field_0x28 = 0;
  *(undefined4 *)&(this->Subjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->Subjects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Subjects).field_0x34 = 0;
  *(undefined8 *)&(this->Subjects).field_0x40 = 0;
  *(undefined4 *)&(this->Subjects).field_0x48 = 0;
  *(undefined8 *)&this->OnConnectionStatusChanged = 0;
  *(undefined8 *)&(this->OnConnectionStatusChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnConnectionStatusChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnConnectionStatusChanged).field_0x18 = 2;
  CreateMessageEndpoint(this,param_2);
  return this;
}

// FLiveLinkProvider @ 14cfe9a30

/* WARNING: Enum "Type": Some values do not have unique names */

FLiveLinkProvider * __thiscall
FLiveLinkProvider::FLiveLinkProvider(FLiveLinkProvider *this,FString *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FName FVar3;
  wchar_t *pwVar4;
  FName *pFVar5;
  FModuleManager *this_00;
  IModuleInterface *pIVar6;
  undefined8 *puVar7;
  FTaskGraphInterface *pFVar8;
  FName local_res8;
  FName local_res10;
  FDestructionSentinel local_88;
  undefined1 local_70 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  int local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  bool local_30;
  FName local_2c;
  Type local_24;
  
  this->_padding_ = (longlong)&___7FLiveLinkProvider__6B_;
  ::FString::FString(&this->ProviderName,param_1);
  pwVar4 = FWindowsPlatformProcess::ComputerName();
  ::FString::FString(&this->MachineName,pwVar4);
  (this->MessageEndpoint).Object = (FMessageEndpoint *)0x0;
  (this->MessageEndpoint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->ConnectedAddresses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConnectedAddresses).ArrayNum = 0;
  (this->ConnectedAddresses).ArrayMax = 0;
  (this->StaticDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticDatas).ArrayNum = 0;
  (this->StaticDatas).ArrayMax = 0;
  (this->FrameDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameDatas).ArrayNum = 0;
  (this->FrameDatas).ArrayMax = 0;
  *(undefined8 *)&this->Subjects = 0;
  *(undefined8 *)&(this->Subjects).field_0x8 = 0;
  *(undefined8 *)&(this->Subjects).field_0x20 = 0;
  *(undefined4 *)&(this->Subjects).field_0x28 = 0;
  *(undefined4 *)&(this->Subjects).field_0x2c = 0x80;
  *(undefined4 *)&(this->Subjects).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Subjects).field_0x34 = 0;
  *(undefined8 *)&(this->Subjects).field_0x40 = 0;
  *(undefined4 *)&(this->Subjects).field_0x48 = 0;
  *(undefined8 *)&this->OnConnectionStatusChanged = 0;
  *(undefined8 *)&(this->OnConnectionStatusChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnConnectionStatusChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnConnectionStatusChanged).field_0x18 = 2;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar4);
  pFVar5 = ::FName::FName(&local_res10,"Messaging");
  FVar3 = *pFVar5;
  this_00 = FModuleManager::Get();
  pIVar6 = FModuleManager::LoadModuleChecked(this_00,FVar3);
  puVar7 = (undefined8 *)(**(code **)((longlong)*pIVar6 + 0x68))(pIVar6,&local_88);
  local_70._0_8_ = *puVar7;
  local_70._8_8_ = puVar7[1];
  if ((TReferenceControllerBase<1> *)local_70._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_70._8_8_)->WeakReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_70._8_8_)->WeakReferenceCount + 1)
    ;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_88.Accessor);
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  local_2c = local_res8;
  local_70[0x10] = false;
  local_48 = 0;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38._0_4_ = 0;
  local_38._4_4_ = 0;
  local_30 = false;
  pFVar8 = FTaskGraphInterface::Get();
  local_24 = (**(code **)((longlong)*pFVar8 + 0x10))(pFVar8,0);
  CreateMessageEndpoint(this,(FMessageEndpointBuilder *)local_70);
  DestructItems<TSharedPtr<IMessageHandler,1>,int>
            ((TSharedPtr<IMessageHandler,1> *)local_40.Data,(int)local_38);
  if ((TSharedPtr<IMessageHandler,1> *)local_40.Data != (TSharedPtr<IMessageHandler,1> *)0x0) {
    FMemory::Free(local_40.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_88);
  if ((local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  if ((TReferenceControllerBase<1> *)local_70._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = (atomic<int> *)(local_70._8_8_ + 0xc);
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(*(longlong *)local_70._8_8_ + 8))(local_70._8_8_,1);
    }
  }
  return this;
}

// ~FLiveLinkProvider @ 14cfe9f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveLinkProvider::~FLiveLinkProvider(FLiveLinkProvider *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  TSharedPtr<FMessageEndpoint,1> *pTVar3;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_padding_ = (longlong)&___7FLiveLinkProvider__6B_;
  pTVar3 = &this->MessageEndpoint;
  if (pTVar3->Object != (FMessageEndpoint *)0x0) {
    pTVar3->Object->Enabled = false;
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TSharedPtr<FMessageEndpoint,1> *)&local_18) {
      pTVar3->Object = (FMessageEndpoint *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MessageEndpoint).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnConnectionStatusChanged).field_0x8,
             *(int *)&(this->OnConnectionStatusChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnConnectionStatusChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnConnectionStatusChanged);
  *(undefined4 *)&(this->Subjects).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Subjects).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FTrackedSubject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FTrackedSubject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FTrackedSubject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Subjects);
  DestructItems<FTrackedFrameData,int>
            ((FTrackedFrameData *)(this->FrameDatas).AllocatorInstance.Data,
             (this->FrameDatas).ArrayNum);
  pFVar2 = (this->FrameDatas).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FTrackedStaticData,int>
            ((FTrackedStaticData *)(this->StaticDatas).AllocatorInstance.Data,
             (this->StaticDatas).ArrayNum);
  pFVar2 = (this->StaticDatas).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ConnectedAddresses).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->MachineName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ProviderName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7ILiveLinkProvider__6B_;
  return;
}

// operator() @ 14cfea370

bool __thiscall
`FLiveLinkProvider::ValidateConnections'::__l2::<lambda_1>::operator()
          (void *this,FTrackedAddress *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  
  if (**(double **)((longlong)this + 8) < param_1->LastHeartbeatTime ||
      **(double **)((longlong)this + 8) == param_1->LastHeartbeatTime) {
    return false;
  }
  pFVar2 = *(ForAnyElementType **)((longlong)this + 0x10);
  if (((FTrackedAddress *)pFVar2->Data <= param_1) &&
     (param_1 < (FTrackedAddress *)
                (&((FTrackedAddress *)pFVar2->Data)->Address +
                *(int *)((longlong)&pFVar2[1].Data + 4)))) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  iVar8 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar8 + 1;
  uVar5 = *(undefined8 *)&(param_1->Address).UniqueId.C;
  pFVar3 = pFVar2->Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x10) = *(undefined8 *)&(param_1->Address).UniqueId;
  *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x10 + 8) = uVar5;
  return true;
}

// ClearSubject @ 14cfea960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveLinkProvider::ClearSubject(FLiveLinkProvider *this,FName *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (**(code **)(this->_padding_ + 0x10))(this,*param_1);
                    /* WARNING: Could not recover jumptable at 0x00014cfea9a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ClearTrackedSubject @ 14cfea9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveLinkProvider::ClearTrackedSubject(FLiveLinkProvider *this,FName *param_1)

{
  TArray<FTrackedFrameData,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  FName FVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FName *pFVar8;
  FName local_res8;
  
  FVar2 = *param_1;
  local_res8 = FVar2;
  if (*(int *)&(this->Subjects).field_0x8 != *(int *)&(this->Subjects).field_0x34) {
    uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    TSet<TTuple<FName,FTrackedSubject>,TDefaultMapHashableKeyFuncs<FName,FTrackedSubject,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FTrackedSubject>,TDefaultMapHashableKeyFuncs<FName,FTrackedSubject,0>,FDefaultSetAllocator>
                         *)&this->Subjects,FVar2.Number + uVar6,&local_res8);
  }
  this_00 = &this->FrameDatas;
  pFVar3 = (FName *)(this_00->AllocatorInstance).Data;
  iVar1 = (this->FrameDatas).ArrayNum;
  if (pFVar3 != pFVar3 + (longlong)iVar1 * 0x10) {
    pFVar8 = pFVar3;
    do {
      if (*pFVar8 == *param_1) {
        uVar6 = (uint)((longlong)pFVar8 - (longlong)pFVar3 >> 7);
        if (uVar6 != 0xffffffff) {
          uVar7 = 0;
          if ((int)uVar6 < iVar1) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TArray<FTrackedFrameData,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,uVar6);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,8,&this_00->AllocatorInstance,(this->FrameDatas).ArrayNum,
                     &(this->FrameDatas).ArrayMax);
        }
        break;
      }
      pFVar8 = pFVar8 + 0x10;
    } while (pFVar8 != pFVar3 + (longlong)iVar1 * 0x10);
  }
  pFVar3 = (FName *)(this->StaticDatas).AllocatorInstance.Data;
  iVar1 = (this->StaticDatas).ArrayNum;
  if (pFVar3 != pFVar3 + (longlong)iVar1 * 0x11) {
    pFVar8 = pFVar3;
    do {
      if (*pFVar8 == *param_1) {
        uVar6 = (uint)(((longlong)pFVar8 - (longlong)pFVar3) / 0x88);
        if (uVar6 == 0xffffffff) {
          return;
        }
        uVar7 = 0;
        if ((int)uVar6 < iVar1) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        TArray<FTrackedStaticData,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this->StaticDatas,uVar6);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x88,8,&(this->StaticDatas).AllocatorInstance,(this->StaticDatas).ArrayNum,
                   &(this->StaticDatas).ArrayMax);
        return;
      }
      pFVar8 = pFVar8 + 0x11;
    } while (pFVar8 != pFVar3 + (longlong)iVar1 * 0x11);
  }
  return;
}

// CloseConnection @ 14cfead50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FLiveLinkProvider::CloseConnection(FLiveLinkProvider *this,FMessageAddress *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ForAnyElementType FVar7;
  FMessageAddress *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_108 [32];
  undefined1 local_d0 [8];
  TArray<FTrackedAddress,TSizedDefaultAllocator<32>_> *local_c8;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_c0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  lpCriticalSection = &this->CriticalSection;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)this;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = (this->ConnectedAddresses).AllocatorInstance.Data;
  local_c8 = &this->ConnectedAddresses;
  uVar3._0_4_ = (param_1->UniqueId).A;
  uVar3._4_4_ = (param_1->UniqueId).B;
  uVar4._0_4_ = (param_1->UniqueId).C;
  uVar4._4_4_ = (param_1->UniqueId).D;
  pFVar9 = pFVar1 + (longlong)(this->ConnectedAddresses).ArrayNum * 0x20;
  pFVar11 = pFVar1;
  local_a8 = uVar3;
  uStack_a0 = uVar4;
  while (pFVar11 != pFVar9) {
    if (((uVar3._4_4_ == *(int *)(pFVar11 + 4) && (undefined4)uVar4 == *(int *)(pFVar11 + 8)) &&
        uVar4._4_4_ == *(int *)(pFVar11 + 0xc)) && (undefined4)uVar3 == *(int *)pFVar11) {
      pFVar8 = (FMessageAddress *)local_d0;
      pFVar10 = pFVar9;
      pFVar9 = pFVar11;
      while( true ) {
        TSet<FMessageAddress,DefaultKeyFuncs<FMessageAddress,0>,FDefaultSetAllocator>::
        Emplace<FMessageAddress_const_&>
                  ((TSet<FMessageAddress,DefaultKeyFuncs<FMessageAddress,0>,FDefaultSetAllocator> *)
                   local_88,pFVar8,(bool *)pFVar9);
        pFVar9 = pFVar10 + -0x20;
        if (pFVar11 == pFVar9) goto LAB_14cfeae89;
        if (((uVar3._4_4_ != *(int *)(pFVar10 + -0x1c) ||
             (undefined4)uVar4 != *(int *)(pFVar10 + -0x18)) ||
            uVar4._4_4_ != *(int *)(pFVar10 + -0x14)) || (undefined4)uVar3 != *(int *)pFVar9) break;
        pFVar8 = (FMessageAddress *)(local_d0 + 4);
        pFVar10 = pFVar9;
      }
      uVar5 = *(undefined8 *)(pFVar10 + -0x18);
      *(undefined8 *)pFVar11 = *(undefined8 *)pFVar9;
      *(undefined8 *)(pFVar11 + 8) = uVar5;
      uVar5 = *(undefined8 *)(pFVar10 + -8);
      *(undefined8 *)(pFVar11 + 0x10) = *(undefined8 *)(pFVar10 + -0x10);
      *(undefined8 *)(pFVar11 + 0x18) = uVar5;
      pFVar11 = pFVar11 + 0x20;
    }
    else {
      pFVar11 = pFVar11 + 0x20;
    }
  }
LAB_14cfeae89:
  TArray<FTrackedAddress,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (local_c8,(int)((longlong)pFVar11 - (longlong)pFVar1 >> 5),Default);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FVar7.Data = local_c0.AllocatorInstance.Data;
  if (0 < local_88._8_4_ - local_54) {
    pcVar2 = *(code **)(*(longlong *)local_c0.AllocatorInstance.Data + 0x40);
    TSet<FMessageAddress,DefaultKeyFuncs<FMessageAddress,0>,FDefaultSetAllocator>::Array
              ((TSet<FMessageAddress,DefaultKeyFuncs<FMessageAddress,0>,FDefaultSetAllocator> *)
               local_88,&local_c0);
    (*pcVar2)(FVar7.Data);
    if ((FLiveLinkProvider *)local_c0.AllocatorInstance.Data != (FLiveLinkProvider *)0x0) {
      FMemory::Free(local_c0.AllocatorInstance.Data);
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               (FVar7.Data + 0xe0));
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  iVar6 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar6 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return;
}

// CreateMessageEndpoint @ 14cfeb1a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkProvider::CreateMessageEndpoint(FLiveLinkProvider *this,FMessageEndpointBuilder *param_1)

{
  TSharedPtr<FMessageEndpoint,1> *pTVar1;
  TSharedPtr<IMessageHandler,1> *pTVar2;
  FMessageEndpoint *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  IMessageBus *pIVar5;
  code *pcVar6;
  atomic<int> aVar7;
  bool bVar8;
  int iVar9;
  atomic<int> aVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  UPackage *pUVar13;
  FTopLevelAssetPath *pFVar14;
  TSharedRef<FMessageEndpoint,1> *pTVar15;
  FScriptContainerElement *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  undefined4 local_res8 [2];
  TRawPtrProxy<TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider>_> local_res10;
  TRawPtrProxy<TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider>_> local_res18;
  TRawPtrProxy<TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider>_> local_res20;
  undefined1 local_108 [8];
  FDelegateAllocation local_100;
  TSharedPtr<IMessageHandler,1> local_f0;
  TSharedPtr<IMessageHandler,1> local_e0;
  TSharedPtr<IMessageHandler,1> local_d0;
  TSharedPtr<FMessageEndpoint,1> local_c0;
  FMessageEndpoint *local_b0;
  TReferenceControllerBase<1> *local_a8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  TSharedRef<FMessageEndpoint,1> local_58;
  FTopLevelAssetPath local_48;
  
  param_1->RecipientThread = AnyNormalThreadNormalTask;
  local_res10.Object = ::operator_new(0x18);
  if (local_res10.Object == (TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider> *)0x0) {
    local_res10.Object = (TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider> *)0x0;
  }
  else {
    (local_res10.Object)->Handler = this;
    (local_res10.Object)->_padding_ =
         (longlong)&___7__TRawMessageHandler_UFLiveLinkPingMessage__UFLiveLinkProvider____6B_;
    (local_res10.Object)->Func = (pmf_66f7b120)HandlePingMessage;
    if ((this == (FLiveLinkProvider *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InHandler != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                           ,0x58,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FLiveLinkPingMessage,FLiveLinkProvider>_>
            (&local_f0,&local_res10);
  pTVar2 = (TSharedPtr<IMessageHandler,1> *)(param_1->Handlers).AllocatorInstance.Data;
  if (((pTVar2 <= &local_f0) && (&local_f0 < pTVar2 + (param_1->Handlers).ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (param_1->Handlers).ArrayNum;
  if (iVar9 == (param_1->Handlers).ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(param_1->Handlers).AllocatorInstance,&(param_1->Handlers).ArrayMax);
  }
  (param_1->Handlers).ArrayNum = iVar9 + 1;
  pFVar16 = (param_1->Handlers).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
  *(IMessageHandler **)pFVar16 = local_f0.Object;
  *(TReferenceControllerBase<1> **)(pFVar16 + 8) = local_f0.SharedReferenceCount.ReferenceController
  ;
  local_f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_f0.Object = (IMessageHandler *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_res18.Object = ::operator_new(0x18);
  if (local_res18.Object == (TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider> *)0x0) {
    local_res18.Object = (TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider> *)0x0;
  }
  else {
    (local_res18.Object)->Handler = this;
    (local_res18.Object)->_padding_ =
         (longlong)&___7__TRawMessageHandler_UFLiveLinkConnectMessage__UFLiveLinkProvider____6B_;
    (local_res18.Object)->Func = (pmf_65d9a5a8)HandleConnectMessage;
    if ((this == (FLiveLinkProvider *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InHandler != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                           ,0x58,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FLiveLinkConnectMessage,FLiveLinkProvider>_>
            (&local_e0,&local_res18);
  pTVar2 = (TSharedPtr<IMessageHandler,1> *)(param_1->Handlers).AllocatorInstance.Data;
  if (((pTVar2 <= &local_e0) && (&local_e0 < pTVar2 + (param_1->Handlers).ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (param_1->Handlers).ArrayNum;
  if (iVar9 == (param_1->Handlers).ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(param_1->Handlers).AllocatorInstance,&(param_1->Handlers).ArrayMax);
  }
  (param_1->Handlers).ArrayNum = iVar9 + 1;
  pFVar16 = (param_1->Handlers).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
  *(IMessageHandler **)pFVar16 = local_e0.Object;
  *(TReferenceControllerBase<1> **)(pFVar16 + 8) = local_e0.SharedReferenceCount.ReferenceController
  ;
  local_e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_e0.Object = (IMessageHandler *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_res20.Object = ::operator_new(0x18);
  if (local_res20.Object == (TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider> *)0x0)
  {
    local_res20.Object = (TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider> *)0x0;
  }
  else {
    (local_res20.Object)->Handler = this;
    (local_res20.Object)->_padding_ =
         (longlong)&___7__TRawMessageHandler_UFLiveLinkHeartbeatMessage__UFLiveLinkProvider____6B_;
    (local_res20.Object)->Func = (pmf_686abfd6)HandleHeartbeat;
    if ((this == (FLiveLinkProvider *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InHandler != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MessagingCommon\\Public\\MessageHandlers.h"
                           ,0x58,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FLiveLinkHeartbeatMessage,FLiveLinkProvider>_>
            (&local_d0,&local_res20);
  pTVar2 = (TSharedPtr<IMessageHandler,1> *)(param_1->Handlers).AllocatorInstance.Data;
  if (((pTVar2 <= &local_d0) && (&local_d0 < pTVar2 + (param_1->Handlers).ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (param_1->Handlers).ArrayNum;
  if (iVar9 == (param_1->Handlers).ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(param_1->Handlers).AllocatorInstance,&(param_1->Handlers).ArrayMax);
  }
  (param_1->Handlers).ArrayNum = iVar9 + 1;
  pFVar16 = (param_1->Handlers).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
  *(IMessageHandler **)pFVar16 = local_d0.Object;
  *(TReferenceControllerBase<1> **)(pFVar16 + 8) = local_d0.SharedReferenceCount.ReferenceController
  ;
  local_d0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_d0.Object = (IMessageHandler *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_108 = (undefined1  [8])0x0;
  local_100.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_100.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
             (FWriteAccessScope *)&local_88);
  local_70 = &local_100;
  puVar11 = UE::Core::Private::DelegateAllocate(0x28,&local_100);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBUFMessageBusNotification___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseRawMethodDelegateInstance__0A_UFLiveLinkProvider____A6AXAEBUFMessageBusNotification___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar11[4] = _vcall__56__flat______;
    puVar11[3] = this;
    if ((this == (FLiveLinkProvider *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->OnNotification,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_108);
  FMessageEndpointBuilder::Build(param_1,&local_c0);
  pTVar1 = &this->MessageEndpoint;
  if (pTVar1 != &local_c0) {
    pTVar1->Object = local_c0.Object;
    local_c0.Object = (FMessageEndpoint *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MessageEndpoint).SharedReferenceCount,&local_c0.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_108,
             (FWriteAccessScope *)&local_a0);
  if ((local_100.DelegateSize != 0) &&
     (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_100.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_100,0,0,0x10);
    local_100.DelegateSize = 0;
  }
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  if (local_100.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_100.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_108);
  pFVar3 = pTVar1->Object;
  if (pFVar3 != (FMessageEndpoint *)0x0) {
    local_res8[0] = 0x20001;
    if (Z_Registration_Info_UScriptStruct_FLiveLinkPingMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar13 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
      Z_Registration_Info_UScriptStruct_FLiveLinkPingMessage.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkPingMessage,(UObject *)pUVar13,
                           L"LiveLinkPingMessage");
    }
    pFVar14 = UStruct::GetStructPathName
                        ((UStruct *)
                         Z_Registration_Info_UScriptStruct_FLiveLinkPingMessage.OuterSingleton,
                         &local_48);
    pTVar17 = (TReferenceControllerBase<1> *)0x0;
    if ((pFVar3->Enabled != false) &&
       (pTVar4 = (pFVar3->BusPtr).WeakReferenceCount.ReferenceController, pTVar17 = pTVar4,
       pTVar4 != (TReferenceControllerBase<1> *)0x0)) {
      aVar7 = pTVar4->SharedReferenceCount;
      do {
        pTVar17 = (TReferenceControllerBase<1> *)0x0;
        if (aVar7 == (atomic<int>)0x0) goto LAB_14cfeb721;
        LOCK();
        aVar10 = pTVar4->SharedReferenceCount;
        bVar8 = aVar7 == aVar10;
        if (bVar8) {
          pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
          aVar10 = aVar7;
        }
        UNLOCK();
        aVar7 = aVar10;
      } while (!bVar8);
      pIVar5 = (pFVar3->BusPtr).Object;
      pTVar17 = pTVar4;
      if (pIVar5 != (IMessageBus *)0x0) {
        pcVar6 = *(code **)((longlong)*pIVar5 + 0x40);
        pTVar15 = TSharedFromThis<FMessageEndpoint,1>::AsShared
                            ((TSharedFromThis<FMessageEndpoint,1> *)&pFVar3->_padding_,&local_58);
        local_b0 = pTVar15->Object;
        local_a8 = (pTVar15->SharedReferenceCount).ReferenceController;
        if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_a8->SharedReferenceCount = (atomic<int>)((int)local_a8->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar6)(pIVar5,local_68,&local_b0,pFVar14,local_res8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
      }
    }
LAB_14cfeb721:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
  return;
}

// GetAnnotations @ 14cfec0c0

/* WARNING: Enum "Type": Some values do not have unique names */

TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> * __thiscall
FLiveLinkProvider::GetAnnotations
          (FLiveLinkProvider *this,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *__return_storage_ptr__)

{
  UPackage *pUVar1;
  TPairInitializer<FName_const_&,FString_const_&> local_38;
  TPairInitializer<FName_const_&,FString_const_&> local_28;
  FString local_18;
  
  if (Z_Registration_Info_UEnum_ELiveLinkTopologyMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UEnum_ELiveLinkTopologyMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLinkMessageBusFramework_ELiveLinkTopologyMode,
                       (UObject *)pUVar1,L"ELiveLinkTopologyMode");
  }
  UEnum::GetNameStringByValue
            (Z_Registration_Info_UEnum_ELiveLinkTopologyMode.OuterSingleton,&local_18,2);
  local_38.Key = &FLiveLinkMessageAnnotation::TopologyModeAnnotation;
  local_38.Value = &local_18;
  local_28.Key = (FName *)&local_38;
  local_28.Value = (FString *)&local_28;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            (__return_storage_ptr__,
             (initializer_list<TPairInitializer<FName_const_&,FString_const_&>_> *)&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetConnectedAddresses @ 14cfec170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkProvider::GetConnectedAddresses
          (FLiveLinkProvider *this,TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  ValidateConnections(this);
  uVar2 = (this->ConnectedAddresses).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar2,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  iVar3 = (this->ConnectedAddresses).ArrayNum;
  pFVar10 = (this->ConnectedAddresses).AllocatorInstance.Data;
  pFVar11 = pFVar10 + (longlong)iVar3 * 0x20;
  while( true ) {
    if ((this->ConnectedAddresses).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FTrackedAddress,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar11) break;
    pFVar4 = (param_1->AllocatorInstance).Data;
    if ((pFVar4 <= pFVar10) && (pFVar10 < pFVar4 + (longlong)*piVar1 * 0x10)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar9 = param_1->ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&param_1->AllocatorInstance,piVar1);
      param_1->ArrayNum = iVar9;
    }
    param_1->ArrayNum = iVar9 + 1;
    uVar6 = *(undefined8 *)pFVar10;
    uVar7 = *(undefined8 *)(pFVar10 + 8);
    pFVar10 = pFVar10 + 0x20;
    pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
    *(undefined8 *)pFVar4 = uVar6;
    *(undefined8 *)(pFVar4 + 8) = uVar7;
  }
  return;
}

// GetEndpointAddress @ 14cfec350

/* WARNING: Enum "Type": Some values do not have unique names */

FMessageAddress * __thiscall
FLiveLinkProvider::GetEndpointAddress
          (FLiveLinkProvider *this,FMessageAddress *__return_storage_ptr__)

{
  FMessageEndpoint *pFVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  FMessageAddress *pFVar7;
  
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FMessageAddress *)(*pcVar2)();
      return pFVar7;
    }
  }
  pFVar1 = (this->MessageEndpoint).Object;
  uVar3 = (pFVar1->Address).UniqueId.B;
  uVar4 = (pFVar1->Address).UniqueId.C;
  uVar5 = (pFVar1->Address).UniqueId.D;
  (__return_storage_ptr__->UniqueId).A = (pFVar1->Address).UniqueId.A;
  (__return_storage_ptr__->UniqueId).B = uVar3;
  (__return_storage_ptr__->UniqueId).C = uVar4;
  (__return_storage_ptr__->UniqueId).D = uVar5;
  return __return_storage_ptr__;
}

// GetFilteredAddresses @ 14cfec3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkProvider::GetFilteredAddresses
          (FLiveLinkProvider *this,FName param_1,
          TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  ValidateConnections(this);
  uVar2 = (this->ConnectedAddresses).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  piVar1 = &param_2->ArrayMax;
  if (*piVar1 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar2,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  iVar3 = (this->ConnectedAddresses).ArrayNum;
  pFVar9 = (this->ConnectedAddresses).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar3 * 0x20;
  while( true ) {
    if ((this->ConnectedAddresses).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FTrackedAddress_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar10) break;
    local_38 = *(undefined4 *)pFVar9;
    uStack_34 = *(undefined4 *)(pFVar9 + 4);
    uStack_30 = *(undefined4 *)(pFVar9 + 8);
    uStack_2c = *(undefined4 *)(pFVar9 + 0xc);
    cVar6 = (**(code **)(this->_padding_ + 0x50))(this,param_1,&local_38);
    if (cVar6 != '\0') {
      local_48 = *(undefined8 *)pFVar9;
      uStack_40 = *(undefined8 *)(pFVar9 + 8);
      pFVar4 = (param_2->AllocatorInstance).Data;
      if ((pFVar4 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 < pFVar4 + (longlong)*piVar1 * 0x10)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = param_2->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar8 + 1;
      pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar4 = local_48;
      *(undefined8 *)(pFVar4 + 8) = uStack_40;
    }
    pFVar9 = pFVar9 + 0x20;
  }
  return;
}

// GetLastSubjectFrameData @ 14cfec560

/* WARNING: Enum "Type": Some values do not have unique names */

FTrackedFrameData * __thiscall
FLiveLinkProvider::GetLastSubjectFrameData(FLiveLinkProvider *this,FName *param_1)

{
  FTrackedFrameData *pFVar1;
  FTrackedFrameData *pFVar2;
  
  pFVar1 = (FTrackedFrameData *)(this->FrameDatas).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->FrameDatas).ArrayNum;
  if (pFVar1 != pFVar2) {
    do {
      if (pFVar1->SubjectName == *param_1) {
        return pFVar1;
      }
      pFVar1 = pFVar1 + 1;
    } while (pFVar1 != pFVar2);
  }
  return (FTrackedFrameData *)0x0;
}

// GetLastSubjectStaticData @ 14cfec5a0

/* WARNING: Enum "Type": Some values do not have unique names */

FTrackedStaticData * __thiscall
FLiveLinkProvider::GetLastSubjectStaticData(FLiveLinkProvider *this,FName *param_1)

{
  FTrackedStaticData *pFVar1;
  FTrackedStaticData *pFVar2;
  
  pFVar1 = (FTrackedStaticData *)(this->StaticDatas).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->StaticDatas).ArrayNum;
  if (pFVar1 != pFVar2) {
    do {
      if (pFVar1->SubjectName == *param_1) {
        return pFVar1;
      }
      pFVar1 = pFVar1 + 1;
    } while (pFVar1 != pFVar2);
  }
  return (FTrackedStaticData *)0x0;
}

// GetLastSubjectStaticDataStruct @ 14cfec5e0

/* WARNING: Enum "Type": Some values do not have unique names */

TTuple<UClass_*,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_*> * __thiscall
FLiveLinkProvider::GetLastSubjectStaticDataStruct
          (FLiveLinkProvider *this,
          TTuple<UClass_*,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_*>
          *__return_storage_ptr__,FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  longlong lVar2;
  UObject *pUVar3;
  FName *pFVar4;
  FName *pFVar5;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pFVar5 = (FName *)(this->StaticDatas).AllocatorInstance.Data;
  pFVar4 = pFVar5 + (longlong)(this->StaticDatas).ArrayNum * 0x11;
  do {
    if (pFVar5 == pFVar4) {
LAB_14cfec685:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return __return_storage_ptr__;
    }
    if (*pFVar5 == param_1) {
      bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pFVar5 + 1));
      if (bVar1) {
        lVar2 = (**(code **)((longlong)pFVar5[2] + 0x10))(pFVar5 + 2);
        if (lVar2 != 0) {
          pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar5 + 1));
          *(UObject **)__return_storage_ptr__ = pUVar3;
          *(FName **)&__return_storage_ptr__->field_0x8 = pFVar5 + 2;
        }
      }
      goto LAB_14cfec685;
    }
    pFVar5 = pFVar5 + 0x11;
  } while( true );
}

// GetSupportedLiveLinkVersion @ 14cfeca30

int __cdecl FLiveLinkProvider::GetSupportedLiveLinkVersion(void)

{
  return 2;
}

// GetTrackedSubject @ 14cfeca40

/* WARNING: Enum "Type": Some values do not have unique names */

FTrackedSubject * __thiscall
FLiveLinkProvider::GetTrackedSubject(FLiveLinkProvider *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  FTrackedSubject *pFVar3;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  pFVar3 = TMapBase<FName,FTrackedSubject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedSubject,0>_>
           ::FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,FTrackedSubject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedSubject,0>_>
                       *)&this->Subjects,uVar2 + FVar1.Number,param_1);
  return pFVar3;
}

// HandleConnectMessage @ 14cfecaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkProvider::HandleConnectMessage
          (FLiveLinkProvider *this,FLiveLinkConnectMessage *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  int *piVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  undefined1 *puVar3;
  TMap<FName,FTrackedSubject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedSubject,0>_>
  *pTVar4;
  undefined8 uVar5;
  FMessageEndpoint *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  IMessageBus *pIVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  atomic<int> aVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  FName FVar16;
  FLiveLinkProvider *pFVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  atomic<int> aVar22;
  int *piVar23;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *this_00;
  FScriptContainerElement *pFVar24;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar25;
  ulonglong uVar26;
  UScriptStruct *pUVar27;
  UClass *pUVar28;
  UScriptStruct *this_01;
  UScriptStruct *pUVar29;
  void *pvVar30;
  FScriptContainerElement *pFVar31;
  TSharedRef<FMessageEndpoint,1> *pTVar32;
  ForAnyElementType FVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  FName *pFVar37;
  TReferenceControllerBase<1> *pTVar38;
  longlong lVar39;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar40;
  FScriptContainerElement *pFVar41;
  ulonglong uVar42;
  ForElementType<unsigned_int> FVar43;
  uint uVar44;
  longlong lVar45;
  bool bVar46;
  undefined1 auStackY_4b8 [32];
  undefined1 local_468;
  undefined1 local_467;
  undefined1 local_466 [6];
  FScriptContainerElement *local_460;
  uint local_458;
  FLiveLinkProvider *local_450;
  FScriptContainerElement *local_448;
  undefined8 uStack_440;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  int local_420;
  undefined4 uStack_41c;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_418;
  uint local_408;
  uint uStack_404;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_400;
  undefined4 local_3f8;
  undefined8 uStack_3f4;
  undefined4 uStack_3ec;
  int local_3e8;
  int iStack_3e4;
  int iStack_3e0;
  int iStack_3dc;
  FMessageEndpoint *local_3d8;
  TReferenceControllerBase<1> *local_3d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3a8;
  longlong *local_388;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_380;
  undefined4 local_360;
  int local_35c;
  int local_358;
  int local_354;
  FName local_350;
  LARGE_INTEGER local_348;
  FDateTime local_340;
  FTimespan local_338;
  undefined8 local_330;
  undefined8 local_328;
  int local_320;
  int iStack_31c;
  int iStack_318;
  int iStack_314;
  double local_310;
  undefined1 uStack_308;
  undefined7 uStack_307;
  undefined1 local_300 [12];
  uint uStack_2f4;
  TBitArray<FDefaultBitArrayAllocator> *local_2f0;
  undefined8 uStack_2e8;
  longlong local_2e0;
  undefined8 uStack_2d8;
  undefined1 local_2d0 [12];
  uint uStack_2c4;
  TBitArray<FDefaultBitArrayAllocator> *local_2c0;
  undefined8 uStack_2b8;
  longlong local_2b0;
  undefined8 uStack_2a8;
  FScriptContainerElement *local_2a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_298;
  undefined8 uStack_278;
  FString local_270;
  TSharedPtr<IMessageAttachment,1> local_260;
  undefined8 local_250;
  TReferenceControllerBase<1> *pTStack_248;
  FString local_240;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  local_230;
  TSharedRef<FMessageEndpoint,1> local_1e0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  local_1d0;
  TRangedForIterator local_180;
  TRangedForConstIterator local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_100;
  undefined4 local_c4;
  undefined1 local_b8 [32];
  ForElementType<unsigned_int> local_98;
  int local_90;
  int local_84;
  undefined1 local_80 [8];
  ForAnyElementType local_78;
  uint local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CriticalSection;
  local_450 = this;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  if (param_1->LiveLinkVersion < 2) {
    if (1 < (byte)LogLiveLinkMessageBus._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLinkMessageBus);
    }
  }
  else {
    piVar23 = (int *)(**(code **)((longlong)*param_2->Object + 0x48))();
    pFVar24 = (this->ConnectedAddresses).AllocatorInstance.Data;
    local_3e8 = *piVar23;
    iStack_3e4 = piVar23[1];
    iStack_3e0 = piVar23[2];
    iStack_3dc = piVar23[3];
    pFVar41 = pFVar24 + (longlong)(this->ConnectedAddresses).ArrayNum * 0x20;
    for (; pFVar24 != pFVar41; pFVar24 = pFVar24 + 0x20) {
      if (((iStack_3e4 == *(int *)(pFVar24 + 4) && iStack_3e0 == *(int *)(pFVar24 + 8)) &&
          iStack_3dc == *(int *)(pFVar24 + 0xc)) && local_3e8 == *(int *)pFVar24)
      goto LAB_14cfeda7b;
    }
    this_00 = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
               *)(**(code **)*param_2->Object)();
    FVar16 = FLiveLinkMessageAnnotation::CompressedPayloadSupport;
    local_350 = FLiveLinkMessageAnnotation::CompressedPayloadSupport;
    uVar18 = ::GetTypeHash(FLiveLinkMessageAnnotation::CompressedPayloadSupport.ComparisonIndex.
                           Value);
    iVar19 = TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FName>(this_00,FVar16.Number + uVar18,&local_350);
    local_320 = *piVar23;
    iStack_31c = piVar23[1];
    iStack_318 = piVar23[2];
    iStack_314 = piVar23[3];
    bVar46 = iVar19 != -1;
    QueryPerformanceCounter(&local_348);
    pFVar24 = (this->ConnectedAddresses).AllocatorInstance.Data;
    local_310 = (double)local_348.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                __real_4170000000000000;
    uStack_308 = bVar46;
    if (((pFVar24 <= (FScriptContainerElement *)&local_320) &&
        ((FScriptContainerElement *)&local_320 <
         pFVar24 + (longlong)(this->ConnectedAddresses).ArrayMax * 0x20)) &&
       (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar46)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar19 = (this->ConnectedAddresses).ArrayNum;
    piVar1 = &(this->ConnectedAddresses).ArrayMax;
    if (iVar19 == *piVar1) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(this->ConnectedAddresses).AllocatorInstance,piVar1);
    }
    local_3c8._padding_._4_4_ = 1;
    (this->ConnectedAddresses).ArrayNum = iVar19 + 1;
    puVar3 = &(this->Subjects).field_0x10;
    pTVar4 = &this->Subjects;
    pFVar24 = (this->ConnectedAddresses).AllocatorInstance.Data + (longlong)iVar19 * 0x20;
    local_3c8._padding_._0_4_ = 0;
    local_3c8.UnvisitedBitMask = 0xffffffff;
    *(ulonglong *)pFVar24 = CONCAT44(iStack_31c,local_320);
    *(ulonglong *)(pFVar24 + 8) = CONCAT44(iStack_314,iStack_318);
    local_3c8.CurrentBitIndex = 0;
    local_3c8.BaseBitIndex = 0;
    *(double *)(pFVar24 + 0x10) = local_310;
    *(ulonglong *)(pFVar24 + 0x18) = CONCAT71(uStack_307,uStack_308);
    local_3c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
    if (*(int *)&(this->Subjects).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3c8);
    }
    uStack_440 = CONCAT44(local_3c8._padding_._4_4_,(undefined4)local_3c8._padding_);
    uStack_430 = CONCAT44(local_3c8.CurrentBitIndex,local_3c8.UnvisitedBitMask);
    uStack_428 = CONCAT44(local_3c8._28_4_,local_3c8.BaseBitIndex);
    local_420 = *(int *)&(this->Subjects).field_0x8 - *(int *)&(this->Subjects).field_0x34;
    pTStack_438 = local_3c8.Array;
    uStack_2d8._4_4_ = uStack_41c;
    uStack_2d8._0_4_ = local_420;
    local_2f0 = local_3c8.Array;
    local_448 = (FScriptContainerElement *)pTVar4;
    local_300._0_8_ = pTVar4;
    unique0x10001e4c = uStack_440;
    uStack_2e8 = uStack_430;
    local_2e0 = uStack_428;
    pTVar25 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_120,(TBitArray<FDefaultBitArrayAllocator> *)puVar3,
                         *(int *)&(this->Subjects).field_0x28);
    uStack_440 = pTVar25->_padding_;
    pTStack_438 = pTVar25->Array;
    uStack_430._0_4_ = pTVar25->UnvisitedBitMask;
    uStack_430._4_4_ = pTVar25->CurrentBitIndex;
    uStack_428 = *(longlong *)&pTVar25->BaseBitIndex;
    local_420 = *(int *)&(this->Subjects).field_0x8 - *(int *)&(this->Subjects).field_0x34;
    local_180._44_4_ = uStack_41c;
    local_180.InitialNum = local_420;
    local_448 = (FScriptContainerElement *)pTVar4;
    local_180._padding_ = (longlong)pTVar4;
    local_180._padding_ = uStack_440;
    local_180._padding_ = (longlong)pTStack_438;
    local_180._padding_ = uStack_430;
    local_180._padding_ = uStack_428;
    bVar46 = TSparseArray<TSparseSetElement<TTuple<FName,FTrackedSubject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             ::TRangedForIterator::operator!=((TRangedForIterator *)local_300,&local_180);
    fVar15 = __real_3dcccccd;
    if (bVar46) {
      do {
        lVar45 = (longlong)uStack_2e8._4_4_ * 0xb8;
        lVar39 = *(longlong *)local_300._0_8_;
        SendSubject(this,*(FName *)(lVar45 + lVar39),(FTrackedSubject *)(lVar45 + lVar39 + 8));
        FWindowsPlatformProcess::Sleep(fVar15);
        SendSubjectFrame(this,*(FName *)(lVar45 + lVar39),(FTrackedSubject *)(lVar45 + lVar39 + 8));
        uStack_2e8 = CONCAT44(uStack_2e8._4_4_,(uint)uStack_2e8 & ~uStack_2f4);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_300 + 8));
        bVar46 = TSparseArray<TSparseSetElement<TTuple<FName,FTrackedSubject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_300,&local_180);
      } while (bVar46);
    }
    local_418.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_418.ArrayNum = 0;
    local_418.ArrayMax = 0;
    iVar20 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&local_418.AllocatorInstance,&local_418.ArrayMax);
    iVar19 = piVar23[1];
    iVar10 = piVar23[2];
    iVar11 = piVar23[3];
    local_418.ArrayNum = iVar20 + 1;
    pFVar24 = local_418.AllocatorInstance.Data + (longlong)iVar20 * 0x10;
    *(int *)pFVar24 = *piVar23;
    *(int *)(pFVar24 + 4) = iVar19;
    *(int *)(pFVar24 + 8) = iVar10;
    *(int *)(pFVar24 + 0xc) = iVar11;
    (**(code **)(this->_padding_ + 0x48))(this,local_b8);
    ::FString::FString(&local_240,L"");
    TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
    Emplace<FName_const_&,FString>
              ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                *)local_b8,&FLiveLinkMessageAnnotation::SubjectAnnotation,&local_240);
    if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_270,L"");
    TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
    Emplace<FName_const_&,FString>
              ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                *)local_b8,&FLiveLinkMessageAnnotation::RoleAnnotation,&local_270);
    if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Data.AllocatorInstance.Data);
    }
    uVar14 = _UNK_150631d98;
    uVar13 = ___xmm_00000000ffffffff0000008000000000;
    local_458 = (this->StaticDatas).ArrayNum;
    uVar36 = (ulonglong)(int)local_458;
    local_460 = (this->StaticDatas).AllocatorInstance.Data;
    pFVar24 = local_460 + 0x38;
    local_460 = local_460 + uVar36 * 0x88;
    while( true ) {
      pFVar41 = local_460;
      uVar34 = 0;
      if ((this->StaticDatas).ArrayNum != (int)uVar36) {
        local_468 = 0;
        `TCheckedPointerIterator<FTrackedStaticData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_468);
      }
      if (pFVar24 + -0x38 == pFVar41) break;
      pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar24 + 0x10);
      FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar24 + -0x30));
      uVar18 = ((local_b8._8_4_ - local_84) - *(int *)(pFVar24 + 0x34)) + *(int *)(pFVar24 + 8);
      if ((uint)(local_b8._8_4_ - local_84) < uVar18) {
        if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar18);
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_b8,uVar18);
        if (uVar18 < 4) {
          uVar18 = 1;
        }
        else {
          uVar36 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
          lVar39 = 0x3f;
          if (uVar36 != 0) {
            for (; uVar36 >> lVar39 == 0; lVar39 = lVar39 + -1) {
            }
          }
          local_360 = (undefined4)lVar39;
          uVar18 = 1 << ((byte)lVar39 & 0x1f);
        }
        if ((local_70 == 0) || ((int)local_70 < (int)uVar18)) {
          local_70 = uVar18;
          if ((ForElementType<FSetElementId>)local_78.Data != (ForElementType<FSetElementId>)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,4);
          }
          if (uVar18 != 0) {
            uVar40 = uVar18;
            if (uVar18 < 2) {
              if ((ForElementType<FSetElementId>)local_78.Data != (ForElementType<FSetElementId>)0x0
                 ) {
                uVar40 = 0;
                goto LAB_14cfed026;
              }
            }
            else {
LAB_14cfed026:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_78,0,uVar40,4);
            }
            if (0 < (int)uVar18) {
              uVar42 = (ulonglong)uVar18;
              uVar36 = uVar34;
              do {
                FVar33.Data = (FScriptContainerElement *)local_80;
                if ((ForElementType<FSetElementId>)local_78.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar33.Data = local_78.Data;
                }
                uVar26 = (longlong)(int)uVar18 - 1U & uVar36;
                uVar36 = uVar36 + 1;
                *(undefined4 *)((longlong)FVar33.Data + uVar26 * 4) = 0xffffffff;
                uVar42 = uVar42 - 1;
              } while (uVar42 != 0);
            }
          }
          if (local_70 != 0) {
            pTStack_400 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
            uVar18 = 0;
            local_408 = 0;
            uStack_404 = 1;
            uStack_3f4 = 0;
            if (local_90 != 0) {
              FVar43 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
              if (local_98 != (ForElementType<unsigned_int>)0x0) {
                FVar43 = local_98;
              }
              uVar40 = *(uint *)FVar43;
              uVar36 = uVar34;
              while (uVar40 == 0) {
                uVar18 = (int)uVar36 + 0x20;
                uVar36 = (ulonglong)uVar18;
                iVar19 = (int)uVar34;
                local_408 = iVar19 + 1;
                uVar34 = (ulonglong)local_408;
                uStack_3f4 = (ulonglong)uVar18 << 0x20;
                if ((int)(local_90 + -1 + (local_90 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)local_408) {
                  uStack_3f4 = CONCAT44(uVar18,local_90);
                  goto LAB_14cfed141;
                }
                uVar40 = ((uint *)((longlong)FVar43 + 4))[iVar19];
              }
              uStack_404 = ~(uVar40 - 1) & uVar40;
              uVar36 = (ulonglong)uStack_404 * 2 + 1;
              lVar39 = 0x3f;
              if (uVar36 != 0) {
                for (; uVar36 >> lVar39 == 0; lVar39 = lVar39 + -1) {
                }
              }
              local_35c = (int)lVar39;
              iVar19 = local_35c + -1 + uVar18;
              if (local_90 < iVar19) {
                iVar19 = local_90;
              }
              uStack_3f4._4_4_ = (int)((ulonglong)uStack_3f4 >> 0x20);
              uStack_3f4 = CONCAT44(uStack_3f4._4_4_,iVar19);
            }
LAB_14cfed141:
            local_3f8 = 0xffffffff;
            local_388 = (longlong *)local_b8;
            local_380._padding_ = CONCAT44(uStack_404,local_408);
            local_380.UnvisitedBitMask = 0xffffffff;
            local_380.CurrentBitIndex = (int)uStack_3f4;
            local_380.BaseBitIndex = uStack_3f4._4_4_;
            local_380._28_4_ = uStack_3ec;
            local_380.Array = pTStack_400;
            if ((int)uStack_3f4 < local_90) {
              do {
                iVar19 = local_380.CurrentBitIndex;
                lVar39 = *local_388;
                lVar45 = (longlong)local_380.CurrentBitIndex * 0x20;
                uVar5 = *(undefined8 *)(lVar45 + lVar39);
                uVar18 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
                uVar18 = local_70 - 1 & uVar18 + (int)((ulonglong)uVar5 >> 0x20);
                *(uint *)(lVar45 + 0x1c + lVar39) = uVar18;
                FVar33.Data = (FScriptContainerElement *)local_80;
                if ((ForElementType<FSetElementId>)local_78.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar33.Data = local_78.Data;
                }
                lVar35 = (longlong)(int)(local_70 - 1 & uVar18);
                *(undefined4 *)(lVar45 + 0x18 + lVar39) =
                     *(undefined4 *)((longlong)FVar33.Data + lVar35 * 4);
                *(int *)((longlong)FVar33.Data + lVar35 * 4) = iVar19;
                local_380.UnvisitedBitMask = local_380.UnvisitedBitMask & ~local_380._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_380);
                this = local_450;
              } while (local_380.CurrentBitIndex < (local_380.Array)->NumBits);
            }
          }
        }
      }
      pUVar29 = (UScriptStruct *)0x0;
      local_3a8._padding_._0_4_ = 0;
      local_3a8._padding_._4_4_ = 1;
      local_3a8.UnvisitedBitMask = 0xffffffff;
      local_3a8.CurrentBitIndex = 0;
      local_3a8.BaseBitIndex = 0;
      local_3a8.Array = pTVar2;
      if (*(int *)(pFVar24 + 0x28) != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3a8);
      }
      uStack_440 = CONCAT44(local_3a8._padding_._4_4_,(undefined4)local_3a8._padding_);
      uStack_430 = CONCAT44(local_3a8.CurrentBitIndex,local_3a8.UnvisitedBitMask);
      uStack_428 = CONCAT44(local_3a8._28_4_,local_3a8.BaseBitIndex);
      local_420 = *(int *)(pFVar24 + 8) - *(int *)(pFVar24 + 0x34);
      pTStack_438 = local_3a8.Array;
      uStack_2a8._4_4_ = uStack_41c;
      uStack_2a8._0_4_ = local_420;
      local_2c0 = local_3a8.Array;
      local_448 = pFVar24;
      local_2d0._0_8_ = pFVar24;
      unique0x10001e6c = uStack_440;
      uStack_2b8 = uStack_430;
      local_2b0 = uStack_428;
      pTVar25 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_100,pTVar2,*(int *)(pFVar24 + 0x28));
      uStack_440 = pTVar25->_padding_;
      pTStack_438 = pTVar25->Array;
      uStack_430._0_4_ = pTVar25->UnvisitedBitMask;
      uStack_430._4_4_ = pTVar25->CurrentBitIndex;
      uStack_428 = *(longlong *)&pTVar25->BaseBitIndex;
      local_420 = *(int *)(pFVar24 + 8) - *(int *)(pFVar24 + 0x34);
      local_150._44_4_ = uStack_41c;
      local_150.InitialNum = local_420;
      local_448 = pFVar24;
      local_150._padding_ = (longlong)pFVar24;
      local_150._padding_ = uStack_440;
      local_150._padding_ = (longlong)pTStack_438;
      local_150._padding_ = uStack_430;
      local_150._padding_ = uStack_428;
      bVar46 = TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForConstIterator::operator!=
                         ((TRangedForConstIterator *)local_2d0,&local_150);
      if (bVar46) {
        do {
          pFVar37 = (FName *)((longlong)uStack_2b8._4_4_ * 0x20 + *(longlong *)local_2d0._0_8_);
          TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          ::Emplace<FName_const_&,FString_const_&>
                    ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                      *)local_b8,pFVar37,(FString *)(pFVar37 + 1));
          uStack_2b8 = CONCAT44(uStack_2b8._4_4_,(uint)uStack_2b8 & ~uStack_2c4);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_2d0 + 8));
          bVar46 = TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForConstIterator::operator!=
                             ((TRangedForConstIterator *)local_2d0,&local_150);
        } while (bVar46);
      }
      if (((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) &&
         (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar46)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar6 = (this->MessageEndpoint).Object;
      local_340.Ticks = 0x2bca2875f4373fff;
      local_338.Ticks = 0;
      local_260.Object = (IMessageAttachment *)0x0;
      local_260.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_1d0.Elements._0_8_ = 0;
      local_1d0.Elements._8_8_ = 0;
      local_1d0.Elements._32_8_ = 0;
      local_1d0.Elements._40_8_ = uVar13;
      local_1d0.Elements._48_8_ = uVar14;
      local_1d0.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_1d0.HashSize = 0;
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::operator=(&local_1d0,
                  (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)local_b8);
      pUVar27 = (UScriptStruct *)
                (**(code **)(*(longlong *)(pFVar24 + -0x28) + 0x20))(pFVar24 + -0x28);
      if (pUVar27 == (UScriptStruct *)0x0) {
LAB_14cfed414:
        pUVar27 = pUVar29;
      }
      else {
        pUVar28 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar19 = (int)pUVar28->_padding_;
        if ((*(int *)(pUVar27->_padding_ + 0x38) < iVar19) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar27->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
            &pUVar28->_padding_)) goto LAB_14cfed414;
      }
      this_01 = (UScriptStruct *)
                (**(code **)(*(longlong *)(pFVar24 + -0x28) + 0x20))(pFVar24 + -0x28);
      if ((this_01 != (UScriptStruct *)0x0) &&
         (bVar46 = UObjectBaseUtility::IsA<UScriptStruct>((UObjectBaseUtility *)this_01), bVar46)) {
        iVar19 = (int)*(short *)((longlong)&this_01->_padding_ + 4);
        uVar40 = (int)this_01->_padding_ + -1 + iVar19 & ~(iVar19 - 1U);
        uVar18 = 1;
        if (uVar40 != 0) {
          uVar18 = uVar40;
        }
        pUVar29 = FMemory::Malloc((longlong)(int)uVar18,0);
        (**(code **)(this_01->_padding_ + 0x2f8))(this_01,pUVar29,1);
        pvVar30 = (void *)(**(code **)(*(longlong *)(pFVar24 + -0x28) + 0x10))(pFVar24 + -0x28);
        UScriptStruct::CopyScriptStruct(this_01,pUVar29,pvVar30,1);
      }
      FMessageEndpoint::Send
                (pFVar6,pUVar29,pUVar27,Reliable,
                 (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                  *)&local_1d0,&local_260,&local_418,&local_338,&local_340);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_260.SharedReferenceCount.ReferenceController);
      pFVar24 = pFVar24 + 0x88;
      uVar36 = (ulonglong)local_458;
      this = local_450;
    }
    FWindowsPlatformProcess::Sleep(fVar15);
    local_458 = (this->FrameDatas).ArrayNum;
    uVar36 = (ulonglong)(int)local_458;
    pFVar41 = (this->FrameDatas).AllocatorInstance.Data;
    lVar39 = uVar36 * 0x80;
    pFVar24 = pFVar41 + 0x30;
    while( true ) {
      iVar19 = 0;
      uVar18 = 0;
      if ((this->FrameDatas).ArrayNum != (int)uVar36) {
        local_467 = 0;
        `TCheckedPointerIterator<FTrackedFrameData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_467);
      }
      if (pFVar24 + -0x30 == pFVar41 + lVar39) break;
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::Reserve((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                 *)local_b8,
                ((local_b8._8_4_ - local_84) - *(int *)(pFVar24 + 0x34)) + *(int *)(pFVar24 + 8));
      uVar40 = *(uint *)(pFVar24 + 0x28);
      uVar21 = 1;
      TStack_298.CurrentBitIndex = uVar18;
      if (uVar40 != 0) {
        pFVar31 = *(FScriptContainerElement **)(pFVar24 + 0x20);
        if (pFVar31 == (FScriptContainerElement *)0x0) {
          pFVar31 = pFVar24 + 0x10;
        }
        uVar44 = *(uint *)pFVar31;
        while (uVar44 == 0) {
          uVar18 = uVar18 + 1;
          iVar19 = iVar19 + 0x20;
          TStack_298.CurrentBitIndex = uVar40;
          if ((int)((uVar40 - 1) + ((int)(uVar40 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
          goto LAB_14cfed5ff;
          uVar44 = *(uint *)(pFVar31 + (longlong)(int)uVar18 * 4);
        }
        uVar21 = ~(uVar44 - 1) & uVar44;
        uVar36 = (ulonglong)uVar21 * 2 + 1;
        lVar45 = 0x3f;
        if (uVar36 != 0) {
          for (; uVar36 >> lVar45 == 0; lVar45 = lVar45 + -1) {
          }
        }
        local_358 = (int)lVar45;
        TStack_298.CurrentBitIndex = local_358 + -1 + iVar19;
        if ((int)uVar40 < TStack_298.CurrentBitIndex) {
          TStack_298.CurrentBitIndex = uVar40;
        }
      }
LAB_14cfed5ff:
      pTStack_438 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar24 + 0x10);
      local_420 = *(int *)(pFVar24 + 8) - *(int *)(pFVar24 + 0x34);
      uVar44 = uVar40 & 0xffffffe0;
      uStack_440 = CONCAT44(uVar21,uVar18);
      uStack_430 = CONCAT44(TStack_298.CurrentBitIndex,0xffffffff);
      uStack_428 = CONCAT44(local_c4,iVar19);
      TStack_298._padding_ = uStack_440;
      iVar19 = (int)uVar40 >> 5;
      uStack_278 = CONCAT44(uStack_41c,local_420);
      TStack_298.UnvisitedBitMask = 0xffffffff;
      TStack_298._24_8_ = uStack_428;
      local_448 = pFVar24;
      local_2a0 = pFVar24;
      TStack_298.Array = pTStack_438;
      if ((((int)uVar40 < 0) || (*(int *)(pFVar24 + 0x28) < (int)uVar40)) &&
         (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar46)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar18 = *(uint *)(pFVar24 + 0x28);
      if (uVar40 != uVar18) {
        pFVar31 = pFVar24 + 0x10;
        if (*(FScriptContainerElement **)(pFVar24 + 0x20) != (FScriptContainerElement *)0x0) {
          pFVar31 = *(FScriptContainerElement **)(pFVar24 + 0x20);
        }
        uVar40 = -1 << ((byte)uVar40 & 0x1f) & *(uint *)(pFVar31 + (longlong)iVar19 * 4);
        while (uVar40 == 0) {
          iVar19 = iVar19 + 1;
          uVar44 = uVar44 + 0x20;
          uVar40 = uVar18;
          if ((int)(((int)(uVar18 - 1) >> 0x1f & 0x1fU) + (uVar18 - 1)) >> 5 < iVar19)
          goto LAB_14cfed720;
          uVar40 = *(uint *)(pFVar31 + (longlong)iVar19 * 4);
        }
        uVar36 = (ulonglong)(~(uVar40 - 1) & uVar40) * 2 + 1;
        lVar45 = 0x3f;
        if (uVar36 != 0) {
          for (; uVar36 >> lVar45 == 0; lVar45 = lVar45 + -1) {
          }
        }
        local_354 = (int)lVar45;
        uVar40 = (uVar44 - 1) + local_354;
        if ((int)uVar18 < (int)uVar40) {
          uVar40 = uVar18;
        }
      }
LAB_14cfed720:
      while( true ) {
        pFVar31 = local_2a0;
        if (*(int *)(local_2a0 + 8) - *(int *)(local_2a0 + 0x34) != (int)uStack_278) {
          local_466[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_466);
        }
        pFVar17 = local_450;
        if (((TStack_298.CurrentBitIndex == uVar40) &&
            (TStack_298.Array == (TBitArray<FDefaultBitArrayAllocator> *)(pFVar24 + 0x10))) &&
           (pFVar31 == pFVar24)) break;
        pFVar37 = (FName *)((longlong)TStack_298.CurrentBitIndex * 0x20 + *(longlong *)pFVar31);
        TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
        Emplace<FName_const_&,FString_const_&>
                  ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                    *)local_b8,pFVar37,(FString *)(pFVar37 + 1));
        TStack_298.UnvisitedBitMask = TStack_298.UnvisitedBitMask & ~TStack_298._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_298);
      }
      if (((local_450->MessageEndpoint).Object == (FMessageEndpoint *)0x0) &&
         (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar46)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar6 = (pFVar17->MessageEndpoint).Object;
      local_328 = 0;
      local_330 = 0x2bca2875f4373fff;
      local_250 = 0;
      pTStack_248 = (TReferenceControllerBase<1> *)0x0;
      local_230.Elements._0_8_ = 0;
      local_230.Elements._8_8_ = 0;
      local_230.Elements._32_8_ = 0;
      local_230.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_230.HashSize = 0;
      local_230.Elements._40_8_ = uVar13;
      local_230.Elements._48_8_ = uVar14;
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::operator=(&local_230,
                  (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)local_b8);
      lVar45 = (**(code **)(*(longlong *)(pFVar24 + -0x28) + 0x20))(pFVar24 + -0x28);
      if (lVar45 == 0) {
LAB_14cfed864:
        lVar45 = 0;
      }
      else {
        pUVar28 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar19 = (int)pUVar28->_padding_;
        if ((*(int *)(*(longlong *)(lVar45 + 0x10) + 0x38) < iVar19) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar45 + 0x10) + 0x30) + (longlong)iVar19 * 8) !=
            &pUVar28->_padding_)) goto LAB_14cfed864;
      }
      local_460 = (FScriptContainerElement *)0x0;
      pUVar29 = (UScriptStruct *)
                (**(code **)(*(longlong *)(pFVar24 + -0x28) + 0x20))(pFVar24 + -0x28);
      if (pUVar29 != (UScriptStruct *)0x0) {
        pUVar28 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar19 = (int)pUVar28->_padding_;
        if ((iVar19 <= *(int *)(pUVar29->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar29->_padding_ + 0x30) + (longlong)iVar19 * 8) ==
            &pUVar28->_padding_)) {
          iVar19 = (int)*(short *)((longlong)&pUVar29->_padding_ + 4);
          uVar40 = (int)pUVar29->_padding_ + -1 + iVar19 & ~(iVar19 - 1U);
          uVar18 = 1;
          if (uVar40 != 0) {
            uVar18 = uVar40;
          }
          pFVar31 = FMemory::Malloc((longlong)(int)uVar18,0);
          local_460 = pFVar31;
          (**(code **)(pUVar29->_padding_ + 0x2f8))(pUVar29,pFVar31,1);
          pvVar30 = (void *)(**(code **)(*(longlong *)(pFVar24 + -0x28) + 0x10))(pFVar24 + -0x28);
          UScriptStruct::CopyScriptStruct(pUVar29,pFVar31,pvVar30,1);
        }
      }
      pTVar38 = (TReferenceControllerBase<1> *)0x0;
      if ((pFVar6->Enabled != false) &&
         (pTVar7 = (pFVar6->BusPtr).WeakReferenceCount.ReferenceController, pTVar38 = pTVar7,
         pTVar7 != (TReferenceControllerBase<1> *)0x0)) {
        aVar12 = pTVar7->SharedReferenceCount;
        do {
          pTVar38 = (TReferenceControllerBase<1> *)0x0;
          if (aVar12 == (atomic<int>)0x0) goto LAB_14cfed941;
          LOCK();
          aVar22 = pTVar7->SharedReferenceCount;
          bVar46 = aVar12 == aVar22;
          if (bVar46) {
            pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar12 + 1);
            aVar22 = aVar12;
          }
          UNLOCK();
          aVar12 = aVar22;
        } while (!bVar46);
        pIVar8 = (pFVar6->BusPtr).Object;
        pTVar38 = pTVar7;
        if (pIVar8 != (IMessageBus *)0x0) {
          pcVar9 = *(code **)((longlong)*pIVar8 + 0x30);
          pTVar32 = TSharedFromThis<FMessageEndpoint,1>::AsShared
                              ((TSharedFromThis<FMessageEndpoint,1> *)&pFVar6->_padding_,&local_1e0)
          ;
          local_3d8 = pTVar32->Object;
          if (local_3d8 != (FMessageEndpoint *)0x0) {
            local_3d8 = (FMessageEndpoint *)&local_3d8->_padding_;
          }
          local_3d0 = (pTVar32->SharedReferenceCount).ReferenceController;
          if (local_3d0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_3d0->SharedReferenceCount =
                 (atomic<int>)((int)local_3d0->SharedReferenceCount + 1);
            UNLOCK();
          }
          (*pcVar9)(pIVar8,local_460,lVar45,0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3d0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1e0.SharedReferenceCount.ReferenceController);
        }
      }
LAB_14cfed941:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar38);
      local_230.HashSize = 0;
      if (local_230.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_230.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_230.Elements);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_248);
      uVar36 = (ulonglong)local_458;
      pFVar24 = pFVar24 + 0x80;
      this = local_450;
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnConnectionStatusChanged);
    lpCriticalSection = (LPCRITICAL_SECTION)&this->CriticalSection;
    local_70 = 0;
    if ((ForElementType<FSetElementId>)local_78.Data != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free(local_78.Data);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_b8);
    if (local_418.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_418.AllocatorInstance.Data);
    }
  }
LAB_14cfeda7b:
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// HandleHeartbeat @ 14cfedae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkProvider::HandleHeartbeat
          (FLiveLinkProvider *this,FLiveLinkHeartbeatMessage *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  IMessageContext *pIVar2;
  FMessageEndpoint *this_00;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  bool bVar5;
  int *piVar6;
  FMessageAddress *pFVar7;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *this_01;
  void *pvVar8;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar9;
  UPackage *pUVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  LARGE_INTEGER local_res8;
  FDateTime local_res20;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_118;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_108;
  FTimespan local_f8;
  TSharedPtr<IMessageAttachment,1> local_f0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  local_e0 [2];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar2 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar12 = (this->ConnectedAddresses).AllocatorInstance.Data;
  pFVar11 = pFVar12 + (longlong)(this->ConnectedAddresses).ArrayNum * 0x20;
  do {
    if (pFVar12 == pFVar11) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
LAB_14cfedb7f:
                    /* WARNING: Could not recover jumptable at 0x00014cfedbaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    piVar6 = (int *)(**(code **)((longlong)*pIVar2 + 0x48))(pIVar2);
    if (((piVar6[3] == *(int *)(pFVar12 + 0xc) && piVar6[2] == *(int *)(pFVar12 + 8)) &&
        piVar6[1] == *(int *)(pFVar12 + 4)) && *piVar6 == *(int *)pFVar12) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        QueryPerformanceCounter(&local_res8);
        *(double *)(pFVar12 + 0x10) =
             (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
        if (((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = (this->MessageEndpoint).Object;
        pFVar7 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
        this_01 = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)(**(code **)(this->_padding_ + 0x48))(this);
        pvVar8 = FMemory::Malloc(1,0);
        local_f8.Ticks = 0;
        local_108.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_res20.Ticks = 0x2bca2875f4373fff;
        local_108.Array.ArrayNum = 0;
        local_108.Array.ArrayMax = 0;
        pTVar9 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add(&local_108,pFVar7);
        local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.ArrayNum = (pTVar9->Array).ArrayNum;
        lVar13 = (longlong)local_118.ArrayNum;
        pFVar12 = (pTVar9->Array).AllocatorInstance.Data;
        if (local_118.ArrayNum == 0) {
          local_118.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,local_118.ArrayNum,0,&local_118.AllocatorInstance,local_118.ArrayNum,
                     &local_118.ArrayMax);
          memcpy(local_118.AllocatorInstance.Data,pFVar12,lVar13 << 4);
        }
        local_e0[0].Elements._0_8_ = 0;
        local_f0.Object = (IMessageAttachment *)0x0;
        local_f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_e0[0].Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
        local_e0[0].Elements._48_8_ = _UNK_150631d98;
        local_e0[0].Elements._8_8_ = 0;
        local_e0[0].Elements._32_8_ = 0;
        local_e0[0].Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_e0[0].HashSize = 0;
        TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
        ::operator=(local_e0,this_01);
        if (Z_Registration_Info_UScriptStruct_FLiveLinkHeartbeatMessage.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar10 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
          Z_Registration_Info_UScriptStruct_FLiveLinkHeartbeatMessage.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage,
                               (UObject *)pUVar10,L"LiveLinkHeartbeatMessage");
        }
        FMessageEndpoint::Send
                  (this_00,pvVar8,
                   Z_Registration_Info_UScriptStruct_FLiveLinkHeartbeatMessage.OuterSingleton,None,
                   (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                    *)local_e0,&local_f0,&local_118,&local_f8,&local_res20);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f0.SharedReferenceCount.ReferenceController);
        if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.AllocatorInstance.Data);
        }
        if (local_108.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Array.AllocatorInstance.Data);
        }
        this_01->HashSize = 0;
        FVar3 = (this_01->Hash).SecondaryData;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)FVar3);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)this_01);
      }
      goto LAB_14cfedb7f;
    }
    pFVar12 = pFVar12 + 0x20;
  } while( true );
}

// HandlePingMessage @ 14cfee110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkProvider::HandlePingMessage
          (FLiveLinkProvider *this,FLiveLinkPingMessage *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FMessageEndpoint *this_00;
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  FMessageAddress *pFVar7;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *this_01;
  FString *this_02;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar8;
  UPackage *pUVar9;
  longlong lVar10;
  LARGE_INTEGER local_res10;
  FDateTime local_res20;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_108;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_f8;
  FTimespan local_e8;
  TSharedPtr<IMessageAttachment,1> local_e0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  local_d0 [2];
  
  if (param_1->LiveLinkVersion < 2) {
    if (2 < (byte)LogLiveLinkMessageBus._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLinkMessageBus);
      return;
    }
  }
  else {
    if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this_00 = (this->MessageEndpoint).Object;
    pFVar7 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
    this_01 = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
               *)(**(code **)(this->_padding_ + 0x48))(this);
    this_02 = FMemory::Malloc(0x40,0);
    ::FString::FString(this_02,&this->ProviderName);
    ::FString::FString(this_02 + 1,&this->MachineName);
    pFVar1 = *(FScriptContainerElement **)&param_1->PollRequest;
    uVar4 = (param_1->PollRequest).C;
    uVar5 = (param_1->PollRequest).D;
    *(undefined4 *)&this_02[3].Data.AllocatorInstance.Data = 2;
    *(undefined4 *)((longlong)&this_02[3].Data.AllocatorInstance.Data + 4) = 2;
    this_02[2].Data.AllocatorInstance.Data = pFVar1;
    this_02[2].Data.ArrayNum = uVar4;
    this_02[2].Data.ArrayMax = uVar5;
    QueryPerformanceCounter(&local_res10);
    local_res20.Ticks = 0x2bca2875f4373fff;
    local_e8.Ticks = 0;
    local_f8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Array.ArrayNum = 0;
    local_f8.Array.ArrayMax = 0;
    *(double *)&this_02[3].Data.ArrayNum =
         (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000;
    pTVar8 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add(&local_f8,pFVar7);
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = (pTVar8->Array).ArrayNum;
    lVar10 = (longlong)local_108.ArrayNum;
    pFVar1 = (pTVar8->Array).AllocatorInstance.Data;
    if (local_108.ArrayNum == 0) {
      local_108.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_108.ArrayNum,0,&local_108.AllocatorInstance,local_108.ArrayNum,
                 &local_108.ArrayMax);
      memcpy(local_108.AllocatorInstance.Data,pFVar1,lVar10 << 4);
    }
    local_d0[0].Elements._0_8_ = 0;
    local_e0.Object = (IMessageAttachment *)0x0;
    local_e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_d0[0].Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_d0[0].Elements._48_8_ = _UNK_150631d98;
    local_d0[0].Elements._8_8_ = 0;
    local_d0[0].Elements._32_8_ = 0;
    local_d0[0].Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_d0[0].HashSize = 0;
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    operator=(local_d0,this_01);
    if (Z_Registration_Info_UScriptStruct_FLiveLinkPongMessage.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar9 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
      Z_Registration_Info_UScriptStruct_FLiveLinkPongMessage.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkPongMessage,(UObject *)pUVar9,
                           L"LiveLinkPongMessage");
    }
    FMessageEndpoint::Send
              (this_00,this_02,Z_Registration_Info_UScriptStruct_FLiveLinkPongMessage.OuterSingleton
               ,None,(TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                      *)local_d0,&local_e0,&local_108,&local_e8,&local_res20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e0.SharedReferenceCount.ReferenceController);
    if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    if (local_f8.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Array.AllocatorInstance.Data);
    }
    this_01->HashSize = 0;
    FVar2 = (this_01->Hash).SecondaryData;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_01);
  }
  return;
}

// HasConnection @ 14cfee3e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLiveLinkProvider::HasConnection(FLiveLinkProvider *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  LARGE_INTEGER local_res8;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  QueryPerformanceCounter(&local_res8);
  iVar1 = (this->ConnectedAddresses).ArrayNum;
  pFVar5 = (this->ConnectedAddresses).AllocatorInstance.Data;
  pFVar3 = pFVar5 + (longlong)iVar1 * 0x20;
  dVar2 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          ___real_416ffffec0000000;
  while( true ) {
    if ((this->ConnectedAddresses).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTrackedAddress_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar5 == pFVar3) break;
    if (dVar2 < *(double *)(pFVar5 + 0x10) || dVar2 == *(double *)(pFVar5 + 0x10)) {
      bVar4 = true;
LAB_14cfee47a:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return bVar4;
    }
    pFVar5 = pFVar5 + 0x20;
  }
  bVar4 = false;
  goto LAB_14cfee47a;
}

// OnConnectionsClosed @ 14cfee5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkProvider::OnConnectionsClosed
          (FLiveLinkProvider *this,TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// OnMessageBusNotification @ 14cfee5d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkProvider::OnMessageBusNotification
          (FLiveLinkProvider *this,FMessageBusNotification *param_1)

{
  return;
}

// RegisterConnStatusChangedHandle @ 14cfee5e0

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
FLiveLinkProvider::RegisterConnStatusChangedHandle
          (FLiveLinkProvider *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1
          )

{
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Add
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->OnConnectionStatusChanged,param_1);
  return (FDelegateHandle)(ulong64)param_1;
}

// RemoveSubject @ 14cfeec70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveLinkProvider::RemoveSubject(FLiveLinkProvider *this,FName param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FMessageEndpoint *this_00;
  ForElementType<FSetElementId> FVar1;
  code *pcVar2;
  bool bVar3;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *this_01;
  FName *pFVar4;
  UPackage *pUVar5;
  FDateTime local_res8;
  FName local_res10;
  FTimespan local_res18 [2];
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_f8;
  TSharedPtr<IMessageAttachment,1> local_e8;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  local_d8 [2];
  
  lpCriticalSection = &this->CriticalSection;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ClearTrackedSubject(this,&local_res10);
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  GetFilteredAddresses(this,param_1,&local_f8);
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = (this->MessageEndpoint).Object;
  local_res18[0].Ticks = 0;
  local_res8.Ticks = 0x2bca2875f4373fff;
  local_e8.Object = (IMessageAttachment *)0x0;
  local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this_01 = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)(**(code **)(this->_padding_ + 0x48))(this);
  pFVar4 = FMemory::Malloc(8,0);
  local_d8[0].Elements._48_8_ = _UNK_150631d98;
  local_d8[0].Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_d8[0].Elements._0_8_ = 0;
  local_d8[0].Elements._8_8_ = 0;
  *pFVar4 = param_1;
  local_d8[0].Elements._32_8_ = 0;
  local_d8[0].Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_d8[0].HashSize = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=(local_d8,this_01);
  if (Z_Registration_Info_UScriptStruct_FLiveLinkClearSubject.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar5 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UScriptStruct_FLiveLinkClearSubject.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkClearSubject,(UObject *)pUVar5,
                         L"LiveLinkClearSubject");
  }
  FMessageEndpoint::Send
            (this_00,pFVar4,Z_Registration_Info_UScriptStruct_FLiveLinkClearSubject.OuterSingleton,
             Reliable,(TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)local_d8,&local_e8,&local_f8,local_res18,&local_res8);
  this_01->HashSize = 0;
  FVar1 = (this_01->Hash).SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_01);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
                    /* WARNING: Could not recover jumptable at 0x00014cfeee3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// SendClearSubjectToConnections @ 14cfef090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkProvider::SendClearSubjectToConnections(FLiveLinkProvider *this,FName param_1)

{
  FMessageEndpoint *this_00;
  ForElementType<FSetElementId> FVar1;
  code *pcVar2;
  bool bVar3;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  *this_01;
  FName *pFVar4;
  UPackage *pUVar5;
  FDateTime local_res8;
  FTimespan local_res10;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_d8;
  TSharedPtr<IMessageAttachment,1> local_c8;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  local_b8 [2];
  
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  GetFilteredAddresses(this,param_1,&local_d8);
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = (this->MessageEndpoint).Object;
  local_res10.Ticks = 0;
  local_res8.Ticks = 0x2bca2875f4373fff;
  local_c8.Object = (IMessageAttachment *)0x0;
  local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this_01 = (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)(**(code **)(this->_padding_ + 0x48))(this);
  pFVar4 = FMemory::Malloc(8,0);
  local_b8[0].Elements._48_8_ = _UNK_150631d98;
  local_b8[0].Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_b8[0].Elements._0_8_ = 0;
  local_b8[0].Elements._8_8_ = 0;
  *pFVar4 = param_1;
  local_b8[0].Elements._32_8_ = 0;
  local_b8[0].Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_b8[0].HashSize = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=(local_b8,this_01);
  if (Z_Registration_Info_UScriptStruct_FLiveLinkClearSubject.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar5 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UScriptStruct_FLiveLinkClearSubject.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkClearSubject,(UObject *)pUVar5,
                         L"LiveLinkClearSubject");
  }
  FMessageEndpoint::Send
            (this_00,pFVar4,Z_Registration_Info_UScriptStruct_FLiveLinkClearSubject.OuterSingleton,
             Reliable,(TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)local_b8,&local_c8,&local_d8,&local_res10,&local_res8);
  this_01->HashSize = 0;
  FVar1 = (this_01->Hash).SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_01);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  return;
}

// SendSubject @ 14cfef250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkProvider::SendSubject(FLiveLinkProvider *this,FName param_1,FTrackedSubject *param_2)

{
  FMessageEndpoint *this_00;
  code *pcVar1;
  bool bVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_01;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar3;
  UPackage *pUVar4;
  FDateTime local_res8;
  FTimespan local_res10;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_98;
  TSharedPtr<IMessageAttachment,1> local_88;
  undefined1 local_78 [80];
  
  this_01 = FMemory::Malloc(0x28,0);
  (this_01->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this_01->ArrayNum = 0;
  this_01->ArrayMax = 0;
  this_01[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_01[1].ArrayNum = 0;
  this_01[1].ArrayMax = 0;
  this_01[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (this_01,(TArray<FName,TSizedDefaultAllocator<32>_> *)param_2);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(this_01 + 1),
             &(param_2->RefSkeleton).BoneParents);
  this_01[2].AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  GetFilteredAddresses(this,param_1,&local_98);
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
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
  this_00 = (this->MessageEndpoint).Object;
  local_res10.Ticks = 0;
  local_res8.Ticks = 0x2bca2875f4373fff;
  local_88.Object = (IMessageAttachment *)0x0;
  local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar3 = (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *
           )(**(code **)(this->_padding_ + 0x48))(this,local_78);
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSubjectDataMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UScriptStruct_FLiveLinkSubjectDataMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage,(UObject *)pUVar4,
                         L"LiveLinkSubjectDataMessage");
  }
  FMessageEndpoint::Send
            (this_00,this_01,
             Z_Registration_Info_UScriptStruct_FLiveLinkSubjectDataMessage.OuterSingleton,None,
             pTVar3,&local_88,&local_98,&local_res10,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return;
}

// SendSubjectFrame @ 14cfef3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkProvider::SendSubjectFrame(FLiveLinkProvider *this,FName param_1,FTrackedSubject *param_2)

{
  FMessageEndpoint *this_00;
  code *pcVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FName *pFVar6;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar7;
  UPackage *pUVar8;
  FDateTime local_res8;
  FTimespan local_res10;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_98;
  TSharedPtr<IMessageAttachment,1> local_88;
  undefined1 local_78 [80];
  
  pFVar6 = FMemory::Malloc(0x90,0);
  pFVar6[7].ComparisonIndex = 0;
  pFVar6[7].Number = 0;
  pFVar6[8].ComparisonIndex = 0;
  pFVar6[8].Number = 0;
  pFVar6[0xc].ComparisonIndex = 0;
  pFVar6[0xc].Number = 0;
  pFVar6[0xe].Number = 0;
  pFVar6->ComparisonIndex = 0;
  pFVar6->Number = 0;
  (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(pFVar6 + 1))->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar6[2].ComparisonIndex = 0;
  pFVar6[2].Number = 0;
  pFVar6[3].ComparisonIndex = 0;
  pFVar6[3].Number = 0;
  pFVar6[4].ComparisonIndex = 0;
  pFVar6[4].Number = 0;
  pFVar6[5].ComparisonIndex = 0;
  pFVar6[5].Number = 0;
  pFVar6[6].ComparisonIndex = 0;
  pFVar6[6].Number = 0;
  pFVar6[9].ComparisonIndex = 0;
  pFVar6[9].Number = 0;
  pFVar6[10].ComparisonIndex.Value = 0;
  pFVar6[10].Number = 0x80;
  pFVar6[0xb].ComparisonIndex.Value = 0xffffffff;
  pFVar6[0xb].Number = 0;
  pFVar6[0xd].ComparisonIndex = 0;
  pFVar6[0xd].Number = 0;
  pFVar6[0xe].ComparisonIndex.Value = 0;
  pFVar6[0xf].ComparisonIndex = 0;
  pFVar6[0xf].Number = 0;
  pFVar6[0x10].ComparisonIndex.Value = 0x18;
  pFVar6[0x10].Number = 1;
  pFVar6[0x11].ComparisonIndex = 0;
  pFVar6[0x11].Number = 0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(pFVar6 + 1),
             &param_2->Transforms);
  *pFVar6 = param_1;
  TArray<FLiveLinkCurveElement,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FLiveLinkCurveElement,TSizedDefaultAllocator<32>_> *)(pFVar6 + 3),
             &param_2->Curves);
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)(pFVar6 + 5),
            (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&param_2->MetaData);
  fVar2 = (param_2->MetaData).SceneTime.Time.SubFrame;
  iVar3 = (param_2->MetaData).SceneTime.Rate.Numerator;
  iVar4 = (param_2->MetaData).SceneTime.Rate.Denominator;
  pFVar6[0xf].ComparisonIndex = (FNameEntryId)(param_2->MetaData).SceneTime.Time.FrameNumber.Value;
  pFVar6[0xf].Number = (uint)fVar2;
  pFVar6[0x10].ComparisonIndex = (FNameEntryId)iVar3;
  pFVar6[0x10].Number = iVar4;
  pFVar6[0x11] = (FName)param_2->Time;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  GetFilteredAddresses(this,param_1,&local_98);
  if ((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->MessageEndpoint).Object;
  local_res10.Ticks = 0;
  local_res8.Ticks = 0x2bca2875f4373fff;
  local_88.Object = (IMessageAttachment *)0x0;
  local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *
           )(**(code **)(this->_padding_ + 0x48))(this,local_78);
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSubjectFrameMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
    Z_Registration_Info_UScriptStruct_FLiveLinkSubjectFrameMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage,(UObject *)pUVar8,
                         L"LiveLinkSubjectFrameMessage");
  }
  FMessageEndpoint::Send
            (this_00,pFVar6,
             Z_Registration_Info_UScriptStruct_FLiveLinkSubjectFrameMessage.OuterSingleton,None,
             pTVar7,&local_88,&local_98,&local_res10,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return;
}

// SerializeAnimationData @ 14cfef600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FLiveLinkSerializedFrameData * __thiscall
FLiveLinkProvider::SerializeAnimationData
          (FLiveLinkProvider *this,FLiveLinkSerializedFrameData *__return_storage_ptr__,
          FLiveLinkAnimationFrameData *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  UScriptStruct *pUVar3;
  undefined1 auStackY_138 [32];
  <lambda_1> local_f8;
  undefined1 local_e8 [16];
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  local_d8;
  FFrameTime local_88;
  FFrameRate FStack_80;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  double local_68;
  FFrameTime FStack_60;
  FFrameRate local_58;
  int local_50;
  TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  (__return_storage_ptr__->PayloadTypeName).ComparisonIndex = 0;
  (__return_storage_ptr__->PayloadTypeName).Number = 0;
  __return_storage_ptr__->SerializationMethod = Standard;
  __return_storage_ptr__->CompressionMethod = Uncompressed;
  __return_storage_ptr__->CompressionBias = None;
  __return_storage_ptr__->PayloadSize = 0;
  (__return_storage_ptr__->PayloadBytes).Bytes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->PayloadBytes).Bytes.ArrayNum = 0;
  (__return_storage_ptr__->PayloadBytes).Bytes.ArrayMax = 0;
  FLiveLinkBaseFrameData::FLiveLinkBaseFrameData((FLiveLinkBaseFrameData *)local_e8);
  local_e8._0_8_ = param_1->_padding_;
  local_e8._8_8_ = param_1->_padding_;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)(local_e8 + 0x10),
            (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
             *)&param_1->_padding_);
  local_88 = (FFrameTime)param_1->_padding_;
  FStack_80 = (FFrameRate)param_1->_padding_;
  if (&local_78 != (ForAnyElementType *)&param_1->_padding_) {
    iVar1 = (int)param_1->_padding_;
    _Src = (void *)param_1->_padding_;
    local_70 = iVar1;
    if ((iVar1 == 0) && (local_6c == 0)) {
      local_6c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar1,local_6c,&local_78,iVar1,&local_6c);
      if (iVar1 != 0) {
        memcpy(local_78.Data,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  local_68 = (double)param_1->_padding_;
  FStack_60 = (FFrameTime)param_1->_padding_;
  uVar2 = (param_1->Transforms).ArrayNum;
  local_58 = (FFrameRate)param_1->_padding_;
  local_50 = (int)param_1->_padding_;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (local_48.ArrayMax < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,uVar2,&local_48.AllocatorInstance,local_48.ArrayNum,&local_48.ArrayMax);
  }
  Algo::
  Transform<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_&,_FLiveLinkFloatAnimationFrameData::FromAnimData_::__l2::<lambda_1>_>
            (&param_1->Transforms,&local_48,local_f8);
  pUVar3 = FLiveLinkFloatAnimationFrameData::StaticStruct();
  FLiveLinkSerializedFrameData::SetPayload(__return_storage_ptr__,pUVar3,local_e8,Always);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  local_d8.HashSize = 0;
  if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_e8 + 0x10));
  return __return_storage_ptr__;
}

// SetLastSubjectFrameData @ 14cfefa90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkProvider::SetLastSubjectFrameData
          (FLiveLinkProvider *this,FName param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *param_3)

{
  TArray<FTrackedFrameData,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FName *pFVar4;
  FName *pFVar5;
  FStructOnScope local_38;
  
  pTVar1 = &this->FrameDatas;
  iVar3 = (this->FrameDatas).ArrayNum;
  pFVar5 = (FName *)(pTVar1->AllocatorInstance).Data;
  pFVar4 = pFVar5 + (longlong)iVar3 * 0x10;
  while( true ) {
    if (pFVar5 == pFVar4) {
      if (iVar3 == (this->FrameDatas).ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x880,&pTVar1->AllocatorInstance,&(this->FrameDatas).ArrayMax);
      }
      (this->FrameDatas).ArrayNum = iVar3 + 1;
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      FStructOnScope::FStructOnScope(&local_38,&param_2->WrappedStruct);
      FTrackedFrameData::FTrackedFrameData
                ((FTrackedFrameData *)(pFVar2 + (longlong)iVar3 * 0x80),param_1,
                 (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)&local_38,param_3);
      return;
    }
    if (*pFVar5 == param_1) break;
    pFVar5 = pFVar5 + 0x10;
  }
  pFVar4 = pFVar5 + 1;
  if (pFVar4 != (FName *)param_2) {
    (**(code **)((longlong)*pFVar4 + 0x48))(pFVar4);
    pFVar5[2] = *(FName *)&(param_2->WrappedStruct).ScriptStruct.WeakPtr;
    pFVar5[3] = (FName)(param_2->WrappedStruct).SampleStructMemory;
    *(bool *)&pFVar5[5].ComparisonIndex.Value = (param_2->WrappedStruct).OwnsMemory;
    (param_2->WrappedStruct).OwnsMemory = false;
    (**(code **)((param_2->WrappedStruct)._padding_ + 0x48))(param_2);
  }
  if ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
       *)(pFVar5 + 6) ==
      (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
       *)param_3) {
    return;
  }
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Move<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)(pFVar5 + 6),
             (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)param_3);
  return;
}

// SetLastSubjectStaticData @ 14cfefba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkProvider::SetLastSubjectStaticData
          (FLiveLinkProvider *this,FName param_1,TSubclassOf<ULiveLinkRole> param_2,
          FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_3,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *param_4)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  FName *pFVar6;
  UObject *pUVar7;
  FName *pFVar8;
  FName local_res8;
  UObject *local_48;
  FStructOnScope local_40;
  
  pFVar8 = (FName *)(this->StaticDatas).AllocatorInstance.Data;
  pFVar6 = pFVar8 + (longlong)(this->StaticDatas).ArrayNum * 0x11;
  while( true ) {
    if (pFVar8 == pFVar6) {
      lVar2 = *(longlong *)param_2.Class.field0_0x0;
      pUVar7 = (UObject *)0x0;
      if ((lVar2 != 0) &&
         (pUVar5 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar5 != (UClass *)0x0)) {
        iVar4 = (int)pUVar5->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar4) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar4 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar7 = *(UObject **)param_2.Class.field0_0x0;
        }
      }
      iVar4 = (this->StaticDatas).ArrayNum;
      piVar1 = &(this->StaticDatas).ArrayMax;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x888,&(this->StaticDatas).AllocatorInstance,piVar1);
      }
      (this->StaticDatas).ArrayNum = iVar4 + 1;
      pFVar8 = (FName *)((this->StaticDatas).AllocatorInstance.Data + (longlong)iVar4 * 0x88);
      FStructOnScope::FStructOnScope(&local_40,&param_3->WrappedStruct);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      local_48 = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)&local_48);
      pFVar8[1] = local_res8;
      *pFVar8 = param_1;
      FStructOnScope::FStructOnScope((FStructOnScope *)(pFVar8 + 2),&local_40);
      *(undefined8 *)
       &((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
          *)(pFVar8 + 7))->Elements = 0;
      pFVar8[8].ComparisonIndex = 0;
      pFVar8[8].Number = 0;
      pFVar8[0xb].ComparisonIndex = 0;
      pFVar8[0xb].Number = 0;
      pFVar8[0xc].ComparisonIndex.Value = 0;
      pFVar8[0xc].Number = 0x80;
      pFVar8[0xd].ComparisonIndex.Value = 0xffffffff;
      pFVar8[0xd].Number = 0;
      pFVar8[0xf].ComparisonIndex = 0;
      pFVar8[0xf].Number = 0;
      pFVar8[0x10].ComparisonIndex.Value = 0;
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                  *)(pFVar8 + 7),
                 (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                  *)param_4);
      FStructOnScope::~FStructOnScope(&local_40);
      return;
    }
    if (*pFVar8 == param_1) break;
    pFVar8 = pFVar8 + 0x11;
  }
  if ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
       *)(pFVar8 + 7) !=
      (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
       *)param_4) {
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    Move<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                *)(pFVar8 + 7),
               (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                *)param_4);
  }
  pFVar6 = pFVar8 + 2;
  if (pFVar6 != (FName *)param_3) {
    (**(code **)((longlong)*pFVar6 + 0x48))(pFVar6);
    pFVar8[3] = *(FName *)&(param_3->WrappedStruct).ScriptStruct.WeakPtr;
    pFVar8[4] = (FName)(param_3->WrappedStruct).SampleStructMemory;
    *(bool *)&pFVar8[6].ComparisonIndex.Value = (param_3->WrappedStruct).OwnsMemory;
    (param_3->WrappedStruct).OwnsMemory = false;
    (**(code **)((param_3->WrappedStruct)._padding_ + 0x48))(param_3);
  }
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  if ((lVar2 != 0) &&
     (pUVar5 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar4 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar5->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      local_res8 = *(FName *)param_2.Class.field0_0x0;
      goto LAB_14cfefcc1;
    }
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
LAB_14cfefcc1:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar8 + 1),(FObjectPtr)&local_res8);
  return;
}

// ShouldTransmitToSubject_AnyThread @ 14cff0360

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLiveLinkProvider::ShouldTransmitToSubject_AnyThread
          (FLiveLinkProvider *this,FName param_1,FMessageAddress *param_2)

{
  return true;
}

// UnregisterConnStatusChangedHandle @ 14cff0bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkProvider::UnregisterConnStatusChangedHandle
          (FLiveLinkProvider *this,FDelegateHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ulong64 *puVar4;
  ForAnyElementType *this_00;
  uint uVar5;
  longlong lVar6;
  FDestructionSentinel local_38;
  
  if (param_1.ID != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnConnectionStatusChanged,(FWriteAccessScope *)&local_38);
    uVar5 = 0;
    if (0 < *(int *)&(this->OnConnectionStatusChanged).field_0x10) {
      lVar6 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar5 < *(int *)&(this->OnConnectionStatusChanged).field_0x10) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = (ForAnyElementType *)
                  (*(longlong *)&(this->OnConnectionStatusChanged).field_0x8 + lVar6);
        if (((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
           && (puVar4 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(),
              *puVar4 == param_1.ID)) {
          if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
          {
            (*(code *)**(undefined8 **)this_00->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10);
            *(undefined4 *)&this_00[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->OnConnectionStatusChanged,false);
          break;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x10;
      } while ((int)uVar5 < *(int *)&(this->OnConnectionStatusChanged).field_0x10);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// UpdateSubject @ 14cff0d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkProvider::UpdateSubject
          (FLiveLinkProvider *this,FName *param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2
          ,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FName FVar2;
  FScriptContainerElement *_Src;
  uint uVar3;
  FTrackedSubject *this_00;
  longlong lVar4;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FVar2 = *param_1;
    uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    this_00 = TMapBase<FName,FTrackedSubject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedSubject,0>_>
              ::FindOrAddImpl<FName_const_&>
                        ((TMapBase<FName,FTrackedSubject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedSubject,0>_>
                          *)&this->Subjects,uVar3 + FVar2.Number,param_1);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)this_00,param_2);
    local_28.ArrayNum = param_3->ArrayNum;
    lVar4 = (longlong)local_28.ArrayNum;
    _Src = (param_3->AllocatorInstance).Data;
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.ArrayNum == 0) {
      local_28.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_28.ArrayNum,0,&local_28.AllocatorInstance,local_28.ArrayNum,
                 &local_28.ArrayMax);
      memcpy(local_28.AllocatorInstance.Data,_Src,lVar4 << 2);
    }
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              (&(this_00->RefSkeleton).BoneParents,&local_28);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    piVar1 = &(this_00->Transforms).ArrayMax;
    (this_00->Transforms).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,&(this_00->Transforms).AllocatorInstance,0,piVar1);
    }
    SendSubject(this,*param_1,this_00);
                    /* WARNING: Could not recover jumptable at 0x00014cff0e63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateSubjectFrame @ 14cff0e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkProvider::UpdateSubjectFrame
          (FLiveLinkProvider *this,FName *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FLiveLinkCurveElement,TSizedDefaultAllocator<32>_> *param_3,
          FLiveLinkMetaData *param_4,double param_5)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar1;
  FFrameRate FVar2;
  uint uVar3;
  FTrackedSubject *pFVar4;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FVar1 = *param_1;
    uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    pFVar4 = TMapBase<FName,FTrackedSubject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedSubject,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,FTrackedSubject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedSubject,0>_>
                         *)&this->Subjects,uVar3 + FVar1.Number,param_1);
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              (&pFVar4->Transforms,param_2);
    TArray<FLiveLinkCurveElement,TSizedDefaultAllocator<32>_>::operator=(&pFVar4->Curves,param_3);
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
               *)&pFVar4->MetaData,
              (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
               *)param_4);
    FVar2 = (param_4->SceneTime).Rate;
    (pFVar4->MetaData).SceneTime.Time = (param_4->SceneTime).Time;
    (pFVar4->MetaData).SceneTime.Rate = FVar2;
    pFVar4->Time = param_5;
    SendSubjectFrame(this,*param_1,pFVar4);
                    /* WARNING: Could not recover jumptable at 0x00014cff0f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateSubjectFrame @ 14cff0f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkProvider::UpdateSubjectFrame
          (FLiveLinkProvider *this,FName *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FLiveLinkCurveElement,TSizedDefaultAllocator<32>_> *param_3,double param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FName FVar1;
  uint uVar2;
  FTrackedSubject *pFVar3;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FVar1 = *param_1;
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    pFVar3 = TMapBase<FName,FTrackedSubject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedSubject,0>_>
             ::FindOrAddImpl<FName_const_&>
                       ((TMapBase<FName,FTrackedSubject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedSubject,0>_>
                         *)&this->Subjects,uVar2 + FVar1.Number,param_1);
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
              (&pFVar3->Transforms,param_2);
    TArray<FLiveLinkCurveElement,TSizedDefaultAllocator<32>_>::operator=(&pFVar3->Curves,param_3);
    pFVar3->Time = param_4;
    SendSubjectFrame(this,*param_1,pFVar3);
                    /* WARNING: Could not recover jumptable at 0x00014cff101c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateSubjectFrameData @ 14cff1030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLiveLinkProvider::UpdateSubjectFrameData
          (FLiveLinkProvider *this,FName param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *param_3)

{
  FStructOnScope *pFVar1;
  TArray<FTrackedFrameData,TSizedDefaultAllocator<32>_> *pTVar2;
  FMessageEndpoint *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  UClass *pUVar14;
  ULiveLinkRole *pUVar15;
  UScriptStruct *pUVar16;
  UScriptStruct *pUVar17;
  FString *pFVar18;
  FTrackedAddress *pFVar19;
  FLiveLinkAnimationFrameData *pFVar20;
  longlong lVar21;
  FLiveLinkSerializedFrameData *pFVar22;
  FLiveLinkByteArray *pFVar23;
  ulonglong uVar24;
  FName *pFVar25;
  UPackage *pUVar26;
  FLiveLinkBaseFrameData *pFVar27;
  ForAnyElementType FVar28;
  ForAnyElementType FVar29;
  FName FVar30;
  FName *pFVar31;
  uint uVar32;
  FScriptContainerElement *pFVar33;
  FName local_res10 [3];
  undefined1 auStackY_358 [32];
  ELiveLinkCompressionBias local_308;
  ELiveLinkPayloadSerializationMethod local_306;
  ELiveLinkCompressionMethod local_305;
  char local_304 [4];
  uint local_300;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_2f8;
  FStructOnScope *local_2e8;
  FScriptContainerElement *local_2e0;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_2d8;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_2c8;
  undefined8 local_2b8;
  TPairInitializer<FMessageAddress_const_&,bool_const_&> local_2b0;
  FTimespan local_2a0;
  FDateTime local_298;
  FTimespan local_290;
  FScriptContainerElement *local_288;
  FName local_280;
  undefined8 local_270 [2];
  FScriptContainerElement *local_260;
  char *local_258;
  TSharedPtr<IMessageAttachment,1> local_250;
  TSharedPtr<IMessageAttachment,1> local_240;
  FString local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  local_1f8;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  local_1a8;
  FStructOnScope local_158;
  FLiveLinkSerializedFrameData local_130;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
  local_108;
  TSet<TTuple<FMessageAddress,bool>,TDefaultMapHashableKeyFuncs<FMessageAddress,bool,0>,FDefaultSetAllocator>
  local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_res10[0] = param_1;
  local_2e8 = &param_2->WrappedStruct;
  if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  local_2b8 = 0;
  if (local_res10[0] == (FName)0x0) {
LAB_14cff10c4:
    bVar8 = false;
LAB_14cff10c6:
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
    return bVar8;
  }
  pFVar31 = (FName *)(this->StaticDatas).AllocatorInstance.Data;
  pFVar25 = pFVar31 + (longlong)(this->StaticDatas).ArrayNum * 0x11;
  while( true ) {
    if (pFVar31 == pFVar25) goto LAB_14cff10c4;
    if (*pFVar31 == local_res10[0]) break;
    pFVar31 = pFVar31 + 0x11;
  }
  if ((pFVar31 == (FName *)0x0) ||
     (pUVar14 = (UClass *)FWeakObjectPtr::Get((FWeakObjectPtr *)(pFVar31 + 1)),
     pUVar14 == (UClass *)0x0)) goto LAB_14cff10c4;
  pUVar15 = UClass::GetDefaultObject<ULiveLinkRole>(pUVar14);
  pUVar16 = (UScriptStruct *)(**(code **)(*(longlong *)pUVar15 + 0x2b8))(pUVar15);
  pUVar17 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::GetStruct(param_2);
  if (pUVar16 != pUVar17) goto LAB_14cff10c4;
  ValidateConnections(this);
  local_108.Elements._0_8_ = 0;
  local_108.Elements._8_8_ = 0;
  local_108.Elements._32_8_ = 0;
  local_108.Elements._40_4_ = 0;
  local_108.Elements._44_4_ = 0x80;
  local_108.Elements._48_4_ = 0xffffffff;
  local_108.Elements._52_4_ = 0;
  local_108.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_108.HashSize = 0;
  pFVar18 = ::FName::ToString(local_res10,&local_230);
  TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
  Emplace<FName_const_&,FString>
            ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              *)&local_108,&FLiveLinkMessageAnnotation::SubjectAnnotation,pFVar18);
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
  Append<FDefaultSetAllocator>
            ((TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              *)&local_108,param_3);
  if (0 < (this->ConnectedAddresses).ArrayNum) {
    local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.ArrayNum = 0;
    local_2f8.ArrayMax = 0;
    GetFilteredAddresses(this,local_res10[0],&local_2f8);
    pTVar7 = CVarLiveLinkCompressAnimData.Ref;
    bVar8 = IsInParallelGameThread();
    if (bVar8) {
LAB_14cff1220:
      lVar21 = 0;
    }
    else {
      bVar8 = IsInGameThread();
      lVar21 = 4;
      if (bVar8) goto LAB_14cff1220;
    }
    if (*(int *)((longlong)pTVar7->ShadowedValue + lVar21) == 0) {
LAB_14cff1267:
      bVar11 = false;
    }
    else {
      pUVar16 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::GetStruct(param_2);
      pUVar17 = FLiveLinkAnimationFrameData::StaticStruct();
      if (pUVar17 == (UScriptStruct *)0x0) goto LAB_14cff1267;
      iVar13 = (int)pUVar17->_padding_;
      if (((int)pUVar16->_padding_ < iVar13) ||
         ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar13 * 8) !=
          &pUVar17->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      bVar11 = true;
      if (!bVar8) goto LAB_14cff1267;
    }
    iVar13 = local_2f8.ArrayNum;
    bVar8 = false;
    pFVar33 = local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayNum * 0x10;
    local_b8.Elements._0_8_ = 0;
    local_b8.Elements._8_8_ = 0;
    local_b8.Elements._32_8_ = 0;
    local_b8.Elements._40_4_ = 0;
    local_b8.Elements._44_4_ = 0x80;
    local_b8.Elements._48_4_ = 0xffffffff;
    local_b8.Elements._52_4_ = 0;
    local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_b8.HashSize = 0;
    FVar29.Data = local_2f8.AllocatorInstance.Data;
    while( true ) {
      if (local_2f8.ArrayNum != iVar13) {
        local_304[1] = 0;
        `TCheckedPointerIterator<FMessageAddress,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_304 + 1);
      }
      param_2 = (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)local_2e8;
      if (FVar29.Data == pFVar33) break;
      pFVar19 = AlgoImpl::
                FindBy<TArray<FTrackedAddress,TSizedDefaultAllocator<32>_>_&,FMessageAddress,FMessageAddress_FTrackedAddress::*>
                          (&this->ConnectedAddresses,(FMessageAddress *)FVar29.Data,
                           (pdm_de207915)0x0);
      if ((pFVar19 == (FTrackedAddress *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TrackedAddress",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkMessageBusFramework\\Private\\LiveLinkProvider.cpp"
                             ,0x1c7,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      local_304[0] = pFVar19->bSupportsCompressedPayloads;
      local_258 = local_304;
      local_260 = FVar29.Data;
      TSet<TTuple<FMessageAddress,bool>,TDefaultMapHashableKeyFuncs<FMessageAddress,bool,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FMessageAddress_const_&,bool_const_&>_>
                (&local_b8,&local_2b0,(bool *)&local_260);
      if ((bVar8) || (local_304[0] != '\0')) {
        bVar8 = true;
        FVar29.Data = FVar29.Data + 0x10;
      }
      else {
        FVar29.Data = FVar29.Data + 0x10;
      }
    }
    if ((bVar11) && (bVar8)) {
      local_280.ComparisonIndex.Value = 0;
      local_280.Number = 0;
      local_306 = Standard;
      uVar32 = 0;
      local_305 = Uncompressed;
      local_308 = None;
      local_300 = 0;
      local_2e0 = (FScriptContainerElement *)0x0;
      pUVar16 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::GetStruct
                          ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)local_2e8);
      pUVar17 = FLiveLinkAnimationFrameData::StaticStruct();
      if (pUVar17 == (UScriptStruct *)0x0) {
        bVar8 = true;
        goto LAB_14cff1508;
      }
      iVar13 = (int)pUVar17->_padding_;
      if (((int)pUVar16->_padding_ < iVar13) ||
         ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar13 * 8) !=
          &pUVar17->_padding_)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      bVar8 = true;
      FVar30 = local_280;
      if (bVar11) {
        pFVar20 = (FLiveLinkAnimationFrameData *)
                  (**(code **)((param_2->WrappedStruct)._padding_ + 0x18))(param_2);
        lVar21 = (**(code **)((param_2->WrappedStruct)._padding_ + 0x20))(param_2);
        if (lVar21 == 0) {
LAB_14cff1467:
          pFVar20 = (FLiveLinkAnimationFrameData *)0x0;
        }
        else {
          pUVar14 = Z_Construct_UClass_UScriptStruct_NoRegister();
          iVar13 = (int)pUVar14->_padding_;
          if (((*(int *)(*(longlong *)(lVar21 + 0x10) + 0x38) < iVar13) ||
              ((longlong *)
               *(undefined1 **)
                (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x30) + (longlong)iVar13 * 8) !=
               &pUVar14->_padding_)) ||
             (pUVar16 = FLiveLinkAnimationFrameData::StaticStruct(), pUVar16 == (UScriptStruct *)0x0
             )) goto LAB_14cff1467;
          iVar13 = (int)pUVar16->_padding_;
          if ((*(int *)(lVar21 + 0x38) < iVar13) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar21 + 0x30) + (longlong)iVar13 * 8) !=
              &pUVar16->_padding_)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (!bVar8) goto LAB_14cff1467;
        }
        pFVar22 = SerializeAnimationData(this,&local_130,pFVar20);
        local_306 = pFVar22->SerializationMethod;
        FVar30 = pFVar22->PayloadTypeName;
        local_305 = pFVar22->CompressionMethod;
        local_308 = pFVar22->CompressionBias;
        local_300 = pFVar22->PayloadSize;
        pFVar23 = &pFVar22->PayloadBytes;
        uVar32 = 0;
        if ((FLiveLinkByteArray *)local_270 != pFVar23) {
          local_2e0 = (pFVar23->Bytes).AllocatorInstance.Data;
          (pFVar23->Bytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          uVar32 = (pFVar22->PayloadBytes).Bytes.ArrayNum;
          (pFVar22->PayloadBytes).Bytes.ArrayNum = 0;
          (pFVar22->PayloadBytes).Bytes.ArrayMax = 0;
        }
        bVar8 = true;
        if (local_130.PayloadBytes.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.PayloadBytes.Bytes.AllocatorInstance.Data);
          bVar8 = true;
        }
      }
    }
    else {
      bVar8 = false;
      local_280.ComparisonIndex.Value = 0;
      local_280.Number = 0;
      local_300 = 0;
      local_2e0 = (FScriptContainerElement *)0x0;
LAB_14cff1508:
      local_305 = Uncompressed;
      local_306 = Standard;
      local_308 = None;
      uVar32 = 0;
      FVar30 = local_280;
    }
    uVar6 = _UNK_150631d98;
    uVar5 = ___xmm_00000000ffffffff0000008000000000;
    uVar24 = (ulonglong)local_2f8.ArrayNum;
    local_288 = local_2f8.AllocatorInstance.Data + uVar24 * 0x10;
    local_2e8 = (FStructOnScope *)CONCAT44(local_2e8._4_4_,local_2f8.ArrayNum);
    FVar29.Data = local_2f8.AllocatorInstance.Data;
    while( true ) {
      pFVar33 = local_288;
      if (local_2f8.ArrayNum != (int)uVar24) {
        local_304[2] = 0;
        `TCheckedPointerIterator<FMessageAddress,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_304 + 2);
      }
      if (FVar29.Data == pFVar33) break;
      if (bVar8) {
        uVar12 = FCrc::MemCrc_DEPRECATED(FVar29.Data,0x10,0);
        iVar13 = TSet<TTuple<FMessageAddress,bool>,TDefaultMapHashableKeyFuncs<FMessageAddress,bool,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FMessageAddress>(&local_b8,uVar12,(FMessageAddress *)FVar29.Data)
        ;
        if (iVar13 == -1) {
          lVar21 = 0;
LAB_14cff1595:
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L"");
          if (bVar11) {
            pcVar4 = (code *)swi(3);
            uVar10 = (*pcVar4)();
            return (bool)uVar10;
          }
        }
        else {
          lVar21 = (longlong)iVar13 * 0x1c + local_b8.Elements._0_8_;
          if (lVar21 == 0) goto LAB_14cff1595;
        }
        if (*(char *)(lVar21 + 0x10) == '\0') goto LAB_14cff1790;
        pFVar25 = FMemory::Malloc(0x20,0);
        pFVar31 = pFVar25 + 2;
        *pFVar25 = FVar30;
        *(ELiveLinkPayloadSerializationMethod *)&pFVar25[1].ComparisonIndex.Value = local_306;
        *(ELiveLinkCompressionMethod *)((longlong)&pFVar25[1].ComparisonIndex.Value + 1) = local_305
        ;
        *(ELiveLinkCompressionBias *)((longlong)&pFVar25[1].ComparisonIndex.Value + 2) = local_308;
        pFVar25[1].Number = local_300;
        *(FScriptContainerElement **)&pFVar31->ComparisonIndex = (FScriptContainerElement *)0x0;
        pFVar25[3].ComparisonIndex.Value = uVar32;
        if (uVar32 == 0) {
          pFVar25[3].Number = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar32,0,(ForAnyElementType *)pFVar31,uVar32,(int *)&pFVar25[3].Number);
          memcpy(*(FScriptContainerElement **)&pFVar31->ComparisonIndex,local_2e0,
                 (longlong)(int)uVar32);
        }
        if (((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        local_220 = *(undefined8 *)FVar29.Data;
        uStack_218 = *(undefined8 *)(FVar29.Data + 8);
        pFVar3 = (this->MessageEndpoint).Object;
        local_2b0.Value = (bool *)0x2bca2875f4373fff;
        local_2d8.ArrayNum = 1;
        local_2a0.Ticks = 0;
        local_2d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,1,0,&local_2d8.AllocatorInstance,1,&local_2d8.ArrayMax);
        *(undefined8 *)local_2d8.AllocatorInstance.Data = local_220;
        *(undefined8 *)(local_2d8.AllocatorInstance.Data + 8) = uStack_218;
        local_1f8.Elements._0_8_ = 0;
        local_1f8.Elements._8_8_ = 0;
        local_1f8.Elements._32_8_ = 0;
        local_1f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_1f8.HashSize = 0;
        local_250.Object = (IMessageAttachment *)0x0;
        local_250.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_1f8.Elements._40_8_ = uVar5;
        local_1f8.Elements._48_8_ = uVar6;
        TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
        ::operator=(&local_1f8,&local_108);
        if (Z_Registration_Info_UScriptStruct_FLiveLinkSerializedFrameData.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar26 = Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
          Z_Registration_Info_UScriptStruct_FLiveLinkSerializedFrameData.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSerializedFrameData,
                               (UObject *)pUVar26,L"LiveLinkSerializedFrameData");
        }
        FMessageEndpoint::Send
                  (pFVar3,pFVar25,
                   Z_Registration_Info_UScriptStruct_FLiveLinkSerializedFrameData.OuterSingleton,
                   None,(TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)&local_1f8,&local_250,&local_2d8,&local_2a0,(FDateTime *)&local_2b0.Value
                  );
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_250.SharedReferenceCount.ReferenceController);
        FVar28.Data = local_2d8.AllocatorInstance.Data;
      }
      else {
LAB_14cff1790:
        if (((this->MessageEndpoint).Object == (FMessageEndpoint *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        local_210 = *(undefined8 *)FVar29.Data;
        uStack_208 = *(undefined8 *)(FVar29.Data + 8);
        pFVar3 = (this->MessageEndpoint).Object;
        local_298.Ticks = 0x2bca2875f4373fff;
        local_290.Ticks = 0;
        local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2c8.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,1,0,&local_2c8.AllocatorInstance,1,&local_2c8.ArrayMax);
        *(undefined8 *)local_2c8.AllocatorInstance.Data = local_210;
        *(undefined8 *)(local_2c8.AllocatorInstance.Data + 8) = uStack_208;
        local_1a8.Elements._0_8_ = 0;
        local_240.Object = (IMessageAttachment *)0x0;
        local_240.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_1a8.Elements._8_8_ = 0;
        local_1a8.Elements._32_8_ = 0;
        local_1a8.Elements._40_8_ = uVar5;
        local_1a8.Elements._48_8_ = uVar6;
        local_1a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_1a8.HashSize = 0;
        TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
        ::operator=(&local_1a8,&local_108);
        pUVar16 = (UScriptStruct *)(**(code **)((param_2->WrappedStruct)._padding_ + 0x20))(param_2)
        ;
        if (pUVar16 == (UScriptStruct *)0x0) {
LAB_14cff189f:
          pUVar16 = (UScriptStruct *)0x0;
        }
        else {
          pUVar14 = Z_Construct_UClass_UScriptStruct_NoRegister();
          iVar13 = (int)pUVar14->_padding_;
          if ((*(int *)(pUVar16->_padding_ + 0x38) < iVar13) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
              &pUVar14->_padding_)) goto LAB_14cff189f;
        }
        pFVar27 = FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::CloneData(param_2);
        FMessageEndpoint::Send
                  (pFVar3,pFVar27,pUVar16,None,
                   (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                    *)&local_1a8,&local_240,&local_2c8,&local_290,&local_298);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_240.SharedReferenceCount.ReferenceController);
        FVar28.Data = local_2c8.AllocatorInstance.Data;
      }
      if (FVar28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar28.Data);
      }
      FVar29.Data = FVar29.Data + 0x10;
      uVar24 = (ulonglong)local_2e8 & 0xffffffff;
    }
    if (local_2e0 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e0);
    }
    local_b8.HashSize = 0;
    if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_b8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FMessageAddress,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FMessageAddress,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_b8.Elements);
    if (local_2f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.AllocatorInstance.Data);
    }
  }
  FVar30 = local_res10[0];
  pTVar2 = &this->FrameDatas;
  pFVar31 = (FName *)(pTVar2->AllocatorInstance).Data;
  iVar13 = (this->FrameDatas).ArrayNum;
  pFVar25 = pFVar31 + (longlong)iVar13 * 0x10;
  do {
    if (pFVar31 == pFVar25) {
LAB_14cff19a6:
      if (iVar13 == (this->FrameDatas).ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x880,&pTVar2->AllocatorInstance,&(this->FrameDatas).ArrayMax);
        (this->FrameDatas).ArrayNum = iVar13;
      }
      iVar13 = (this->FrameDatas).ArrayNum;
      pFVar31 = (FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x80);
      (this->FrameDatas).ArrayNum = iVar13 + 1;
      FStructOnScope::FStructOnScope(&local_158,&param_2->WrappedStruct);
      *pFVar31 = FVar30;
      FStructOnScope::FStructOnScope((FStructOnScope *)(pFVar31 + 1),&local_158);
      *(undefined8 *)
       &((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
          *)(pFVar31 + 6))->Elements = 0;
      pFVar31[7].ComparisonIndex = 0;
      pFVar31[7].Number = 0;
      pFVar31[10].ComparisonIndex = 0;
      pFVar31[10].Number = 0;
      pFVar31[0xb].ComparisonIndex.Value = 0;
      pFVar31[0xb].Number = 0x80;
      pFVar31[0xc].ComparisonIndex.Value = 0xffffffff;
      pFVar31[0xc].Number = 0;
      pFVar31[0xe].ComparisonIndex = 0;
      pFVar31[0xe].Number = 0;
      pFVar31[0xf].ComparisonIndex.Value = 0;
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                  *)(pFVar31 + 6),&local_108);
      FStructOnScope::~FStructOnScope(&local_158);
LAB_14cff1a41:
      bVar8 = true;
      local_108.HashSize = 0;
      if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_108.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_108.Elements);
      goto LAB_14cff10c6;
    }
    if (*pFVar31 == local_res10[0]) {
      if (pFVar31 == (FName *)0x0) goto LAB_14cff19a6;
      pFVar1 = (FStructOnScope *)(pFVar31 + 1);
      if (pFVar1 != &param_2->WrappedStruct) {
        (**(code **)(*(longlong *)&pFVar1->_padding_ + 0x48))(pFVar1);
        pFVar31[2] = *(FName *)&(param_2->WrappedStruct).ScriptStruct.WeakPtr;
        pFVar31[3] = (FName)(param_2->WrappedStruct).SampleStructMemory;
        *(bool *)&pFVar31[5].ComparisonIndex.Value = (param_2->WrappedStruct).OwnsMemory;
        (param_2->WrappedStruct).OwnsMemory = false;
        (**(code **)((param_2->WrappedStruct)._padding_ + 0x48))(param_2);
      }
      if ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
           *)(pFVar31 + 6) != &local_108) {
        TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
        ::
        Move<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>_>
                  ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                    *)(pFVar31 + 6),&local_108);
      }
      goto LAB_14cff1a41;
    }
    pFVar31 = pFVar31 + 0x10;
  } while( true );
}

// UpdateSubjectStaticData @ 14cff1af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLiveLinkProvider::UpdateSubjectStaticData
          (FLiveLinkProvider *this,FName param_1,TSubclassOf<ULiveLinkRole> param_2,
          FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_3,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint *puVar1;
  ForElementType<unsigned_int> this_00;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  ULiveLinkRole *pUVar8;
  FString *pFVar9;
  ulonglong uVar10;
  FMessageEndpoint *this_01;
  UScriptStruct *pUVar11;
  FLiveLinkBaseStaticData *pFVar12;
  int iVar13;
  FName *pFVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  FName *pFVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  UClass *pUVar21;
  undefined8 *puVar22;
  ForElementType<unsigned_int> FVar23;
  FName local_res10 [3];
  undefined1 auStackY_198 [32];
  FSparseArrayAllocationInfo local_148;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_138;
  FDateTime local_128;
  TSharedPtr<IMessageAttachment,1> local_120;
  undefined4 local_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ForElementType<FSetElementId> local_c0;
  int local_b8;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined1 local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  this_00 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_198;
  lpCriticalSection = &this->CriticalSection;
  local_128.Ticks = (long64)param_4;
  local_res10[0] = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pUVar21 = (UClass *)0x0;
  local_148._0_8_ = 0;
  if (((local_res10[0] != (FName)0x0) &&
      (lVar19 = *(longlong *)param_2.Class.field0_0x0, lVar19 != 0)) &&
     (pUVar6 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar13 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar19 + 0x38) < iVar13) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar19 + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar6->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar19 = *(longlong *)param_2.Class.field0_0x0, lVar19 != 0)) {
      pUVar7 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
      pUVar6 = pUVar21;
      if (pUVar7 != (UClass *)0x0) {
        iVar13 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar19 + 0x38) < iVar13) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar19 + 0x30) + (longlong)iVar13 * 8) !=
            &pUVar7->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar6 = *(UClass **)param_2.Class.field0_0x0;
        }
      }
      pUVar8 = UClass::GetDefaultObject<ULiveLinkRole>(pUVar6);
      pUVar6 = (UClass *)(**(code **)((param_3->WrappedStruct)._padding_ + 0x20))(param_3);
      if (pUVar6 == (UClass *)0x0) {
LAB_14cff1c2f:
        pUVar6 = pUVar21;
      }
      else {
        pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
        iVar13 = (int)pUVar7->_padding_;
        if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar13) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
            &pUVar7->_padding_)) goto LAB_14cff1c2f;
      }
      pUVar7 = (UClass *)(**(code **)(*(longlong *)pUVar8 + 0x2b0))(pUVar8);
      if (pUVar7 == pUVar6) {
        pFVar14 = (FName *)(this->StaticDatas).AllocatorInstance.Data;
        pFVar17 = pFVar14 + (longlong)(this->StaticDatas).ArrayNum * 0x11;
        for (; pFVar14 != pFVar17; pFVar14 = pFVar14 + 0x11) {
          if (*pFVar14 == local_res10[0]) {
            (**(code **)(this->_padding_ + 0x60))(this,local_res10);
            break;
          }
        }
        ValidateConnections(this);
        local_a8._0_8_ = (FScriptContainerElement *)0x0;
        local_a8._8_8_ = 0;
        local_88 = (ForElementType<unsigned_int>)0x0;
        local_80 = 0;
        local_7c = 0x80;
        local_78 = -1;
        local_74 = 0;
        local_68.Data = (FScriptContainerElement *)0x0;
        local_60 = 0;
        pFVar9 = ::FName::ToString(local_res10,(FString *)&local_120);
        TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
        Emplace<FName_const_&,FString>
                  ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                    *)local_a8,&FLiveLinkMessageAnnotation::SubjectAnnotation,pFVar9);
        if (local_120.Object != (IMessageAttachment *)0x0) {
          FMemory::Free(local_120.Object);
        }
        lVar19 = *(longlong *)param_2.Class.field0_0x0;
        pUVar6 = pUVar21;
        if ((lVar19 != 0) &&
           (pUVar7 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar7 != (UClass *)0x0)) {
          iVar13 = (int)pUVar7->_padding_;
          if ((*(int *)(lVar19 + 0x38) < iVar13) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar19 + 0x30) + (longlong)iVar13 * 8) !=
              &pUVar7->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            pUVar6 = *(UClass **)param_2.Class.field0_0x0;
          }
        }
        local_148._0_8_ = pUVar6->_padding_;
        ::FName::ToString((FName *)&local_148,(FString *)&local_138);
        if (local_74 == 0) {
          iVar13 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x20,8,1,(ForAnyElementType *)local_a8,(int *)(local_a8 + 8),
                              (int *)(local_a8 + 0xc));
          iVar4 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                            ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
          FVar23 = this_00;
          if (local_88 != (ForElementType<unsigned_int>)0x0) {
            FVar23 = local_88;
          }
          uVar5 = iVar4 >> 0x1f & 0x1f;
          iVar4 = iVar4 + uVar5;
          puVar1 = (uint *)((longlong)FVar23 + (longlong)(iVar4 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << (((byte)iVar4 & 0x1f) - (char)uVar5 & 0x1f));
          iVar4 = local_78;
        }
        else {
          local_74 = local_74 + -1;
          iVar4 = *(int *)(local_a8._0_8_ + (longlong)local_78 * 0x20 + 4);
          iVar13 = local_78;
          if (local_74 != 0) {
            *(undefined4 *)(local_a8._0_8_ + (longlong)iVar4 * 0x20) = 0xffffffff;
          }
        }
        local_78 = iVar4;
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_a8,&local_148,iVar13);
        if (local_148.Pointer != (UClass *)0x0) {
          *(FName *)local_148.Pointer = FLiveLinkMessageAnnotation::RoleAnnotation;
          *(longlong *)((longlong)local_148.Pointer + 8) = 0;
          *(FScriptContainerElement **)((longlong)local_148.Pointer + 8) =
               local_138.AllocatorInstance.Data;
          local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)((longlong)local_148.Pointer + 0x10) = local_138.ArrayNum;
          *(int *)((longlong)((longlong)local_148.Pointer + 0x10) + 4) = local_138.ArrayMax;
          local_138.ArrayNum = 0;
          local_138.ArrayMax = 0;
          *(undefined4 *)((longlong)local_148.Pointer + 0x18) = 0xffffffff;
          pUVar21 = local_148.Pointer;
        }
        lVar19 = pUVar21->_padding_;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)lVar19);
        uVar5 = uVar5 + (int)((ulonglong)lVar19 >> 0x20);
        bVar3 = TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                ::TryReplaceExisting
                          ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                            *)local_a8,uVar5,(TSparseSetElement<TTuple<FName,FString>_> *)pUVar21,
                           &local_148.Index,(bool *)0x0);
        if (!bVar3) {
          uVar20 = 1;
          uVar16 = local_a8._8_4_ - local_74;
          if (3 < uVar16) {
            uVar20 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
            lVar19 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            uVar20 = (ulonglong)(uint)(1 << ((byte)lVar19 & 0x1f));
          }
          if (((int)uVar16 < 1) || (uVar16 = (uint)uVar20, (int)uVar16 <= (int)local_60)) {
            uVar5 = local_60 - 1 & uVar5;
            *(uint *)((longlong)&pUVar21->_padding_ + 4) = uVar5;
            FVar15.Data = (FScriptContainerElement *)local_70;
            if ((ForElementType<FSetElementId>)local_68.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar15.Data = local_68.Data;
            }
            lVar19 = (longlong)(int)(local_60 - 1 & uVar5);
            *(undefined4 *)&pUVar21->_padding_ = *(undefined4 *)((longlong)FVar15.Data + lVar19 * 4)
            ;
            *(int *)((longlong)FVar15.Data + lVar19 * 4) = local_148.Index;
          }
          else {
            local_60 = uVar16;
            if ((ForElementType<FSetElementId>)local_68.Data != (ForElementType<FSetElementId>)0x0)
            {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
            }
            if (uVar16 != 0) {
              uVar5 = uVar16;
              if (uVar16 < 2) {
                if ((ForElementType<FSetElementId>)local_68.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  uVar5 = 0;
                  goto LAB_14cff1ef3;
                }
              }
              else {
LAB_14cff1ef3:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_68,0,uVar5,4);
              }
              if (0 < (int)uVar16) {
                uVar18 = 0;
                do {
                  FVar15.Data = (FScriptContainerElement *)local_70;
                  if ((ForElementType<FSetElementId>)local_68.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar15.Data = local_68.Data;
                  }
                  uVar10 = (longlong)(int)uVar16 - 1U & uVar18;
                  uVar18 = uVar18 + 1;
                  *(undefined4 *)((longlong)FVar15.Data + uVar10 * 4) = 0xffffffff;
                  uVar20 = uVar20 - 1;
                } while (uVar20 != 0);
              }
            }
            iVar13 = 0;
            uVar5 = 0;
            if (local_60 != 0) {
              local_120.Object = (IMessageAttachment *)&DAT_100000000;
              uStack_10c = 0;
              if (local_80 != 0) {
                FVar23 = this_00;
                if (local_88 != (ForElementType<unsigned_int>)0x0) {
                  FVar23 = local_88;
                }
                uVar16 = *(uint *)FVar23;
                while (uVar16 == 0) {
                  uVar5 = uVar5 + 0x20;
                  lVar19 = (longlong)iVar13;
                  iVar13 = iVar13 + 1;
                  uStack_10c = (ulonglong)uVar5 << 0x20;
                  uVar20 = (ulonglong)local_120.Object >> 0x20;
                  local_120.Object = (IMessageAttachment *)CONCAT44((int)uVar20,iVar13);
                  if ((int)(local_80 + -1 + (local_80 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) {
                    uStack_10c = CONCAT44(uVar5,local_80);
                    goto LAB_14cff1ff1;
                  }
                  uVar16 = *(uint *)((uchar *)((longlong)FVar23 + 4) + lVar19 * 4);
                }
                local_120.Object =
                     (IMessageAttachment *)CONCAT44(-uVar16 & uVar16,SUB84(local_120.Object,0));
                uVar20 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
                lVar19 = 0x3f;
                if (uVar20 != 0) {
                  for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                  }
                }
                iVar13 = (int)lVar19 + -1 + uVar5;
                if (local_80 < iVar13) {
                  iVar13 = local_80;
                }
                uStack_10c._4_4_ = (int)((ulonglong)uStack_10c >> 0x20);
                uStack_10c = CONCAT44(uStack_10c._4_4_,iVar13);
              }
LAB_14cff1ff1:
              local_110 = 0xffffffff;
              local_100 = (longlong *)local_a8;
              local_f8._padding_ = (longlong)local_120.Object;
              local_f8.UnvisitedBitMask = 0xffffffff;
              local_f8.CurrentBitIndex = (int)uStack_10c;
              local_f8._28_4_ = uStack_104;
              local_f8.BaseBitIndex = uStack_10c._4_4_;
              local_120.SharedReferenceCount.ReferenceController =
                   (TReferenceControllerBase<1> *)this_00;
              local_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
              if ((int)uStack_10c < local_80) {
                do {
                  iVar13 = local_f8.CurrentBitIndex;
                  puVar22 = (undefined8 *)((longlong)local_f8.CurrentBitIndex * 0x20 + *local_100);
                  uVar2 = *puVar22;
                  uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
                  uVar5 = local_60 - 1 & uVar5 + (int)((ulonglong)uVar2 >> 0x20);
                  *(uint *)((longlong)puVar22 + 0x1c) = uVar5;
                  FVar15.Data = (FScriptContainerElement *)local_70;
                  if ((ForElementType<FSetElementId>)local_68.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar15.Data = local_68.Data;
                  }
                  lVar19 = (longlong)(int)(local_60 - 1 & uVar5);
                  *(undefined4 *)(puVar22 + 3) = *(undefined4 *)((longlong)FVar15.Data + lVar19 * 4)
                  ;
                  *(int *)((longlong)FVar15.Data + lVar19 * 4) = iVar13;
                  local_f8.UnvisitedBitMask = local_f8.UnvisitedBitMask & ~local_f8._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f8);
                } while (local_f8.CurrentBitIndex < *(int *)((longlong)local_f8.Array + 0x18));
              }
            }
          }
        }
        if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.AllocatorInstance.Data);
        }
        TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
        Append<FDefaultSetAllocator>
                  ((TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                    *)local_a8,
                   (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                    *)local_128.Ticks);
        if (0 < (this->ConnectedAddresses).ArrayNum) {
          local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_138.ArrayNum = 0;
          local_138.ArrayMax = 0;
          GetFilteredAddresses(this,local_res10[0],&local_138);
          this_01 = TSharedPtr<FMessageEndpoint,1>::operator->(&this->MessageEndpoint);
          local_148._0_8_ = 0;
          local_120.Object = (IMessageAttachment *)0x0;
          local_120.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_100 = (longlong *)0x0;
          local_d8 = ___xmm_00000000ffffffff0000008000000000;
          uStack_d0 = _UNK_150631d98;
          local_128.Ticks = 0x2bca2875f4373fff;
          local_f8._padding_ = 0;
          local_f8.BaseBitIndex = 0;
          local_f8._28_4_ = 0;
          local_c0 = (ForElementType<FSetElementId>)0x0;
          local_b8 = 0;
          TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
          ::operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                       *)&local_100,
                      (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                       *)local_a8);
          pUVar11 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::GetStruct(param_3);
          pFVar12 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::CloneData(param_3);
          FMessageEndpoint::Send
                    (this_01,pFVar12,pUVar11,Reliable,
                     (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                      *)&local_100,&local_120,&local_138,(FTimespan *)&local_148,&local_128);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_120.SharedReferenceCount.ReferenceController);
          if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.AllocatorInstance.Data);
          }
        }
        local_128.Ticks = *(long64 *)param_2.Class.field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             *)local_128.Ticks !=
            (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_128.Ticks);
        }
        SetLastSubjectStaticData
                  (this,local_res10[0],(TSubclassOf<ULiveLinkRole>)&local_128,param_3,
                   (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                    *)local_a8);
        bVar3 = true;
        local_60 = 0;
        if ((ForElementType<FSetElementId>)local_68.Data != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free(local_68.Data);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_a8);
        goto LAB_14cff2249;
      }
    }
  }
  bVar3 = false;
LAB_14cff2249:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar3;
}

// ValidateConnections @ 14cff22a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FLiveLinkProvider::ValidateConnections(FLiveLinkProvider *this)

{
  FTrackedAddress *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined7 uVar5;
  bool bVar6;
  FTrackedAddress *pFVar7;
  FTrackedAddress *pFVar8;
  FTrackedAddress *pFVar9;
  LARGE_INTEGER local_res8;
  double local_res10;
  void *local_48;
  undefined8 local_40;
  FLiveLinkProvider *local_38;
  double *local_30;
  void **local_28;
  
  QueryPerformanceCounter(&local_res8);
  pFVar1 = (FTrackedAddress *)(this->ConnectedAddresses).AllocatorInstance.Data;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_30 = &local_res10;
  local_28 = &local_48;
  pFVar8 = pFVar1 + (this->ConnectedAddresses).ArrayNum;
  local_res10 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                ___real_416ffffec0000000;
  pFVar7 = pFVar1;
  local_38 = this;
  while (pFVar7 != pFVar8) {
    bVar6 = `FLiveLinkProvider::ValidateConnections'::__l2::<lambda_1>::operator()(&local_38,pFVar7)
    ;
    if (bVar6) {
      do {
        pFVar9 = pFVar8;
        pFVar8 = pFVar9 + -1;
        if (pFVar7 == pFVar8) goto LAB_14cff2361;
        bVar6 = `FLiveLinkProvider::ValidateConnections'::__l2::<lambda_1>::operator()
                          (&local_38,pFVar8);
      } while (bVar6);
      uVar2 = (pFVar8->Address).UniqueId.B;
      uVar3 = pFVar9[-1].Address.UniqueId.C;
      uVar4 = pFVar9[-1].Address.UniqueId.D;
      (pFVar7->Address).UniqueId.A = (pFVar8->Address).UniqueId.A;
      (pFVar7->Address).UniqueId.B = uVar2;
      (pFVar7->Address).UniqueId.C = uVar3;
      (pFVar7->Address).UniqueId.D = uVar4;
      bVar6 = pFVar9[-1].bSupportsCompressedPayloads;
      uVar5 = *(undefined7 *)&pFVar9[-1].field_0x19;
      pFVar7->LastHeartbeatTime = pFVar9[-1].LastHeartbeatTime;
      pFVar7->bSupportsCompressedPayloads = bVar6;
      *(undefined7 *)&pFVar7->field_0x19 = uVar5;
      pFVar7 = pFVar7 + 1;
    }
    else {
      pFVar7 = pFVar7 + 1;
    }
  }
LAB_14cff2361:
  TArray<FTrackedAddress,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->ConnectedAddresses,(int)((longlong)pFVar7 - (longlong)pFVar1 >> 5),Default);
  if (0 < (int)local_40) {
    (**(code **)(this->_padding_ + 0x40))(this,&local_48);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnConnectionStatusChanged);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

