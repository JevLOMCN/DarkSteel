// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 5

// TSharedPtr<FEasyParticleRootState,1><FEasyParticleRootState> @ 14ac8d560

TSharedPtr<FEasyParticleRootState,1> * __thiscall
TSharedPtr<FEasyParticleRootState,1>::TSharedPtr<FEasyParticleRootState,1><FEasyParticleRootState>
          (TSharedPtr<FEasyParticleRootState,1> *this,TRawPtrProxy<FEasyParticleRootState> *param_1)

{
  FEasyParticleRootState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFEasyParticleRootState__U__DefaultDeleter_VFEasyParticleRootState___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator=<FEasyParticleGroupState> @ 14ac8d5d0

TSharedPtr<FEasyParticleGroupState,1> * __thiscall
TSharedPtr<FEasyParticleGroupState,1>::operator=<FEasyParticleGroupState>
          (TSharedPtr<FEasyParticleGroupState,1> *this,
          TRawPtrProxy<FEasyParticleGroupState> *param_1)

{
  FEasyParticleGroupState *pFVar1;
  TSharedPtr<FEasyParticleGroupState,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFEasyParticleGroupState__U__DefaultDeleter_VFEasyParticleGroupState___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FEasyParticleGroupState *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FEasyParticleRootState> @ 14ac8d660

TSharedPtr<FEasyParticleRootState,1> * __thiscall
TSharedPtr<FEasyParticleRootState,1>::operator=<FEasyParticleRootState>
          (TSharedPtr<FEasyParticleRootState,1> *this,TRawPtrProxy<FEasyParticleRootState> *param_1)

{
  FEasyParticleRootState *pFVar1;
  TSharedPtr<FEasyParticleRootState,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFEasyParticleRootState__U__DefaultDeleter_VFEasyParticleRootState___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FEasyParticleRootState *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator-> @ 14ac917b0

FEasyParticleGroupState * __thiscall
TSharedPtr<FEasyParticleGroupState,1>::operator->(TSharedPtr<FEasyParticleGroupState,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FEasyParticleGroupState *pFVar3;
  
  if (this->Object != (FEasyParticleGroupState *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FEasyParticleGroupState *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14ac91800

FEasyParticleRootState * __thiscall
TSharedPtr<FEasyParticleRootState,1>::operator->(TSharedPtr<FEasyParticleRootState,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FEasyParticleRootState *pFVar3;
  
  if (this->Object != (FEasyParticleRootState *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FEasyParticleRootState *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

