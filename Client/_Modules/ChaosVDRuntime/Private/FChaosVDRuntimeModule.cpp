// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 37

// StartupModule @ 1436cc740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FChaosVDRuntimeModule::StartupModule(FChaosVDRuntimeModule *this)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  FString *pFVar6;
  ForElementType<FString> FVar7;
  undefined1 auStackY_98 [32];
  FString local_68;
  ForElementType<FString> local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<FString_const_,int> local_48;
  ForElementType<FString> local_38;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pwVar4 = FCommandLine::Get();
  bVar3 = FParse::Param(pwVar4,L"StartCVDRecording");
  if (bVar3) {
    local_38.SecondaryData = (ForElementType<FString>)0x0;
    local_20 = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_1c = 1;
    pwVar4 = FCommandLine::Get();
    bVar3 = FParse::Value(pwVar4,L"CVDHost=",&local_68,true,(wchar_t **)0x0);
    if (bVar3) {
      if (local_20 == local_1c) {
        local_20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                             (0x810,&local_38,&local_1c);
      }
      FVar7 = (ForElementType<FString>)&local_38;
      if (local_38.SecondaryData != (ForElementType<FString>)0x0) {
        FVar7 = local_38.SecondaryData;
      }
      lVar5 = (longlong)local_20;
      local_20 = local_20 + 1;
      ::FString::FString((FString *)(lVar5 * 0x10 + (longlong)FVar7),L"Server");
      if (local_20 == local_1c) {
        local_20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FString>_>
                             (0x810,&local_38,&local_1c);
      }
      FVar7 = (ForElementType<FString>)&local_38;
      if (local_38.SecondaryData != (ForElementType<FString>)0x0) {
        FVar7 = local_38.SecondaryData;
      }
      pFVar6 = (FString *)((longlong)local_20 * 0x10 + (longlong)FVar7);
      local_20 = local_20 + 1;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar6->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar6->Data).ArrayNum = local_68.Data.ArrayNum;
      (pFVar6->Data).ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    iVar2 = local_20;
    local_58 = (ForElementType<FString>)&local_38;
    if (local_38.SecondaryData != (ForElementType<FString>)0x0) {
      local_58 = local_38.SecondaryData;
    }
    if (local_20 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iStack_50 = iVar2;
    local_48._12_4_ = uStack_4c;
    local_48.ArrayNum = iVar2;
    local_48.DataPtr = (FString *)local_58;
    StartRecording(this,&local_48);
    FVar7 = (ForElementType<FString>)&local_38;
    if (local_38.SecondaryData != (ForElementType<FString>)0x0) {
      FVar7 = local_38.SecondaryData;
    }
    DestructItems<FString,int>((FString *)FVar7,local_20);
    if (local_38.SecondaryData != (ForElementType<FString>)0x0) {
      FMemory::Free((void *)local_38.SecondaryData);
    }
  }
  else {
    UE::Trace::ToggleChannel(L"ChaosVDChannel",false);
  }
  return;
}

// ShutdownModule @ 1436cc930

void __thiscall FChaosVDRuntimeModule::ShutdownModule(FChaosVDRuntimeModule *this)

{
  if (this->bIsRecording != false) {
    StopRecording(this);
  }
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &FTraceAuxiliary::OnTraceStopped,this);
  return;
}

// <lambda_invoker_cdecl> @ 1436d0370

