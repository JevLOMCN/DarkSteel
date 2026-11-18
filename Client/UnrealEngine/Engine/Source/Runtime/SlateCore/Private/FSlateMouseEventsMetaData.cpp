// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// ~FSlateMouseEventsMetaData @ 1425c17d0

void __thiscall
FSlateMouseEventsMetaData::~FSlateMouseEventsMetaData(FSlateMouseEventsMetaData *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MouseLeaveHandler);
  pvVar1 = *(void **)&(this->MouseLeaveHandler).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MouseLeaveHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MouseEnterHandler);
  pvVar1 = *(void **)&(this->MouseEnterHandler).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MouseEnterHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MouseDoubleClickHandle);
  pvVar1 = *(void **)&(this->MouseDoubleClickHandle).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MouseDoubleClickHandle);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MouseMoveHandle);
  pvVar1 = *(void **)&(this->MouseMoveHandle).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MouseMoveHandle);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MouseButtonUpHandle);
  pvVar1 = *(void **)&(this->MouseButtonUpHandle).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MouseButtonUpHandle);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MouseButtonDownHandle);
  pvVar1 = *(void **)&(this->MouseButtonDownHandle).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MouseButtonDownHandle);
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  return;
}

// GetTypeId @ 1425e4140

FName * __cdecl FSlateMouseEventsMetaData::GetTypeId(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_FSlateMouseEventsMetaData::GetTypeId(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_FSlateMouseEventsMetaData::GetTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_FSlateMouseEventsMetaData::GetTypeId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_FSlateMouseEventsMetaData::GetTypeId(void)'
                      ::__l2::Type,L"FSlateMouseEventsMetaData");
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_FSlateMouseEventsMetaData::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FName_const&___ptr64___cdecl_FSlateMouseEventsMetaData::GetTypeId(void)'
              ::__l2::Type;
    }
  }
  return &`public:_static_class_FName_const&___ptr64___cdecl_FSlateMouseEventsMetaData::GetTypeId(void)'
          ::__l2::Type;
}

// IsOfTypeImpl @ 1425e98e0

bool __thiscall
FSlateMouseEventsMetaData::IsOfTypeImpl(FSlateMouseEventsMetaData *this,FName *param_1)

{
  FName *pFVar1;
  
  pFVar1 = GetTypeId();
  return *pFVar1 == *param_1;
}

