// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerWasapi
// Functions: 42

// `dynamic_initializer_for_'CVarUseDefaultQualitySRC'' @ 14116a250

void __cdecl _dynamic_initializer_for__CVarUseDefaultQualitySRC__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseDefaultQualitySRC,L"au.Wasapi.UseDefaultQualitySRC",&UseDefaultQualitySRC_CVar,
             L"Enable Wasapi default SRC quality.\n0: Not Enabled, 1: Enabled",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseDefaultQualitySRC__);
  return;
}

// `dynamic_initializer_for_'LogAudioMixerWasapi'' @ 14116a2a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioMixerWasapi__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAudioMixerWasapi,L"LogAudioMixerWasapi",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioMixerWasapi__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAudioMixerWasapi'' @ 14116a2e0

void __cdecl _dynamic_initializer_for__ModuleRegistrantAudioMixerWasapi__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AudioMixerWasapi";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AudioMixerWasapi",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAudioMixerModuleWasapi>::InitializeModule)
  ;
  return;
}

// `dynamic_initializer_for_'WasapiWinNotificationClient'' @ 14116a330

void __cdecl Audio::_dynamic_initializer_for__WasapiWinNotificationClient__(void)

{
  atexit(_dynamic_atexit_destructor_for__WasapiWinNotificationClient__);
  return;
}

// `scalar_deleting_destructor' @ 148d42660

void * __thiscall
FAudioMixerModuleWasapi::_scalar_deleting_destructor_(FAudioMixerModuleWasapi *this,uint param_1)