void __cdecl
`FChaosVDRuntimeModule::SaveAndDisabledCurrentEnabledTraceChannels'::__l2::<lambda_1>::
<lambda_invoker_cdecl>(char *param_1,bool param_2,void *param_3)

{
  char local_res10 [8];
  TPairInitializer<FString_const_&,bool_const_&> local_res18;
  FString local_28;
  FString *local_18;
  char *local_10;
  
  local_res10[0] = param_2;
  ::FString::FString(&local_28,param_1);
  local_18 = &local_28;
  local_10 = local_res10;
  TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FString_const_&,bool_const_&>_>(param_3,&local_res18,(bool *)&local_18);
  if (local_res10[0] != '\0') {
    UE::Trace::ToggleChannel((wchar_t *)local_28.Data.AllocatorInstance.Data,false);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// ~FChaosVDRuntimeModule @ 1436d5930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChaosVDRuntimeModule::~FChaosVDRuntimeModule(FChaosVDRuntimeModule *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  FRelayTraceWriter *this_00;
  FBufferArchive *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->TraceConnectionDetailsUpdatedDelegate).field_0x8,
             *(int *)&(this->TraceConnectionDetailsUpdatedDelegate).field_0x10);
  pvVar3 = *(void **)&(this->TraceConnectionDetailsUpdatedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TraceConnectionDetailsUpdatedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ExternalTraceStatusDelegate);
  pvVar3 = *(void **)&(this->ExternalTraceStatusDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ExternalTraceStatusDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ExternalRelayExecutorDelegate);
  pvVar3 = *(void **)&(this->ExternalRelayExecutorDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ExternalRelayExecutorDelegate);
  this_00 = (this->RelayWriter).Ptr;
  if (this_00 != (FRelayTraceWriter *)0x0) {
    if ((0 < (longlong)this_00->QueuedBytesNum) && (2 < (byte)LogChaosVDRuntime._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
    }
    LOCK();
    this_00->bClosed = (atomic<bool>)0x1;
    UNLOCK();
    pFVar4 = (this_00->CurrentPendingBunch).Ptr;
    if (pFVar4 != (FBufferArchive *)0x0) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
    TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::
    ~TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>
              (&this_00->PendingBunchesToRelay);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
    pvVar3 = *(void **)&(this_00->NewDataAvailableDelegate).field_0x8;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this_00);
    ::operator_delete(this_00,0x60);
  }
  *(undefined4 *)&(this->OriginalTraceChannelsState).field_0x48 = 0;
  pvVar3 = *(void **)&(this->OriginalTraceChannelsState).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OriginalTraceChannelsState);
  pTVar5 = (this->RelayExecutorTickerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pTVar5 = (this->RecordingTimerHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pTVar5 = (this->FullCaptureRequesterHandle).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  return;
}

// ClearRelayDataPumpDelegates @ 1436d7b20

void __thiscall FChaosVDRuntimeModule::ClearRelayDataPumpDelegates(FChaosVDRuntimeModule *this)

{
  undefined8 *puVar1;
  FRelayTraceWriter *this_00;
  FDestructionSentinel FStack_28;
  
  this_00 = (this->RelayWriter).Ptr;
  if (this_00 == (FRelayTraceWriter *)0x0) {
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&FStack_28);
  if ((*(int *)&(this_00->NewDataAvailableDelegate).field_0x10 != 0) &&
     (puVar1 = *(undefined8 **)&(this_00->NewDataAvailableDelegate).field_0x8,
     puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this_00->NewDataAvailableDelegate).field_0x8,0,0,0x10);
    *(undefined4 *)&(this_00->NewDataAvailableDelegate).field_0x10 = 0;
  }
  if (FStack_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
  }
  return;
}

// EnableRequiredTraceChannels @ 1436d8da0

void __thiscall FChaosVDRuntimeModule::EnableRequiredTraceChannels(FChaosVDRuntimeModule *this)

{
  UE::Trace::ToggleChannel(L"ChaosVDChannel",true);
  UE::Trace::ToggleChannel(L"Frame",true);
  UE::Trace::ToggleChannel(L"Log",true);
  return;
}

// GenerateRecordingFileName @ 1436d9040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FChaosVDRuntimeModule::GenerateRecordingFileName(FChaosVDRuntimeModule *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  EBuildTargetType EVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  FDateTime this_00;
  undefined1 auStackY_108 [32];
  FString local_c8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_b8;
  FString local_a0;
  FString local_90;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  FStringFormatArg local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar3 = ::FString::FString(&local_a0,GInternalProjectName);
  FStringFormatArg::FStringFormatArg(&local_78,pFVar3);
  EVar2 = FApp::GetBuildTargetType();
  pwVar4 = ::LexToString(EVar2);
  FStringFormatArg::FStringFormatArg(&local_58,pwVar4);
  this_00 = FDateTime::Now();
  pFVar3 = FDateTime::ToString((FDateTime *)this_00.Ticks,&local_90,L"%Y%m%d_%H%M%S");
  FStringFormatArg::FStringFormatArg(&local_38,pFVar3);
  local_b8.ArrayNum = 3;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,3,0,&local_b8.AllocatorInstance,3,&local_b8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_b8.AllocatorInstance.Data,&local_78,3)
  ;
  if (local_38.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
  }
  ::FString::FormatImpl(&local_c8,L"ChaosVD-{0}-{1}-{2}.utrace",&local_b8);
  if (param_1 != &local_c8) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
    (param_1->Data).ArrayNum = local_c8.Data.ArrayNum;
    (param_1->Data).ArrayMax = local_c8.Data.ArrayMax;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if ((FStringFormatArg *)local_b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  return;
}

// GenerateUniqueID @ 1436d91e0

int __thiscall FChaosVDRuntimeModule::GenerateUniqueID(FChaosVDRuntimeModule *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  
  LOCK();
  paVar1 = &this->LastGeneratedID;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  return (int)aVar2;
}

// Get @ 1436d9200

FChaosVDRuntimeModule * __cdecl FChaosVDRuntimeModule::Get(void)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this;
  FChaosVDRuntimeModule *pFVar3;
  FName local_res8 [4];
  
  FModuleManager::Get();
  pFVar2 = ::FName::FName(local_res8,L"ChaosVDRuntime");
  FVar1 = *pFVar2;
  this = FModuleManager::Get();
  pFVar3 = (FChaosVDRuntimeModule *)FModuleManager::LoadModuleChecked(this,FVar1);
  return pFVar3;
}

// GetCurrentTraceSessionDetails @ 1436d9280

FChaosVDTraceDetails * __thiscall
FChaosVDRuntimeModule::GetCurrentTraceSessionDetails
          (FChaosVDRuntimeModule *this,FChaosVDTraceDetails *__return_storage_ptr__)

{
  EChaosVDRecordingMode EVar1;
  EChaosVDTransportMode EVar2;
  longlong *plVar3;
  char cVar4;
  bool bVar5;
  FString *pFVar6;
  longlong *plVar7;
  void *local_78 [4];
  FGuid local_58;
  FGuid local_48;
  FString local_38;
  undefined4 local_28;
  EChaosVDTransportMode local_24;
  FScriptContainerElement *local_20;
  undefined8 local_18;
  bool local_10;
  
  plVar7 = (longlong *)0x0;
  local_58.A = 0;
  local_58.B = 0;
  local_58.C = 0;
  local_58.D = 0;
  local_48.A = 0;
  local_48.B = 0;
  local_48.C = 0;
  local_48.D = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_28 = 0;
  local_24 = Invalid;
  local_20 = (FScriptContainerElement *)0x0;
  local_18 = 0;
  local_10 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ExternalTraceStatusDelegate,(FReadAccessScope *)local_78);
  if (((*(int *)&(this->ExternalTraceStatusDelegate).field_0x10 == 0) ||
      (plVar3 = *(longlong **)&(this->ExternalTraceStatusDelegate).field_0x8,
      plVar3 == (longlong *)0x0)) || (cVar4 = (**(code **)(*plVar3 + 0x38))(), cVar4 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_78);
    bVar5 = FTraceAuxiliary::IsConnected(&local_48,&local_58);
    if (bVar5) {
      pFVar6 = FTraceAuxiliary::GetTraceDestinationString((FString *)local_78);
      if (&local_38 != pFVar6) {
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        local_38.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_38.Data.ArrayNum = (pFVar6->Data).ArrayNum;
        local_38.Data.ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
      if (local_78[0] != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78[0]);
      }
      EVar1 = this->CurrentRecordingMode;
      EVar2 = this->CurrentTransportMode;
      (__return_storage_ptr__->TraceGuid).A = local_58.A;
      (__return_storage_ptr__->TraceGuid).B = local_58.B;
      (__return_storage_ptr__->TraceGuid).C = local_58.C;
      (__return_storage_ptr__->TraceGuid).D = local_58.D;
      (__return_storage_ptr__->SessionGuid).A = local_48.A;
      (__return_storage_ptr__->SessionGuid).B = local_48.B;
      (__return_storage_ptr__->SessionGuid).C = local_48.C;
      (__return_storage_ptr__->SessionGuid).D = local_48.D;
      (__return_storage_ptr__->TraceTarget).Data.AllocatorInstance.Data =
           local_38.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->TraceTarget).Data.ArrayNum = local_38.Data.ArrayNum;
      (__return_storage_ptr__->TraceTarget).Data.ArrayMax = local_38.Data.ArrayMax;
      __return_storage_ptr__->Port = (ushort)local_28;
      __return_storage_ptr__->bIsConnected = local_28._2_1_;
      __return_storage_ptr__->Mode = EVar1;
      __return_storage_ptr__->TransportMode = EVar2;
      (__return_storage_ptr__->CertAuth).AllocatorInstance.Data = local_20;
      (__return_storage_ptr__->CertAuth).ArrayNum = (int)local_18;
      (__return_storage_ptr__->CertAuth).ArrayMax = local_18._4_4_;
      __return_storage_ptr__->bIsValid = true;
    }
    else {
      (__return_storage_ptr__->TraceGuid).A = local_58.A;
      (__return_storage_ptr__->TraceGuid).B = local_58.B;
      (__return_storage_ptr__->TraceGuid).C = local_58.C;
      (__return_storage_ptr__->TraceGuid).D = local_58.D;
      (__return_storage_ptr__->SessionGuid).A = local_48.A;
      (__return_storage_ptr__->SessionGuid).B = local_48.B;
      (__return_storage_ptr__->SessionGuid).C = local_48.C;
      (__return_storage_ptr__->SessionGuid).D = local_48.D;
      (__return_storage_ptr__->TraceTarget).Data.AllocatorInstance.Data =
           local_38.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->TraceTarget).Data.ArrayNum = local_38.Data.ArrayNum;
      (__return_storage_ptr__->TraceTarget).Data.ArrayMax = local_38.Data.ArrayMax;
      __return_storage_ptr__->Port = (ushort)local_28;
      __return_storage_ptr__->bIsConnected = local_28._2_1_;
      __return_storage_ptr__->Mode = local_28._3_1_;
      __return_storage_ptr__->TransportMode = local_24;
      (__return_storage_ptr__->CertAuth).AllocatorInstance.Data = local_20;
      (__return_storage_ptr__->CertAuth).ArrayNum = (int)local_18;
      (__return_storage_ptr__->CertAuth).ArrayMax = local_18._4_4_;
      __return_storage_ptr__->bIsValid = local_10;
    }
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ExternalTraceStatusDelegate,(FReadAccessScope *)local_78);
  if (*(int *)&(this->ExternalTraceStatusDelegate).field_0x10 != 0) {
    plVar7 = *(longlong **)&(this->ExternalTraceStatusDelegate).field_0x8;
  }
  (**(code **)(*plVar7 + 0x60))(plVar7,__return_storage_ptr__);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_78);
  if (local_20 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20);
  }
  if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free(local_38.Data.AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// GetLastRecordingFileNamePath @ 1436d9740

FString * __thiscall
FChaosVDRuntimeModule::GetLastRecordingFileNamePath
          (FChaosVDRuntimeModule *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// HandleTraceConnectionEstablished @ 1436d9800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChaosVDRuntimeModule::HandleTraceConnectionEstablished(FChaosVDRuntimeModule *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  FTSTicker *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TWeakPtr<FTSTicker::FElement,1> *pTVar8;
  int iVar9;
  int iVar10;
  int *local_res8;
  int local_res10 [2];
  TWeakPtr<FTSTicker::FElement,1> local_98;
  undefined1 local_88 [8];
  FDelegateAllocation local_80;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  
  if (4 < (byte)LogChaosVDRuntime._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
  }
  if ((this->OnConnectionDelegateHandle).ID != 0) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               &FTraceAuxiliary::OnConnection,this);
    (this->OnConnectionDelegateHandle).ID = 0;
  }
  if ((this->bIsRecording == false) &&
     (bVar4 = `FChaosVDRuntimeModule::HandleTraceConnectionEstablished'::__l24::<lambda_1>::
              operator()(&local_res8), !bVar4)) {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)&DelegatesRWLock);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&RecordingStartedDelegate);
  ReleaseSRWLockShared((PSRWLOCK)&DelegatesRWLock);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->TraceConnectionDetailsUpdatedDelegate);
  local_res10[0] = (**(code **)(*(longlong *)CVarChaosVDGTimeBetweenFullCaptures._8_8_ + 200))();
  if (local_res10[0] < 2) {
    local_res8 = local_res10;
    `FChaosVDRuntimeModule::HandleTraceConnectionEstablished'::__l2::<lambda_2>::operator()
              (&local_res8);
  }
  pFVar5 = FTSTicker::GetCoreTicker();
  local_88 = (undefined1  [8])0x0;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  iVar10 = 0x7fffffff;
  if (local_res10[0] < 0x7fffffff) {
    iVar10 = local_res10[0];
  }
  local_80.DelegateSize = 0;
  iVar9 = 1;
  if (1 < iVar10) {
    iVar9 = iVar10;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_70);
  local_58 = &local_80;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_80);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    puVar6[4] = RequestFullCapture;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDRuntimeModule____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  pTVar8 = FTSTicker::AddTicker
                     (pFVar5,&local_98,
                      (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_88,
                      (float)iVar9);
  if (&this->FullCaptureRequesterHandle != pTVar8) {
    (this->FullCaptureRequesterHandle).Object = pTVar8->Object;
    pTVar8->Object = (FElement *)0x0;
    pTVar3 = (this->FullCaptureRequesterHandle).WeakReferenceCount.ReferenceController;
    (this->FullCaptureRequesterHandle).WeakReferenceCount.ReferenceController =
         (pTVar8->WeakReferenceCount).ReferenceController;
    (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  if (local_98.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_98.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_98.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_98.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_70);
  if ((local_80.DelegateSize != 0) &&
     (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_80.DelegateAllocator)();
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
  pFVar5 = FTSTicker::GetCoreTicker();
  local_88 = (undefined1  [8])0x0;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_80.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_70);
  local_58 = &local_80;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_80);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    puVar6[4] = RecordingTimerTick;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDRuntimeModule____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[3] = this;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  pTVar8 = FTSTicker::AddTicker
                     (pFVar5,&local_98,
                      (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_88,0.0);
  if (&this->RecordingTimerHandle != pTVar8) {
    (this->RecordingTimerHandle).Object = pTVar8->Object;
    pTVar8->Object = (FElement *)0x0;
    pTVar3 = (this->RecordingTimerHandle).WeakReferenceCount.ReferenceController;
    (this->RecordingTimerHandle).WeakReferenceCount.ReferenceController =
         (pTVar8->WeakReferenceCount).ReferenceController;
    (pTVar8->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  if (local_98.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_98.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_98.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_98.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_70);
  if ((local_80.DelegateSize != 0) &&
     (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_80.DelegateAllocator)();
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
  AcquireSRWLockShared((PSRWLOCK)&DelegatesRWLock);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&PostRecordingStartedDelegate);
  ReleaseSRWLockShared((PSRWLOCK)&DelegatesRWLock);
  return;
}

// HandleTraceStopRequest @ 1436d9c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRuntimeModule::HandleTraceStopRequest
          (FChaosVDRuntimeModule *this,EConnectionType param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bIsRecording == false) {
    this->bRequestedStop = false;
    return;
  }
  if (this->bRequestedStop == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5502411211406310919>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosVisualDebugger\\Private\\ChaosVDRuntimeModule.cpp"
                       ,0x1f9,"bRequestedStop");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (2 < (byte)LogChaosVDRuntime._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
    }
  }
  StopRecording(this);
  this->bRequestedStop = false;
  return;
}

// IsLoaded @ 1436d9e10

bool __cdecl FChaosVDRuntimeModule::IsLoaded(void)

{
  bool bVar1;
  FModuleManager *this;
  FName *pFVar2;
  FName local_res8 [4];
  
  this = FModuleManager::Get();
  pFVar2 = ::FName::FName(local_res8,L"ChaosVDRuntime");
  bVar1 = FModuleManager::IsModuleLoaded(this,*pFVar2);
  return bVar1;
}

// RecordingTimerTick @ 1436d9ed0

bool __thiscall FChaosVDRuntimeModule::RecordingTimerTick(FChaosVDRuntimeModule *this,float param_1)

{
  if (this->bIsRecording != false) {
    this->AccumulatedRecordingTime = param_1 + this->AccumulatedRecordingTime;
  }
  return true;
}

// RegisterExternalRelayExecutor @ 1436d9ef0

void __thiscall
FChaosVDRuntimeModule::RegisterExternalRelayExecutor
          (FChaosVDRuntimeModule *this,
          TDelegate<void___cdecl(Chaos::VD::FRelayTraceWriter_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegate<void___cdecl(Chaos::VD::FRelayTraceWriter_&),FDefaultDelegateUserPolicy> *this_00;
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  this_00 = &this->ExternalRelayExecutorDelegate;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)&local_20);
  if (((*(int *)&(this->ExternalRelayExecutorDelegate).field_0x10 == 0) ||
      (plVar1 = *(longlong **)&(this->ExternalRelayExecutorDelegate).field_0x8,
      plVar1 == (longlong *)0x0)) || (cVar2 = (**(code **)(*plVar1 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    bVar3 = `FChaosVDRuntimeModule::RegisterExternalRelayExecutor'::__l3::<lambda_1>::operator()
                      (local_res8);
    if (!bVar3) {
      return;
    }
  }
  if (param_1 != this_00) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return;
}

