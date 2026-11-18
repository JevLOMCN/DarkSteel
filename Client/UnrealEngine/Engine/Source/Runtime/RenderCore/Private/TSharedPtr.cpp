// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// operator=<TArray<wchar_t,TSizedDefaultAllocator<32>_>_> @ 145e387e0

TSharedPtr<TArray<wchar_t,TSizedDefaultAllocator<32>_>,1> * __thiscall
TSharedPtr<TArray<wchar_t,TSizedDefaultAllocator<32>_>,1>::
operator=<TArray<wchar_t,TSizedDefaultAllocator<32>_>_>
          (TSharedPtr<TArray<wchar_t,TSizedDefaultAllocator<32>_>,1> *this,
          TRawPtrProxy<TArray<wchar_t,TSizedDefaultAllocator<32>_>_> *param_1)

{
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar1;
  TSharedPtr<TArray<wchar_t,TSizedDefaultAllocator<32>_>,1> local_18;
  
  pTVar1 = param_1->Object;
  local_18.Object = pTVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TArray__WV__TSizedDefaultAllocator__0CA_____U__DefaultDeleter_V__TArray__WV__TSizedDefaultAllocator__0CA______SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pTVar1;
  }
  if (this != &local_18) {
    this->Object = pTVar1;
    local_18.Object = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

