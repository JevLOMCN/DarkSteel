// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 526

// ~TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectMultibandCompressor_&),0,0> @ 14f0bc540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectMultibandCompressor_&),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectMultibandCompressor_&),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectMultibandCompressor_&),0,0> *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFSubmixEffectMultibandCompressor___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 14f0cc010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectMultibandCompressor_&),0,0>::CloneToEmptyStorage
          (TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectMultibandCompressor_&),0,0> *this,
          FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6AXAEAVFSubmixEffectMultibandCompressor___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_void_FSubmixEffectMultibandCompressor_ptr **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectDelay>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____EffectCommand_VFSubmixEffectDelay___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectDelay___Z___Z__0A__00_Function_Private_Core_UE__6B_
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

// CloneToEmptyStorage @ 14f0cc0b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectFilter>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____EffectCommand_VFSubmixEffectFilter___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectFilter___Z___Z__0A__00_Function_Private_Core_UE__6B_
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

// CloneToEmptyStorage @ 14f0cc130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____EffectCommand_VFSubmixEffectMultibandCompressor___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectMultibandCompressor___Z___Z__0A__00_Function_Private_Core_UE__6B_
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

// CloneToEmptyStorage @ 14f0cc1b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = FMemory::Malloc(0x40,0x10);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____EffectCommand_VFSubmixEffectTapDelay___USoundEffectPreset__IEAAXV__TFunction___A6AXAEAVFSubmixEffectTapDelay___Z___Z__0A__00_Function_Private_Core_UE__6B_
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

