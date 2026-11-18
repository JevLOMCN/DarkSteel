// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// InjectInputs_External @ 148310300

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
FNetworkPhysicsCallback::InjectInputs_External
          (FNetworkPhysicsCallback *this,int param_1,int param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->InjectInputsExternal,
             (FWriteAccessScope *)&local_38);
  puVar1 = &(this->InjectInputsExternal).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->InjectInputsExternal).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->InjectInputsExternal).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->InjectInputsExternal).field_0x8;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1,param_2), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->InjectInputsExternal).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->InjectInputsExternal,
               false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// PostResimStep_Internal @ 1483185e0

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
FNetworkPhysicsCallback::PostResimStep_Internal(FNetworkPhysicsCallback *this,int param_1)

{
  return;
}

// PreResimStep_Internal @ 148318700

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
FNetworkPhysicsCallback::PreResimStep_Internal
          (FNetworkPhysicsCallback *this,int param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res18 [16];
  
  if (param_2) {
    pFVar3 = (this->RewindableCallbackObjects).AllocatorInstance.Data;
    iVar2 = (this->RewindableCallbackObjects).ArrayNum;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->RewindableCallbackObjects).ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::ISimCallbackObject_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar3 == pFVar1) break;
      (**(code **)(**(longlong **)pFVar3 + 0x50))(*(longlong **)pFVar3,param_1);
      pFVar3 = pFVar3 + 8;
    }
  }
  return;
}

// ProcessInputs_External @ 14831a7c0

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
FNetworkPhysicsCallback::ProcessInputs_External
          (FNetworkPhysicsCallback *this,int param_1,
          TArray<Chaos::FSimCallbackInputAndObject,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res18 [8];
  
  iVar1 = param_2->ArrayNum;
  pFVar3 = (param_2->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<Chaos::FSimCallbackInputAndObject_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar3 == pFVar4) break;
    plVar2 = *(longlong **)pFVar3;
    if ((plVar2 != (longlong *)0x0) && ((*(ushort *)(plVar2 + 8) & 0x200) != 0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return;
}

// ProcessInputs_Internal @ 14831a850

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
FNetworkPhysicsCallback::ProcessInputs_Internal
          (FNetworkPhysicsCallback *this,int param_1,
          TArray<Chaos::FSimCallbackInputAndObject,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
            (&this->PreProcessInputsInternal,param_1);
  pFVar3 = (this->RewindableCallbackObjects).AllocatorInstance.Data;
  iVar2 = (this->RewindableCallbackObjects).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->RewindableCallbackObjects).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::ISimCallbackObject_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x30))();
    pFVar3 = pFVar3 + 8;
  }
  TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
            (&this->PostProcessInputsInternal,param_1);
  return;
}

// RegisterRewindableSimCallback_Internal @ 14831b010

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
FNetworkPhysicsCallback::RegisterRewindableSimCallback_Internal
          (FNetworkPhysicsCallback *this,ISimCallbackObject *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ISimCallbackObject *local_res10 [3];
  
  if ((param_1 != (ISimCallbackObject *)0x0) && ((param_1->Options & Rewind) != None)) {
    pFVar2 = (this->RewindableCallbackObjects).AllocatorInstance.Data;
    local_res10[0] = param_1;
    if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
       (((FScriptContainerElement *)local_res10 <
         pFVar2 + (longlong)(this->RewindableCallbackObjects).ArrayMax * 8 &&
        (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->RewindableCallbackObjects).ArrayNum;
    piVar1 = &(this->RewindableCallbackObjects).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->RewindableCallbackObjects).AllocatorInstance,piVar1);
    }
    (this->RewindableCallbackObjects).ArrayNum = iVar5 + 1;
    *(ISimCallbackObject **)
     ((this->RewindableCallbackObjects).AllocatorInstance.Data + (longlong)iVar5 * 8) =
         local_res10[0];
  }
  return;
}

// TriggerRewindIfNeeded_Internal @ 148325300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FNetworkPhysicsCallback::TriggerRewindIfNeeded_Internal(FNetworkPhysicsCallback *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->RewindableCallbackObjects).AllocatorInstance.Data;
  iVar3 = (this->RewindableCallbackObjects).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar3 * 8;
  iVar4 = -1;
  while( true ) {
    if ((this->RewindableCallbackObjects).ArrayNum != iVar3) {
      `TCheckedPointerIterator<Chaos::ISimCallbackObject_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    iVar2 = (**(code **)(**(longlong **)pFVar5 + 0x40))(*(longlong **)pFVar5,param_1);
    if (iVar4 == -1) {
      pFVar5 = pFVar5 + 8;
      iVar4 = iVar2;
    }
    else {
      if (iVar2 < iVar4) {
        iVar4 = iVar2;
      }
      pFVar5 = pFVar5 + 8;
    }
  }
  if ((FRewindData *)this->_padding_ == (FRewindData *)0x0) {
    return iVar4;
  }
  iVar3 = iVar4;
  if ((((PhysicsReplicationCVars::ResimulationCVars::bApplyPredictiveInterpolationWhenBehindServer
         == false) &&
       (iVar2 = Chaos::FRewindData::CompareTargetsToLastFrame((FRewindData *)this->_padding_),
       iVar3 = iVar2, iVar4 != -1)) && (iVar3 = iVar4, iVar2 != -1)) && (iVar2 < iVar4)) {
    iVar3 = iVar2;
  }
  iVar4 = ((FRewindData *)this->_padding_)->ResimFrame;
  iVar2 = iVar4;
  if (iVar3 != -1) {
    if (iVar4 == -1) goto LAB_1483253b9;
    iVar2 = iVar3;
    if (iVar4 < iVar3) {
      iVar2 = iVar4;
    }
  }
  iVar3 = iVar2;
  if (iVar3 == -1) {
    return -1;
  }
LAB_1483253b9:
  iVar3 = Chaos::FRewindData::FindValidResimFrame((FRewindData *)this->_padding_,iVar3);
  return iVar3;
}

// UnregisterRewindableSimCallback_Internal @ 1483264a0

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
FNetworkPhysicsCallback::UnregisterRewindableSimCallback_Internal
          (FNetworkPhysicsCallback *this,ISimCallbackObject *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  ISimCallbackObject *pIVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ISimCallbackObject *local_res10;
  
  pFVar2 = (this->RewindableCallbackObjects).AllocatorInstance.Data;
  local_res10 = param_1;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar2 + (longlong)(this->RewindableCallbackObjects).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->RewindableCallbackObjects).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->RewindableCallbackObjects).AllocatorInstance.Data;
    bVar4 = *(ISimCallbackObject **)pFVar2 != local_res10;
    lVar6 = 0;
    pIVar5 = local_res10;
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(ISimCallbackObject **)(pFVar2 + lVar6 * 8) != pIVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pIVar5 = local_res10;
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->RewindableCallbackObjects).ArrayNum = iVar9;
  }
  return;
}

