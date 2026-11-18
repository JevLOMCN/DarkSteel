// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 45

// FMockHttpRequest @ 1432fb070

FMockHttpRequest * __thiscall
BuildPatchServices::FMockHttpRequest::FMockHttpRequest(FMockHttpRequest *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMockHttpRequest_BuildPatchServices__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->HttpRequestProgressDelegate,4000)
  ;
  *(undefined8 *)&(this->HttpRequestProgressDelegate).field_0x28 = 0;
  *(undefined4 *)&(this->HttpRequestProgressDelegate).field_0x30 = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->HttpRequestProgressDelegate64,4000);
  *(undefined8 *)&(this->HttpRequestProgressDelegate64).field_0x28 = 0;
  *(undefined4 *)&(this->HttpRequestProgressDelegate64).field_0x30 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->HttpRequestCompleteDelegate,4000)
  ;
  *(undefined8 *)&(this->HttpRequestCompleteDelegate).field_0x28 = 0;
  *(undefined4 *)&(this->HttpRequestCompleteDelegate).field_0x30 = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->HttpStatusCodeReceivedDelegate,4000);
  *(undefined8 *)&(this->HttpStatusCodeReceivedDelegate).field_0x28 = 0;
  *(undefined4 *)&(this->HttpStatusCodeReceivedDelegate).field_0x30 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->HttpHeaderReceivedDelegate,4000);
  *(undefined8 *)&(this->HttpHeaderReceivedDelegate).field_0x28 = 0;
  *(undefined4 *)&(this->HttpHeaderReceivedDelegate).field_0x30 = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->HttpRequestWillRetryDelegate,4000);
  *(undefined8 *)&(this->HttpRequestWillRetryDelegate).field_0x28 = 0;
  *(undefined4 *)&(this->HttpRequestWillRetryDelegate).field_0x30 = 0;
  (this->RxSetVerb).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RxSetVerb).ArrayNum = 0;
  (this->RxSetVerb).ArrayMax = 0;
  (this->RxSetURL).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RxSetURL).ArrayNum = 0;
  (this->RxSetURL).ArrayMax = 0;
  (this->EffectiveURL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EffectiveURL).Data.ArrayNum = 0;
  (this->EffectiveURL).Data.ArrayMax = 0;
  (this->URL).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->URL).Data.ArrayNum = 0;
  (this->URL).Data.ArrayMax = 0;
  return this;
}

// ~FMockHttpRequest @ 1432fd920

void __thiscall BuildPatchServices::FMockHttpRequest::~FMockHttpRequest(FMockHttpRequest *this)

