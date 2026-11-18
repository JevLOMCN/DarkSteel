// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 1

// Broadcast @ 14a6a3650

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

void __thiscall
TMulticastDelegate<void___cdecl(TObjectPtr<UWN_CS_CharacterCore>,USceneComponent_*),FDefaultDelegateUserPolicy>
::Broadcast(TMulticastDelegate<void___cdecl(TObjectPtr<UWN_CS_CharacterCore>,USceneComponent_*),FDefaultDelegateUserPolicy>
            *this,TObjectPtr<UWN_CS_CharacterCore> param_1,USceneComponent *param_2)

{
  UObject *pUVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  UObject *local_res8;
  FDestructionSentinel local_58;
  
  pUVar1 = *(UObject **)param_1.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_58);
  *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + 1;
  bVar4 = false;
  uVar9 = *(int *)&this->field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar8 = (longlong)(int)uVar9 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar9 < *(int *)&this->field_0x10) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(int *)(*(longlong *)&this->field_0x8 + 8 + lVar8) == 0) ||
         (plVar2 = *(longlong **)(*(longlong *)&this->field_0x8 + lVar8), plVar2 == (longlong *)0x0)
         ) {
LAB_14a6a3769:
        bVar4 = true;
      }
      else {
        pcVar3 = *(code **)(*plVar2 + 0x68);
        local_res8 = pUVar1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar1);
        }
        cVar6 = (*pcVar3)(plVar2,&local_res8,param_2);
        if (cVar6 == '\0') goto LAB_14a6a3769;
      }
      lVar8 = lVar8 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  return;
}

