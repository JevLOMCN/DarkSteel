// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 16

// FNiagaraDataInterfaceProxySubmix @ 1490b1aa0

FNiagaraDataInterfaceProxySubmix * __thiscall
FNiagaraDataInterfaceProxySubmix::FNiagaraDataInterfaceProxySubmix
          (FNiagaraDataInterfaceProxySubmix *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataInterfaceProxySubmix *pFVar3;
  
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxySubmix__6B_;
  *(undefined8 *)&this->SubmixListeners = 0;
  *(undefined8 *)&(this->SubmixListeners).field_0x8 = 0;
  *(undefined8 *)&(this->SubmixListeners).field_0x20 = 0;
  *(undefined4 *)&(this->SubmixListeners).field_0x28 = 0;
  *(undefined4 *)&(this->SubmixListeners).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubmixListeners).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubmixListeners).field_0x34 = 0;
  *(undefined8 *)&(this->SubmixListeners).field_0x40 = 0;
  *(undefined4 *)&(this->SubmixListeners).field_0x48 = 0;
  memset(&this->PatchMixer,0,0xa8);
  Audio::FPatchMixer::FPatchMixer(&this->PatchMixer);
  this->SubmixRegisteredTo = (USoundSubmix *)0x0;
  this->bIsSubmixListenerRegistered = false;
  this->NumSamplesToBuffer = param_1;
  (this->DeviceCreatedHandle).ID = 0;
  (this->DeviceDestroyedHandle).ID = 0;
  if (param_1 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumSamplesToBuffer > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudio.cpp"
                       ,0x8f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraDataInterfaceProxySubmix *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// ~FNiagaraDataInterfaceProxySubmix @ 1490b8300

void __thiscall
FNiagaraDataInterfaceProxySubmix::~FNiagaraDataInterfaceProxySubmix
          (FNiagaraDataInterfaceProxySubmix *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxySubmix__6B_;
  if ((this->DeviceDestroyedHandle).ID != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!DeviceDestroyedHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudio.cpp"
                       ,0x96,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->DeviceCreatedHandle).ID != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!DeviceCreatedHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudio.cpp"
                       ,0x97,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)&(this->SubmixListeners).field_0x8 != *(int *)&(this->SubmixListeners).field_0x34) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubmixListeners.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudio.cpp"
                       ,0x98,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  Audio::FPatchMixer::~FPatchMixer(&this->PatchMixer);
  *(undefined4 *)&(this->SubmixListeners).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SubmixListeners).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubmixListeners);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  return;
}

// AddSubmixListener @ 1490cb2b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FNiagaraDataInterfaceProxySubmix::AddSubmixListener
          (FNiagaraDataInterfaceProxySubmix *this,uint param_1)

