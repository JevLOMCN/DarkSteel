// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FComponentReregisterContext @ 1477ec1c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FComponentReregisterContext * __thiscall
FComponentReregisterContext::FComponentReregisterContext
          (FComponentReregisterContext *this,UActorComponent *param_1,
          TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FComponentReregisterContext *pFVar3;
  FUObjectItem *pFVar4;
  UWorld *pUVar5;
  undefined8 local_res8;
  UWorld *local_res10;
  UWorld *local_res18 [2];
  FNavigationLockContext local_58;
  FString local_48;
  
  this->_padding_ = 0;
  (this->Component).WeakPtr = (FWeakObjectPtr)0x0;
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_res8);
  this->_padding_ = (longlong)param_2;
  if ((param_1 == (UActorComponent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ComponentReregisterContext.cpp"
                         ,10,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FComponentReregisterContext *)(*pcVar1)();
    return pFVar3;
  }
  pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4));
  if (((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_48,(UObject *)0x0,None);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InComponent->IsUnreachable()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ComponentReregisterContext.cpp"
                       ,0xb,L"%s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FComponentReregisterContext *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_res10 = (UWorld *)0x0;
  if ((param_1->bRegistered != 0) &&
     (pUVar5 = UActorComponent::GetWorld(param_1), local_res10 = (UWorld *)0x0,
     pUVar5 != (UWorld *)0x0)) {
    local_res10 = UActorComponent::GetWorld(param_1);
    local_58._9_1_ = local_58._9_1_ & 0xfd | 1;
    local_58.LockReason = '\x01';
    local_58.MyWorld = local_res10;
    FNavigationLockContext::LockUpdates(&local_58);
    UActorComponent::ExecuteUnregisterEvents(param_1);
    param_1->WorldPrivate = (UWorld *)0x0;
    FNavigationLockContext::UnlockUpdates(&local_58);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&(this->World).WeakPtr);
  local_res18[0] = (UWorld *)0x0;
  if (bVar2) {
    local_res18[0] = (UWorld *)param_1;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  FWeakObjectPtr::operator=(&(this->Component).WeakPtr,(FObjectPtr)local_res18);
  return this;
}

// ~FComponentReregisterContext @ 1477f31f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FComponentReregisterContext::~FComponentReregisterContext(FComponentReregisterContext *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  UActorComponent *this_00;
  FNavigationLockContext local_28;
  FString local_18;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr);
  if ((bVar2) && (bVar2 = FWeakObjectPtr::IsValid(&(this->World).WeakPtr), bVar2)) {
    pUVar3 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
    this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->Component).WeakPtr);
    if (this_00 == (UActorComponent *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ComponentReregisterContext.cpp"
                         ,0x1d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else if (((uint)this_00->_padding_ >> 0x1e & 1) == 0) {
      if ((pUVar3 == (UWorld *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InWorld != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ComponentReregisterContext.cpp"
                             ,0x22,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (this_00->bRegistered != 0) {
        if (4 < (byte)LogActorComponent._0_1_) {
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogActorComponent);
          if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_18.Data.AllocatorInstance.Data);
          }
        }
        UActorComponent::ExecuteUnregisterEvents(this_00);
      }
      this_00->WorldPrivate = pUVar3;
      local_28.bIsLocked = '\0';
      local_28.bSingleWorld = '\x01';
      local_28.LockReason = '\x01';
      local_28.MyWorld = pUVar3;
      FNavigationLockContext::LockUpdates(&local_28);
      UActorComponent::ExecuteRegisterEvents(this_00,(FRegisterComponentContext *)0x0);
      FNavigationLockContext::UnlockUpdates(&local_28);
    }
  }
  return;
}

