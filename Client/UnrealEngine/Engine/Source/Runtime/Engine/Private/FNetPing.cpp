// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// FNetPing @ 148089200

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetPing * __thiscall UE::Net::FNetPing::FNetPing(FNetPing *this,UNetConnection *param_1)

{
  (this->Owner).field0_0x0.DebugPtr = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UNetConnection *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  (this->WeakRemoteAddr).Object = (FInternetAddr *)0x0;
  (this->WeakRemoteAddr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  ::FString::FString(&this->CachedRemoteAddr,L"");
  this->NextRemoteAddrCheckTimestamp = 0.0;
  this->PingTypes = None;
  this->PingAverageTypes[0] = None;
  this->PingAverageTypes[1] = None;
  this->PingAverageTypes[2] = None;
  this->PingAverageTypes[3] = None;
  this->PingAverageStorageIdx[0] = '\0';
  this->PingAverageStorageIdx[1] = '\0';
  this->PingAverageStorageIdx[2] = '\0';
  this->PingAverageStorageIdx[3] = '\0';
  (this->PingNoAverageStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PingNoAverageStorage).ArrayNum = 0;
  (this->PingNoAverageStorage).ArrayMax = 0;
  (this->PingMovingAverageStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PingMovingAverageStorage).ArrayNum = 0;
  (this->PingMovingAverageStorage).ArrayMax = 0;
  (this->PingPlayerStateAvgStorage).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PingPlayerStateAvgStorage).ArrayNum = 0;
  (this->PingPlayerStateAvgStorage).ArrayMax = 0;
  this->NextPingTimerICMPTimestamp = 0.0;
  this->NextPingTimerUDPTimestamp = 0.0;
  (this->NetPingICMP).Object = (FNetPingICMP *)0x0;
  (this->NetPingICMP).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->NetPingUDPQoS).Object = (FNetPingUDPQoS *)0x0;
  (this->NetPingUDPQoS).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OverridePingICMPAddress).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverridePingICMPAddress).Data.ArrayNum = 0;
  (this->OverridePingICMPAddress).Data.ArrayMax = 0;
  (this->OverridePingUDPQoSAddress).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverridePingUDPQoSAddress).Data.ArrayNum = 0;
  (this->OverridePingUDPQoSAddress).Data.ArrayMax = 0;
  this->OverridePingUDPQosPort = -1;
  this->OverridePingAddressCount = 0;
  return this;
}

// ~FNetPing @ 14808e810

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Net::FNetPing::~FNetPing(FNetPing *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FNetPingICMP *pFVar3;
  FNetPingUDPQoS *pFVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  pFVar3 = (this->NetPingICMP).Object;
  if (pFVar3 != (FNetPingICMP *)0x0) {
    *(undefined8 *)&pFVar3->field_0x8 = 0;
  }
  pFVar4 = (this->NetPingUDPQoS).Object;
  if (pFVar4 != (FNetPingUDPQoS *)0x0) {
    *(undefined8 *)&pFVar4->field_0x8 = 0;
  }
  pFVar5 = (this->OverridePingUDPQoSAddress).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->OverridePingICMPAddress).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NetPingUDPQoS).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NetPingICMP).SharedReferenceCount.ReferenceController);
  pFVar5 = (this->PingPlayerStateAvgStorage).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->PingMovingAverageStorage).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->PingNoAverageStorage).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->CachedRemoteAddr).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pTVar6 = (this->WeakRemoteAddr).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014808e8d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      return;
    }
  }
  return;
}

// operator() @ 148090cd0

