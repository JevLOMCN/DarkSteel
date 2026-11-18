// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Media
// Functions: 14

// `dynamic_initializer_for_'ModuleRegistrantMedia'' @ 1410aa190

void __cdecl _dynamic_initializer_for__ModuleRegistrantMedia__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Media";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Media",5);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FMediaModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'_GCsvCategory_MediaStreaming'' @ 1410aa1e0

void __cdecl _dynamic_initializer_for___GCsvCategory_MediaStreaming__(void)

{
  FString::operator=(&_GCsvCategory_MediaStreaming.Name,L"MediaStreaming");
  _GCsvCategory_MediaStreaming.Index =
       FCsvProfiler::RegisterCategory(&_GCsvCategory_MediaStreaming.Name,false,false);
  atexit(_dynamic_atexit_destructor_for___GCsvCategory_MediaStreaming__);
  return;
}

// `scalar_deleting_destructor' @ 146bed7a0

void * __thiscall FMediaModule::_scalar_deleting_destructor_(FMediaModule *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TimeSource).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnTickPreEngineCompleted).field_0x8,
             *(int *)&(this->OnTickPreEngineCompleted).field_0x10);
  pvVar1 = *(void **)&(this->OnTickPreEngineCompleted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTickPreEngineCompleted);
  FMediaTicker::~FMediaTicker(&this->Ticker);
  pFVar2 = (this->PlayerFactories).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMediaClock::~FMediaClock(&this->Clock);
  pFVar2 = (this->CaptureSupports).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bed860

void * __thiscall IMediaModule::_scalar_deleting_destructor_(IMediaModule *this,uint param_1)

{
  *this = (IMediaModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// DestructItems<TWeakPtr<IMediaClockSink,1>,int> @ 146bedde0

void __cdecl
DestructItems<TWeakPtr<IMediaClockSink,1>,int>(TWeakPtr<IMediaClockSink,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TWeakPtr<IMediaTickable,1>,int> @ 146bede30

void __cdecl
DestructItems<TWeakPtr<IMediaTickable,1>,int>(TWeakPtr<IMediaTickable,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 146bee1e4

/* [thunk]:public: virtual void * __ptr64 __cdecl FMediaTicker::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FMediaTicker::_vector_deleting_destructor__adjustor_8__(FMediaTicker *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FMediaTicker *)&this[-1].WakeupEvent,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 146bee200

void * __thiscall FMediaClock::_scalar_deleting_destructor_(FMediaClock *this,uint param_1)

{
  ~FMediaClock(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bee240

void * __thiscall FMediaTicker::_scalar_deleting_destructor_(FMediaTicker *this,uint param_1)

{
  ~FMediaTicker(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bee280

void * __thiscall IMediaClock::_scalar_deleting_destructor_(IMediaClock *this,uint param_1)

{
  *this = (IMediaClock)&___7IMediaClock__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 146bee2c0

void * __thiscall IMediaTicker::_scalar_deleting_destructor_(IMediaTicker *this,uint param_1)

{
  *this = (IMediaTicker)&___7IMediaTicker__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// EnumToString @ 146bee4b0

wchar_t * __cdecl MediaTextureSampleFormat::EnumToString(EMediaTextureSampleFormat param_1)

{
  switch(param_1) {
  default:
    return L"Undefined";
  case CharAYUV:
    return L"CharAYUV";
  case CharBGRA:
    return L"CharBGRA";
  case CharBGR10A2:
    return L"CharBGR10A2";
  case CharBMP:
    return L"CharBMP";
  case CharNV12:
    return L"CharNV12";
  case CharNV21:
    return L"CharNV21";
  case CharUYVY:
    return L"CharUYVY";
  case CharYUY2:
    return L"CharYUY2";
  case CharYVYU:
    return L"CharYVYU";
  case FloatRGB:
    return L"FloatRGB";
  case FloatRGBA:
    return L"FloatRGBA";
  case Y416:
    return L"Y416";
  case P010:
    return L"P010";
  case DXT1:
    return L"DXT1";
  case DXT5:
    return L"DXT5";
  case YCoCg_DXT5:
    return L"YCoCg_DXT5";
  case YCoCg_DXT5_Alpha_BC4:
    return L"YCoCg_DXT5_Alpha_BC4";
  }
}

// IMPLEMENT_MODULE_Media @ 146befdb0

void __cdecl IMPLEMENT_MODULE_Media(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'_GCsvCategory_MediaStreaming'' @ 1503df730

void __cdecl _dynamic_atexit_destructor_for___GCsvCategory_MediaStreaming__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = _GCsvCategory_MediaStreaming.Name.Data.AllocatorInstance.Data;
  if (_GCsvCategory_MediaStreaming.Name.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (_GCsvCategory_MediaStreaming.Name.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
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