// RegisterExternalTraceStatusProvider @ 1436da030

void __thiscall
FChaosVDRuntimeModule::RegisterExternalTraceStatusProvider
          (FChaosVDRuntimeModule *this,
          TDelegate<FChaosVDTraceDetails___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  longlong *plVar1;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  if (param_1 != &this->ExternalTraceStatusDelegate) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ExternalTraceStatusDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return;
}

// RelayTraceData @ 1436da130

void __thiscall FChaosVDRuntimeModule::RelayTraceData(FChaosVDRuntimeModule *this)

{
  FRelayTraceWriter *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  longlong *plVar5;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ExternalRelayExecutorDelegate,&local_38);
  if ((*(int *)&(this->ExternalRelayExecutorDelegate).field_0x10 != 0) &&
     (plVar5 = *(longlong **)&(this->ExternalRelayExecutorDelegate).field_0x8,
     plVar5 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar5 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      pFVar1 = (this->RelayWriter).Ptr;
      if (pFVar1 != (FRelayTraceWriter *)0x0) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->ExternalRelayExecutorDelegate,&local_20);
        if (*(int *)&(this->ExternalRelayExecutorDelegate).field_0x10 == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)&(this->ExternalRelayExecutorDelegate).field_0x8;
        }
        (**(code **)(*plVar5 + 0x60))(plVar5,pFVar1);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_20);
        return;
      }
      goto LAB_1436da1c3;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
