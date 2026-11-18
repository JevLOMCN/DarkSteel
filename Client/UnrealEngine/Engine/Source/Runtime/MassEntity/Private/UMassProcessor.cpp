// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 28

// UMassProcessor @ 1471ddc80

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassProcessor * __thiscall
UMassProcessor::UMassProcessor(UMassProcessor *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  
  UObject::UObject((UObject *)this,param_1);
  this->ActivationState = Active;
  this->ProcessingPhase = PrePhysics;
  this->_padding_ = (longlong)&___7UMassProcessor__6B_;
  (this->StatId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatId).Data.ArrayNum = 0;
  (this->StatId).Data.ArrayMax = 0;
  puVar2 = &this->field_0x62;
  this->bAutoRegisterWithProcessingPhases = '\x01';
  this->bInitialized = '\0';
  this->bIsDynamic = '\0';
  this->bRequiresGameThreadExecution = '\0';
  this->bAllowMultipleInstances = '\0';
  (this->ExecutionOrder).ExecuteInGroup.ComparisonIndex = 0;
  (this->ExecutionOrder).ExecuteInGroup.Number = 0;
  (this->ExecutionOrder).ExecuteBefore.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionOrder).ExecuteBefore.ArrayNum = 0;
  (this->ExecutionOrder).ExecuteBefore.ArrayMax = 0;
  (this->ExecutionOrder).ExecuteAfter.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionOrder).ExecuteAfter.ArrayNum = 0;
  (this->ExecutionOrder).ExecuteAfter.ArrayMax = 0;
  this->ExecutionPriority = 0;
  this->QueryBasedPruning = Default;
  *(undefined8 *)&(this->ProcessorRequirements).RequiredConstSubsystems.field_0x10 = 0;
  *(undefined4 *)&(this->ProcessorRequirements).RequiredConstSubsystems.field_0x18 = 0;
  *(undefined4 *)&(this->ProcessorRequirements).RequiredConstSubsystems.field_0x1c = 0x80;
  *(undefined8 *)&(this->ProcessorRequirements).RequiredMutableSubsystems.field_0x10 = 0;
  *(undefined4 *)&(this->ProcessorRequirements).RequiredMutableSubsystems.field_0x18 = 0;
  *(undefined4 *)&(this->ProcessorRequirements).RequiredMutableSubsystems.field_0x1c = 0x80;
  (this->ProcessorRequirements).bRequiresGameThreadExecution = false;
  (this->AutoExecuteQuery).Object = (FQueryExecutor *)0x0;
  (this->AutoExecuteQuery).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OwnedQueries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OwnedQueries).ArrayNum = 0;
  (this->OwnedQueries).ArrayMax = 0;
  (this->DebugDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugDescription).Data.ArrayNum = 0;
  (this->DebugDescription).Data.ArrayMax = 0;
  return this;
}

// UMassProcessor @ 1471ddd40

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassProcessor * __thiscall
UMassProcessor::UMassProcessor(UMassProcessor *this,FObjectInitializer *param_1)

{
  UMassProcessor(this);
  this->_padding_ = (longlong)&___7UMassProcessor__6B_;
  return this;
}

// UMassProcessor @ 1471ddd70

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassProcessor * __thiscall UMassProcessor::UMassProcessor(UMassProcessor *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  
  UObject::UObject((UObject *)this);
  this->ProcessingPhase = PrePhysics;
  this->ExecutionFlags = '\x03';
  this->ActivationState = Active;
  this->_padding_ = (longlong)&___7UMassProcessor__6B_;
  (this->StatId).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatId).Data.ArrayNum = 0;
  (this->StatId).Data.ArrayMax = 0;
  puVar2 = &this->field_0x62;
  this->bAutoRegisterWithProcessingPhases = '\x01';
  this->bInitialized = '\0';
  this->bIsDynamic = '\0';
  this->bRequiresGameThreadExecution = '\0';
  this->bAllowMultipleInstances = '\0';
  (this->ExecutionOrder).ExecuteInGroup.ComparisonIndex = 0;
  (this->ExecutionOrder).ExecuteInGroup.Number = 0;
  (this->ExecutionOrder).ExecuteBefore.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionOrder).ExecuteBefore.ArrayNum = 0;
  (this->ExecutionOrder).ExecuteBefore.ArrayMax = 0;
  (this->ExecutionOrder).ExecuteAfter.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExecutionOrder).ExecuteAfter.ArrayNum = 0;
  (this->ExecutionOrder).ExecuteAfter.ArrayMax = 0;
  this->ExecutionPriority = 0;
  this->QueryBasedPruning = Default;
  *(undefined8 *)&(this->ProcessorRequirements).RequiredConstSubsystems.field_0x10 = 0;
  *(undefined4 *)&(this->ProcessorRequirements).RequiredConstSubsystems.field_0x18 = 0;
  *(undefined4 *)&(this->ProcessorRequirements).RequiredConstSubsystems.field_0x1c = 0x80;
  *(undefined8 *)&(this->ProcessorRequirements).RequiredMutableSubsystems.field_0x10 = 0;
  *(undefined4 *)&(this->ProcessorRequirements).RequiredMutableSubsystems.field_0x18 = 0;
  *(undefined4 *)&(this->ProcessorRequirements).RequiredMutableSubsystems.field_0x1c = 0x80;
  (this->ProcessorRequirements).bRequiresGameThreadExecution = false;
  (this->AutoExecuteQuery).Object = (FQueryExecutor *)0x0;
  (this->AutoExecuteQuery).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->OwnedQueries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OwnedQueries).ArrayNum = 0;
  (this->OwnedQueries).ArrayMax = 0;
  (this->DebugDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugDescription).Data.ArrayNum = 0;
  (this->DebugDescription).Data.ArrayMax = 0;
  return this;
}

