// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 11

// FNiagaraSubmixListener @ 1490b1b80

FNiagaraSubmixListener * __thiscall
FNiagaraSubmixListener::FNiagaraSubmixListener(FNiagaraSubmixListener *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->NumChannelsInSubmix = (TAtomic<int>)0x0;
  this->SubmixSampleRate = (TAtomic<int>)0x0;
  this->_padding_ = (longlong)&___7FNiagaraSubmixListener__6B_;
  *(undefined8 *)&(this->MixerInput).PushCallsCounter = 0;
  (this->MixerInput).OutputHandle.Object = (FPatchOutput *)0x0;
  (this->MixerInput).OutputHandle.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->AudioDeviceId = 0xffffffff;
  this->Submix = (USoundSubmix *)0x0;
  this->bIsRegistered = false;
  return this;
}

// FNiagaraSubmixListener @ 1490b1bc0

FNiagaraSubmixListener * __thiscall
FNiagaraSubmixListener::FNiagaraSubmixListener
          (FNiagaraSubmixListener *this,FNiagaraSubmixListener *param_1)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->NumChannelsInSubmix = (TAtomic<int>)0x0;
  this->SubmixSampleRate = (TAtomic<int>)0x0;
  *(undefined8 *)&(this->MixerInput).PushCallsCounter = 0;
  (this->MixerInput).OutputHandle.Object = (FPatchOutput *)0x0;
  (this->MixerInput).OutputHandle.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->AudioDeviceId = 0xffffffff;
  this->Submix = (USoundSubmix *)0x0;
  this->bIsRegistered = false;
  this->_padding_ = (longlong)&___7FNiagaraSubmixListener__6B_;
  UnregisterFromSubmix(param_1);
  LOCK();
  this->NumChannelsInSubmix = param_1->NumChannelsInSubmix;
  UNLOCK();
  LOCK();
  param_1->NumChannelsInSubmix = (TAtomic<int>)0x0;
  UNLOCK();
  LOCK();
  this->SubmixSampleRate = param_1->SubmixSampleRate;
  UNLOCK();
  LOCK();
  param_1->SubmixSampleRate = (TAtomic<int>)0x0;
  UNLOCK();
  Audio::FPatchInput::operator=(&this->MixerInput,&param_1->MixerInput);
  this->Submix = param_1->Submix;
  param_1->Submix = (USoundSubmix *)0x0;
  this->AudioDeviceId = param_1->AudioDeviceId;
  param_1->AudioDeviceId = 0xffffffff;
  RegisterToSubmix(this);
  return this;
}

// FNiagaraSubmixListener @ 1490b1c80

FNiagaraSubmixListener * __thiscall
FNiagaraSubmixListener::FNiagaraSubmixListener
          (FNiagaraSubmixListener *this,FPatchMixer *param_1,int param_2,uint param_3,
          USoundSubmix *param_4)

{
  float fVar1;
  
  fVar1 = __real_3f800000;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FNiagaraSubmixListener__6B_;
  this->NumChannelsInSubmix = (TAtomic<int>)0x0;
  this->SubmixSampleRate = (TAtomic<int>)0x0;
  Audio::FPatchMixer::AddNewInput(param_1,&this->MixerInput,param_2,fVar1);
  this->Submix = param_4;
  this->AudioDeviceId = param_3;
  this->bIsRegistered = false;
  return this;
}

// ~FNiagaraSubmixListener @ 1490b83f0

