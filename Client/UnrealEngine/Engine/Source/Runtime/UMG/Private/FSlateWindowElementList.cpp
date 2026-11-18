// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// GetDeferredPaintList @ 146a747b0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSizedDefaultAllocator<32>_> *
__thiscall
FSlateWindowElementList::GetDeferredPaintList
          (FSlateWindowElementList *this,
          TArray<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int iVar1;
  TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *pTVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->DeferredPaintList).ArrayNum;
  pTVar2 = (TSharedPtr<FSlateWindowElementList::FDeferredPaint,1> *)
           (this->DeferredPaintList).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pTVar2,iVar1);
  return __return_storage_ptr__;
}