// CloneToEmptyStorage @ 14f0cc230

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectDelay>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14f0cc270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectFilter>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14f0cc2b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14f0cc2f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14f0cc330

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSourceEffectEnvFollowerNotifier::AddEnvFollowerInstance'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__AddEnvFollowerInstance_FSourceEffectEnvFollowerNotifier__QEAAXII_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectTapDelayPreset::AddTap'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USubmixEffectTapDelayPreset::AddTap'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::Init'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::Init'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::InitSynth'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::InitSynth'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc3b0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UGranularSynth::NoteOff'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UGranularSynth::NoteOff'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc3d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::NoteOff'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::NoteOff'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc3f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOff'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOff'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc410

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UGranularSynth::NoteOn'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UGranularSynth::NoteOn'::`2'::<lambda_1>,0,1>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14f0cc470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::NoteOn'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UModularSynthComponent::NoteOn'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14f0cc4d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOn'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOn'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc4f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::RefreshWaveTable'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`USynthComponentMonoWaveTable::RefreshWaveTable'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  `USynthComponentMonoWaveTable::RefreshWaveTable'::__l2::<lambda_1>::<lambda_1>
            (puVar1 + 1,(<lambda_1> *)((longlong)this + 8));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14f0cc550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSourceEffectEnvFollowerNotifier::RemoveEnvFollowerInstance'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__RemoveEnvFollowerInstance_FSourceEffectEnvFollowerNotifier__QEAAXII_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::SeekToTime'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`USynthSamplePlayer::SeekToTime'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14f0cc5d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc5f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDepth'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDepth'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeInvert'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeInvert'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc6b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc6d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetAttackTime'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UGranularSynth::SetAttackTime'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc6f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetAttackTime'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetAttackTime'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulator'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulator'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulators'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulators'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBits'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 14f0cc790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetChorusDepth'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetChorusDepth'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc7b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetChorusEnabled'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetChorusEnabled'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc7d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetChorusFeedback'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetChorusFeedback'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc7f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetChorusFrequency'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetChorusFrequency'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetDecayTime'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UGranularSynth::SetDecayTime'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetDecayTime'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetDecayTime'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectDelayPreset::SetDelay'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USubmixEffectDelayPreset::SetDelay'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepth'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 14f0cc8b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulator'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulator'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc8d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulators'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulators'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc8f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToneGenerator::SetDistance'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FToneGenerator::SetDistance'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDry'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 14f0cc950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulator'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulator'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulators'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulators'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetEnableLegato'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetEnableLegato'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc9b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetEnablePolyphony'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetEnablePolyphony'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc9d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetEnableRetrigger'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetEnableRetrigger'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cc9f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetEnableUnison'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetEnableUnison'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cca10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedback'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 14f0cca50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulator'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulator'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cca70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulators'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulators'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cca90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterAlgorithm'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetFilterAlgorithm'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterAlgorithm'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterAlgorithm'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequency'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequency'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccaf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccb10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccb30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccb50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccb70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeDepth'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeDepth'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccb90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeInvert'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeInvert'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccbb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccbd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccbf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccc10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequency'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequency'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccc30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequencyMod'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequencyMod'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccc50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterQ'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetFilterQ'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccc70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQ'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQ'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccc90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterQMod'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetFilterQMod'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cccb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQMod'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQMod'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cccd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterType'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetFilterType'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cccf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterType'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterType'::`2'::<lambda_1>,0,0>::
        _vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccd10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToneGenerator::SetFrequency'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FToneGenerator::SetFrequency'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccd30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequency'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 14f0ccd70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequency'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequency'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccd90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulator'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulator'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccdb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulators'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulators'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccdd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequencyPitchBend'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequencyPitchBend'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccdf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetGainDb'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetGainDb'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cce10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainDuration'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UGranularSynth::SetGrainDuration'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14f0cce70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainEnvelopeType'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UGranularSynth::SetGrainEnvelopeType'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cce90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainPan'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UGranularSynth::SetGrainPan'::`2'::<lambda_1>,0,1>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14f0ccef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainPitch'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UGranularSynth::SetGrainPitch'::`2'::<lambda_1>,0,1>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14f0ccf50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainProbability'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UGranularSynth::SetGrainProbability'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccf70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainVolume'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UGranularSynth::SetGrainVolume'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14f0ccfd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainsPerSecond'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UGranularSynth::SetGrainsPerSecond'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0ccff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectDelayPreset::SetInterpolationTime'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USubmixEffectDelayPreset::SetInterpolationTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetInterpolationTime'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetInterpolationTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequency'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequency'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequencyMod'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequencyMod'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOGain'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetLFOGain'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOGainMod'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetLFOGainMod'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd0b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOMode'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetLFOMode'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd0d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOPatch'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetLFOPatch'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd0f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOType'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetLFOType'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetLowPassFilterFrequency'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetLowPassFilterFrequency'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetLowPassFilterResonance'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetLowPassFilterResonance'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvAttackTime'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvAttackTime'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasInvert'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasInvert'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasPatch'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasPatch'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd1b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDecayTime'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDecayTime'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd1d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDepth'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDepth'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd1f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvInvert'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvInvert'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvPatch'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvPatch'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd230

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvReleaseTime'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvReleaseTime'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvSustainGain'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetModEnvSustainGain'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscCents'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscCents'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscFrequencyMod'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscFrequencyMod'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd2b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscGain'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscGain'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd2d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscGainMod'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscGainMod'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd2f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscOctave'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscOctave'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscPulsewidth'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscPulsewidth'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd330

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscSemitones'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscSemitones'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscSync'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscSync'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscType'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetOscType'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetPan'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetPan'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd3b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::SetPitch'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthSamplePlayer::SetPitch'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd3d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetPitchBend'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetPitchBend'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd3f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetPlaybackSpeed'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UGranularSynth::SetPlaybackSpeed'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetPlayheadTime'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`UGranularSynth::SetPlayheadTime'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14f0cd470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetPortamento'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetPortamento'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoDepth'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoDepth'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd4b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoFrequency'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoFrequency'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd4d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoType'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoType'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd4f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDepth'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDepth'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeInvert'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeInvert'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd5b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd5d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd5f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetReleaseTime'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetReleaseTime'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetReleaseTimeMsec'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UGranularSynth::SetReleaseTimeMsec'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRate'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 14f0cd670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulator'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulator'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulators'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulators'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd6b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetScrubMode'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UGranularSynth::SetScrubMode'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd6d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::SetScrubMode'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthSamplePlayer::SetScrubMode'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd6f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::SetScrubTimeWidth'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthSamplePlayer::SetScrubTimeWidth'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSettings'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 14f0cd750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetSettings'::__l2::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 14f0cd790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetSettings'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetSettings'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd7b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetSpread'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetSpread'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd7d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpread'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 14f0cd810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulator'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulator'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulators'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulators'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayFeedback'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayFeedback'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayIsEnabled'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayIsEnabled'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayMode'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayMode'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd8b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayRatio'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayRatio'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd8d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayTime'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayTime'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd8f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayWetlevel'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayWetlevel'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetSustainGain'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UGranularSynth::SetSustainGain'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetSustainGain'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UModularSynthComponent::SetSustainGain'::`2'::<lambda_1>,0,0>::
        _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSustainPedalState'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSustainPedalState'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetSynthPreset'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0xf0,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UModularSynthComponent::SetSynthPreset'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  FModularSynthPreset::FModularSynthPreset
            ((FModularSynthPreset *)(puVar1 + 2),(FModularSynthPreset *)((longlong)this + 0x10));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14f0cd9d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToneGenerator::SetVolume'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FToneGenerator::SetVolume'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cd9f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetWaveTablePosition'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetWaveTablePosition'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cda10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetWet'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

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

