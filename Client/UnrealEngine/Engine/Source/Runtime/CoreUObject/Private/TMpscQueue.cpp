// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// ~TMpscQueue<FPackageRequest,FMemory> @ 1423093f0

void __thiscall
TMpscQueue<FPackageRequest,FMemory>::~TMpscQueue<FPackageRequest,FMemory>
          (TMpscQueue<FPackageRequest,FMemory> *this)

{
  atomic<TMpscQueue<FPackageRequest,FMemory>::FNode_*> aVar1;
  FNode *pFVar2;
  TDelegateBase<FNotThreadSafeDelegateMode> *this_00;
  
  aVar1 = this->Tail->Next;
  FMemory::Free(this->Tail);
  while (aVar1 != (atomic<TMpscQueue<FPackageRequest,FMemory>::FNode_*>)0x0) {
    this->Tail = (FNode *)aVar1;
    aVar1 = *(atomic<TMpscQueue<FPackageRequest,FMemory>::FNode_*> *)aVar1;
    pFVar2 = this->Tail;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((pFVar2->Value).Pad + 0x48));
    this_00 = *(TDelegateBase<FNotThreadSafeDelegateMode> **)((pFVar2->Value).Pad + 0x38);
    if (this_00 != (TDelegateBase<FNotThreadSafeDelegateMode> *)0x0) {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(this_00)
      ;
      ::operator_delete(this_00,0x18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((pFVar2->Value).Pad + 0x18));
    FMemory::Free(this->Tail);
  }
  return;
}

// Dequeue @ 1423180e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TOptional<FAsyncPackage2_*> * __thiscall
TMpscQueue<FAsyncPackage2_*,FMemory>::Dequeue
          (TMpscQueue<FAsyncPackage2_*,FMemory> *this,
          TOptional<FAsyncPackage2_*> *__return_storage_ptr__)

{
  atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*> aVar1;
  FAsyncPackage2 *pFVar2;
  
  aVar1 = this->Tail->Next;
  if (aVar1 == (atomic<TMpscQueue<FAsyncPackage2_*,FMemory>::FNode_*>)0x0) {
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  pFVar2 = *(FAsyncPackage2 **)((longlong)aVar1 + 8);
  FMemory::Free(this->Tail);
  this->Tail = (FNode *)aVar1;
  __return_storage_ptr__->bIsSet = true;
  __return_storage_ptr__->TypedValue = pFVar2;
  return __return_storage_ptr__;
}

