// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SessionServices
// Functions: 22

// FSessionInstanceInfo @ 148cec4c0

/* WARNING: Enum "Type": Some values do not have unique names */

FSessionInstanceInfo * __thiscall
FSessionInstanceInfo::FSessionInstanceInfo
          (FSessionInstanceInfo *this,FGuid *param_1,TSharedRef<ISessionInfo,1> *param_2,
          TSharedRef<IMessageBus,1> *param_3)

{
  atomic<int> *paVar1;
  TSharedPtr<FMessageEndpoint,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  FTaskGraphInterface *pFVar11;
  TRawMessageHandler<FSessionServiceLog,FSessionInstanceInfo> *pTVar12;
  TRawMessageHandler<FSessionServiceLog,FSessionInstanceInfo> *pTVar13;
  FSessionInstanceInfo *pFVar14;
  FName local_res8;
  TRawPtrProxy<TRawMessageHandler<FSessionServiceLog,FSessionInstanceInfo>_> local_res10;
  TSharedPtr<IMessageHandler,1> local_b8;
  undefined1 local_a8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_90;
  ForAnyElementType FStack_88;
  int local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  bool local_68;
  FName local_64;
  Type local_5c;
  TSharedPtr<FMessageEndpoint,1> local_58;
  code *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  bool local_38;
  
  pTVar13 = (TRawMessageHandler<FSessionServiceLog,FSessionInstanceInfo> *)0x0;
  this->_padding_ = 0;
  pTVar2 = &this->MessageEndpoint;
  this->_padding_ = 0;
  (this->ApplicationAddress).UniqueId.A = 0;
  (this->ApplicationAddress).UniqueId.B = 0;
  (this->ApplicationAddress).UniqueId.C = 0;
  (this->ApplicationAddress).UniqueId.D = 0;
  (this->BuildDate).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildDate).Data.ArrayNum = 0;
  (this->BuildDate).Data.ArrayMax = 0;
  (this->CurrentLevel).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentLevel).Data.ArrayNum = 0;
  (this->CurrentLevel).Data.ArrayMax = 0;
  (this->DeviceName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeviceName).Data.ArrayNum = 0;
  (this->DeviceName).Data.ArrayMax = 0;
  (this->EngineAddress).UniqueId.A = 0;
  (this->EngineAddress).UniqueId.B = 0;
  (this->EngineAddress).UniqueId.C = 0;
  (this->EngineAddress).UniqueId.D = 0;
  this->_padding_ = (longlong)&___7FSessionInstanceInfo__6B_;
  this->Authorized = false;
  this->EngineVersion = 0;
  this->HasBegunPlay = false;
  uVar6 = param_1->B;
  uVar7 = param_1->C;
  uVar8 = param_1->D;
  (this->InstanceId).A = param_1->A;
  (this->InstanceId).B = uVar6;
  (this->InstanceId).C = uVar7;
  (this->InstanceId).D = uVar8;
  (this->InstanceName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceName).Data.ArrayNum = 0;
  (this->InstanceName).Data.ArrayMax = 0;
  (this->InstanceType).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstanceType).Data.ArrayNum = 0;
  (this->InstanceType).Data.ArrayMax = 0;
  (this->LastUpdateTime).Ticks = 0;
  (this->LogMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LogMessages).ArrayNum = 0;
  (this->LogMessages).ArrayMax = 0;
  pTVar2->Object = (FMessageEndpoint *)0x0;
  (this->MessageEndpoint).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Owner).Object = param_2->Object;
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Owner).WeakReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->PlatformName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformName).Data.ArrayNum = 0;
  (this->PlatformName).Data.ArrayMax = 0;
  this->WorldTimeSeconds = 0.0;
  *(undefined8 *)&this->LogReceivedEvent = 0;
  *(undefined8 *)&(this->LogReceivedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->LogReceivedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->LogReceivedEvent).field_0x18 = 2;
  ::FName::FName(&local_res8,"FSessionInstanceInfo");
  local_a8._0_8_ = param_3->Object;
  local_a8._8_8_ = (param_3->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_a8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_a8._8_8_)->WeakReferenceCount =
         (atomic<int>)((int)((TReferenceControllerBase<1> *)local_a8._8_8_)->WeakReferenceCount + 1)
    ;
    UNLOCK();
  }
  local_90.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_88.Data = (FScriptContainerElement *)0x0;
  local_64 = local_res8;
  local_a8[0x10] = false;
  local_80 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70._0_4_ = 0;
  local_70._4_4_ = 0;
  local_68 = false;
  pFVar11 = FTaskGraphInterface::Get();
  local_5c = (**(code **)((longlong)*pFVar11 + 0x10))(pFVar11,0);
  uStack_40 = 0;
  local_48 = HandleSessionLogMessage;
  pTVar12 = ::operator_new(0x20);
  if (pTVar12 != (TRawMessageHandler<FSessionServiceLog,FSessionInstanceInfo> *)0x0) {
    pTVar12->_padding_ =
         (longlong)&___7__TRawMessageHandler_UFSessionServiceLog__VFSessionInstanceInfo____6B_;
    *(code **)&pTVar12->Func = local_48;
    *(ulonglong *)&(pTVar12->Func).field_0x8 = CONCAT44(uStack_3c,uStack_40);
    pTVar12->Handler = this;
    pTVar13 = pTVar12;
  }
  local_res10.Object = pTVar13;
  TSharedPtr<IMessageHandler,1>::
  TSharedPtr<IMessageHandler,1><TRawMessageHandler<FSessionServiceLog,FSessionInstanceInfo>_>
            (&local_b8,&local_res10);
  if (((local_78.Data <= &local_b8) &&
      (&local_b8 <
       (TSharedPtr<IMessageHandler,1> *)(local_78.Data + (longlong)local_70._4_4_ * 0x10))) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar14 = (FSessionInstanceInfo *)(*pcVar5)();
    return pFVar14;
  }
  iVar10 = (int)local_70;
  if ((int)local_70 == local_70._4_4_) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_78,(int *)((longlong)&local_70 + 4));
  }
  local_70._0_4_ = iVar10 + 1;
  *(IMessageHandler **)&local_78.Data[(longlong)iVar10 * 0x10].field_0x0 = local_b8.Object;
  *(TReferenceControllerBase<1> **)(local_78.Data + (longlong)iVar10 * 0x10 + 8) =
       local_b8.SharedReferenceCount.ReferenceController;
  local_b8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_b8.Object = (IMessageHandler *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FMessageEndpointBuilder::Build((FMessageEndpointBuilder *)local_a8,&local_58);
  if (pTVar2 != &local_58) {
    pTVar2->Object = local_58.Object;
    local_58.Object = (FMessageEndpoint *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MessageEndpoint).SharedReferenceCount,&local_58.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<IMessageHandler,1>,int>
            ((TSharedPtr<IMessageHandler,1> *)local_78.Data,(int)local_70);
  if ((TSharedPtr<IMessageHandler,1> *)local_78.Data != (TSharedPtr<IMessageHandler,1> *)0x0) {
    FMemory::Free(local_78.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_90,(FWriteAccessScope *)&local_48);
  if ((local_80 != 0) && (FStack_88.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_88.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_88,0,0,0x10);
    local_80 = 0;
  }
  if (local_38 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_3c,uStack_40),
               (FDestructionSentinel *)&local_48);
  }
  if (FStack_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_90.AccessDetector);
  if ((TReferenceControllerBase<1> *)local_a8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = (atomic<int> *)(local_a8._8_8_ + 0xc);
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(*(longlong *)local_a8._8_8_ + 8))(local_a8._8_8_,1);
    }
  }
  return this;
}