// CloneToEmptyStorage @ 14f0cda50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulator'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulator'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cda70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulators'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulators'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cda90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSourceEffectEnvFollowerNotifier::UpdateEnvFollowerInstance'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1__UpdateEnvFollowerInstance_FSourceEffectEnvFollowerNotifier__QEAAXIIM_Z__0A__00_Function_Private_Core_UE__6B_
  ;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14f0cdaf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USynthSamplePlayer::LoadSoundWaveInternal'::__l5::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<``USynthSamplePlayer::LoadSoundWaveInternal'::`5'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  ::Audio::TSampleBuffer<short>::TSampleBuffer<short>
            ((TSampleBuffer<short> *)(puVar1 + 2),(TSampleBuffer<short> *)((longlong)this + 0x10));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14f0cdb50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGranularSynth::SetSoundWave'::__l8::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<``UGranularSynth::SetSoundWave'::`8'::<lambda_1>::operator()'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  ::Audio::TSampleBuffer<short>::TSampleBuffer<short>
            ((TSampleBuffer<short> *)(puVar1 + 2),(TSampleBuffer<short> *)((longlong)this + 0x10));
  return puVar1 + 1;
}

// CloneToEmptyStorage @ 14f0cdbb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::LoadSoundWaveInternal'::__l5::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthSamplePlayer::LoadSoundWaveInternal'::`5'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cdbd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetKey'::__l5::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetKey'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14f0cdc30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectTapDelayPreset::RemoveTap'::__l7::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USubmixEffectTapDelayPreset::RemoveTap'::`7'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined4 *)(param_1->InlineAllocation + 8) = *(undefined4 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cdc50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetSoundWave'::__l8::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UGranularSynth::SetSoundWave'::`8'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14f0cdc70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetTap'::__l9::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetTap'::`9'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)((longlong)this + 0x20);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14f0cdcd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSynthPreset'::__l11::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSynthPreset'::`11'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14f0d4260

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectMultibandCompressor_&),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectMultibandCompressor_&),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4270

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectDelay>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d42a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectFilter>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d42d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d4300

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d4330

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectDelay>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d4360

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectFilter>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d4390

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d43c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d43f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSourceEffectEnvFollowerNotifier::AddEnvFollowerInstance'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d43f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4400

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectTapDelayPreset::AddTap'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4405. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4410

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::Init'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4415. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4420

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::InitSynth'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4430

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UGranularSynth::NoteOff'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4435. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4440

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::NoteOff'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4445. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4450

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOff'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4460

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UGranularSynth::NoteOn'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d4490

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::NoteOn'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d44c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOn'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d44c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d44d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::RefreshWaveTable'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d4500

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSourceEffectEnvFollowerNotifier::RemoveEnvFollowerInstance'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4510

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::SeekToTime'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d4540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4545. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4550

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4555. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4560

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4570

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4580

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDepth'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4590

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeInvert'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d45a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d45a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d45b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d45b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d45c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetAttackTime'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d45c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d45d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetAttackTime'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d45d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d45e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulator'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d45e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d45f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulators'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d45f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4600

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBits'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetChorusDepth'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4620

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetChorusEnabled'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4625. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetChorusFeedback'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4635. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetChorusFrequency'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4645. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetDecayTime'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4660

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetDecayTime'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4665. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4670

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectDelayPreset::SetDelay'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4675. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4680

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepth'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4685. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4690

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulator'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4695. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d46a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulators'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d46a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d46b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToneGenerator::SetDistance'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d46b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d46c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDry'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d46c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d46d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulator'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d46d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d46e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulators'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d46e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d46f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetEnableLegato'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d46f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4700

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetEnablePolyphony'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4705. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4710

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetEnableRetrigger'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4720

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetEnableUnison'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4730

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedback'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4735. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4740

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulator'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4745. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4750

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulators'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4755. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4760

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterAlgorithm'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4765. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4770

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterAlgorithm'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4775. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4780

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequency'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4790

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4795. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d47a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d47a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d47b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d47b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d47c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d47c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d47d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeDepth'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d47d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d47e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeInvert'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d47e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d47f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d47f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4800

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4810

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4820

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequency'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4825. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4830

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequencyMod'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4835. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4840

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterQ'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4850

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQ'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterQMod'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4870

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQMod'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterType'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterType'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d48a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToneGenerator::SetFrequency'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d48a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d48b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequency'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d48b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d48c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequency'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d48c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d48d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulator'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d48d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d48e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulators'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d48e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d48f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequencyPitchBend'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d48f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetGainDb'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4910

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainDuration'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d4940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainEnvelopeType'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4945. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4950

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainPan'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d4980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainPitch'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d49b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainProbability'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d49b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d49c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainVolume'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d49f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainsPerSecond'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d49f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4a00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectDelayPreset::SetInterpolationTime'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4a05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4a10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetInterpolationTime'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4a20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequency'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4a25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4a30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequencyMod'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4a35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4a40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOGain'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4a45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4a50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOGainMod'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4a55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4a60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOMode'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4a65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4a70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOPatch'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4a75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4a80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOType'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4a85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4a90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetLowPassFilterFrequency'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4a95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4aa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetLowPassFilterResonance'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4aa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4ab0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvAttackTime'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4ab5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4ac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasInvert'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4ac5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4ad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasPatch'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4ad5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4ae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDecayTime'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4ae5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4af0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDepth'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4af5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4b00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvInvert'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4b10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvPatch'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4b15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4b20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvReleaseTime'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4b25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4b30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvSustainGain'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4b35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4b40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscCents'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4b45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4b50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscFrequencyMod'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4b55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4b60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscGain'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4b65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4b70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscGainMod'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4b75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4b80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscOctave'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4b85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4b90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscPulsewidth'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4ba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscSemitones'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4ba5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4bb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscSync'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4bb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4bc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscType'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4bd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetPan'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4bd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4be0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::SetPitch'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4be5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4bf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetPitchBend'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4c00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetPlaybackSpeed'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4c05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4c10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetPlayheadTime'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d4c40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetPortamento'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4c45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4c50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoDepth'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4c55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4c60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoFrequency'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4c65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4c70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoType'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4c75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4c80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4c85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4c90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4c95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4ca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4ca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4cb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4cb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4cc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDepth'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4cc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4cd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeInvert'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4cd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4ce0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4ce5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4cf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4cf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4d00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetReleaseTime'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4d05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4d10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetReleaseTimeMsec'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4d15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4d20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRate'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4d25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4d30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulator'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4d35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4d40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulators'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4d45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4d50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetScrubMode'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4d55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4d60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::SetScrubMode'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4d65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4d70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::SetScrubTimeWidth'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4d75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4d80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSettings'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4d85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4d90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetSettings'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d4dc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetSettings'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4dc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4dd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetSpread'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4dd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4de0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpread'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4de5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4df0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulator'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4df5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4e00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulators'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4e05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4e10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayFeedback'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4e15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4e20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayIsEnabled'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4e25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4e30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayMode'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4e35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4e40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayRatio'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4e45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4e50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayTime'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4e55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4e60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayWetlevel'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4e65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4e70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetSustainGain'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4e75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4e80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetSustainGain'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4e85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4e90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSustainPedalState'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4e95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4ea0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetSynthPreset'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d4ed0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToneGenerator::SetVolume'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4ed5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4ee0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetWaveTablePosition'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4ee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4ef0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetWet'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4f00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulator'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4f05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4f10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulators'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4f15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4f20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSourceEffectEnvFollowerNotifier::UpdateEnvFollowerInstance'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d4f50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USynthSamplePlayer::LoadSoundWaveInternal'::__l5::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d4f80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGranularSynth::SetSoundWave'::__l8::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d4fb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::LoadSoundWaveInternal'::__l5::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4fb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d4fc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetKey'::__l5::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d4ff0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectTapDelayPreset::RemoveTap'::__l7::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d4ff5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d5000

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetSoundWave'::__l8::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d5005. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14f0d5010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetTap'::__l9::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14f0d5040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSynthPreset'::__l11::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014f0d5045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14f0d7c80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectMultibandCompressor_&),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(FSubmixEffectMultibandCompressor_&),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14f0d7c90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectDelay>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14f0d7ca0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectFilter>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14f0d7cb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14f0d7cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14f0d7cd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectDelay>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14f0d7ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectFilter>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14f0d7cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectMultibandCompressor>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14f0d7d00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USoundEffectPreset::EffectCommand<FSubmixEffectTapDelay>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14f0d7d10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSourceEffectEnvFollowerNotifier::AddEnvFollowerInstance'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectTapDelayPreset::AddTap'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7d30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::Init'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7d40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::InitSynth'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7d50

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UGranularSynth::NoteOff'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7d60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::NoteOff'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7d70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOff'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7d80

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`UGranularSynth::NoteOn'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7d90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::NoteOn'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7da0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::NoteOn'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7db0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::RefreshWaveTable'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7dc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSourceEffectEnvFollowerNotifier::RemoveEnvFollowerInstance'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7dd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::SeekToTime'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7de0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7df0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7e00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7e10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7e20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeDepth'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7e30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeInvert'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7e40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7e60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetAttackTime'::__l2::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7e70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetAttackTime'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7e80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulator'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7e90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBitModulators'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetBits'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7eb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetChorusDepth'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7ec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetChorusEnabled'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetChorusFeedback'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetChorusFrequency'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7ef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetDecayTime'::__l2::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7f00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetDecayTime'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectDelayPreset::SetDelay'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepth'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7f30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulator'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDepthModulators'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7f50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToneGenerator::SetDistance'::__l2::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDry'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7f70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulator'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7f80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetDryModulators'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetEnableLegato'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetEnablePolyphony'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7fb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetEnableRetrigger'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7fc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetEnableUnison'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedback'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulator'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d7ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFeedbackModulators'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterAlgorithm'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterAlgorithm'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequency'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeDepth'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeInvert'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d80a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d80b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d80c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequency'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d80d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterFrequencyMod'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d80e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterQ'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d80f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQ'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterQMod'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterQMod'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetFilterType'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectFilterPreset::SetFilterType'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToneGenerator::SetFrequency'::__l2::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequency'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequency'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulator'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetFrequencyModulators'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetFrequencyPitchBend'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d81a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetGainDb'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d81b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainDuration'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d81c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainEnvelopeType'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d81d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainPan'::__l2::<lambda_1>,0,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d81e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainPitch'::__l2::<lambda_1>,0,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d81f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainProbability'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainVolume'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetGrainsPerSecond'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectDelayPreset::SetInterpolationTime'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8230

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetInterpolationTime'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequency'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8250

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOFrequencyMod'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOGain'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOGainMod'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOMode'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOPatch'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d82a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetLFOType'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d82b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetLowPassFilterFrequency'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d82c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetLowPassFilterResonance'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d82d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvAttackTime'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d82e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasInvert'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d82f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvBiasPatch'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDecayTime'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8310

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvDepth'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvInvert'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8330

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvPatch'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvReleaseTime'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8350

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetModEnvSustainGain'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscCents'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscFrequencyMod'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscGain'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8390

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscGainMod'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d83a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscOctave'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d83b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscPulsewidth'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d83c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscSemitones'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d83d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscSync'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d83e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetOscType'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d83f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetPan'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::SetPitch'::__l2::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetPitchBend'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetPlaybackSpeed'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetPlayheadTime'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetPortamento'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoDepth'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoFrequency'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPosLfoType'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8490

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d84a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d84b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d84c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeDepth'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d84d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeInvert'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d84e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d84f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetReleaseTime'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetReleaseTimeMsec'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRate'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8530

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulator'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSampleRateModulators'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetScrubMode'::__l2::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::SetScrubMode'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8570

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::SetScrubTimeWidth'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectBitCrusherPreset::SetSettings'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8590

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetSettings'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d85a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetSettings'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d85b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetSpread'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d85c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpread'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d85d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulator'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d85e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetSpreadModulators'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d85f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayFeedback'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayIsEnabled'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayMode'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayRatio'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayTime'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetStereoDelayWetlevel'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetSustainGain'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetSustainGain'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSustainPedalState'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UModularSynthComponent::SetSynthPreset'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FToneGenerator::SetVolume'::__l2::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d86a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetWaveTablePosition'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d86b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetWet'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d86c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulator'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d86d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USourceEffectChorusPreset::SetWetModulators'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d86e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSourceEffectEnvFollowerNotifier::UpdateEnvFollowerInstance'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d86f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``USynthSamplePlayer::LoadSoundWaveInternal'::__l5::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UGranularSynth::SetSoundWave'::__l8::<lambda_1>::operator()'::__l5::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthSamplePlayer::LoadSoundWaveInternal'::__l5::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectMultibandCompressorPreset::SetKey'::__l5::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectTapDelayPreset::RemoveTap'::__l7::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UGranularSynth::SetSoundWave'::__l8::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USubmixEffectTapDelayPreset::SetTap'::__l9::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14f0d8760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`USynthComponentMonoWaveTable::SetSynthPreset'::__l11::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