LAB_1436da1c3:
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5502411211406311203>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosVisualDebugger\\Private\\ChaosVDRuntimeModule.cpp"
                     ,0xdd,"ExternalRelayExecutorDelegate.IsBound() && RelayWriter.IsValid()");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// RequestFullCapture @ 1436da210

bool __thiscall FChaosVDRuntimeModule::RequestFullCapture(FChaosVDRuntimeModule *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_28;
  
  AcquireSRWLockShared((PSRWLOCK)&DelegatesRWLock);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&PerformFullCaptureDelegate,
             (FWriteAccessScope *)&local_28);
  bVar2 = false;
  PerformFullCaptureDelegate._28_4_ = PerformFullCaptureDelegate._28_4_ + 1;
  uVar7 = PerformFullCaptureDelegate._16_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar2 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (int)PerformFullCaptureDelegate._16_4_) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if (((*(int *)(lVar8 + 8 + PerformFullCaptureDelegate._8_8_) == 0) ||
          (*(longlong **)(lVar8 + PerformFullCaptureDelegate._8_8_) == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(**(longlong **)(lVar8 + PerformFullCaptureDelegate._8_8_) + 0x68))(),
         cVar5 == '\0')) {
        bVar2 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  PerformFullCaptureDelegate._28_4_ = PerformFullCaptureDelegate._28_4_ + -1;
  if (bVar2) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&PerformFullCaptureDelegate,
               false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  ReleaseSRWLockShared((PSRWLOCK)&DelegatesRWLock);
  return true;
}

// RestoreTraceChannelsToPreRecordingState @ 1436da500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRuntimeModule::RestoreTraceChannelsToPreRecordingState(FChaosVDRuntimeModule *this)