// ~FSessionInstanceInfo @ 148cee650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSessionInstanceInfo::~FSessionInstanceInfo(FSessionInstanceInfo *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong *plVar8;
  
  this->_padding_ = (longlong)&___7FSessionInstanceInfo__6B_;
  FMessageEndpoint::SafeRelease(&this->MessageEndpoint);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->LogReceivedEvent).field_0x8,*(int *)&(this->LogReceivedEvent).field_0x10);
  pvVar5 = *(void **)&(this->LogReceivedEvent).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LogReceivedEvent);
  pFVar6 = (this->PlatformName).Data.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pTVar7 = (this->Owner).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FSessionLogMessage,1>,int>
            ((TSharedPtr<FSessionLogMessage,1> *)(this->LogMessages).AllocatorInstance.Data,
             (this->LogMessages).ArrayNum);
  pFVar6 = (this->LogMessages).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->InstanceType).Data.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->InstanceName).Data.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->DeviceName).Data.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->CurrentLevel).Data.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->BuildDate).Data.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  this->_padding_ = (longlong)&___7ISessionInstanceInfo__6B_;
  plVar8 = (longlong *)this->_padding_;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  return;
}

// ExecuteCommand @ 148cf17a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSessionInstanceInfo::ExecuteCommand(FSessionInstanceInfo *this,FString *param_1)

