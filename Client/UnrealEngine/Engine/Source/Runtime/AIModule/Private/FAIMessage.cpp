// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 4

// Broadcast @ 146f358e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FAIMessage::Broadcast(UObject *param_1,FAIMessage *param_2)

{
  code *pcVar1;
  TArray<TWeakObjectPtr<AController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  UWorld *this;
  UObject *pUVar6;
  longlong *plVar7;
  UClass *local_res18 [2];
  TIndexedContainerIterator<TArray<TWeakObjectPtr<AController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<AController,FWeakObjectPtr>_const_,int>
  local_18;
  
  this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (this != (UWorld *)0x0) {
    UWorld::GetControllerIterator(this,&local_18);
    for (; (iVar3 = local_18.Index, pTVar2 = local_18.Container, -1 < local_18.Index &&
           (local_18.Index < (local_18.Container)->ArrayNum)); local_18.Index = local_18.Index + 1)
    {
      uVar5 = 0;
      if (local_18.Index < (local_18.Container)->ArrayNum) {
        uVar5 = (uint)~local_18.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 8));
      if (pUVar6 != (UObject *)0x0) {
        pcVar1 = *(code **)(*(longlong *)pUVar6 + 0x738);
        local_res18[0] = UBrainComponent::StaticClass();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_res18[0] != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res18[0]);
        }
        plVar7 = (longlong *)(*pcVar1)(pUVar6,local_res18);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x548))(plVar7,param_2);
        }
      }
    }
  }
  return;
}

// Send @ 146f731e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl FAIMessage::Send(AController *param_1,FAIMessage *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  UClass *local_res8;
  
  if (param_1 != (AController *)0x0) {
    pcVar1 = *(code **)(param_1->_padding_ + 0x738);
    local_res8 = UBrainComponent::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    plVar2 = (longlong *)(*pcVar1)(param_1,&local_res8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x548))(plVar2,param_2);
    }
  }
  return;
}

// Send @ 146f73260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl FAIMessage::Send(APawn *param_1,FAIMessage *param_2)

{
  AController *pAVar1;
  code *pcVar2;
  UBrainComponent *pUVar3;
  UClass *local_res8;
  
  if (param_1 == (APawn *)0x0) {
    return;
  }
  pAVar1 = (param_1->Controller).field0_0x0.DebugPtr;
  if (pAVar1 != (AController *)0x0) {
    pcVar2 = *(code **)(pAVar1->_padding_ + 0x738);
    local_res8 = UBrainComponent::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pUVar3 = (UBrainComponent *)(*pcVar2)(pAVar1,&local_res8);
    if (pUVar3 != (UBrainComponent *)0x0) goto LAB_146f732d5;
  }
  pUVar3 = AActor::FindComponentByClass<UBrainComponent>((AActor *)param_1);
LAB_146f732d5:
  if (pUVar3 != (UBrainComponent *)0x0) {
    (**(code **)(pUVar3->_padding_ + 0x548))(pUVar3,param_2);
  }
  return;
}

// Send @ 146f73310

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl FAIMessage::Send(UBrainComponent *param_1,FAIMessage *param_2)

{
  if (param_1 != (UBrainComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146f73318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x548))();
    return;
  }
  return;
}

