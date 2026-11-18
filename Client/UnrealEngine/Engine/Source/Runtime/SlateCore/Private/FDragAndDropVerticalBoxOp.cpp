// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// GetTypeId @ 1425e3f30

FString * __cdecl FDragAndDropVerticalBoxOp::GetTypeId(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FString_const&___ptr64___cdecl_FDragAndDropVerticalBoxOp::GetTypeId(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FDragAndDropVerticalBoxOp::GetTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString_const&___ptr64___cdecl_FDragAndDropVerticalBoxOp::GetTypeId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FDragAndDropVerticalBoxOp::GetTypeId(void)'
                          ::__l2::Type,L"FDragAndDropVerticalBoxOp");
      atexit(`FDragAndDropVerticalBoxOp::GetTypeId'::__l2::_dynamic_atexit_destructor_for__Type__);
      _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FDragAndDropVerticalBoxOp::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FString_const&___ptr64___cdecl_FDragAndDropVerticalBoxOp::GetTypeId(void)'
              ::__l2::Type;
    }
  }
  return &`public:_static_class_FString_const&___ptr64___cdecl_FDragAndDropVerticalBoxOp::GetTypeId(void)'
          ::__l2::Type;
}