{
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
  *lpCriticalSection;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int,int),FDefaultTSDelegateUserPolicy>
  *lpCriticalSection_00;
  int *piVar1;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,float),FDefaultTSDelegateUserPolicy>
  *lpCriticalSection_01;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
  *lpCriticalSection_02;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy>
  *lpCriticalSection_03;
  TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
  *lpCriticalSection_04;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  
  pFVar3 = (this->URL).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->EffectiveURL).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TTuple<FString>,int>
            ((TTuple<FString> *)(this->RxSetURL).AllocatorInstance.Data,(this->RxSetURL).ArrayNum);
  pFVar3 = (this->RxSetURL).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TTuple<FString>,int>
            ((TTuple<FString> *)(this->RxSetVerb).AllocatorInstance.Data,(this->RxSetVerb).ArrayNum)
  ;
  pFVar3 = (this->RxSetVerb).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  lpCriticalSection_01 = &this->HttpRequestWillRetryDelegate;
  if (lpCriticalSection_01 ==
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,float),FDefaultTSDelegateUserPolicy>
       *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_01);
  if ((*(int *)&(this->HttpRequestWillRetryDelegate).field_0x30 != 0) &&
     (puVar4 = *(undefined8 **)&(this->HttpRequestWillRetryDelegate).field_0x28,
     puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->HttpRequestWillRetryDelegate).field_0x28,0,0,0x10);
    *(undefined4 *)&(this->HttpRequestWillRetryDelegate).field_0x30 = 0;
  }
  if (lpCriticalSection_01 !=
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,float),FDefaultTSDelegateUserPolicy>
       *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_01);
  }
  pvVar5 = *(void **)&(this->HttpRequestWillRetryDelegate).field_0x28;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_01);
  lpCriticalSection_02 = &this->HttpHeaderReceivedDelegate;
  if (lpCriticalSection_02 ==
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
       *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_02);
  if ((*(int *)&(this->HttpHeaderReceivedDelegate).field_0x30 != 0) &&
     (puVar4 = *(undefined8 **)&(this->HttpHeaderReceivedDelegate).field_0x28,
     puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->HttpHeaderReceivedDelegate).field_0x28,0,0,0x10);
    *(undefined4 *)&(this->HttpHeaderReceivedDelegate).field_0x30 = 0;
  }
  if (lpCriticalSection_02 !=
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
       *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_02);
  }
  pvVar5 = *(void **)&(this->HttpHeaderReceivedDelegate).field_0x28;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_02);
  lpCriticalSection_03 = &this->HttpStatusCodeReceivedDelegate;
  if (lpCriticalSection_03 ==
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy> *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_03);
  if ((*(int *)&(this->HttpStatusCodeReceivedDelegate).field_0x30 != 0) &&
     (puVar4 = *(undefined8 **)&(this->HttpStatusCodeReceivedDelegate).field_0x28,
     puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->HttpStatusCodeReceivedDelegate).field_0x28,0,0,0x10);
    *(undefined4 *)&(this->HttpStatusCodeReceivedDelegate).field_0x30 = 0;
  }
  if (lpCriticalSection_03 !=
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_03);
  }
  pvVar5 = *(void **)&(this->HttpStatusCodeReceivedDelegate).field_0x28;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_03);
  lpCriticalSection_04 = &this->HttpRequestCompleteDelegate;
  if (lpCriticalSection_04 ==
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
       *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_04);
  if ((*(int *)&(this->HttpRequestCompleteDelegate).field_0x30 != 0) &&
     (puVar4 = *(undefined8 **)&(this->HttpRequestCompleteDelegate).field_0x28,
     puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->HttpRequestCompleteDelegate).field_0x28,0,0,0x10);
    *(undefined4 *)&(this->HttpRequestCompleteDelegate).field_0x30 = 0;
  }
  if (lpCriticalSection_04 !=
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
       *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_04);
  }
  pvVar5 = *(void **)&(this->HttpRequestCompleteDelegate).field_0x28;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_04);
  lpCriticalSection = &this->HttpRequestProgressDelegate64;
  if (lpCriticalSection ==
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
       *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((*(int *)&(this->HttpRequestProgressDelegate64).field_0x30 != 0) &&
     (puVar4 = *(undefined8 **)&(this->HttpRequestProgressDelegate64).field_0x28,
     puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->HttpRequestProgressDelegate64).field_0x28,0,0,0x10);
    *(undefined4 *)&(this->HttpRequestProgressDelegate64).field_0x30 = 0;
  }
  if (lpCriticalSection !=
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
       *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  pvVar5 = *(void **)&(this->HttpRequestProgressDelegate64).field_0x28;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lpCriticalSection_00 = &this->HttpRequestProgressDelegate;
  if (lpCriticalSection_00 ==
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int,int),FDefaultTSDelegateUserPolicy> *)
      0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  if ((*(int *)&(this->HttpRequestProgressDelegate).field_0x30 != 0) &&
     (puVar4 = *(undefined8 **)&(this->HttpRequestProgressDelegate).field_0x28,
     puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->HttpRequestProgressDelegate).field_0x28,0,0,0x10);
    *(undefined4 *)&(this->HttpRequestProgressDelegate).field_0x30 = 0;
  }
  if (lpCriticalSection_00 !=
      (TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int,int),FDefaultTSDelegateUserPolicy> *)
      0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
  pvVar5 = *(void **)&(this->HttpRequestProgressDelegate).field_0x28;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  return;
}

// AppendToHeader @ 143317440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockHttpRequest::AppendToHeader
          (FMockHttpRequest *this,FString *param_1,FString *param_2)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_BuildPatchServices::FMockHttpRequest::AppendToHeader(FString_const&___ptr64,FString_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return;
  }
  return;
}

// CancelRequest @ 1433190b0

void __thiscall BuildPatchServices::FMockHttpRequest::CancelRequest(FMockHttpRequest *this)

{
  this->RxCancelRequest = this->RxCancelRequest + 1;
  return;
}

// ClearTimeout @ 1433190c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall BuildPatchServices::FMockHttpRequest::ClearTimeout(FMockHttpRequest *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_BuildPatchServices::FMockHttpRequest::ClearTimeout(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return;
  }
  return;
}

