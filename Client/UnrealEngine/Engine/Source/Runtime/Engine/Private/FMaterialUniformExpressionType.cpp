// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FMaterialUniformExpressionType @ 147fa44b0

FMaterialUniformExpressionType * __thiscall
FMaterialUniformExpressionType::FMaterialUniformExpressionType
          (FMaterialUniformExpressionType *this,wchar_t *param_1)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  
  this->Name = param_1;
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->Element = this;
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    TypeList->_padding_ = (longlong)pTVar1;
  }
  pTVar1->_padding_ = (longlong)TypeList;
  pTVar1->_padding_ = (longlong)&TypeList;
  TypeList = pTVar1;
  return this;
}

// GetTypeList @ 147fda6c0

TLinkedList<FMaterialUniformExpressionType_*> ** __cdecl
FMaterialUniformExpressionType::GetTypeList(void)

{
  return &TypeList;
}

// GetTypeMap @ 147fda6d0

TMap<FName,FMaterialUniformExpressionType_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMaterialUniformExpressionType_*,0>_>
* __cdecl FMaterialUniformExpressionType::GetTypeMap(void)

{
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar1;
  TLinkedList<FMaterialUniformExpressionType_*> *pTVar2;
  TPairInitializer<FName_&&,FMaterialUniformExpressionType_*_const_&> local_res8;
  FName local_res18;
  FName *local_28;
  FMaterialUniformExpressionType ***local_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FMaterialUniformExpressionType::GetTypeMap'::__l2::
             _dynamic_atexit_destructor_for__TypeMap__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (TypeList != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0) {
    local_20 = &local_res8.Value;
    pTVar2 = TypeList;
    do {
      local_res8.Value = (FMaterialUniformExpressionType **)pTVar2->Element;
      pTVar1 = (TLinkedList<FMaterialUniformExpressionType_*> *)pTVar2->_padding_;
      local_28 = ::FName::FName(&local_res18,
                                ((FMaterialUniformExpressionType *)local_res8.Value)->Name);
      TSet<TTuple<FName,FMaterialUniformExpressionType_*>,TDefaultMapHashableKeyFuncs<FName,FMaterialUniformExpressionType_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,FMaterialUniformExpressionType_*_const_&>_>
                ((TSet<TTuple<FName,FMaterialUniformExpressionType_*>,TDefaultMapHashableKeyFuncs<FName,FMaterialUniformExpressionType_*,0>,FDefaultSetAllocator>
                  *)&TypeMap,&local_res8,(bool *)&local_28);
      if (pTVar2->_padding_ != 0) {
        *(longlong *)(pTVar2->_padding_ + 8) = pTVar2->_padding_;
      }
      if ((longlong *)pTVar2->_padding_ != (longlong *)0x0) {
        *(longlong *)pTVar2->_padding_ = pTVar2->_padding_;
      }
      pTVar2->_padding_ = 0;
      pTVar2->_padding_ = 0;
      ::operator_delete(pTVar2,0x18);
      pTVar2 = pTVar1;
    } while (pTVar1 != (TLinkedList<FMaterialUniformExpressionType_*> *)0x0);
    return &TypeMap;
  }
  return &TypeMap;
}