// ~UMassProcessor @ 1471e10d0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall UMassProcessor::~UMassProcessor(UMassProcessor *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UMassProcessor__6B_;
  pFVar1 = (this->DebugDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OwnedQueries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AutoExecuteQuery).SharedReferenceCount.ReferenceController);
  pvVar2 = *(void **)&(this->ProcessorRequirements).RequiredMutableSubsystems.field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->ProcessorRequirements).RequiredConstSubsystems.field_0x10;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->ExecutionOrder).ExecuteAfter.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExecutionOrder).ExecuteBefore.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StatId).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CallExecute @ 1472009d0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMassProcessor::CallExecute
          (UMassProcessor *this,FMassEntityManager *param_1,FMassExecutionContext *param_2)

{
  bool bVar1;
  bool bVar2;
  wchar_t *pwVar3;
  UMassProcessor *local_res8;
  UMassProcessor *local_res20;
  FMemScope local_38;
  void *local_30 [3];
  
  if ((this->ActivationState != Inactive) ||
     (local_res8 = this,
     bVar1 = `UMassProcessor::CallExecute'::__l3::<lambda_1>::operator()(&local_res8), bVar1)) {
    if ((this->StatId).Data.ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(this->StatId).Data.AllocatorInstance.Data;
    }
    bVar1 = -1 < CpuChannel->Enabled;
    if (bVar1) {
      FCpuProfilerTrace::OutputBeginDynamicEvent
                (pwVar3,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessor.cpp"
                 ,0x110);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&LLMScope_Name273,L"Mass/ExecuteProcessor");
      _Init_thread_footer(&::_TSS0);
    }
    FLLMScope::FLLMScope((FLLMScope *)&local_res8,LLMScope_Name273,false,None,Default,true);
    FMemScope::FMemScope(&local_38,&LLMScope_Name273,true);
    ::FString::operator=(&param_2->DebugExecutionDescription,&this->DebugDescription);
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&(param_2->DebugProcessor).WeakPtr,(FObjectPtr)&local_res20);
    bVar2 = FMassSubsystemAccess::CacheSubsystemRequirements
                      (&param_2->SubsystemAccess,&this->ProcessorRequirements);
    if (bVar2) {
      (**(code **)(this->_padding_ + 0x300))(this,param_1,param_2);
    }
    else {
      if (FVisualLogger::bIsRecording != 0) {
        (**(code **)(this->_padding_ + 0x2c0))(this,local_30);
        FVisualLogger::CategorizedLogfImpl
                  ((UObject *)this,(FName *)&LogMass.field_0x4,All,
                   L"%s Skipping Execute due to subsystem requirements not being met");
        if (local_30[0] != (void *)0x0) {
          FMemory::Free(local_30[0]);
        }
      }
      if (6 < (byte)LogMass._0_1_) {
        (**(code **)(this->_padding_ + 0x2c0))(this,local_30);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
        if (local_30[0] != (void *)0x0) {
          FMemory::Free(local_30[0]);
        }
      }
    }
    if (this->ActivationState == OneShot) {
      this->ActivationState = Inactive;
    }
    FMemScope::~FMemScope(&local_38);
    FLLMScope::~FLLMScope((FLLMScope *)&local_res8);
    if (bVar1) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// CallInitialize @ 147200c40

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMassProcessor::CallInitialize
          (UMassProcessor *this,TNotNull<UObject_*> param_1,
          TSharedRef<FMassEntityManager,1> *param_2)

{
  TWeakObjectPtr<UObject,FWeakObjectPtr> *this_00;
  FMassEntityManager *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  ENetMode EVar5;
  int iVar6;
  undefined8 *puVar7;
  UObject *pUVar8;
  longlong lVar9;
  UWorld *pUVar10;
  FString *pFVar11;
  size_t sVar12;
  int iVar13;
  wchar_t *pwVar14;
  byte bVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  undefined4 local_res8 [2];
  undefined1 local_res20 [8];
  FString local_a8;
  void *local_98 [2];
  FString local_88;
  FString local_78;
  void *local_68 [2];
  FString local_58;
  void *local_48 [2];
  
  bVar3 = false;
  local_res8[0] = 0;
  if (((this->_padding_ & 0x10) != 0) || ((*(byte *)(this->_padding_ + 0xd4) & 1) != 0)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6262752578942009485>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessor.cpp"
                       ,0x8d,
                       "HasAnyFlags(RF_ClassDefaultObject) == false && GetClass()->HasAnyClassFlags(CLASS_Abstract) == false"
                      );
    if (!bVar3) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_2->Object->EnabledDebugFeatures & All) == None) {
    this_00 = &param_2->Object->Owner;
    bVar4 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar4) {
      pUVar8 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      lVar9 = (**(code **)(*(longlong *)pUVar8 + 0x180))(pUVar8);
      if (lVar9 != 0) {
        pUVar10 = FMassEntityManager::GetWorld(param_2->Object);
        EVar5 = UWorld::InternalGetNetMode(pUVar10);
        pFVar11 = ::ToString(&local_58,EVar5);
        if ((pFVar11->Data).ArrayNum == 0) {
          bVar3 = true;
        }
        else {
          bVar3 = true;
        }
      }
    }
    (**(code **)(this->_padding_ + 0x2c0))(this,local_68);
    ::FString::PrintfImpl(&local_a8,L"%s (%s)");
    pFVar11 = &this->DebugDescription;
    if (pFVar11 != &local_a8) {
      pFVar16 = (pFVar11->Data).AllocatorInstance.Data;
      if (pFVar16 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar16);
      }
      (pFVar11->Data).AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      (this->DebugDescription).Data.ArrayNum = local_a8.Data.ArrayNum;
      (this->DebugDescription).Data.ArrayMax = local_a8.Data.ArrayMax;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
    if (!bVar3) goto LAB_147200f23;
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(this->_padding_ + 0x2c0))(this,local_98);
    if (*(int *)(puVar7 + 1) == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)*puVar7;
    }
    ::FString::operator=(&this->DebugDescription,pwVar14);
    if (local_98[0] != (void *)0x0) {
      FMemory::Free(local_98[0]);
    }
    pFVar1 = param_2->Object;
    bVar3 = FWeakObjectPtr::IsValid(&(pFVar1->Owner).WeakPtr);
    if (bVar3) {
      pUVar8 = FWeakObjectPtr::Get(&(pFVar1->Owner).WeakPtr);
      lVar9 = (**(code **)(*(longlong *)pUVar8 + 0x180))(pUVar8);
      if (lVar9 == 0) goto LAB_147200d3f;
      pUVar10 = FMassEntityManager::GetWorld(param_2->Object);
      EVar5 = UWorld::InternalGetNetMode(pUVar10);
      pFVar11 = ::ToString(&local_88,EVar5);
      pFVar16 = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar18 = (pFVar11->Data).ArrayNum;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    else {
LAB_147200d3f:
      pFVar11 = ::FString::FString(&local_78,L"None");
      pFVar16 = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar18 = (pFVar11->Data).ArrayNum;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
      local_88.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    iVar6 = (this->DebugDescription).Data.ArrayNum;
    iVar13 = iVar6 + 2;
    if (iVar6 == 0) {
      iVar13 = 3;
    }
    iVar6 = iVar18 + -1;
    if (iVar18 == 0) {
      iVar6 = 0;
    }
    ::FString::Reserve(&this->DebugDescription,iVar13 + iVar6);
    ::FString::AppendChars(&this->DebugDescription,L" (",2);
    pFVar17 = (FScriptContainerElement *)L"";
    if (iVar18 != 0) {
      pFVar17 = pFVar16;
    }
    sVar12 = wcslen((wchar_t *)pFVar17);
    ::FString::AppendChars(&this->DebugDescription,(wchar_t *)pFVar17,(int)sVar12);
    ::FString::AppendChars(&this->DebugDescription,L")",1);
    local_58.Data.AllocatorInstance.Data = pFVar16;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_147200f23:
  pFVar17 = (this->OwnedQueries).AllocatorInstance.Data;
  iVar18 = (this->OwnedQueries).ArrayNum;
  pFVar16 = pFVar17 + (longlong)iVar18 * 8;
  while( true ) {
    if ((this->OwnedQueries).ArrayNum != iVar18) {
      `TCheckedPointerIterator<FMassEntityQuery_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar17 == pFVar16) break;
    FMassFragmentRequirements::Initialize(*(FMassFragmentRequirements **)pFVar17,param_2);
    pFVar17 = pFVar17 + 8;
  }
  (**(code **)(this->_padding_ + 0x2f8))();
  pFVar17 = (this->OwnedQueries).AllocatorInstance.Data;
  iVar18 = (this->OwnedQueries).ArrayNum;
  bVar15 = (this->ProcessorRequirements).bRequiresGameThreadExecution;
  pFVar16 = pFVar17 + (longlong)iVar18 * 8;
  while( true ) {
    if ((this->OwnedQueries).ArrayNum != iVar18) {
      `TCheckedPointerIterator<FMassEntityQuery_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar17 == pFVar16) break;
    lVar9 = *(longlong *)pFVar17;
    if ((((bVar15 == 0) && (*(char *)(lVar9 + 0x274) == '\0')) && (*(char *)(lVar9 + 0x2b8) == '\0')
        ) && ((*(byte *)(lVar9 + 0x348) & 2) == 0)) {
      pFVar17 = pFVar17 + 8;
    }
    else {
      bVar15 = 1;
      pFVar17 = pFVar17 + 8;
    }
  }
  if ((5 < (byte)LogMass._0_1_) && (this->bRequiresGameThreadExecution != bVar15)) {
    (**(code **)(this->_padding_ + 0x2c0))(this,local_48);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  if ((this->bRequiresGameThreadExecution == '\0') && (bVar15 == 0)) {
    bVar15 = 0;
  }
  else {
    bVar15 = 4;
  }
  this->field_0x62 = this->field_0x62 & 0xfb | bVar15;
  (**(code **)(this->_padding_ + 0x2e8))(this,param_1.Val,param_2);
  this->bInitialized = '\x01';
  return;
}

// ConfigureQueries @ 147205eb0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMassProcessor::ConfigureQueries(UMassProcessor *this,TSharedRef<FMassEntityManager,1> *param_1)

{
  FQueryExecutor *pFVar1;
  void *local_18 [2];
  
  pFVar1 = (this->AutoExecuteQuery).Object;
  if (pFVar1 != (FQueryExecutor *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147205ed9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pFVar1->AccessorsPtr)
              (pFVar1->AccessorsPtr,(pFVar1->BoundQuery).Val,&this->ProcessorRequirements);
    return;
  }
  if ((this->OwnedQueries).ArrayNum != 0) {
    if (FVisualLogger::bIsRecording != 0) {
      (**(code **)(this->_padding_ + 0x2c0))(this,local_18);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this,(FName *)&LogMass.field_0x4,Warning,
                 L"%s has entity queries registered. Make sure to override ConfigureQueries to configure the queries, and do not call the Super implementation"
                );
      if (local_18[0] != (void *)0x0) {
        FMemory::Free(local_18[0]);
      }
    }
    if (2 < (byte)LogMass._0_1_) {
      (**(code **)(this->_padding_ + 0x2c0))(this,local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
      if (local_18[0] != (void *)0x0) {
        FMemory::Free(local_18[0]);
      }
    }
  }
  return;
}

// DebugOutputDescription @ 14720fd70

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
UMassProcessor::DebugOutputDescription(UMassProcessor *this,FOutputDevice *param_1,int param_2)

{
  undefined4 in_register_00000084;
  void *local_18 [2];
  
  (**(code **)(this->_padding_ + 0x2c0))(this,local_18,CONCAT44(in_register_00000084,param_2));
  FOutputDevice::LogfImpl(param_1,L"%*s%s");
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// DispatchProcessorTasks @ 147213690

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UMassProcessor::DispatchProcessorTasks
          (UMassProcessor *this,TSharedPtr<FMassEntityManager,1> *param_1,
          FMassExecutionContext *param_2,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  FMassEntityManager *pFVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  bool bVar11;
  FMassEntityManager *this_00;
  TSharedPtr<FMassEntityManager,1> *pTVar12;
  undefined8 *puVar13;
  UMassProcessor *local_res8;
  ETaskPriority local_res10 [8];
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *in_stack_00000028;
  TSharedPtr<FMassEntityManager,1> local_28;
  
  param_1->Object = (FMassEntityManager *)0x0;
  if ((this->ActivationState == Inactive) &&
     (local_res8 = this,
     bVar11 = `UMassProcessor::DispatchProcessorTasks'::__l3::<lambda_1>::operator()(&local_res8),
     !bVar11)) {
    return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
  }
  if (this->bRequiresGameThreadExecution == '\0') {
    this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x690,8);
    if (this_00 == (FMassEntityManager *)0x0) {
      this_00 = (FMassEntityManager *)0x0;
    }
    else {
      FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,in_stack_00000028);
      this_00->_padding_ = (longlong)&___7__TGraphTask_VFMassProcessorTask____6B_;
    }
    uVar4 = (param_2->FragmentViews).AllocatorInstance.InlineData[1];
    uVar5 = (param_2->FragmentViews).AllocatorInstance.InlineData[2];
    uVar6 = (param_2->FragmentViews).AllocatorInstance.InlineData[3];
    uVar7 = (param_2->FragmentViews).AllocatorInstance.InlineData[4];
    uVar8 = (param_2->FragmentViews).AllocatorInstance.InlineData[5];
    uVar9 = (param_2->FragmentViews).AllocatorInstance.InlineData[6];
    uVar10 = (param_2->FragmentViews).AllocatorInstance.InlineData[7];
    (this_00->FragmentTypeToArchetypeMap).field_0x10 =
         (param_2->FragmentViews).AllocatorInstance.InlineData[0];
    (this_00->FragmentTypeToArchetypeMap).field_0x11 = uVar4;
    (this_00->FragmentTypeToArchetypeMap).field_0x12 = uVar5;
    (this_00->FragmentTypeToArchetypeMap).field_0x13 = uVar6;
    (this_00->FragmentTypeToArchetypeMap).field_0x14 = uVar7;
    (this_00->FragmentTypeToArchetypeMap).field_0x15 = uVar8;
    (this_00->FragmentTypeToArchetypeMap).field_0x16 = uVar9;
    (this_00->FragmentTypeToArchetypeMap).field_0x17 = uVar10;
    lVar2 = *(longlong *)((param_2->FragmentViews).AllocatorInstance.InlineData + 8);
    *(longlong *)&(this_00->FragmentTypeToArchetypeMap).field_0x18 = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    FMassExecutionContext::FMassExecutionContext
              ((FMassExecutionContext *)&(this_00->FragmentTypeToArchetypeMap).field_0x20,
               (FMassExecutionContext *)param_3);
    *(UMassProcessor **)&(this_00->RelationManager).RelationsDataMap.field_0x18 = this;
    (this_00->RelationManager).RelationsDataMap.field_0x20 = 1;
    UE::Tasks::Private::TranslatePriority
              (AnyHiPriThreadHiPriTask,local_res10,(EExtendedTaskPriority *)&local_res8);
    FBaseGraphTask::Init
              ((FBaseGraphTask *)this_00,L"GraphTask",local_res10[0],
               (EExtendedTaskPriority)local_res8,None);
    if (this_00 != (FMassEntityManager *)0x0) {
      LOCK();
      plVar1 = &(this_00->EntityStorage)._padding_;
      *(int *)plVar1 = (int)*plVar1 + 1;
      UNLOCK();
    }
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0x690);
    pTVar12 = (TSharedPtr<FMassEntityManager,1> *)&local_28.SharedReferenceCount;
  }
  else {
    this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x690,8);
    if (this_00 == (FMassEntityManager *)0x0) {
      this_00 = (FMassEntityManager *)0x0;
    }
    else {
      FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,in_stack_00000028);
      this_00->_padding_ = (longlong)&___7__TGraphTask_VFMassProcessorsTask_GameThread____6B_;
    }
    uVar4 = (param_2->FragmentViews).AllocatorInstance.InlineData[1];
    uVar5 = (param_2->FragmentViews).AllocatorInstance.InlineData[2];
    uVar6 = (param_2->FragmentViews).AllocatorInstance.InlineData[3];
    uVar7 = (param_2->FragmentViews).AllocatorInstance.InlineData[4];
    uVar8 = (param_2->FragmentViews).AllocatorInstance.InlineData[5];
    uVar9 = (param_2->FragmentViews).AllocatorInstance.InlineData[6];
    uVar10 = (param_2->FragmentViews).AllocatorInstance.InlineData[7];
    (this_00->FragmentTypeToArchetypeMap).field_0x10 =
         (param_2->FragmentViews).AllocatorInstance.InlineData[0];
    (this_00->FragmentTypeToArchetypeMap).field_0x11 = uVar4;
    (this_00->FragmentTypeToArchetypeMap).field_0x12 = uVar5;
    (this_00->FragmentTypeToArchetypeMap).field_0x13 = uVar6;
    (this_00->FragmentTypeToArchetypeMap).field_0x14 = uVar7;
    (this_00->FragmentTypeToArchetypeMap).field_0x15 = uVar8;
    (this_00->FragmentTypeToArchetypeMap).field_0x16 = uVar9;
    (this_00->FragmentTypeToArchetypeMap).field_0x17 = uVar10;
    lVar2 = *(longlong *)((param_2->FragmentViews).AllocatorInstance.InlineData + 8);
    *(longlong *)&(this_00->FragmentTypeToArchetypeMap).field_0x18 = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    FMassExecutionContext::FMassExecutionContext
              ((FMassExecutionContext *)&(this_00->FragmentTypeToArchetypeMap).field_0x20,
               (FMassExecutionContext *)param_3);
    *(UMassProcessor **)&(this_00->RelationManager).RelationsDataMap.field_0x18 = this;
    (this_00->RelationManager).RelationsDataMap.field_0x20 = 1;
    UE::Tasks::Private::TranslatePriority
              (HighTaskPriority|GameThread,local_res10,(EExtendedTaskPriority *)&local_res8);
    FBaseGraphTask::Init
              ((FBaseGraphTask *)this_00,L"GraphTask",local_res10[0],
               (EExtendedTaskPriority)local_res8,None);
    if (this_00 != (FMassEntityManager *)0x0) {
      LOCK();
      plVar1 = &(this_00->EntityStorage)._padding_;
      *(int *)plVar1 = (int)*plVar1 + 1;
      UNLOCK();
    }
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0x690);
    pTVar12 = &local_28;
  }
  if (param_1 == pTVar12) {
    if (this_00 == (FMassEntityManager *)0x0) {
      return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
    }
    LOCK();
    plVar1 = &(this_00->EntityStorage)._padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 != 1) {
      return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
    }
    puVar13 = (undefined8 *)this_00->_padding_;
  }
  else {
    pFVar3 = param_1->Object;
    param_1->Object = this_00;
    if (pFVar3 == (FMassEntityManager *)0x0) {
      return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
    }
    LOCK();
    plVar1 = &(pFVar3->EntityStorage)._padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 != 1) {
      return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
    }
    puVar13 = (undefined8 *)pFVar3->_padding_;
    this_00 = pFVar3;
  }
  (*(code *)*puVar13)(this_00,1);
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// DoesAnyArchetypeMatchOwnedQueries @ 147214660

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UMassProcessor::DoesAnyArchetypeMatchOwnedQueries(UMassProcessor *this,FMassEntityManager *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FMassEntityQuery *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->OwnedQueries).AllocatorInstance.Data;
  iVar2 = (this->OwnedQueries).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->OwnedQueries).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMassEntityQuery_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    this_00 = *(FMassEntityQuery **)pFVar3;
    FMassEntityQuery::CacheArchetypes(this_00);
    if (0 < (this_00->ValidArchetypes).ArrayNum) {
      return true;
    }
    pFVar3 = pFVar3 + 8;
  }
  return false;
}

