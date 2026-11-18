// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// FGameDragDropOperation @ 1424e9930

FGameDragDropOperation * __thiscall
FGameDragDropOperation::FGameDragDropOperation(FGameDragDropOperation *this)

{
  this->_padding_ = (longlong)&___7FGameDragDropOperation__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->DecoratorPosition).field0_0x0._s_0.X = 0.0;
  (this->DecoratorPosition).field0_0x0._s_0.Y = 0.0;
  *(undefined1 *)&this->_padding_ = 0;
  return this;
}

// GetDecoratorPosition @ 14250d460

TVector2<double> * __thiscall
FGameDragDropOperation::GetDecoratorPosition
          (FGameDragDropOperation *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->DecoratorPosition).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->DecoratorPosition).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// IsOfTypeImpl @ 142511250

bool __thiscall FGameDragDropOperation::IsOfTypeImpl(FGameDragDropOperation *this,FString *param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FString_const&___ptr64___cdecl_FGameDragDropOperation::GetTypeId(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FGameDragDropOperation::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FString_const&___ptr64___cdecl_FGameDragDropOperation::GetTypeId(void)'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FGameDragDropOperation::GetTypeId(void)'
                        ::__l2::Type,L"FGameDragDropOperation");
    atexit(`FGameDragDropOperation::GetTypeId'::__l2::_dynamic_atexit_destructor_for__Type__);
    _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FGameDragDropOperation::GetTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  iVar1 = (param_1->Data).ArrayNum;
  if (`public:_static_class_FString_const&___ptr64___cdecl_FGameDragDropOperation::GetTypeId(void)'
      ::__l2::Type.Data.ArrayNum == iVar1) {
    if (`public:_static_class_FString_const&___ptr64___cdecl_FGameDragDropOperation::GetTypeId(void)'
        ::__l2::Type.Data.ArrayNum < 2) {
      return true;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)
                       `public:_static_class_FString_const&___ptr64___cdecl_FGameDragDropOperation::GetTypeId(void)'
                       ::__l2::Type.Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = `public:_static_class_FString_const&___ptr64___cdecl_FGameDragDropOperation::GetTypeId(void)'
            ::__l2::Type.Data.ArrayNum + iVar1 == 1;
  }
  if (bVar2) {
    return true;
  }
  return false;
}

