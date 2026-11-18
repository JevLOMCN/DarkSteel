// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Dequeue @ 141b3cd10

TOptional<_protected:_void___cdecl_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody(FString_const_&)_::_20_::FNonTrivial>
* __thiscall
TMpscQueue<`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial,FMemory>
::Dequeue(void *this,
         TOptional<_protected:_void___cdecl_UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody(FString_const_&)_::_20_::FNonTrivial>
         *__return_storage_ptr__)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = **(longlong **)((longlong)this + 8);
  if (lVar1 == 0) {
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  piVar2 = *(int **)(lVar1 + 8);
  *(undefined8 *)(lVar1 + 8) = 0;
  ::operator_delete((void *)0x0,4);
  *(undefined8 *)(lVar1 + 8) = 0xcdcdcdcdcdcdcdcd;
  FMemory::Free(*(void **)((longlong)this + 8));
  *(longlong *)((longlong)this + 8) = lVar1;
  __return_storage_ptr__->bIsSet = true;
  (__return_storage_ptr__->TypedValue).Value = piVar2;
  ::operator_delete((void *)0x0,4);
  return __return_storage_ptr__;
}

// ~TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory> @ 141bec6b0

void __thiscall
TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::
~TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>
          (TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory> *this)

{
  atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*> aVar1;
  
  aVar1 = this->Tail->Next;
  FMemory::Free(this->Tail);
  while (aVar1 != (atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*>)0x0) {
    this->Tail = (FNode *)aVar1;
    aVar1 = *(atomic<TMpscQueue<TSharedPtr<FTSTicker::FElement,1>,FMemory>::FNode_*> *)aVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((this->Tail->Value).Pad + 8));
    FMemory::Free(this->Tail);
  }
  return;
}