// Execute @ 147216570

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassProcessor::Execute
          (UMassProcessor *this,FMassEntityManager *param_1,FMassExecutionContext *param_2)

{
  FQueryExecutor *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *local_18 [2];
  
  pFVar1 = (this->AutoExecuteQuery).Object;
  if (pFVar1 != (FQueryExecutor *)0x0) {
    if (((pFVar1->AccessorsPtr != (FQueryDefinitionBase *)0x0) &&
        ((FQueryExecutor *)((longlong)&pFVar1->_padding_ + (ulonglong)pFVar1->DebugSize) < pFVar1))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("ExecutorStart <= AccessorsStart && AccessorsStart <= ExecutorEnd",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassQueryExecutor.cpp"
                              ,0x2f,
                              L"Accessors assigned to a FQueryExecutor must be member variables of that struct."
                             ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)((longlong)*pFVar1->AccessorsPtr + 8))(pFVar1->AccessorsPtr,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001472165e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,param_2);
    return;
  }
  (**(code **)(this->_padding_ + 0x2c0))(this,local_18);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessor.cpp"
                     ,0x135,
                     L"UMassProcessor::Execute should never be called without an AutoExecuteQuery set. Override the function or populate AutoExecuteQuery. Processor name: %s"
                    );
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// ExportRequirements @ 147219740

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassProcessor::ExportRequirements(UMassProcessor *this,FMassExecutionRequirements *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FMassFragmentRequirements *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->OwnedQueries).AllocatorInstance.Data;
  iVar2 = (this->OwnedQueries).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->OwnedQueries).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMassEntityQuery_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    this_00 = *(FMassFragmentRequirements **)pFVar3;
    FMassSubsystemRequirements::ExportRequirements
              ((FMassSubsystemRequirements *)(this_00 + 1),param_1);
    FMassFragmentRequirements::ExportRequirements(this_00,param_1);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// GetArchetypesMatchingOwnedQueries @ 14721fb00

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMassProcessor::GetArchetypesMatchingOwnedQueries
          (UMassProcessor *this,FMassEntityManager *param_1,
          TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FMassEntityQuery *this_00;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FName local_res8;
  FString local_48;
  
  if ((2 < (byte)LogMass._0_1_) && ((this->OwnedQueries).ArrayNum == 0)) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_48);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = (this->OwnedQueries).AllocatorInstance.Data;
  iVar2 = (this->OwnedQueries).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->OwnedQueries).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMassEntityQuery_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar6 == pFVar1) break;
    this_00 = *(FMassEntityQuery **)pFVar6;
    FMassEntityQuery::CacheArchetypes(this_00);
    iVar3 = (this_00->ValidArchetypes).ArrayNum;
    pFVar4 = (this_00->ValidArchetypes).AllocatorInstance.Data;
    pFVar5 = pFVar4 + (longlong)iVar3 * 0x10;
    while( true ) {
      if ((this_00->ValidArchetypes).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FMassArchetypeHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar4 == pFVar5) break;
      TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FMassArchetypeHandle_const_&>(param_2,(FMassArchetypeHandle *)pFVar4);
      pFVar4 = pFVar4 + 0x10;
    }
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// GetPrivateStaticClass @ 147224b30