void __thiscall FNiagaraSubmixListener::~FNiagaraSubmixListener(FNiagaraSubmixListener *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  Audio::FPatchInput::~FPatchInput(&this->MixerInput);
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001490b8427. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 1490c1610

void __thiscall
`FNiagaraSubmixListener::UnregisterFromSubmix'::__l13::<lambda_1>::operator()(void *this)

{
  atomic<bool> aVar1;
  code *pcVar2;
  FTaskBase *this_00;
  FAudioDeviceManager *this_01;
  FAudioDevice *pFVar3;
  longlong lVar4;
  TSharedRef<ISubmixBufferListener,1> *pTVar5;
  TSharedRef<ISubmixBufferListener,1> local_18;
  
  this_01 = FAudioDeviceManager::Get();
  pFVar3 = FAudioDeviceManager::GetAudioDeviceRaw(this_01,*(uint *)(*(longlong *)this + 0x38));
  if (pFVar3 != (FAudioDevice *)0x0) {
    lVar4 = *(longlong *)(*(longlong *)this + 0x40);
    if (lVar4 == 0) {
      lVar4 = (**(code **)(pFVar3->_padding_ + 0x88))(pFVar3);
    }
    pcVar2 = *(code **)(pFVar3->_padding_ + 0xa0);
    pTVar5 = TSharedFromThis<ISubmixBufferListener,1>::AsShared
                       ((TSharedFromThis<ISubmixBufferListener,1> *)(*(longlong *)this + 8),
                        &local_18);
    (*pcVar2)(pFVar3,pTVar5,lVar4);
    lVar4 = **(longlong **)((longlong)this + 8);
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0xd0) == '\0')) {
      this_00 = (FTaskBase *)**(longlong **)((longlong)this + 8);
      LOCK();
      aVar1 = this_00->TaskTriggered;
      this_00->TaskTriggered = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar1 == (atomic<bool>)0x0) {
        LOCK();
        this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0xd8);
      }
    }
  }
  return;
}

// GetListenerName @ 149105f10

FString * __thiscall FNiagaraSubmixListener::GetListenerName(FNiagaraSubmixListener *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&ListenerName,L"NiagaraSubmixListener");
      atexit(`FNiagaraSubmixListener::GetListenerName'::__l2::
             _dynamic_atexit_destructor_for__ListenerName__);
      _Init_thread_footer(&::_TSS0);
      return &ListenerName;
    }
  }
  return &ListenerName;
}

// GetNumChannels @ 149107240

int __thiscall FNiagaraSubmixListener::GetNumChannels(FNiagaraSubmixListener *this)

{
  return (int)this->NumChannelsInSubmix;
}

// GetSampleRate @ 14910a0a0

float __thiscall FNiagaraSubmixListener::GetSampleRate(FNiagaraSubmixListener *this)

{
  return (float)(int)this->SubmixSampleRate;
}

// OnNewSubmixBuffer @ 14911a570

void __thiscall
FNiagaraSubmixListener::OnNewSubmixBuffer
          (FNiagaraSubmixListener *this,USoundSubmix *param_1,float *param_2,int param_3,int param_4
          ,int param_5,double param_6)

{
  LOCK();
  this->NumChannelsInSubmix = (TAtomic<int>)param_4;
  UNLOCK();
  LOCK();
  this->SubmixSampleRate = (TAtomic<int>)param_5;
  UNLOCK();
  Audio::FPatchInput::PushAudio(&this->MixerInput,param_2,param_3);
  return;
}

// RegisterToSubmix @ 149126b50

void __thiscall FNiagaraSubmixListener::RegisterToSubmix(FNiagaraSubmixListener *this)

{
  code *pcVar1;
  FAudioDeviceManager *this_00;
  FAudioDevice *pFVar2;
  USoundSubmix *pUVar3;
  TSharedRef<ISubmixBufferListener,1> *pTVar4;
  FAudioCommandFence local_res8;
  TSharedRef<ISubmixBufferListener,1> local_18;
  
  this_00 = FAudioDeviceManager::Get();
  pFVar2 = FAudioDeviceManager::GetAudioDeviceRaw(this_00,this->AudioDeviceId);
  if (pFVar2 != (FAudioDevice *)0x0) {
    pUVar3 = this->Submix;
    this->bIsRegistered = true;
    if (pUVar3 == (USoundSubmix *)0x0) {
      pUVar3 = (USoundSubmix *)(**(code **)(pFVar2->_padding_ + 0x88))(pFVar2);
    }
    pcVar1 = *(code **)(pFVar2->_padding_ + 0x90);
    pTVar4 = TSharedFromThis<ISubmixBufferListener,1>::AsShared
                       ((TSharedFromThis<ISubmixBufferListener,1> *)&this->_padding_,&local_18);
    (*pcVar1)(pFVar2,pTVar4,pUVar3);
    local_res8.Fence.Pimpl.Reference = (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)0x0
    ;
    FAudioCommandFence::BeginFence(&local_res8);
    FAudioCommandFence::Wait(&local_res8,false);
    FAudioCommandFence::~FAudioCommandFence(&local_res8);
  }
  return;
}

