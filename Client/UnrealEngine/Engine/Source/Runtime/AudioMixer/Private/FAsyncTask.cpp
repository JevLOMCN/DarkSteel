// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 4

// FAsyncTask<Audio::FAsyncDecodeWorker><Audio::FProceduralAudioTaskData_const_&> @ 1464d0700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncTask<Audio::FAsyncDecodeWorker> * __thiscall
FAsyncTask<Audio::FAsyncDecodeWorker>::
FAsyncTask<Audio::FAsyncDecodeWorker><Audio::FProceduralAudioTaskData_const_&>
          (FAsyncTask<Audio::FAsyncDecodeWorker> *this,FProceduralAudioTaskData *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  void *pvVar2;
  FName *pFVar3;
  TStatIdData *pTVar4;
  FName local_res8;
  
  *(undefined2 *)&this->_padding_ = 3;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this->_padding_ = (longlong)&___7__FAsyncTask_VFAsyncDecodeWorker_Audio____6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = -1;
  this->_padding_ = 0;
  (this->Task).HeaderParseAudioData.MixerBuffer = (FMixerBuffer *)0x0;
  (this->Task).HeaderParseAudioData.SoundWave = (USoundWave *)0x0;
  (this->Task).DecodeTaskData.AudioData = (float *)0x0;
  (this->Task).DecodeTaskData.DecompressionState = (ICompressedAudioInfo *)0x0;
  (this->Task).DecodeTaskData.BufferType = Invalid;
  (this->Task).DecodeTaskData.NumChannels = 0;
  (this->Task).DecodeTaskData.NumPrecacheFrames = 0;
  (this->Task).DecodeTaskData.NumFramesToDecode = 0;
  (this->Task).DecodeTaskData.bLoopingMode = false;
  (this->Task).DecodeTaskData.bSkipFirstBuffer = false;
  (this->Task).DecodeTaskData.bForceSyncDecode = false;
  (this->Task).DecodeResult.bIsFinishedOrLooped = false;
  (this->Task).DecodeResult.NumSamplesWritten = 0;
  (this->Task).DecodeResult.CPUDuration = 0.0;
  (this->Task).ProceduralTaskData.SourceBuffer = param_1->SourceBuffer;
  (this->Task).ProceduralTaskData.SoundGenerator.Object = (param_1->SoundGenerator).Object;
  pTVar1 = (param_1->SoundGenerator).SharedReferenceCount.ReferenceController;
  (this->Task).ProceduralTaskData.SoundGenerator.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Task).ProceduralTaskData.AudioData = param_1->AudioData;
  (this->Task).ProceduralTaskData.NumSamples = param_1->NumSamples;
  (this->Task).ProceduralTaskData.bForceSyncDecode = param_1->bForceSyncDecode;
  pvVar2 = ThreadLocalStoragePointer;
  (this->Task).ProceduralResult.NumSamplesWritten = 0;
  (this->Task).ProceduralResult.bIsFinished = false;
  (this->Task).ProceduralResult.RelativeRenderCost = 1.0;
  (this->Task).ProceduralResult.CPUDuration = 0.0;
  (this->Task).TaskType = Procedural;
  (this->Task).bIsDone = (FThreadSafeBool)0x0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8) + 0x9d4c) <
      `public:_struct_TStatId___cdecl_Audio::FAsyncDecodeWorker::GetStatId(void)const___ptr64'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_TStatId___cdecl_Audio::FAsyncDecodeWorker::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_TStatId___cdecl_Audio::FAsyncDecodeWorker::GetStatId(void)const___ptr64'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      FThreadSafeStaticStat<`Audio::FAsyncDecodeWorker::GetStatId'::__l2::FStat_FAsyncDecodeWorker>
      ::
      FThreadSafeStaticStat<_Audio::FAsyncDecodeWorker::GetStatId_::__l2::FStat_FAsyncDecodeWorker>
                (&`public:_struct_TStatId___cdecl_Audio::FAsyncDecodeWorker::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FAsyncDecodeWorker);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_Audio::FAsyncDecodeWorker::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar4 = _StatPtr_FAsyncDecodeWorker;
  if (_StatPtr_FAsyncDecodeWorker == (TStatIdData *)0x0) {
    pFVar3 = ::FName::FName(&local_res8,"FAsyncDecodeWorker");
    pTVar4 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_Audio::FAsyncDecodeWorker::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FAsyncDecodeWorker,*pFVar3,L"FAsyncDecodeWorker",
                        "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                        L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  this->_padding_ = (longlong)pTVar4;
  return this;
}

// DoTaskWork @ 1464fc160

void __thiscall
FAsyncTask<Audio::FAsyncDecodeWorker>::DoTaskWork(FAsyncTask<Audio::FAsyncDecodeWorker> *this)

{
  Audio::FAsyncDecodeWorker::DoWork(&this->Task);
  return;
}

// MarkAsCanceled @ 1465119e0

void __thiscall
FAsyncTask<Audio::FAsyncDecodeWorker>::MarkAsCanceled(FAsyncTask<Audio::FAsyncDecodeWorker> *this)

{
  return;
}

// TryAbandonTask @ 146528410

bool __thiscall
FAsyncTask<Audio::FAsyncDecodeWorker>::TryAbandonTask(FAsyncTask<Audio::FAsyncDecodeWorker> *this)

{
  return false;
}

