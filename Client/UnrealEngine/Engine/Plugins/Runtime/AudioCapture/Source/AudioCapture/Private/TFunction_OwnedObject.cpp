// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCapture
// Functions: 6

// CloneToEmptyStorage @ 14d0ced10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioCaptureBlueprintLibrary::GetAvailableAudioInputDevices'::__l5::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14d0ced50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioCapture::OpenDefaultAudioStream'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UAudioCapture::OpenDefaultAudioStream'::`5'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14d0cf030

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioCaptureBlueprintLibrary::GetAvailableAudioInputDevices'::__l5::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14d0cf060

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioCapture::OpenDefaultAudioStream'::__l5::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d0cf065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14d0cf220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioCaptureBlueprintLibrary::GetAvailableAudioInputDevices'::__l5::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14d0cf230

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UAudioCapture::OpenDefaultAudioStream'::__l5::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