{
  int *piVar1;
  USoundSubmix *pUVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  float fVar6;
  atomic<int> aVar7;
  bool bVar8;
  int iVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedPtr<FNiagaraSubmixListener,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined1 *puVar13;
  undefined1 local_res8 [8];
  atomic<int> local_res10 [2];
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  atomic<int> *local_28;
  TReferenceControllerBase<1> **local_20;
  
  local_res10[0] = (atomic<int>)param_1;
  if (*(int *)&(this->SubmixListeners).field_0x8 != *(int *)&(this->SubmixListeners).field_0x34) {
    puVar13 = *(undefined1 **)&(this->SubmixListeners).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->SubmixListeners).field_0x38;
    }
    iVar9 = *(int *)(puVar13 +
                    (ulonglong)(*(int *)&(this->SubmixListeners).field_0x48 - 1U & param_1) * 4);
    if (iVar9 != -1) {
      do {
        if (*(uint *)((longlong)iVar9 * 0x20 + *(longlong *)&this->SubmixListeners) == param_1) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!SubmixListeners.Contains(InDeviceId)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudio.cpp"
                             ,0xd7,L"");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *(longlong *)&this->SubmixListeners);
      } while (iVar9 != -1);
    }
  }
  pTVar10 = ::operator_new(0x60);
  aVar7 = local_res10[0];
  fVar6 = __real_3f800000;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    local_38 = ___xmm_00000000000000000000000000000010;
    pTStack_30 = _UNK_150651568;
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNiagaraSubmixListener___00_SharedPointerInternals__6B_
    ;
    iVar9 = this->NumSamplesToBuffer;
    pUVar2 = this->SubmixRegisteredTo;
    pTVar10[1]._padding_ = (longlong)&___7FNiagaraSubmixListener__6B_;
    pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[2]._padding_ = 0;
    pTVar10[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[2].WeakReferenceCount = (atomic<int>)0x0;
    Audio::FPatchMixer::AddNewInput(&this->PatchMixer,(FPatchInput *)(pTVar10 + 3),iVar9,fVar6);
    pTVar10[4].SharedReferenceCount = aVar7;
    pTVar12 = pTVar10 + 1;
    pTVar10[5]._padding_ = (longlong)pUVar2;
    *(undefined1 *)&pTVar10[5].SharedReferenceCount = 0;
    local_38 = pTVar12;
    pTStack_30 = pTVar10;
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_1490cb472;
    }
  }
  lVar3._0_4_ = pTVar12->SharedReferenceCount;
  lVar3._4_4_ = pTVar12->WeakReferenceCount;
  if (((lVar3 == 0) || (pTVar12[1]._padding_ == 0)) || (*(int *)(pTVar12[1]._padding_ + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar12->SharedReferenceCount = pTVar12;
    if (pTVar10 != (TReferenceControllerBase<1> *)pTVar12[1]._padding_) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pTVar12[1]._padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pTVar12[1]._padding_ = (longlong)pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_1490cb472:
  local_28 = local_res10;
  local_20 = &local_38;
  TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,TSharedRef<FNiagaraSubmixListener,1>_&&>_>
            ((TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
              *)&this->SubmixListeners,
             (TPairInitializer<unsigned_int_const_&,TSharedRef<FNiagaraSubmixListener,1>_&&> *)
             local_res8,(bool *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  pTVar11 = TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
            ::FindChecked((TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
                           *)&this->SubmixListeners,(uint)local_res10[0]);
  if ((pTVar11->Object == (FNiagaraSubmixListener *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FNiagaraSubmixListener::RegisterToSubmix(pTVar11->Object);
  return;
}

// GetNumChannels @ 149107150

int __thiscall
FNiagaraDataInterfaceProxySubmix::GetNumChannels(FNiagaraDataInterfaceProxySubmix *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedPtr<FNiagaraSubmixListener,1> *pTVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  TAtomic<int> TVar8;
  undefined1 local_res8 [8];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
              *)&this->SubmixListeners,&local_28);
  iVar4 = local_28.ArrayNum;
  uVar6 = (ulonglong)local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + uVar6 * 4;
  FVar7.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar6 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar7.Data == pFVar1) break;
    pTVar5 = TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
             ::FindChecked((TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
                            *)&this->SubmixListeners,*(uint *)FVar7.Data);
    if (pTVar5->Object == (FNiagaraSubmixListener *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    TVar8 = pTVar5->Object->NumChannelsInSubmix;
    if (TVar8 != (TAtomic<int>)0x0) goto LAB_149107208;
    uVar6 = local_28._8_8_ & 0xffffffff;
    FVar7.Data = FVar7.Data + 4;
  }
  TVar8 = (TAtomic<int>)0x0;
LAB_149107208:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return (int)TVar8;
}

// GetNumFramesAvailable @ 149107400

int __thiscall
FNiagaraDataInterfaceProxySubmix::GetNumFramesAvailable(FNiagaraDataInterfaceProxySubmix *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetNumChannels(this);
  if (iVar1 < 1) {
    return 0;
  }
  iVar2 = Audio::FPatchMixer::MaxNumberOfSamplesThatCanBePopped(&this->PatchMixer);
  return iVar2 / iVar1;
}

// GetNumSamplesAvailable @ 1491074b0

int __thiscall
FNiagaraDataInterfaceProxySubmix::GetNumSamplesAvailable(FNiagaraDataInterfaceProxySubmix *this)

{
  int iVar1;
  
  iVar1 = Audio::FPatchMixer::MaxNumberOfSamplesThatCanBePopped(&this->PatchMixer);
  return iVar1;
}

// GetSampleRate @ 149109f90

float __thiscall
FNiagaraDataInterfaceProxySubmix::GetSampleRate(FNiagaraDataInterfaceProxySubmix *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  TSharedPtr<FNiagaraSubmixListener,1> *pTVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  float fVar8;
  undefined1 local_res8 [8];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_48 [3];
  
  local_48[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48[0].ArrayNum = 0;
  local_48[0].ArrayMax = 0;
  TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
              *)&this->SubmixListeners,local_48);
  iVar3 = local_48[0].ArrayNum;
  uVar6 = (ulonglong)local_48[0].ArrayNum;
  pFVar1 = local_48[0].AllocatorInstance.Data + uVar6 * 4;
  FVar7.Data = local_48[0].AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar6 != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar7.Data == pFVar1) break;
    pTVar5 = TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
             ::FindChecked((TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
                            *)&this->SubmixListeners,*(uint *)FVar7.Data);
    if (pTVar5->Object == (FNiagaraSubmixListener *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        fVar8 = (float)(*pcVar2)();
        return fVar8;
      }
    }
    fVar8 = (float)(int)pTVar5->Object->SubmixSampleRate;
    if (0.0 < fVar8) goto LAB_14910a055;
    uVar6 = local_48[0]._8_8_ & 0xffffffff;
    FVar7.Data = FVar7.Data + 4;
  }
  fVar8 = 0.0;
LAB_14910a055:
  if (local_48[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].AllocatorInstance.Data);
  }
  return fVar8;
}

// OnBeginDestroy @ 149119c50

void __thiscall
FNiagaraDataInterfaceProxySubmix::OnBeginDestroy(FNiagaraDataInterfaceProxySubmix *this)

{
  FDelegateHandle FVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudio.cpp"
                       ,0x10a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1.ID = (this->DeviceCreatedHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               &FAudioDeviceManagerDelegates::OnAudioDeviceCreated,FVar1);
  }
  FVar1.ID = (this->DeviceDestroyedHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               &FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed,FVar1);
  }
  (this->DeviceCreatedHandle).ID = 0;
  (this->DeviceDestroyedHandle).ID = 0;
  if (this->bIsSubmixListenerRegistered != false) {
    UnregisterFromAllAudioDevices(this);
    return;
  }
  return;
}

