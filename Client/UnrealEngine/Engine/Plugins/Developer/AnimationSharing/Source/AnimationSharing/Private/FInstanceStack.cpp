// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationSharing
// Functions: 4

// ~FInstanceStack<FAdditiveAnimationInstance> @ 14e2abf90

void __thiscall
FInstanceStack<FAdditiveAnimationInstance>::~FInstanceStack<FAdditiveAnimationInstance>
          (FInstanceStack<FAdditiveAnimationInstance> *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->AvailableInstances).AllocatorInstance.Data;
  iVar2 = (this->AvailableInstances).ArrayNum;
  pFVar3 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AvailableInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAdditiveAnimationInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    ::operator_delete(*(void **)pFVar4,0x28);
    pFVar4 = pFVar4 + 8;
  }
  piVar1 = &(this->AvailableInstances).ArrayMax;
  (this->AvailableInstances).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar4 = (this->InUseInstances).AllocatorInstance.Data;
  iVar2 = (this->InUseInstances).ArrayNum;
  pFVar3 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->InUseInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAdditiveAnimationInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    ::operator_delete(*(void **)pFVar4,0x28);
    pFVar4 = pFVar4 + 8;
  }
  piVar1 = &(this->InUseInstances).ArrayMax;
  (this->InUseInstances).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->InUseInstances).AllocatorInstance,0,piVar1);
  }
  pFVar3 = (this->InUseInstances).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->AvailableInstances).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// ~FInstanceStack<FTransitionBlendInstance> @ 14e2ac0a0

void __thiscall
FInstanceStack<FTransitionBlendInstance>::~FInstanceStack<FTransitionBlendInstance>
          (FInstanceStack<FTransitionBlendInstance> *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->AvailableInstances).AllocatorInstance.Data;
  iVar2 = (this->AvailableInstances).ArrayNum;
  pFVar3 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AvailableInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FTransitionBlendInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    ::operator_delete(*(void **)pFVar4,0x28);
    pFVar4 = pFVar4 + 8;
  }
  piVar1 = &(this->AvailableInstances).ArrayMax;
  (this->AvailableInstances).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  pFVar4 = (this->InUseInstances).AllocatorInstance.Data;
  iVar2 = (this->InUseInstances).ArrayNum;
  pFVar3 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->InUseInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FTransitionBlendInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    ::operator_delete(*(void **)pFVar4,0x28);
    pFVar4 = pFVar4 + 8;
  }
  piVar1 = &(this->InUseInstances).ArrayMax;
  (this->InUseInstances).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->InUseInstances).AllocatorInstance,0,piVar1);
  }
  pFVar3 = (this->InUseInstances).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->AvailableInstances).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// AddInstance @ 14e2ad5d0

void __thiscall
FInstanceStack<FAdditiveAnimationInstance>::AddInstance
          (FInstanceStack<FAdditiveAnimationInstance> *this,FAdditiveAnimationInstance *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAdditiveAnimationInstance *local_res10 [3];
  
  pFVar2 = (this->AvailableInstances).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2 + (longlong)(this->AvailableInstances).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->AvailableInstances).ArrayNum;
  piVar1 = &(this->AvailableInstances).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->AvailableInstances).ArrayNum = iVar5 + 1;
  *(FAdditiveAnimationInstance **)
   ((this->AvailableInstances).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_res10[0];
  return;
}

// AddInstance @ 14e2ad680

void __thiscall
FInstanceStack<FTransitionBlendInstance>::AddInstance
          (FInstanceStack<FTransitionBlendInstance> *this,FTransitionBlendInstance *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTransitionBlendInstance *local_res10 [3];
  
  pFVar2 = (this->AvailableInstances).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2 + (longlong)(this->AvailableInstances).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->AvailableInstances).ArrayNum;
  piVar1 = &(this->AvailableInstances).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->AvailableInstances).ArrayNum = iVar5 + 1;
  *(FTransitionBlendInstance **)
   ((this->AvailableInstances).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_res10[0];
  return;
}

