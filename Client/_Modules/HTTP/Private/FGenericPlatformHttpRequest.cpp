// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 38

// AppendToHeader @ 1431552c0

void __thiscall
FGenericPlatformHttpRequest::AppendToHeader
          (FGenericPlatformHttpRequest *this,FString *param_1,FString *param_2)

{
  return;
}

// CancelRequest @ 143157240

void __thiscall FGenericPlatformHttpRequest::CancelRequest(FGenericPlatformHttpRequest *this)

{
  return;
}

// ClearTimeout @ 1431583b0

void __thiscall FGenericPlatformHttpRequest::ClearTimeout(FGenericPlatformHttpRequest *this)

{
  return;
}

// GetAllHeaders @ 1431614b0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FGenericPlatformHttpRequest::GetAllHeaders
          (FGenericPlatformHttpRequest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetContent @ 143161b30

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FGenericPlatformHttpRequest::GetContent(FGenericPlatformHttpRequest *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FGenericPlatformHttpRequest::GetContent(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FGenericPlatformHttpRequest::GetContent(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FGenericPlatformHttpRequest::GetContent(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`FGenericPlatformHttpRequest::GetContent'::__l2::_dynamic_atexit_destructor_for__Temp__
            );
      _Init_thread_footer(&`public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FGenericPlatformHttpRequest::GetContent(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_FGenericPlatformHttpRequest::GetContent(void)const___ptr64'
          ::__l2::Temp;
}

// GetContentLength @ 143162040

ulong64 __thiscall FGenericPlatformHttpRequest::GetContentLength(FGenericPlatformHttpRequest *this)

{
  return 0;
}

// GetContentType @ 143162260

FString * __thiscall
FGenericPlatformHttpRequest::GetContentType
          (FGenericPlatformHttpRequest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetDelegateThreadPolicy @ 1431625b0

EHttpRequestDelegateThreadPolicy __thiscall
FGenericPlatformHttpRequest::GetDelegateThreadPolicy(FGenericPlatformHttpRequest *this)

{
  return CompleteOnGameThread;
}

// GetEffectiveURL @ 143162660

FString * __thiscall FGenericPlatformHttpRequest::GetEffectiveURL(FGenericPlatformHttpRequest *this)

{
  return &this->EffectiveURL;
}

// GetElapsedTime @ 143162720

float __thiscall FGenericPlatformHttpRequest::GetElapsedTime(FGenericPlatformHttpRequest *this)

{
  return 0.0;
}

// GetFailureReason @ 1431628b0

EHttpFailureReason __thiscall
FGenericPlatformHttpRequest::GetFailureReason(FGenericPlatformHttpRequest *this)

{
  return None;
}

// GetHeader @ 143162b70

FString * __thiscall
FGenericPlatformHttpRequest::GetHeader
          (FGenericPlatformHttpRequest *this,FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetOption @ 143164560

FString * __thiscall
FGenericPlatformHttpRequest::GetOption
          (FGenericPlatformHttpRequest *this,FString *__return_storage_ptr__,FName param_1)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetPriority @ 143164700

EHttpRequestPriority __thiscall
FGenericPlatformHttpRequest::GetPriority(FGenericPlatformHttpRequest *this)

{
  return Normal;
}

// GetResponse @ 1431647d0

TSharedPtr<IHttpResponse,1> * __thiscall
FGenericPlatformHttpRequest::GetResponse
          (FGenericPlatformHttpRequest *this,TSharedPtr<IHttpResponse,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (IHttpResponse *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetStatus @ 143164bf0

Type __thiscall FGenericPlatformHttpRequest::GetStatus(FGenericPlatformHttpRequest *this)

{
  return NotStarted;
}

// GetTimeout @ 143164d40

TOptional<float> __thiscall
FGenericPlatformHttpRequest::GetTimeout(FGenericPlatformHttpRequest *this)

{
  TOptional<float> in_RDX;
  
  *(undefined1 *)((longlong)in_RDX + 4) = 0;
  return in_RDX;
}

// GetURL @ 143164f80

FString * __thiscall FGenericPlatformHttpRequest::GetURL(FGenericPlatformHttpRequest *this)

{
  return &this->URL;
}

// GetURLParameter @ 143165110

FString * __thiscall
FGenericPlatformHttpRequest::GetURLParameter
          (FGenericPlatformHttpRequest *this,FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetVerb @ 143166440

FString * __thiscall
FGenericPlatformHttpRequest::GetVerb
          (FGenericPlatformHttpRequest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// ProcessRequest @ 143174840

bool __thiscall FGenericPlatformHttpRequest::ProcessRequest(FGenericPlatformHttpRequest *this)

{
  return false;
}

// ProcessRequestUntilComplete @ 143175140

void __thiscall
FGenericPlatformHttpRequest::ProcessRequestUntilComplete(FGenericPlatformHttpRequest *this)

{
  return;
}

// ResetTimeoutStatus @ 1431799d0

void __thiscall FGenericPlatformHttpRequest::ResetTimeoutStatus(FGenericPlatformHttpRequest *this)

{
  return;
}

// SetActivityTimeout @ 14317cb40

void __thiscall
FGenericPlatformHttpRequest::SetActivityTimeout(FGenericPlatformHttpRequest *this,float param_1)

{
  return;
}

// SetContent @ 14317cf00

void __thiscall
FGenericPlatformHttpRequest::SetContent
          (FGenericPlatformHttpRequest *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// SetContent @ 14317cf10

void __thiscall
FGenericPlatformHttpRequest::SetContent
          (FGenericPlatformHttpRequest *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// SetContentAsStreamedFile @ 14317d380

bool __thiscall
FGenericPlatformHttpRequest::SetContentAsStreamedFile
          (FGenericPlatformHttpRequest *this,FString *param_1)

{
  return false;
}

// SetContentAsString @ 14317d8f0

void __thiscall
FGenericPlatformHttpRequest::SetContentAsString(FGenericPlatformHttpRequest *this,FString *param_1)

{
  return;
}

// SetContentFromStream @ 14317dc30

bool __thiscall
FGenericPlatformHttpRequest::SetContentFromStream
          (FGenericPlatformHttpRequest *this,TSharedRef<FArchive,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// SetDelegateThreadPolicy @ 14317dec0

void __thiscall
FGenericPlatformHttpRequest::SetDelegateThreadPolicy
          (FGenericPlatformHttpRequest *this,EHttpRequestDelegateThreadPolicy param_1)

{
  return;
}

// SetHeader @ 14317e0c0

void __thiscall
FGenericPlatformHttpRequest::SetHeader
          (FGenericPlatformHttpRequest *this,FString *param_1,FString *param_2)

{
  return;
}

// SetOption @ 14317ec00

void __thiscall
FGenericPlatformHttpRequest::SetOption
          (FGenericPlatformHttpRequest *this,FName param_1,FString *param_2)

{
  return;
}

// SetPriority @ 14317ee60

void __thiscall
FGenericPlatformHttpRequest::SetPriority
          (FGenericPlatformHttpRequest *this,EHttpRequestPriority param_1)

{
  return;
}

// SetResponseBodyReceiveStream @ 14317f0d0

bool __thiscall
FGenericPlatformHttpRequest::SetResponseBodyReceiveStream
          (FGenericPlatformHttpRequest *this,TSharedRef<FArchive,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// SetTimeout @ 14317f580

void __thiscall
FGenericPlatformHttpRequest::SetTimeout(FGenericPlatformHttpRequest *this,float param_1)

{
  return;
}

// SetURL @ 14317f9f0

void __thiscall
FGenericPlatformHttpRequest::SetURL(FGenericPlatformHttpRequest *this,FString *param_1)

{
  ::FString::operator=(&this->URL,param_1);
  return;
}

// SetVerb @ 14317fdb0

void __thiscall
FGenericPlatformHttpRequest::SetVerb(FGenericPlatformHttpRequest *this,FString *param_1)

{
  return;
}

// Tick @ 1431879e0

void __thiscall FGenericPlatformHttpRequest::Tick(FGenericPlatformHttpRequest *this,float param_1)

{
  return;
}

