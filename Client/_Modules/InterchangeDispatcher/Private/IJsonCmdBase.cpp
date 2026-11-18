// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 3

// GetCommandDataJsonKey @ 14e665270

FString * __cdecl
UE::Interchange::IJsonCmdBase::GetCommandDataJsonKey(FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandDataJsonKey(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandDataJsonKey(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandDataJsonKey(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandDataJsonKey(void)'
                          ::__l2::Key,L"CmdData");
      atexit(`UE::Interchange::IJsonCmdBase::GetCommandDataJsonKey'::__l2::
             _dynamic_atexit_destructor_for__Key__);
      _Init_thread_footer(&`public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandDataJsonKey(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = `public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandDataJsonKey(void)'
          ::__l2::Key.Data.ArrayNum;
  _Src = `public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandDataJsonKey(void)'
         ::__l2::Key.Data.AllocatorInstance;
  lVar3 = (longlong)
          `public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandDataJsonKey(void)'
          ::__l2::Key.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum =
       `public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandDataJsonKey(void)'
       ::__l2::Key.Data.ArrayNum;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar3 * 2);
  return __return_storage_ptr__;
}

// GetCommandIDJsonKey @ 14e665370

FString * __cdecl
UE::Interchange::IJsonCmdBase::GetCommandIDJsonKey(FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandIDJsonKey(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandIDJsonKey(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandIDJsonKey(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandIDJsonKey(void)'
                          ::__l2::Key,L"CmdID");
      atexit(`UE::Interchange::IJsonCmdBase::GetCommandIDJsonKey'::__l2::
             _dynamic_atexit_destructor_for__Key__);
      _Init_thread_footer(&`public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandIDJsonKey(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = `public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandIDJsonKey(void)'
          ::__l2::Key.Data.ArrayNum;
  _Src = `public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandIDJsonKey(void)'
         ::__l2::Key.Data.AllocatorInstance;
  lVar3 = (longlong)
          `public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandIDJsonKey(void)'
          ::__l2::Key.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum =
       `public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetCommandIDJsonKey(void)'
       ::__l2::Key.Data.ArrayNum;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar3 * 2);
  return __return_storage_ptr__;
}

// GetTranslatorIDJsonKey @ 14e665f20

FString * __cdecl
UE::Interchange::IJsonCmdBase::GetTranslatorIDJsonKey(FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetTranslatorIDJsonKey(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetTranslatorIDJsonKey(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetTranslatorIDJsonKey(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetTranslatorIDJsonKey(void)'
                          ::__l2::Key,L"TranslatorID");
      atexit(`UE::Interchange::IJsonCmdBase::GetTranslatorIDJsonKey'::__l2::
             _dynamic_atexit_destructor_for__Key__);
      _Init_thread_footer(&`public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetTranslatorIDJsonKey(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = `public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetTranslatorIDJsonKey(void)'
          ::__l2::Key.Data.ArrayNum;
  _Src = `public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetTranslatorIDJsonKey(void)'
         ::__l2::Key.Data.AllocatorInstance;
  lVar3 = (longlong)
          `public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetTranslatorIDJsonKey(void)'
          ::__l2::Key.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum =
       `public:_static_class_FString___cdecl_UE::Interchange::IJsonCmdBase::GetTranslatorIDJsonKey(void)'
       ::__l2::Key.Data.ArrayNum;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar3 * 2);
  return __return_storage_ptr__;
}