{
  TMap<FString,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,bool,0>_> *this_00;
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  TMap<FString,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,bool,0>_> *pTVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 *puVar14;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8 [8];
  TMap<FString,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,bool,0>_> *local_1c0;
  int iStack_1b8;
  uint uStack_1b4;
  undefined1 *local_1b0;
  undefined4 uStack_1a8;
  int iStack_1a4;
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  int local_190;
  TMap<FString,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,bool,0>_> *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  iVar8 = 0;
  uVar6 = 1;
  if (4 < (byte)LogChaosVDRuntime._0_1_) {
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FChaosVDRuntimeModule::RestoreTraceChannelsToPreRecordingState",0x3e,Yes)
    ;
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  this_00 = &this->OriginalTraceChannelsState;
  iVar2 = *(int *)&(this->OriginalTraceChannelsState).field_0x28;
  local_1b0 = &(this->OriginalTraceChannelsState).field_0x10;
  local_1a0 = 0;
  iStack_1a4 = iVar8;
  if (iVar2 != 0) {
    puVar13 = *(uint **)&(this->OriginalTraceChannelsState).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)local_1b0;
    }
    uVar11 = *puVar13;
    local_1a0 = 0;
    iVar8 = 0;
    while (uVar11 == 0) {
      lVar7 = (longlong)iVar8;
      local_1a0 = local_1a0 + 0x20;
      iVar8 = iVar8 + 1;
      iStack_1a4 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_1436da60d;
      uVar11 = puVar13[lVar7 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_190 = (int)lVar7;
    iStack_1a4 = local_1a0 + -1 + local_190;
    if (iVar2 < iStack_1a4) {
      iStack_1a4 = iVar2;
    }
  }
LAB_1436da60d:
  uVar11 = *(uint *)&(this->OriginalTraceChannelsState).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  puVar14 = &(this->OriginalTraceChannelsState).field_0x10;
  iStack_198 = *(int *)&(this->OriginalTraceChannelsState).field_0x8 -
               *(int *)&(this->OriginalTraceChannelsState).field_0x34;
  uStack_1a8 = 0xffffffff;
  TStack_180._padding_ = CONCAT44(uVar6,iVar8);
  TStack_180.CurrentBitIndex = iStack_1a4;
  TStack_180.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_180._28_4_ = iStack_1a4;
  TStack_180.BaseBitIndex = local_1a0;
  uStack_160 = CONCAT44(uStack_194,iStack_198);
  local_1c0 = this_00;
  iStack_1b8 = iVar8;
  uStack_1b4 = uVar6;
  iStack_19c = iStack_1a4;
  local_188 = this_00;
  TStack_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1b0;
  if ((((int)uVar11 < 0) || (iVar2 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = *(uint *)&(this->OriginalTraceChannelsState).field_0x28;
  if (uVar11 != uVar6) {
    puVar12 = *(undefined1 **)&(this->OriginalTraceChannelsState).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar14;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar7 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1436da720;
      uVar11 = *(uint *)(puVar12 + lVar7 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar11 = (int)lVar7 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_1436da720:
  while( true ) {
    pTVar4 = local_188;
    if (*(int *)(&local_188->field_0x0 + 8) - *(int *)(&local_188->field_0x0 + 0x34) !=
        (int)uStack_160) {
      `TSparseArray<TSparseSetElement<TTuple<FString,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1c8);
    }
    if (((TStack_180.CurrentBitIndex == uVar11) &&
        (TStack_180.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar14)) &&
       (pTVar4 == this_00)) break;
    lVar7 = *(longlong *)&pTVar4->field_0x0;
    UE::Trace::ToggleChannel
              (*(wchar_t **)((longlong)TStack_180.CurrentBitIndex * 0x20 + lVar7),
               *(bool *)((longlong)TStack_180.CurrentBitIndex * 0x20 + 0x10 + lVar7));
    TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
  }
  TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
              *)this_00);
  return;
}

// SaveAndDisabledCurrentEnabledTraceChannels @ 1436da7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRuntimeModule::SaveAndDisabledCurrentEnabledTraceChannels(FChaosVDRuntimeModule *this)

{
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (4 < (byte)LogChaosVDRuntime._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FChaosVDRuntimeModule::SaveAndDisabledCurrentEnabledTraceChannels",0x41,
               Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
              *)&this->OriginalTraceChannelsState);
  UE::Trace::EnumerateChannels
            (`FChaosVDRuntimeModule::SaveAndDisabledCurrentEnabledTraceChannels'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>,&this->OriginalTraceChannelsState);
  return;
}

// SetupRelayDataPumpDelegates @ 1436e0a90

void __thiscall FChaosVDRuntimeModule::SetupRelayDataPumpDelegates(FChaosVDRuntimeModule *this)

{
  FRelayTraceWriter *this_00;
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  this_00 = (this->RelayWriter).Ptr;
  if (this_00 == (FRelayTraceWriter *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5502411211406311195>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosVisualDebugger\\Private\\ChaosVDRuntimeModule.cpp"
                       ,0xe5,"RelayWriter");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_28);
    local_10 = &(this_00->NewDataAvailableDelegate).field_0x8;
    puVar3 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_10);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDRuntimeModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar3[4] = RelayTraceData;
      puVar3[3] = this;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
  }
  return;
}

// StartRecording @ 1436e0b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FChaosVDRuntimeModule::StartRecording
          (FChaosVDRuntimeModule *this,FChaosVDStartRecordingCommandMessage *param_1)

{
  TUniquePtr<Chaos::VD::FRelayTraceWriter,TDefaultDelete<Chaos::VD::FRelayTraceWriter>_> *pTVar1;
  EChaosVDTransportMode EVar2;
  FBufferArchive *pFVar3;
  void *pvVar4;
  code *pcVar5;
  float fVar6;
  ForAnyElementType FVar7;
  int iVar8;
  bool bVar9;
  EBuildTargetType EVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  FString *pFVar14;
  wchar_t *pwVar15;
  FDateTime this_00;
  FRelayTraceWriter *pFVar16;
  FRelayTraceWriter *pFVar17;
  undefined8 *puVar18;
  ulong64 uVar19;
  FText *pFVar20;
  FDelegateHandle FVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  undefined1 auStackY_698 [32];
  FOptions local_658;
  undefined1 local_654;
  undefined1 local_653;
  undefined1 local_652;
  undefined1 local_651;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_650;
  FText local_640;
  FString local_630;
  FText *local_620;
  FDestructionSentinel local_618;
  FDestructionSentinel local_600;
  undefined1 *local_5e8;
  ulong64 local_5d8;
  undefined1 local_5d0 [16];
  FText local_5c0;
  FString local_5b0;
  FString local_5a0;
  FText local_590;
  FString local_580;
  FString local_570;
  FStringFormatArg local_558;
  FStringFormatArg local_538;
  FStringFormatArg local_518;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_198;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_698;
  if (this->bIsRecording != false) {
    local_654 = 0;
    bVar9 = `FChaosVDRuntimeModule::StartRecording'::__l3::<lambda_1>::operator()(&local_654);
    if (!bVar9) {
      if (4 < (byte)LogChaosVDRuntime._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
      }
      StopRecording(this);
    }
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_640,L"ChaosVisualDebugger",L"SeeLogsForErrorDetailsText",
             L"Please see the logs for more details...");
  bVar9 = FTraceAuxiliary::IsConnected();
  pFVar17 = (FRelayTraceWriter *)0x0;
  if (bVar9) {
    if (4 < (byte)LogChaosVDRuntime._0_1_) {
      local_4f8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4f8,"FChaosVDRuntimeModule::StartRecording",0x25,Yes);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
      if ((void *)local_4f8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4f8._padding_);
      }
    }
    bVar9 = FTraceAuxiliary::Stop();
    if (bVar9) {
      fVar25 = (float)(**(code **)(*(longlong *)CVarChaosVDMaxTimeToWaitForDisconnect._8_8_ + 0xd0))
                                ();
      fVar6 = __real_3dcccccd;
      fVar26 = 0.0;
      if (0.0 < fVar25) {
        do {
          FWindowsPlatformProcess::Sleep(fVar6);
          bVar9 = FTraceAuxiliary::IsConnected();
          if (!bVar9) goto LAB_1436e0cd9;
          fVar26 = fVar26 + fVar6;
        } while (fVar26 < fVar25);
      }
      bVar9 = FTraceAuxiliary::IsConnected();
      if (bVar9) {
LAB_1436e0cd9:
        if (4 < (byte)LogChaosVDRuntime._0_1_) {
          local_3d8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_3d8,"FChaosVDRuntimeModule::StartRecording",0x25,Yes);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
          if ((void *)local_3d8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_3d8._padding_);
          }
        }
        goto LAB_1436e0d8c;
      }
    }
    pFVar20 = FText::AsLocalizable_Advanced_LocText
                        (&local_5c0,L"ChaosVisualDebugger",
                         L"FailedToStopActiveRecordingErrorMessage",
                         L"Failed to Stop active Trace Session.");
    FText::operator=(&local_640,pFVar20);
    if (local_5c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5c0.TextData.Reference + 0x10))();
    }
  }
LAB_1436e0d8c:
  if (4 < (byte)LogChaosVDRuntime._0_1_) {
    local_2b8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_2b8,"FChaosVDRuntimeModule::SaveAndDisabledCurrentEnabledTraceChannels",0x41,
               Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
    if ((void *)local_2b8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_2b8._padding_);
    }
  }
  TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FString,bool>,TDefaultMapHashableKeyFuncs<FString,bool,0>,FDefaultSetAllocator>
              *)&this->OriginalTraceChannelsState);
  UE::Trace::EnumerateChannels
            (`FChaosVDRuntimeModule::SaveAndDisabledCurrentEnabledTraceChannels'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>,&this->OriginalTraceChannelsState);
  UE::Trace::ToggleChannel(L"ChaosVDChannel",true);
  UE::Trace::ToggleChannel(L"Frame",true);
  UE::Trace::ToggleChannel(L"Log",true);
  local_658.bNoWorkerThread = false;
  local_658.bTruncateFile = false;
  local_658.bExcludeTail = true;
  if (param_1->RecordingMode == File) {
    pFVar14 = ::FString::FString(&local_580,GInternalProjectName);
    FStringFormatArg::FStringFormatArg(&local_558,pFVar14);
    EVar10 = FApp::GetBuildTargetType();
    pwVar15 = ::LexToString(EVar10);
    FStringFormatArg::FStringFormatArg(&local_538,pwVar15);
    this_00 = FDateTime::Now();
    pFVar14 = FDateTime::ToString((FDateTime *)this_00.Ticks,&local_570,L"%Y%m%d_%H%M%S");
    FStringFormatArg::FStringFormatArg(&local_518,pFVar14);
    local_650.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_650.ArrayNum = 3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,3,0,&local_650.AllocatorInstance,3,&local_650.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_650.AllocatorInstance.Data,&local_558,3);
    if (local_518.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_518.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_538.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_558.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_558.StringValue.Data.AllocatorInstance.Data);
    }
    ::FString::FormatImpl(&local_630,L"ChaosVD-{0}-{1}-{2}.utrace",&local_650);
    iVar8 = local_630.Data.ArrayNum;
    FVar7.Data = local_630.Data.AllocatorInstance.Data;
    local_630.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_630.Data.ArrayNum = 0;
    local_630.Data.ArrayMax = 0;
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_650.AllocatorInstance.Data,local_650.ArrayNum);
    if ((FStringFormatArg *)local_650.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_650.AllocatorInstance.Data);
    }
    if (4 < (byte)LogChaosVDRuntime._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
    }
    EVar2 = param_1->TransportMode;
    if (EVar2 == Invalid) {
LAB_1436e0fdc:
      if (1 < (byte)LogChaosVDRuntime._0_1_) {
        UEnum::GetValueAsString<enum_EChaosVDTransportMode>(&local_5b0,EVar2);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
        if (local_5b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5b0.Data.AllocatorInstance.Data);
        }
      }
    }
    else if (EVar2 == FileSystem) {
      FVar22.Data = (FScriptContainerElement *)L"";
      if (iVar8 != 0) {
        FVar22.Data = FVar7.Data;
      }
      bVar9 = FTraceAuxiliary::Start
                        (File,(wchar_t *)FVar22.Data,(wchar_t *)0x0,&local_658,
                         (FLogCategoryBase *)&LogCore);
      this->bIsRecording = bVar9;
    }
    else if (EVar2 == TraceServer) {
      if ((param_1->Target).Data.ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(param_1->Target).Data.AllocatorInstance.Data;
      }
      bVar9 = FTraceAuxiliary::Start
                        (Network,pwVar15,(wchar_t *)0x0,&local_658,(FLogCategoryBase *)&LogCore);
      this->bIsRecording = bVar9;
    }
    else if ((EVar2 == Direct) || (EVar2 == Relay)) goto LAB_1436e0fdc;
    this->CurrentRecordingMode = File;
    if (FVar7.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar7.Data);
    }
  }
  else if (param_1->RecordingMode == Live) {
    EVar2 = param_1->TransportMode;
    if ((EVar2 == Invalid) || (EVar2 == FileSystem)) {
      if (1 < (byte)LogChaosVDRuntime._0_1_) {
        UEnum::GetValueAsString<enum_EChaosVDTransportMode>(&local_5a0,EVar2);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
        if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if ((EVar2 == TraceServer) || (EVar2 == Direct)) {
        if ((param_1->Target).Data.ArrayNum == 0) {
          pwVar15 = L"";
        }
        else {
          pwVar15 = (wchar_t *)(param_1->Target).Data.AllocatorInstance.Data;
        }
        bVar9 = FTraceAuxiliary::Start
                          (Network,pwVar15,(wchar_t *)0x0,&local_658,(FLogCategoryBase *)&LogCore);
        this->bIsRecording = bVar9;
        this->CurrentRecordingMode = Live;
        goto LAB_1436e14e6;
      }
      if (EVar2 == Relay) {
        bVar9 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                           &this->ExternalRelayExecutorDelegate);
        if (!bVar9) {
          local_653 = 0;
          bVar9 = `FChaosVDRuntimeModule::StartRecording'::__l116::<lambda_2>::operator()
                            (&local_653);
          if (!bVar9) {
            if (1 < (byte)LogChaosVDRuntime._0_1_) {
              UE::Logging::Private::BasicLog<2>
                        (&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
              this->CurrentRecordingMode = Live;
              goto LAB_1436e14e6;
            }
            goto LAB_1436e14a3;
          }
        }
        pTVar1 = &this->RelayWriter;
        if ((pTVar1->Ptr != (FRelayTraceWriter *)0x0) && (pTVar1->Ptr->bClosed == (atomic<bool>)0x0)
           ) {
          if (2 < (byte)LogChaosVDRuntime._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)&PTR_u___hs__Attemptin_150acb458,
                       (FLogCategoryBase *)&LogChaosVDRuntime);
          }
          pFVar16 = pTVar1->Ptr;
          if ((0 < (longlong)pFVar16->QueuedBytesNum) && (2 < (byte)LogChaosVDRuntime._0_1_)) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
          }
          LOCK();
          pFVar16->bClosed = (atomic<bool>)0x1;
          UNLOCK();
        }
        pFVar16 = ::operator_new(0x60);
        if (pFVar16 != (FRelayTraceWriter *)0x0) {
          pFVar17 = Chaos::VD::FRelayTraceWriter::FRelayTraceWriter(pFVar16);
        }
        if (pTVar1 == (TUniquePtr<Chaos::VD::FRelayTraceWriter,TDefaultDelete<Chaos::VD::FRelayTraceWriter>_>
                       *)&local_5d8) {
          if (pFVar17 != (FRelayTraceWriter *)0x0) {
            if ((0 < (longlong)pFVar17->QueuedBytesNum) && (2 < (byte)LogChaosVDRuntime._0_1_)) {
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
            }
            LOCK();
            pFVar17->bClosed = (atomic<bool>)0x1;
            UNLOCK();
            pFVar3 = (pFVar17->CurrentPendingBunch).Ptr;
            if (pFVar3 != (FBufferArchive *)0x0) {
              (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
            }
            TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::
            ~TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>
                      (&pFVar17->PendingBunchesToRelay);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar17);
            pvVar4 = *(void **)&(pFVar17->NewDataAvailableDelegate).field_0x8;
            if (pvVar4 != (void *)0x0) {
              FMemory::Free(pvVar4);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)pFVar17);
            goto LAB_1436e12b1;
          }
        }
        else {
          pFVar16 = pTVar1->Ptr;
          pTVar1->Ptr = pFVar17;
          if (pFVar16 != (FRelayTraceWriter *)0x0) {
            if ((0 < (longlong)pFVar16->QueuedBytesNum) && (2 < (byte)LogChaosVDRuntime._0_1_)) {
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
            }
            LOCK();
            pFVar16->bClosed = (atomic<bool>)0x1;
            UNLOCK();
            pFVar3 = (pFVar16->CurrentPendingBunch).Ptr;
            if (pFVar3 != (FBufferArchive *)0x0) {
              (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
            }
            TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::
            ~TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>
                      (&pFVar16->PendingBunchesToRelay);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar16);
            pvVar4 = *(void **)&(pFVar16->NewDataAvailableDelegate).field_0x8;
            if (pvVar4 != (void *)0x0) {
              FMemory::Free(pvVar4);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)pFVar16);
            pFVar17 = pFVar16;
LAB_1436e12b1:
            ::operator_delete(pFVar17,0x60);
          }
        }
        pFVar17 = pTVar1->Ptr;
        uVar23 = (**(code **)(*(longlong *)CVarChaosVDMaxBytesPerRelayChunk._8_8_ + 200))();
        if (uVar23 == 0) {
          if (1 < (byte)LogChaosVDRuntime._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
          }
        }
        else if ((uVar23 == pFVar17->MaxPendingBytesPerBunch) ||
                ((pFVar17->PendingBunchesToRelay).NumElems == (atomic<int>)0x0)) {
          pFVar17->MaxPendingBytesPerBunch = uVar23;
        }
        else {
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2956740329350365215>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosVisualDebugger\\Private\\Trace\\RelayTraceWriter.cpp"
                             ,0x1f,"PendingBunchesToRelay.IsEmpty()");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        bVar9 = FTraceAuxiliary::Relay
                          ((ulong64)pTVar1->Ptr,Chaos::VD::FRelayTraceWriter::WriteHelper,
                           Chaos::VD::FRelayTraceWriter::CloseHelper,(wchar_t *)0x0,&local_658);
        this->bIsRecording = bVar9;
        if (bVar9) {
          pFVar17 = pTVar1->Ptr;
          if (pFVar17 == (FRelayTraceWriter *)0x0) {
            bVar9 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_5502411211406311195>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosVisualDebugger\\Private\\ChaosVDRuntimeModule.cpp"
                               ,0xe5,"RelayWriter");
            if (bVar9) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          else {
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pFVar17,
                       (FWriteAccessScope *)&local_600);
            local_5e8 = &(pFVar17->NewDataAvailableDelegate).field_0x8;
            puVar18 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_5e8);
            if (puVar18 != (undefined8 *)0x0) {
              *puVar18 = &
                         ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar19 = FDelegateHandle::GenerateNewID();
              puVar18[2] = uVar19;
              *puVar18 = &
                         ___7__TBaseRawMethodDelegateInstance__0A_VFChaosVDRuntimeModule____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
              ;
              puVar18[4] = RelayTraceData;
              puVar18[3] = this;
            }
            if (local_600.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_600.Accessor,&local_600);
              this->CurrentRecordingMode = Live;
              goto LAB_1436e14e6;
            }
          }
        }
      }
    }
LAB_1436e14a3:
    this->CurrentRecordingMode = Live;
  }
  else {
    pFVar20 = FText::AsLocalizable_Advanced_LocText
                        (&local_590,L"ChaosVisualDebugger",L"WrongCommandArgumentsError",
                         L"The start recording command was called with invalid arguments");
    FText::operator=(&local_640,pFVar20);
    if (local_590.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_590.TextData.Reference + 0x10))();
    }
  }
LAB_1436e14e6:
  this->AccumulatedRecordingTime = 0.0;
  if (this->bIsRecording == false) {
    local_620 = &local_640;
    bVar9 = `FChaosVDRuntimeModule::StartRecording'::__l181::<lambda_3>::operator()(&local_620);
    if (!bVar9) {
      if (1 < (byte)LogChaosVDRuntime._0_1_) {
        FText::ToString(&local_640);
        local_198._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_198,"FChaosVDRuntimeModule::StartRecording",0x25,Yes);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
        if ((void *)local_198._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_198._padding_);
        }
      }
      AcquireSRWLockShared((PSRWLOCK)&DelegatesRWLock);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &RecordingStartFailedDelegate,(FWriteAccessScope *)&local_618);
      bVar9 = false;
      RecordingStartFailedDelegate._28_4_ = RecordingStartFailedDelegate._28_4_ + 1;
      uVar23 = RecordingStartFailedDelegate._16_4_ - 1;
      if (-1 < (int)uVar23) {
        lVar24 = (longlong)(int)uVar23 << 4;
        bVar9 = false;
        do {
          uVar13 = 0;
          if ((int)uVar23 < (int)RecordingStartFailedDelegate._16_4_) {
            uVar13 = ~uVar23 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((*(int *)(lVar24 + 8 + RecordingStartFailedDelegate._8_8_) == 0) ||
              (*(longlong **)(lVar24 + RecordingStartFailedDelegate._8_8_) == (longlong *)0x0)) ||
             (cVar12 = (**(code **)(**(longlong **)(lVar24 + RecordingStartFailedDelegate._8_8_) +
                                   0x68))(), cVar12 == '\0')) {
            bVar9 = true;
          }
          lVar24 = lVar24 + -0x10;
          uVar23 = uVar23 - 1;
        } while (-1 < (int)uVar23);
      }
      RecordingStartFailedDelegate._28_4_ = RecordingStartFailedDelegate._28_4_ + -1;
      if (bVar9) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &RecordingStartFailedDelegate,false);
      }
      if (local_618.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_618.Accessor,&local_618);
      }
      ReleaseSRWLockShared((PSRWLOCK)&DelegatesRWLock);
      pFVar17 = (this->RelayWriter).Ptr;
      this->CurrentRecordingMode = Invalid;
      (this->RelayWriter).Ptr = (FRelayTraceWriter *)0x0;
      if (pFVar17 != (FRelayTraceWriter *)0x0) {
        if ((0 < (longlong)pFVar17->QueuedBytesNum) && (2 < (byte)LogChaosVDRuntime._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
        }
        LOCK();
        pFVar17->bClosed = (atomic<bool>)0x1;
        UNLOCK();
        pFVar3 = (pFVar17->CurrentPendingBunch).Ptr;
        if (pFVar3 != (FBufferArchive *)0x0) {
          (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
        }
        TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>::
        ~TSpscQueue<TUniquePtr<FBufferArchive,TDefaultDelete<FBufferArchive>_>,FMemory>
                  (&pFVar17->PendingBunchesToRelay);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar17);
        pvVar4 = *(void **)&(pFVar17->NewDataAvailableDelegate).field_0x8;
        if (pvVar4 != (void *)0x0) {
          FMemory::Free(pvVar4);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)pFVar17);
        ::operator_delete(pFVar17,0x60);
      }
      goto LAB_1436e179b;
    }
  }
  this->CurrentTransportMode = param_1->TransportMode;
  if (((this->OnConnectionDelegateHandle).ID == 0) ||
     (bVar9 = `FChaosVDRuntimeModule::StartRecording'::__l184::<lambda_4>::operator()(&local_652),
     bVar9)) {
    FVar21 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
             AddRaw<FChaosVDRuntimeModule>
                       ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>
                         *)&FTraceAuxiliary::OnConnection,(FChaosVDRuntimeModule *)local_5d0,
                        (pmf_3dcba2ce)this);
                    /* WARNING: Load size is inaccurate */
    (this->OnConnectionDelegateHandle).ID = *FVar21.ID;
  }
  if (((this->OnTraceStoppedDelegateHandle).ID == 0) ||
     (bVar9 = `FChaosVDRuntimeModule::StartRecording'::__l187::<lambda_5>::operator()(&local_651),
     bVar9)) {
    FVar21 = TMulticastDelegateRegistration<void___cdecl(enum_FTraceAuxiliary::EConnectionType,FString_const_&),FDefaultTSDelegateUserPolicy>
             ::AddRaw<FChaosVDRuntimeModule>
                       (&FTraceAuxiliary::OnTraceStopped,(FChaosVDRuntimeModule *)(local_5d0 + 8),
                        (pmf_f3fb9021)this);
                    /* WARNING: Load size is inaccurate */
    (this->OnTraceStoppedDelegateHandle).ID = *FVar21.ID;
  }
