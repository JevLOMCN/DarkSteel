// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetworkReplayStreaming
// Functions: 18

// OnReplayGetAnalyticsAttributes'' @ 140f943b0

void __cdecl
`dynamic_initializer_for_'INetworkReplayStreamer::OnReplayGetAnalyticsAttributes__(void)

{
  atexit(`dynamic_atexit_destructor_for_'INetworkReplayStreamer::OnReplayGetAnalyticsAttributes__);
  return;
}

// `dynamic_initializer_for_'CVarReplayStreamerAutoDemoPrefix'' @ 140f943d0

void __cdecl _dynamic_initializer_for__CVarReplayStreamerAutoDemoPrefix__(void)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = FString::FString(&local_18,L"demo");
  TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
            (&CVarReplayStreamerAutoDemoPrefix,L"demo.ReplayStreamerAutoDemoPrefix",pFVar1,
             L"Prefix to use when generating automatic demo names.",0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__CVarReplayStreamerAutoDemoPrefix__);
  return;
}

// `dynamic_initializer_for_'CVarReplayStreamerAutoDemoUseDateTimePostfix'' @ 140f94430

void __cdecl _dynamic_initializer_for__CVarReplayStreamerAutoDemoUseDateTimePostfix__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarReplayStreamerAutoDemoUseDateTimePostfix,
             L"demo.ReplayStreamerAutoDemoUseDateTimePostfix",local_res8,
             L"When enabled, uses the current time as a postfix for automatic demo names instead of indices"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarReplayStreamerAutoDemoUseDateTimePostfix__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantNetworkReplayStreaming'' @ 140f94480

void __cdecl _dynamic_initializer_for__ModuleRegistrantNetworkReplayStreaming__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "NetworkReplayStreaming";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"NetworkReplayStreaming",0x16);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FNetworkReplayStreaming>::InitializeModule)
  ;
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14464341c