UClass * __cdecl UMassProcessor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassProcessor",
               &Z_Registration_Info_UClass_UMassProcessor.InnerSingleton,
               StaticRegisterNativesUMassProcessor,0xe0,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Mass",InternalConstructor<UMassProcessor>,
               InternalVTableHelperCtorCaller<UMassProcessor>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassProcessor.InnerSingleton;
}

// GetProcessingPhase @ 147225250

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

EMassProcessingPhase __thiscall UMassProcessor::GetProcessingPhase(UMassProcessor *this)

{
  return this->ProcessingPhase;
}

// GetProcessorName @ 147225350

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

FString * __thiscall
UMassProcessor::GetProcessorName(UMassProcessor *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)this->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Initialize @ 14722f510

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall UMassProcessor::Initialize(UMassProcessor *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  UMassEntitySubsystem *pUVar3;
  TSharedRef<FMassEntityManager,1> *pTVar4;
  FMassEntityManager *pFVar5;
  undefined1 local_res10 [8];
  TSharedRef<FMassEntityManager,1> local_18;
  
  this_00 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  if ((this_00 == (UWorld *)0x0) ||
     (pUVar3 = UWorld::GetSubsystem<UMassEntitySubsystem>(this_00),
     pUVar3 == (UMassEntitySubsystem *)0x0)) {
    pFVar5 = (FMassEntityManager *)0x0;
  }
  else {
    if (((pUVar3->EntityManager).Object == (FMassEntityManager *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("EntityManager",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntitySubsystem.h"
                           ,0x24,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar5 = (pUVar3->EntityManager).Object;
    if (pFVar5 != (FMassEntityManager *)0x0) goto LAB_14722f594;
  }
  bVar2 = `UMassProcessor::Initialize'::__l3::<lambda_1>::operator()(local_res10);
  if (!bVar2) {
    return;
  }
LAB_14722f594:
  pcVar1 = *(code **)(this->_padding_ + 0x2e8);
  pTVar4 = TSharedFromThis<FMassEntityManager,1>::AsShared
                     ((TSharedFromThis<FMassEntityManager,1> *)&pFVar5->_padding_,&local_18);
  (*pcVar1)(this,param_1,pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// InitializeInternal @ 14722fd60

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassProcessor::InitializeInternal
          (UMassProcessor *this,UObject *param_1,TSharedRef<FMassEntityManager,1> *param_2)

{
  return;
}

// PostInitProperties @ 14723cf50

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall UMassProcessor::PostInitProperties(UMassProcessor *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  FString *pFVar3;
  void *local_18 [2];
  
  UObject::PostInitProperties((UObject *)this);
  puVar2 = (undefined8 *)(**(code **)(this->_padding_ + 0x2c0))(this,local_18);
  pFVar3 = &this->StatId;
  if (pFVar3 != (FString *)puVar2) {
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar2;
    *puVar2 = 0;
    (this->StatId).Data.ArrayNum = *(int *)(puVar2 + 1);
    (this->StatId).Data.ArrayMax = *(int *)((longlong)puVar2 + 0xc);
    puVar2[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// RegisterQuery @ 14723f690

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMassProcessor::RegisterQuery(UMassProcessor *this,FMassEntityQuery *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMassEntityQuery *local_res8;
  void *local_28 [2];
  void *local_18 [2];
  
  if ((this <= param_1) &&
     (iVar3 = (int)*(short *)(this->_padding_ + 0x5c),
     param_1 + 1 <=
     (FMassEntityQuery *)
     ((longlong)&this->_padding_ +
     (longlong)(*(int *)(this->_padding_ + 0x58) + -1 + iVar3 & -iVar3)))) {
    local_res8 = param_1;
    TArray<FMassEntityQuery_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FMassEntityQuery_*>
              (&this->OwnedQueries,&local_res8);
    return;
  }
  (**(code **)(this->_padding_ + 0x2c0))(this,local_28);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessor.cpp"
                     ,0x15f,
                     L"Registering entity query for %s while the query is not given processor\'s member variable. Skipping."
                    );
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (1 < (byte)LogMass._0_1_) {
    (**(code **)(this->_padding_ + 0x2c0))(this,local_18);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return;
}

// SetProcessingPhase @ 14724ccd0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
UMassProcessor::SetProcessingPhase(UMassProcessor *this,EMassProcessingPhase param_1)

{
  this->ProcessingPhase = param_1;
  return;
}

// SetShouldAutoRegisterWithGlobalList @ 14724d910

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
UMassProcessor::SetShouldAutoRegisterWithGlobalList(UMassProcessor *this,bool param_1)

{
  bool bVar1;
  undefined1 local_res8 [8];
  
  if (((this->_padding_ & 0x10) == 0) &&
     (bVar1 = `UMassProcessor::SetShouldAutoRegisterWithGlobalList'::__l3::<lambda_1>::operator()
                        (local_res8), !bVar1)) {
    return;
  }
  this->bAutoRegisterWithProcessingPhases = '\0';
  this->field_0x62 = this->field_0x62 | param_1;
  return;
}

// ShouldAllowQueryBasedPruning @ 14724d990

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall UMassProcessor::ShouldAllowQueryBasedPruning(UMassProcessor *this,bool param_1)

{
  if ((param_1) && (this->QueryBasedPruning == Default)) {
    return true;
  }
  return false;
}

// StaticRegisterNativesUMassProcessor @ 147250750

void __cdecl UMassProcessor::StaticRegisterNativesUMassProcessor(void)

{
  return;
}

// operator() @ 1505035d0

bool __thiscall `UMassProcessor::CallExecute'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  void *local_18 [2];
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6262752578942009614>);
  if (bVar2) {
    (**(code **)(**(longlong **)this + 0x2c0))(*(longlong **)this,local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6262752578942009614>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050363b;
    }
  }
  bVar2 = false;
LAB_15050363b:
  if ((bVar4) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150503810

bool __thiscall `UMassProcessor::DispatchProcessorTasks'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  void *local_18 [2];
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6262752578942009703>);
  if (bVar2) {
    (**(code **)(**(longlong **)this + 0x2c0))(*(longlong **)this,local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6262752578942009703>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15050387b;
    }
  }
  bVar2 = false;
LAB_15050387b:
  if ((bVar4) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505039d0

bool __thiscall `UMassProcessor::Initialize'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6262752578942010062>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6262752578942010062>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150503d80

bool __thiscall
`UMassProcessor::SetShouldAutoRegisterWithGlobalList'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6262752578942009557>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6262752578942009557>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