{
  FString *pFVar1;
  int *piVar2;
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  ForAnyElementType _Src_00;
  wchar_t *pwVar3;
  FString *this_01;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar4;
  UScriptStruct *pUVar5;
  longlong lVar6;
  FDateTime local_res8;
  FTimespan local_res18 [2];
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_68;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_58;
  TSharedPtr<IMessageAttachment,1> local_48;
  
  this_00 = (this->MessageEndpoint).Object;
  if ((this_00 != (FMessageEndpoint *)0x0) &&
     ((((this->EngineAddress).UniqueId.D != 0 || (this->EngineAddress).UniqueId.C != 0) ||
      (this->EngineAddress).UniqueId.B != 0) || (this->EngineAddress).UniqueId.A != 0)) {
    pwVar3 = FWindowsPlatformProcess::UserName(false);
    this_01 = FMemory::Malloc(0x20,0);
    ::FString::FString((FString *)&local_58,pwVar3);
    ::FString::FString(this_01,param_1);
    _Src_00.Data = local_58.Array.AllocatorInstance.Data;
    pFVar1 = this_01 + 1;
    piVar2 = &this_01[1].Data.ArrayMax;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_01[1].Data.ArrayNum = local_58.Array.ArrayNum;
    if (local_58.Array.ArrayNum == 0) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Array.ArrayNum,0,(ForAnyElementType *)pFVar1,local_58.Array.ArrayNum,
                 piVar2);
      memcpy((pFVar1->Data).AllocatorInstance.Data,_Src_00.Data,
             (longlong)local_58.Array.ArrayNum * 2);
    }
    if (local_58.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Array.AllocatorInstance.Data);
    }
    local_res18[0].Ticks = 0;
    local_res8.Ticks = 0x2bca2875f4373fff;
    local_58.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Array.ArrayNum = 0;
    local_58.Array.ArrayMax = 0;
    pTVar4 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add
                       (&local_58,&this->EngineAddress);
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = (pTVar4->Array).ArrayNum;
    lVar6 = (longlong)local_68.ArrayNum;
    _Src = (pTVar4->Array).AllocatorInstance.Data;
    if (local_68.ArrayNum == 0) {
      local_68.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_68.ArrayNum,0,&local_68.AllocatorInstance,local_68.ArrayNum,
                 &local_68.ArrayMax);
      memcpy(local_68.AllocatorInstance.Data,_Src,lVar6 << 4);
    }
    local_48.Object = (IMessageAttachment *)0x0;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pUVar5 = FEngineServiceExecuteCommand::StaticStruct();
    FMessageEndpoint::Send(this_00,this_01,pUVar5,None,&local_48,&local_68,local_res18,&local_res8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    if (local_58.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Array.AllocatorInstance.Data);
    }
  }
  return;
}

// GetBuildDate @ 148cf20b0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall FSessionInstanceInfo::GetBuildDate(FSessionInstanceInfo *this)

{
  return &this->BuildDate;
}

// GetCurrentLevel @ 148cf20c0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall FSessionInstanceInfo::GetCurrentLevel(FSessionInstanceInfo *this)

{
  return &this->CurrentLevel;
}

// GetDeviceName @ 148cf20d0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall FSessionInstanceInfo::GetDeviceName(FSessionInstanceInfo *this)

{
  return &this->DeviceName;
}

// GetEngineVersion @ 148cf20e0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FSessionInstanceInfo::GetEngineVersion(FSessionInstanceInfo *this)

{
  return this->EngineVersion;
}

// GetInstanceId @ 148cf24b0

/* WARNING: Enum "Type": Some values do not have unique names */

FGuid * __thiscall FSessionInstanceInfo::GetInstanceId(FSessionInstanceInfo *this)

{
  return &this->InstanceId;
}

// GetInstanceName @ 148cf24c0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall FSessionInstanceInfo::GetInstanceName(FSessionInstanceInfo *this)

{
  return &this->InstanceName;
}

