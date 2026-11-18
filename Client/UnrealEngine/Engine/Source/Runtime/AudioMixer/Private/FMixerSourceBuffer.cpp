// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 35

// FMixerSourceBuffer @ 1464d89c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FMixerSourceBuffer * __thiscall
Audio::FMixerSourceBuffer::FMixerSourceBuffer
          (FMixerSourceBuffer *this,FMixerSourceBufferInitArgs *param_1,
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1>,TSizedDefaultAllocator<32>_> *pTVar1
  ;
  int *piVar2;
  TSharedPtr<ISoundGenerator,1> *pTVar3;
  undefined1 *puVar4;
  USoundWave *pUVar5;
  ulong64 uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined4 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  TNode *pTVar15;
  TNode *pTVar16;
  undefined8 *puVar17;
  TReferenceControllerBase<1> *pTVar18;
  FMixerSourceBuffer *pFVar19;
  uint uVar20;
  TReferenceControllerBase<1> *pTVar21;
  ulonglong uVar22;
  FMixerSourceBuffer *local_res10;
  TReferenceControllerBase<1> *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  undefined1 local_a8 [8];
  TReferenceControllerBase<1> *local_a0;
  uint local_98 [2];
  ulong64 local_90;
  float local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  ulong64 local_78;
  undefined1 local_70;
  void *local_68;
  undefined8 local_60;
  float local_58;
  
  pTVar16 = (TNode *)0x0;
  pTVar1 = &this->SourceVoiceBuffers;
  this->NumBuffersQeueued = 0;
  (this->RawPCMDataBuffer).Data = (uchar *)0x0;
  this->_padding_ = (longlong)&___7FMixerSourceBuffer_Audio__6B_;
  piVar2 = &(this->SourceVoiceBuffers).ArrayMax;
  (this->RawPCMDataBuffer).DataSize = 0;
  (this->RawPCMDataBuffer).LoopCount = 0;
  (this->RawPCMDataBuffer).CurrentSample = 0;
  (this->RawPCMDataBuffer).NumSamples = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SourceVoiceBuffers).ArrayNum = 0;
  *piVar2 = 0;
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 != (TNode *)0x0) {
    pTVar15->NextNode = (TNode *)0x0;
    (pTVar15->Item).Object = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
    (pTVar15->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar15->NextNode = (TNode *)0x0;
    (pTVar15->Item).Object = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
    (pTVar15->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar16 = pTVar15;
  }
  (this->BufferQueue).Tail = pTVar16;
  pTVar3 = &this->SoundGenerator;
  (this->BufferQueue).Head = pTVar16;
  this->CurrentBuffer = 0;
  pUVar5 = param_1->SoundWave;
  (this->SoundGenerator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3->Object = (ISoundGenerator *)0x0;
  this->AsyncRealtimeAudioTask = (IAudioTask *)0x0;
  this->DecompressionState = (ICompressedAudioInfo *)0x0;
  this->SoundWave = pUVar5;
  this->LoopingMode = param_1->LoopingMode;
  this->NumChannels = *(int *)((longlong)&param_1->Buffer->_padding_ + 4);
  this->BufferType = param_1->Buffer->BufferType;
  this->NumPrecacheFrames = param_1->SoundWave->NumPrecacheFrames;
  this->AuioDeviceID = param_1->AudioDeviceID;
  uVar6 = param_1->InstanceID;
  (this->CachedRealtimeFirstBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedRealtimeFirstBuffer).ArrayNum = 0;
  (this->CachedRealtimeFirstBuffer).ArrayMax = 0;
  this->InstanceID = uVar6;
  uVar9 = *(undefined4 *)((longlong)&param_1->SoundWave->_padding_ + 4);
  (this->WaveName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->SoundWave->_padding_;
  (this->WaveName).Number = uVar9;
  this->AsyncTaskStartTimeInCycles = 0;
  iVar14 = param_1->SampleRate;
  this->CPUCoreUtilization = (atomic<double>)0x0;
  this->SampleRate = iVar14;
  this->RelativeRenderCost = (atomic<float>)0x3f800000;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SoundWaveCritSec,4000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DecodeTaskCritSec,4000);
  this->bInitialized = 0;
  this->bPlayedCachedBuffer = 0;
  this->bBufferFinished = 0;
  uVar20 = ((param_1->bIsSeeking & 1) << 3 ^ *(uint *)&this->field_0x128 & 0xfffffff7) & 0xffffffef;
  *(uint *)&this->field_0x128 = uVar20;
  uVar20 = ((uint)(byte)param_1->SoundWave->field_0x364 << 5 ^ uVar20) & 0x20 ^ uVar20;
  *(uint *)&this->field_0x128 = uVar20;
  uVar20 = ((uint)(byte)param_1->SoundWave->field_0x364 << 4 ^ uVar20) & 0x40 ^ uVar20;
  *(uint *)&this->field_0x128 = uVar20;
  uVar20 = (param_1->bForceSyncDecode & 1) << 7 ^ uVar20 & 0xffffff7f;
  *(uint *)&this->field_0x128 = uVar20 & 0xfffffeff;
  if ((param_1->SoundWave->bProcedural == 0) || (DirectProceduralRenderingCVar == 0)) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0x200;
  }
  *(uint *)&this->field_0x128 = uVar20 & 0xfffffcff | uVar13;
  local_res10 = this;
  USoundWave::AddPlayingSource(param_1->SoundWave,(ISoundWaveClient **)&local_res10);
  if (this->bProcedural != 0) {
    local_7c = 0x12c0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_98[0] = param_1->AudioDeviceID;
    local_90 = param_1->AudioComponentID;
    local_84 = param_1->AudioMixerNumOutputFrames;
    local_80 = this->NumChannels;
    local_78 = param_1->InstanceID;
    local_88 = (float)param_1->SampleRate;
    local_70 = param_1->bIsPreviewSound;
    local_58 = param_1->StartTime;
    puVar17 = (undefined8 *)
              (**(code **)(param_1->SoundWave->_padding_ + 0x370))
                        (param_1->SoundWave,local_a8,local_98,param_2);
    if (pTVar3 != (TSharedPtr<ISoundGenerator,1> *)puVar17) {
      pTVar3->Object = (ISoundGenerator *)*puVar17;
      *puVar17 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SoundGenerator).SharedReferenceCount,(FSharedReferencer<1> *)(puVar17 + 1))
      ;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    this->LoopingMode = LOOP_Never;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
  }
  uVar20 = ~(*(uint *)&this->field_0x128 >> 8) & 2 | 1;
  if (*piVar2 < (int)uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar20,&pTVar1->AllocatorInstance,(this->SourceVoiceBuffers).ArrayNum,piVar2);
  }
  pTVar11 = _UNK_150651568;
  pTVar10 = ___xmm_00000000000000000000000000000010;
  uVar22 = (ulonglong)uVar20;
  while( true ) {
    pTVar21 = (TReferenceControllerBase<1> *)0x0;
    pTVar18 = ::operator_new(0x20);
    if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
      local_b8 = pTVar10;
      pTStack_b0 = pTVar11;
    }
    else {
      pTVar18[1]._padding_ = 0;
      pTVar18->SharedReferenceCount = (atomic<int>)0x1;
      pTVar18->WeakReferenceCount = (atomic<int>)0x1;
      pTVar18->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TArray_MV__TAlignedHeapAllocator__0BA______00_SharedPointerInternals__6B_
      ;
      pTVar18[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar18[1].WeakReferenceCount = (atomic<int>)0x0;
      if ((pTVar18 + 1 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        pFVar19 = (FMixerSourceBuffer *)(*pcVar8)();
        return pFVar19;
      }
      LOCK();
      pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
      UNLOCK();
      pTVar21 = pTVar18;
      local_b8 = pTVar18 + 1;
      pTStack_b0 = pTVar18;
    }
    pFVar7 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar7 <= (FScriptContainerElement *)&local_b8) &&
        ((FScriptContainerElement *)&local_b8 < pFVar7 + (longlong)*piVar2 * 0x10)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) break;
    iVar14 = (this->SourceVoiceBuffers).ArrayNum;
    if (iVar14 == *piVar2) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->SourceVoiceBuffers).ArrayNum = iVar14 + 1;
    pFVar7 = (pTVar1->AllocatorInstance).Data;
    *(TReferenceControllerBase<1> **)(pFVar7 + (longlong)iVar14 * 0x10) = local_b8;
    *(TReferenceControllerBase<1> **)(pFVar7 + (longlong)iVar14 * 0x10 + 8) = pTStack_b0;
    pTStack_b0 = (TReferenceControllerBase<1> *)0x0;
    local_b8 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
    uVar22 = uVar22 - 1;
    if (uVar22 == 0) {
      return this;
    }
  }
  pcVar8 = (code *)swi(3);
  pFVar19 = (FMixerSourceBuffer *)(*pcVar8)();
  return pFVar19;
}

