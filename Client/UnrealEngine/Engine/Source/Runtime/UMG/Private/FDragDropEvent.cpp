// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 1

// GetOperationAs<FUMGDragDropOp> @ 146976c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedPtr<FUMGDragDropOp,1> * __thiscall
FDragDropEvent::GetOperationAs<FUMGDragDropOp>
          (FDragDropEvent *this,TSharedPtr<FUMGDragDropOp,1> *__return_storage_ptr__)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  char cVar4;
  
  pFVar1 = (this->Content).Object;
  if (pFVar1 != (FDragDropOperation *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_FString_const&___ptr64___cdecl_FUMGDragDropOp::GetTypeId(void)'::__l2
         ::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FUMGDragDropOp::GetTypeId(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FString_const&___ptr64___cdecl_FUMGDragDropOp::GetTypeId(void)'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FUMGDragDropOp::GetTypeId(void)'
                          ::__l2::Type,L"FUMGDragDropOp");
      atexit(`FUMGDragDropOp::GetTypeId'::__l2::_dynamic_atexit_destructor_for__Type__);
      _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FUMGDragDropOp::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    cVar4 = (*pcVar2)(pFVar1,&`public:_static_class_FString_const&___ptr64___cdecl_FUMGDragDropOp::GetTypeId(void)'
                              ::__l2::Type);
    if (cVar4 != '\0') {
      __return_storage_ptr__->Object = (FUMGDragDropOp *)(this->Content).Object;
      pTVar3 = (this->Content).SharedReferenceCount.ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        return __return_storage_ptr__;
      }
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Object = (FUMGDragDropOp *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

