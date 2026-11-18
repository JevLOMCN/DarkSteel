// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 13

// GetAllHeaders @ 1433200d0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FMockHttpResponse::GetAllHeaders
          (FMockHttpResponse *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_TArray<FString,TSizedDefaultAllocator<32>_>___cdecl_BuildPatchServices::FMockHttpResponse::GetAllHeaders(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetContent @ 143320440

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FMockHttpResponse::GetContent(FMockHttpResponse *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_BuildPatchServices::FMockHttpResponse::GetContent(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_BuildPatchServices::FMockHttpResponse::GetContent(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_BuildPatchServices::FMockHttpResponse::GetContent(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_BuildPatchServices::FMockHttpResponse::GetContent(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`BuildPatchServices::FMockHttpResponse::GetContent'::__l2::
             _dynamic_atexit_destructor_for__None__);
      _Init_thread_footer(&`public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_BuildPatchServices::FMockHttpResponse::GetContent(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_BuildPatchServices::FMockHttpResponse::GetContent(void)const___ptr64'
          ::__l2::None;
}

// GetContentAsString @ 143320700

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
BuildPatchServices::FMockHttpResponse::GetContentAsString
          (FMockHttpResponse *this,FString *__return_storage_ptr__)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_FString___cdecl_BuildPatchServices::FMockHttpResponse::GetContentAsString(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetContentAsUtf8StringView @ 143320740

/* WARNING: Enum "Type": Some values do not have unique names */

TStringView<char8_t> * __thiscall
BuildPatchServices::FMockHttpResponse::GetContentAsUtf8StringView
          (FMockHttpResponse *this,TStringView<char8_t> *__return_storage_ptr__)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_TStringView<char8_t>___cdecl_BuildPatchServices::FMockHttpResponse::GetContentAsUtf8StringView(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  *(undefined8 *)&__return_storage_ptr__->Size = 0;
  __return_storage_ptr__->DataPtr = (uchar *)0x0;
  return __return_storage_ptr__;
}

// GetContentLength @ 1433207c0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall BuildPatchServices::FMockHttpResponse::GetContentLength(FMockHttpResponse *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_unsigned___int64___cdecl_BuildPatchServices::FMockHttpResponse::GetContentLength(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return 0;
}

// GetContentType @ 143320830

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
BuildPatchServices::FMockHttpResponse::GetContentType
          (FMockHttpResponse *this,FString *__return_storage_ptr__)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_FString___cdecl_BuildPatchServices::FMockHttpResponse::GetContentType(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetEffectiveURL @ 143320970

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall BuildPatchServices::FMockHttpResponse::GetEffectiveURL(FMockHttpResponse *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_FString_const&___ptr64___cdecl_BuildPatchServices::FMockHttpResponse::GetEffectiveURL(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_FString_const&___ptr64___cdecl_BuildPatchServices::FMockHttpResponse::GetEffectiveURL(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_FString_const&___ptr64___cdecl_BuildPatchServices::FMockHttpResponse::GetEffectiveURL(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_FString_const&___ptr64___cdecl_BuildPatchServices::FMockHttpResponse::GetEffectiveURL(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`BuildPatchServices::FMockHttpResponse::GetEffectiveURL'::__l2::
             _dynamic_atexit_destructor_for__None__);
      _Init_thread_footer(&`public:_virtual_class_FString_const&___ptr64___cdecl_BuildPatchServices::FMockHttpResponse::GetEffectiveURL(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_virtual_class_FString_const&___ptr64___cdecl_BuildPatchServices::FMockHttpResponse::GetEffectiveURL(void)const___ptr64'
          ::__l2::None;
}

// GetFailureReason @ 143320a60

/* WARNING: Enum "Type": Some values do not have unique names */

EHttpFailureReason __thiscall
BuildPatchServices::FMockHttpResponse::GetFailureReason(FMockHttpResponse *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_enum_EHttpFailureReason___cdecl_BuildPatchServices::FMockHttpResponse::GetFailureReason(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return Other;
}

// GetHeader @ 143320e50

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
BuildPatchServices::FMockHttpResponse::GetHeader
          (FMockHttpResponse *this,FString *__return_storage_ptr__,FString *param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_FString___cdecl_BuildPatchServices::FMockHttpResponse::GetHeader(FString_const&___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetResponseCode @ 143321070

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall BuildPatchServices::FMockHttpResponse::GetResponseCode(FMockHttpResponse *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_int___cdecl_BuildPatchServices::FMockHttpResponse::GetResponseCode(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return 200;
}

// GetStatus @ 1433211d0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall BuildPatchServices::FMockHttpResponse::GetStatus(FMockHttpResponse *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_enum_EHttpRequestStatus::Type___cdecl_BuildPatchServices::FMockHttpResponse::GetStatus(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return Failed;
}

// GetURL @ 143321360

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall BuildPatchServices::FMockHttpResponse::GetURL(FMockHttpResponse *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_FString_const&___ptr64___cdecl_BuildPatchServices::FMockHttpResponse::GetURL(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return &this->URL;
  }
  return &this->URL;
}

// GetURLParameter @ 1433213e0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
BuildPatchServices::FMockHttpResponse::GetURLParameter
          (FMockHttpResponse *this,FString *__return_storage_ptr__,FString *param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_FString___cdecl_BuildPatchServices::FMockHttpResponse::GetURLParameter(FString_const&___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