// GetInstanceType @ 148cf24d0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall FSessionInstanceInfo::GetInstanceType(FSessionInstanceInfo *this)

{
  return &this->InstanceType;
}

// GetLastUpdateTime @ 148cf2760

/* WARNING: Enum "Type": Some values do not have unique names */

FDateTime * __thiscall FSessionInstanceInfo::GetLastUpdateTime(FSessionInstanceInfo *this)

{
  return &this->LastUpdateTime;
}

// GetLog @ 148cf2770

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedPtr<FSessionLogMessage,1>,TSizedDefaultAllocator<32>_> * __thiscall
FSessionInstanceInfo::GetLog(FSessionInstanceInfo *this)

{
  return &this->LogMessages;
}

// GetOwnerSession @ 148cf2870

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<ISessionInfo,1> * __thiscall
FSessionInstanceInfo::GetOwnerSession
          (FSessionInstanceInfo *this,TSharedPtr<ISessionInfo,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (ISessionInfo *)0x0;
  pTVar1 = (this->Owner).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->Owner).Object;
  }
  return __return_storage_ptr__;
}

// GetPlatformName @ 148cf28c0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall FSessionInstanceInfo::GetPlatformName(FSessionInstanceInfo *this)

{
  return &this->PlatformName;
}

// GetWorldTimeSeconds @ 148cf2bf0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall FSessionInstanceInfo::GetWorldTimeSeconds(FSessionInstanceInfo *this)

{
  return this->WorldTimeSeconds;
}