LAB_1436e179b:
  if (local_640.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_640.TextData.Reference + 0x10))();
  }
  return;
}

// StartRecording @ 1436e1810

void __thiscall
FChaosVDRuntimeModule::StartRecording
          (FChaosVDRuntimeModule *this,TArrayView<FString_const_,int> *param_1)

{
  bool bVar1;
  int iVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  int iVar6;
  FString local_58;
  FString local_48;
  FChaosVDStartRecordingCommandMessage local_38;
  
  local_38.RecordingMode = Invalid;
  local_38.TransportMode = Invalid;
  local_38.Target.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Target.Data.ArrayNum = 0;
  local_38.Target.Data.ArrayMax = 0;
  local_38.DataChannelsEnabledOverrideList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.DataChannelsEnabledOverrideList.ArrayNum = 0;
  local_38.DataChannelsEnabledOverrideList.ArrayMax = 0;
  if (param_1->ArrayNum != 0) {
    pFVar3 = TArrayView<FString_const_,int>::operator[](param_1,0);
    pwVar5 = L"";
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp(pwVar4,L"File");
    if (iVar2 != 0) {
      pFVar3 = TArrayView<FString_const_,int>::operator[](param_1,0);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp(pwVar5,L"Server");
      if (iVar2 == 0) {
        local_38.RecordingMode = Live;
        local_38.TransportMode = TraceServer;
        bVar1 = param_1->ArrayNum < 2;
        if (bVar1) {
          pFVar3 = ::FString::FString(&local_58,L"127.0.0.1");
        }
        else {
          pFVar3 = TArrayView<FString_const_,int>::operator[](param_1,1);
          pFVar3 = ::FString::FString(&local_48,pFVar3);
        }
        iVar2 = (pFVar3->Data).ArrayNum;
        iVar6 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar6 = 0;
        }
        ::FString::AssignRange
                  (&local_38.Target,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar6);
        if (bVar1) {
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        if ((!bVar1) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_1436e1946;
    }
  }
  local_38.RecordingMode = File;
  local_38.TransportMode = FileSystem;
LAB_1436e1946:
  StartRecording(this,&local_38);
  DestructItems<FString,int>
            ((FString *)local_38.DataChannelsEnabledOverrideList.AllocatorInstance.Data,
             local_38.DataChannelsEnabledOverrideList.ArrayNum);
  if (local_38.DataChannelsEnabledOverrideList.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.DataChannelsEnabledOverrideList.AllocatorInstance.Data);
  }
  if (local_38.Target.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Target.Data.AllocatorInstance.Data);
  }
  return;
}

