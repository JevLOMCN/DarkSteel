// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FWeakParticleHandle @ 143afaba0

FWeakParticleHandle * __thiscall
Chaos::FWeakParticleHandle::FWeakParticleHandle
          (FWeakParticleHandle *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakParticleHandle *pFVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->SharedData).Object = (FData *)0x10;
    (this->SharedData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFData_FWeakParticleHandle_Chaos___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)param_1;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FWeakParticleHandle *)(*pcVar1)();
        return pFVar4;
      }
    }
    (this->SharedData).Object = (FData *)(pTVar3 + 1);
    (this->SharedData).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