uchar __thiscall
`UE::Net::FNetPing::Init'::__l2::<lambda_1>::operator()(void *this,EPingAverageType param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)this;
  if (param_1 == None) {
    iVar2 = *(int *)(lVar1 + 0x48);
    if (iVar2 == *(int *)(lVar1 + 0x4c)) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,(ForAnyElementType *)(lVar1 + 0x40),(int *)(lVar1 + 0x4c));
    }
    *(int *)(lVar1 + 0x48) = iVar2 + 1;
    DefaultConstructItems<UE::Net::FNetPing::FNoAverageStorage,int>
              ((void *)((longlong)iVar2 * 0x30 + *(longlong *)(lVar1 + 0x40)),1);
    return (uchar)iVar2;
  }
  if (param_1 == MovingAverage) {
    iVar2 = *(int *)(lVar1 + 0x58);
    if (iVar2 == *(int *)(lVar1 + 0x5c)) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8b8,(ForAnyElementType *)(lVar1 + 0x50),(int *)(lVar1 + 0x5c));
    }
    *(int *)(lVar1 + 0x58) = iVar2 + 1;
    DefaultConstructItems<UE::Net::FNetPing::FMovingAverageStorage,int>
              ((void *)((longlong)iVar2 * 0xb8 + *(longlong *)(lVar1 + 0x50)),1);
    return (uchar)iVar2;
  }
  iVar2 = *(int *)(lVar1 + 0x68);
  if (iVar2 == *(int *)(lVar1 + 0x6c)) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,(ForAnyElementType *)(lVar1 + 0x60),(int *)(lVar1 + 0x6c));
  }
  *(int *)(lVar1 + 0x68) = iVar2 + 1;
  DefaultConstructItems<UE::Net::FNetPing::FPlayerStateAvgStorage,int>
            ((void *)((longlong)iVar2 * 0x50 + *(longlong *)(lVar1 + 0x60)),1);
  return (uchar)iVar2;
}

// operator() @ 1480913d0

bool __thiscall
`UE::Net::FNetPing::HandleNetPingControlMessage'::__l8::<lambda_1>::operator()
          (void *this,FString *param_1)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  iVar2 = (param_1->Data).ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  if (iVar4 < 0x20) {
    pFVar5 = (param_1->Data).AllocatorInstance.Data;
    pFVar6 = pFVar5 + (longlong)iVar2 * 2 + -2;
    if (iVar2 == 0) {
      pFVar6 = pFVar5 + (longlong)iVar2 * 2;
    }
    while( true ) {
      if ((param_1->Data).ArrayNum != iVar2) {
        `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar5 == pFVar6) goto LAB_148091449;
      uVar1 = *(ushort *)pFVar5;
      if ((((uVar1 < 0x30) || (0x39 < uVar1)) && (uVar1 != 0x3a)) && (uVar1 != 0x2e)) break;
      pFVar5 = pFVar5 + 2;
    }
    bVar3 = false;
  }
  else {
LAB_148091449:
    bVar3 = true;
  }
  return bVar3;
}

// CreateNetPing @ 14809d9e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TPimplPtr<UE::Net::FNetPing,0> __cdecl UE::Net::FNetPing::CreateNetPing(UNetConnection *param_1)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  bool bVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  char cVar7;
  FNameEntryId FVar8;
  longlong lVar9;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 *puVar10;
  UObject *in_RDX;
  undefined1 local_res10 [8];
  
  pTVar5 = CVarNetPingEnabled.Ref;
  if ((in_RDX == (UObject *)0x0) ||
     (plVar2 = *(longlong **)&in_RDX[2].field_0x8, plVar2 == (longlong *)0x0)) goto LAB_14809dab7;
  bVar6 = IsInParallelGameThread();
  if (bVar6) {
LAB_14809da39:
    lVar9 = 0;
  }
  else {
    bVar6 = IsInGameThread();
    lVar9 = 4;
    if (bVar6) goto LAB_14809da39;
  }
  iVar1 = *(int *)((longlong)pTVar5->ShadowedValue + lVar9);
  if ((iVar1 == 1) || (iVar1 == 2)) {
    bVar6 = true;
    if (iVar1 != 2) goto LAB_14809da56;
LAB_14809da60:
    bVar4 = true;
  }
  else {
    bVar6 = false;
LAB_14809da56:
    if (iVar1 == 3) goto LAB_14809da60;
    bVar4 = false;
  }
  cVar7 = (**(code **)(*plVar2 + 0x3f8))(plVar2);
  uVar3 = plVar2[0x43];
  FVar8 = FNameEntryId::FromValidEName((EName)local_res10);
  if ((uVar3 == *(uint *)CONCAT44(extraout_var,FVar8.Value)) ||
     (uVar3 = plVar2[0x43], FVar8 = FNameEntryId::FromValidEName((EName)local_res10),
     uVar3 == *(uint *)CONCAT44(extraout_var_00,FVar8.Value))) {
    if (cVar7 == '\0') {
      if (bVar6) {
LAB_14809dadf:
        puVar10 = ::operator_new(0xe0);
        if (puVar10 != (undefined8 *)0x0) {
          puVar10[1] = 0;
          *puVar10 = Core::Private::PimplPtr::DeleterFunc<UE::Net::FNetPing>;
          puVar10[2] = in_RDX;
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(in_RDX);
          }
          puVar10[3] = 0;
          puVar10[4] = 0;
          ::FString::FString((FString *)(puVar10 + 5),L"");
          puVar10[7] = 0;
          *(undefined4 *)(puVar10 + 8) = 0;
          *(undefined1 *)((longlong)puVar10 + 0x44) = 0;
          *(undefined2 *)((longlong)puVar10 + 0x45) = 0;
          *(undefined1 *)((longlong)puVar10 + 0x47) = 0;
          *(undefined4 *)(puVar10 + 9) = 0;
          puVar10[10] = 0;
          puVar10[0xb] = 0;
          puVar10[0xc] = 0;
          puVar10[0xd] = 0;
          puVar10[0xe] = 0;
          puVar10[0xf] = 0;
          puVar10[0x10] = 0;
          puVar10[0x11] = 0;
          puVar10[0x12] = 0;
          puVar10[0x13] = 0;
          puVar10[0x14] = 0;
          puVar10[0x15] = 0;
          puVar10[0x16] = 0;
          puVar10[0x17] = 0;
          puVar10[0x18] = 0;
          puVar10[0x19] = 0;
          *(undefined4 *)(puVar10 + 0x1a) = 0xffffffff;
          *(undefined4 *)((longlong)puVar10 + 0xd4) = 0;
          Init((FNetPing *)(puVar10 + 2));
          param_1->_padding_ = (longlong)(puVar10 + 2);
          return (TPimplPtr<UE::Net::FNetPing,0>)(FNetPing *)param_1;
        }
        Init((FNetPing *)&DAT_00000010);
        param_1->_padding_ = 0x10;
        return (TPimplPtr<UE::Net::FNetPing,0>)(FNetPing *)param_1;
      }
    }
    else if (bVar4) goto LAB_14809dadf;
  }
LAB_14809dab7:
  param_1->_padding_ = 0;
  return (TPimplPtr<UE::Net::FNetPing,0>)(FNetPing *)param_1;
}

// GetICMPAddr @ 1480a4460

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall UE::Net::FNetPing::GetICMPAddr(FNetPing *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  FString local_38;
  FString local_28;
  
  iVar1 = (this->OverridePingICMPAddress).Data.ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  if (iVar4 < 1) {
    pwVar5 = GetRemoteAddr(this);
    pFVar6 = ::FString::FString(&local_28,pwVar5);
    bVar3 = false;
    bVar2 = true;
  }
  else {
    _Src = (this->OverridePingICMPAddress).Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,(ForAnyElementType *)&local_38,iVar1,&local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
    pFVar6 = &local_38;
    bVar3 = true;
    bVar2 = false;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPingStorageBase @ 1480a8780

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAverageStorageBase * __thiscall
UE::Net::FNetPing::GetPingStorageBase(FNetPing *this,EPingType param_1)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAverageStorageBase *pFVar6;
  uint uVar7;
  
  if ((this->PingTypes & param_1) == None) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PingTypes, PingType)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\NetPing.cpp"
                       ,0x295,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FAverageStorageBase *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar2 = 0x1f;
  if (param_1 != None) {
    for (; param_1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  iVar5 = 0;
  if (param_1 != None) {
    iVar5 = iVar2;
  }
  bVar1 = this->PingAverageStorageIdx[iVar5];
  uVar7 = (uint)bVar1;
  if (this->PingAverageTypes[iVar5] == None) {
    if ((this->PingNoAverageStorage).ArrayNum <= (int)uVar7) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FAverageStorageBase *)(*pcVar3)();
        return pFVar6;
      }
    }
    return (FAverageStorageBase *)
           ((this->PingNoAverageStorage).AllocatorInstance.Data + (longlong)(int)(uint)bVar1 * 0x30)
    ;
  }
  if (this->PingAverageTypes[iVar5] != MovingAverage) {
    if ((this->PingPlayerStateAvgStorage).ArrayNum <= (int)uVar7) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FAverageStorageBase *)(*pcVar3)();
        return pFVar6;
      }
    }
    return (FAverageStorageBase *)
           ((this->PingPlayerStateAvgStorage).AllocatorInstance.Data + (ulonglong)bVar1 * 0x50);
  }
  if ((this->PingMovingAverageStorage).ArrayNum <= (int)uVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FAverageStorageBase *)(*pcVar3)();
      return pFVar6;
    }
  }
  return (FAverageStorageBase *)
         ((this->PingMovingAverageStorage).AllocatorInstance.Data + (longlong)(int)uVar7 * 0xb8);
}

// GetPingStorageValues @ 1480a88e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSampleMinMaxAvg * __thiscall
UE::Net::FNetPing::GetPingStorageValues(FNetPing *this,EPingType param_1)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSampleMinMaxAvg *pFVar6;
  uint uVar7;
  
  if ((this->PingTypes & param_1) == None) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(PingTypes, PingType)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\NetPing.cpp"
                       ,0x27d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FSampleMinMaxAvg *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar2 = 0x1f;
  if (param_1 != None) {
    for (; param_1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  iVar5 = 0;
  if (param_1 != None) {
    iVar5 = iVar2;
  }
  bVar1 = this->PingAverageStorageIdx[iVar5];
  uVar7 = (uint)bVar1;
  if (this->PingAverageTypes[iVar5] == None) {
    if ((this->PingNoAverageStorage).ArrayNum <= (int)uVar7) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FSampleMinMaxAvg *)(*pcVar3)();
        return pFVar6;
      }
    }
    return (FSampleMinMaxAvg *)
           ((this->PingNoAverageStorage).AllocatorInstance.Data +
           (longlong)(int)(uint)bVar1 * 0x30 + 8);
  }
  if (this->PingAverageTypes[iVar5] != MovingAverage) {
    if ((this->PingPlayerStateAvgStorage).ArrayNum <= (int)uVar7) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FSampleMinMaxAvg *)(*pcVar3)();
        return pFVar6;
      }
    }
    return (FSampleMinMaxAvg *)
           ((this->PingPlayerStateAvgStorage).AllocatorInstance.Data +
           (ulonglong)bVar1 * 0x50 + 0x28);
  }
  if ((this->PingMovingAverageStorage).ArrayNum <= (int)uVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FSampleMinMaxAvg *)(*pcVar3)();
      return pFVar6;
    }
  }
  return (FSampleMinMaxAvg *)
         ((this->PingMovingAverageStorage).AllocatorInstance.Data + (longlong)(int)uVar7 * 0xb8 + 8)
  ;
}

// GetPingValues @ 1480a8a60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPingValues * __thiscall
UE::Net::FNetPing::GetPingValues
          (FNetPing *this,FPingValues *__return_storage_ptr__,EPingType param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FSampleMinMaxAvg *pFVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  
  __return_storage_ptr__->Current = -1.0;
  __return_storage_ptr__->Min = -1.0;
  __return_storage_ptr__->Max = -1.0;
  if ((this->PingTypes & param_1) != None) {
    pFVar4 = GetPingStorageValues(this,param_1);
    dVar3 = __real_0010000000000000;
    dVar2 = __real_7fefffffffffffff;
    uVar5 = 0;
    uVar6 = 0;
    dVar7 = pFVar4->MinValue;
    if (dVar7 == __real_7fefffffffffffff) {
      dVar7 = 0.0;
    }
    dVar1 = pFVar4->MaxValue;
    if (dVar1 != __real_0010000000000000) {
      uVar5 = SUB84(dVar1,0);
      uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
    }
    if (0 < pFVar4->TotalCount) {
      __return_storage_ptr__->Current = pFVar4->CurrentValue;
    }
    if (dVar7 != dVar2) {
      __return_storage_ptr__->Min = dVar7;
    }
    if ((double)CONCAT44(uVar6,uVar5) != dVar3) {
      __return_storage_ptr__->Max = (double)CONCAT44(uVar6,uVar5);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetRemoteAddr @ 1480aa880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

wchar_t * __thiscall UE::Net::FNetPing::GetRemoteAddr(FNetPing *this)

{
  int iVar1;
  int iVar2;
  LARGE_INTEGER local_res8;
  
  iVar2 = (this->CachedRemoteAddr).Data.ArrayNum;
  iVar1 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  if (iVar1 < 1) {
    QueryPerformanceCounter(&local_res8);
    UpdateRemoteAddr(this,(double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                          __real_4170000000000000);
    iVar2 = (this->CachedRemoteAddr).Data.ArrayNum;
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    if (iVar1 < 1) {
      return L"";
    }
  }
  if (iVar2 == 0) {
    return L"";
  }
  return (wchar_t *)(this->CachedRemoteAddr).Data.AllocatorInstance.Data;
}

// GetUDPQoSAddr @ 1480ab0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
UE::Net::FNetPing::GetUDPQoSAddr(FNetPing *this,FString *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  void *pvVar4;
  ulong64 uVar5;
  wchar_t *pwVar6;
  wchar_t *_Str;
  int iVar7;
  undefined1 auStack_298 [48];
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_298;
  local_268.Base = local_248;
  local_268.End = (wchar_t *)local_48;
  iVar1 = (this->OverridePingUDPQoSAddress).Data.ArrayNum;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  iVar7 = 0;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = iVar7;
  }
  local_268.CurPos = local_248;
  if (iVar2 < 1) {
    _Str = GetRemoteAddr(this);
    if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
      sVar3 = wcslen(_Str);
      iVar7 = (int)sVar3;
    }
    uVar5 = (ulong64)iVar7;
    pwVar6 = local_268.CurPos;
    if (local_268.End < local_268.CurPos + uVar5) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,uVar5);
      pwVar6 = local_268.CurPos;
    }
    goto joined_r0x0001480ab1ce;
  }
  if (iVar1 == 0) {
    _Str = L"";
LAB_1480ab14a:
    sVar3 = wcslen(_Str);
    iVar7 = (int)sVar3;
  }
  else {
    _Str = (wchar_t *)(this->OverridePingUDPQoSAddress).Data.AllocatorInstance.Data;
    if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) goto LAB_1480ab14a;
  }
  uVar5 = (ulong64)iVar7;
  pwVar6 = local_248;
  if (local_48 < local_248 + uVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,uVar5);
    pwVar6 = local_268.CurPos;
  }
joined_r0x0001480ab1ce:
  if (iVar7 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy(pwVar6,_Str,uVar5 * 2);
    pwVar6 = (wchar_t *)((longlong)pvVar4 + uVar5 * 2);
    local_268.CurPos = pwVar6;
  }
  if (local_268.End < pwVar6 + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
    pwVar6 = local_268.CurPos;
  }
  *pwVar6 = L':';
  local_268.CurPos = local_268.CurPos + 1;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_268,L"%i");
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  *local_268.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_268.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return __return_storage_ptr__;
}

// HandleNetPingControlMessage @ 1480abe00

/* WARNING: Enum "ENetPingControlMessage": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Net::FNetPing::HandleNetPingControlMessage
          (UNetConnection *param_1,ENetPingControlMessage param_2,FString *param_3)

{
  UNetDriver *pUVar1;
  UNetConnection *pUVar2;
  FNetPing *this;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  EPingType EVar6;
  uint uVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_68;
  TArray<FString,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((param_1 == (UNetConnection *)0x0) ||
     (pUVar1 = (param_1->Driver).field0_0x0.DebugPtr, pUVar1 == (UNetDriver *)0x0))
  goto LAB_1480ac17d;
  pUVar2 = (pUVar1->ServerConnection).field0_0x0.DebugPtr;
  if ((pUVar2 == (UNetConnection *)0x0) || (pUVar2 != param_1)) {
    if (param_2 != Max) goto LAB_1480ac17d;
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    iVar5 = ::FString::ParseIntoArray(param_3,&local_58,L"=",true);
    if (iVar5 == 2) {
      if ((local_58.ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar4 = ::FString::IsNumeric((FString *)local_58.AllocatorInstance.Data);
      if (bVar4) {
        if ((local_58.ArrayNum < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)(local_58.AllocatorInstance.Data + 8) == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)local_58.AllocatorInstance.Data;
        }
        uVar7 = _wtoi(pwVar9);
        if ((local_58.ArrayNum < 2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar11 = local_58.AllocatorInstance.Data + 0x10;
        if ((((uVar7 & uVar7 - 1) == 0) && (uVar7 < 9)) &&
           (bVar4 = `UE::Net::FNetPing::HandleNetPingControlMessage'::__l8::<lambda_1>::operator()
                              (local_res8,(FString *)pFVar11), bVar4)) {
          if (uVar7 == 4) {
            pFVar8 = ::FString::FString(&local_38,(FString *)pFVar11);
            this_00 = &(param_1->AnalyticsVars).FailedPingAddressesICMP;
            if ((param_1->AnalyticsVars).FailedPingAddressesICMP.ArrayNum < 0x20) {
LAB_1480ac13e:
              TArray<FString,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FString_const_&>
                        (this_00,pFVar8);
            }
          }
          else {
            if (uVar7 != 8) goto LAB_1480ac153;
            pFVar8 = ::FString::FString(&local_28,(FString *)pFVar11);
            if ((param_1->AnalyticsVars).FailedPingAddressesICMP.ArrayNum < 0x20) {
              this_00 = &(param_1->AnalyticsVars).FailedPingAddressesUDP;
              goto LAB_1480ac13e;
            }
          }
          pFVar11 = (pFVar8->Data).AllocatorInstance.Data;
          if (pFVar11 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar11);
          }
        }
      }
    }
