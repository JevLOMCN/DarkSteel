// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// IsExternalOperation @ 142511170

bool __thiscall FExternalDragOperation::IsExternalOperation(FExternalDragOperation *this)

{
  return true;
}

// IsOfTypeImpl @ 142511190

bool __thiscall FExternalDragOperation::IsOfTypeImpl(FExternalDragOperation *this,FString *param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FString_const&___ptr64___cdecl_FExternalDragOperation::GetTypeId(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FExternalDragOperation::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FString_const&___ptr64___cdecl_FExternalDragOperation::GetTypeId(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FExternalDragOperation::GetTypeId(void)'
                        ::__l2::Type,L"FExternalDragOperation");
    atexit(`FExternalDragOperation::GetTypeId'::__l2::_dynamic_atexit_destructor_for__Type__);
    _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FExternalDragOperation::GetTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar1 = (param_1->Data).ArrayNum;
  if (`public:_static_class_FString_const&___ptr64___cdecl_FExternalDragOperation::GetTypeId(void)'
      ::__l2::Type.Data.ArrayNum == iVar1) {
    if (`public:_static_class_FString_const&___ptr64___cdecl_FExternalDragOperation::GetTypeId(void)'
        ::__l2::Type.Data.ArrayNum < 2) {
      return true;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)
                       `public:_static_class_FString_const&___ptr64___cdecl_FExternalDragOperation::GetTypeId(void)'
                       ::__l2::Type.Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = `public:_static_class_FString_const&___ptr64___cdecl_FExternalDragOperation::GetTypeId(void)'
            ::__l2::Type.Data.ArrayNum + iVar1 == 1;
  }
  if (bVar2) {
    return true;
  }
  return false;
}

// NewFiles @ 142516ed0

TSharedRef<FExternalDragOperation,1> * __cdecl
FExternalDragOperation::NewFiles
          (TSharedRef<FExternalDragOperation,1> *__return_storage_ptr__,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FExternalDragOperation *pFVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  TRawPtrProxy<FExternalDragOperation> local_res8;
  
  pFVar2 = ::operator_new(0x68);
  local_res8.Object = (FExternalDragOperation *)0x0;
  if (pFVar2 != (FExternalDragOperation *)0x0) {
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = (longlong)&___7FExternalDragOperation__6B_;
    pFVar2->_padding_ = 0;
    *(undefined1 *)&pFVar2->_padding_ = 1;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    *(undefined1 *)((longlong)&pFVar2->_padding_ + 4) = 0;
    *(undefined1 *)((longlong)&pFVar2->_padding_ + 4) = 0;
    (pFVar2->DraggedText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->DraggedText).Data.ArrayNum = 0;
    (pFVar2->DraggedText).Data.ArrayMax = 0;
    (pFVar2->DraggedFileNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->DraggedFileNames).ArrayNum = 0;
    (pFVar2->DraggedFileNames).ArrayMax = 0;
    local_res8.Object = pFVar2;
  }
  TSharedRef<FExternalDragOperation,1>::TSharedRef<FExternalDragOperation,1><FExternalDragOperation>
            (__return_storage_ptr__,&local_res8);
  __return_storage_ptr__->Object->DragType = '\x02';
  pFVar2 = __return_storage_ptr__->Object;
  pTVar3 = &pFVar2->DraggedFileNames;
  if (pTVar3 != param_1) {
    DestructItems<FString,int>
              ((FString *)(pTVar3->AllocatorInstance).Data,(pFVar2->DraggedFileNames).ArrayNum);
    pFVar1 = (pTVar3->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pTVar3->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar2->DraggedFileNames).ArrayNum = param_1->ArrayNum;
    (pFVar2->DraggedFileNames).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x58))();
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// NewOperation @ 142516fe0

TSharedRef<FExternalDragOperation,1> * __cdecl
FExternalDragOperation::NewOperation
          (TSharedRef<FExternalDragOperation,1> *__return_storage_ptr__,FString *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FExternalDragOperation *pFVar2;
  FString *pFVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  TRawPtrProxy<FExternalDragOperation> local_res8;
  
  pFVar2 = ::operator_new(0x68);
  local_res8.Object = (FExternalDragOperation *)0x0;
  if (pFVar2 != (FExternalDragOperation *)0x0) {
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = (longlong)&___7FExternalDragOperation__6B_;
    pFVar2->_padding_ = 0;
    *(undefined1 *)&pFVar2->_padding_ = 1;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    *(undefined1 *)((longlong)&pFVar2->_padding_ + 4) = 0;
    *(undefined1 *)((longlong)&pFVar2->_padding_ + 4) = 0;
    (pFVar2->DraggedText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->DraggedText).Data.ArrayNum = 0;
    (pFVar2->DraggedText).Data.ArrayMax = 0;
    (pFVar2->DraggedFileNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->DraggedFileNames).ArrayNum = 0;
    (pFVar2->DraggedFileNames).ArrayMax = 0;
    local_res8.Object = pFVar2;
  }
  TSharedRef<FExternalDragOperation,1>::TSharedRef<FExternalDragOperation,1><FExternalDragOperation>
            (__return_storage_ptr__,&local_res8);
  __return_storage_ptr__->Object->DragType =
       -(param_2->ArrayNum != 0) & 2U | 1 < (param_1->Data).ArrayNum;
  pFVar2 = __return_storage_ptr__->Object;
  pFVar3 = &pFVar2->DraggedText;
  if (pFVar3 != param_1) {
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->DraggedText).Data.ArrayNum = (param_1->Data).ArrayNum;
    (pFVar2->DraggedText).Data.ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
  }
  pFVar2 = __return_storage_ptr__->Object;
  pTVar4 = &pFVar2->DraggedFileNames;
  if (pTVar4 != param_2) {
    DestructItems<FString,int>
              ((FString *)(pTVar4->AllocatorInstance).Data,(pFVar2->DraggedFileNames).ArrayNum);
    pFVar1 = (pTVar4->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pTVar4->AllocatorInstance).Data = (param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar2->DraggedFileNames).ArrayNum = param_2->ArrayNum;
    (pFVar2->DraggedFileNames).ArrayMax = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
  }
  (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x58))();
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>((FString *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// NewText @ 142517150

TSharedRef<FExternalDragOperation,1> * __cdecl
FExternalDragOperation::NewText
          (TSharedRef<FExternalDragOperation,1> *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FExternalDragOperation *pFVar2;
  FString *pFVar3;
  TRawPtrProxy<FExternalDragOperation> local_res8;
  
  pFVar2 = ::operator_new(0x68);
  local_res8.Object = (FExternalDragOperation *)0x0;
  if (pFVar2 != (FExternalDragOperation *)0x0) {
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = (longlong)&___7FExternalDragOperation__6B_;
    pFVar2->_padding_ = 0;
    *(undefined1 *)&pFVar2->_padding_ = 1;
    pFVar2->_padding_ = 0;
    pFVar2->_padding_ = 0;
    *(undefined1 *)((longlong)&pFVar2->_padding_ + 4) = 0;
    *(undefined1 *)((longlong)&pFVar2->_padding_ + 4) = 0;
    (pFVar2->DraggedText).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->DraggedText).Data.ArrayNum = 0;
    (pFVar2->DraggedText).Data.ArrayMax = 0;
    (pFVar2->DraggedFileNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->DraggedFileNames).ArrayNum = 0;
    (pFVar2->DraggedFileNames).ArrayMax = 0;
    local_res8.Object = pFVar2;
  }
  TSharedRef<FExternalDragOperation,1>::TSharedRef<FExternalDragOperation,1><FExternalDragOperation>
            (__return_storage_ptr__,&local_res8);
  __return_storage_ptr__->Object->DragType = '\x01';
  pFVar2 = __return_storage_ptr__->Object;
  pFVar3 = &pFVar2->DraggedText;
  if (pFVar3 != param_1) {
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->DraggedText).Data.ArrayNum = (param_1->Data).ArrayNum;
    (pFVar2->DraggedText).Data.ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
  }
  (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x58))();
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

