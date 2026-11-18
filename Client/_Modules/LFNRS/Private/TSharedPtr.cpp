// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LFNRS
// Functions: 3

// TSharedPtr<FCachedFileRequest,1><FCachedFileRequest> @ 146c8b070

TSharedPtr<FCachedFileRequest,1> * __thiscall
TSharedPtr<FCachedFileRequest,1>::TSharedPtr<FCachedFileRequest,1><FCachedFileRequest>
          (TSharedPtr<FCachedFileRequest,1> *this,TRawPtrProxy<FCachedFileRequest> *param_1)

{
  FCachedFileRequest *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFCachedFileRequest__U__DefaultDeleter_VFCachedFileRequest___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FArchive,1><FLargeMemoryReader> @ 146c8b0e0

TSharedPtr<FArchive,1> * __thiscall
TSharedPtr<FArchive,1>::TSharedPtr<FArchive,1><FLargeMemoryReader>
          (TSharedPtr<FArchive,1> *this,TRawPtrProxy<FLargeMemoryReader> *param_1)

{
  FLargeMemoryReader *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (FArchive *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFLargeMemoryReader__U__DefaultDeleter_VFLargeMemoryReader___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator-> @ 146c92e20

FQueuedLocalFileRequest * __thiscall
TSharedPtr<FQueuedLocalFileRequest,1>::operator->(TSharedPtr<FQueuedLocalFileRequest,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FQueuedLocalFileRequest *pFVar3;
  
  if (this->Object != (FQueuedLocalFileRequest *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FQueuedLocalFileRequest *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

