// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 2

// TSharedPtr<FImageComparisonResult,1><FImageComparisonResult> @ 148c38b10

TSharedPtr<FImageComparisonResult,1> * __thiscall
TSharedPtr<FImageComparisonResult,1>::TSharedPtr<FImageComparisonResult,1><FImageComparisonResult>
          (TSharedPtr<FImageComparisonResult,1> *this,TRawPtrProxy<FImageComparisonResult> *param_1)

{
  FImageComparisonResult *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFImageComparisonResult__U__DefaultDeleter_UFImageComparisonResult___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator=<FScreenShotManager> @ 148c38b80

TSharedPtr<IScreenShotManager,1> * __thiscall
TSharedPtr<IScreenShotManager,1>::operator=<FScreenShotManager>
          (TSharedPtr<IScreenShotManager,1> *this,TRawPtrProxy<FScreenShotManager> *param_1)

{
  FScreenShotManager *pFVar1;
  TSharedPtr<IScreenShotManager,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = (IScreenShotManager *)pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFScreenShotManager__U__DefaultDeleter_VFScreenShotManager___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = (IScreenShotManager *)pFVar1;
    local_18.Object = (IScreenShotManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

