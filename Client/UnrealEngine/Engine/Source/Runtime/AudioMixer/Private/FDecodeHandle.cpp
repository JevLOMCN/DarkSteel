// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 3

// FDecodeHandle @ 1464d7820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FDecodeHandle * __thiscall
Audio::FDecodeHandle::FDecodeHandle(FDecodeHandle *this,FDecodeAudioTaskData *param_1)

{
  longlong lVar1;
  ICompressedAudioInfo *pIVar2;
  longlong lVar3;
  void *pvVar4;
  bool bVar5;
  FAsyncTaskBase *pFVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  ulonglong uVar9;
  FAsyncTaskBase *this_00;
  FQueuedThreadPool *pFVar10;
  FName local_res8;
  
  *(undefined ***)this = &___7FDecodeHandle_Audio__6B_;
  this_00 = (FAsyncTaskBase *)0x0;
  *(undefined8 *)&this->field_0x8 = 0;
  pFVar6 = ::operator_new(0x100);
  if (pFVar6 != (FAsyncTaskBase *)0x0) {
    uVar9 = (ulonglong)_tls_index;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
    (pFVar6->StatId).StatIdPtr = &TStatId::TStatId_NAME_None;
    pFVar6->_padding_ = (longlong)&___7__FAsyncTask_VFAsyncDecodeWorker_Audio____6B_;
    pvVar4 = ThreadLocalStoragePointer;
    (pFVar6->WorkNotFinishedCounter).Counter = 0;
    pFVar6->DoneEvent = (FEvent *)0x0;
    pFVar6->QueuedPool = (FQueuedThreadPool *)0x0;
    lVar1 = *(longlong *)((longlong)pvVar4 + uVar9 * 8);
    pFVar6->Priority = Normal;
    pFVar6->Flags = None;
    pFVar6->RequiredMemory = -1;
    pFVar6->DebugName = (wchar_t *)0x0;
    pFVar6[1]._padding_ = 0;
    pFVar6[1]._padding_ = 0;
    pIVar2 = param_1->DecompressionState;
    pFVar6[1]._padding_ = (longlong)param_1->AudioData;
    pFVar6[1]._padding_ = (longlong)pIVar2;
    lVar3 = *(longlong *)&param_1->NumPrecacheFrames;
    pFVar6[1]._padding_ = *(longlong *)&param_1->BufferType;
    pFVar6[1]._padding_ = lVar3;
    pFVar6[1]._padding_ = *(longlong *)&param_1->bLoopingMode;
    *(undefined1 *)&pFVar6[1].WorkNotFinishedCounter.Counter = 0;
    *(undefined4 *)&pFVar6[1].field_0x3c = 0;
    pFVar6[1].DoneEvent = (FEvent *)0x0;
    pFVar6[1].QueuedPool = (FQueuedThreadPool *)0x0;
    pFVar6[1].Priority = Blocking;
    pFVar6[1].Flags = None;
    *(undefined6 *)&pFVar6[1].field_0x52 = 0;
    pFVar6[1].RequiredMemory = 0;
    pFVar6[1].DebugName = (wchar_t *)0x0;
    *(undefined4 *)&pFVar6[1].StatId.StatIdPtr = 0;
    *(undefined1 *)((longlong)&pFVar6[1].StatId.StatIdPtr + 4) = 0;
    *(undefined4 *)&pFVar6[2]._padding_ = 0;
    *(undefined1 *)((longlong)&pFVar6[2]._padding_ + 4) = 0;
    *(undefined4 *)&pFVar6[2]._padding_ = 0x3f800000;
    pFVar6[2]._padding_ = 0;
    *(undefined4 *)&pFVar6[2]._padding_ = 2;
    *(undefined4 *)((longlong)&pFVar6[2]._padding_ + 4) = 0;
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
    pTVar8 = _StatPtr_FAsyncDecodeWorker;
    if (_StatPtr_FAsyncDecodeWorker == (TStatIdData *)0x0) {
      pFVar7 = ::FName::FName(&local_res8,"FAsyncDecodeWorker");
      pTVar8 = FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &`public:_struct_TStatId___cdecl_Audio::FAsyncDecodeWorker::GetStatId(void)const___ptr64'
                           ::__l2::StatPtr_FAsyncDecodeWorker,*pFVar7,L"FAsyncDecodeWorker",
                          "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                          L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
    }
    (pFVar6->StatId).StatIdPtr = pTVar8;
    this_00 = pFVar6;
  }
  *(FAsyncTaskBase **)&this->field_0x8 = this_00;
  if ((ForceSyncAudioDecodesCvar == 0) && (param_1->bForceSyncDecode == false)) {
    bVar5 = ShouldUseBackgroundPoolFor_FAsyncRealtimeAudioTask();
    this_00 = *(FAsyncTaskBase **)&this->field_0x8;
    pFVar10 = GThreadPool;
    if (bVar5) {
      pFVar10 = GBackgroundPriorityThreadPool;
    }
    bVar5 = false;
  }
  else {
    bVar5 = true;
    pFVar10 = GThreadPool;
  }
  FAsyncTaskBase::Start(this_00,bVar5,pFVar10,Normal,None,-1,(wchar_t *)0x0);
  return this;
}

// GetResult @ 1465055d0

void __thiscall
Audio::FDecodeHandle::GetResult(FDecodeHandle *this,FDecodeAudioTaskResults *param_1)

{
  FAsyncTaskBase *this_00;
  undefined8 uVar1;
  FEvent *pFVar2;
  
  FAsyncTaskBase::EnsureCompletion(*(FAsyncTaskBase **)&this->field_0x8,true,false);
  this_00 = *(FAsyncTaskBase **)&this->field_0x8;
  FAsyncTaskBase::CheckIdle(this_00);
  uVar1 = *(undefined8 *)&this_00[1].WorkNotFinishedCounter;
  pFVar2 = this_00[1].DoneEvent;
  param_1->bIsFinishedOrLooped = (bool)(char)uVar1;
  *(int3 *)&param_1->field_0x1 = (int3)((ulonglong)uVar1 >> 8);
  param_1->NumSamplesWritten = (int)((ulonglong)uVar1 >> 0x20);
  param_1->CPUDuration = (double)pFVar2;
  return;
}

// GetType @ 146505ba0

EAudioTaskType __thiscall Audio::FDecodeHandle::GetType(FDecodeHandle *this)

{
  return Decode;
}

