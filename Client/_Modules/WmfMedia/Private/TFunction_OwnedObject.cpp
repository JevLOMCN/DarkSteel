// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 39

// CloneToEmptyStorage @ 14eaa1240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaTracks::FlushSamples'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FWmfMediaTracks::FlushSamples'::`2'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14eaa1260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaPlayer::InitializePlayer'::__l2::<lambda_1>,1,1>::
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

// CloneToEmptyStorage @ 14eaa12a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaSession::RequestMoreVideoData'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FWmfMediaSession::RequestMoreVideoData'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14eaa12c0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FWmfMediaSession::Seek'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FWmfMediaSession::Seek'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14eaa12e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaSession::SetRate'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FWmfMediaSession::SetRate'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14eaa1300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaSession::SetTopology'::__l2::<lambda_1>,0,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FWmfMediaSession::SetTopology'::`2'::<lambda_1>,0,1>::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  plVar1 = *(longlong **)((longlong)this + 0x10);
  puVar2[2] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14eaa1370

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FWmfMediaPlayer::InitializePlayer'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
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

// CloneToEmptyStorage @ 14eaa13b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaSession::HandleSessionEnded'::__l29::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FWmfMediaSession::HandleSessionEnded'::`29'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14eaa13d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaSession::CommitRate'::__l121::<lambda_1>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FWmfMediaSession::CommitRate'::`121'::<lambda_1>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14eaa13f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaSession::HandleSessionTopologyStatus'::__l122::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FWmfMediaSession::HandleSessionTopologyStatus'::`122'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14eaa1410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaTracks::AddTrackToTopology'::__l166::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FWmfMediaTracks::AddTrackToTopology'::`166'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14eaa1430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaTracks::AddTrackToTopology'::__l166::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FWmfMediaTracks::AddTrackToTopology'::`166'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14eaa1450

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaSession::CommitRate'::__l246::<lambda_2>,0,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FWmfMediaSession::CommitRate'::`246'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14eaa7bb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaTracks::FlushSamples'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014eaa7bb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14eaa7bc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaPlayer::InitializePlayer'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14eaa7bf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaSession::RequestMoreVideoData'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014eaa7bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14eaa7c00

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FWmfMediaSession::Seek'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014eaa7c05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14eaa7c10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaSession::SetRate'::__l2::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014eaa7c15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14eaa7c20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaSession::SetTopology'::__l2::<lambda_1>,0,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14eaa7c50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FWmfMediaPlayer::InitializePlayer'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14eaa7c80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaSession::HandleSessionEnded'::__l29::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014eaa7c85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14eaa7c90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaSession::CommitRate'::__l121::<lambda_1>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014eaa7c95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14eaa7ca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaSession::HandleSessionTopologyStatus'::__l122::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014eaa7ca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14eaa7cb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaTracks::AddTrackToTopology'::__l166::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014eaa7cb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14eaa7cc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaTracks::AddTrackToTopology'::__l166::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014eaa7cc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14eaa7cd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaSession::CommitRate'::__l246::<lambda_2>,0,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014eaa7cd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14eaac5f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaTracks::FlushSamples'::__l2::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14eaac600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaPlayer::InitializePlayer'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14eaac610

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaSession::RequestMoreVideoData'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14eaac620

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`FWmfMediaSession::Seek'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14eaac630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaSession::SetRate'::__l2::<lambda_1>,0,0>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14eaac640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaSession::SetTopology'::__l2::<lambda_1>,0,1>::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14eaac650

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FWmfMediaPlayer::InitializePlayer'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14eaac660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaSession::HandleSessionEnded'::__l29::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14eaac670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaSession::CommitRate'::__l121::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14eaac680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaSession::HandleSessionTopologyStatus'::__l122::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14eaac690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaTracks::AddTrackToTopology'::__l166::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14eaac6a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaTracks::AddTrackToTopology'::__l166::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14eaac6b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FWmfMediaSession::CommitRate'::__l246::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