// GetAllHeaders @ 143320090

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FMockHttpRequest::GetAllHeaders
          (FMockHttpRequest *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_TArray<FString,TSizedDefaultAllocator<32>_>___cdecl_BuildPatchServices::FMockHttpRequest::GetAllHeaders(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetContent @ 1433203b0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FMockHttpRequest::GetContent(FMockHttpRequest *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_BuildPatchServices::FMockHttpRequest::GetContent(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_BuildPatchServices::FMockHttpRequest::GetContent(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_BuildPatchServices::FMockHttpRequest::GetContent(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_BuildPatchServices::FMockHttpRequest::GetContent(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`BuildPatchServices::FMockHttpRequest::GetContent'::__l2::
             _dynamic_atexit_destructor_for__None__);
      _Init_thread_footer(&`public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_BuildPatchServices::FMockHttpRequest::GetContent(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
         &`public:_virtual_class_TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_BuildPatchServices::FMockHttpRequest::GetContent(void)const___ptr64'
          ::__l2::None;
}

// GetContentLength @ 143320790

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall BuildPatchServices::FMockHttpRequest::GetContentLength(FMockHttpRequest *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_unsigned___int64___cdecl_BuildPatchServices::FMockHttpRequest::GetContentLength(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return 0;
}

// GetContentType @ 1433207f0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
BuildPatchServices::FMockHttpRequest::GetContentType
          (FMockHttpRequest *this,FString *__return_storage_ptr__)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_FString___cdecl_BuildPatchServices::FMockHttpRequest::GetContentType(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDelegateThreadPolicy @ 1433208f0

/* WARNING: Enum "Type": Some values do not have unique names */

EHttpRequestDelegateThreadPolicy __thiscall
BuildPatchServices::FMockHttpRequest::GetDelegateThreadPolicy(FMockHttpRequest *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_enum_EHttpRequestDelegateThreadPolicy___cdecl_BuildPatchServices::FMockHttpRequest::GetDelegateThreadPolicy(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return CompleteOnGameThread;
}

// GetEffectiveURL @ 143320920

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall BuildPatchServices::FMockHttpRequest::GetEffectiveURL(FMockHttpRequest *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_FString_const&___ptr64___cdecl_BuildPatchServices::FMockHttpRequest::GetEffectiveURL(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return &this->EffectiveURL;
  }
  return &this->EffectiveURL;
}

// GetElapsedTime @ 143320a00

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall BuildPatchServices::FMockHttpRequest::GetElapsedTime(FMockHttpRequest *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_float___cdecl_BuildPatchServices::FMockHttpRequest::GetElapsedTime(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return 0.0;
}

// GetFailureReason @ 143320a30

/* WARNING: Enum "Type": Some values do not have unique names */

EHttpFailureReason __thiscall
BuildPatchServices::FMockHttpRequest::GetFailureReason(FMockHttpRequest *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_enum_EHttpFailureReason___cdecl_BuildPatchServices::FMockHttpRequest::GetFailureReason(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return None;
}

// GetHeader @ 143320e10

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
BuildPatchServices::FMockHttpRequest::GetHeader
          (FMockHttpRequest *this,FString *__return_storage_ptr__,FString *param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_FString___cdecl_BuildPatchServices::FMockHttpRequest::GetHeader(FString_const&___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetOption @ 143320f20

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
BuildPatchServices::FMockHttpRequest::GetOption
          (FMockHttpRequest *this,FString *__return_storage_ptr__,FName param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_FString___cdecl_BuildPatchServices::FMockHttpRequest::GetOption(FName)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPriority @ 143320f90

/* WARNING: Enum "Type": Some values do not have unique names */

EHttpRequestPriority __thiscall
BuildPatchServices::FMockHttpRequest::GetPriority(FMockHttpRequest *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_enum_EHttpRequestPriority___cdecl_BuildPatchServices::FMockHttpRequest::GetPriority(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return Normal;
}

// GetResponse @ 143321020

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IHttpResponse,1> * __thiscall
BuildPatchServices::FMockHttpRequest::GetResponse
          (FMockHttpRequest *this,TSharedPtr<IHttpResponse,1> *__return_storage_ptr__)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_TSharedPtr<IHttpResponse,1>_const___cdecl_BuildPatchServices::FMockHttpRequest::GetResponse(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  __return_storage_ptr__->Object = (IHttpResponse *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetStatus @ 1433211a0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall BuildPatchServices::FMockHttpRequest::GetStatus(FMockHttpRequest *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_enum_EHttpRequestStatus::Type___cdecl_BuildPatchServices::FMockHttpRequest::GetStatus(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return NotStarted;
}

// GetTimeout @ 143321230

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<float> __thiscall BuildPatchServices::FMockHttpRequest::GetTimeout(FMockHttpRequest *this)

{
  TOptional<float> in_RDX;
  
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_struct_TOptional<float>___cdecl_BuildPatchServices::FMockHttpRequest::GetTimeout(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    *(undefined1 *)((longlong)in_RDX + 4) = 0;
    return in_RDX;
  }
  *(undefined1 *)((longlong)in_RDX + 4) = 0;
  return in_RDX;
}

// GetURL @ 143321310

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall BuildPatchServices::FMockHttpRequest::GetURL(FMockHttpRequest *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_FString_const&___ptr64___cdecl_BuildPatchServices::FMockHttpRequest::GetURL(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return &this->URL;
  }
  return &this->URL;
}

// GetURLParameter @ 1433213a0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
BuildPatchServices::FMockHttpRequest::GetURLParameter
          (FMockHttpRequest *this,FString *__return_storage_ptr__,FString *param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_FString___cdecl_BuildPatchServices::FMockHttpRequest::GetURLParameter(FString_const&___ptr64)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetVerb @ 143321420

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
BuildPatchServices::FMockHttpRequest::GetVerb
          (FMockHttpRequest *this,FString *__return_storage_ptr__)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_FString___cdecl_BuildPatchServices::FMockHttpRequest::GetVerb(void)const___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// OnHeaderReceived @ 1433251d0

TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
* __thiscall BuildPatchServices::FMockHttpRequest::OnHeaderReceived(FMockHttpRequest *this)

{
  return &this->HttpHeaderReceivedDelegate;
}

// OnProcessRequestComplete @ 1433255b0

TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
* __thiscall BuildPatchServices::FMockHttpRequest::OnProcessRequestComplete(FMockHttpRequest *this)

{
  return &this->HttpRequestCompleteDelegate;
}

// OnRequestProgress64 @ 143325630

TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
* __thiscall BuildPatchServices::FMockHttpRequest::OnRequestProgress64(FMockHttpRequest *this)

{
  return &this->HttpRequestProgressDelegate64;
}

// OnRequestWillRetry @ 143325640

/* WARNING: Enum "Type": Some values do not have unique names */

TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,float),FDefaultTSDelegateUserPolicy>
* __thiscall BuildPatchServices::FMockHttpRequest::OnRequestWillRetry(FMockHttpRequest *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_class_TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,float),FDefaultTSDelegateUserPolicy>&___ptr64___cdecl_BuildPatchServices::FMockHttpRequest::OnRequestWillRetry(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return &this->HttpRequestWillRetryDelegate;
  }
  return &this->HttpRequestWillRetryDelegate;
}

// OnStatusCodeReceived @ 143325690

TDelegate<void___cdecl(TSharedPtr<IHttpRequest,1>,int),FDefaultTSDelegateUserPolicy> * __thiscall
BuildPatchServices::FMockHttpRequest::OnStatusCodeReceived(FMockHttpRequest *this)

{
  return &this->HttpStatusCodeReceivedDelegate;
}

// ProcessRequest @ 143325a80

bool __thiscall BuildPatchServices::FMockHttpRequest::ProcessRequest(FMockHttpRequest *this)

{
  this->RxProcessRequest = this->RxProcessRequest + 1;
  return true;
}

// ProcessRequestUntilComplete @ 143325a90

void __thiscall
BuildPatchServices::FMockHttpRequest::ProcessRequestUntilComplete(FMockHttpRequest *this)

{
  return;
}

// ResetTimeoutStatus @ 1433267f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall BuildPatchServices::FMockHttpRequest::ResetTimeoutStatus(FMockHttpRequest *this)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_BuildPatchServices::FMockHttpRequest::ResetTimeoutStatus(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return;
  }
  return;
}

// SetActivityTimeout @ 143326dc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockHttpRequest::SetActivityTimeout(FMockHttpRequest *this,float param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_BuildPatchServices::FMockHttpRequest::SetActivityTimeout(float)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return;
  }
  return;
}

// SetContent @ 143326e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockHttpRequest::SetContent
          (FMockHttpRequest *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_BuildPatchServices::FMockHttpRequest::SetContent(TArray<unsigned_char,TSizedDefaultAllocator<32>_>&&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return;
  }
  return;
}

// SetContent @ 143326ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockHttpRequest::SetContent
          (FMockHttpRequest *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_BuildPatchServices::FMockHttpRequest::SetContent(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return;
  }
  return;
}

// SetContentAsStreamedFile @ 143326ef0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockHttpRequest::SetContentAsStreamedFile
          (FMockHttpRequest *this,FString *param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_bool___cdecl_BuildPatchServices::FMockHttpRequest::SetContentAsStreamedFile(FString_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  return false;
}

// SetContentAsString @ 143326f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockHttpRequest::SetContentAsString(FMockHttpRequest *this,FString *param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_BuildPatchServices::FMockHttpRequest::SetContentAsString(FString_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return;
  }
  return;
}

// SetContentFromStream @ 143326f50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockHttpRequest::SetContentFromStream
          (FMockHttpRequest *this,TSharedRef<FArchive,1> *param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_bool___cdecl_BuildPatchServices::FMockHttpRequest::SetContentFromStream(TSharedRef<FArchive,1>)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// SetDelegateThreadPolicy @ 143326f90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockHttpRequest::SetDelegateThreadPolicy
          (FMockHttpRequest *this,EHttpRequestDelegateThreadPolicy param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_BuildPatchServices::FMockHttpRequest::SetDelegateThreadPolicy(EHttpRequestDelegateThreadPolicy)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return;
  }
  return;
}

// SetHeader @ 143327060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockHttpRequest::SetHeader
          (FMockHttpRequest *this,FString *param_1,FString *param_2)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_BuildPatchServices::FMockHttpRequest::SetHeader(FString_const&___ptr64,FString_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return;
  }
  return;
}

// SetOption @ 1433270c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockHttpRequest::SetOption
          (FMockHttpRequest *this,FName param_1,FString *param_2)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_BuildPatchServices::FMockHttpRequest::SetOption(FName,FString_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return;
  }
  return;
}

// SetPriority @ 143327120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockHttpRequest::SetPriority
          (FMockHttpRequest *this,EHttpRequestPriority param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_BuildPatchServices::FMockHttpRequest::SetPriority(EHttpRequestPriority)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return;
  }
  return;
}

// SetResponseBodyReceiveStream @ 1433271e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
BuildPatchServices::FMockHttpRequest::SetResponseBodyReceiveStream
          (FMockHttpRequest *this,TSharedRef<FArchive,1> *param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_bool___cdecl_BuildPatchServices::FMockHttpRequest::SetResponseBodyReceiveStream(TSharedRef<FArchive,1>)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// SetTimeout @ 143327330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
BuildPatchServices::FMockHttpRequest::SetTimeout(FMockHttpRequest *this,float param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_BuildPatchServices::FMockHttpRequest::SetTimeout(float)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return;
  }
  return;
}

// SetURL @ 143327360

void __thiscall
BuildPatchServices::FMockHttpRequest::SetURL(FMockHttpRequest *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (this->RxSetURL).ArrayNum;
  piVar1 = &(this->RxSetURL).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->RxSetURL).AllocatorInstance,piVar1);
  }
  (this->RxSetURL).ArrayNum = iVar2 + 1;
  ::FString::FString((FString *)((this->RxSetURL).AllocatorInstance.Data + (longlong)iVar2 * 0x10),
                     param_1);
  return;
}

// SetVerb @ 1433273c0

void __thiscall
BuildPatchServices::FMockHttpRequest::SetVerb(FMockHttpRequest *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (this->RxSetVerb).ArrayNum;
  piVar1 = &(this->RxSetVerb).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->RxSetVerb).AllocatorInstance,piVar1);
  }
  (this->RxSetVerb).ArrayNum = iVar2 + 1;
  ::FString::FString((FString *)((this->RxSetVerb).AllocatorInstance.Data + (longlong)iVar2 * 0x10),
                     param_1);
  return;
}

// Tick @ 1433284d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall BuildPatchServices::FMockHttpRequest::Tick(FMockHttpRequest *this,float param_1)

{
  if (1 < (byte)LogBuildPatchServices._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`public:_virtual_void___cdecl_BuildPatchServices::FMockHttpRequest::Tick(float)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogBuildPatchServices);
    return;
  }
  return;
}