// OnDeviceDestroyed @ 14911a1d0

void __thiscall
FNiagaraDataInterfaceProxySubmix::OnDeviceDestroyed
          (FNiagaraDataInterfaceProxySubmix *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  uint local_res8 [8];
  
  if ((this->bIsSubmixListenerRegistered != false) &&
     (*(int *)&(this->SubmixListeners).field_0x8 != *(int *)&(this->SubmixListeners).field_0x34)) {
    puVar3 = *(undefined1 **)&(this->SubmixListeners).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->SubmixListeners).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->SubmixListeners).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->SubmixListeners).field_0x0;
      while (*(uint *)((longlong)iVar2 * 0x20 + lVar1) != param_1) {
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + lVar1);
        if (iVar2 == -1) {
          return;
        }
      }
      local_res8[0] = param_1;
      TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned_int>
                ((TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
                  *)&this->SubmixListeners,param_1,local_res8);
    }
  }
  return;
}

// OnNewDeviceCreated @ 14911a550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FNiagaraDataInterfaceProxySubmix::OnNewDeviceCreated
          (FNiagaraDataInterfaceProxySubmix *this,uint param_1)

{
  int *piVar1;
  USoundSubmix *pUVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  float fVar6;
  atomic<int> aVar7;
  bool bVar8;
  int iVar9;
  TReferenceControllerBase<1> *pTVar10;
  TSharedPtr<FNiagaraSubmixListener,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined1 *puVar13;
  undefined1 auStackX_8 [8];
  atomic<int> aaStackX_10 [2];
  TReferenceControllerBase<1> *pTStack_38;
  TReferenceControllerBase<1> *pTStack_30;
  atomic<int> *paStack_28;
  TReferenceControllerBase<1> **ppTStack_20;
  
  if (this->bIsSubmixListenerRegistered == false) {
    return;
  }
  aaStackX_10[0] = (atomic<int>)param_1;
  if (*(int *)&(this->SubmixListeners).field_0x8 != *(int *)&(this->SubmixListeners).field_0x34) {
    puVar13 = *(undefined1 **)&(this->SubmixListeners).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->SubmixListeners).field_0x38;
    }
    iVar9 = *(int *)(puVar13 +
                    (ulonglong)(*(int *)&(this->SubmixListeners).field_0x48 - 1U & param_1) * 4);
    if (iVar9 != -1) {
      do {
        if (*(uint *)((longlong)iVar9 * 0x20 + *(longlong *)&this->SubmixListeners) == param_1) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!SubmixListeners.Contains(InDeviceId)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudio.cpp"
                             ,0xd7,L"");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          break;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *(longlong *)&this->SubmixListeners);
      } while (iVar9 != -1);
    }
  }
  pTVar10 = ::operator_new(0x60);
  aVar7 = aaStackX_10[0];
  fVar6 = __real_3f800000;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    pTStack_38 = ___xmm_00000000000000000000000000000010;
    pTStack_30 = _UNK_150651568;
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNiagaraSubmixListener___00_SharedPointerInternals__6B_
    ;
    iVar9 = this->NumSamplesToBuffer;
    pUVar2 = this->SubmixRegisteredTo;
    pTVar10[1]._padding_ = (longlong)&___7FNiagaraSubmixListener__6B_;
    pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10[2]._padding_ = 0;
    pTVar10[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[2].WeakReferenceCount = (atomic<int>)0x0;
    Audio::FPatchMixer::AddNewInput(&this->PatchMixer,(FPatchInput *)(pTVar10 + 3),iVar9,fVar6);
    pTVar10[4].SharedReferenceCount = aVar7;
    pTVar12 = pTVar10 + 1;
    pTVar10[5]._padding_ = (longlong)pUVar2;
    *(undefined1 *)&pTVar10[5].SharedReferenceCount = 0;
    pTStack_38 = pTVar12;
    pTStack_30 = pTVar10;
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_1490cb472;
    }
  }
  lVar3._0_4_ = pTVar12->SharedReferenceCount;
  lVar3._4_4_ = pTVar12->WeakReferenceCount;
  if (((lVar3 == 0) || (pTVar12[1]._padding_ == 0)) || (*(int *)(pTVar12[1]._padding_ + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar12->SharedReferenceCount = pTVar12;
    if (pTVar10 != (TReferenceControllerBase<1> *)pTVar12[1]._padding_) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pTVar12[1]._padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pTVar12[1]._padding_ = (longlong)pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_1490cb472:
  paStack_28 = aaStackX_10;
  ppTStack_20 = &pTStack_38;
  TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,TSharedRef<FNiagaraSubmixListener,1>_&&>_>
            ((TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
              *)&this->SubmixListeners,
             (TPairInitializer<unsigned_int_const_&,TSharedRef<FNiagaraSubmixListener,1>_&&> *)
             auStackX_8,(bool *)&paStack_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  pTVar11 = TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
            ::FindChecked((TMapBase<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
                           *)&this->SubmixListeners,(uint)aaStackX_10[0]);
  if ((pTVar11->Object == (FNiagaraSubmixListener *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FNiagaraSubmixListener::RegisterToSubmix(pTVar11->Object);
  return;
}

// OnUpdateSubmix @ 14911aaa0

void __thiscall
FNiagaraDataInterfaceProxySubmix::OnUpdateSubmix
          (FNiagaraDataInterfaceProxySubmix *this,USoundSubmix *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDelegateHandle FVar3;
  FAudioDeviceManager *this_00;
  code *local_38 [2];
  undefined **local_28;
  FNiagaraDataInterfaceProxySubmix *local_20;
  undefined8 local_10;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudio.cpp"
                       ,0xae,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->DeviceCreatedHandle).ID == 0) {
    FVar3 = TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
            ::AddRaw<FNiagaraDataInterfaceProxySubmix>
                      ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                        *)&FAudioDeviceManagerDelegates::OnAudioDeviceCreated,
                       (FNiagaraDataInterfaceProxySubmix *)&stack0x00000008,(pmf_65662abf)this);
                    /* WARNING: Load size is inaccurate */
    (this->DeviceCreatedHandle).ID = *FVar3.ID;
  }
  if ((this->DeviceDestroyedHandle).ID == 0) {
    FVar3 = TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
            ::AddRaw<FNiagaraDataInterfaceProxySubmix>
                      ((TMulticastDelegateRegistration<void___cdecl(unsigned_int),FDefaultTSDelegateUserPolicy>
                        *)&FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed,
                       (FNiagaraDataInterfaceProxySubmix *)&stack0x00000010,(pmf_65662abf)this);
                    /* WARNING: Load size is inaccurate */
    (this->DeviceDestroyedHandle).ID = *FVar3.ID;
  }
  if (this->bIsSubmixListenerRegistered != false) {
    UnregisterFromAllAudioDevices(this);
  }
  this->SubmixRegisteredTo = param_1;
  this_00 = FAudioDeviceManager::Get();
  if (this_00 != (FAudioDeviceManager *)0x0) {
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNiagaraDataInterfaceProxySubmix::RegisterToAllAudioDevices'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraDataInterfaceProxySubmix::RegisterToAllAudioDevices'::__l5::<lambda_1>,void,unsigned_int,FAudioDevice_*>
                  ::Call;
    local_20 = this;
    FAudioDeviceManager::IterateOverAllDevices
              (this_00,(TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_*)> *)local_38);
  }
  this->bIsSubmixListenerRegistered = true;
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 14911ad00

int __thiscall
FNiagaraDataInterfaceProxySubmix::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxySubmix *this)

{
  return 0;
}

// PopAudio @ 14911f470

int __thiscall
FNiagaraDataInterfaceProxySubmix::PopAudio
          (FNiagaraDataInterfaceProxySubmix *this,float *param_1,int param_2,bool param_3)

{
  int iVar1;
  
  iVar1 = Audio::FPatchMixer::PopAudio(&this->PatchMixer,param_1,param_2,param_3);
  return iVar1;
}

// RegisterToAllAudioDevices @ 149126af0

void __thiscall
FNiagaraDataInterfaceProxySubmix::RegisterToAllAudioDevices(FNiagaraDataInterfaceProxySubmix *this)

{
  FAudioDeviceManager *this_00;
  code *local_38 [2];
  undefined **local_28;
  FNiagaraDataInterfaceProxySubmix *local_20;
  undefined8 local_10;
  
  this_00 = FAudioDeviceManager::Get();
  if (this_00 != (FAudioDeviceManager *)0x0) {
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNiagaraDataInterfaceProxySubmix::RegisterToAllAudioDevices'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraDataInterfaceProxySubmix::RegisterToAllAudioDevices'::__l5::<lambda_1>,void,unsigned_int,FAudioDevice_*>
                  ::Call;
    local_20 = this;
    FAudioDeviceManager::IterateOverAllDevices
              (this_00,(TUniqueFunction<void___cdecl(unsigned_int,FAudioDevice_*)> *)local_38);
  }
  return;
}

// RemoveSubmixListener @ 14912b150

void __thiscall
FNiagaraDataInterfaceProxySubmix::RemoveSubmixListener
          (FNiagaraDataInterfaceProxySubmix *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  uint local_res10 [6];
  
  if (*(int *)&(this->SubmixListeners).field_0x8 != *(int *)&(this->SubmixListeners).field_0x34) {
    puVar3 = *(undefined1 **)&(this->SubmixListeners).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->SubmixListeners).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->SubmixListeners).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->SubmixListeners).field_0x0;
      while (*(uint *)((longlong)iVar2 * 0x20 + lVar1) != param_1) {
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + lVar1);
        if (iVar2 == -1) {
          return;
        }
      }
      local_res10[0] = param_1;
      TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned_int>
                ((TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
                  *)&this->SubmixListeners,param_1,local_res10);
    }
  }
  return;
}

// UnregisterFromAllAudioDevices @ 14913eb60

void __thiscall
FNiagaraDataInterfaceProxySubmix::UnregisterFromAllAudioDevices
          (FNiagaraDataInterfaceProxySubmix *this)

{
  TMap<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->SubmixListeners;
  bVar3 = 1 < *(int *)&(this->SubmixListeners).field_0x48;
  if (!bVar3) {
    TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->SubmixListeners).field_0x8);
  puVar1 = &(this->SubmixListeners).field_0xc;
  *(undefined4 *)&(this->SubmixListeners).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SubmixListeners).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubmixListeners).field_0x34 = 0;
  iVar2 = *(int *)&(this->SubmixListeners).field_0x2c;
  *(undefined4 *)&(this->SubmixListeners).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->SubmixListeners).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SubmixListeners).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->SubmixListeners).field_0x48 = 1;
    TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<FNiagaraSubmixListener,1>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

