// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 2

// DestroyObject @ 145951e10

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMotionDelayTarget,SharedPointerInternals::DefaultDeleter<FMotionDelayTarget>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMotionDelayTarget,SharedPointerInternals::DefaultDeleter<FMotionDelayTarget>,1>
                *this)

{
  int *piVar1;
  int iVar2;
  FMotionDelayTarget *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  pFVar3 = this->Object;
  if (pFVar3 != (FMotionDelayTarget *)0x0) {
    pFVar4 = (pFVar3->ScaleHistoryBuffer).Elements.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    FLateUpdateManager::~FLateUpdateManager(&pFVar3->LateUpdate);
    plVar5 = *(longlong **)&pFVar3->field_0x8;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    ::operator_delete(pFVar3,0x1d0);
    return;
  }
  return;
}

// DestroyObject @ 145951e80

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UMotionControllerComponent::FViewExtension,SharedPointerInternals::DefaultDeleter<UMotionControllerComponent::FViewExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<UMotionControllerComponent::FViewExtension,SharedPointerInternals::DefaultDeleter<UMotionControllerComponent::FViewExtension>,1>
                *this)

{
  FViewExtension *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FViewExtension *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145951e91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0xb8))(pFVar1,1);
    return;
  }
  return;
}

