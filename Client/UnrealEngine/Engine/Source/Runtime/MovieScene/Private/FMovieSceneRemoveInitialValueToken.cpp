// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// RestoreState @ 1461cf9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneRemoveInitialValueToken::RestoreState
          (FMovieSceneRemoveInitialValueToken *this,UObject *param_1,FRestoreStateParams *param_2)

{
  IMovieSceneBlendingActuator *pIVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  FWeakObjectPtr local_res8;
  UObject *local_res20;
  
  pTVar7 = (this->WeakActuator).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar7->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1461cf9fa;
      }
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    pIVar1 = (this->WeakActuator).Object;
    if (pIVar1 != (IMovieSceneBlendingActuator *)0x0) {
      uVar5 = 0;
      pcVar2 = *(code **)(*(longlong *)pIVar1 + 0x10);
      uVar6 = uVar5;
      if (param_1 != (UObject *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res20 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
        uVar5 = (ulonglong)local_res8 & 0xffffffff;
        uVar6 = (ulonglong)local_res8 >> 0x20;
      }
      (*pcVar2)(pIVar1,uVar6 << 0x20 | uVar5);
    }
  }
LAB_1461cf9fa:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

