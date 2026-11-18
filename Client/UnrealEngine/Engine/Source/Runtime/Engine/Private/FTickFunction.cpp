// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// StaticStruct @ 1472753d0

UScriptStruct * __cdecl FTickFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTickFunction.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FTickFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTickFunction,(UObject *)pUVar1,L"TickFunction");
  }
  return Z_Registration_Info_UScriptStruct_FTickFunction.OuterSingleton;
}

// CanDispatchManually @ 1488a3ac0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FTickFunction::CanDispatchManually(FTickFunction *this)

{
  FInternalData *pFVar1;
  
  if ((this->bDispatchManually == '\x01' && this->bWasDispatchedManually == '\0') &&
     (pFVar1 = (this->InternalData).Ptr, pFVar1 != (FInternalData *)0x0)) {
    return pFVar1->TaskState == HasTask;
  }
  return false;
}

// DispatchManually @ 1488a3af0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FTickFunction::DispatchManually(FTickFunction *this)

{
  FInternalData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FTaskBase *this_00;
  
  if (this->bDispatchManually == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7009048750584760836>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                       ,0xa04,"bDispatchManually");
    if (!bVar3) {
      return false;
    }
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  cVar5 = (**(code **)(this->_padding_ + 8))();
  if (cVar5 == '\0') {
    return false;
  }
  pFVar1 = (this->InternalData).Ptr;
  if ((pFVar1 == (FInternalData *)0x0) || (pFVar1->TaskState != HasTask)) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    this_00 = pFVar1->TaskPointer;
    if (this_00 != (FTaskBase *)0x0) goto LAB_1488a3b85;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Task",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                     ,0xa07,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_1488a3b85:
  this->bWasDispatchedManually = '\x01';
  if (this_00->ExtendedPriority == TaskEvent) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0);
  return true;
}

// FTickFunction @ 1488af0d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTickFunction * __thiscall FTickFunction::FTickFunction(FTickFunction *this)

{
  undefined1 *puVar1;
  
  this->field_0xb = this->field_0xb & 0xf4;
  this->field_0xb = this->field_0xb | 4;
  this->_padding_ = (longlong)&___7FTickFunction__6B_;
  this->TickInterval = 0.0;
  (this->Prerequisites).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Prerequisites).ArrayNum = 0;
  (this->Prerequisites).ArrayMax = 0;
  (this->InternalData).Ptr = (FInternalData *)0x0;
  this->TickGroup = '\0';
  this->EndTickGroup = '\0';
  puVar1 = &this->field_0xa;
  this->bTickEvenWhenPaused = '\0';
  this->bRunTransactionally = '\0';
  this->bRunOnAnyThread = '\0';
  this->bHighPriority = '\0';
  this->bAllowTickBatching = '\0';
  this->bAllowTickOnDedicatedServer = '\x01';
  this->bStartWithTickEnabled = '\0';
  this->bCanEverTick = '\0';
  return this;
}

// ~FTickFunction @ 1488b23b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTickFunction::~FTickFunction(FTickFunction *this)

