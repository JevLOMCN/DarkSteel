// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureCore
// Functions: 12

// `dynamic_initializer_for_'LogAudioCaptureCore'' @ 1413c7150

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioCaptureCore__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAudioCaptureCore,L"LogAudioCaptureCore",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioCaptureCore__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAudioCaptureCore'' @ 1413c7190

void __cdecl _dynamic_initializer_for__ModuleRegistrantAudioCaptureCore__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AudioCaptureCore";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AudioCaptureCore",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAudioCaptureCoreModule>::InitializeModule)
  ;
  return;
}

// `scalar_deleting_destructor' @ 14d0bbb50

void * __thiscall
FAudioCaptureCoreModule::_scalar_deleting_destructor_(FAudioCaptureCoreModule *this,uint param_1)

{
  *this = (FAudioCaptureCoreModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// ~TFunction_OwnedObject<`Audio::IAudioCaptureStream::OpenCaptureStream'::__l2::<lambda_1>,0,1> @ 14d0bc010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::IAudioCaptureStream::OpenCaptureStream'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_Audio::IAudioCaptureStream::OpenCaptureStream_::__l2::<lambda_1>,0,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__OpenCaptureStream_IAudioCaptureStream_Audio__UEAA_NAEBUFAudioCaptureDeviceParams_4_V__TFunction___A6AXPEBMHHHN_N_Z__I_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x00014d0bc033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Audio::FAudioCaptureSynth::OpenDefaultStream'::__l5::<lambda_1>,0,0> @ 14d0bc040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioCaptureSynth::OpenDefaultStream'::__l5::<lambda_1>,0,0>::
~TFunction_OwnedObject<_Audio::FAudioCaptureSynth::OpenDefaultStream_::__l5::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FAudioCaptureSynth::OpenDefaultStream'::`5'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// `scalar_deleting_destructor' @ 14d0bc2a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::IAudioCaptureStream::OpenCaptureStream'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__OpenCaptureStream_IAudioCaptureStream_Audio__UEAA_NAEBUFAudioCaptureDeviceParams_4_V__TFunction___A6AXPEBMHHHN_N_Z__I_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0bc300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioCaptureSynth::OpenDefaultStream'::__l5::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FAudioCaptureSynth::OpenDefaultStream'::`5'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0bc340

void * __thiscall
Audio::FAudioCaptureSynth::_scalar_deleting_destructor_(FAudioCaptureSynth *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  IAudioCaptureStream *pIVar2;
  
  this->_padding_ = (longlong)&___7FAudioCaptureSynth_Audio__6B_;
  pFVar1 = (this->AudioCaptureData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CaptureCriticalSection);
  pIVar2 = (this->AudioCapture).Impl.Ptr;
  if (pIVar2 != (IAudioCaptureStream *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  pFVar1 = (this->CaptureInfo).DeviceId.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CaptureInfo).DeviceName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0bc3d0

void * __thiscall
Audio::FNullAudioCaptureDevice::_scalar_deleting_destructor_
          (FNullAudioCaptureDevice *this,uint param_1)

{
  *this = (FNullAudioCaptureDevice)&___7IAudioCaptureStream_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d0bc410

void * __thiscall
Audio::IAudioCaptureStream::_scalar_deleting_destructor_(IAudioCaptureStream *this,uint param_1)

{
  *this = (IAudioCaptureStream)&___7IAudioCaptureStream_Audio__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_AudioCaptureCore @ 14d0bd130

void __cdecl IMPLEMENT_MODULE_AudioCaptureCore(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioCaptureCore'' @ 150455960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioCaptureCore__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioCaptureCore);
  return;
}