LAB_1480ac153:
    DestructItems<FString,int>((FString *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
    FVar10.Data = local_58.AllocatorInstance.Data;
  }
  else {
    if ((param_2 != SetPingAddress) || (this = (pUVar2->NetPing).Ptr, this == (FNetPing *)0x0))
    goto LAB_1480ac17d;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    iVar5 = ::FString::ParseIntoArray(param_3,&local_68,L"=",true);
    if (iVar5 == 2) {
      if ((local_68.ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar4 = ::FString::IsNumeric((FString *)local_68.AllocatorInstance.Data);
      if (bVar4) {
        if ((local_68.ArrayNum < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)(local_68.AllocatorInstance.Data + 8) == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)local_68.AllocatorInstance.Data;
        }
        EVar6 = _wtoi(pwVar9);
        if ((local_68.ArrayNum < 2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar10.Data = local_68.AllocatorInstance.Data;
        if ((((EVar6 & EVar6 - RoundTrip) == None) && (EVar6 < (Max|RoundTrip))) &&
           (bVar4 = `UE::Net::FNetPing::HandleNetPingControlMessage'::__l8::<lambda_1>::operator()
                              (local_res8,(FString *)(local_68.AllocatorInstance.Data + 0x10)),
           bVar4)) {
          pFVar8 = ::FString::FString(&local_48,(FString *)(FVar10.Data + 0x10));
          ServerSetPingAddress(this,EVar6,pFVar8);
        }
      }
    }
    DestructItems<FString,int>((FString *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
    FVar10.Data = local_68.AllocatorInstance.Data;
  }
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
LAB_1480ac17d:
  pFVar11 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  return;
}

// Init @ 1480adca0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Net::FNetPing::Init(FNetPing *this)

{
  int *piVar1;
  void *pvVar2;
  UNetConnection *pUVar3;
  UNetDriver *pUVar4;
  longlong *plVar5;
  FName FVar6;
  code *pcVar7;
  TConsoleVariableData<FString> *pTVar8;
  UEnum *this_00;
  bool bVar9;
  uchar uVar10;
  int iVar11;
  UPackage *pUVar12;
  ulonglong uVar13;
  long64 lVar14;
  long64 lVar15;
  TSharedPtr<UE::Net::Private::FNetPingICMP,1> *pTVar16;
  FSharedReferencer<1> FVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_Ping_RoundTripInclFrame> FVar19;
  FThreadStats *pFVar20;
  FThreadStatsPool *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_Ping_RoundTripExclFrame> FVar22;
  FThreadSafeStaticStat<FStat_STAT_Ping_ICMP> FVar23;
  FThreadSafeStaticStat<FStat_STAT_Ping_UDPQoS> FVar24;
  longlong lVar25;
  longlong lVar26;
  ForAnyElementType FVar27;
  FScriptContainerElement *pFVar28;
  uchar auVar29 [8];
  FNetPingUDPQoS *pFVar30;
  FName local_res8;
  FNetPing *local_res10;
  FName local_res18;
  FName local_res20;
  FString local_138;
  FString local_128;
  TArray<FString,TSizedDefaultAllocator<32>_> local_118;
  FString local_108;
  FString local_f8;
  FNetPingUDPQoS *local_e8;
  FSharedReferencer<1> local_e0;
  FName local_d8;
  FName local_d0;
  FStatMessage local_c8;
  FStatMessage local_b8;
  FStatMessage local_a8;
  FStatMessage local_98;
  FString local_88;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  TSharedPtr<UE::Net::Private::FNetPingICMP,1> local_58;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`UE::Net::FNetPing::Init'::__l2::_dynamic_atexit_destructor_for__LastPingTypesCVar__);
    _Init_thread_footer(&::_TSS0);
  }
  pTVar8 = CVarNetPingTypes.Ref;
  bVar9 = IsInParallelGameThread();
  if (bVar9) {
LAB_1480add19:
    lVar26 = 0;
  }
  else {
    bVar9 = IsInGameThread();
    lVar26 = 0x10;
    if (bVar9) goto LAB_1480add19;
  }
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Data.ArrayNum = *(int *)((longlong)&pTVar8->ShadowedValue[0].Data.ArrayNum + lVar26);
  lVar25 = (longlong)local_138.Data.ArrayNum;
  pvVar2 = *(void **)((longlong)&pTVar8->ShadowedValue[0].Data.AllocatorInstance.Data + lVar26);
  if (local_138.Data.ArrayNum == 0) {
    local_138.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_138.Data.ArrayNum,0,(ForAnyElementType *)&local_138,local_138.Data.ArrayNum
               ,&local_138.Data.ArrayMax);
    memcpy(local_138.Data.AllocatorInstance.Data,pvVar2,lVar25 * 2);
  }
  iVar11 = LastPingTypesCVar.Data.ArrayNum;
  if (iVar11 == local_138.Data.ArrayNum) {
    if (1 < iVar11) {
      iVar11 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)LastPingTypesCVar.Data.AllocatorInstance.Data,
                          (wchar_t *)local_138.Data.AllocatorInstance.Data);
      bVar9 = iVar11 == 0;
      goto LAB_1480addbc;
    }
LAB_1480ae0e2:
    this->PingTypes = LastPingTypes;
    this->PingAverageTypes[0] = LastPingAverageTypes[0];
    this->PingAverageTypes[1] = LastPingAverageTypes[1];
    this->PingAverageTypes[2] = LastPingAverageTypes[2];
    this->PingAverageTypes[3] = LastPingAverageTypes[3];
  }
  else {
    bVar9 = iVar11 + local_138.Data.ArrayNum == 1;
LAB_1480addbc:
    if (bVar9) goto LAB_1480ae0e2;
    iVar11 = local_138.Data.ArrayNum + -1;
    if (local_138.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    ::FString::AssignRange
              (&LastPingTypesCVar,(wchar_t *)local_138.Data.AllocatorInstance.Data,iVar11);
    local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.ArrayNum = 0;
    local_118.ArrayMax = 0;
    local_res8 = (FName)Z_Registration_Info_UEnum_EPingType.OuterSingleton;
    if (Z_Registration_Info_UEnum_EPingType.OuterSingleton == (UEnum *)0x0) {
      pUVar12 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UEnum_EPingType.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_Engine_EPingType,(UObject *)pUVar12,L"EPingType");
    }
    local_res8 = (FName)Z_Registration_Info_UEnum_EPingType.OuterSingleton;
    if (Z_Registration_Info_UEnum_EPingAverageType.OuterSingleton == (UEnum *)0x0) {
      pUVar12 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UEnum_EPingAverageType.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_Engine_EPingAverageType,(UObject *)pUVar12,
                         L"EPingAverageType");
    }
    this_00 = Z_Registration_Info_UEnum_EPingAverageType.OuterSingleton;
    ::FString::ParseIntoArray(&local_138,&local_118,L",",true);
    FVar6 = local_res8;
    uVar13 = (ulonglong)local_118.ArrayNum;
    pFVar28 = local_118.AllocatorInstance.Data + uVar13 * 0x10;
    local_res10 = (FNetPing *)CONCAT44(local_res10._4_4_,local_118.ArrayNum);
    FVar27.Data = local_118.AllocatorInstance.Data;
    while( true ) {
      if (local_118.ArrayNum != (int)uVar13) {
        local_res8 = (FName)((ulonglong)local_res8 & 0xffffffffffffff00);
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (FVar27.Data == pFVar28) break;
      local_128.Data.ArrayNum = *(int *)(FVar27.Data + 8);
      lVar26 = (longlong)local_128.Data.ArrayNum;
      local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pvVar2 = *(void **)FVar27.Data;
      if (local_128.Data.ArrayNum == 0) {
        local_128.Data.ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_128.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
                   local_128.Data.ArrayNum,&local_128.Data.ArrayMax);
        memcpy(local_128.Data.AllocatorInstance.Data,pvVar2,lVar26 * 2);
      }
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.Data.ArrayNum = 0;
      local_108.Data.ArrayMax = 0;
      ::FString::FString(&local_88,L"=");
      bVar9 = ::FString::Split(&local_128,&local_88,&local_f8,&local_108);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (bVar9) {
        lVar14 = UEnum::GetValueByNameString((UEnum *)FVar6,&local_f8,None);
        lVar15 = UEnum::GetValueByNameString(this_00,&local_108,None);
        if ((lVar14 == -1) || (lVar15 == -1)) {
          if (1 < (byte)LogNet._0_1_) {
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          }
        }
        else {
          this->PingTypes = this->PingTypes | (EPingType)lVar14;
          iVar11 = Net::Private::PingTypeToIdx((EPingType)lVar14);
          this->PingAverageTypes[iVar11] = (EPingAverageType)lVar15;
        }
      }
      else if (1 < (byte)LogNet._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      uVar13 = (ulonglong)local_res10 & 0xffffffff;
      FVar27.Data = FVar27.Data + 0x10;
    }
    LastPingTypes = this->PingTypes;
    LastPingAverageTypes[0] = this->PingAverageTypes[0];
    LastPingAverageTypes[1] = this->PingAverageTypes[1];
    LastPingAverageTypes[2] = this->PingAverageTypes[2];
    LastPingAverageTypes[3] = this->PingAverageTypes[3];
    DestructItems<FString,int>((FString *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
    if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
  }
  pFVar30 = (FNetPingUDPQoS *)&DAT_00000010;
  local_res10 = this;
  if ((this->PingTypes & RoundTrip) != None) {
    uVar10 = `UE::Net::FNetPing::Init'::__l2::<lambda_1>::operator()
                       (&local_res10,this->PingAverageTypes[0]);
    this->PingAverageStorageIdx[0] = uVar10;
  }
  if ((this->PingTypes & RoundTripExclFrame) != None) {
    uVar10 = `UE::Net::FNetPing::Init'::__l2::<lambda_1>::operator()
                       (&local_res10,this->PingAverageTypes[1]);
    this->PingAverageStorageIdx[1] = uVar10;
  }
  pUVar3 = (this->Owner).field0_0x0.DebugPtr;
  if (((pUVar3 == (UNetConnection *)0x0) ||
      (pUVar4 = (pUVar3->Driver).field0_0x0.DebugPtr, pUVar4 == (UNetDriver *)0x0)) ||
     (pUVar3 = (pUVar4->ServerConnection).field0_0x0.DebugPtr, pUVar3 == (UNetConnection *)0x0))
  goto LAB_1480ae327;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable((UObject *)pUVar3);
  }
  if ((this->PingTypes & Count) != None) {
    uVar10 = `UE::Net::FNetPing::Init'::__l2::<lambda_1>::operator()
                       (&local_res10,this->PingAverageTypes[2]);
    this->PingAverageStorageIdx[2] = uVar10;
    pTVar16 = Net::Private::FNetPingICMP::GetNetPingICMP(&local_58,pUVar3);
    if (&this->NetPingICMP != pTVar16) {
      (this->NetPingICMP).Object = pTVar16->Object;
      pTVar16->Object = (FNetPingICMP *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->NetPingICMP).SharedReferenceCount,&pTVar16->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if ((this->PingTypes & Max) == None) goto LAB_1480ae327;
  uVar10 = `UE::Net::FNetPing::Init'::__l2::<lambda_1>::operator()
                     (&local_res10,this->PingAverageTypes[3]);
  this->PingAverageStorageIdx[3] = uVar10;
  FVar17.ReferenceController = ::operator_new(0x40);
  if (FVar17.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FVar17.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_1480ae279:
    if (((*(longlong *)&pFVar30->field_0x20 == 0) || (*(longlong *)&pFVar30->field_0x28 == 0)) ||
       (*(int *)(*(longlong *)&pFVar30->field_0x28 + 8) < 1)) {
      if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar17.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(FNetPingUDPQoS **)&pFVar30->field_0x20 = pFVar30;
      if (FVar17.ReferenceController != *(TReferenceControllerBase<1> **)&pFVar30->field_0x28) {
        if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar17.ReferenceController)->WeakReferenceCount =
               (atomic<int>)((int)(FVar17.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = *(longlong **)&pFVar30->field_0x28;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pFVar30->field_0x28 = FVar17.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar17.ReferenceController);
    }
  }
  else {
    (FVar17.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pFVar30 = (FNetPingUDPQoS *)(FVar17.ReferenceController + 1);
    (FVar17.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FVar17.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNetPingUDPQoS_Private_Net_UE___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)&FVar17.ReferenceController[1]._padding_ = 8;
    *(FNetPing **)&FVar17.ReferenceController[1].SharedReferenceCount = this;
    *(undefined2 *)&FVar17.ReferenceController[2]._padding_ = 0;
    FVar17.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    FVar17.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    FVar17.ReferenceController[3]._padding_ = 0;
    FVar17.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    FVar17.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    if (pFVar30 != (FNetPingUDPQoS *)0x0) goto LAB_1480ae279;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar17.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e8 = pFVar30;
  local_e0.ReferenceController = FVar17.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  if (&this->NetPingUDPQoS != (TSharedPtr<UE::Net::Private::FNetPingUDPQoS,1> *)&local_e8) {
    (this->NetPingUDPQoS).Object = pFVar30;
    local_e8 = (FNetPingUDPQoS *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->NetPingUDPQoS).SharedReferenceCount,&local_e0);
    FVar17.ReferenceController = local_e0.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
LAB_1480ae327:
  FVar19 = StatPtr_STAT_Ping_RoundTripInclFrame;
  if (StatPtr_STAT_Ping_RoundTripInclFrame ==
      (FThreadSafeStaticStat<FStat_STAT_Ping_RoundTripInclFrame>)0x0) {
    pFVar18 = ::FName::FName(&local_78,"STAT_Ping_RoundTripInclFrame");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_Ping_RoundTripInclFrame>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Ping_RoundTripInclFrame,*pFVar18,
                        L"Ping (Incl. Frame)","STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,false
                        ,ST_int64,false,false,MCR_Invalid);
  }
  FVar6 = *(FName *)FVar19;
  auVar29 = (uchar  [8])((ulonglong)(this->PingTypes & RoundTrip) - 1);
  local_res8 = FVar6;
  if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    local_c8.NameAndInfo.Number = FVar6.Number & 0xffff8fff | 0x8000;
    local_res18 = FVar6;
    local_c8.StatData.Pad = auVar29;
    local_c8.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar20,&local_c8);
    FStatsTrace::Set(&local_res18,(long64)auVar29);
    if (pFVar20->ScopeCount == 0) {
      FThreadStats::Flush(pFVar20,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar20,false,false);
    }
  }
  FVar22 = StatPtr_STAT_Ping_RoundTripExclFrame;
  if (StatPtr_STAT_Ping_RoundTripExclFrame ==
      (FThreadSafeStaticStat<FStat_STAT_Ping_RoundTripExclFrame>)0x0) {
    pFVar18 = ::FName::FName(&local_70,"STAT_Ping_RoundTripExclFrame");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_Ping_RoundTripExclFrame>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Ping_RoundTripExclFrame,*pFVar18,
                        L"Ping (Excl. Frame)","STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,false
                        ,ST_int64,false,false,MCR_Invalid);
  }
  FVar6 = *(FName *)FVar22;
  auVar29 = (uchar  [8])((ulonglong)((this->PingTypes & RoundTripExclFrame) != None) - 1);
  local_res8 = FVar6;
  if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    local_b8.NameAndInfo.Number = FVar6.Number & 0xffff8fff | 0x8000;
    local_res20 = FVar6;
    local_b8.StatData.Pad = auVar29;
    local_b8.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar20,&local_b8);
    FStatsTrace::Set(&local_res20,(long64)auVar29);
    if (pFVar20->ScopeCount == 0) {
      FThreadStats::Flush(pFVar20,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar20,false,false);
    }
  }
  FVar23 = StatPtr_STAT_Ping_ICMP;
  if (StatPtr_STAT_Ping_ICMP == (FThreadSafeStaticStat<FStat_STAT_Ping_ICMP>)0x0) {
    pFVar18 = ::FName::FName(&local_68,"STAT_Ping_ICMP");
    FVar23 = (FThreadSafeStaticStat<FStat_STAT_Ping_ICMP>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Ping_ICMP,*pFVar18,L"Ping (ICMP)"
                        ,"STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,false,ST_int64,false,false
                        ,MCR_Invalid);
  }
  FVar6 = *(FName *)FVar23;
  auVar29 = (uchar  [8])((ulonglong)((this->PingTypes & Count) != None) - 1);
  local_res8 = FVar6;
  if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    local_a8.NameAndInfo.Number = FVar6.Number & 0xffff8fff | 0x8000;
    local_d8 = FVar6;
    local_a8.StatData.Pad = auVar29;
    local_a8.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar20,&local_a8);
    FStatsTrace::Set(&local_d8,(long64)auVar29);
    if (pFVar20->ScopeCount == 0) {
      FThreadStats::Flush(pFVar20,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar20,false,false);
    }
  }
  FVar24 = StatPtr_STAT_Ping_UDPQoS;
  if (StatPtr_STAT_Ping_UDPQoS == (FThreadSafeStaticStat<FStat_STAT_Ping_UDPQoS>)0x0) {
    pFVar18 = ::FName::FName(&local_60,"STAT_Ping_UDPQoS");
    FVar24 = (FThreadSafeStaticStat<FStat_STAT_Ping_UDPQoS>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Ping_UDPQoS,*pFVar18,
                        L"Ping (UDP QoS)","STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,false,
                        ST_int64,false,false,MCR_Invalid);
  }
  FVar6 = *(FName *)FVar24;
  auVar29 = (uchar  [8])((ulonglong)((this->PingTypes & Max) != None) - 1);
  local_res8 = FVar6;
  if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    local_98.NameAndInfo.Number = FVar6.Number & 0xffff8fff | 0x8000;
    local_d0 = FVar6;
    local_98.StatData.Pad = auVar29;
    local_98.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar20,&local_98);
    FStatsTrace::Set(&local_d0,(long64)auVar29);
    if (pFVar20->ScopeCount == 0) {
      FThreadStats::Flush(pFVar20,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar20,false,false);
    }
  }
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  return;
}