{
  *this = (FAudioMixerModuleWasapi)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// ConstructItems<Audio::FWasapiRenderStreamParams,Audio::FWasapiRenderStreamParams,int> @ 148d42760

void __cdecl
ConstructItems<Audio::FWasapiRenderStreamParams,Audio::FWasapiRenderStreamParams,int>
          (void *param_1,FWasapiRenderStreamParams *param_2,int param_3)

{
  uint *puVar1;
  longlong *plVar2;
  uint *puVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    puVar3 = (uint *)((longlong)param_1 + 0x50);
    puVar4 = &param_2->NumFrames;
    do {
      plVar2 = *(longlong **)((longlong)param_2 + (-0x50 - (longlong)param_1) + (longlong)puVar3);
      *(longlong **)(puVar3 + -0x14) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      Audio::FAudioPlatformDeviceInfo::FAudioPlatformDeviceInfo
                ((FAudioPlatformDeviceInfo *)(puVar3 + -0x12),
                 (FAudioPlatformDeviceInfo *)(puVar4 + -0x12));
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      puVar1 = puVar4 + 2;
      puVar4 = puVar4 + 0x18;
      puVar3[2] = *puVar1;
      puVar3 = puVar3 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<Audio::FWasapiRenderStreamParams,int> @ 148d427f0

void __cdecl
DestructItems<Audio::FWasapiRenderStreamParams,int>(FWasapiRenderStreamParams *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &(param_1->HardwareDeviceInfo).DeviceId;
    do {
      pFVar1 = (((TArray<EAudioMixerChannel::Type,TSizedDefaultAllocator<32>_> *)(pFVar2 + 2))->
               AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((FAudioPlatformDeviceInfo *)(pFVar2 + -1))->Name).Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      if (*(longlong **)((longlong)(pFVar2 + -2) + 8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)(pFVar2 + -2) + 8) + 0x10))();
      }
      pFVar2 = pFVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TUniquePtr<Audio::FAudioMixerWasapiRenderStream,TDefaultDelete<Audio::FAudioMixerWasapiRenderStream>_>,int> @ 148d42860

void __cdecl
DestructItems<TUniquePtr<Audio::FAudioMixerWasapiRenderStream,TDefaultDelete<Audio::FAudioMixerWasapiRenderStream>_>,int>
          (TUniquePtr<Audio::FAudioMixerWasapiRenderStream,TDefaultDelete<Audio::FAudioMixerWasapiRenderStream>_>
           *param_1,int param_2)

{
  FAudioMixerWasapiRenderStream *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = param_1->Ptr;
    if (pFVar1 != (FAudioMixerWasapiRenderStream *)0x0) {
      (**(code **)pFVar1->_padding_)(pFVar1,1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// IID_PPV_ARGS_Helper<IAudioClient2> @ 148d428a0

void ** __cdecl IID_PPV_ARGS_Helper<IAudioClient2>(IAudioClient2 **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<IAudioRenderClient> @ 148d428b0

void ** __cdecl IID_PPV_ARGS_Helper<IAudioRenderClient>(IAudioRenderClient **param_1)

{
  return param_1;
}

// _Atomic_address_as<long,std::_Atomic_padded<enum_Audio::EAudioOutputStreamState::Type>_> @ 148d428c0

long * __cdecl
std::_Atomic_address_as<long,std::_Atomic_padded<enum_Audio::EAudioOutputStreamState::Type>_>
          (_Atomic_padded<Audio::EAudioOutputStreamState::Type> *param_1)

{
  return (long *)param_1;
}

// _Atomic_reinterpret_as<long,enum_Audio::EAudioOutputStreamState::Type> @ 148d428d0

long __cdecl
std::_Atomic_reinterpret_as<long,enum_Audio::EAudioOutputStreamState::Type>(Type *param_1)

{
  return *param_1;
}

// ~TFunction_OwnedObject<`Audio::FAudioMixerWasapi::EnqueueAsyncDeviceSwap'::__l2::<lambda_1>,0,0> @ 148d42e50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioMixerWasapi::EnqueueAsyncDeviceSwap'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FAudioMixerWasapi::EnqueueAsyncDeviceSwap_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FAudioMixerWasapi::EnqueueAsyncDeviceSwap'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FAudioMixerWasapi::InitDeviceSwapContextInternal'::__l2::<lambda_1>,0,0> @ 148d42e70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioMixerWasapi::InitDeviceSwapContextInternal'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Audio::FAudioMixerWasapi::InitDeviceSwapContextInternal_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FAudioMixerWasapi::InitDeviceSwapContextInternal'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FWasapiAggregateDeviceMgr::OpenAudioStream'::__l2::<lambda_1>,0,0> @ 148d42e90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FWasapiAggregateDeviceMgr::OpenAudioStream'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FWasapiAggregateDeviceMgr::OpenAudioStream_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FWasapiAggregateDeviceMgr::OpenAudioStream'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FWasapiDefaultDeviceMgr::OpenAudioStream'::__l2::<lambda_1>,0,0> @ 148d42eb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FWasapiDefaultDeviceMgr::OpenAudioStream'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FWasapiDefaultDeviceMgr::OpenAudioStream_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FWasapiDefaultDeviceMgr::OpenAudioStream'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`Audio::FAudioMixerWasapi::OpenAudioStream'::__l12::<lambda_1>,0,0> @ 148d42ed0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioMixerWasapi::OpenAudioStream'::__l12::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FAudioMixerWasapi::OpenAudioStream_::__l12::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FAudioMixerWasapi::OpenAudioStream'::`12'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 148d43748

/* [thunk]:public: virtual void * __ptr64 __cdecl Audio::FAudioMixerWasapi::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
Audio::FAudioMixerWasapi::_vector_deleting_destructor__adjustor_8__
          (FAudioMixerWasapi *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FAudioMixerWasapi *)&this[-1].DeviceSwapContext,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 148d43758

/* [thunk]:public: virtual void * __ptr64 __cdecl Audio::FAudioMixerWasapi::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
Audio::FAudioMixerWasapi::_vector_deleting_destructor__adjustor_16__
          (FAudioMixerWasapi *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FAudioMixerWasapi *)&this[-1].bIsInitialized,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 148d43768

/* [thunk]:public: virtual void * __ptr64 __cdecl Audio::FWasapiAggregateDeviceMgr::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
Audio::FWasapiAggregateDeviceMgr::_vector_deleting_destructor__adjustor_8__
          (FWasapiAggregateDeviceMgr *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FWasapiAggregateDeviceMgr *)&this[-1].RenderDeviceThread,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 148d43780

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_const_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,TFunction<void___cdecl(void)>_const_>
           *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Functor != 0) {
    plVar1 = *(longlong **)&(this->Functor).field_0x28;
    plVar2 = (longlong *)&(this->Functor).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d437e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioMixerWasapi::EnqueueAsyncDeviceSwap'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FAudioMixerWasapi::EnqueueAsyncDeviceSwap'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d43820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioMixerWasapi::InitDeviceSwapContextInternal'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FAudioMixerWasapi::InitDeviceSwapContextInternal'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d43860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FWasapiAggregateDeviceMgr::OpenAudioStream'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FWasapiAggregateDeviceMgr::OpenAudioStream'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d438a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FWasapiDefaultDeviceMgr::OpenAudioStream'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FWasapiDefaultDeviceMgr::OpenAudioStream'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d438e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioMixerWasapi::OpenAudioStream'::__l12::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FAudioMixerWasapi::OpenAudioStream'::`12'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d43920

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::FWindowsMMNotificationClient,`Audio::FAudioMixerWasapi::RegisterDeviceChangedListener'::__l5::<lambda_1>,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d43960

void * __thiscall
Audio::FAudioMixerWasapi::_scalar_deleting_destructor_(FAudioMixerWasapi *this,uint param_1)

{
  FWasapiDeviceSwapContext *pFVar1;
  IAudioMixerWasapiDeviceManager *pIVar2;
  IAudioPlatformDeviceInfoCache *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  this->_padding_ = (longlong)&_vftable__for__Audio__IAudioMixerDeviceChangedListener__;
  pFVar1 = (this->DeviceSwapContext).Ptr;
  if (pFVar1 != (FWasapiDeviceSwapContext *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  pIVar2 = (this->DeviceManager).Ptr;
  if (pIVar2 != (IAudioMixerWasapiDeviceManager *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  pIVar3 = (this->DeviceInfoCache).Ptr;
  if (pIVar3 != (IAudioPlatformDeviceInfoCache *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  IAudioMixerPlatformInterface::~IAudioMixerPlatformInterface((IAudioMixerPlatformInterface *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x228);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d43a20

void * __thiscall
Audio::FAudioMixerWasapiRenderStream::_scalar_deleting_destructor_
          (FAudioMixerWasapiRenderStream *this,uint param_1)

{
  ~FAudioMixerWasapiRenderStream(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d43a60

void * __thiscall
Audio::FAudioMixerWasapiRunnable::_scalar_deleting_destructor_
          (FAudioMixerWasapiRunnable *this,uint param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  
  if (*(longlong *)&this->DeviceRenderCallback != 0) {
    plVar1 = *(longlong **)&(this->DeviceRenderCallback).field_0x28;
    plVar3 = (longlong *)&(this->DeviceRenderCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pFVar2 = (this->EventHandles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d43ad0

void * __thiscall
Audio::FWasapiAggregateDeviceMgr::_scalar_deleting_destructor_
          (FWasapiAggregateDeviceMgr *this,uint param_1)

{
  FAudioMixerWasapiDeviceThread *pFVar1;
  FAudioMixerWasapiRunnable *pFVar2;
  FRunnableThread *pFVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar1 = (this->RenderDeviceThread).Ptr;
  if (pFVar1 != (FAudioMixerWasapiDeviceThread *)0x0) {
    pFVar2 = (pFVar1->DeviceRenderRunnable).Ptr;
    if (pFVar2 != (FAudioMixerWasapiRunnable *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,1);
    }
    pFVar3 = (pFVar1->DeviceRenderThread).Ptr;
    if (pFVar3 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,1);
    }
    ::operator_delete(pFVar1,0x10);
  }
  DestructItems<TUniquePtr<Audio::FAudioMixerWasapiRenderStream,TDefaultDelete<Audio::FAudioMixerWasapiRenderStream>_>,int>
            ((TUniquePtr<Audio::FAudioMixerWasapiRenderStream,TDefaultDelete<Audio::FAudioMixerWasapiRenderStream>_>
              *)(this->RenderStreamDevices).AllocatorInstance.Data,
             (this->RenderStreamDevices).ArrayNum);
  pFVar4 = (this->RenderStreamDevices).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d43b70

void * __thiscall
Audio::FWasapiAggregateRenderStream::_scalar_deleting_destructor_
          (FWasapiAggregateRenderStream *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<Audio::TCircularAudioBuffer<float,16>,int>
            ((TCircularAudioBuffer<float,16> *)(this->DirectOutBuffers).AllocatorInstance.Data,
             (this->DirectOutBuffers).ArrayNum);
  pFVar1 = (this->DirectOutBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<float,TAlignedHeapAllocator<16>_>,int>
            ((TArray<float,TAlignedHeapAllocator<16>_> *)
             (this->InterleaveBuffers).AllocatorInstance.Data,(this->InterleaveBuffers).ArrayNum);
  pFVar1 = (this->InterleaveBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAudioMixerWasapiRenderStream::~FAudioMixerWasapiRenderStream
            ((FAudioMixerWasapiRenderStream *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d43c00

void * __thiscall
Audio::FWasapiDefaultDeviceMgr::_scalar_deleting_destructor_
          (FWasapiDefaultDeviceMgr *this,uint param_1)

{
  FAudioMixerWasapiDeviceThread *pFVar1;
  FAudioMixerWasapiRunnable *pFVar2;
  FRunnableThread *pFVar3;
  FWasapiDefaultRenderStream *pFVar4;
  
  pFVar1 = (this->RenderDeviceThread).Ptr;
  if (pFVar1 != (FAudioMixerWasapiDeviceThread *)0x0) {
    pFVar2 = (pFVar1->DeviceRenderRunnable).Ptr;
    if (pFVar2 != (FAudioMixerWasapiRunnable *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,1);
    }
    pFVar3 = (pFVar1->DeviceRenderThread).Ptr;
    if (pFVar3 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,1);
    }
    ::operator_delete(pFVar1,0x10);
  }
  pFVar4 = (this->MainRenderStreamDevice).Ptr;
  if (pFVar4 != (FWasapiDefaultRenderStream *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d43c90

void * __thiscall
Audio::FWasapiDefaultRenderStream::_scalar_deleting_destructor_
          (FWasapiDefaultRenderStream *this,uint param_1)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReadNextBufferDelegate);
  pvVar1 = *(void **)&(this->ReadNextBufferDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ReadNextBufferDelegate);
  FAudioMixerWasapiRenderStream::~FAudioMixerWasapiRenderStream
            ((FAudioMixerWasapiRenderStream *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d43d10

void * __thiscall
Audio::FWasapiDeviceSwapContext::_scalar_deleting_destructor_
          (FWasapiDeviceSwapContext *this,uint param_1)

{
  IAudioMixerWasapiDeviceManager *pIVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  pIVar1 = (this->OldDeviceManager).Ptr;
  if (pIVar1 != (IAudioMixerWasapiDeviceManager *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  if (*(longlong *)&this->ReadNextBufferCallback != 0) {
    plVar2 = *(longlong **)&(this->ReadNextBufferCallback).field_0x28;
    plVar4 = (longlong *)&(this->ReadNextBufferCallback).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  DestructItems<Audio::FWasapiRenderStreamParams,int>
            ((FWasapiRenderStreamParams *)(this->StreamParams).AllocatorInstance.Data,
             (this->StreamParams).ArrayNum);
  pFVar3 = (this->StreamParams).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FDeviceSwapContext::~FDeviceSwapContext((FDeviceSwapContext *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d43db0

void * __thiscall
Audio::FWasapiDeviceSwapResult::_scalar_deleting_destructor_
          (FWasapiDeviceSwapResult *this,uint param_1)

{
  IAudioMixerWasapiDeviceManager *pIVar1;
  
  pIVar1 = (this->NewDeviceManager).Ptr;
  if (pIVar1 != (IAudioMixerWasapiDeviceManager *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d43e40

void * __thiscall
Audio::IAudioMixerWasapiDeviceManager::_scalar_deleting_destructor_
          (IAudioMixerWasapiDeviceManager *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148d43e70

void * __thiscall
Audio::IDeviceRenderCallback::_scalar_deleting_destructor_(IDeviceRenderCallback *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_AudioMixerWasapi @ 148d4be50

void __cdecl IMPLEMENT_MODULE_AudioMixerWasapi(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseDefaultQualitySRC'' @ 15040c590

void __cdecl _dynamic_atexit_destructor_for__CVarUseDefaultQualitySRC__(void)

{
  CVarUseDefaultQualitySRC._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseDefaultQualitySRC);
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioMixerWasapi'' @ 15040c5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioMixerWasapi__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioMixerWasapi);
  return;
}

// `dynamic_atexit_destructor_for_'WasapiWinNotificationClient'' @ 15040c5d0

void __cdecl Audio::_dynamic_atexit_destructor_for__WasapiWinNotificationClient__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (WasapiWinNotificationClient.SharedReferenceCount.ReferenceController);
  return;
}