{
  FInternalData *pFVar1;
  FTickTaskLevel *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)&___7FTickFunction__6B_;
  pFVar1 = (this->InternalData).Ptr;
  if ((pFVar1 != (FInternalData *)0x0) && (pFVar1->bRegistered)) {
    FTickTaskManager::Get();
    if ((this->InternalData).Ptr == (FInternalData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TickFunction->InternalData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                         ,0x8a0,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this_00 = ((this->InternalData).Ptr)->TickTaskLevel;
    if (this_00 == (FTickTaskLevel *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Level",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                         ,0x8a2,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FTickTaskLevel::RemoveTickFunction(this_00,this);
    pFVar1 = (this->InternalData).Ptr;
    pFVar1->bRegistered = false;
  }
  ::operator_delete((this->InternalData).Ptr,0x30);
  pFVar2 = (this->Prerequisites).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// AddPrerequisite @ 1488b8e60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTickFunction::AddPrerequisite(FTickFunction *this,UObject *param_1,FTickFunction *param_2)

{
  FInternalData *pFVar1;
  bool bVar2;
  bool bVar3;
  UObject *local_res8;
  FTickPrerequisite local_18;
  
  if ((this->bCanEverTick != '\0') ||
     ((pFVar1 = (this->InternalData).Ptr, pFVar1 != (FInternalData *)0x0 && (pFVar1->bRegistered))))
  {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((param_2->bCanEverTick != '\0') ||
     ((pFVar1 = (param_2->InternalData).Ptr, pFVar1 != (FInternalData *)0x0 && (pFVar1->bRegistered)
      ))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((bVar2) && (bVar3)) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_18.PrerequisiteObject.WeakPtr.ObjectIndex = 0;
    local_18.PrerequisiteObject.WeakPtr.ObjectSerialNumber = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_18,(FObjectPtr)&local_res8);
    local_18.PrerequisiteTickFunction = param_2;
    TArray<FTickPrerequisite,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FTickPrerequisite>
              (&this->Prerequisites,&local_18);
  }
  return;
}

// CalculateDeltaTime @ 1488b9a20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall
FTickFunction::CalculateDeltaTime(FTickFunction *this,float param_1,UWorld *param_2)

{
  FInternalData *pFVar1;
  
  pFVar1 = (this->InternalData).Ptr;
  if (!pFVar1->bWasInterval) {
    pFVar1->LastTickGameTimeSeconds = __real_bf800000;
    return param_1;
  }
  if (0.0 <= pFVar1->LastTickGameTimeSeconds) {
    param_1 = (float)(&param_2->TimeSeconds)[this->bTickEvenWhenPaused] -
              pFVar1->LastTickGameTimeSeconds;
  }
  pFVar1->LastTickGameTimeSeconds = (float)(&param_2->TimeSeconds)[this->bTickEvenWhenPaused];
  return param_1;
}

// ClearTaskInformation @ 1488baaf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTickFunction::ClearTaskInformation(FTickFunction *this)

{
  FInternalData *pFVar1;
  
  pFVar1 = (this->InternalData).Ptr;
  if (pFVar1 != (FInternalData *)0x0) {
    pFVar1->TaskState = NotQueued;
    ((this->InternalData).Ptr)->TaskPointer = (void *)0x0;
  }
  return;
}

// DiagnosticMessage @ 1488bc470

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
FTickFunction::DiagnosticMessage(FTickFunction *this,FString *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\EngineBaseTypes.h"
             ,0x1e9,L"Pure virtual not implemented (%s)");
  ::FString::FString(__return_storage_ptr__,L"DiagnosticMessage() not implemented");
  return __return_storage_ptr__;
}

// ExecuteNestedTick @ 1488bec50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTickFunction::ExecuteNestedTick
          (FTickFunction *this,float param_1,ELevelTick param_2,Type param_3,
          TRefCountPtr<FBaseGraphTask> *param_4)

{
  FInternalData *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->InternalData).Ptr;
  if (((pFVar1 != (FInternalData *)0x0) && (pFVar1->TaskState == HasTask)) &&
     (pFVar1->TaskPointer != (void *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTaskPointer(ETickTaskState::HasTask) == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                       ,0xa17,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_4->Reference != (FBaseGraphTask *)0x0) &&
     (pFVar1 = (this->InternalData).Ptr, pFVar1 != (FInternalData *)0x0)) {
    pFVar1->TaskState = HasCompletionEvent;
    ((this->InternalData).Ptr)->TaskPointer = param_4;
  }
  (**(code **)(this->_padding_ + 0x18))(this,param_1,param_2,param_3,param_4);
  pFVar1 = (this->InternalData).Ptr;
  if (pFVar1 != (FInternalData *)0x0) {
    pFVar1->TaskState = NotQueued;
    ((this->InternalData).Ptr)->TaskPointer = (void *)0x0;
  }
  return;
}

// ExecuteTick @ 1488bf7b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTickFunction::ExecuteTick
          (FTickFunction *this,float param_1,ELevelTick param_2,Type param_3,
          TRefCountPtr<FBaseGraphTask> *param_4)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\EngineBaseTypes.h"
             ,0x1e1,L"Pure virtual not implemented (%s)");
  return;
}

// GetCompletionHandle @ 1488c24b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall FTickFunction::GetCompletionHandle(FTickFunction *this)

{
  FInternalData *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<FBaseGraphTask> TVar5;
  FBaseGraphTask *in_RDX;
  void *pvVar6;
  
  if (((this->InternalData).Ptr == (FInternalData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InternalData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                         ,0x9ed,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar5.Reference = (FBaseGraphTask *)(*pcVar3)();
    return (TRefCountPtr<FBaseGraphTask>)TVar5.Reference;
  }
  pFVar1 = (this->InternalData).Ptr;
  if (pFVar1->TaskState == HasCompletionEvent) {
    lVar2 = *(longlong *)pFVar1->TaskPointer;
    *(longlong *)in_RDX = lVar2;
    if (lVar2 == 0) {
      return (TRefCountPtr<FBaseGraphTask>)in_RDX;
    }
    LOCK();
    *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
    UNLOCK();
    return (TRefCountPtr<FBaseGraphTask>)in_RDX;
  }
  if ((pFVar1 == (FInternalData *)0x0) || (pFVar1->TaskState != HasTask)) {
    pvVar6 = (void *)0x0;
  }
  else {
    pvVar6 = pFVar1->TaskPointer;
    if (pvVar6 != (void *)0x0) goto LAB_1488c2556;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Task",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                     ,0x9f5,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    TVar5.Reference = (FBaseGraphTask *)(*pcVar3)();
    return (TRefCountPtr<FBaseGraphTask>)TVar5.Reference;
  }
LAB_1488c2556:
  *(void **)in_RDX = pvVar6;
  if (pvVar6 != (void *)0x0) {
    LOCK();
    *(int *)((longlong)pvVar6 + 0x30) = *(int *)((longlong)pvVar6 + 0x30) + 1;
    UNLOCK();
  }
  return (TRefCountPtr<FBaseGraphTask>)in_RDX;
}

// IsCompletionHandleValid @ 1488cd010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FTickFunction::IsCompletionHandleValid(FTickFunction *this)

{
  ETickTaskState EVar1;
  FInternalData *pFVar2;
  
  pFVar2 = (this->InternalData).Ptr;
  if ((pFVar2 != (FInternalData *)0x0) &&
     ((EVar1 = pFVar2->TaskState, EVar1 == HasTask || (EVar1 == HasCompletionEvent)))) {
    return true;
  }
  return false;
}

// LogTickFunction @ 1488ce370

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTickFunction::LogTickFunction(FTickFunction *this,Type param_1,bool param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  Type local_68;
  undefined1 local_64;
  int local_60;
  code *local_58;
  Type *local_50;
  void *local_48 [2];
  
  if (4 < (byte)LogTick._0_1_) {
    (**(code **)(this->_padding_ + 0x20))(this,local_48);
    if (((param_3 * 2 < 0) || (0xff < param_3 * 2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x272,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTick);
    if (local_48[0] != (void *)0x0) {
      FMemory::Free(local_48[0]);
    }
  }
  if (param_2) {
    ShowPrerequistes(this,1);
  }
  local_50 = &local_68;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTickFunction::LogTickFunction'::__l2::<lambda_1>,void,FTickFunction_&>
             ::Call;
  local_68 = param_1;
  local_64 = param_2;
  local_60 = param_3;
  (**(code **)(this->_padding_ + 0x30))(this,&local_58);
  return;
}

// QueueTickFunction @ 1488d2b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTickFunction::QueueTickFunction
          (FTickFunction *this,FTickTaskSequencer *param_1,FTickContext *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  FInternalData *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FTickTaskSequencer *pFVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TEnumAsByte<ETickingGroup> *pTVar11;
  ForElementType<FTickFunction_*> FVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  atomic<unsigned_int> aVar16;
  undefined1 auStackY_108 [32];
  FTickFunction *local_b8;
  atomic<unsigned_int> local_b0;
  uint local_ac;
  uint local_a8;
  longlong local_a0;
  FTickTaskSequencer *local_98;
  void *local_88 [2];
  void *local_78 [2];
  TArray<FTickFunction_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_68;
  ulonglong local_48;
  
  aVar16 = GFrameCounter._0_4_;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar4 = (this->InternalData).Ptr;
  local_b0 = GFrameCounter._0_4_;
  local_98 = param_1;
  if ((((pFVar4 == (FInternalData *)0x0) || (!pFVar4->bRegistered)) ||
      (pFVar4->TickVisitedGFrameCounter == GFrameCounter._0_4_)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsTickFunctionRegistered() && !TTS.HasBeenVisited(this, CurrentFrameCounter)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                         ,0xa3f,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  ((this->InternalData).Ptr)->TickVisitedGFrameCounter = aVar16;
  if (this->TickState != Disabled) {
    uVar15 = 0;
    local_ac = 0;
    local_a8 = 0;
    local_68.AllocatorInstance.SecondaryData = (ForElementType<FTickFunction_*>)0x0;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 2;
    if (0 < (this->Prerequisites).ArrayNum) {
      local_a0 = 0;
      do {
        lVar13 = local_a0;
        uVar14 = ~uVar15 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar15 < (this->Prerequisites).ArrayNum) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_b8 = *(FTickFunction **)((this->Prerequisites).AllocatorInstance.Data + lVar13 + 8);
        uVar9 = 0;
        if ((int)uVar15 < (this->Prerequisites).ArrayNum) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar8 = FWeakObjectPtr::IsValid
                          ((FWeakObjectPtr *)
                           ((this->Prerequisites).AllocatorInstance.Data +
                           (longlong)(int)uVar15 * 0x10),true,false);
        pFVar7 = local_98;
        aVar16 = local_b0;
        if (bVar8) {
          pFVar4 = (local_b8->InternalData).Ptr;
          if ((pFVar4 != (FInternalData *)0x0) && (pFVar4->bRegistered)) {
            if (pFVar4->TickVisitedGFrameCounter != local_b0) {
              QueueTickFunction(local_b8,local_98,param_2);
            }
            if (((local_b8->InternalData).Ptr)->TickQueuedGFrameCounter == aVar16) {
              pFVar4 = (local_b8->InternalData).Ptr;
              if (pFVar4->TaskState != NotQueued) {
                if (pFVar4 == (FInternalData *)0x0) {
                  pTVar11 = &local_b8->EndTickGroup;
                }
                else {
                  pTVar11 = &pFVar4->ActualEndTickGroup;
                }
                if (((pFVar7->bAllowOptimizedPrerequisites == false) ||
                    ((this->TickGroup).Value <= pTVar11->Value)) || (pTVar11->Value == 2)) {
                  bVar2 = (pFVar4->ActualStartTickGroup).Value;
                  uVar9 = (uint)bVar2;
                  if ((int)(uint)bVar2 < (int)local_ac) {
                    uVar9 = local_ac;
                  }
                  bVar2 = (pFVar4->ActualEndTickGroup).Value;
                  uVar14 = (uint)bVar2;
                  if ((int)(uint)bVar2 < (int)local_a8) {
                    uVar14 = local_a8;
                  }
                  FVar12 = (ForElementType<FTickFunction_*>)&local_68;
                  if (local_68.AllocatorInstance.SecondaryData !=
                      (ForElementType<FTickFunction_*>)0x0) {
                    FVar12 = local_68.AllocatorInstance.SecondaryData;
                  }
                  local_ac = uVar9;
                  local_a8 = uVar14;
                  if ((ulonglong)FVar12 <= &local_b8) {
                    FVar12 = (ForElementType<FTickFunction_*>)&local_68;
                    if (local_68.AllocatorInstance.SecondaryData !=
                        (ForElementType<FTickFunction_*>)0x0) {
                      FVar12 = local_68.AllocatorInstance.SecondaryData;
                    }
                    if ((&local_b8 <
                         (FTickFunction **)((longlong)FVar12 + (longlong)local_68.ArrayMax * 8)) &&
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
                  }
                  if (local_68.ArrayNum == local_68.ArrayMax) {
                    local_68.ArrayNum =
                         UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FTickFunction_*>_>
                                   (0x808,&local_68.AllocatorInstance,&local_68.ArrayMax);
                  }
                  lVar13 = (longlong)local_68.ArrayNum;
                  FVar12 = (ForElementType<FTickFunction_*>)&local_68;
                  if (local_68.AllocatorInstance.SecondaryData !=
                      (ForElementType<FTickFunction_*>)0x0) {
                    FVar12 = local_68.AllocatorInstance.SecondaryData;
                  }
                  local_68.ArrayNum = local_68.ArrayNum + 1;
                  *(FTickFunction **)((longlong)FVar12 + lVar13 * 8) = local_b8;
                }
              }
            }
            else if (2 < (byte)LogTick._0_1_) {
              (**(code **)(local_b8->_padding_ + 0x20))(local_b8,local_78);
              (**(code **)(this->_padding_ + 0x20))(this,local_88);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTick);
              if (local_88[0] != (void *)0x0) {
                FMemory::Free(local_88[0]);
              }
              if (local_78[0] != (void *)0x0) {
                FMemory::Free(local_78[0]);
              }
            }
          }
        }
        else {
          local_a0 = local_a0 + -0x10;
          uVar9 = 0;
          if ((int)uVar15 < (this->Prerequisites).ArrayNum) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar3 = (this->Prerequisites).ArrayNum;
          pFVar5 = (this->Prerequisites).AllocatorInstance.Data;
          iVar10 = ~uVar15 + iVar3;
          if (1 < iVar10) {
            iVar10 = 1;
          }
          if (iVar10 != 0) {
            memmove(pFVar5 + (longlong)(int)uVar15 * 0x10,pFVar5 + (longlong)(iVar3 - iVar10) * 0x10
                    ,(longlong)iVar10 << 4);
          }
          piVar1 = &(this->Prerequisites).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&(this->Prerequisites).AllocatorInstance,(this->Prerequisites).ArrayNum,
                     &(this->Prerequisites).ArrayMax);
          aVar16 = local_b0;
          uVar15 = uVar15 - 1;
        }
        uVar15 = uVar15 + 1;
        local_a0 = local_a0 + 0x10;
        param_1 = local_98;
      } while ((int)uVar15 < (this->Prerequisites).ArrayNum);
    }
    bVar2 = (this->TickGroup).Value;
    uVar15 = (uint)(param_2->TickGroup).Value;
    if (uVar15 < bVar2) {
      uVar15 = (uint)bVar2;
    }
    if ((int)uVar15 < (int)local_ac) {
      uVar15 = local_ac;
    }
    if (bVar2 != uVar15) {
      for (; (uVar15 == 1 || (uVar15 == 3)); uVar15 = uVar15 + 1) {
      }
    }
    (((this->InternalData).Ptr)->ActualStartTickGroup).Value = (uchar)uVar15;
    (((this->InternalData).Ptr)->ActualEndTickGroup).Value = (uchar)uVar15;
    uVar14 = (uint)(this->EndTickGroup).Value;
    uVar9 = uVar15;
    if ((int)uVar15 < (int)uVar14) {
      uVar9 = uVar14;
    }
    if ((int)uVar9 < (int)local_a8) {
      uVar9 = local_a8;
    }
    if ((int)uVar15 < (int)uVar9) {
      if ((7 < (int)uVar9) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("MyActualEndTickGroup <= TG_NewlySpawned",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                             ,0xa7e,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      while (uVar15 = uVar15 + 1, (int)uVar15 <= (int)uVar9) {
        if ((uVar15 != 1) && (uVar15 != 3)) {
          (((this->InternalData).Ptr)->ActualEndTickGroup).Value = (uchar)uVar15;
        }
      }
    }
    if (this->TickState == Enabled) {
      FTickTaskSequencer::QueueOrBatchTickTask(param_1,&local_68,this,param_2);
    }
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<FTickFunction_*>)0x0) {
      FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
    }
  }
  ((this->InternalData).Ptr)->TickQueuedGFrameCounter = aVar16;
  return;
}

// QueueTickFunctionParallel @ 1488d30d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FTickFunction::QueueTickFunctionParallel
          (FTickFunction *this,FTickContext *param_1,
          TArray<FTickFunction_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  void *_Dst;
  undefined1 *puVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined1 uVar6;
  byte bVar7;
  int iVar8;
  FInternalData *pFVar9;
  ForElementType<FTickFunction_*> FVar10;
  FWeakObjectPtr this_00;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  bool bVar13;
  bool bVar14;
  FTickContext *pFVar15;
  atomic<unsigned_int> aVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  Type TVar20;
  TRefCountPtr<FBaseGraphTask> TVar21;
  FTickTaskSequencer *pFVar22;
  FTaskBase *this_01;
  FName *pFVar23;
  FThreadSafeStaticStat<_private:_void___cdecl_FTickFunction::QueueTickFunctionParallel(FTickContext_const_&,TArray<FTickFunction_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&)_::_88_::FStat_STAT_FTickFunction_QueueTickFunctionParallel_Spin>
  FVar24;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  ForElementType<FTickFunction_*> FVar25;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar26;
  longlong lVar27;
  FNameEntryId FVar28;
  FWeakObjectPtr *this_04;
  FTaskBase *this_05;
  FName FVar29;
  uint uVar30;
  TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar31;
  atomic<unsigned_int> aVar32;
  atomic<unsigned_int> aVar33;
  uint uVar34;
  FNameEntryId FVar35;
  bool bVar36;
  undefined1 auStackY_198 [32];
  uint local_138;
  uint local_134;
  EExtendedTaskPriority local_130;
  ETaskPriority local_12f [3];
  uint local_12c;
  atomic<unsigned_int> local_128;
  FColor_u_0 local_124;
  longlong local_120;
  longlong local_118;
  FName local_110;
  FTickFunction *local_108;
  FName local_100;
  FTickContext *local_f0;
  UWorld *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  LARGE_INTEGER local_c8;
  FTickScheduleDetails local_c0;
  FStatMessage local_b0;
  FName local_a0;
  FName local_98;
  void *local_90 [2];
  void *local_80 [2];
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_70;
  ulonglong local_40;
  
  aVar33 = GFrameCounter._0_4_;
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_128 = GFrameCounter._0_4_;
  aVar32 = ((this->InternalData).Ptr)->TickVisitedGFrameCounter;
  if (aVar32 != GFrameCounter._0_4_) {
    paVar1 = &((this->InternalData).Ptr)->TickVisitedGFrameCounter;
    LOCK();
    aVar16 = *paVar1;
    bVar36 = aVar32 == aVar16;
    if (bVar36) {
      *paVar1 = GFrameCounter._0_4_;
      aVar16 = aVar32;
    }
    UNLOCK();
    if (!bVar36) {
      aVar32 = aVar16;
    }
  }
  local_f0 = param_1;
  if (aVar32 != aVar33) {
    pFVar9 = (this->InternalData).Ptr;
    if (((pFVar9 == (FInternalData *)0x0) || (!pFVar9->bRegistered)) &&
       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsTickFunctionRegistered()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                            ,0xaa1,L""), bVar36)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if (this->TickState != Disabled) {
      local_70.ArrayMax = 4;
      uVar30 = 0;
      local_138 = 0;
      local_134 = 0;
      local_70.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_70.ArrayNum = 0;
      uVar18 = uVar30;
      if ((this->Prerequisites).ArrayNum != 0) {
        FVar10 = (param_2->AllocatorInstance).SecondaryData;
        FVar25 = (ForElementType<FTickFunction_*>)param_2;
        if (FVar10 != (ForElementType<FTickFunction_*>)0x0) {
          FVar25 = FVar10;
        }
        local_108 = this;
        if ((ulonglong)FVar25 <= &local_108) {
          FVar25 = (ForElementType<FTickFunction_*>)param_2;
          if (FVar10 != (ForElementType<FTickFunction_*>)0x0) {
            FVar25 = FVar10;
          }
          if ((&local_108 < (FTickFunction **)((longlong)FVar25 + (longlong)param_2->ArrayMax * 8))
             && (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar36)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        iVar17 = param_2->ArrayNum;
        if (iVar17 == param_2->ArrayMax) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FTickFunction_*>_>
                             (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar17 + 1;
        FVar10 = (param_2->AllocatorInstance).SecondaryData;
        FVar25 = (ForElementType<FTickFunction_*>)param_2;
        if (FVar10 != (ForElementType<FTickFunction_*>)0x0) {
          FVar25 = FVar10;
        }
        *(FTickFunction **)((longlong)FVar25 + (longlong)iVar17 * 8) = local_108;
        local_12c = 0;
        uVar30 = 0;
        uVar18 = 0;
        if (0 < (this->Prerequisites).ArrayNum) {
          local_120 = 0;
          local_118 = 0;
          do {
            lVar27 = local_118;
            uVar34 = ~local_12c;
            uVar30 = uVar34 >> 0x1f;
            uVar18 = 0;
            if ((int)local_12c < (this->Prerequisites).ArrayNum) {
              uVar18 = uVar30;
            }
            if ((uVar18 == 0) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar36)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            this_04 = (FWeakObjectPtr *)((this->Prerequisites).AllocatorInstance.Data + local_118);
            bVar36 = FWeakObjectPtr::IsValid(this_04,true,false);
            if ((bVar36) && (this_00 = this_04[1], this_00 != (FWeakObjectPtr)0x0)) {
              FVar10 = (param_2->AllocatorInstance).SecondaryData;
              FVar25 = (ForElementType<FTickFunction_*>)param_2;
              if (FVar10 != (ForElementType<FTickFunction_*>)0x0) {
                FVar25 = FVar10;
              }
              FVar10 = (ForElementType<FTickFunction_*>)
                       ((longlong)FVar25 + (longlong)param_2->ArrayNum * 8);
              for (; FVar25 != FVar10;
                  FVar25 = (ForElementType<FTickFunction_*>)((longlong)FVar25 + 8)) {
                if (*(FWeakObjectPtr *)FVar25 == this_00) {
                  if (2 < (byte)LogTick._0_1_) {
                    (**(code **)(*(longlong *)this_00 + 0x20))(this_00,local_80);
                    (**(code **)(this->_padding_ + 0x20))(this,local_90);
                    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTick);
                    if (local_90[0] != (void *)0x0) {
                      FMemory::Free(local_90[0]);
                    }
                    if (local_80[0] != (void *)0x0) {
                      FMemory::Free(local_80[0]);
                    }
                  }
                  goto LAB_1488d3550;
                }
              }
              pFVar9 = ((TUniquePtr<FTickFunction::FInternalData,TDefaultDelete<FTickFunction::FInternalData>_>
                         *)((longlong)this_00 + 0x20))->Ptr;
              if ((pFVar9 != (FInternalData *)0x0) && (pFVar9->bRegistered)) {
                QueueTickFunctionParallel((FTickFunction *)this_00,local_f0,param_2);
                pFVar9 = ((TUniquePtr<FTickFunction::FInternalData,TDefaultDelete<FTickFunction::FInternalData>_>
                           *)((longlong)this_00 + 0x20))->Ptr;
                if ((pFVar9 != (FInternalData *)0x0) &&
                   ((pFVar9->TaskState == HasTask || (pFVar9->TaskState == HasCompletionEvent)))) {
                  bVar5 = (pFVar9->ActualStartTickGroup).Value;
                  uVar18 = (uint)bVar5;
                  if (bVar5 < local_138) {
                    uVar18 = local_138;
                  }
                  bVar5 = (pFVar9->ActualEndTickGroup).Value;
                  uVar30 = (uint)bVar5;
                  if (bVar5 < local_134) {
                    uVar30 = local_134;
                  }
                  TVar21 = GetCompletionHandle((FTickFunction *)this_00);
                  FVar26 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_70;
                  if (local_70.AllocatorInstance.SecondaryData !=
                      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                    FVar26 = local_70.AllocatorInstance.SecondaryData;
                  }
                  if ((ulonglong)FVar26 <= TVar21.Reference) {
                    FVar26 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_70;
                    if (local_70.AllocatorInstance.SecondaryData !=
                        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                      FVar26 = local_70.AllocatorInstance.SecondaryData;
                    }
                    if ((TVar21.Reference <
                         (FBaseGraphTask *)((longlong)FVar26 + (longlong)local_70.ArrayMax * 8)) &&
                       (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar36)) {
                      pcVar12 = (code *)swi(3);
                      (*pcVar12)();
                      return;
                    }
                  }
                  if (local_70.ArrayNum == local_70.ArrayMax) {
                    local_70.ArrayNum =
                         UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                                   (0x808,&local_70.AllocatorInstance,&local_70.ArrayMax);
                  }
                  FVar26 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_70;
                  if (local_70.AllocatorInstance.SecondaryData !=
                      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                    FVar26 = local_70.AllocatorInstance.SecondaryData;
                  }
                  lVar27 = (longlong)local_70.ArrayNum;
                  local_70.ArrayNum = local_70.ArrayNum + 1;
                  *(undefined8 *)((longlong)FVar26 + lVar27 * 8) = 0;
                  *(undefined8 *)((longlong)FVar26 + lVar27 * 8) = *(undefined8 *)TVar21.Reference;
                  *(undefined8 *)TVar21.Reference = 0;
                  local_138 = uVar18;
                  local_134 = uVar30;
                  if (local_d0 != (undefined8 *)0x0) {
                    LOCK();
                    piVar2 = (int *)(local_d0 + 6);
                    iVar17 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if ((iVar17 == 1) && (local_d0 != (undefined8 *)0x0)) {
                      (**(code **)*local_d0)(local_d0,1);
                    }
                  }
                }
              }
            }
            else {
              local_120 = local_120 + -1;
              local_118 = local_118 + -0x10;
              uVar19 = local_12c - 1;
              uVar18 = 0;
              if ((int)local_12c < (this->Prerequisites).ArrayNum) {
                uVar18 = uVar30;
              }
              local_12c = uVar19;
              if ((uVar18 == 0) &&
                 (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar36)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              iVar8 = (this->Prerequisites).ArrayNum;
              pFVar11 = (this->Prerequisites).AllocatorInstance.Data;
              iVar17 = iVar8 + uVar34;
              if (1 < iVar17) {
                iVar17 = 1;
              }
              if (iVar17 != 0) {
                memmove(pFVar11 + lVar27,pFVar11 + (longlong)(iVar8 - iVar17) * 0x10,
                        (longlong)iVar17 << 4);
              }
              piVar2 = &(this->Prerequisites).ArrayNum;
              *piVar2 = *piVar2 + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&(this->Prerequisites).AllocatorInstance,
                         (this->Prerequisites).ArrayNum,&(this->Prerequisites).ArrayMax);
            }
LAB_1488d3550:
            local_12c = local_12c + 1;
            local_120 = local_120 + 1;
            local_118 = local_118 + 0x10;
            uVar30 = local_138;
            uVar18 = local_134;
          } while ((int)local_12c < (this->Prerequisites).ArrayNum);
        }
        if ((param_2->ArrayNum < 1) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FVar10 = (param_2->AllocatorInstance).SecondaryData;
        FVar25 = (ForElementType<FTickFunction_*>)param_2;
        if (FVar10 != (ForElementType<FTickFunction_*>)0x0) {
          FVar25 = FVar10;
        }
        uVar34 = param_2->ArrayNum - 1;
        _Dst = (void *)((longlong)FVar25 + (longlong)(int)uVar34 * 8);
        iVar17 = ~uVar34 + param_2->ArrayNum;
        if (iVar17 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar17 << 3);
        }
        param_2->ArrayNum = param_2->ArrayNum + -1;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FTickFunction_*>_>
                  (8,8,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
      }
      pFVar15 = local_f0;
      this_05 = (FTaskBase *)0x0;
      bVar5 = (this->TickGroup).Value;
      uVar34 = (uint)(local_f0->TickGroup).Value;
      if (uVar34 < bVar5) {
        uVar34 = (uint)bVar5;
      }
      if (uVar34 < uVar30) {
        uVar34 = uVar30;
      }
      if (bVar5 != uVar34) {
        for (; (uVar34 == 1 || (uVar34 == 3)); uVar34 = uVar34 + 1) {
        }
      }
      (((this->InternalData).Ptr)->ActualStartTickGroup).Value = (uchar)uVar34;
      (((this->InternalData).Ptr)->ActualEndTickGroup).Value = (uchar)uVar34;
      uVar19 = (uint)(this->EndTickGroup).Value;
      uVar30 = uVar34;
      if ((int)uVar34 < (int)uVar19) {
        uVar30 = uVar19;
      }
      if ((int)uVar30 < (int)uVar18) {
        uVar30 = uVar18;
      }
      if ((int)uVar34 < (int)uVar30) {
        if ((7 < (int)uVar30) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("MyActualEndTickGroup <= TG_NewlySpawned",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                                ,0xadd,L""), bVar36)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        while (uVar34 = uVar34 + 1, (int)uVar34 <= (int)uVar30) {
          if ((uVar34 != 1) && (uVar34 != 3)) {
            (((this->InternalData).Ptr)->ActualEndTickGroup).Value = (uchar)uVar34;
          }
        }
      }
      if (this->TickState == Enabled) {
        pFVar22 = FTickTaskSequencer::Get();
        uVar4._0_1_ = pFVar15->TickType;
        uVar4._1_1_ = pFVar15->TickGroup;
        uVar4._2_1_ = pFVar15->bLogTick;
        uVar4._3_1_ = pFVar15->bLogTicksShowPrerequistes;
        uVar4._4_4_ = *(undefined4 *)&pFVar15->field_0x14;
        local_e8 = pFVar15->World;
        uStack_e0._0_4_ = pFVar15->DeltaSeconds;
        uStack_e0._4_4_ = pFVar15->Thread;
        uVar6 = this->field_0xa;
        local_d8 = CONCAT44(uVar4._4_4_,
                            CONCAT13(pFVar22->bLogTicksShowPrerequistes,
                                     CONCAT12(pFVar22->bLogTicks,(short)uVar4)));
        if (((this->bRunOnAnyThread == '\0') || (pFVar22->bAllowConcurrentTicks == false)) ||
           ((((this->InternalData).Ptr)->ActualStartTickGroup).Value != (this->TickGroup).Value)) {
          uStack_e0 = CONCAT44(((byte)uVar6 & 0x20) << 4,(undefined4)uStack_e0) | 0x100000000;
        }
        else if (this->bHighPriority == '\0') {
          TVar20 = FAutoConsoleTaskPriority::Get
                             (&CPrio_NormalAsyncTickTaskPriority,AnyNormalThreadNormalTask);
          uStack_e0 = CONCAT44(TVar20,(undefined4)uStack_e0);
        }
        else {
          TVar20 = FAutoConsoleTaskPriority::Get
                             (&CPrio_HiPriAsyncTickTaskPriority,AnyNormalThreadNormalTask);
          uStack_e0 = CONCAT44(TVar20,(undefined4)uStack_e0);
        }
        this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xf8,8);
        if (this_01 != (FTaskBase *)0x0) {
          FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_01,&local_70);
          this_01->_padding_ = (longlong)&___7__TGraphTask_VFTickFunctionTask____6B_;
          this_05 = this_01;
        }
        this_05[1]._padding_ = (longlong)this;
        this_05[1]._padding_ = (longlong)local_e8;
        this_05[1]._padding_ = uStack_e0;
        this_05[1]._padding_ = local_d8;
        UE::Tasks::Private::TranslatePriority
                  (*(Type *)((longlong)&this_05[1]._padding_ + 4),local_12f,&local_130);
        UE::Tasks::Private::FTaskBase::Init(this_05,L"GraphTask",local_12f[0],local_130,None);
        TaskTrace::Created((ulong64)this_05->TraceId,0xf8);
        pFVar9 = (this->InternalData).Ptr;
        if (pFVar9 != (FInternalData *)0x0) {
          pFVar9->TaskState = HasTask;
          ((this->InternalData).Ptr)->TaskPointer = this_05;
        }
        pFVar9 = (this->InternalData).Ptr;
        if (this->bDispatchManually == 0) {
          bVar5 = (pFVar9->ActualStartTickGroup).Value;
          bVar7 = (pFVar9->ActualEndTickGroup).Value;
          if ((((6 < bVar5) || (6 < bVar7)) || (bVar7 < bVar5)) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartTickGroup >= 0 && StartTickGroup < TG_NewlySpawned && EndTickGroup >= 0 && EndTickGroup < TG_NewlySpawned && StartTickGroup <= EndTickGroup"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                                  ,0x2ab,L""), bVar36)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (this->bHighPriority == '\0') {
            LOCK();
            puVar3 = &pFVar22->TickTasks[bVar5][bVar7].field_0x8;
            iVar17 = *(int *)puVar3;
            *(int *)puVar3 = *(int *)puVar3 + 1;
            UNLOCK();
            if ((*(int *)&pFVar22->TickTasks[bVar5][bVar7].field_0xc < iVar17 + 1) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("OldNum + Count <= this->ArrayMax",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                                    ,0xb4,L""), bVar36)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            lVar27 = *(longlong *)(pFVar22->TickTasks[bVar5] + bVar7);
          }
          else {
            LOCK();
            puVar3 = &pFVar22->HiPriTickTasks[bVar5][bVar7].field_0x8;
            iVar17 = *(int *)puVar3;
            *(int *)puVar3 = *(int *)puVar3 + 1;
            UNLOCK();
            if ((*(int *)&pFVar22->HiPriTickTasks[bVar5][bVar7].field_0xc < iVar17 + 1) &&
               (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                   ("OldNum + Count <= this->ArrayMax",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                                    ,0xb4,L""), bVar36)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            lVar27 = *(longlong *)(pFVar22->HiPriTickTasks[bVar5] + bVar7);
          }
          pTVar31 = pFVar22->TickCompletionEvents + bVar7;
          *(FTaskBase **)(lVar27 + (longlong)iVar17 * 8) = this_05;
          LOCK();
          this_05->RefCount = (atomic<unsigned_int>)((int)this_05->RefCount + 1);
          UNLOCK();
          LOCK();
          puVar3 = &pTVar31->field_0x28;
          iVar17 = *(int *)puVar3;
          *(int *)puVar3 = *(int *)puVar3 + 1;
          UNLOCK();
          if ((*(int *)&pTVar31->field_0x2c < iVar17 + 1) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("OldNum + Count <= this->ArrayMax",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                                  ,0xb4,L""), bVar36)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (*(TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                **)&pTVar31->field_0x20 !=
              (TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)0x0) {
            pTVar31 = *(TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        **)&pTVar31->field_0x20;
          }
          *(FTaskBase **)(&pTVar31->field_0x0 + (longlong)iVar17 * 8) = this_05;
          LOCK();
          this_05->RefCount = (atomic<unsigned_int>)((int)this_05->RefCount + 1);
          UNLOCK();
          LOCK();
          paVar1 = &this_05->RefCount;
          aVar32 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar32 == (atomic<unsigned_int>)0x1) {
            (**(code **)this_05->_padding_)(this_05,1);
          }
        }
        else {
          bVar5 = (pFVar9->ActualEndTickGroup).Value;
          LOCK();
          puVar3 = &pFVar22->ManualDispatchTicks[bVar5].field_0x8;
          iVar17 = *(int *)puVar3;
          *(int *)puVar3 = *(int *)puVar3 + 1;
          UNLOCK();
          if ((*(int *)&pFVar22->ManualDispatchTicks[bVar5].field_0xc < iVar17 + 1) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("OldNum + Count <= this->ArrayMax",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                                  ,0xb4,L""), bVar36)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pTVar31 = pFVar22->TickCompletionEvents + bVar5;
          *(FTickFunction **)
           (*(longlong *)(pFVar22->ManualDispatchTicks + bVar5) + (longlong)iVar17 * 8) = this;
          LOCK();
          this_05->RefCount = (atomic<unsigned_int>)((int)this_05->RefCount + 1);
          UNLOCK();
          LOCK();
          puVar3 = &pTVar31->field_0x28;
          iVar17 = *(int *)puVar3;
          *(int *)puVar3 = *(int *)puVar3 + 1;
          UNLOCK();
          if ((*(int *)&pTVar31->field_0x2c < iVar17 + 1) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("OldNum + Count <= this->ArrayMax",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                                  ,0xb4,L""), bVar36)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (*(TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                **)&pTVar31->field_0x20 !=
              (TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)0x0) {
            pTVar31 = *(TArrayWithThreadsafeAdd<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        **)&pTVar31->field_0x20;
          }
          *(FTaskBase **)(&pTVar31->field_0x0 + (longlong)iVar17 * 8) = this_05;
          LOCK();
          this_05->RefCount = (atomic<unsigned_int>)((int)this_05->RefCount + 1);
          UNLOCK();
          LOCK();
          paVar1 = &this_05->RefCount;
          aVar32 = *paVar1;
          *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar32 == (atomic<unsigned_int>)0x1) {
            (**(code **)this_05->_padding_)(this_05,1);
          }
          this->bWasDispatchedManually = '\0';
        }
        pFVar9 = (this->InternalData).Ptr;
        if ((!((undefined1 *)pFVar9)->bWasInterval) && (0.0 < this->TickInterval)) {
          *(byte *)pFVar9 = *(undefined1 *)pFVar9 | 2;
          local_c0.Cooldown = this->TickInterval;
          local_c0.bDeferredRemove = true;
          local_c0.TickFunction = this;
          TArrayWithThreadsafeAdd<FTickTaskLevel::FTickScheduleDetails,TSizedDefaultAllocator<32>_>
          ::EmplaceThreadsafe<FTickTaskLevel::FTickScheduleDetails_const_&>
                    (&pFVar9->TickTaskLevel->TickFunctionsToReschedule,&local_c0);
        }
      }
      FVar26 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar26 = local_70.AllocatorInstance.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar26,local_70.ArrayNum);
      aVar33 = local_128;
      if (local_70.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
        aVar33 = local_128;
      }
    }
    LOCK();
    ((this->InternalData).Ptr)->TickQueuedGFrameCounter = aVar33;
    UNLOCK();
    return;
  }
  pFVar9 = (this->InternalData).Ptr;
  if (pFVar9->TickQueuedGFrameCounter == aVar33) {
    return;
  }
  FVar35.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FTickFunction_QueueTickFunctionParallel_Spin ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FTickFunction::QueueTickFunctionParallel(FTickContext_const_&,TArray<FTickFunction_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&)_::_88_::FStat_STAT_FTickFunction_QueueTickFunctionParallel_Spin>
         )0x0) {
      pFVar23 = ::FName::FName(&local_a0,"STAT_FTickFunction_QueueTickFunctionParallel_Spin");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FTickFunction_QueueTickFunctionParallel_Spin,*pFVar23,
                 L"STAT_FTickFunction_QueueTickFunctionParallel_Spin","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar24 = StatPtr_STAT_FTickFunction_QueueTickFunctionParallel_Spin;
  if (StatPtr_STAT_FTickFunction_QueueTickFunctionParallel_Spin ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FTickFunction::QueueTickFunctionParallel(FTickContext_const_&,TArray<FTickFunction_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&)_::_88_::FStat_STAT_FTickFunction_QueueTickFunctionParallel_Spin>
       )0x0) {
    pFVar23 = ::FName::FName(&local_98,"STAT_FTickFunction_QueueTickFunctionParallel_Spin");
    FVar24 = (FThreadSafeStaticStat<_private:_void___cdecl_FTickFunction::QueueTickFunctionParallel(FTickContext_const_&,TArray<FTickFunction_*,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_&)_::_88_::FStat_STAT_FTickFunction_QueueTickFunctionParallel_Spin>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FTickFunction_QueueTickFunctionParallel_Spin,*pFVar23,
                          L"STAT_FTickFunction_QueueTickFunctionParallel_Spin","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar29 = *(FName *)FVar24;
  bVar36 = false;
  bVar14 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  FVar28 = FVar29.ComparisonIndex.Value;
  uVar18 = FVar29.Number;
  if ((FVar28.Value != 0) || (uVar18 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_124.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_124._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar36 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_110.ComparisonIndex.Value = FVar28.Value;
        local_110.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_110,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                   ,0xafb);
        bVar36 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_110.ComparisonIndex.Value = FVar28.Value;
      local_110.Number = uVar18;
      local_100 = FVar29;
      FThreadStats::AddMessage(FVar29,CycleScopeStart);
      bVar13 = true;
      FVar35.Value = local_100.ComparisonIndex.Value;
      goto LAB_1488d3cdd;
    }
  }
  bVar13 = false;
  FVar29 = local_100;
LAB_1488d3cdd:
  aVar32 = pFVar9->TickQueuedGFrameCounter;
  while (aVar32 != aVar33) {
    FWindowsPlatformProcess::YieldThread();
    aVar32 = pFVar9->TickQueuedGFrameCounter;
  }
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar36) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar13) && (FVar29 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_b0.NameAndInfo.Number = FVar29.Number & 0xffff6fff | 0x6000;
      local_b0.NameAndInfo.Index.Value = FVar35.Value;
      QueryPerformanceCounter(&local_c8);
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_b0.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
      local_b0.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
      local_b0.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
      local_b0.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_b0);
      piVar2 = &this_02->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// RegisterTickFunction @ 1488d4b30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTickFunction::RegisterTickFunction(FTickFunction *this,ULevel *param_1)

{
  FInternalData *pFVar1;
  code *pcVar2;
  bool bVar3;
  FInternalData *pFVar4;
  FTickTaskManager *this_00;
  
  pFVar4 = (this->InternalData).Ptr;
  if ((pFVar4 == (FInternalData *)0x0) || (!pFVar4->bRegistered)) {
    if (param_1 != (ULevel *)0x0) {
      ULevel::GetWorld(param_1);
    }
    if ((this->InternalData).Ptr == (FInternalData *)0x0) {
      pFVar4 = ::operator_new(0x30);
      if (pFVar4 == (FInternalData *)0x0) {
        pFVar4 = (FInternalData *)0x0;
      }
      else {
        pFVar4->bRegistered = false;
        pFVar4->bWasInterval = false;
        pFVar4->TaskState = NotQueued;
        pFVar4->ActualStartTickGroup = '\0';
        pFVar4->TickVisitedGFrameCounter = (atomic<unsigned_int>)0x0;
        pFVar4->TickQueuedGFrameCounter = (atomic<unsigned_int>)0x0;
        pFVar4->TaskPointer = (void *)0x0;
        pFVar4->Next = (FTickFunction *)0x0;
        pFVar4->RelativeTickCooldown = 0.0;
        pFVar4->TickTaskLevel = (FTickTaskLevel *)0x0;
        (pFVar4->ActualEndTickGroup).Value = '\0';
        pFVar4->LastTickGameTimeSeconds = -1.0;
      }
      pFVar1 = (this->InternalData).Ptr;
      if (pFVar1 != pFVar4) {
        (this->InternalData).Ptr = pFVar4;
        ::operator_delete(pFVar1,0x30);
      }
    }
    this_00 = FTickTaskManager::Get();
    FTickTaskManager::AddTickFunction(this_00,param_1,this);
    pFVar4 = (this->InternalData).Ptr;
    pFVar4->bRegistered = true;
  }
  else {
    FTickTaskManager::Get();
    if ((param_1 == (ULevel *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Level",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                           ,0x8c3,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((param_1->TickTaskLevel == (FTickTaskLevel *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Level->TickTaskLevel",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                           ,0x8ca,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((param_1->TickTaskLevel != (FTickTaskLevel *)0x0) &&
       (bVar3 = FTickTaskLevel::HasTickFunction(param_1->TickTaskLevel,this), bVar3)) {
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FTickTaskManager::Get().HasTickFunction(Level, this)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                       ,0x973,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// RemovePrerequisite @ 1488d7940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FTickFunction::RemovePrerequisite(FTickFunction *this,UObject *param_1,FTickFunction *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *local_res8;
  FTickPrerequisite local_18;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_18.PrerequisiteObject.WeakPtr.ObjectIndex = 0;
  local_18.PrerequisiteObject.WeakPtr.ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_18,(FObjectPtr)&local_res8);
  local_18.PrerequisiteTickFunction = param_2;
  if (param_2 == (FTickFunction *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrerequisiteTickFunction",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\EngineBaseTypes.h"
                       ,0x8c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<FTickPrerequisite,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&this->Prerequisites,&local_18,Default);
  return;
}

// SetPriorityIncludingPrerequisites @ 1488df2f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTickFunction::SetPriorityIncludingPrerequisites(FTickFunction *this,bool param_1)

{
  int iVar1;
  FWeakObjectPtr this_00;
  UObject *pUVar2;
  FWeakObjectPtr *this_01;
  FWeakObjectPtr *pFVar3;
  undefined1 local_res10 [8];
  
  if (this->bHighPriority != param_1) {
    this->field_0xa = this->field_0xa & 0xdf | param_1 << 5;
    iVar1 = (this->Prerequisites).ArrayNum;
    this_01 = (FWeakObjectPtr *)(this->Prerequisites).AllocatorInstance.Data;
    pFVar3 = this_01 + (longlong)iVar1 * 2;
    while( true ) {
      if ((this->Prerequisites).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FTickPrerequisite,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (this_01 == pFVar3) break;
      pUVar2 = FWeakObjectPtr::Get(this_01);
      if (((pUVar2 != (UObject *)0x0) && (this_00 = this_01[1], this_00 != (FWeakObjectPtr)0x0)) &&
         ((bool)(*(byte *)((longlong)this_00 + 10) >> 5 & 1) != param_1)) {
        SetPriorityIncludingPrerequisites((FTickFunction *)this_00,param_1);
      }
      this_01 = this_01 + 2;
    }
  }
  return;
}

// SetTaskPointer @ 1488df450

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTickFunction::SetTaskPointer(FTickFunction *this,ETickTaskState param_1,void *param_2)

{
  FInternalData *pFVar1;
  
  pFVar1 = (this->InternalData).Ptr;
  if (pFVar1 != (FInternalData *)0x0) {
    if (param_1 == NotQueued) {
      pFVar1->TaskState = NotQueued;
      ((this->InternalData).Ptr)->TaskPointer = (void *)0x0;
      return;
    }
    pFVar1->TaskState = param_1;
    ((this->InternalData).Ptr)->TaskPointer = param_2;
  }
  return;
}

// SetTickFunctionEnable @ 1488df4e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTickFunction::SetTickFunctionEnable(FTickFunction *this,bool param_1)

{
  FInternalData *pFVar1;
  FTickTaskLevel *this_00;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->InternalData).Ptr;
  if ((pFVar1 == (FInternalData *)0x0) || (!pFVar1->bRegistered)) {
    this->field_0xb = this->field_0xb & 0xf3 | param_1 << 2;
  }
  else {
    if (param_1 == (this->TickState == Disabled)) {
      this_00 = pFVar1->TickTaskLevel;
      if (this_00 == (FTickTaskLevel *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TickTaskLevel",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                           ,0x989,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FTickTaskLevel::RemoveTickFunction(this_00,this);
      this->field_0xb = this->field_0xb & 0xf3 | param_1 << 2;
      FTickTaskLevel::AddTickFunction(this_00,this);
    }
    if (this->TickState == Disabled) {
      ((this->InternalData).Ptr)->LastTickGameTimeSeconds = -1.0;
      return;
    }
  }
  return;
}

// ShowPrerequistes @ 1488e0210

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTickFunction::ShowPrerequistes(FTickFunction *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  void *local_38 [2];
  
  iVar1 = (this->Prerequisites).ArrayNum;
  pFVar5 = (this->Prerequisites).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Prerequisites).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FTickPrerequisite,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar6) break;
    plVar2 = *(longlong **)(pFVar5 + 8);
    if (plVar2 != (longlong *)0x0) {
      if (4 < (byte)LogTick._0_1_) {
        (**(code **)(*plVar2 + 0x20))(plVar2,local_38);
        if (((param_1 * 2 < 0) || (0xff < param_1 * 2)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                               ,0x272,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTick);
        if (local_38[0] != (void *)0x0) {
          FMemory::Free(local_38[0]);
        }
      }
      ShowPrerequistes(*(FTickFunction **)(pFVar5 + 8),param_1 + 1);
    }
    pFVar5 = pFVar5 + 0x10;
  }
  return;
}

// UnRegisterTickFunction @ 1488e93d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTickFunction::UnRegisterTickFunction(FTickFunction *this)

{
  FInternalData *pFVar1;
  FTickTaskLevel *this_00;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = (this->InternalData).Ptr;
  if ((pFVar1 != (FInternalData *)0x0) && (pFVar1->bRegistered)) {
    FTickTaskManager::Get();
    if ((this->InternalData).Ptr == (FInternalData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TickFunction->InternalData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                         ,0x8a0,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = ((this->InternalData).Ptr)->TickTaskLevel;
    if (this_00 == (FTickTaskLevel *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Level",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                         ,0x8a2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FTickTaskLevel::RemoveTickFunction(this_00,this);
    pFVar1 = (this->InternalData).Ptr;
    pFVar1->bRegistered = false;
  }
  return;
}

// UpdateTickIntervalAndCoolDown @ 1488ec080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTickFunction::UpdateTickIntervalAndCoolDown(FTickFunction *this,float param_1)

{
  FInternalData *pFVar1;
  FTickTaskLevel *this_00;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  pFVar1 = (this->InternalData).Ptr;
  this->TickInterval = param_1;
  if ((((pFVar1 != (FInternalData *)0x0) && (pFVar1->bRegistered)) && (this->TickState != Disabled))
     && (pFVar1->bWasInterval)) {
    this_00 = pFVar1->TickTaskLevel;
    if ((this_00 == (FTickTaskLevel *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TickTaskLevel",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                           ,0x9a0,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    plVar4 = *(longlong **)&this_00->TickFunctionsToReschedule;
    plVar5 = plVar4 + (longlong)*(int *)&(this_00->TickFunctionsToReschedule).field_0x8 * 2;
    for (; plVar4 != plVar5; plVar4 = plVar4 + 2) {
      if ((FTickFunction *)*plVar4 == this) {
        *(float *)(plVar4 + 1) = this->TickInterval;
        return;
      }
    }
    FTickTaskLevel::RemoveTickFunction(this_00,this);
    FTickTaskLevel::RescheduleForInterval(this_00,this,this->TickInterval);
  }
  return;
}