// ~FMixerSourceBuffer @ 1464dc6a0

void __thiscall Audio::FMixerSourceBuffer::~FMixerSourceBuffer(FMixerSourceBuffer *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ICompressedAudioInfo *pIVar1;
  FScriptContainerElement *pFVar2;
  TNode *pTVar3;
  FMixerSourceBuffer *local_res8;
  
  lpCriticalSection = &this->SoundWaveCritSec;
  this->_padding_ = (longlong)&___7FMixerSourceBuffer_Audio__6B_;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  OnEndGenerate(this);
  pIVar1 = this->DecompressionState;
  if (pIVar1 != (ICompressedAudioInfo *)0x0) {
    (**(code **)pIVar1->_padding_)(pIVar1,1);
    this->DecompressionState = (ICompressedAudioInfo *)0x0;
  }
  if (this->SoundWave != (USoundWave *)0x0) {
    local_res8 = this;
    USoundWave::RemovePlayingSource(this->SoundWave,(ISoundWaveClient **)&local_res8);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DecodeTaskCritSec);
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (this->CachedRealtimeFirstBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SoundGenerator).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->BufferQueue).Tail;
  while (pTVar3 != (TNode *)0x0) {
    (this->BufferQueue).Tail = pTVar3->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar3->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar3,0x18);
    pTVar3 = (this->BufferQueue).Tail;
  }
  DestructItems<TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1>,int>
            ((TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *)
             (this->SourceVoiceBuffers).AllocatorInstance.Data,(this->SourceVoiceBuffers).ArrayNum);
  pFVar2 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7ISoundWaveClient__6B_;
  return;
}

// ConnectToBuses @ 1464f7510

void __thiscall Audio::FMixerSourceBuffer::ConnectToBuses(FMixerSourceBuffer *this)

