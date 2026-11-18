// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCaptureCore
// Functions: 6

// CloneToEmptyStorage @ 14d0bc540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::IAudioCaptureStream::OpenCaptureStream'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1__OpenCaptureStream_IAudioCaptureStream_Audio__UEAA_NAEBUFAudioCaptureDeviceParams_4_V__TFunction___A6AXPEBMHHHN_N_Z__I_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[7] = 0;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)this + 0x20);
    if (*(undefined8 **)((longlong)this + 0x38) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)this + 0x38);
    }
    (**(code **)*puVar3)();
  }
  return puVar2 + 2;
}

// CloneToEmptyStorage @ 14d0bc5c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioCaptureSynth::OpenDefaultStream'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`Audio::FAudioCaptureSynth::OpenDefaultStream'::`5'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14d0bc610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::IAudioCaptureStream::OpenCaptureStream'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14d0bc640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioCaptureSynth::OpenDefaultStream'::__l5::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d0bc645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14d0bc650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::IAudioCaptureStream::OpenCaptureStream'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14d0bc660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FAudioCaptureSynth::OpenDefaultStream'::__l5::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

