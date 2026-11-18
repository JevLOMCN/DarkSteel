// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ReRegister @ 14785c250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FComponentReregisterContextBase::ReRegister
          (FComponentReregisterContextBase *this,UActorComponent *param_1,UWorld *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNavigationLockContext local_28;
  FString local_18;
  
  if (param_1 == (UActorComponent *)0x0) {
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
  else if (((uint)param_1->_padding_ >> 0x1e & 1) == 0) {
    if ((param_2 == (UWorld *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InWorld != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ComponentReregisterContext.cpp"
                           ,0x22,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_1->bRegistered != 0) {
      if (4 < (byte)LogActorComponent._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogActorComponent);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      UActorComponent::ExecuteUnregisterEvents(param_1);
    }
    param_1->WorldPrivate = param_2;
    local_28.bIsLocked = '\0';
    local_28.bSingleWorld = '\x01';
    local_28.LockReason = '\x01';
    local_28.MyWorld = param_2;
    FNavigationLockContext::LockUpdates(&local_28);
    UActorComponent::ExecuteRegisterEvents(param_1,(FRegisterComponentContext *)0x0);
    FNavigationLockContext::UnlockUpdates(&local_28);
  }
  return;
}

// UnRegister @ 14787b370

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWorld * __thiscall
FComponentReregisterContextBase::UnRegister
          (FComponentReregisterContextBase *this,UActorComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  FUObjectItem *pFVar4;
  FNavigationLockContext local_28;
  FString local_18;
  
  if ((param_1 == (UActorComponent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ComponentReregisterContext.cpp"
                         ,10,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UWorld *)(*pcVar1)();
    return pUVar3;
  }
  pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4));
  if (((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0,None);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InComponent->IsUnreachable()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ComponentReregisterContext.cpp"
                       ,0xb,L"%s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UWorld *)(*pcVar1)();
      return pUVar3;
    }
  }
  if ((param_1->bRegistered != 0) &&
     (pUVar3 = UActorComponent::GetWorld(param_1), pUVar3 != (UWorld *)0x0)) {
    pUVar3 = UActorComponent::GetWorld(param_1);
    local_28._9_1_ = local_28._9_1_ & 0xfd | 1;
    local_28.LockReason = '\x01';
    local_28.MyWorld = pUVar3;
    FNavigationLockContext::LockUpdates(&local_28);
    UActorComponent::ExecuteUnregisterEvents(param_1);
    param_1->WorldPrivate = (UWorld *)0x0;
    FNavigationLockContext::UnlockUpdates(&local_28);
    return pUVar3;
  }
  return (UWorld *)0x0;
}

