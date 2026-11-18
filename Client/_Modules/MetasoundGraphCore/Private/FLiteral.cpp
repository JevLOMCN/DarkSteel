// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 5

// ~FLiteral @ 14ad3dde0

void __thiscall Metasound::FLiteral::~FLiteral(FLiteral *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  bVar1 = (this->Value).TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Value)._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Value)._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Value)._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Value)._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Value)._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Value)._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>((FString *)(this->Value)._padding_,(int)(this->Value)._padding_);
    pvVar4 = (void *)(this->Value)._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Value)._padding_,
               (int)(this->Value)._padding_);
    pvVar4 = (void *)(this->Value)._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// CreateInvalid @ 14ad4c5f0

FLiteral * __cdecl Metasound::FLiteral::CreateInvalid(FLiteral *__return_storage_ptr__)

{
  (__return_storage_ptr__->Value).TypeIndex = '\f';
  return __return_storage_ptr__;
}

// GetDefaultForType @ 14ad552a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLiteral * __cdecl
Metasound::FLiteral::GetDefaultForType(FLiteral *__return_storage_ptr__,ELiteralType param_1)

{
  FString *pFVar1;
  int iVar2;
  void *pvVar3;
  ForAnyElementType _Src;
  size_t sVar4;
  longlong lVar5;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  switch(param_1) {
  case None:
    (__return_storage_ptr__->Value).TypeIndex = '\0';
    break;
  case Boolean:
    *(undefined1 *)&(__return_storage_ptr__->Value)._padding_ = 0;
    (__return_storage_ptr__->Value).TypeIndex = '\x01';
    break;
  case Integer:
    (__return_storage_ptr__->Value).TypeIndex = '\x02';
    *(undefined4 *)&(__return_storage_ptr__->Value)._padding_ = 0;
    break;
  case Float:
    (__return_storage_ptr__->Value).TypeIndex = '\x03';
    *(undefined4 *)&(__return_storage_ptr__->Value)._padding_ = 0;
    break;
  case String:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_FString_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<FString>::GetValue(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<FString>::GetValue(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FString_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<FString>::GetValue(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<FString>::GetValue(void)'
                          ::__l2::Value,L"");
      atexit(`Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<FString>::
             GetValue'::__l2::_dynamic_atexit_destructor_for__Value__);
      _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<FString>::GetValue(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    _Src.Data = `public:_static_class_FString_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<FString>::GetValue(void)'
                ::__l2::Value.Data.AllocatorInstance.Data;
    lVar5 = (longlong)
            `public:_static_class_FString_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<FString>::GetValue(void)'
            ::__l2::Value.Data.ArrayNum;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10._0_4_ =
         `public:_static_class_FString_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<FString>::GetValue(void)'
         ::__l2::Value.Data.ArrayNum;
    if (`public:_static_class_FString_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<FString>::GetValue(void)'
        ::__l2::Value.Data.ArrayNum == 0) {
      (__return_storage_ptr__->Value)._padding_ = 0;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Value)._padding_ + 4) = 0;
      *(undefined4 *)&(__return_storage_ptr__->Value)._padding_ = 0;
      (__return_storage_ptr__->Value).TypeIndex = '\x04';
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,`public:_static_class_FString_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<FString>::GetValue(void)'
                     ::__l2::Value.Data.ArrayNum,0,&local_18,
                 `public:_static_class_FString_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<FString>::GetValue(void)'
                 ::__l2::Value.Data.ArrayNum,(int *)((longlong)&local_10 + 4));
      memcpy(local_18.Data,_Src.Data,lVar5 * 2);
      (__return_storage_ptr__->Value)._padding_ = (longlong)local_18.Data;
      *(int *)&(__return_storage_ptr__->Value)._padding_ = (int)local_10;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Value)._padding_ + 4) = local_10._4_4_;
      (__return_storage_ptr__->Value).TypeIndex = '\x04';
    }
    break;
  case UObjectProxy:
    (__return_storage_ptr__->Value).TypeIndex = '\x05';
    (__return_storage_ptr__->Value)._padding_ = 0;
    (__return_storage_ptr__->Value)._padding_ = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    break;
  case NoneArray:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>_>::GetValue(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>_>::GetValue(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>_>::GetValue(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      atexit(`Metasound::MetasoundLiteralIntrinsics::
             TLiteralDefaultValueFromDecayed<TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>_>
             ::GetValue'::__l2::_dynamic_atexit_destructor_for__Value__);
      _Init_thread_footer(&`public:_static_class_TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>_>::GetValue(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pvVar3 = _Value;
    sVar4 = (size_t)DAT_1552d2450;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10._0_4_ = DAT_1552d2450;
    if (DAT_1552d2450 == 0) {
      (__return_storage_ptr__->Value)._padding_ = 0;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Value)._padding_ + 4) = 0;
      *(undefined4 *)&(__return_storage_ptr__->Value)._padding_ = 0;
      (__return_storage_ptr__->Value).TypeIndex = '\x06';
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,DAT_1552d2450,0,&local_18,DAT_1552d2450,(int *)((longlong)&local_10 + 4));
      memcpy(local_18.Data,pvVar3,sVar4);
      (__return_storage_ptr__->Value)._padding_ = (longlong)local_18.Data;
      *(int *)&(__return_storage_ptr__->Value)._padding_ = (int)local_10;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Value)._padding_ + 4) = local_10._4_4_;
      (__return_storage_ptr__->Value).TypeIndex = '\x06';
    }
    break;
  case BooleanArray:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_TArray<bool,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetValue(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_TArray<bool,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetValue(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_TArray<bool,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetValue(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      atexit(`Metasound::MetasoundLiteralIntrinsics::
             TLiteralDefaultValueFromDecayed<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetValue'::
             __l2::_dynamic_atexit_destructor_for__Value__);
      _Init_thread_footer(&`public:_static_class_TArray<bool,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetValue(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pvVar3 = _Value;
    sVar4 = (size_t)DAT_1552d2440;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10._0_4_ = DAT_1552d2440;
    if (DAT_1552d2440 == 0) {
      (__return_storage_ptr__->Value)._padding_ = 0;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Value)._padding_ + 4) = 0;
      *(undefined4 *)&(__return_storage_ptr__->Value)._padding_ = 0;
      (__return_storage_ptr__->Value).TypeIndex = '\a';
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,DAT_1552d2440,0,&local_18,DAT_1552d2440,(int *)((longlong)&local_10 + 4));
      memcpy(local_18.Data,pvVar3,sVar4);
      (__return_storage_ptr__->Value)._padding_ = (longlong)local_18.Data;
      *(int *)&(__return_storage_ptr__->Value)._padding_ = (int)local_10;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Value)._padding_ + 4) = local_10._4_4_;
      (__return_storage_ptr__->Value).TypeIndex = '\a';
    }
    break;
  case IntegerArray:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<TArray<int,TSizedDefaultAllocator<32>_>_>::GetValue(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<TArray<int,TSizedDefaultAllocator<32>_>_>::GetValue(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<TArray<int,TSizedDefaultAllocator<32>_>_>::GetValue(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      atexit(`Metasound::MetasoundLiteralIntrinsics::
             TLiteralDefaultValueFromDecayed<TArray<int,TSizedDefaultAllocator<32>_>_>::GetValue'::
             __l2::_dynamic_atexit_destructor_for__Value__);
      _Init_thread_footer(&`public:_static_class_TArray<int,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<TArray<int,TSizedDefaultAllocator<32>_>_>::GetValue(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pvVar3 = _Value;
    lVar5 = (longlong)DAT_1552d2430;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10._0_4_ = DAT_1552d2430;
    if (DAT_1552d2430 == 0) {
      (__return_storage_ptr__->Value)._padding_ = 0;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Value)._padding_ + 4) = 0;
      *(undefined4 *)&(__return_storage_ptr__->Value)._padding_ = 0;
      (__return_storage_ptr__->Value).TypeIndex = '\b';
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,DAT_1552d2430,0,&local_18,DAT_1552d2430,(int *)((longlong)&local_10 + 4));
      memcpy(local_18.Data,pvVar3,lVar5 << 2);
      (__return_storage_ptr__->Value)._padding_ = (longlong)local_18.Data;
      *(int *)&(__return_storage_ptr__->Value)._padding_ = (int)local_10;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Value)._padding_ + 4) = local_10._4_4_;
      (__return_storage_ptr__->Value).TypeIndex = '\b';
    }
    break;
  case FloatArray:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<TArray<float,TSizedDefaultAllocator<32>_>_>::GetValue(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<TArray<float,TSizedDefaultAllocator<32>_>_>::GetValue(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<TArray<float,TSizedDefaultAllocator<32>_>_>::GetValue(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      atexit(`Metasound::MetasoundLiteralIntrinsics::
             TLiteralDefaultValueFromDecayed<TArray<float,TSizedDefaultAllocator<32>_>_>::GetValue'
             ::__l2::_dynamic_atexit_destructor_for__Value__);
      _Init_thread_footer(&`public:_static_class_TArray<float,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<TArray<float,TSizedDefaultAllocator<32>_>_>::GetValue(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pvVar3 = _Value;
    lVar5 = (longlong)DAT_1552d2420;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10._0_4_ = DAT_1552d2420;
    if (DAT_1552d2420 == 0) {
      (__return_storage_ptr__->Value)._padding_ = 0;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Value)._padding_ + 4) = 0;
      *(undefined4 *)&(__return_storage_ptr__->Value)._padding_ = 0;
      (__return_storage_ptr__->Value).TypeIndex = '\t';
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,DAT_1552d2420,0,&local_18,DAT_1552d2420,(int *)((longlong)&local_10 + 4));
      memcpy(local_18.Data,pvVar3,lVar5 << 2);
      (__return_storage_ptr__->Value)._padding_ = (longlong)local_18.Data;
      *(int *)&(__return_storage_ptr__->Value)._padding_ = (int)local_10;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Value)._padding_ + 4) = local_10._4_4_;
      (__return_storage_ptr__->Value).TypeIndex = '\t';
    }
    break;
  case StringArray:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetValue(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetValue(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetValue(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      atexit(`Metasound::MetasoundLiteralIntrinsics::
             TLiteralDefaultValueFromDecayed<TArray<FString,TSizedDefaultAllocator<32>_>_>::
             GetValue'::__l2::_dynamic_atexit_destructor_for__Value__);
      _Init_thread_footer(&`public:_static_class_TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64___cdecl_Metasound::MetasoundLiteralIntrinsics::TLiteralDefaultValueFromDecayed<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetValue(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    iVar2 = DAT_1552d2410;
    pFVar1 = _Value;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10._0_4_ = DAT_1552d2410;
    if (DAT_1552d2410 == 0) {
      local_10._4_4_ = 0;
      local_18.Data = (FScriptContainerElement *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,DAT_1552d2410,0,&local_18,DAT_1552d2410,(int *)((longlong)&local_10 + 4));
      ConstructItems<FString,FString,int>(local_18.Data,pFVar1,iVar2);
    }
    (__return_storage_ptr__->Value)._padding_ = (longlong)local_18.Data;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->Value)._padding_ + 4) = local_10._4_4_;
    *(int *)&(__return_storage_ptr__->Value)._padding_ = (int)local_10;
    local_18.Data = (FScriptContainerElement *)0x0;
    local_10 = 0;
    (__return_storage_ptr__->Value).TypeIndex = '\n';
    DestructItems<FString,int>((FString *)0x0,0);
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
    break;
  case UObjectProxyArray:
    (__return_storage_ptr__->Value)._padding_ = 0;
    (__return_storage_ptr__->Value)._padding_ = 0;
    (__return_storage_ptr__->Value).TypeIndex = '\v';
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>((TSharedPtr<Audio::IProxyData,1> *)0x0,0);
    break;
  default:
    (__return_storage_ptr__->Value).TypeIndex = '\f';
  }
  return __return_storage_ptr__;
}

// GetType @ 14ad568d0

ELiteralType __thiscall Metasound::FLiteral::GetType(FLiteral *this)

{
  switch((this->Value).TypeIndex) {
  case '\0':
    return None;
  case '\x01':
    return Boolean;
  case '\x02':
    return Integer;
  case '\x03':
    return Float;
  case '\x04':
    return String;
  case '\x05':
    return UObjectProxy;
  case '\x06':
    return NoneArray;
  case '\a':
    return BooleanArray;
  case '\b':
    return IntegerArray;
  case '\t':
    return FloatArray;
  case '\n':
    return StringArray;
  case '\v':
    return UObjectProxyArray;
  default:
    return Invalid;
  }
}

// IsValid @ 14ad5a8f0

bool __thiscall Metasound::FLiteral::IsValid(FLiteral *this)

{
  ELiteralType EVar1;
  
  EVar1 = GetType(this);
  return EVar1 != Invalid;
}

