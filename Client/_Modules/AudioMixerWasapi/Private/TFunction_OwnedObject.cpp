// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixerWasapi
// Functions: 15

// CloneToEmptyStorage @ 148d43fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioMixerWasapi::EnqueueAsyncDeviceSwap'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FAudioMixerWasapi::EnqueueAsyncDeviceSwap'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148d44000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioMixerWasapi::InitDeviceSwapContextInternal'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FAudioMixerWasapi::InitDeviceSwapContextInternal'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148d44020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FWasapiAggregateDeviceMgr::OpenAudioStream'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FWasapiAggregateDeviceMgr::OpenAudioStream'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148d44040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FWasapiDefaultDeviceMgr::OpenAudioStream'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FWasapiDefaultDeviceMgr::OpenAudioStream'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 148d44060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioMixerWasapi::OpenAudioStream'::__l12::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FAudioMixerWasapi::OpenAudioStream'::`12'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 148d44830

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioMixerWasapi::EnqueueAsyncDeviceSwap'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148d44835. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148d44840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioMixerWasapi::InitDeviceSwapContextInternal'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148d44845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148d44850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FWasapiAggregateDeviceMgr::OpenAudioStream'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148d44855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148d44860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FWasapiDefaultDeviceMgr::OpenAudioStream'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148d44865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 148d44870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioMixerWasapi::OpenAudioStream'::__l12::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000148d44875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 148d450d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioMixerWasapi::EnqueueAsyncDeviceSwap'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148d450e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioMixerWasapi::InitDeviceSwapContextInternal'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148d450f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FWasapiAggregateDeviceMgr::OpenAudioStream'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148d45100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FWasapiDefaultDeviceMgr::OpenAudioStream'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 148d45110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioMixerWasapi::OpenAudioStream'::__l12::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