{
  code *pcVar1;
  bool bVar2;
  FAudioDeviceManager *this_00;
  FAudioDevice *this_01;
  UAudioBusSubsystem *this_02;
  
  this_00 = FAudioDeviceManager::Get();
  if (this_00 != (FAudioDeviceManager *)0x0) {
    this_01 = FAudioDeviceManager::GetAudioDeviceRaw(this_00,this->AuioDeviceID);
    if (this_01 != (FAudioDevice *)0x0) {
      this_02 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>(this_01);
      if (this_02 == (UAudioBusSubsystem *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("AudioBusSubsystem",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                           ,0x281,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      UAudioBusSubsystem::ConnectPatches(this_02,this->InstanceID);
    }
  }
  return;
}

// Create @ 1464f7a10

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Audio::FMixerSourceBuffer,1> * __cdecl
Audio::FMixerSourceBuffer::Create
          (TSharedPtr<Audio::FMixerSourceBuffer,1> *__return_storage_ptr__,
          FMixerSourceBufferInitArgs *param_1,
          TArray<FAudioParameter,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  FMixerSourceBuffer *this;
  FLLMScope local_res10 [2];
  FMemScope local_res20;
  FName local_28;
  TSharedPtr<Audio::FMixerSourceBuffer,1> local_20;
  
  FLLMScope::FLLMScope(local_res10,AudioMixer,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,AudioMixer,true);
  if ((param_1->SoundWave == (USoundWave *)0x0) ||
     (bVar1 = USoundWave::HasError(param_1->SoundWave), !bVar1)) {
    this = ::operator_new(0x130);
    local_28.ComparisonIndex.Value = 0;
    local_28.Number = 0;
    if (this != (FMixerSourceBuffer *)0x0) {
      local_28 = (FName)FMixerSourceBuffer(this,param_1,param_2);
    }
    TSharedPtr<Audio::FMixerSourceBuffer,1>::
    TSharedPtr<Audio::FMixerSourceBuffer,1><Audio::FMixerSourceBuffer>
              (&local_20,(TRawPtrProxy<Audio::FMixerSourceBuffer> *)&local_28);
    __return_storage_ptr__->Object = local_20.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)
         CONCAT44(local_20.SharedReferenceCount.ReferenceController._4_4_,
                  local_20.SharedReferenceCount.ReferenceController._0_4_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    if (6 < (byte)LogAudioMixer._0_1_) {
      local_28 = (FName)param_1->SoundWave->_padding_;
      ::FName::ToString(&local_28,(FString *)&local_20);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAudioMixer);
      if (local_20.Object != (FMixerSourceBuffer *)0x0) {
        FMemory::Free(local_20.Object);
      }
    }
    __return_storage_ptr__->Object = (FMixerSourceBuffer *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return __return_storage_ptr__;
}

// DeleteDecoder @ 1464f9600

void __thiscall Audio::FMixerSourceBuffer::DeleteDecoder(FMixerSourceBuffer *this)

{
  ICompressedAudioInfo *pIVar1;
  
  pIVar1 = this->DecompressionState;
  if (pIVar1 != (ICompressedAudioInfo *)0x0) {
    (**(code **)pIVar1->_padding_)(pIVar1,1);
    this->DecompressionState = (ICompressedAudioInfo *)0x0;
  }
  return;
}

// DoProceduralRendering @ 1464fb900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceBuffer::DoProceduralRendering
          (FMixerSourceBuffer *this,FProceduralAudioTaskData *param_1,
          FProceduralAudioTaskResults *param_2)

{
  int *piVar1;
  FMutex *this_00;
  atomic<unsigned_char> aVar2;
  ISoundGenerator *this_01;
  USoundWave *pUVar3;
  float *pfVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:_void___cdecl_Audio::FMixerSourceBuffer::DoProceduralRendering(Audio::FProceduralAudioTaskData_const_&,Audio::FProceduralAudioTaskResults_&)_::_2_::FStat_STAT_FAsyncDecodeWorker_Procedural>
  FVar14;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  uint uVar15;
  FNameEntryId FVar16;
  FName FVar17;
  float fVar18;
  LARGE_INTEGER local_res10;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  ForAnyElementType local_e8;
  int local_e0 [2];
  FName local_d8;
  LARGE_INTEGER local_c8;
  double *local_c0;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  float *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FStatMessage local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<short_const_,int> local_78;
  FName local_68;
  FName local_60;
  TArrayView<float,int> local_58;
  
  local_c0 = &param_2->CPUDuration;
  QueryPerformanceCounter(&local_c8);
  local_b0 = local_c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FAsyncDecodeWorker_Procedural ==
        (FThreadSafeStaticStat<_public:_void___cdecl_Audio::FMixerSourceBuffer::DoProceduralRendering(Audio::FProceduralAudioTaskData_const_&,Audio::FProceduralAudioTaskResults_&)_::_2_::FStat_STAT_FAsyncDecodeWorker_Procedural>
         )0x0) {
      pFVar13 = ::FName::FName(&local_68,"STAT_FAsyncDecodeWorker_Procedural");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncDecodeWorker_Procedural,*pFVar13,
                 L"STAT_FAsyncDecodeWorker_Procedural","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                 ,true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_FAsyncDecodeWorker_Procedural;
  if (StatPtr_STAT_FAsyncDecodeWorker_Procedural ==
      (FThreadSafeStaticStat<_public:_void___cdecl_Audio::FMixerSourceBuffer::DoProceduralRendering(Audio::FProceduralAudioTaskData_const_&,Audio::FProceduralAudioTaskResults_&)_::_2_::FStat_STAT_FAsyncDecodeWorker_Procedural>
       )0x0) {
    pFVar13 = ::FName::FName(&local_60,"STAT_FAsyncDecodeWorker_Procedural");
    FVar14 = (FThreadSafeStaticStat<_public:_void___cdecl_Audio::FMixerSourceBuffer::DoProceduralRendering(Audio::FProceduralAudioTaskData_const_&,Audio::FProceduralAudioTaskResults_&)_::_2_::FStat_STAT_FAsyncDecodeWorker_Procedural>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncDecodeWorker_Procedural,
                          *pFVar13,L"STAT_FAsyncDecodeWorker_Procedural","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar14;
  bVar6 = false;
  bVar8 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar15 = FVar17.Number;
  if ((FVar16.Value == 0) && (uVar15 == 0)) {
LAB_1464fba80:
    bVar7 = false;
    FVar17 = local_d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar16.Value;
        local_res20.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                   ,0x121);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1464fba80;
    local_res10.s.LowPart = FVar16.Value;
    local_res10.s.HighPart = uVar15;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar7 = true;
  }
  this_01 = (param_1->SoundGenerator).Object;
  if (this_01 == (ISoundGenerator *)0x0) {
    pUVar3 = this->SoundWave;
    if (pUVar3 != (USoundWave *)0x0) {
      this_00 = &pUVar3->SourcesPlayingCs;
      LOCK();
      bVar10 = this_00->State == (atomic<unsigned_char>)0x0;
      if (bVar10) {
        this_00->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar10) {
        UE::FMutex::LockSlow(this_00);
      }
      iVar11 = (pUVar3->SourcesPlaying).ArrayNum;
      LOCK();
      aVar2 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(this_00);
      }
      if (0 < iVar11) {
        iVar11 = (**(code **)(this->SoundWave->_padding_ + 0x3f0))();
        if (iVar11 == 1) {
          iVar11 = (**(code **)(this->SoundWave->_padding_ + 1000))
                             (this->SoundWave,param_1->AudioData);
          param_2->NumSamplesWritten = (int)((ulonglong)(longlong)iVar11 >> 2);
        }
        else {
          if ((iVar11 != 2) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("FormatType == EAudioMixerStreamDataFormat::Int16",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                                  ,0x138,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_e8.Data = (FScriptContainerElement *)0x0;
          local_e0[0] = 0;
          local_e0[1] = 0;
          iVar11 = this->NumChannels * param_1->NumSamples * 2;
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar11,&local_e8,local_e0,local_e0 + 1);
          iVar12 = (**(code **)(this->SoundWave->_padding_ + 1000))(this->SoundWave,local_e8.Data);
          if ((iVar11 < iVar12) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NumBytesWritten <= ByteSize",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                                  ,0x141,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar11 = (int)((ulonglong)(longlong)iVar12 >> 1);
          param_2->NumSamplesWritten = iVar11;
          pfVar4 = param_1->AudioData;
          if ((iVar11 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar9.Data = local_e8.Data;
          iVar12 = param_2->NumSamplesWritten;
          uStack_9c = local_78._12_4_;
          local_a8 = pfVar4;
          iStack_a0 = iVar11;
          if ((iVar12 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_58._12_4_ = uStack_9c;
          local_58.ArrayNum = iStack_a0;
          local_88 = FVar9.Data;
          local_78._12_4_ = uStack_7c;
          local_78.ArrayNum = iVar12;
          local_58.DataPtr = local_a8;
          local_78.DataPtr = (short *)FVar9.Data;
          iStack_80 = iVar12;
          ArrayPcm16ToFloat(&local_78,&local_58);
          if (local_e8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data);
          }
        }
        goto LAB_1464fbd1e;
      }
    }
    memset(param_1->AudioData,0,(longlong)param_1->NumSamples << 2);
    param_2->NumSamplesWritten = param_1->NumSamples;
  }
  else {
    iVar11 = ISoundGenerator::GetNextBuffer(this_01,param_1->AudioData,param_1->NumSamples,false);
    param_2->NumSamplesWritten = iVar11;
    if (((param_1->SoundGenerator).Object == (ISoundGenerator *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar10 = (bool)(**(code **)(((param_1->SoundGenerator).Object)->_padding_ + 0x28))();
    param_2->bIsFinished = bVar10;
    if (((param_1->SoundGenerator).Object == (ISoundGenerator *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar18 = (float)(**(code **)(((param_1->SoundGenerator).Object)->_padding_ + 0x30))();
    param_2->RelativeRenderCost = fVar18;
  }
LAB_1464fbd1e:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_98.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_98.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res10);
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_98.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_98.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_98.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_98.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_98);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  QueryPerformanceCounter(&local_b8);
  if (local_c0 != (double *)0x0) {
    *local_c0 = (double)(ulonglong)(local_b8.QuadPart - (longlong)local_b0) *
                FGenericPlatformTime::SecondsPerCycle64;
  }
  return;
}

// EnsureAsyncTaskFinishes @ 1464fda30

void __thiscall Audio::FMixerSourceBuffer::EnsureAsyncTaskFinishes(FMixerSourceBuffer *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IAudioTask *pIVar1;
  
  lpCriticalSection = &this->DecodeTaskCritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->AsyncRealtimeAudioTask != (IAudioTask *)0x0) {
      (**(code **)((longlong)*this->AsyncRealtimeAudioTask + 0x20))();
      pIVar1 = this->AsyncRealtimeAudioTask;
      if (pIVar1 != (IAudioTask *)0x0) {
        (**(code **)*pIVar1)(pIVar1,1);
      }
      this->AsyncRealtimeAudioTask = (IAudioTask *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x0001464fda89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FinishProceduralRendering @ 1464feba0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Audio::FMixerSourceBuffer::FinishProceduralRendering
          (FMixerSourceBuffer *this,FProceduralAudioTaskResults *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  if ((this->bDirectRendering != 0) && (this->CurrentBuffer != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bDirectRendering || CurrentBuffer == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                       ,0x152,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar1 = this->CurrentBuffer;
  uVar5 = 0;
  if ((int)uVar1 < (this->SourceVoiceBuffers).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
  if (*(longlong *)(pFVar2 + (longlong)(int)uVar1 * 0x10) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TArray<float,TAlignedHeapAllocator<16>_>::SetNum
            (*(TArray<float,TAlignedHeapAllocator<16>_> **)(pFVar2 + (longlong)(int)uVar1 * 0x10),
             param_1->NumSamplesWritten,No);
  iVar6 = this->SampleRate * this->NumChannels;
  if (iVar6 < 1) {
    iVar6 = 1;
  }
  UpdateCPUCoreUtilization
            (this,param_1->CPUDuration,(double)param_1->NumSamplesWritten / (double)iVar6);
  this->RelativeRenderCost = (atomic<float>)param_1->RelativeRenderCost;
  if (this->bDirectRendering != 0) {
    ConnectToBuses(this);
  }
  return;
}

// GetCPUCoreUtilization @ 1465014a0

double __thiscall Audio::FMixerSourceBuffer::GetCPUCoreUtilization(FMixerSourceBuffer *this)

{
  return (double)this->CPUCoreUtilization;
}

// GetDiagnosticState @ 146502190

void __thiscall
Audio::FMixerSourceBuffer::GetDiagnosticState(FMixerSourceBuffer *this,FDiagnosticState *param_1)

{
  IAudioTask *pIVar1;
  LARGE_INTEGER local_res8;
  
  pIVar1 = this->AsyncRealtimeAudioTask;
  param_1->bInFlight = pIVar1 != (IAudioTask *)0x0;
  param_1->WaveName = this->WaveName;
  param_1->bProcedural = this->bProcedural;
  if (pIVar1 != (IAudioTask *)0x0) {
    QueryPerformanceCounter(&local_res8);
    param_1->RunTimeInSecs =
         (float)((double)(local_res8.s.LowPart - (int)this->AsyncTaskStartTimeInCycles) *
                FGenericPlatformTime::SecondsPerCycle);
    return;
  }
  param_1->RunTimeInSecs = 0.0;
  return;
}

// GetInstanceID @ 146502fc0

ulong64 __thiscall Audio::FMixerSourceBuffer::GetInstanceID(FMixerSourceBuffer *this)

{
  return this->InstanceID;
}

// GetNextBuffer @ 146503af0

TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> * __thiscall
Audio::FMixerSourceBuffer::GetNextBuffer
          (FMixerSourceBuffer *this,
          TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *__return_storage_ptr__)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  TNode *pTVar5;
  TNode *pTVar6;
  code *pcVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  BOOL BVar10;
  uint uVar11;
  int iVar12;
  TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *pTVar13;
  ISoundGenerator *pIVar14;
  uint uVar15;
  LPCRITICAL_SECTION lpCriticalSection;
  TArray<float,TAlignedHeapAllocator<16>_> *local_98;
  FSharedReferencer<1> FStack_90;
  undefined8 local_88;
  FSharedReferencer<1> FStack_80;
  ISoundGenerator *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FProceduralAudioTaskResults local_68;
  FProceduralAudioTaskData local_50;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&this->SoundWaveCritSec;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  BVar10 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar10 == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    __return_storage_ptr__->Object = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  if (this->bDirectRendering == 0) {
    local_98 = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
    FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar5 = ((this->BufferQueue).Tail)->NextNode;
    if (pTVar5 != (TNode *)0x0) {
      pTVar13 = &pTVar5->Item;
      if ((TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *)&local_98 != pTVar13) {
        local_98 = pTVar13->Object;
        pTVar13->Object = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&FStack_90,&(pTVar5->Item).SharedReferenceCount);
      }
      pTVar6 = (this->BufferQueue).Tail;
      (this->BufferQueue).Tail = pTVar5;
      local_88 = 0;
      FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar13 != (TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *)&local_88) {
        pTVar13->Object = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pTVar5->Item).SharedReferenceCount,&FStack_80);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_80.ReferenceController);
      if (pTVar6 != (TNode *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pTVar6->Item).SharedReferenceCount.ReferenceController);
        ::operator_delete(pTVar6,0x18);
      }
    }
    this->NumBuffersQeueued = this->NumBuffersQeueued + -1;
    __return_storage_ptr__->Object = local_98;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         FStack_90.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    local_50.SoundGenerator.Object = (ISoundGenerator *)0x0;
    local_50.SoundGenerator.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_50.bForceSyncDecode = false;
    if (((this->SoundGenerator).Object == (ISoundGenerator *)0x0) &&
       (((this->SoundWave == (USoundWave *)0x0 || (this->SoundWave->bProcedural == 0)) &&
        (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("SoundGenerator.IsValid() || (SoundWave && SoundWave->bProcedural)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                            ,0x103,L""), bVar9)))) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *)(*pcVar7)();
      return pTVar13;
    }
    if ((this->SoundGenerator).Object == (ISoundGenerator *)0x0) {
      uVar11 = this->NumChannels * 0x12c0;
    }
    else {
      pIVar14 = TSharedPtr<ISoundGenerator,1>::operator->(&this->SoundGenerator);
      uVar11 = (**(code **)(pIVar14->_padding_ + 0x10))(pIVar14);
    }
    if ((this->CurrentBuffer != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentBuffer == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                           ,0x106,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *)(*pcVar7)();
      return pTVar13;
    }
    if (((this->SourceVoiceBuffers).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *)(*pcVar7)();
      return pTVar13;
    }
    pFVar2 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
    if ((*(longlong *)pFVar2 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *)(*pcVar7)();
      return pTVar13;
    }
    pFVar3 = *(ForAnyElementType **)pFVar2;
    iVar12 = *(int *)&pFVar3[1].Data;
    pFVar1 = pFVar3 + 1;
    if (iVar12 < (int)uVar11) {
      UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar11 - iVar12,pFVar3,(int *)pFVar1,(int *)((longlong)&pFVar3[1].Data + 4));
    }
    else {
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      if ((int)uVar11 < iVar12) {
        uVar15 = iVar12 - uVar11;
        if (((int)(uVar15 | uVar11) < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar13 = (TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *)(*pcVar7)();
          return pTVar13;
        }
        if (uVar15 != 0) {
          iVar12 = (*(int *)&pFVar1->Data - uVar15) - uVar11;
          if (iVar12 != 0) {
            memmove(pFVar3->Data + (longlong)(int)uVar11 * 4,
                    pFVar3->Data + (longlong)(int)uVar11 * 4 + (longlong)(int)uVar15 * 4,
                    (longlong)iVar12 << 2);
          }
          *(uint *)&pFVar1->Data = *(int *)&pFVar1->Data - uVar15;
        }
      }
    }
    FVar8.ReferenceController = local_50.SoundGenerator.SharedReferenceCount.ReferenceController;
    pTVar4 = (this->SoundGenerator).SharedReferenceCount.ReferenceController;
    pIVar14 = (this->SoundGenerator).Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78 = local_50.SoundGenerator.Object;
    pTStack_70 = local_50.SoundGenerator.SharedReferenceCount.ReferenceController;
    local_50.SourceBuffer = this;
    local_50.SoundGenerator.Object = pIVar14;
    local_50.SoundGenerator.SharedReferenceCount.ReferenceController = pTVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
    if (((this->SourceVoiceBuffers).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *)(*pcVar7)();
      return pTVar13;
    }
    pFVar2 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
    if ((*(longlong *)pFVar2 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *)(*pcVar7)();
      return pTVar13;
    }
    local_50.AudioData = (float *)**(undefined8 **)pFVar2;
    local_68.CPUDuration = 0.0;
    local_68.NumSamplesWritten = 0;
    local_68.bIsFinished = false;
    local_68.RelativeRenderCost = 1.0;
    local_50.NumSamples = uVar11;
    DoProceduralRendering(this,&local_50,&local_68);
    FinishProceduralRendering(this,&local_68);
    *(uint *)&this->field_0x128 =
         ((uint)local_68.bIsFinished * 2 ^ *(uint *)&this->field_0x128) & 2 ^
         *(uint *)&this->field_0x128;
    if (((this->SourceVoiceBuffers).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *)(*pcVar7)();
      return pTVar13;
    }
    pFVar2 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
    __return_storage_ptr__->Object = *(TArray<float,TAlignedHeapAllocator<16>_> **)pFVar2;
    pTVar4 = *(TReferenceControllerBase<1> **)(pFVar2 + 8);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SoundGenerator.SharedReferenceCount.ReferenceController);
    LeaveCriticalSection(lpCriticalSection);
  }
  return __return_storage_ptr__;
}

// GetNumBuffersQueued @ 146504360

int __thiscall Audio::FMixerSourceBuffer::GetNumBuffersQueued(FMixerSourceBuffer *this)

{
  BOOL BVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&this->SoundWaveCritSec;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    BVar1 = TryEnterCriticalSection(lpCriticalSection);
    iVar2 = 0;
    if (BVar1 == 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)0x0;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      iVar2 = this->NumBuffersQeueued;
      LeaveCriticalSection(lpCriticalSection);
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetRelativeRenderCost @ 1465051f0

float __thiscall Audio::FMixerSourceBuffer::GetRelativeRenderCost(FMixerSourceBuffer *this)

{
  return (float)this->RelativeRenderCost;
}

// Init @ 1465083d0

bool __thiscall Audio::FMixerSourceBuffer::Init(FMixerSourceBuffer *this)

{
  undefined4 uVar1;
  Type TVar2;
  
  TVar2 = this->BufferType;
  this->bInitialized = 1;
  if ((TVar2 == PCM) || (TVar2 == PCMPreview)) {
    SubmitInitialPCMBuffers(this);
  }
  else if (((TVar2 == PCMRealTime) || (TVar2 == Streaming)) && (this->bDirectRendering == 0)) {
    SubmitInitialRealtimeBuffers(this);
    return true;
  }
  return true;
}

// IsAsyncTaskDone @ 14650e2f0

bool __thiscall Audio::FMixerSourceBuffer::IsAsyncTaskDone(FMixerSourceBuffer *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 uVar1;
  
  lpCriticalSection = &this->DecodeTaskCritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (this->AsyncRealtimeAudioTask == (IAudioTask *)0x0) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)((longlong)*this->AsyncRealtimeAudioTask + 8))();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsAsyncTaskInProgress @ 14650e350

bool __thiscall Audio::FMixerSourceBuffer::IsAsyncTaskInProgress(FMixerSourceBuffer *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  IAudioTask *pIVar1;
  
  lpCriticalSection = &this->DecodeTaskCritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pIVar1 = this->AsyncRealtimeAudioTask;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return pIVar1 != (IAudioTask *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IsEndOfAudio @ 14650e8e0

bool __thiscall Audio::FMixerSourceBuffer::IsEndOfAudio(FMixerSourceBuffer *this)

{
  int iVar1;
  
  if (this->bDirectRendering != 0) {
    return this->bBufferFinished;
  }
  iVar1 = GetNumBuffersQueued(this);
  return iVar1 == 0;
}

// OnBeginDestroy @ 146512310

bool __thiscall
Audio::FMixerSourceBuffer::OnBeginDestroy(FMixerSourceBuffer *this,USoundWave *param_1)

{
  ICompressedAudioInfo *pIVar1;
  BOOL BVar2;
  bool bVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&this->SoundWaveCritSec;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  if ((lpCriticalSection == (LPCRITICAL_SECTION)0x0) || (this->SoundWave == (USoundWave *)0x0)) {
    bVar3 = false;
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      return false;
    }
  }
  else {
    EnsureAsyncTaskFinishes(this);
    pIVar1 = this->DecompressionState;
    if (pIVar1 != (ICompressedAudioInfo *)0x0) {
      (**(code **)pIVar1->_padding_)(pIVar1,1);
      this->DecompressionState = (ICompressedAudioInfo *)0x0;
    }
    this->SoundWave = (USoundWave *)0x0;
    bVar3 = true;
  }
  LeaveCriticalSection(lpCriticalSection);
  return bVar3;
}

// OnBeginGenerate @ 1465123b0

void __thiscall Audio::FMixerSourceBuffer::OnBeginGenerate(FMixerSourceBuffer *this)

{
  ISoundGenerator *pIVar1;
  code *pcVar2;
  bool bVar3;
  BOOL BVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&this->SoundWaveCritSec;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    pIVar1 = (this->SoundGenerator).Object;
    if (pIVar1 == (ISoundGenerator *)0x0) {
      if ((this->SoundWave != (USoundWave *)0x0) && (this->bProcedural != 0)) {
        if (this->SoundWave->bProcedural == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("SoundWave && SoundWave->bProcedural",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                             ,0x322,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        (**(code **)(this->SoundWave->_padding_ + 0x3b8))();
      }
    }
    else {
      (**(code **)(pIVar1->_padding_ + 0x18))();
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// OnBufferEnd @ 146512470

void __thiscall Audio::FMixerSourceBuffer::OnBufferEnd(FMixerSourceBuffer *this)

{
  undefined1 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  BOOL BVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (this->bDirectRendering != 0) {
    return;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)&this->SoundWaveCritSec;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  if ((this->NumBuffersQeueued == 0) && (this->bBufferFinished != 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((this->bProcedural == 0) || (this->SoundWave != (USoundWave *)0x0)) {
    bVar3 = false;
    bVar4 = false;
    if ((this->bProcedural == 0) && (this->DecompressionState == (ICompressedAudioInfo *)0x0)) {
      bVar4 = true;
      goto LAB_1465124dd;
    }
  }
  else {
    bVar4 = true;
  }
  bVar3 = bVar4;
  bVar4 = false;
LAB_1465124dd:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    if ((((!bVar2) && (!bVar3)) && (!bVar4)) && (this->bHasError == 0)) {
      ProcessRealTimeSource(this);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// OnEndGenerate @ 146512c10

void __thiscall Audio::FMixerSourceBuffer::OnEndGenerate(FMixerSourceBuffer *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ISoundGenerator *pIVar1;
  USoundWave *pUVar2;
  code *pcVar3;
  ulong64 uVar4;
  bool bVar5;
  BOOL BVar6;
  FAudioDeviceManager *this_00;
  FAudioDevice *this_01;
  UAudioBusSubsystem *pUVar7;
  LPCRITICAL_SECTION lpCriticalSection_00;
  ulong64 local_res8;
  ISoundGenerator *local_18;
  TReferenceControllerBase<1> *local_10;
  
  EnsureAsyncTaskFinishes(this);
  lpCriticalSection_00 = (LPCRITICAL_SECTION)&this->SoundWaveCritSec;
  if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
    BVar6 = TryEnterCriticalSection(lpCriticalSection_00);
    if (BVar6 == 0) {
      lpCriticalSection_00 = (LPCRITICAL_SECTION)0x0;
    }
    if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
      pIVar1 = (this->SoundGenerator).Object;
      if (pIVar1 == (ISoundGenerator *)0x0) {
        if ((this->SoundWave != (USoundWave *)0x0) &&
           (this->bInitialized == 1 && this->bProcedural == 1)) {
          if (this->SoundWave->bProcedural == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("SoundWave && SoundWave->bProcedural",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                               ,0x34a,L"");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          (**(code **)(this->SoundWave->_padding_ + 0x3c8))();
        }
      }
      else {
        (**(code **)(pIVar1->_padding_ + 0x20))();
        pUVar2 = this->SoundWave;
        if (pUVar2 != (USoundWave *)0x0) {
          pcVar3 = *(code **)(pUVar2->_padding_ + 0x3c0);
          local_18 = (this->SoundGenerator).Object;
          local_10 = (this->SoundGenerator).SharedReferenceCount.ReferenceController;
          if (local_10 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
            UNLOCK();
          }
          (*pcVar3)(pUVar2,&local_18);
        }
        this_00 = FAudioDeviceManager::Get();
        if (this_00 != (FAudioDeviceManager *)0x0) {
          this_01 = FAudioDeviceManager::GetAudioDeviceRaw(this_00,this->AuioDeviceID);
          if (this_01 != (FAudioDevice *)0x0) {
            pUVar7 = FAudioDevice::GetSubsystem<UAudioBusSubsystem>(this_01);
            if (pUVar7 == (UAudioBusSubsystem *)0x0) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("AudioBusSubsystem",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                                 ,0x340,L"");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            uVar4 = this->InstanceID;
            lpCriticalSection = &pUVar7->Mutex;
            if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) goto LAB_146512dcf;
            EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            local_res8 = uVar4;
            if (*(int *)&(pUVar7->SoundInstanceConnectionMap).field_0x8 !=
                *(int *)&(pUVar7->SoundInstanceConnectionMap).field_0x34) {
              TSet<TTuple<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections>,TDefaultMapHashableKeyFuncs<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections,0>,FDefaultSetAllocator>
              ::RemoveImpl<unsigned___int64>
                        ((TSet<TTuple<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections>,TDefaultMapHashableKeyFuncs<unsigned___int64,UAudioBusSubsystem::FSoundInstanceConnections,0>,FDefaultSetAllocator>
                          *)&pUVar7->SoundInstanceConnectionMap,
                         (int)(uVar4 >> 0x20) * 0x17 + (int)uVar4,&local_res8);
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          }
        }
      }
      LeaveCriticalSection(lpCriticalSection_00);
    }
    return;
  }
LAB_146512dcf:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnFinishDestroy @ 146512de0

void __thiscall
Audio::FMixerSourceBuffer::OnFinishDestroy(FMixerSourceBuffer *this,USoundWave *param_1)

{
  ICompressedAudioInfo *pIVar1;
  BOOL BVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  EnsureAsyncTaskFinishes(this);
  lpCriticalSection = (LPCRITICAL_SECTION)&this->SoundWaveCritSec;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    BVar2 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar2 == 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)0x0;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      if (this->SoundWave != (USoundWave *)0x0) {
        pIVar1 = this->DecompressionState;
        if (pIVar1 != (ICompressedAudioInfo *)0x0) {
          (**(code **)pIVar1->_padding_)(pIVar1,1);
          this->DecompressionState = (ICompressedAudioInfo *)0x0;
        }
        this->SoundWave = (USoundWave *)0x0;
      }
      LeaveCriticalSection(lpCriticalSection);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnIsReadyForFinishDestroy @ 146512e60

bool __thiscall
Audio::FMixerSourceBuffer::OnIsReadyForFinishDestroy(FMixerSourceBuffer *this,USoundWave *param_1)

{
  return false;
}

// ProcessRealTimeSource @ 146515bd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Audio::FMixerSourceBuffer::ProcessRealTimeSource(FMixerSourceBuffer *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined4 uVar1;
  IAudioTask *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TArray<float,TAlignedHeapAllocator<16>_> *this_00;
  undefined1 uVar8;
  uint uVar9;
  undefined1 local_58 [4];
  int local_54;
  double local_50;
  TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> local_48;
  FProceduralAudioTaskResults local_38;
  
  lpCriticalSection = &this->DecodeTaskCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->AsyncRealtimeAudioTask != (IAudioTask *)0x0) {
    (**(code **)((longlong)*this->AsyncRealtimeAudioTask + 0x18))();
    iVar6 = (**(code **)((longlong)*this->AsyncRealtimeAudioTask + 0x10))();
    if (iVar6 == 0) {
      local_38.NumSamplesWritten = 0;
      local_38.CPUDuration = 0.0;
      local_38.bIsFinished = false;
      local_38.RelativeRenderCost = 1.0;
      (**(code **)((longlong)*this->AsyncRealtimeAudioTask + 0x30))
                (this->AsyncRealtimeAudioTask,&local_38);
      FinishProceduralRendering(this,&local_38);
      uVar8 = local_38.bIsFinished;
    }
    else {
      uVar8 = false;
      if (iVar6 == 2) {
        local_58[0] = 0;
        local_50 = 0.0;
        local_54 = 0;
        (**(code **)((longlong)*this->AsyncRealtimeAudioTask + 0x28))
                  (this->AsyncRealtimeAudioTask,local_58);
        uVar8 = local_58[0];
        uVar9 = this->CurrentBuffer;
        uVar7 = 0;
        if ((int)uVar9 < (this->SourceVoiceBuffers).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1>::operator->
                            ((TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *)
                             ((this->SourceVoiceBuffers).AllocatorInstance.Data +
                             (longlong)(int)uVar9 * 0x10));
        TArray<float,TAlignedHeapAllocator<16>_>::SetNum(this_00,local_54,No);
        iVar6 = this->SampleRate * this->NumChannels;
        if (iVar6 < 1) {
          iVar6 = 1;
        }
        UpdateCPUCoreUtilization(this,local_50,(double)local_54 / (double)iVar6);
      }
    }
    pIVar2 = this->AsyncRealtimeAudioTask;
    if (pIVar2 != (IAudioTask *)0x0) {
      (**(code **)*pIVar2)(pIVar2,1);
    }
    this->AsyncRealtimeAudioTask = (IAudioTask *)0x0;
    this->AsyncTaskStartTimeInCycles = 0;
    SubmitRealTimeSourceData(this,(bool)uVar8);
  }
  ConnectToBuses(this);
  if ((this->AsyncRealtimeAudioTask == (IAudioTask *)0x0) &&
     (uVar1 = *(undefined4 *)&this->field_0x128, ZPULL(uVar1,9,1) == 0)) {
    this->CurrentBuffer = this->CurrentBuffer + 1;
    uVar9 = this->CurrentBuffer;
    if (2 < this->CurrentBuffer) {
      this->CurrentBuffer = 0;
      uVar9 = 0;
    }
    bVar5 = this->bPlayedCachedBuffer != 0;
    if (bVar5) {
      *(uint *)&this->field_0x128 = uVar1 & 0xfffffffb;
    }
    bVar5 = ReadMoreRealtimeData(this,this->DecompressionState,uVar9,bVar5);
    if ((this->AsyncRealtimeAudioTask == (IAudioTask *)0x0) && (this->bHasError == 0)) {
      SubmitRealTimeSourceData(this,bVar5);
    }
  }
  if (this->bDirectRendering != 0) {
    if ((this->CurrentBuffer != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentBuffer == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                           ,0x275,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar9 = this->CurrentBuffer;
    uVar7 = 0;
    if ((int)uVar9 < (this->SourceVoiceBuffers).ArrayNum) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
    local_48.Object =
         *(TArray<float,TAlignedHeapAllocator<16>_> **)(pFVar3 + (longlong)(int)uVar9 * 0x10);
    local_48.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar3 + (longlong)(int)uVar9 * 0x10 + 8);
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SubmitBuffer(this,&local_48);
  }
                    /* WARNING: Could not recover jumptable at 0x000146515eb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ReadMoreRealtimeData @ 146516e50

bool __thiscall
Audio::FMixerSourceBuffer::ReadMoreRealtimeData
          (FMixerSourceBuffer *this,ICompressedAudioInfo *param_1,int param_2,
          EBufferReadMode param_3)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  ISoundGenerator *pIVar5;
  code *pcVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  BOOL BVar13;
  int iVar14;
  uint uVar15;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar16;
  FSynchronizedProceduralDecodeHandle *pFVar17;
  FAsyncTask<Audio::FAsyncDecodeWorker> *this_00;
  FAsyncTask<Audio::FAsyncDecodeWorker> *this_01;
  TArrayView<float,int> *pTVar18;
  FDecodeHandle *this_02;
  FAsyncTask<Audio::FAsyncDecodeWorker> *lpCriticalSection;
  uint uVar19;
  longlong lVar20;
  LARGE_INTEGER local_res8;
  FProceduralAudioTaskData local_c8;
  LARGE_INTEGER local_a0;
  FDecodeAudioTaskData local_98;
  TArrayView<float,int> local_68;
  ISoundGenerator *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  TArrayView<float,int> local_48;
  
  if ((this->bDirectRendering != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bDirectRendering",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                         ,0x1c1,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  uVar11 = this->NumChannels * 0x12c0;
  this_01 = (FAsyncTask<Audio::FAsyncDecodeWorker> *)0x0;
  uVar19 = (uint)~param_2 >> 0x1f;
  uVar15 = 0;
  uVar12 = uVar15;
  if (param_2 < (this->SourceVoiceBuffers).ArrayNum) {
    uVar12 = uVar19;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  pFVar2 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
  lVar20 = (longlong)param_2 * 0x10;
  if ((*(longlong *)(pFVar2 + lVar20) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  pFVar3 = *(ForAnyElementType **)(pFVar2 + lVar20);
  iVar14 = *(int *)((longlong)&pFVar3[1].Data + 4);
  *(undefined4 *)&pFVar3[1].Data = 0;
  if (iVar14 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,pFVar3,0,(int *)((longlong)&pFVar3[1].Data + 4));
  }
  uVar12 = uVar15;
  if (param_2 < (this->SourceVoiceBuffers).ArrayNum) {
    uVar12 = uVar19;
  }
  if ((uVar12 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  pFVar2 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
  if ((*(longlong *)(pFVar2 + lVar20) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  pFVar3 = *(ForAnyElementType **)(pFVar2 + lVar20);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,uVar11,pFVar3,(int *)(pFVar3 + 1),(int *)((longlong)&pFVar3[1].Data + 4));
  if (this->bProcedural == 0) {
    uVar12 = 0;
    if ((this->BufferType != PCMRealTime) && (this->BufferType != Streaming)) {
      if (((this->RawPCMDataBuffer).Data == (uchar *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("RawPCMDataBuffer.Data != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                             ,0x1df,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if (param_2 < (this->SourceVoiceBuffers).ArrayNum) {
        uVar12 = uVar19;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      pTVar16 = TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1>::
                operator*<TArray<float,TAlignedHeapAllocator<16>_>_>
                          ((TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *)
                           ((this->SourceVoiceBuffers).AllocatorInstance.Data + lVar20));
      pTVar18 = TArrayView<float,int>::
                TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                          (&local_48,pTVar16);
      local_68.DataPtr = pTVar18->DataPtr;
      local_68.ArrayNum = pTVar18->ArrayNum;
      local_68._12_4_ = *(undefined4 *)&pTVar18->field_0xc;
      bVar8 = FRawPCMDataBuffer::GetNextBuffer(&this->RawPCMDataBuffer,&local_68,uVar11);
      return bVar8;
    }
    if (param_1 == (ICompressedAudioInfo *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDecoder != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                         ,0x1f5,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
    }
    else {
      cVar10 = (**(code **)(param_1->_padding_ + 0x68))(param_1);
      if (cVar10 != '\0') {
        if (param_2 < (this->SourceVoiceBuffers).ArrayNum) {
          uVar12 = uVar19;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        pTVar16 = TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1>::operator->
                            ((TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *)
                             ((this->SourceVoiceBuffers).AllocatorInstance.Data + lVar20));
        memset((pTVar16->AllocatorInstance).Data,0,(longlong)(int)uVar11 << 2);
        lpCriticalSection = (FAsyncTask<Audio::FAsyncDecodeWorker> *)&this->SoundWaveCritSec;
        if (lpCriticalSection != (FAsyncTask<Audio::FAsyncDecodeWorker> *)0x0) {
          BVar13 = TryEnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          if (BVar13 == 0) {
            lpCriticalSection = this_01;
          }
          if ((lpCriticalSection == (FAsyncTask<Audio::FAsyncDecodeWorker> *)0x0) ||
             (this->SoundWave == (USoundWave *)0x0)) {
            this->bBufferFinished = 1;
            this->bHasError = 1;
            if (lpCriticalSection == (FAsyncTask<Audio::FAsyncDecodeWorker> *)0x0) {
              return false;
            }
          }
          else {
            USoundWave::SetError
                      (this->SoundWave,L"ICompressedAudioInfo::HasError() flagged on the Decoder");
            this->bBufferFinished = 1;
            this->bHasError = 1;
          }
          goto LAB_1465175a1;
        }
        goto LAB_1465175c4;
      }
    }
    if (param_2 < (this->SourceVoiceBuffers).ArrayNum) {
      uVar12 = uVar19;
    }
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    pFVar2 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
    if ((*(longlong *)(pFVar2 + lVar20) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    local_98.bLoopingMode = this->LoopingMode != LOOP_Never;
    local_98.NumFramesToDecode = 0x12c0;
    local_98.AudioData = (float *)**(undefined8 **)(pFVar2 + lVar20);
    local_98.BufferType = this->BufferType;
    local_98.bSkipFirstBuffer = param_3 == AsynchronousSkipFirstFrame;
    local_98.NumChannels = this->NumChannels;
    local_98.NumPrecacheFrames = this->NumPrecacheFrames;
    local_98.bForceSyncDecode = this->bForceSyncDecode;
    local_98.DecompressionState = param_1;
    QueryPerformanceCounter(&local_a0);
    lpCriticalSection = (FAsyncTask<Audio::FAsyncDecodeWorker> *)&this->DecodeTaskCritSec;
    this->AsyncTaskStartTimeInCycles = (ulong64)local_a0;
    if (lpCriticalSection == (FAsyncTask<Audio::FAsyncDecodeWorker> *)0x0) goto LAB_1465175c4;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->AsyncRealtimeAudioTask != (IAudioTask *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!AsyncRealtimeAudioTask",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                           ,0x204,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    this_02 = ::operator_new(0x10);
    if (this_02 != (FDecodeHandle *)0x0) {
      this_01 = (FAsyncTask<Audio::FAsyncDecodeWorker> *)
                FDecodeHandle::FDecodeHandle(this_02,&local_98);
    }
    this->AsyncRealtimeAudioTask = (IAudioTask *)this_01;
    goto LAB_1465175a1;
  }
  lpCriticalSection = (FAsyncTask<Audio::FAsyncDecodeWorker> *)&this->SoundWaveCritSec;
  if (lpCriticalSection == (FAsyncTask<Audio::FAsyncDecodeWorker> *)0x0) {
LAB_1465175c4:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  BVar13 = TryEnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (BVar13 == 0) {
    lpCriticalSection = this_01;
  }
  if (lpCriticalSection == (FAsyncTask<Audio::FAsyncDecodeWorker> *)0x0) {
    return false;
  }
  if (this->SoundWave == (USoundWave *)0x0) goto LAB_1465175a1;
  local_c8.SoundGenerator.Object = (ISoundGenerator *)0x0;
  local_c8.SoundGenerator.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_c8.bForceSyncDecode = false;
  if ((((this->SoundGenerator).Object == (ISoundGenerator *)0x0) &&
      (this->SoundWave->bProcedural == 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SoundGenerator.IsValid() || (SoundWave && SoundWave->bProcedural)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                         ,0x1d0,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  FVar7.ReferenceController = local_c8.SoundGenerator.SharedReferenceCount.ReferenceController;
  pTVar4 = (this->SoundGenerator).SharedReferenceCount.ReferenceController;
  pIVar5 = (this->SoundGenerator).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58 = local_c8.SoundGenerator.Object;
  pTStack_50 = local_c8.SoundGenerator.SharedReferenceCount.ReferenceController;
  local_c8.SourceBuffer = this;
  local_c8.SoundGenerator.Object = pIVar5;
  local_c8.SoundGenerator.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  if (param_2 < (this->SourceVoiceBuffers).ArrayNum) {
    uVar15 = uVar19;
  }
  if ((uVar15 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  pTVar16 = TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1>::operator->
                      ((TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *)
                       ((this->SourceVoiceBuffers).AllocatorInstance.Data + lVar20));
  local_c8.AudioData = (float *)(pTVar16->AllocatorInstance).Data;
  local_c8.NumSamples = uVar11;
  QueryPerformanceCounter(&local_res8);
  this->AsyncTaskStartTimeInCycles = (ulong64)local_res8;
  if ((this->AsyncRealtimeAudioTask != (IAudioTask *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!AsyncRealtimeAudioTask",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                         ,0x1d7,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  uVar12 = this->AuioDeviceID;
  if ((ForceSynchronizedAudioTaskKickCvar == 0) &&
     ((pIVar5 == (ISoundGenerator *)0x0 ||
      (iVar14 = (**(code **)(pIVar5->_padding_ + 0x38))(pIVar5), iVar14 == 0)))) {
    pFVar17 = ::operator_new(0x10);
    if (pFVar17 == (FSynchronizedProceduralDecodeHandle *)0x0) {
LAB_146517296:
      pFVar17 = (FSynchronizedProceduralDecodeHandle *)0x0;
    }
    else {
      pFVar17->_padding_ = 0;
      pFVar17->_padding_ = (longlong)&___7FProceduralDecodeHandle_Audio__6B_;
      this_00 = ::operator_new(0x100);
      if (this_00 != (FAsyncTask<Audio::FAsyncDecodeWorker> *)0x0) {
        this_01 = FAsyncTask<Audio::FAsyncDecodeWorker>::
                  FAsyncTask<Audio::FAsyncDecodeWorker><Audio::FProceduralAudioTaskData_const_&>
                            (this_00,&local_c8);
      }
      pFVar17->_padding_ = (longlong)this_01;
      if ((ForceSyncAudioDecodesCvar == 0) && (local_c8.bForceSyncDecode == false)) {
        FAsyncTaskBase::Start
                  ((FAsyncTaskBase *)this_01,false,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
      }
      else {
        FAsyncTaskBase::Start
                  ((FAsyncTaskBase *)this_01,true,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
      }
    }
  }
  else {
    if ((pIVar5 == (ISoundGenerator *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    uVar15 = (**(code **)(pIVar5->_padding_ + 0x38))(pIVar5);
    if (uVar15 == 0) {
      uVar15 = uVar12;
    }
    pFVar17 = ::operator_new(0x18);
    if (pFVar17 == (FSynchronizedProceduralDecodeHandle *)0x0) goto LAB_146517296;
    pFVar17 = FSynchronizedProceduralDecodeHandle::FSynchronizedProceduralDecodeHandle
                        (pFVar17,&local_c8,uVar15);
  }
  this->AsyncRealtimeAudioTask = (IAudioTask *)pFVar17;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SoundGenerator.SharedReferenceCount.ReferenceController);
LAB_1465175a1:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return false;
}

// SetCachedRealtimeFirstBuffers @ 14651f190

void __thiscall
Audio::FMixerSourceBuffer::SetCachedRealtimeFirstBuffers
          (FMixerSourceBuffer *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = &this->CachedRealtimeFirstBuffer;
  if (pTVar1 != param_1) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CachedRealtimeFirstBuffer).ArrayNum = param_1->ArrayNum;
    (this->CachedRealtimeFirstBuffer).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return;
}

// SetDecoder @ 14651f4c0

void __thiscall
Audio::FMixerSourceBuffer::SetDecoder(FMixerSourceBuffer *this,ICompressedAudioInfo *param_1)

{
  if (this->DecompressionState == (ICompressedAudioInfo *)0x0) {
    this->DecompressionState = param_1;
  }
  return;
}

// SetPCMData @ 146520a20

void __thiscall
Audio::FMixerSourceBuffer::SetPCMData(FMixerSourceBuffer *this,FRawPCMDataBuffer *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  if ((this->BufferType != PCM) && (this->BufferType != PCMPreview)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BufferType == EBufferType::PCM || BufferType == EBufferType::PCMPreview",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                       ,0xa8,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar2 = param_1->DataSize;
  iVar3 = param_1->LoopCount;
  (this->RawPCMDataBuffer).Data = param_1->Data;
  (this->RawPCMDataBuffer).DataSize = uVar2;
  (this->RawPCMDataBuffer).LoopCount = iVar3;
  uVar2 = param_1->NumSamples;
  (this->RawPCMDataBuffer).CurrentSample = param_1->CurrentSample;
  (this->RawPCMDataBuffer).NumSamples = uVar2;
  return;
}

// SetRelativeRenderCost @ 146520c30

void __thiscall
Audio::FMixerSourceBuffer::SetRelativeRenderCost(FMixerSourceBuffer *this,float param_1)

{
  this->RelativeRenderCost = (atomic<float>)param_1;
  return;
}

// SubmitBuffer @ 146526c80

void __thiscall
Audio::FMixerSourceBuffer::SubmitBuffer
          (FMixerSourceBuffer *this,TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  
  this->NumBuffersQeueued = this->NumBuffersQeueued + 1;
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    (pTVar3->Item).Object = param_1->Object;
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    (pTVar3->Item).SharedReferenceCount.ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (this->BufferQueue).Head;
    (this->BufferQueue).Head = pTVar3;
    pTVar2->NextNode = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SubmitInitialPCMBuffers @ 146526cf0

void __thiscall Audio::FMixerSourceBuffer::SubmitInitialPCMBuffers(FMixerSourceBuffer *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType *pFVar3;
  undefined8 *puVar4;
  float *pfVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uStack_2c;
  TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> local_28;
  TArrayView<float,int> local_18;
  
  this->CurrentBuffer = 0;
  uVar8 = (this->RawPCMDataBuffer).DataSize;
  (this->RawPCMDataBuffer).NumSamples = uVar8 >> 1;
  (this->RawPCMDataBuffer).CurrentSample = 0;
  if (((this->RawPCMDataBuffer).Data != (uchar *)0x0) && (uVar8 != 0)) {
    uVar8 = this->NumChannels * 0x12c0;
    (this->RawPCMDataBuffer).LoopCount = -(uint)(this->LoopingMode != LOOP_Never);
    if ((this->SourceVoiceBuffers).ArrayNum < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar2 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
    if (*(longlong *)pFVar2 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar3 = *(ForAnyElementType **)pFVar2;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    iVar1 = *(int *)((longlong)&pFVar3[1].Data + 4);
    *(undefined4 *)&pFVar3[1].Data = 0;
    if (iVar1 < (int)uVar8) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar8,pFVar3,0,(int *)((longlong)&pFVar3[1].Data + 4));
    }
    if ((this->SourceVoiceBuffers).ArrayNum < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar2 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
    if (*(longlong *)pFVar2 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
              (*(TArray<float,TAlignedHeapAllocator<16>_> **)pFVar2,uVar8);
    if ((this->SourceVoiceBuffers).ArrayNum < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar2 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
    if (*(longlong *)pFVar2 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    puVar4 = *(undefined8 **)pFVar2;
    pfVar5 = (float *)*puVar4;
    iVar1 = *(int *)(puVar4 + 1);
    if (iVar1 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_18._12_4_ = uStack_2c;
    local_18.ArrayNum = iVar1;
    local_18.DataPtr = pfVar5;
    FRawPCMDataBuffer::GetNextBuffer(&this->RawPCMDataBuffer,&local_18,uVar8);
    if ((this->SourceVoiceBuffers).ArrayNum < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar2 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
    local_28.Object = *(TArray<float,TAlignedHeapAllocator<16>_> **)pFVar2;
    local_28.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar2 + 8);
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SubmitBuffer(this,&local_28);
    this->CurrentBuffer = 1;
  }
  return;
}

// SubmitInitialRealtimeBuffers @ 146526fb0

void __thiscall Audio::FMixerSourceBuffer::SubmitInitialRealtimeBuffers(FMixerSourceBuffer *this)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  float *pfVar5;
  float *pfVar6;
  TReferenceControllerBase<1> *pTVar7;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar8;
  TNode *pTVar9;
  code *pcVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  TNode *pTVar14;
  atomic<int> *paVar15;
  int iVar16;
  atomic<int> *paVar17;
  FScriptContainerElement *pFVar18;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78;
  TArrayView<short_const_,int> local_68;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<float,int> local_48;
  TArrayView<short_const_,int> local_38;
  
  if (this->bDirectRendering != 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("!bDirectRendering",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioMixerSourceBuffer.cpp"
                        ,0x185,L"");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  uVar1 = *(undefined4 *)&this->field_0x128;
  this->CurrentBuffer = 0;
  this->bPlayedCachedBuffer = 0;
  if ((ZPULL(uVar1,3,1) == 0) && (0 < (this->CachedRealtimeFirstBuffer).ArrayNum)) {
    iVar16 = this->NumPrecacheFrames * this->NumChannels;
    *(uint *)&this->field_0x128 = uVar1 & 0xfffffffb | 4;
    if ((this->SourceVoiceBuffers).ArrayNum < 1) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pFVar2 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
    if (*(longlong *)pFVar2 == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pFVar3 = *(ForAnyElementType **)pFVar2;
    iVar13 = *(int *)((longlong)&pFVar3[1].Data + 4);
    *(undefined4 *)&pFVar3[1].Data = 0;
    if (iVar13 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,pFVar3,0,(int *)((longlong)&pFVar3[1].Data + 4));
    }
    if ((this->SourceVoiceBuffers).ArrayNum < 1) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pFVar2 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
    if (*(longlong *)pFVar2 == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pFVar3 = *(ForAnyElementType **)pFVar2;
    iVar13 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                       (4,4,iVar16,pFVar3,(int *)(pFVar3 + 1),(int *)((longlong)&pFVar3[1].Data + 4)
                       );
    memset(pFVar3->Data + (longlong)iVar13 * 4,0,(longlong)iVar16 << 2);
    if ((this->SourceVoiceBuffers).ArrayNum < 2) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pFVar2 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
    if (*(longlong *)(pFVar2 + 0x10) == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pFVar3 = *(ForAnyElementType **)(pFVar2 + 0x10);
    iVar13 = *(int *)((longlong)&pFVar3[1].Data + 4);
    *(undefined4 *)&pFVar3[1].Data = 0;
    if (iVar13 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,pFVar3,0,(int *)((longlong)&pFVar3[1].Data + 4));
    }
    if ((this->SourceVoiceBuffers).ArrayNum < 2) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pFVar2 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
    if (*(longlong *)(pFVar2 + 0x10) == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pFVar3 = *(ForAnyElementType **)(pFVar2 + 0x10);
    iVar13 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                       (4,4,iVar16,pFVar3,(int *)(pFVar3 + 1),(int *)((longlong)&pFVar3[1].Data + 4)
                       );
    memset(pFVar3->Data + (longlong)iVar13 * 4,0,(longlong)iVar16 << 2);
    pFVar2 = (this->CachedRealtimeFirstBuffer).AllocatorInstance.Data;
    pFVar18 = pFVar2 + (uint)(iVar16 * 2);
    if ((this->SourceVoiceBuffers).ArrayNum < 1) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pFVar4 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
    if (*(longlong *)pFVar4 == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pfVar5 = (float *)**(undefined8 **)pFVar4;
    if ((this->SourceVoiceBuffers).ArrayNum < 2) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pFVar4 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
    if (*(longlong *)(pFVar4 + 0x10) == 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pfVar6 = (float *)**(undefined8 **)(pFVar4 + 0x10);
    if (iVar16 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    uVar1 = uStack_4c;
    if (iVar16 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    local_78._12_4_ = uVar1;
    local_78.ArrayNum = iVar16;
    local_68._12_4_ = uStack_7c;
    local_68.ArrayNum = iVar16;
    local_78.DataPtr = pfVar5;
    local_68.DataPtr = (short *)pFVar2;
    ArrayPcm16ToFloat(&local_68,&local_78);
    if (iVar16 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    uVar1 = uStack_4c;
    if (iVar16 < 0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    local_48._12_4_ = uVar1;
    local_48.ArrayNum = iVar16;
    local_38._12_4_ = uStack_4c;
    local_38.ArrayNum = iVar16;
    local_58 = pFVar18;
    iStack_50 = iVar16;
    local_48.DataPtr = pfVar6;
    local_38.DataPtr = (short *)pFVar18;
    ArrayPcm16ToFloat(&local_38,&local_48);
    if ((this->SourceVoiceBuffers).ArrayNum < 1) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pFVar2 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
    paVar15 = (atomic<int> *)&DAT_00000008;
    pTVar7 = *(TReferenceControllerBase<1> **)(pFVar2 + 8);
    pTVar8 = *(TArray<float,TAlignedHeapAllocator<16>_> **)pFVar2;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      paVar17 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar17 = &pTVar7->SharedReferenceCount;
      LOCK();
      *paVar17 = (atomic<int>)((int)*paVar17 + 1);
      UNLOCK();
    }
    this->NumBuffersQeueued = this->NumBuffersQeueued + 1;
    pTVar14 = ::operator_new(0x18);
    if (pTVar14 != (TNode *)0x0) {
      pTVar14->NextNode = (TNode *)0x0;
      (pTVar14->Item).Object = pTVar8;
      (pTVar14->Item).SharedReferenceCount.ReferenceController = pTVar7;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar17 = (atomic<int>)((int)*paVar17 + 1);
        UNLOCK();
      }
      pTVar9 = (this->BufferQueue).Head;
      (this->BufferQueue).Head = pTVar14;
      pTVar9->NextNode = pTVar14;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    if ((this->SourceVoiceBuffers).ArrayNum < 2) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pFVar2 = (this->SourceVoiceBuffers).AllocatorInstance.Data;
    pTVar7 = *(TReferenceControllerBase<1> **)(pFVar2 + 0x18);
    pTVar8 = *(TArray<float,TAlignedHeapAllocator<16>_> **)(pFVar2 + 0x10);
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      paVar15 = &pTVar7->SharedReferenceCount;
      LOCK();
      *paVar15 = (atomic<int>)((int)*paVar15 + 1);
      UNLOCK();
    }
    this->NumBuffersQeueued = this->NumBuffersQeueued + 1;
    pTVar14 = ::operator_new(0x18);
    if (pTVar14 != (TNode *)0x0) {
      pTVar14->NextNode = (TNode *)0x0;
      (pTVar14->Item).Object = pTVar8;
      (pTVar14->Item).SharedReferenceCount.ReferenceController = pTVar7;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar15 = (atomic<int>)((int)*paVar15 + 1);
        UNLOCK();
      }
      pTVar9 = (this->BufferQueue).Head;
      (this->BufferQueue).Head = pTVar14;
      pTVar9->NextNode = pTVar14;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    this->CurrentBuffer = 2;
    return;
  }
  if (this->bIsBus == 0) {
    ProcessRealTimeSource(this);
  }
  return;
}

// SubmitRealTimeSourceData @ 1465276b0

void __thiscall
Audio::FMixerSourceBuffer::SubmitRealTimeSourceData(FMixerSourceBuffer *this,bool param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> local_18;
  
  if (param_1) {
    if (this->LoopingMode == LOOP_Never) {
      this->bBufferFinished = 1;
    }
    else if (this->LoopingMode == LOOP_WithNotification) {
      this->bLoopCallback = 1;
    }
  }
  uVar1 = this->CurrentBuffer;
  uVar4 = 0;
  if ((int)uVar1 < (this->SourceVoiceBuffers).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = (this->SourceVoiceBuffers).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
  if (*(longlong *)pFVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (0 < *(int *)(*(longlong *)pFVar5 + 8)) {
    uVar1 = this->CurrentBuffer;
    uVar4 = 0;
    if ((int)uVar1 < (this->SourceVoiceBuffers).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar5 = (this->SourceVoiceBuffers).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10;
    local_18.Object = *(TArray<float,TAlignedHeapAllocator<16>_> **)pFVar5;
    local_18.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar5 + 8);
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SubmitBuffer(this,&local_18);
  }
  return;
}

// UpdateCPUCoreUtilization @ 14652b590

void __thiscall
Audio::FMixerSourceBuffer::UpdateCPUCoreUtilization
          (FMixerSourceBuffer *this,double param_1,double param_2)

{
  atomic<double> aVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = __real_3ff0000000000000;
  if (0.0 < param_2) {
    dVar4 = __real_3ff0000000000000 / param_2;
    dVar3 = dVar4;
    if (dVar4 <= __real_3ff0000000000000) {
      dVar3 = __real_3ff0000000000000;
    }
    aVar1 = (atomic<double>)(dVar4 * param_1);
    dVar3 = exp(__real_c00921fb60000000 / dVar3);
    if (__real_3feffffffaa19c47 <= dVar3) {
      dVar3 = __real_3feffffffaa19c47;
    }
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    if (0.0 < (double)this->CPUCoreUtilization) {
      aVar1 = (atomic<double>)
              ((double)aVar1 * (dVar2 - dVar3) + dVar3 * (double)this->CPUCoreUtilization);
    }
    this->CPUCoreUtilization = aVar1;
  }
  return;
}

