// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 2

// FHeaderDecodeHandle @ 1464d7b50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FHeaderDecodeHandle * __thiscall
Audio::FHeaderDecodeHandle::FHeaderDecodeHandle
          (FHeaderDecodeHandle *this,FHeaderParseAudioTaskData *param_1)

{
  longlong lVar1;
  FMixerBuffer *pFVar2;
  USoundWave *pUVar3;
  void *pvVar4;
  FAsyncTaskBase *pFVar5;
  FName *pFVar6;
  TStatIdData *pTVar7;
  ulonglong uVar8;
  FAsyncTaskBase *this_00;
  FName local_res8;
  
  *(undefined ***)this = &___7FHeaderDecodeHandle_Audio__6B_;
  this_00 = (FAsyncTaskBase *)0x0;
  *(undefined8 *)&this->field_0x8 = 0;
  pFVar5 = ::operator_new(0x100);
  if (pFVar5 != (FAsyncTaskBase *)0x0) {
    uVar8 = (ulonglong)_tls_index;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
    (pFVar5->StatId).StatIdPtr = &TStatId::TStatId_NAME_None;
    pFVar5->_padding_ = (longlong)&___7__FAsyncTask_VFAsyncDecodeWorker_Audio____6B_;
    pvVar4 = ThreadLocalStoragePointer;
    (pFVar5->WorkNotFinishedCounter).Counter = 0;
    pFVar5->DoneEvent = (FEvent *)0x0;
    pFVar5->QueuedPool = (FQueuedThreadPool *)0x0;
    lVar1 = *(longlong *)((longlong)pvVar4 + uVar8 * 8);
    pFVar5->Priority = Normal;
    pFVar5->Flags = None;
    pFVar5->RequiredMemory = -1;
    pFVar5->DebugName = (wchar_t *)0x0;
    pFVar2 = param_1->MixerBuffer;
    pUVar3 = param_1->SoundWave;
    *(undefined4 *)&pFVar5[2]._padding_ = 1;
    pFVar5[1]._padding_ = (longlong)pFVar2;
    pFVar5[1]._padding_ = (longlong)pUVar3;
    pFVar5[1]._padding_ = 0;
    pFVar5[1]._padding_ = 0;
    pFVar5[1]._padding_ = 4;
    pFVar5[1]._padding_ = 0;
    *(undefined2 *)&pFVar5[1]._padding_ = 0;
    *(undefined1 *)((longlong)&pFVar5[1]._padding_ + 2) = 0;
    *(undefined1 *)&pFVar5[1].WorkNotFinishedCounter.Counter = 0;
    *(undefined4 *)&pFVar5[1].field_0x3c = 0;
    pFVar5[1].DoneEvent = (FEvent *)0x0;
    pFVar5[1].QueuedPool = (FQueuedThreadPool *)0x0;
    pFVar5[1].Priority = Blocking;
    pFVar5[1].Flags = None;
    *(undefined6 *)&pFVar5[1].field_0x52 = 0;
    pFVar5[1].RequiredMemory = 0;
    pFVar5[1].DebugName = (wchar_t *)0x0;
    *(undefined4 *)&pFVar5[1].StatId.StatIdPtr = 0;
    *(undefined1 *)((longlong)&pFVar5[1].StatId.StatIdPtr + 4) = 0;
    *(undefined4 *)&pFVar5[2]._padding_ = 0;
    *(undefined1 *)((longlong)&pFVar5[2]._padding_ + 4) = 0;
    *(undefined4 *)&pFVar5[2]._padding_ = 0x3f800000;
    pFVar5[2]._padding_ = 0;
    *(undefined4 *)((longlong)&pFVar5[2]._padding_ + 4) = 0;
    if ((*(int *)(lVar1 + 0x9d4c) <
         `public:_struct_TStatId___cdecl_Audio::FAsyncDecodeWorker::GetStatId(void)const___ptr64'::
         __l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_struct_TStatId___cdecl_Audio::FAsyncDecodeWorker::GetStatId(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_struct_TStatId___cdecl_Audio::FAsyncDecodeWorker::GetStatId(void)const___ptr64'::
       __l2::_thread_safe_static_guard_0__ == -1)) {
      FThreadSafeStaticStat<`Audio::FAsyncDecodeWorker::GetStatId'::__l2::FStat_FAsyncDecodeWorker>
      ::
      FThreadSafeStaticStat<_Audio::FAsyncDecodeWorker::GetStatId_::__l2::FStat_FAsyncDecodeWorker>
                (&`public:_struct_TStatId___cdecl_Audio::FAsyncDecodeWorker::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FAsyncDecodeWorker);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_Audio::FAsyncDecodeWorker::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pTVar7 = _StatPtr_FAsyncDecodeWorker;
    if (_StatPtr_FAsyncDecodeWorker == (TStatIdData *)0x0) {
      pFVar6 = ::FName::FName(&local_res8,"FAsyncDecodeWorker");
      pTVar7 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_struct_TStatId___cdecl_Audio::FAsyncDecodeWorker::GetStatId(void)const___ptr64'
                           ::__l2::StatPtr_FAsyncDecodeWorker,*pFVar6,L"FAsyncDecodeWorker",
                          "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                          L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    }
    (pFVar5->StatId).StatIdPtr = pTVar7;
    this_00 = pFVar5;
  }
  *(FAsyncTaskBase **)&this->field_0x8 = this_00;
  FAsyncTaskBase::Start
            (this_00,ForceSyncAudioDecodesCvar != 0,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
  return this;
}

// GetType @ 146505bb0

EAudioTaskType __thiscall Audio::FHeaderDecodeHandle::GetType(FHeaderDecodeHandle *this)

{
  return Header;
}