// StopRecording @ 1436e19b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FChaosVDRuntimeModule::StopRecording(FChaosVDRuntimeModule *this)

{
  TWeakPtr<FTSTicker::FElement,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FRelayTraceWriter *pFVar5;
  undefined1 auStack_198 [32];
  TWeakPtr<FTSTicker::FElement,1> local_178;
  longlong local_168 [2];
  longlong local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)&FTraceAuxiliary::OnConnection,
             this);
  (this->OnConnectionDelegateHandle).ID = 0;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             &FTraceAuxiliary::OnTraceStopped,this);
  (this->OnTraceStoppedDelegateHandle).ID = 0;
  this->CurrentRecordingMode = Invalid;
  this->CurrentTransportMode = Invalid;
  if (this->bIsRecording == false) {
    if (2 < (byte)LogChaosVDRuntime._0_1_) {
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"FChaosVDRuntimeModule::StopRecording",0x24,Yes);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    RestoreTraceChannelsToPreRecordingState(this);
    this->bRequestedStop = true;
    FTraceAuxiliary::Stop();
    pTVar1 = &this->FullCaptureRequesterHandle;
    if (((pTVar1->Object != (FElement *)0x0) &&
        (pTVar4 = (this->FullCaptureRequesterHandle).WeakReferenceCount.ReferenceController,
        pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
      local_178.Object = pTVar1->Object;
      local_178.WeakReferenceCount.ReferenceController =
           (this->FullCaptureRequesterHandle).WeakReferenceCount.ReferenceController;
      if (local_178.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_178.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_178.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      FTSTicker::RemoveTicker(&local_178);
      if (pTVar1 != (TWeakPtr<FTSTicker::FElement,1> *)local_168) {
        pTVar4 = (this->FullCaptureRequesterHandle).WeakReferenceCount.ReferenceController;
        pTVar1->Object = (FElement *)0x0;
        (this->FullCaptureRequesterHandle).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &pTVar4->WeakReferenceCount;
          aVar3 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
    }
    pTVar1 = &this->RecordingTimerHandle;
    if ((((this->RecordingTimerHandle).Object != (FElement *)0x0) &&
        (pTVar4 = (this->RecordingTimerHandle).WeakReferenceCount.ReferenceController,
        pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
      local_178.Object = pTVar1->Object;
      local_178.WeakReferenceCount.ReferenceController =
           (this->RecordingTimerHandle).WeakReferenceCount.ReferenceController;
      if (local_178.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_178.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_178.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      FTSTicker::RemoveTicker(&local_178);
      if (pTVar1 != (TWeakPtr<FTSTicker::FElement,1> *)local_158) {
        pTVar4 = (this->RecordingTimerHandle).WeakReferenceCount.ReferenceController;
        pTVar1->Object = (FElement *)0x0;
        (this->RecordingTimerHandle).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar2 = &pTVar4->WeakReferenceCount;
          aVar3 = *paVar2;
          *paVar2 = (atomic<int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
    }
    pFVar5 = (this->RelayWriter).Ptr;
    if (pFVar5 != (FRelayTraceWriter *)0x0) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)pFVar5);
    }
    pFVar5 = (this->RelayWriter).Ptr;
    if (pFVar5 != (FRelayTraceWriter *)0x0) {
      if ((0 < (longlong)pFVar5->QueuedBytesNum) && (2 < (byte)LogChaosVDRuntime._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaosVDRuntime);
      }
      LOCK();
      pFVar5->bClosed = (atomic<bool>)0x1;
      UNLOCK();
    }
    this->bIsRecording = false;
    this->AccumulatedRecordingTime = 0.0;
    AcquireSRWLockShared((PSRWLOCK)&DelegatesRWLock);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&RecordingStopDelegate);
    ReleaseSRWLockShared((PSRWLOCK)&DelegatesRWLock);
  }
  return;
}

// StopTrace @ 1436e1c20

void __thiscall FChaosVDRuntimeModule::StopTrace(FChaosVDRuntimeModule *this)

{
  this->bRequestedStop = true;
  FTraceAuxiliary::Stop();
  return;
}

// UnregisterCurrentExternalRelayExecutor @ 1436e22d0

void __thiscall
FChaosVDRuntimeModule::UnregisterCurrentExternalRelayExecutor(FChaosVDRuntimeModule *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ExternalRelayExecutorDelegate);
  return;
}

// UnregisterExternalTraceStatusProvider @ 1436e22f0

void __thiscall
FChaosVDRuntimeModule::UnregisterExternalTraceStatusProvider(FChaosVDRuntimeModule *this)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ExternalTraceStatusDelegate);
  return;
}

// WaitForTraceSessionDisconnect @ 1436e2310

bool __thiscall FChaosVDRuntimeModule::WaitForTraceSessionDisconnect(FChaosVDRuntimeModule *this)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = (float)(**(code **)(*(longlong *)CVarChaosVDMaxTimeToWaitForDisconnect._8_8_ + 0xd0))();
  fVar1 = __real_3dcccccd;
  fVar4 = 0.0;
  if (0.0 < fVar3) {
    do {
      FWindowsPlatformProcess::Sleep(fVar1);
      bVar2 = FTraceAuxiliary::IsConnected();
      if (!bVar2) {
        return true;
      }
      fVar4 = fVar4 + fVar1;
    } while (fVar4 < fVar3);
  }
  bVar2 = FTraceAuxiliary::IsConnected();
  return bVar2;
}

// operator() @ 1504a1320

bool __thiscall
`FChaosVDRuntimeModule::RegisterExternalRelayExecutor'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5502411211406311228>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5502411211406311228>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a1360

bool __thiscall `FChaosVDRuntimeModule::StartRecording'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5502411211406311118>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5502411211406311118>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a13f0

bool __thiscall
`FChaosVDRuntimeModule::HandleTraceConnectionEstablished'::__l24::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5502411211406311151>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5502411211406311151>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a1430

bool __thiscall
`FChaosVDRuntimeModule::HandleTraceConnectionEstablished'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_5502411211406311134>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5502411211406311134>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a1490

bool __thiscall `FChaosVDRuntimeModule::StartRecording'::__l116::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5502411211406311049>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5502411211406311049>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a14d0

bool __thiscall `FChaosVDRuntimeModule::StartRecording'::__l181::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5502411211406311009>);
  if (bVar2) {
    FText::ToString(*(FText **)this);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5502411211406311009>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a1530

bool __thiscall `FChaosVDRuntimeModule::StartRecording'::__l184::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5502411211406311005>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5502411211406311005>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a1570

bool __thiscall `FChaosVDRuntimeModule::StartRecording'::__l187::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5502411211406310999>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5502411211406310999>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

