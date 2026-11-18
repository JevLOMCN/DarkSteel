// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureWasapi
// Functions: 14

// `dynamic_initializer_for_'ModuleRegistrantAudioCaptureWasapi'' @ 1413c71e0

void __cdecl _dynamic_initializer_for__ModuleRegistrantAudioCaptureWasapi__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AudioCaptureWasapi";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AudioCaptureWasapi",0x12);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<Audio::FAudioCaptureWasapiModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14d0bd140

void * __thiscall
Audio::IAudioCaptureFactory::_scalar_deleting_destructor_(IAudioCaptureFactory *this,uint param_1)

{
  *this = (IAudioCaptureFactory)&___7IAudioCaptureFactory_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0bd1f0

void * __thiscall
Audio::FAudioCaptureWasapiFactory::_scalar_deleting_destructor_
          (FAudioCaptureWasapiFactory *this,uint param_1)

{
  *this = (FAudioCaptureWasapiFactory)&___7IAudioCaptureFactory_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0bd3c0

void * __thiscall
Audio::FAudioCaptureWasapiModule::_scalar_deleting_destructor_
          (FAudioCaptureWasapiModule *this,uint param_1)

{
  this->AudioCaptureFactory = (FAudioCaptureWasapiFactory)&___7IAudioCaptureFactory_Audio__6B_;
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// DestructItems<Audio::FWasapiDeviceEnumeration::FDeviceInfo,int> @ 14d0bd400

void __cdecl
DestructItems<Audio::FWasapiDeviceEnumeration::FDeviceInfo,int>(FDeviceInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->FriendlyName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->DeviceId).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// IID_PPV_ARGS_Helper<IAudioCaptureClient> @ 14d0bd450

void ** __cdecl IID_PPV_ARGS_Helper<IAudioCaptureClient>(IAudioCaptureClient **param_1)

{
  return param_1;
}

// IID_PPV_ARGS_Helper<IAudioClient3> @ 14d0bd460

void ** __cdecl IID_PPV_ARGS_Helper<IAudioClient3>(IAudioClient3 **param_1)

{
  return param_1;
}

// ~TFunction_OwnedObject<`Audio::FAudioCaptureWasapiStream::OpenAudioCaptureStream'::__l19::<lambda_1>,0,0> @ 14d0be010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioCaptureWasapiStream::OpenAudioCaptureStream'::__l19::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_Audio::FAudioCaptureWasapiStream::OpenAudioCaptureStream_::__l19::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FAudioCaptureWasapiStream::OpenAudioCaptureStream'::`19'::<lambda_1>,0,0>
        ::_vftable_;
  return;
}

// `scalar_deleting_destructor' @ 14d0be370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioCaptureWasapiStream::OpenAudioCaptureStream'::__l19::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FAudioCaptureWasapiStream::OpenAudioCaptureStream'::`19'::<lambda_1>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0be3b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Audio::FWasapiInputStream,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<Audio::FWasapiInputStream,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0be3f0

void * __thiscall
Audio::FAudioCaptureWasapiStream::_scalar_deleting_destructor_
          (FAudioCaptureWasapiStream *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FWasapiStreamManager::~FWasapiStreamManager(&this->CaptureDevice);
  if (*(longlong *)&this->OnCapture != 0) {
    plVar1 = *(longlong **)&(this->OnCapture).field_0x28;
    plVar2 = (longlong *)&(this->OnCapture).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  *(undefined ***)this = &___7IAudioCaptureStream_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0be460

void * __thiscall
Audio::FWasapiCaptureRunnable::_scalar_deleting_destructor_
          (FWasapiCaptureRunnable *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InputStream).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0be4b0

void * __thiscall
Audio::FWasapiStreamManager::_scalar_deleting_destructor_(FWasapiStreamManager *this,uint param_1)

{
  ~FWasapiStreamManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// IMPLEMENT_MODULE_AudioCaptureWasapi @ 14d0c2170

void __cdecl IMPLEMENT_MODULE_AudioCaptureWasapi(void)

{
  return;
}