// PingTimerICMP @ 1480bc340

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Net::FNetPing::PingTimerICMP(FNetPing *this,double param_1)

{
  UNetConnection *pUVar1;
  UNetDriver *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  FAverageStorageBase *pFVar7;
  FNetPingICMP *pFVar8;
  FString *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  FString local_58;
  code *local_48 [2];
  undefined **local_38;
  TReferenceControllerBase<1> *local_30;
  TReferenceControllerBase<1> *local_28;
  undefined8 local_20;
  
  if (((((this->PingTypes & Count) != None) && ((this->NetPingICMP).Object != (FNetPingICMP *)0x0))
      && (pUVar1 = (this->Owner).field0_0x0.DebugPtr, pUVar1 != (UNetConnection *)0x0)) &&
     ((pUVar2 = (pUVar1->Driver).field0_0x0.DebugPtr, pUVar2 != (UNetDriver *)0x0 &&
      ((pUVar2->ServerConnection).field0_0x0.DebugPtr != (UNetConnection *)0x0)))) {
    pFVar7 = GetPingStorageBase(this,Count);
    pFVar7->PingCount = pFVar7->PingCount + 1;
    pFVar8 = TSharedPtr<UE::Net::Private::FNetPingICMP,1>::operator->(&this->NetPingICMP);
    pFVar9 = GetICMPAddr(this,&local_58);
    if (pFVar8->field_0x11 == '\0') {
      *(double *)&pFVar8->field_0x18 = param_1;
      pFVar8->field_0x11 = 1;
      pTVar10 = *(TReferenceControllerBase<1> **)&pFVar8->field_0x28;
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      pTVar11 = pTVar10;
      pTVar13 = pTVar12;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        aVar5 = pTVar10->SharedReferenceCount;
        do {
          pTVar11 = pTVar12;
          pTVar13 = (TReferenceControllerBase<1> *)0x0;
          if (aVar5 == (atomic<int>)0x0) goto LAB_1480bc415;
          LOCK();
          aVar6 = pTVar10->SharedReferenceCount;
          bVar14 = aVar5 == aVar6;
          if (bVar14) {
            pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar6 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar6;
        } while (!bVar14);
        pTVar11 = pTVar10;
        pTVar13 = *(TReferenceControllerBase<1> **)&pFVar8->field_0x20;
      }
LAB_1480bc415:
      pTVar10 = pTVar13 + 2;
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        pTVar10 = pTVar12;
      }
      if ((pTVar10 != (TReferenceControllerBase<1> *)&pFVar8->field_0x20) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x67f,L""), bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L"");
        if (bVar14) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L"");
        if (bVar14) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      local_38 = &Core::Private::Function::
                  TFunction_OwnedObject<`UE::Net::Private::FNetPingICMP::Ping'::`5'::<lambda_1>,0,0>
                  ::_vftable_;
      local_20 = 0;
      local_48[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::Net::Private::FNetPingICMP::Ping'::__l5::<lambda_1>,void,FIcmpEchoResult>
                    ::Call;
      local_30 = pTVar13;
      local_28 = pTVar11;
      FIcmp::IcmpEcho(pFVar9,(float)GNetPingICMPInterval,
                      (TFunction<void___cdecl(FIcmpEchoResult)> *)local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  return;
}

// PingTimerUDP @ 1480bc540

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Net::FNetPing::PingTimerUDP(FNetPing *this,double param_1)

{
  UNetConnection *pUVar1;
  UNetDriver *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  FAverageStorageBase *pFVar7;
  FNetPingUDPQoS *pFVar8;
  FString *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  bool bVar14;
  FString local_58;
  code *local_48 [2];
  undefined **local_38;
  TReferenceControllerBase<1> *local_30;
  TReferenceControllerBase<1> *local_28;
  undefined8 local_20;
  
  if (((((this->PingTypes & Max) != None) && ((this->NetPingUDPQoS).Object != (FNetPingUDPQoS *)0x0)
       ) && (pUVar1 = (this->Owner).field0_0x0.DebugPtr, pUVar1 != (UNetConnection *)0x0)) &&
     ((pUVar2 = (pUVar1->Driver).field0_0x0.DebugPtr, pUVar2 != (UNetDriver *)0x0 &&
      ((pUVar2->ServerConnection).field0_0x0.DebugPtr != (UNetConnection *)0x0)))) {
    pFVar7 = GetPingStorageBase(this,Max);
    pFVar7->PingCount = pFVar7->PingCount + 1;
    pFVar8 = TSharedPtr<UE::Net::Private::FNetPingUDPQoS,1>::operator->(&this->NetPingUDPQoS);
    pFVar9 = GetUDPQoSAddr(this,&local_58);
    if (pFVar8->field_0x11 == '\0') {
      *(double *)&pFVar8->field_0x18 = param_1;
      pFVar8->field_0x11 = 1;
      pTVar10 = *(TReferenceControllerBase<1> **)&pFVar8->field_0x28;
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      pTVar11 = pTVar10;
      pTVar13 = pTVar12;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        aVar5 = pTVar10->SharedReferenceCount;
        do {
          pTVar11 = pTVar12;
          pTVar13 = (TReferenceControllerBase<1> *)0x0;
          if (aVar5 == (atomic<int>)0x0) goto LAB_1480bc615;
          LOCK();
          aVar6 = pTVar10->SharedReferenceCount;
          bVar14 = aVar5 == aVar6;
          if (bVar14) {
            pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar6 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar6;
        } while (!bVar14);
        pTVar11 = pTVar10;
        pTVar13 = *(TReferenceControllerBase<1> **)&pFVar8->field_0x20;
      }
LAB_1480bc615:
      pTVar10 = pTVar13 + 2;
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        pTVar10 = pTVar12;
      }
      if ((pTVar10 != (TReferenceControllerBase<1> *)&pFVar8->field_0x20) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("SharedThis.Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x67f,L""), bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L"");
        if (bVar14) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L"");
        if (bVar14) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      local_38 = &Core::Private::Function::
                  TFunction_OwnedObject<`UE::Net::Private::FNetPingUDPQoS::Ping'::`5'::<lambda_1>,0,0>
                  ::_vftable_;
      local_20 = 0;
      local_48[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::Net::Private::FNetPingUDPQoS::Ping'::__l5::<lambda_1>,void,FIcmpEchoResult>
                    ::Call;
      local_30 = pTVar13;
      local_28 = pTVar11;
      FUDPPing::UDPEcho(pFVar9,(float)GNetPingUDPInterval,
                        (TFunction<void___cdecl(FIcmpEchoResult)> *)local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    pFVar3 = (pFVar9->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  return;
}

// ResetPingValues @ 1480cc880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Net::FNetPing::ResetPingValues(FNetPing *this,EPingType param_1)

{
  byte bVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint local_res10;
  
  if ((this->PingTypes & param_1) != None) {
    local_res10 = 0x1f;
    if (param_1 != None) {
      for (; param_1 >> local_res10 == 0; local_res10 = local_res10 - 1) {
      }
    }
    uVar5 = 0;
    if (param_1 != None) {
      uVar5 = local_res10;
    }
    bVar1 = this->PingAverageStorageIdx[(int)uVar5];
    uVar6 = (uint)bVar1;
    if (this->PingAverageTypes[(int)uVar5] == None) {
      if ((this->PingNoAverageStorage).ArrayNum <= (int)uVar6) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->PingNoAverageStorage).AllocatorInstance.Data;
      *(undefined8 *)(pFVar2 + (longlong)(int)(uint)bVar1 * 0x30) = 0;
      FSampleMinMaxAvg::Reset((FSampleMinMaxAvg *)(pFVar2 + (longlong)(int)(uint)bVar1 * 0x30 + 8));
      return;
    }
    if (this->PingAverageTypes[(int)uVar5] == MovingAverage) {
      if ((this->PingMovingAverageStorage).ArrayNum <= (int)uVar6) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->PingMovingAverageStorage).AllocatorInstance.Data;
      lVar7 = (longlong)(int)uVar6 * 0xb8;
      *(undefined8 *)(pFVar2 + lVar7) = 0;
      FSampleMinMaxAvg::Reset((FSampleMinMaxAvg *)(pFVar2 + lVar7 + 8));
      FBinnedMovingValueBase::Reset((FBinnedMovingValueBase *)(pFVar2 + lVar7 + 0x30));
      return;
    }
    if ((this->PingPlayerStateAvgStorage).ArrayNum <= (int)uVar6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->PingPlayerStateAvgStorage).AllocatorInstance.Data;
    lVar7 = (ulonglong)bVar1 * 0x50;
    *(undefined8 *)(pFVar2 + lVar7) = 0;
    FSampleMinMaxAvg::Reset((FSampleMinMaxAvg *)(pFVar2 + lVar7 + 0x28));
    pFVar2[lVar7 + 8] = (FScriptContainerElement)0x0;
    local_res10 = local_res10 & 0xfff8e000;
    *(uint *)(pFVar2 + lVar7 + 10) = local_res10;
    *(uint *)(pFVar2 + lVar7 + 0xe) = local_res10;
    *(uint *)(pFVar2 + lVar7 + 0x12) = local_res10;
    *(uint *)(pFVar2 + lVar7 + 0x16) = local_res10;
    *(undefined8 *)(pFVar2 + lVar7 + 0x20) = 0;
  }
  return;
}

// ServerSetPingAddress @ 1480d2400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Net::FNetPing::ServerSetPingAddress(FNetPing *this,EPingType param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  wchar_t *_Str;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  if (((this->PingTypes & param_1) != None) && (this->OverridePingAddressCount < 8)) {
    this->OverridePingAddressCount = this->OverridePingAddressCount + 1;
    if (param_1 == Count) {
      iVar4 = ::FString::Find(param_2,L":",1,IgnoreCase,FromStart,-1);
      if (iVar4 == -1) {
        if (4 < (byte)LogNet._0_1_) {
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        iVar5 = (param_2->Data).ArrayNum;
        iVar4 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar4 = 0;
        }
        ::FString::AssignRange
                  (&this->OverridePingICMPAddress,(wchar_t *)(param_2->Data).AllocatorInstance.Data,
                   iVar4);
        ResetPingValues(this,Count);
      }
      else if (2 < (byte)LogNet._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
    }
    else if (param_1 == Max) {
      iVar4 = (param_2->Data).ArrayNum;
      iVar5 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      if (0 < iVar5) {
        local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_18.ArrayNum = 0;
        local_18.ArrayMax = 0;
        iVar4 = ::FString::ParseIntoArray(param_2,&local_18,L":",true);
        if (iVar4 < 3) {
          iVar4 = local_18.ArrayNum;
          if (local_18.ArrayNum < 1) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar4 = local_18.ArrayNum;
          }
          iVar5 = *(int *)(local_18.AllocatorInstance.Data + 8) + -1;
          if (*(int *)(local_18.AllocatorInstance.Data + 8) == 0) {
            iVar5 = 0;
          }
          if (0 < iVar5) {
            if ((iVar4 < 1) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar4 = *(int *)(local_18.AllocatorInstance.Data + 8) + -1;
            if (*(int *)(local_18.AllocatorInstance.Data + 8) == 0) {
              iVar4 = 0;
            }
            ::FString::AssignRange
                      (&this->OverridePingUDPQoSAddress,*(wchar_t **)local_18.AllocatorInstance.Data
                       ,iVar4);
            iVar4 = local_18.ArrayNum;
          }
          if ((iVar4 == 2) &&
             (bVar3 = ::FString::IsNumeric((FString *)(local_18.AllocatorInstance.Data + 0x10)),
             bVar3)) {
            if ((local_18.ArrayNum < 2) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (*(int *)(local_18.AllocatorInstance.Data + 0x18) == 0) {
              _Str = L"";
            }
            else {
              _Str = *(wchar_t **)(local_18.AllocatorInstance.Data + 0x10);
            }
            iVar4 = _wtoi(_Str);
            this->OverridePingUDPQosPort = iVar4;
          }
          if (4 < (byte)LogNet._0_1_) {
            Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          }
          ResetPingValues(this,Max);
        }
        else if (2 < (byte)LogNet._0_1_) {
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
        if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.AllocatorInstance.Data);
        }
      }
    }
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// TickRealtime @ 1480dbf90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Net::FNetPing::TickRealtime(FNetPing *this,double param_1)

{
  int iVar1;
  int iVar2;
  FPingValues local_58 [3];
  
  iVar1 = (this->CachedRemoteAddr).Data.ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if ((0 < iVar2) &&
     (this->NextRemoteAddrCheckTimestamp <= param_1 && param_1 != this->NextRemoteAddrCheckTimestamp
     )) {
    UpdateRemoteAddr(this,param_1);
  }
  if (((this->PingTypes & Count) != None) &&
     (this->NextPingTimerICMPTimestamp <= param_1 && param_1 != this->NextPingTimerICMPTimestamp)) {
    this->NextPingTimerICMPTimestamp = (double)GNetPingICMPInterval + param_1;
    PingTimerICMP(this,param_1);
  }
  if (((this->PingTypes & Max) != None) &&
     (this->NextPingTimerUDPTimestamp <= param_1 && param_1 != this->NextPingTimerUDPTimestamp)) {
    this->NextPingTimerUDPTimestamp = (double)GNetPingUDPInterval + param_1;
    PingTimerUDP(this,param_1);
  }
  if ((GNetPingDebugDump != 0) && (__real_4014000000000000 < param_1 - LastDebugPingDump)) {
    LastDebugPingDump = param_1;
    if (4 < (byte)LogNet._0_1_) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    if (((this->PingTypes & RoundTrip) != None) &&
       (GetPingStorageValues(this,RoundTrip), 4 < (byte)LogNet._0_1_)) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    if (((this->PingTypes & RoundTripExclFrame) != None) &&
       (GetPingValues(this,local_58,RoundTripExclFrame), 4 < (byte)LogNet._0_1_)) {
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    if ((this->PingTypes & Count) != None) {
      GetPingValues(this,local_58,Count);
      GetPingStorageBase(this,Count);
      if (4 < (byte)LogNet._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
    }
    if ((this->PingTypes & Max) != None) {
      GetPingValues(this,local_58,Max);
      GetPingStorageBase(this,Max);
      if (4 < (byte)LogNet._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
    }
  }
  return;
}

// UpdatePing @ 1480e0650

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Net::FNetPing::UpdatePing(FNetPing *this,EPingType param_1,double param_2,double param_3)

{
  int *piVar1;
  byte bVar2;
  FScriptContainerElement *pFVar3;
  double *pdVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_Ping_UpdatePingTime> FVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FSampleMinMaxAvg *this_02;
  FName FVar14;
  uint uVar15;
  longlong lVar16;
  FPlayerStateAvgStorage *this_03;
  uint uVar17;
  double dVar18;
  FColor_u_0 local_res10 [2];
  FName local_a8;
  LARGE_INTEGER local_a0;
  FName local_98;
  FName local_90;
  TOptional<double> local_80;
  FStatMessage local_70 [3];
  
  FVar13 = StatPtr_STAT_Ping_UpdatePingTime;
  if (StatPtr_STAT_Ping_UpdatePingTime == (FThreadSafeStaticStat<FStat_STAT_Ping_UpdatePingTime>)0x0
     ) {
    pFVar12 = ::FName::FName(&local_98,"STAT_Ping_UpdatePingTime");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Ping_UpdatePingTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Ping_UpdatePingTime,*pFVar12,
                        L"UpdatePing Time","STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar13;
  bVar7 = false;
  bVar9 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  if ((FVar14.ComparisonIndex.Value.Value == 0) && (FVar14.Number == 0)) {
LAB_1480e07b0:
    bVar8 = false;
    FVar14 = local_90;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_a8.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\NetPing.cpp"
                   ,0x1d5);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1480e07b0;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar8 = true;
  }
  if ((this->PingTypes & param_1) != None) {
    iVar5 = 0x1f;
    if (param_1 != None) {
      for (; param_1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar11 = 0;
    if (param_1 != None) {
      iVar11 = iVar5;
    }
    bVar2 = this->PingAverageStorageIdx[iVar11];
    uVar15 = (uint)bVar2;
    uVar17 = (uint)((param_1 & (Max|Count)) == None);
    if (this->PingAverageTypes[iVar11] == None) {
      if ((this->PingNoAverageStorage).ArrayNum <= (int)uVar15) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar3 = (this->PingNoAverageStorage).AllocatorInstance.Data;
      lVar16 = (longlong)(int)(uint)bVar2 * 0x30;
      this_02 = (FSampleMinMaxAvg *)(pFVar3 + lVar16 + 8);
      if (param_3 < this_02->MinValue) {
        this_02->MinValue = param_3;
      }
      if (this_02->MaxValue <= param_3 && param_3 != this_02->MaxValue) {
        this_02->MaxValue = param_3;
      }
      FSampleMinMaxAvg::AddSample_Internal(this_02,param_3);
      *(uint *)(pFVar3 + lVar16) = *(int *)(pFVar3 + lVar16) + uVar17;
      dVar18 = *(double *)(pFVar3 + lVar16 + 0x18);
    }
    else {
      if (this->PingAverageTypes[iVar11] == MovingAverage) {
        if ((this->PingMovingAverageStorage).ArrayNum <= (int)uVar15) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pFVar3 = (this->PingMovingAverageStorage).AllocatorInstance.Data;
        lVar16 = (longlong)(int)uVar15 * 0xb8;
        pdVar4 = *(double **)(pFVar3 + lVar16 + 0x70);
        local_80.bIsSet = false;
        if (pdVar4 != (double *)0x0) {
          if (param_3 < *pdVar4) {
            *pdVar4 = param_3;
          }
          if (pdVar4[1] <= param_3 && param_3 != pdVar4[1]) {
            pdVar4[1] = param_3;
          }
        }
        FBinnedMovingValueBase::AddMeasurement_Implementation
                  ((FBinnedMovingValueBase *)(pFVar3 + lVar16 + 0x30),param_2,param_3,&local_80);
        if ((local_80.bIsSet != false) &&
           (*(FSampleMinMaxAvg **)(pFVar3 + lVar16 + 0x70) != (FSampleMinMaxAvg *)0x0)) {
          FSampleMinMaxAvg::AddSample_Internal
                    (*(FSampleMinMaxAvg **)(pFVar3 + lVar16 + 0x70),local_80.TypedValue);
        }
        *(uint *)(pFVar3 + lVar16) = *(int *)(pFVar3 + lVar16) + uVar17;
        UpdatePingStats(this,param_1,*(double *)(pFVar3 + lVar16 + 0x18));
        goto LAB_1480e09b9;
      }
      if ((this->PingPlayerStateAvgStorage).ArrayNum <= (int)uVar15) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      this_03 = (FPlayerStateAvgStorage *)
                ((this->PingPlayerStateAvgStorage).AllocatorInstance.Data + (ulonglong)bVar2 * 0x50)
      ;
      FPlayerStateAvgStorage::UpdatePing(this_03,param_2,(float)param_3);
      *(uint *)&this_03->_padding_ = (int)this_03->_padding_ + uVar17;
      dVar18 = *(double *)&(this_03->PingValues).field_0x10;
    }
    UpdatePingStats(this,param_1,dVar18);
  }
LAB_1480e09b9:
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_70[0].NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_70[0].NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_70[0].StatData.Pad[4] = '\0';
      local_70[0].StatData.Pad[5] = '\0';
      local_70[0].StatData.Pad[6] = '\0';
      local_70[0].StatData.Pad[7] = '\0';
      local_70[0].StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_70[0].StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_70[0].StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_70[0].StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_70);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
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

// UpdatePingStats @ 1480e0c70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Net::FNetPing::UpdatePingStats(FNetPing *this,EPingType param_1,double param_2)

{
  FName FVar1;
  double dVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_Ping_RoundTripInclFrame> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FThreadSafeStaticStat<FStat_STAT_Ping_RoundTripExclFrame> FVar5;
  FAverageStorageBase *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_Ping_ICMP> FVar7;
  FThreadSafeStaticStat<FStat_STAT_Ping_UDPQoS> FVar8;
  FThreadSafeStaticStat<FStat_STAT_PingTimeoutPercent_UDPQoS> FVar9;
  FThreadSafeStaticStat<FStat_STAT_PingTimeoutPercent_ICMP> *this_02;
  int iVar10;
  wchar_t *pwVar11;
  FName local_res18;
  FStatMessage local_28 [2];
  
  iVar10 = (int)(longlong)(param_2 * __real_408f400000000000);
  if (param_1 == RoundTrip) {
    FVar4 = StatPtr_STAT_Ping_RoundTripInclFrame;
    if (StatPtr_STAT_Ping_RoundTripInclFrame ==
        (FThreadSafeStaticStat<FStat_STAT_Ping_RoundTripInclFrame>)0x0) {
      pFVar3 = ::FName::FName(&local_res18,"STAT_Ping_RoundTripInclFrame");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_Ping_RoundTripInclFrame>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Ping_RoundTripInclFrame,*pFVar3,
                         L"Ping (Incl. Frame)","STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,
                         false,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar4;
    if (FVar1 == (FName)0x0) {
      return;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return;
    }
    local_res18 = FVar1;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_28[0].NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
    local_res18 = FVar1;
    local_28[0].StatData.Pad = (uchar  [8])(longlong)iVar10;
    local_28[0].NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,local_28);
    FStatsTrace::Set(&local_res18,(longlong)iVar10);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
      return;
    }
    if (FThreadStats::bIsRawStatsActive == false) {
      return;
    }
    FThreadStats::FlushRawStats(this_00,false,false);
    return;
  }
  if (param_1 == RoundTripExclFrame) {
    FVar5 = StatPtr_STAT_Ping_RoundTripExclFrame;
    if (StatPtr_STAT_Ping_RoundTripExclFrame ==
        (FThreadSafeStaticStat<FStat_STAT_Ping_RoundTripExclFrame>)0x0) {
      pFVar3 = ::FName::FName(&local_res18,"STAT_Ping_RoundTripExclFrame");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_Ping_RoundTripExclFrame>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Ping_RoundTripExclFrame,*pFVar3,
                         L"Ping (Excl. Frame)","STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,
                         false,ST_int64,false,false,MCR_Invalid);
    }
    local_res18 = *(FName *)FVar5;
    FThreadStats::AddMessage<__int64>(local_res18,Set,(longlong)iVar10,false);
    return;
  }
  pFVar6 = GetPingStorageBase(this,param_1);
  dVar2 = 0.0;
  if (pFVar6->PingTimeouts != 0) {
    dVar2 = ((double)pFVar6->PingTimeouts / (double)pFVar6->PingCount) * __real_4059000000000000;
  }
  if (param_1 == Count) {
    FVar7 = StatPtr_STAT_Ping_ICMP;
    if (StatPtr_STAT_Ping_ICMP == (FThreadSafeStaticStat<FStat_STAT_Ping_ICMP>)0x0) {
      pFVar3 = ::FName::FName(&local_res18,"STAT_Ping_ICMP");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_Ping_ICMP>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Ping_ICMP,*pFVar3,L"Ping (ICMP)"
                         ,"STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,false,ST_int64,false,
                         false,MCR_Invalid);
    }
    local_res18 = *(FName *)FVar7;
    FThreadStats::AddMessage<__int64>(local_res18,Set,(longlong)iVar10,false);
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_PingTimeoutPercent_UDPQoS>)
            StatPtr_STAT_PingTimeoutPercent_ICMP;
    if (StatPtr_STAT_PingTimeoutPercent_ICMP !=
        (FThreadSafeStaticStat<FStat_STAT_PingTimeoutPercent_ICMP>)0x0) goto LAB_1480e10c0;
    pFVar3 = ::FName::FName(&local_res18,"STAT_PingTimeoutPercent_ICMP");
    pwVar11 = L"Ping Timeout Percent (ICMP)";
    this_02 = &StatPtr_STAT_PingTimeoutPercent_ICMP;
  }
  else {
    if (param_1 != Max) {
      return;
    }
    FVar8 = StatPtr_STAT_Ping_UDPQoS;
    if (StatPtr_STAT_Ping_UDPQoS == (FThreadSafeStaticStat<FStat_STAT_Ping_UDPQoS>)0x0) {
      pFVar3 = ::FName::FName(&local_res18,"STAT_Ping_UDPQoS");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_Ping_UDPQoS>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Ping_UDPQoS,*pFVar3,
                         L"Ping (UDP QoS)","STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,false,
                         ST_int64,false,false,MCR_Invalid);
    }
    local_res18 = *(FName *)FVar8;
    FThreadStats::AddMessage<__int64>(local_res18,Set,(longlong)iVar10,false);
    FVar9 = StatPtr_STAT_PingTimeoutPercent_UDPQoS;
    if (StatPtr_STAT_PingTimeoutPercent_UDPQoS !=
        (FThreadSafeStaticStat<FStat_STAT_PingTimeoutPercent_UDPQoS>)0x0) goto LAB_1480e10c0;
    pFVar3 = ::FName::FName(&local_res18,"STAT_PingTimeoutPercent_UDPQoS");
    pwVar11 = L"Ping Timeout Percent (UDP QoS)";
    this_02 = (FThreadSafeStaticStat<FStat_STAT_PingTimeoutPercent_ICMP> *)
              &StatPtr_STAT_PingTimeoutPercent_UDPQoS;
  }
  FVar9 = (FThreadSafeStaticStat<FStat_STAT_PingTimeoutPercent_UDPQoS>)
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)this_02,*pFVar3,pwVar11,"STATGROUP_Ping",
                     "STATCAT_Advanced",L"Ping",true,false,NumBits,false,false,MCR_Invalid);
LAB_1480e10c0:
  local_res18 = *(FName *)FVar9;
  FThreadStats::AddMessage<double>(local_res18,Set,dVar2,false);
  return;
}

// UpdatePingTimeout @ 1480e1120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENetPingControlMessage": Some values do not have unique names */

void __thiscall UE::Net::FNetPing::UpdatePingTimeout(FNetPing *this,EPingType param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Ping_UpdatePingTime> FVar9;
  LARGE_INTEGER LVar10;
  FScriptContainerElement *pFVar11;
  FString *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_Ping_ICMP> FVar13;
  FThreadSafeStaticStat<FStat_STAT_Ping_UDPQoS> FVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER LVar15;
  FScriptContainerElement *pFVar16;
  FColor_u_0 FVar17;
  LARGE_INTEGER local_res8;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  undefined8 local_78;
  FSharedReferencer<1> FStack_70;
  undefined8 local_68;
  FSharedReferencer<1> FStack_60;
  FStatMessage local_58;
  FString local_48;
  
  pFVar16 = (FScriptContainerElement *)0x0;
  FVar17.Bits = 0;
  FVar9 = StatPtr_STAT_Ping_UpdatePingTime;
  if (StatPtr_STAT_Ping_UpdatePingTime == (FThreadSafeStaticStat<FStat_STAT_Ping_UpdatePingTime>)0x0
     ) {
    pFVar8 = ::FName::FName(&local_res18,"STAT_Ping_UpdatePingTime");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_Ping_UpdatePingTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Ping_UpdatePingTime,*pFVar8,
                       L"UpdatePing Time","STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  LVar15 = *(LARGE_INTEGER *)FVar9;
  bVar2 = false;
  bVar4 = false;
  if ((LVar15.s.LowPart == 0) && (LVar15.s.HighPart == 0)) {
LAB_1480e125e:
    bVar3 = false;
    LVar15._0_4_ = 0;
    LVar15._4_4_ = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\NetPing.cpp"
                   ,0x209);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1480e125e;
    local_res8 = LVar15;
    FThreadStats::AddMessage((FName)LVar15.s,CycleScopeStart);
    bVar3 = true;
  }
  if ((this->PingTypes & param_1) == None) goto LAB_1480e1625;
  LVar10 = (LARGE_INTEGER)GetPingStorageBase(this,param_1);
  *(int *)(LVar10.QuadPart + 4) = *(int *)(LVar10.QuadPart + 4) + 1;
  local_res8 = LVar10;
  UpdateTimeoutStats(this,param_1,*(uint *)(LVar10.QuadPart + 4),
                     ((double)*(uint *)(LVar10.QuadPart + 4) / (double)*(uint *)LVar10) *
                     __real_4059000000000000);
  pTVar5 = CVarNetPingTimeoutDisableThreshold.Ref;
  if (*(int *)(LVar10.QuadPart + 4) != *(int *)LVar10) goto LAB_1480e1625;
  bVar6 = IsInParallelGameThread();
  if (bVar6) {
LAB_1480e12e2:
    pFVar11 = pFVar16;
  }
  else {
    bVar6 = IsInGameThread();
    pFVar11 = (FScriptContainerElement *)&DAT_00000004;
    if (bVar6) goto LAB_1480e12e2;
  }
  if (*(uint *)(pFVar11 + (longlong)pTVar5) <= *(uint *)(LVar10.QuadPart + 4)) {
    if (param_1 == Count) {
      pFVar12 = GetICMPAddr(this,(FString *)&local_58);
      local_res10[0].Bits = 0;
      if (&local_48 != pFVar12) {
        pFVar16 = (pFVar12->Data).AllocatorInstance.Data;
        (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_res10[0] = (FColor_u_0)(pFVar12->Data).ArrayNum;
        (pFVar12->Data).ArrayNum = 0;
        (pFVar12->Data).ArrayMax = 0;
      }
      FVar17 = local_res10[0];
      if (local_58.StatData.Pad != (uchar  [8])0x0) {
        FMemory::Free((void *)local_58.StatData.Pad);
      }
      if (2 < (byte)LogNet._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      FVar13 = StatPtr_STAT_Ping_ICMP;
      if (StatPtr_STAT_Ping_ICMP == (FThreadSafeStaticStat<FStat_STAT_Ping_ICMP>)0x0) {
        pFVar8 = ::FName::FName((FName *)&local_res8.s,"STAT_Ping_ICMP");
        FVar13 = (FThreadSafeStaticStat<FStat_STAT_Ping_ICMP>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Ping_ICMP,*pFVar8,
                            L"Ping (ICMP)","STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,false,
                            ST_int64,false,false,MCR_Invalid);
      }
      local_res8.s = *(_struct_19 *)FVar13;
      FThreadStats::AddMessage<__int64>((FName)local_res8.s,Set,-2,false);
      local_78 = 0;
      FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->NetPingICMP != (TSharedPtr<UE::Net::Private::FNetPingICMP,1> *)&local_78) {
        (this->NetPingICMP).Object = (FNetPingICMP *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->NetPingICMP).SharedReferenceCount,&FStack_70);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_70.ReferenceController);
    }
    else if (param_1 == Max) {
      pFVar12 = GetUDPQoSAddr(this,(FString *)&local_58);
      local_res10[0].Bits = 0;
      if (&local_48 != pFVar12) {
        pFVar16 = (pFVar12->Data).AllocatorInstance.Data;
        (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_res10[0] = (FColor_u_0)(pFVar12->Data).ArrayNum;
        (pFVar12->Data).ArrayNum = 0;
        (pFVar12->Data).ArrayMax = 0;
      }
      FVar17 = local_res10[0];
      if (local_58.StatData.Pad != (uchar  [8])0x0) {
        FMemory::Free((void *)local_58.StatData.Pad);
      }
      if (2 < (byte)LogNet._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      FVar14 = StatPtr_STAT_Ping_UDPQoS;
      if (StatPtr_STAT_Ping_UDPQoS == (FThreadSafeStaticStat<FStat_STAT_Ping_UDPQoS>)0x0) {
        pFVar8 = ::FName::FName((FName *)&local_res8.s,"STAT_Ping_UDPQoS");
        FVar14 = (FThreadSafeStaticStat<FStat_STAT_Ping_UDPQoS>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Ping_UDPQoS,*pFVar8,
                            L"Ping (UDP QoS)","STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,false
                            ,ST_int64,false,false,MCR_Invalid);
      }
      local_res8.s = *(_struct_19 *)FVar14;
      FThreadStats::AddMessage<__int64>((FName)local_res8.s,Set,-2,false);
      local_68 = 0;
      FStack_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->NetPingUDPQoS != (TSharedPtr<UE::Net::Private::FNetPingUDPQoS,1> *)&local_68) {
        (this->NetPingUDPQoS).Object = (FNetPingUDPQoS *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->NetPingUDPQoS).SharedReferenceCount,&FStack_60);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_60.ReferenceController);
    }
    this->PingTypes = this->PingTypes & ~param_1;
    iVar7 = FVar17.Bits - 1;
    if (FVar17.Bits == 0) {
      iVar7 = 0;
    }
    if ((0 < iVar7) && ((this->Owner).field0_0x0.DebugPtr != (UNetConnection *)0x0)) {
      local_res10[0]._s_0.B = 1;
      ::FString::PrintfImpl((FString *)&local_58,L"%i=%s");
      TNetControlMessageImpl<24,enum_ENetPingControlMessage,FString>::Send
                ((this->Owner).field0_0x0.DebugPtr,(ENetPingControlMessage *)&local_res10[0].Bits,
                 (FString *)&local_58);
      if (local_58.StatData.Pad != (uchar  [8])0x0) {
        FMemory::Free((void *)local_58.StatData.Pad);
      }
    }
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
  }
LAB_1480e1625:
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && ((FName)LVar15.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Index.Value = LVar15.s.LowPart;
      local_58.NameAndInfo.Number = LVar15.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_58.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
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

// UpdateRemoteAddr @ 1480e1840

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Net::FNetPing::UpdateRemoteAddr(FNetPing *this,double param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  UNetConnection *pUVar3;
  TObjectPtr<UNetDriver>_u_0 TVar4;
  UObject *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  FScriptContainerElement *pFVar7;
  atomic<int> aVar8;
  undefined8 *puVar9;
  TReferenceControllerBase<1> *pTVar10;
  FString *pFVar11;
  FInternetAddr *pFVar12;
  bool bVar13;
  FInternetAddr *local_28;
  TReferenceControllerBase<1> *local_20;
  void *local_18 [2];
  
  pUVar3 = (this->Owner).field0_0x0.DebugPtr;
  this->NextRemoteAddrCheckTimestamp = param_1 + __real_3ff0000000000000;
  if ((pUVar3 != (UNetConnection *)0x0) &&
     (TVar4 = (pUVar3->Driver).field0_0x0, TVar4.DebugPtr != (UNetDriver *)0x0)) {
    pUVar5 = *(UObject **)((longlong)TVar4 + 0x100);
    if (GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar5 == (UObject *)0x0) {
        return;
      }
      GC::MarkAsReachable(pUVar5);
    }
    if (pUVar5 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar5 + 0x338))(pUVar5,&local_28);
      pTVar10 = (this->WeakRemoteAddr).WeakReferenceCount.ReferenceController;
      pFVar12 = (FInternetAddr *)0x0;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        aVar2 = pTVar10->SharedReferenceCount;
        do {
          if (aVar2 == (atomic<int>)0x0) {
            pTVar10 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_1480e18e4;
          }
          LOCK();
          aVar8 = pTVar10->SharedReferenceCount;
          bVar13 = aVar2 == aVar8;
          if (bVar13) {
            pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar8 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar8;
        } while (!bVar13);
        pFVar12 = (this->WeakRemoteAddr).Object;
      }
LAB_1480e18e4:
      bVar13 = local_28 != pFVar12;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      pTVar10 = local_20;
      if (bVar13) {
        (this->WeakRemoteAddr).Object = local_28;
        if (local_20 != (this->WeakRemoteAddr).WeakReferenceCount.ReferenceController) {
          if (local_20 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_20->WeakReferenceCount = (atomic<int>)((int)local_20->WeakReferenceCount + 1);
            UNLOCK();
          }
          pTVar6 = (this->WeakRemoteAddr).WeakReferenceCount.ReferenceController;
          if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &pTVar6->WeakReferenceCount;
            aVar2 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar2 == (atomic<int>)0x1) {
              (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
            }
          }
          (this->WeakRemoteAddr).WeakReferenceCount.ReferenceController = pTVar10;
        }
        puVar9 = (undefined8 *)(**(code **)(*(longlong *)pUVar5 + 0x2d0))(pUVar5,local_18,0);
        pFVar11 = &this->CachedRemoteAddr;
        if (pFVar11 != (FString *)puVar9) {
          pFVar7 = (pFVar11->Data).AllocatorInstance.Data;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
          (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar9;
          *puVar9 = 0;
          (this->CachedRemoteAddr).Data.ArrayNum = *(int *)(puVar9 + 1);
          (this->CachedRemoteAddr).Data.ArrayMax = *(int *)((longlong)puVar9 + 0xc);
          puVar9[1] = 0;
        }
        if (local_18[0] != (void *)0x0) {
          FMemory::Free(local_18[0]);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    }
  }
  return;
}

// UpdateTimeoutStats @ 1480e2ba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Net::FNetPing::UpdateTimeoutStats(FNetPing *this,EPingType param_1,uint param_2,double param_3)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_PingTimeouts_ICMP> FVar3;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FThreadSafeStaticStat<FStat_STAT_PingTimeouts_UDPQoS> FVar4;
  FThreadSafeStaticStat<FStat_STAT_PingTimeoutPercent_UDPQoS> FVar5;
  FThreadSafeStaticStat<FStat_STAT_PingTimeoutPercent_ICMP> *this_02;
  wchar_t *pwVar6;
  uchar auVar7 [8];
  FName local_48;
  FStatMessage local_40 [2];
  
  auVar7[4] = '\0';
  auVar7[5] = '\0';
  auVar7[6] = '\0';
  auVar7[7] = '\0';
  auVar7._0_4_ = param_2;
  if (param_1 == Count) {
    FVar3 = StatPtr_STAT_PingTimeouts_ICMP;
    if (StatPtr_STAT_PingTimeouts_ICMP == (FThreadSafeStaticStat<FStat_STAT_PingTimeouts_ICMP>)0x0)
    {
      pFVar2 = ::FName::FName(&local_48,"STAT_PingTimeouts_ICMP");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_PingTimeouts_ICMP>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PingTimeouts_ICMP,*pFVar2,
                         L"Ping Timeouts (ICMP)","STATGROUP_Ping","STATCAT_Advanced",L"Ping",true,
                         false,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar3;
    local_48 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_40[0].NameAndInfo.Number = FVar1.Number & 0xffff8fff | 0x8000;
      local_48 = FVar1;
      local_40[0].StatData.Pad = auVar7;
      local_40[0].NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,local_40);
      FStatsTrace::Set(&local_48,(long64)auVar7);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_PingTimeoutPercent_UDPQoS>)
            StatPtr_STAT_PingTimeoutPercent_ICMP;
    if (StatPtr_STAT_PingTimeoutPercent_ICMP !=
        (FThreadSafeStaticStat<FStat_STAT_PingTimeoutPercent_ICMP>)0x0) goto LAB_1480e2e61;
    pFVar2 = ::FName::FName(&local_48,"STAT_PingTimeoutPercent_ICMP");
    pwVar6 = L"Ping Timeout Percent (ICMP)";
    this_02 = &StatPtr_STAT_PingTimeoutPercent_ICMP;
  }
  else {
    if (param_1 != Max) {
      return;
    }
    FVar4 = StatPtr_STAT_PingTimeouts_UDPQoS;
    if (StatPtr_STAT_PingTimeouts_UDPQoS ==
        (FThreadSafeStaticStat<FStat_STAT_PingTimeouts_UDPQoS>)0x0) {
      pFVar2 = ::FName::FName(&local_48,"STAT_PingTimeouts_UDPQoS");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_PingTimeouts_UDPQoS>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PingTimeouts_UDPQoS,*pFVar2,
                         L"Ping Timeouts (UDP QoS)","STATGROUP_Ping","STATCAT_Advanced",L"Ping",true
                         ,false,ST_int64,false,false,MCR_Invalid);
    }
    local_48 = *(FName *)FVar4;
    FThreadStats::AddMessage<__int64>(local_48,Set,(long64)auVar7,false);
    FVar5 = StatPtr_STAT_PingTimeoutPercent_UDPQoS;
    if (StatPtr_STAT_PingTimeoutPercent_UDPQoS !=
        (FThreadSafeStaticStat<FStat_STAT_PingTimeoutPercent_UDPQoS>)0x0) goto LAB_1480e2e61;
    pFVar2 = ::FName::FName(&local_48,"STAT_PingTimeoutPercent_UDPQoS");
    pwVar6 = L"Ping Timeout Percent (UDP QoS)";
    this_02 = (FThreadSafeStaticStat<FStat_STAT_PingTimeoutPercent_ICMP> *)
              &StatPtr_STAT_PingTimeoutPercent_UDPQoS;
  }
  FVar5 = (FThreadSafeStaticStat<FStat_STAT_PingTimeoutPercent_UDPQoS>)
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)this_02,*pFVar2,pwVar6,"STATGROUP_Ping",
                     "STATCAT_Advanced",L"Ping",true,false,NumBits,false,false,MCR_Invalid);
LAB_1480e2e61:
  local_48 = *(FName *)FVar5;
  FThreadStats::AddMessage<double>(local_48,Set,param_3,false);
  return;
}