/* [thunk]:public: virtual void * __ptr64 __cdecl FNetworkReplayStreaming::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FNetworkReplayStreaming::_vector_deleting_destructor__adjustor_8__
          (FNetworkReplayStreaming *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FNetworkReplayStreaming *)&this[-1].LoadedFactories.HashSize,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 144643900

void * __thiscall
FNetworkReplayStreaming::_scalar_deleting_destructor_(FNetworkReplayStreaming *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&_vftable__for__IModuleInterface__;
  (this->LoadedFactories).HashSize = 0;
  this->_padding_ = (longlong)&_vftable__for__FSelfRegisteringExec__;
  FVar1 = (this->LoadedFactories).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LoadedFactories).Elements);
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&this->_padding_);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// AddElement<TSizedDefaultAllocator<32>,FString,unsigned_int> @ 144643990

void __cdecl
ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,unsigned_int>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,FString *param_2,
          uint *param_3)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FString *pFVar2;
  FAnalyticsEventAttribute *this;
  ForAnyElementType local_28;
  undefined8 local_20;
  FString local_18;
  
  iVar1 = (param_2->Data).ArrayNum;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,iVar1);
  if (iVar1 == 0) {
    local_20 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,_Src,(longlong)iVar1 * 2);
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  local_18.Data.AllocatorInstance.Data = local_28.Data;
  local_18.Data.ArrayNum = (int)local_20;
  this = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x30);
  local_18.Data.ArrayMax = local_20._4_4_;
  local_20 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  pFVar2 = FAnalyticsEventAttribute::CheckName(this,&local_18);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar2->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&this->AttrValueString,L"%u");
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = JsonFragment;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// AddElement<TSizedDefaultAllocator<32>,FString,FString> @ 144643ae0

void __cdecl
ImplMakeAnalyticsEventAttributeArray::AddElement<TSizedDefaultAllocator<32>,FString,FString>
          (TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1,FString *param_2,
          FString *param_3)

{
  FScriptContainerElement *_Src;
  int iVar1;
  FString *pFVar2;
  FAnalyticsEventAttribute *this;
  ForAnyElementType local_28;
  undefined8 local_20;
  FString local_18;
  
  iVar1 = (param_2->Data).ArrayNum;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = CONCAT44(local_20._4_4_,iVar1);
  if (iVar1 == 0) {
    local_20 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,&local_28,iVar1,(int *)((longlong)&local_20 + 4));
    memcpy(local_28.Data,_Src,(longlong)iVar1 * 2);
  }
  iVar1 = param_1->ArrayNum;
  if (iVar1 == param_1->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar1 + 1;
  local_18.Data.AllocatorInstance.Data = local_28.Data;
  local_18.Data.ArrayNum = (int)local_20;
  this = (FAnalyticsEventAttribute *)((param_1->AllocatorInstance).Data + (longlong)iVar1 * 0x30);
  local_18.Data.ArrayMax = local_20._4_4_;
  local_20 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  pFVar2 = FAnalyticsEventAttribute::CheckName(this,&local_18);
  (this->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttrName).Data.ArrayNum = (pFVar2->Data).ArrayNum;
  (this->AttrName).Data.ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  ::FString::FString(&this->AttrValueString,param_3);
  this->AttrValueNumber = 0.0;
  this->AttrValueBool = false;
  this->AttrType = String;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// `scalar_deleting_destructor' @ 144643d90

void * __thiscall
INetworkReplayStreamer::_scalar_deleting_destructor_(INetworkReplayStreamer *this,uint param_1)

{
  TPimplPtr<UE::Net::FNetResult,1> TVar1;
  
  this->_padding_ = (longlong)&___7INetworkReplayStreamer__6B_;
  TVar1 = this->ExtendedError;
  if (TVar1 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
    (**(code **)((longlong)TVar1 + -0x10))((longlong)TVar1 + -0x10);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// LexToString @ 144644780

FString * __cdecl LexToString(FString *__return_storage_ptr__,EReplayStreamerState param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (param_1 == Idle) {
    FString::operator=(__return_storage_ptr__,L"Idle");
    return __return_storage_ptr__;
  }
  if (param_1 != Recording) {
    if (param_1 != Playback) {
      FString::operator=(__return_storage_ptr__,L"Unknown");
      return __return_storage_ptr__;
    }
    FString::operator=(__return_storage_ptr__,L"Playback");
    return __return_storage_ptr__;
  }
  FString::operator=(__return_storage_ptr__,L"Recording");
  return __return_storage_ptr__;
}

// IMPLEMENT_MODULE_NetworkReplayStreaming @ 144644870

void __cdecl IMPLEMENT_MODULE_NetworkReplayStreaming(void)

{
  return;
}

// OnReplayGetAnalyticsAttributes'' @ 15036e7b0

void __cdecl
`dynamic_atexit_destructor_for_'INetworkReplayStreamer::OnReplayGetAnalyticsAttributes__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             INetworkReplayStreamer::OnReplayGetAnalyticsAttributes._8_8_,
             INetworkReplayStreamer::OnReplayGetAnalyticsAttributes._16_4_);
  if (INetworkReplayStreamer::OnReplayGetAnalyticsAttributes._8_8_ != 0) {
    FMemory::Free((void *)INetworkReplayStreamer::OnReplayGetAnalyticsAttributes._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&INetworkReplayStreamer::OnReplayGetAnalyticsAttributes
            );
  return;
}

// `dynamic_atexit_destructor_for_'Attrib_LengthInMS'' @ 15036e7f0

void __cdecl
`INetworkReplayStreamer::AppendCommonReplayAttributes'::__l2::
_dynamic_atexit_destructor_for__Attrib_LengthInMS__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Attrib_LengthInMS.Data.AllocatorInstance.Data;
  if (Attrib_LengthInMS.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Attrib_LengthInMS.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Attrib_ReplayName'' @ 15036e810

void __cdecl
`INetworkReplayStreamer::AppendCommonReplayAttributes'::__l2::
_dynamic_atexit_destructor_for__Attrib_ReplayName__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Attrib_ReplayName.Data.AllocatorInstance.Data;
  if (Attrib_ReplayName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Attrib_ReplayName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Attrib_StreamerState'' @ 15036e830

void __cdecl
`INetworkReplayStreamer::AppendCommonReplayAttributes'::__l2::
_dynamic_atexit_destructor_for__Attrib_StreamerState__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Attrib_StreamerState.Data.AllocatorInstance.Data;
  if (Attrib_StreamerState.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Attrib_StreamerState.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarReplayStreamerAutoDemoPrefix'' @ 15036e850

void __cdecl _dynamic_atexit_destructor_for__CVarReplayStreamerAutoDemoPrefix__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarReplayStreamerAutoDemoPrefix);
  return;
}

// `dynamic_atexit_destructor_for_'CVarReplayStreamerAutoDemoUseDateTimePostfix'' @ 15036e870

void __cdecl _dynamic_atexit_destructor_for__CVarReplayStreamerAutoDemoUseDateTimePostfix__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarReplayStreamerAutoDemoUseDateTimePostfix);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultFactoryName'' @ 15036e890

void __cdecl
`FNetworkReplayStreaming::GetFactory'::__l2::_dynamic_atexit_destructor_for__DefaultFactoryName__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DefaultFactoryName.Data.AllocatorInstance.Data;
  if (DefaultFactoryName.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DefaultFactoryName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