// UnregisterFromSubmix @ 14913ec20

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FNiagaraSubmixListener::UnregisterFromSubmix(FNiagaraSubmixListener *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  code *pcVar3;
  bool bVar4;
  FAudioDeviceManager *this_00;
  FAudioDevice *pFVar5;
  USoundSubmix *pUVar6;
  TSharedRef<ISubmixBufferListener,1> *pTVar7;
  FAudioCommandFence local_res8;
  TSharedRef<ISubmixBufferListener,1> local_48;
  code *local_38 [2];
  undefined **local_28;
  FNiagaraSubmixListener *local_20;
  FAudioCommandFence *local_18;
  undefined8 local_10;
  
  if (this->bIsRegistered != false) {
    this->bIsRegistered = false;
    bVar4 = IsInGameThread();
    if (bVar4) {
      this_00 = FAudioDeviceManager::Get();
      pFVar5 = FAudioDeviceManager::GetAudioDeviceRaw(this_00,this->AudioDeviceId);
      if (pFVar5 != (FAudioDevice *)0x0) {
        pUVar6 = this->Submix;
        if (pUVar6 == (USoundSubmix *)0x0) {
          pUVar6 = (USoundSubmix *)(**(code **)(pFVar5->_padding_ + 0x88))(pFVar5);
        }
        pcVar3 = *(code **)(pFVar5->_padding_ + 0xa0);
        pTVar7 = TSharedFromThis<ISubmixBufferListener,1>::AsShared
                           ((TSharedFromThis<ISubmixBufferListener,1> *)&this->_padding_,&local_48);
        (*pcVar3)(pFVar5,pTVar7,pUVar6);
        local_res8.Fence.Pimpl.Reference =
             (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)0x0;
        FAudioCommandFence::BeginFence(&local_res8);
        FAudioCommandFence::Wait(&local_res8,false);
        FAudioCommandFence::~FAudioCommandFence(&local_res8);
      }
    }
    else {
      local_res8.Fence.Pimpl.Reference =
           (FTaskHandle)
           TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::TaskEventBaseAllocator);
      if (local_res8.Fence.Pimpl.Reference == (TRefCountPtr<UE::Tasks::Private::FTaskBase>)0x0) {
        local_res8.Fence.Pimpl.Reference =
             (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)0x0;
      }
      else {
        UE::Tasks::Private::FTaskBase::FTaskBase
                  ((FTaskBase *)local_res8.Fence.Pimpl.Reference,1,true);
        ((FTaskBase *)local_res8.Fence.Pimpl.Reference)->_padding_ =
             (longlong)&___7FTaskEventBase_Private_Tasks_UE__6B_;
        TaskTrace::Created((ulong64)((FTaskBase *)local_res8.Fence.Pimpl.Reference)->TraceId,0xd8);
        UE::Tasks::Private::FTaskBase::Init
                  ((FTaskBase *)local_res8.Fence.Pimpl.Reference,
                   L"C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudio.cpp(94)"
                   ,Default,TaskEvent,None);
      }
      local_28 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FNiagaraSubmixListener::UnregisterFromSubmix'::`13'::<lambda_1>,1,0>
                  ::_vftable_;
      local_18 = &local_res8;
      local_10 = 0;
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FNiagaraSubmixListener::UnregisterFromSubmix'::__l13::<lambda_1>,void>
                    ::Call;
      local_20 = this;
      FAudioThread::RunCommandOnAudioThread
                ((TUniqueFunction<void___cdecl(void)> *)local_38,(TStatId)0x154f11430);
      if ((local_res8.Fence.Pimpl.Reference != (TRefCountPtr<UE::Tasks::Private::FTaskBase>)0x0) &&
         (UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)local_res8.Fence.Pimpl.Reference),
         local_res8.Fence.Pimpl.Reference != (TRefCountPtr<UE::Tasks::Private::FTaskBase>)0x0)) {
        LOCK();
        paVar1 = (atomic<unsigned_int> *)((longlong)local_res8.Fence.Pimpl.Reference + 0x30);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (*(code *)**(undefined8 **)local_res8.Fence.Pimpl.Reference)
                    (local_res8.Fence.Pimpl.Reference,1);
          return;
        }
      }
    }
  }
  return;
}

