// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateNullRenderer
// Functions: 2

// TSharedPtr<FSlateSharedHandleData,1><FSlateSharedHandleData> @ 146c85450

TSharedPtr<FSlateSharedHandleData,1> * __thiscall
TSharedPtr<FSlateSharedHandleData,1>::TSharedPtr<FSlateSharedHandleData,1><FSlateSharedHandleData>
          (TSharedPtr<FSlateSharedHandleData,1> *this,TRawPtrProxy<FSlateSharedHandleData> *param_1)

{
  FSlateSharedHandleData *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateSharedHandleData__U__DefaultDeleter_VFSlateSharedHandleData___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator=<FSlateNullShaderResourceManager> @ 146c854c0

TSharedPtr<FSlateShaderResourceManager,1> * __thiscall
TSharedPtr<FSlateShaderResourceManager,1>::operator=<FSlateNullShaderResourceManager>
          (TSharedPtr<FSlateShaderResourceManager,1> *this,
          TRawPtrProxy<FSlateNullShaderResourceManager> *param_1)

{
  FSlateNullShaderResourceManager *pFVar1;
  FSlateShaderResourceManager *pFVar2;
  TSharedPtr<FSlateShaderResourceManager,1> local_18;
  
  pFVar1 = param_1->Object;
  if (pFVar1 == (FSlateNullShaderResourceManager *)0x0) {
    pFVar2 = (FSlateShaderResourceManager *)0x0;
  }
  else {
    pFVar2 = (FSlateShaderResourceManager *)&pFVar1->field_0x8;
  }
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSlateNullShaderResourceManager__U__DefaultDeleter_VFSlateNullShaderResourceManager___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar2;
    local_18.Object = (FSlateShaderResourceManager *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