// HandleSessionLogMessage @ 148cf3770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSessionInstanceInfo::HandleSessionLogMessage
          (FSessionInstanceInfo *this,FSessionServiceLog *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<TSharedPtr<FSessionLogMessage,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  double dVar4;
  Type TVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  longlong *plVar8;
  code *pcVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  FSessionLogMessage *pFVar16;
  FString *pFVar17;
  FSessionLogMessage *pFVar18;
  longlong lVar19;
  uint uVar20;
  FSessionLogMessage *pFVar21;
  FSessionLogMessage *pFVar22;
  TRawPtrProxy<FSessionLogMessage> local_res8;
  FString local_c8;
  FSessionLogMessage *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  FSessionLogMessage *local_a8;
  FSessionLogMessage *local_a0;
  TSharedRef<FSessionLogMessage,1> local_98;
  FString local_88;
  FString local_78;
  FDestructionSentinel local_68;
  FString local_50 [2];
  
  pFVar22 = (FSessionLogMessage *)0x0;
  local_res8.Object = local_res8.Object & 0xffffffff00000000;
  pFVar16 = ::operator_new(0x50);
  pFVar18 = pFVar22;
  if (pFVar16 != (FSessionLogMessage *)0x0) {
    TVar5 = param_1->Verbosity;
    dVar4 = param_1->TimeSeconds;
    pFVar16->Category = param_1->Category;
    uVar20 = (this->InstanceId).B;
    uVar15 = (this->InstanceId).C;
    uVar10 = (this->InstanceId).D;
    (pFVar16->InstanceId).A = (this->InstanceId).A;
    (pFVar16->InstanceId).B = uVar20;
    (pFVar16->InstanceId).C = uVar15;
    (pFVar16->InstanceId).D = uVar10;
    ::FString::FString(&pFVar16->InstanceName,&this->InstanceName);
    if (param_1->Category == (FName)0x0) {
      local_c8.Data.ArrayNum = (param_1->Data).Data.ArrayNum;
      lVar19 = (longlong)local_c8.Data.ArrayNum;
      pFVar6 = (param_1->Data).Data.AllocatorInstance.Data;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_c8.Data.ArrayNum == 0) {
        local_c8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)&local_c8,
                   local_c8.Data.ArrayNum,&local_c8.Data.ArrayMax);
        memcpy(local_c8.Data.AllocatorInstance.Data,pFVar6,lVar19 * 2);
      }
      ::FString::FString(&pFVar16->Text,&local_c8);
      local_50[0].Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
    }
    else {
      pFVar17 = ::FName::ToString(&param_1->Category,local_50);
      ::FString::ConcatFC(&local_78,pFVar17,L": ");
      ::FString::ConcatFF(&local_88,&local_78,&param_1->Data);
      ::FString::FString(&pFVar16->Text,&local_88);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
    }
    FDateTime::Now();
    pFVar16->Verbosity = TVar5;
    pFVar16->TimeSeconds = (double)(float)dVar4;
    pFVar18 = pFVar16;
  }
  local_res8.Object = pFVar18;
  TSharedRef<FSessionLogMessage,1>::TSharedRef<FSessionLogMessage,1><FSessionLogMessage>
            (&local_98,&local_res8);
  pTVar3 = &this->LogMessages;
  local_b8 = local_98.Object;
  pTStack_b0 = local_98.SharedReferenceCount.ReferenceController;
  if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar6 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar6 <= (FScriptContainerElement *)&local_b8) &&
      ((FScriptContainerElement *)&local_b8 < pFVar6 + (longlong)(this->LogMessages).ArrayMax * 0x10
      )) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar14 = (this->LogMessages).ArrayNum;
  piVar1 = &(this->LogMessages).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->LogMessages).ArrayNum = iVar14 + 1;
  pFVar6 = (pTVar3->AllocatorInstance).Data;
  *(FSessionLogMessage **)(pFVar6 + (longlong)iVar14 * 0x10) = local_b8;
  *(TReferenceControllerBase<1> **)(pFVar6 + (longlong)iVar14 * 0x10 + 8) = pTStack_b0;
  pTStack_b0 = (TReferenceControllerBase<1> *)0x0;
  local_b8 = (FSessionLogMessage *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar18 = (FSessionLogMessage *)this->_padding_;
  pFVar16 = pFVar18;
  pFVar21 = pFVar22;
  if (pFVar18 != (FSessionLogMessage *)0x0) {
    uVar20 = (pFVar18->InstanceId).A;
    do {
      pFVar16 = pFVar22;
      if (uVar20 == 0) goto LAB_148cf3a25;
      LOCK();
      uVar15 = (pFVar18->InstanceId).A;
      bVar11 = uVar20 == uVar15;
      if (bVar11) {
        (pFVar18->InstanceId).A = uVar20 + 1;
        uVar15 = uVar20;
      }
      UNLOCK();
      uVar20 = uVar15;
    } while (!bVar11);
    pFVar16 = pFVar18;
    pFVar21 = (FSessionLogMessage *)this->_padding_;
  }
LAB_148cf3a25:
  pFVar18 = (FSessionLogMessage *)&pFVar21->InstanceId;
  if (pFVar21 == (FSessionLogMessage *)0x0) {
    pFVar18 = pFVar22;
  }
  if ((pFVar18 != (FSessionLogMessage *)&this->_padding_) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SharedThis.Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x67f,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (pFVar21 == (FSessionLogMessage *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (pFVar16 != (FSessionLogMessage *)0x0) {
    LOCK();
    (pFVar16->InstanceId).A = (pFVar16->InstanceId).A + 1;
    UNLOCK();
  }
  local_a8 = pFVar21;
  local_a0 = pFVar16;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->LogReceivedEvent,
             (FWriteAccessScope *)&local_68);
  puVar2 = &(this->LogReceivedEvent).field_0x1c;
  *(int *)puVar2 = *(int *)puVar2 + 1;
  bVar11 = false;
  uVar20 = *(int *)&(this->LogReceivedEvent).field_0x10 - 1;
  if (-1 < (int)uVar20) {
    lVar19 = (longlong)(int)uVar20 << 4;
    bVar11 = false;
    do {
      uVar15 = 0;
      if ((int)uVar20 < *(int *)&(this->LogReceivedEvent).field_0x10) {
        uVar15 = ~uVar20 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar7 = *(longlong *)&(this->LogReceivedEvent).field_0x8;
      if (((*(int *)(lVar7 + 8 + lVar19) == 0) ||
          (plVar8 = *(longlong **)(lVar7 + lVar19), plVar8 == (longlong *)0x0)) ||
         (cVar13 = (**(code **)(*plVar8 + 0x68))(plVar8,&local_a8,&local_98), cVar13 == '\0')) {
        bVar11 = true;
      }
      lVar19 = lVar19 + -0x10;
      uVar20 = uVar20 - 1;
    } while (-1 < (int)uVar20);
  }
  puVar2 = &(this->LogReceivedEvent).field_0x1c;
  *(int *)puVar2 = *(int *)puVar2 + -1;
  if (bVar11) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->LogReceivedEvent,false);
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar16);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  return;
}

// IsAuthorized @ 148cf4670

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSessionInstanceInfo::IsAuthorized(FSessionInstanceInfo *this)

{
  return this->Authorized;
}

// OnLogReceived @ 148cf5670

/* WARNING: Enum "Type": Some values do not have unique names */

FLogReceivedEvent * __thiscall FSessionInstanceInfo::OnLogReceived(FSessionInstanceInfo *this)

{
  return &this->LogReceivedEvent;
}

// PlayHasBegun @ 148cf5d00

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSessionInstanceInfo::PlayHasBegun(FSessionInstanceInfo *this)

{
  return this->HasBegunPlay;
}

// Terminate @ 148cfa4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSessionInstanceInfo::Terminate(FSessionInstanceInfo *this)

{
  int *piVar1;
  FMessageEndpoint *this_00;
  FScriptContainerElement *_Src;
  ForAnyElementType _Src_00;
  wchar_t *pwVar2;
  ForAnyElementType *pFVar3;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar4;
  UScriptStruct *pUVar5;
  longlong lVar6;
  FDateTime local_res8;
  FTimespan local_res10;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_58;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_48;
  TSharedPtr<IMessageAttachment,1> local_38;
  
  this_00 = (this->MessageEndpoint).Object;
  if ((this_00 != (FMessageEndpoint *)0x0) &&
     ((((this->EngineAddress).UniqueId.D != 0 || (this->EngineAddress).UniqueId.C != 0) ||
      (this->EngineAddress).UniqueId.B != 0) || (this->EngineAddress).UniqueId.A != 0)) {
    pwVar2 = FWindowsPlatformProcess::UserName(false);
    pFVar3 = FMemory::Malloc(0x10,0);
    ::FString::FString((FString *)&local_48,pwVar2);
    _Src_00.Data = local_48.Array.AllocatorInstance.Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    pFVar3->Data = (FScriptContainerElement *)0x0;
    *(int *)&pFVar3[1].Data = local_48.Array.ArrayNum;
    if (local_48.Array.ArrayNum == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Array.ArrayNum,0,pFVar3,local_48.Array.ArrayNum,piVar1);
      memcpy(pFVar3->Data,_Src_00.Data,(longlong)local_48.Array.ArrayNum * 2);
    }
    if (local_48.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Array.AllocatorInstance.Data);
    }
    local_res10.Ticks = 0;
    local_res8.Ticks = 0x2bca2875f4373fff;
    local_48.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Array.ArrayNum = 0;
    local_48.Array.ArrayMax = 0;
    pTVar4 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add
                       (&local_48,&this->EngineAddress);
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = (pTVar4->Array).ArrayNum;
    lVar6 = (longlong)local_58.ArrayNum;
    _Src = (pTVar4->Array).AllocatorInstance.Data;
    if (local_58.ArrayNum == 0) {
      local_58.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_58.ArrayNum,0,&local_58.AllocatorInstance,local_58.ArrayNum,
                 &local_58.ArrayMax);
      memcpy(local_58.AllocatorInstance.Data,_Src,lVar6 << 4);
    }
    local_38.Object = (IMessageAttachment *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pUVar5 = FEngineServiceTerminate::StaticStruct();
    FMessageEndpoint::Send(this_00,pFVar3,pUVar5,None,&local_38,&local_58,&local_res10,&local_res8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
    if (local_48.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Array.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateFromMessage @ 148cfb480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSessionInstanceInfo::UpdateFromMessage
          (FSessionInstanceInfo *this,FEngineServicePong *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((((param_1->InstanceId).D == (this->InstanceId).D &&
       (param_1->InstanceId).C == (this->InstanceId).C) &&
      (param_1->InstanceId).B == (this->InstanceId).B) &&
      (param_1->InstanceId).A == (this->InstanceId).A) {
    ::FString::operator=(&this->CurrentLevel,&param_1->CurrentLevel);
    puVar3 = (undefined8 *)(**(code **)((longlong)*param_2->Object + 0x48))();
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    (this->EngineAddress).UniqueId.A = (int)uVar1;
    (this->EngineAddress).UniqueId.B = (int)((ulonglong)uVar1 >> 0x20);
    (this->EngineAddress).UniqueId.C = (int)uVar2;
    (this->EngineAddress).UniqueId.D = (int)((ulonglong)uVar2 >> 0x20);
    this->EngineVersion = param_1->EngineVersion;
    this->HasBegunPlay = param_1->HasBegunPlay;
    this->WorldTimeSeconds = param_1->WorldTimeSeconds;
    ::FString::operator=(&this->InstanceType,&param_1->InstanceType);
  }
  return;
}

// UpdateFromMessage @ 148cfb520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSessionInstanceInfo::UpdateFromMessage
          (FSessionInstanceInfo *this,FSessionServicePong *param_1,
          TSharedRef<IMessageContext,1> *param_2)

{
  FScriptContainerElement *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  uint *puVar3;
  FMessageEndpoint *this_00;
  FMessageAddress *pFVar4;
  void *pvVar5;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar6;
  UScriptStruct *pUVar7;
  undefined8 *puVar8;
  FDateTime FVar9;
  longlong lVar10;
  FDateTime local_res8;
  FTimespan local_res10;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> local_68;
  TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_> local_58;
  TSharedPtr<IMessageAttachment,1> local_48;
  
  if ((((param_1->InstanceId).D == (this->InstanceId).D &&
       (param_1->InstanceId).C == (this->InstanceId).C) &&
      (param_1->InstanceId).B == (this->InstanceId).B) &&
      (param_1->InstanceId).A == (this->InstanceId).A) {
    if ((this->MessageEndpoint).Object != (FMessageEndpoint *)0x0) {
      puVar3 = (uint *)(**(code **)((longlong)*param_2->Object + 0x48))();
      if ((((this->ApplicationAddress).UniqueId.D != puVar3[3] ||
           (this->ApplicationAddress).UniqueId.C != puVar3[2]) ||
          (this->ApplicationAddress).UniqueId.B != puVar3[1]) ||
          *puVar3 != (this->ApplicationAddress).UniqueId.A) {
        this_00 = TSharedPtr<FMessageEndpoint,1>::operator->(&this->MessageEndpoint);
        pFVar4 = (FMessageAddress *)(**(code **)((longlong)*param_2->Object + 0x48))();
        pvVar5 = FMemory::Malloc(1,0);
        local_res10.Ticks = 0;
        local_58.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_res8.Ticks = 0x2bca2875f4373fff;
        local_58.Array.ArrayNum = 0;
        local_58.Array.ArrayMax = 0;
        pTVar6 = TArrayBuilder<FMessageAddress,TSizedDefaultAllocator<32>_>::Add(&local_58,pFVar4);
        local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.ArrayNum = (pTVar6->Array).ArrayNum;
        lVar10 = (longlong)local_68.ArrayNum;
        _Src = (pTVar6->Array).AllocatorInstance.Data;
        if (local_68.ArrayNum == 0) {
          local_68.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,local_68.ArrayNum,0,&local_68.AllocatorInstance,local_68.ArrayNum,
                     &local_68.ArrayMax);
          memcpy(local_68.AllocatorInstance.Data,_Src,lVar10 << 4);
        }
        local_48.Object = (IMessageAttachment *)0x0;
        local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pUVar7 = FSessionServiceLogSubscribe::StaticStruct();
        FMessageEndpoint::Send
                  (this_00,pvVar5,pUVar7,None,&local_48,&local_68,&local_res10,&local_res8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
        if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.AllocatorInstance.Data);
        }
        if (local_58.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Array.AllocatorInstance.Data);
        }
      }
    }
    this->Authorized = param_1->Authorized;
    puVar8 = (undefined8 *)(**(code **)((longlong)*param_2->Object + 0x48))();
    uVar1 = *puVar8;
    uVar2 = puVar8[1];
    (this->ApplicationAddress).UniqueId.A = (int)uVar1;
    (this->ApplicationAddress).UniqueId.B = (int)((ulonglong)uVar1 >> 0x20);
    (this->ApplicationAddress).UniqueId.C = (int)uVar2;
    (this->ApplicationAddress).UniqueId.D = (int)((ulonglong)uVar2 >> 0x20);
    ::FString::operator=(&this->BuildDate,&param_1->BuildDate);
    ::FString::operator=(&this->DeviceName,&param_1->DeviceName);
    ::FString::operator=(&this->InstanceName,&param_1->InstanceName);
    ::FString::operator=(&this->PlatformName,&param_1->PlatformName);
    FVar9 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
    (this->LastUpdateTime).Ticks = *FVar9.Ticks;
  }
  return;
}

