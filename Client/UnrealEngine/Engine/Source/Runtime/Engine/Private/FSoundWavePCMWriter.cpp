// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// <lambda_invoker_cdecl> @ 1484a5f30

void __cdecl
`Audio::FSoundWavePCMWriter::SynchronouslyWriteToWavFile'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (USoundWave *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 1484a5f40

void __cdecl
`Audio::FSoundWavePCMWriter::SynchronouslyWriteSoundWave'::__l60::<lambda_1>::<lambda_invoker_cdecl>
          (USoundWave *param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 1484a5f50

void __cdecl
`Audio::FSoundWavePCMWriter::SynchronouslyWriteSoundWave'::__l62::<lambda_2>::<lambda_invoker_cdecl>
          (USoundWave *param_1)

{
  return;
}

// <lambda_1> @ 1484b9670

<lambda_1> * __thiscall
`Audio::FSoundWavePCMWriter::BeginWriteToSoundWave'::__l2::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  USoundWave *pUVar3;
  undefined8 *puVar4;
  
  *(FSoundWavePCMWriter **)this = param_1->__this;
  lVar1 = *(longlong *)&param_1->OnSuccess;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(longlong *)((longlong)this + 0x10) = lVar1;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->OnSuccess).field_0x28;
    puVar4 = (undefined8 *)&(param_1->OnSuccess).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar4 = puVar2;
    }
    (**(code **)*puVar4)();
  }
  pUVar3 = (param_1->InSoundWaveTransformationTarget).field0_0x0.DebugPtr;
  *(USoundWave **)((longlong)this + 0x40) = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (USoundWave *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  return this;
}

// FSoundWavePCMWriter @ 1484bc350

FSoundWavePCMWriter * __thiscall
Audio::FSoundWavePCMWriter::FSoundWavePCMWriter(FSoundWavePCMWriter *this,int param_1)

{
  this->ChunkSize = param_1;
  (this->CurrentBuffer).RawPCMData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentBuffer).RawPCMData.ArrayNum = 0;
  (this->CurrentBuffer).RawPCMData.ArrayMax = 0;
  (this->CurrentBuffer).NumSamples = 0;
  (this->CurrentBuffer).NumFrames = 0;
  (this->CurrentBuffer).NumChannels = 0;
  (this->CurrentBuffer).SampleRate = 0;
  (this->CurrentBuffer).SampleDuration = 0.0;
  this->CurrentSoundWave = (USoundWave *)0x0;
  this->CurrentState = Idle;
  (this->AbsoluteFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AbsoluteFilePath).Data.ArrayNum = 0;
  (this->AbsoluteFilePath).Data.ArrayMax = 0;
  this->bWasPreviouslyAddedToRoot = false;
  (this->CurrentOperation).Ptr = (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0;
  (this->SerializedWavData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SerializedWavData).ArrayNum = 0;
  (this->SerializedWavData).ArrayMax = 0;
  (this->Progress).Counter = 0;
  this->CurrentPackage = (UPackage *)0x0;
  return this;
}

// ~FSoundWavePCMWriter @ 1484bdf90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall Audio::FSoundWavePCMWriter::~FSoundWavePCMWriter(FSoundWavePCMWriter *this)

{
  int iVar1;
  FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *pFVar2;
  FQueuedThreadPool *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  FUObjectItem *this_00;
  
  pFVar2 = (this->CurrentOperation).Ptr;
  if (pFVar2 == (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0) goto LAB_1484be03b;
  pFVar3 = (FQueuedThreadPool *)pFVar2->_padding_;
  if (pFVar3 == (FQueuedThreadPool *)0x0) {
LAB_1484be015:
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)(this->CurrentOperation).Ptr,true,false);
  }
  else {
    cVar6 = (**(code **)((longlong)*pFVar3 + 0x20))(pFVar3,pFVar2);
    iVar1 = ((FThreadSafeCounter *)&pFVar2->_padding_)->Counter;
    if (cVar6 == '\0') {
      if (iVar1 != 0) {
        (**(code **)(pFVar2->_padding_ + 0x40))(pFVar2);
      }
      goto LAB_1484be015;
    }
    if (iVar1 != 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorkNotFinishedCounter.GetValue() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                         ,0x1e8,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    ((FThreadSafeCounter *)&pFVar2->_padding_)->Counter =
         ((FThreadSafeCounter *)&pFVar2->_padding_)->Counter + -1;
    UNLOCK();
    FAsyncTaskBase::FinishThreadedWork((FAsyncTaskBase *)pFVar2);
    pFVar2->_padding_ = 0;
  }
  pFVar2 = (this->CurrentOperation).Ptr;
  if (pFVar2 != (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0) {
    (this->CurrentOperation).Ptr = (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0;
    (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,1);
  }
LAB_1484be03b:
  this->CurrentState = Cancelled;
  if (this->CurrentSoundWave != (USoundWave *)0x0) {
    bVar7 = UObjectBase::IsValidLowLevel((UObjectBase *)this->CurrentSoundWave);
    if ((bVar7) && (this->bWasPreviouslyAddedToRoot == false)) {
      this_00 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&this->CurrentSoundWave->_padding_ + 4)
                          );
      FUObjectItem::ClearRootFlags(this_00,RootSet);
    }
  }
  this->CurrentSoundWave = (USoundWave *)0x0;
  this->CurrentPackage = (UPackage *)0x0;
  LOCK();
  (this->Progress).Counter = 0;
  UNLOCK();
  this->CurrentState = Idle;
  pFVar4 = (this->SerializedWavData).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar2 = (this->CurrentOperation).Ptr;
  if (pFVar2 != (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0) {
    (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,1);
  }
  pFVar4 = (this->AbsoluteFilePath).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->CurrentBuffer).RawPCMData.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// ApplyBufferToSoundWave @ 1484c3160

void __thiscall Audio::FSoundWavePCMWriter::ApplyBufferToSoundWave(FSoundWavePCMWriter *this)

{
  uchar *puVar1;
  
  USoundWave::InvalidateCompressedData(this->CurrentSoundWave,false,false);
  USoundWave::SetSampleRate(this->CurrentSoundWave,(this->CurrentBuffer).SampleRate,false);
  this->CurrentSoundWave->NumChannels = (this->CurrentBuffer).NumChannels;
  this->CurrentSoundWave->RawPCMDataSize = (this->CurrentBuffer).NumSamples * 2;
  *(float *)((longlong)&this->CurrentSoundWave->_padding_ + 4) =
       (float)(this->CurrentBuffer).NumFrames / (float)(this->CurrentBuffer).SampleRate;
  *(float *)((longlong)&this->CurrentSoundWave->_padding_ + 4) =
       (float)(this->CurrentBuffer).NumSamples;
  puVar1 = this->CurrentSoundWave->RawPCMData;
  if (puVar1 != (uchar *)0x0) {
    FMemory::Free(puVar1);
    this->CurrentSoundWave->RawPCMData = (uchar *)0x0;
  }
  puVar1 = FMemory::Malloc((longlong)this->CurrentSoundWave->RawPCMDataSize,0);
  this->CurrentSoundWave->RawPCMData = puVar1;
  memcpy(this->CurrentSoundWave->RawPCMData,(this->CurrentBuffer).RawPCMData.AllocatorInstance.Data,
         (longlong)this->CurrentSoundWave->RawPCMDataSize);
  return;
}

// BeginGeneratingSoundWaveFromBuffer @ 1484c35f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
Audio::FSoundWavePCMWriter::BeginGeneratingSoundWaveFromBuffer
          (FSoundWavePCMWriter *this,TSampleBuffer<short> *param_1,USoundWave *param_2,
          TFunction<void___cdecl(USoundWave_const_*)> *param_3)

{
  ESoundWavePCMWriterState EVar1;
  bool bVar2;
  UObject *pUVar3;
  USoundWave *pUVar4;
  FUObjectItem *pFVar5;
  FAudioDeviceManager *this_00;
  FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *pFVar6;
  TStatId TVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *pFVar10;
  TFunction<void___cdecl(USoundWave_const_*)> local_58;
  
  bVar2 = true;
  pFVar10 = (this->CurrentOperation).Ptr;
  if (pFVar10 != (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0) {
    if (((FThreadSafeCounter *)&pFVar10->_padding_)->Counter == 0) {
      FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar10,false);
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  EVar1 = this->CurrentState;
  if (((EVar1 == Suceeded) || (((EVar1 & ~Cancelled) == Idle && (EVar1 != Generating)))) && (bVar2))
  {
    this->CurrentState = Generating;
    if (param_2 == (USoundWave *)0x0) {
      pUVar3 = GetTransientPackageAsObject();
      pUVar4 = NewObject<USoundWave>(pUVar3);
      this->CurrentSoundWave = pUVar4;
      pFVar5 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4));
      FUObjectItem::SetRootFlags(pFVar5,RootSet);
    }
    else {
      this->CurrentSoundWave = param_2;
      pFVar5 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&param_2->_padding_ + 4));
      this->bWasPreviouslyAddedToRoot =
           (bool)((byte)((ulonglong)((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1e) & 1);
      pFVar5 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&this->CurrentSoundWave->_padding_ + 4))
      ;
      FUObjectItem::SetRootFlags(pFVar5,RootSet);
      this_00 = UEngine::GetAudioDeviceManager(GEngine);
      if (this_00 != (FAudioDeviceManager *)0x0) {
        FAudioDeviceManager::StopSoundsUsingResource
                  (this_00,this->CurrentSoundWave,
                   (TArray<UAudioComponent_*,TSizedDefaultAllocator<32>_> *)0x0);
      }
    }
    TSampleBuffer<short>::operator=(&this->CurrentBuffer,param_1);
    if (2 < (this->CurrentBuffer).NumChannels) {
      TSampleBuffer<short>::MixBufferToChannels(&this->CurrentBuffer,2);
    }
    pFVar6 = ::operator_new(0xe0);
    pFVar10 = (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0;
    if (pFVar6 != (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0) {
      pFVar6->_padding_ = 0;
      pFVar6->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
      pFVar6->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
      pFVar6->_padding_ = (longlong)&___7__FAsyncTask_VFAsyncSoundWavePCMWriteWorker_Audio____6B_;
      *(undefined4 *)&pFVar6->_padding_ = 0;
      pFVar6->_padding_ = 0;
      pFVar6->_padding_ = 0;
      *(undefined2 *)&pFVar6->_padding_ = 3;
      pFVar6->_padding_ = -1;
      pFVar6->_padding_ = 0;
      local_58._0_8_ = *(undefined8 *)param_3;
      local_58._40_8_ = 0;
      if (local_58._0_8_ != 0) {
        puVar8 = (undefined8 *)&param_3->field_0x10;
        if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
          puVar8 = *(undefined8 **)&param_3->field_0x28;
        }
        (**(code **)*puVar8)(puVar8,&local_58.field_0x10);
      }
      FAsyncSoundWavePCMWriteWorker::FAsyncSoundWavePCMWriteWorker
                (&pFVar6->Task,this,GenerateAndWriteSoundWave,&local_58);
      TVar7 = FAsyncSoundWavePCMWriteWorker::GetStatId(&pFVar6->Task);
      pFVar6->_padding_ = (longlong)(TVar7.StatIdPtr)->Name;
      pFVar10 = pFVar6;
    }
    pFVar6 = (this->CurrentOperation).Ptr;
    if ((pFVar6 != pFVar10) &&
       ((this->CurrentOperation).Ptr = pFVar10,
       pFVar6 != (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0)) {
      (**(code **)(pFVar6->_padding_ + 0x28))();
    }
    FAsyncTaskBase::Start
              ((FAsyncTaskBase *)(this->CurrentOperation).Ptr,false,GThreadPool,Normal,None,-1,
               (wchar_t *)0x0);
    if (*(longlong *)param_3 != 0) {
      plVar9 = (longlong *)&param_3->field_0x10;
      if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
        plVar9 = *(longlong **)&param_3->field_0x28;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    return true;
  }
  if (1 < (byte)LogAudio._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
  }
  if (*(longlong *)param_3 != 0) {
    plVar9 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return false;
}

// BeginWriteToSoundWave @ 1484c3880

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FSoundWavePCMWriter::BeginWriteToSoundWave
          (FSoundWavePCMWriter *this,FString *param_1,TSampleBuffer<short> *param_2,FString *param_3
          ,TFunction<void___cdecl(USoundWave_const_*)> *param_4,TObjectPtr<USoundWave> param_5)

{
  ESoundWavePCMWriterState EVar1;
  FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *this_00;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FStaticBasicLogRecord *pFVar4;
  longlong *plVar5;
  
  this_00 = (this->CurrentOperation).Ptr;
  bVar3 = true;
  if (this_00 != (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0) {
    if (((FThreadSafeCounter *)&this_00->_padding_)->Counter == 0) {
      FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this_00,false);
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  EVar1 = this->CurrentState;
  if (((EVar1 == Suceeded) || (((EVar1 & ~Cancelled) == Idle && (EVar1 != Generating)))) && (bVar3))
  {
    if ((byte)LogAudio._0_1_ < 2) goto LAB_1484c38fc;
    pFVar4 = &::LOG_Static;
  }
  else {
    if ((byte)LogAudio._0_1_ < 2) goto LAB_1484c38fc;
    pFVar4 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar4,(FLogCategoryBase *)&LogAudio);
LAB_1484c38fc:
  pFVar2 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (*(longlong *)param_4 != 0) {
    plVar5 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return false;
}

// BeginWriteToWavFile @ 1484c3940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001484c3ab0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff68 : 0x0001484c3ab4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FSoundWavePCMWriter::BeginWriteToWavFile
          (FSoundWavePCMWriter *this,TSampleBuffer<short> *param_1,FString *param_2,FString *param_3
          ,TFunction<void___cdecl(void)> *param_4)

{
  ESoundWavePCMWriterState EVar1;
  code *pcVar2;
  bool bVar3;
  FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *pFVar4;
  TStatId TVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *pFVar8;
  undefined1 auStackY_f8 [32];
  longlong local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong *local_80;
  code *local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  bVar3 = true;
  pFVar8 = (this->CurrentOperation).Ptr;
  if (pFVar8 != (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0) {
    if (((FThreadSafeCounter *)&pFVar8->_padding_)->Counter == 0) {
      FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar8,false);
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  EVar1 = this->CurrentState;
  if (((EVar1 == Suceeded) || (((EVar1 & ~Cancelled) == Idle && (EVar1 != Generating)))) && (bVar3))
  {
    bVar3 = PrepWavFileOutput(this,param_1,param_2,param_3);
    local_a8 = *(longlong *)param_4;
    if (bVar3) {
      pFVar8 = (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0;
      local_80 = (longlong *)0x0;
      if (local_a8 != 0) {
        puVar6 = (undefined8 *)&param_4->field_0x10;
        if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
          puVar6 = *(undefined8 **)&param_4->field_0x28;
        }
        (**(code **)*puVar6)(puVar6,&local_98);
      }
      local_78 = (code *)0x0;
      local_50 = FMemory::Malloc(0x40,0x10);
      *local_50 = (longlong)
                  &UE::Core::Private::Function::
                   TFunction_OwnedObject<`Audio::FSoundWavePCMWriter::BeginWriteToWavFile'::`2'::<lambda_1>,0,1>
                   ::_vftable_;
      plVar7 = local_50 + 2;
      *plVar7 = local_a8;
      local_50[7] = (longlong)local_80;
      local_80 = (longlong *)0x0;
      *(undefined4 *)(local_50 + 4) = local_98;
      *(undefined4 *)((longlong)local_50 + 0x24) = uStack_94;
      *(undefined4 *)(local_50 + 5) = uStack_90;
      *(undefined4 *)((longlong)local_50 + 0x2c) = uStack_8c;
      local_50[6] = local_88;
      if (*plVar7 != 0) {
        local_a8 = 0;
      }
      if (plVar7 != (longlong *)0x0) {
        local_78 = UE::Core::Private::Function::
                   TFunctionRefCaller<`Audio::FSoundWavePCMWriter::BeginWriteToWavFile'::__l2::<lambda_1>,void,USoundWave_const_*>
                   ::Call;
      }
      if (local_a8 != 0) {
        (**(code **)(CONCAT44(uStack_94,local_98) + 0x10))();
      }
      pFVar4 = ::operator_new(0xe0);
      pcVar2 = local_78;
      if (pFVar4 != (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0) {
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
        pFVar4->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
        pFVar4->_padding_ = (longlong)&___7__FAsyncTask_VFAsyncSoundWavePCMWriteWorker_Audio____6B_;
        *(undefined4 *)&pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        *(undefined2 *)&pFVar4->_padding_ = 3;
        pFVar4->_padding_ = -1;
        pFVar4->_padding_ = 0;
        local_80 = (longlong *)0x0;
        if (local_78 != (code *)0x0) {
          plVar7 = local_68;
          if (local_50 != (longlong *)0x0) {
            plVar7 = local_50;
          }
          (**(code **)*plVar7)(plVar7,&local_98);
        }
        (pFVar4->Task).Writer = this;
        (pFVar4->Task).TaskType = WriteWavFile;
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)&(pFVar4->Task).NonAbandonableSection,4000);
        *(code **)&(pFVar4->Task).CallbackOnSuccess = pcVar2;
        *(undefined8 *)&(pFVar4->Task).CallbackOnSuccess.field_0x28 = 0;
        if (pcVar2 != (code *)0x0) {
          plVar7 = (longlong *)&local_98;
          if (local_80 != (longlong *)0x0) {
            plVar7 = local_80;
          }
          (**(code **)*plVar7)();
          if (pcVar2 != (code *)0x0) {
            plVar7 = (longlong *)&local_98;
            if (local_80 != (longlong *)0x0) {
              plVar7 = local_80;
            }
            (**(code **)(*plVar7 + 0x10))();
          }
        }
        TVar5 = FAsyncSoundWavePCMWriteWorker::GetStatId(&pFVar4->Task);
        pFVar4->_padding_ = (longlong)(TVar5.StatIdPtr)->Name;
        pFVar8 = pFVar4;
      }
      pFVar4 = (this->CurrentOperation).Ptr;
      if ((pFVar4 != pFVar8) &&
         ((this->CurrentOperation).Ptr = pFVar8,
         pFVar4 != (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0)) {
        (**(code **)(pFVar4->_padding_ + 0x28))();
      }
      FAsyncTaskBase::Start
                ((FAsyncTaskBase *)(this->CurrentOperation).Ptr,false,GThreadPool,Normal,None,-1,
                 (wchar_t *)0x0);
      if (local_78 != (code *)0x0) {
        plVar7 = local_68;
        if (local_50 != (longlong *)0x0) {
          plVar7 = local_50;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (*(longlong *)param_4 != 0) {
        plVar7 = (longlong *)&param_4->field_0x10;
        if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
          plVar7 = *(longlong **)&param_4->field_0x28;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      return true;
    }
  }
  else {
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    local_a8 = *(longlong *)param_4;
  }
  if (local_a8 != 0) {
    plVar7 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return false;
}

// CancelWrite @ 1484c6a60

void __thiscall Audio::FSoundWavePCMWriter::CancelWrite(FSoundWavePCMWriter *this)

{
  int iVar1;
  FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *pFVar2;
  FQueuedThreadPool *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  
  pFVar2 = (this->CurrentOperation).Ptr;
  if (pFVar2 == (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0) {
    this->CurrentState = Cancelled;
    return;
  }
  pFVar3 = (FQueuedThreadPool *)pFVar2->_padding_;
  if (pFVar3 != (FQueuedThreadPool *)0x0) {
    cVar5 = (**(code **)((longlong)*pFVar3 + 0x20))(pFVar3,pFVar2);
    iVar1 = ((FThreadSafeCounter *)&pFVar2->_padding_)->Counter;
    if (cVar5 != '\0') {
      if (iVar1 != 1) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("WorkNotFinishedCounter.GetValue() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                           ,0x1e8,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      LOCK();
      ((FThreadSafeCounter *)&pFVar2->_padding_)->Counter =
           ((FThreadSafeCounter *)&pFVar2->_padding_)->Counter + -1;
      UNLOCK();
      FAsyncTaskBase::FinishThreadedWork((FAsyncTaskBase *)pFVar2);
      pFVar2->_padding_ = 0;
      goto LAB_1484c6af0;
    }
    if (iVar1 != 0) {
      (**(code **)(pFVar2->_padding_ + 0x40))(pFVar2);
    }
  }
  FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)(this->CurrentOperation).Ptr,true,false);
LAB_1484c6af0:
  pFVar2 = (this->CurrentOperation).Ptr;
  if (pFVar2 != (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0) {
    (this->CurrentOperation).Ptr = (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0;
    (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,1);
  }
  this->CurrentState = Cancelled;
  return;
}

// CheckStatus @ 1484c6b30

float __thiscall
Audio::FSoundWavePCMWriter::CheckStatus(FSoundWavePCMWriter *this,ESoundWavePCMWriterState *param_1)

{
  if (param_1 != (ESoundWavePCMWriterState *)0x0) {
    *param_1 = this->CurrentState;
  }
  return (float)(this->Progress).Counter / (float)((this->SerializedWavData).ArrayNum + 1);
}

// CreateDirectoryIfNeeded @ 1484ce770

bool __thiscall
Audio::FSoundWavePCMWriter::CreateDirectoryIfNeeded(FSoundWavePCMWriter *this,FString *param_1)

{
  char cVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  this_00 = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
  pwVar4 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  cVar1 = (**(code **)((longlong)*pIVar2 + 0x118))(pIVar2,pwVar3);
  if (cVar1 == '\0') {
    if ((param_1->Data).ArrayNum != 0) {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    cVar1 = (**(code **)((longlong)*pIVar2 + 0x200))(pIVar2,pwVar4);
    return cVar1 != '\0';
  }
  return true;
}

// GetFinishedSoundWave @ 1484d8640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USoundWave * __thiscall Audio::FSoundWavePCMWriter::GetFinishedSoundWave(FSoundWavePCMWriter *this)

{
  ESoundWavePCMWriterState EVar1;
  FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *this_00;
  bool bVar2;
  FUObjectItem *this_01;
  UObject *pUVar3;
  USoundWave *pUVar4;
  
  bVar2 = true;
  this_00 = (this->CurrentOperation).Ptr;
  if (this_00 != (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0) {
    if (((FThreadSafeCounter *)&this_00->_padding_)->Counter == 0) {
      FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this_00,false);
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  EVar1 = this->CurrentState;
  if (((EVar1 == Suceeded) || (((EVar1 & ~Cancelled) == Idle && (EVar1 != Generating)))) && (bVar2))
  {
    if (EVar1 == Suceeded) {
      if (this->CurrentSoundWave == (USoundWave *)0x0) {
        pUVar3 = GetTransientPackageAsObject();
        pUVar4 = NewObject<USoundWave>(pUVar3);
        this->CurrentSoundWave = pUVar4;
        ApplyBufferToSoundWave(this);
      }
      else if (this->bWasPreviouslyAddedToRoot == false) {
        this_01 = FUObjectArray::IndexToObject
                            (&GUObjectArray,
                             *(int *)((longlong)&this->CurrentSoundWave->_padding_ + 4));
        FUObjectItem::ClearRootFlags(this_01,RootSet);
        return this->CurrentSoundWave;
      }
      return this->CurrentSoundWave;
    }
    if (2 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
  }
  else if (2 < (byte)LogAudio._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    return (USoundWave *)0x0;
  }
  return (USoundWave *)0x0;
}

// IsDone @ 1484e0790

bool __thiscall Audio::FSoundWavePCMWriter::IsDone(FSoundWavePCMWriter *this)

{
  ESoundWavePCMWriterState EVar1;
  FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *this_00;
  bool bVar2;
  
  bVar2 = true;
  this_00 = (this->CurrentOperation).Ptr;
  if (this_00 != (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0) {
    if (((FThreadSafeCounter *)&this_00->_padding_)->Counter == 0) {
      FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this_00,false);
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  EVar1 = this->CurrentState;
  if (((EVar1 == Suceeded) || (((EVar1 & ~Cancelled) == Idle && (EVar1 != Generating)))) && (bVar2))
  {
    return true;
  }
  return false;
}

// PrepWavFileOutput @ 1484e5fb0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FSoundWavePCMWriter::PrepWavFileOutput
          (FSoundWavePCMWriter *this,TSampleBuffer<short> *param_1,FString *param_2,FString *param_3
          )

{
  FString *this_00;
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this_00 = &this->AbsoluteFilePath;
  bVar2 = FPaths::IsRelative(param_3);
  if (bVar2) {
    pFVar3 = FPaths::ProjectSavedDir();
    ::FString::ConcatFC(&local_38,pFVar3,L"BouncedWavFiles/");
    ::FString::ConcatFF(&local_58,&local_38,param_3);
    if (this_00 != &local_58) {
      pFVar1 = (this_00->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this_00->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      (this->AbsoluteFilePath).Data.ArrayNum = local_58.Data.ArrayNum;
      (this->AbsoluteFilePath).Data.ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = FPaths::ConvertRelativePathToFull(&local_28,this_00);
    if (this_00 != pFVar3) {
      pFVar1 = (this_00->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this_00->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->AbsoluteFilePath).Data.ArrayNum = (pFVar3->Data).ArrayNum;
      (this->AbsoluteFilePath).Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    ::FString::operator=(this_00,param_3);
  }
  pFVar3 = &this->AbsoluteFilePath;
  FPaths::NormalizeDirectoryName(this_00);
  FPaths::CollapseRelativeDirectories(this_00,false);
  this->CurrentState = Generating;
  bVar2 = CreateDirectoryIfNeeded(this,this_00);
  if (bVar2) {
    ::FString::ConcatFC(&local_28,this_00,L"/");
    ::FString::ConcatFF(&local_38,&local_28,param_2);
    ::FString::ConcatFC(&local_48,&local_38,L".wav");
    if (pFVar3 != &local_48) {
      pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (pFVar3->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      (this->AbsoluteFilePath).Data.ArrayNum = local_48.Data.ArrayNum;
      (this->AbsoluteFilePath).Data.ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    TSampleBuffer<short>::operator=(&this->CurrentBuffer,param_1);
    bVar2 = true;
  }
  else {
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    this->CurrentState = Failed;
    bVar2 = false;
  }
  return bVar2;
}

// Reset @ 1484f19c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall Audio::FSoundWavePCMWriter::Reset(FSoundWavePCMWriter *this)

{
  int iVar1;
  FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *pFVar2;
  FQueuedThreadPool *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  FUObjectItem *this_00;
  
  pFVar2 = (this->CurrentOperation).Ptr;
  if (pFVar2 == (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0) goto LAB_1484f1a6b;
  pFVar3 = (FQueuedThreadPool *)pFVar2->_padding_;
  if (pFVar3 == (FQueuedThreadPool *)0x0) {
LAB_1484f1a45:
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)(this->CurrentOperation).Ptr,true,false);
  }
  else {
    cVar5 = (**(code **)((longlong)*pFVar3 + 0x20))(pFVar3,pFVar2);
    iVar1 = ((FThreadSafeCounter *)&pFVar2->_padding_)->Counter;
    if (cVar5 == '\0') {
      if (iVar1 != 0) {
        (**(code **)(pFVar2->_padding_ + 0x40))(pFVar2);
      }
      goto LAB_1484f1a45;
    }
    if (iVar1 != 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorkNotFinishedCounter.GetValue() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\AsyncWork.h"
                         ,0x1e8,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    ((FThreadSafeCounter *)&pFVar2->_padding_)->Counter =
         ((FThreadSafeCounter *)&pFVar2->_padding_)->Counter + -1;
    UNLOCK();
    FAsyncTaskBase::FinishThreadedWork((FAsyncTaskBase *)pFVar2);
    pFVar2->_padding_ = 0;
  }
  pFVar2 = (this->CurrentOperation).Ptr;
  if (pFVar2 != (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0) {
    (this->CurrentOperation).Ptr = (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0;
    (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,1);
  }
LAB_1484f1a6b:
  this->CurrentState = Cancelled;
  if (this->CurrentSoundWave != (USoundWave *)0x0) {
    bVar6 = UObjectBase::IsValidLowLevel((UObjectBase *)this->CurrentSoundWave);
    if ((bVar6) && (this->bWasPreviouslyAddedToRoot == false)) {
      this_00 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&this->CurrentSoundWave->_padding_ + 4)
                          );
      FUObjectItem::ClearRootFlags(this_00,RootSet);
    }
  }
  this->CurrentSoundWave = (USoundWave *)0x0;
  this->CurrentPackage = (UPackage *)0x0;
  LOCK();
  (this->Progress).Counter = 0;
  UNLOCK();
  this->CurrentState = Idle;
  return;
}

// SaveFinishedSoundWaveToPath @ 1484f3000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FSoundWavePCMWriter::SaveFinishedSoundWaveToPath
          (FSoundWavePCMWriter *this,FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  
  if (2 < (byte)LogAudio._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// SerializeBufferToWavFile @ 1484f8cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FSoundWavePCMWriter::SerializeBufferToWavFile(FSoundWavePCMWriter *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  wchar_t *pwVar7;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar8;
  longlong *plVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  wchar_t *pwVar15;
  int *piVar16;
  longlong lVar17;
  float fVar18;
  longlong in_stack_ffffffffffffffc8;
  undefined4 uVar19;
  
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  iVar11 = (this->CurrentBuffer).NumSamples;
  this->CurrentState = Generating;
  if (iVar11 == 0) {
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    this->CurrentState = Failed;
    return;
  }
  uVar13 = 0;
  if (0 < iVar11) {
    lVar17 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar13 < (this->CurrentBuffer).RawPCMData.ArrayNum) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if (uVar6 == 0) {
        in_stack_ffffffffffffffc8 = (longlong)(int)uVar13;
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
      sVar10 = *(short *)((this->CurrentBuffer).RawPCMData.AllocatorInstance.Data + lVar17);
      sVar5 = 0x7ffb;
      if (sVar10 < 0x7ffb) {
        sVar5 = sVar10;
      }
      sVar10 = -0x7ffb;
      if (-0x7ffb < sVar5) {
        sVar10 = sVar5;
      }
      uVar6 = 0;
      if ((int)uVar13 < (this->CurrentBuffer).RawPCMData.ArrayNum) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if (uVar6 == 0) {
        in_stack_ffffffffffffffc8 = (longlong)(int)uVar13;
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
      uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
      uVar13 = uVar13 + 1;
      *(short *)((this->CurrentBuffer).RawPCMData.AllocatorInstance.Data + lVar17) = sVar10;
      lVar17 = lVar17 + 2;
      iVar11 = (this->CurrentBuffer).NumSamples;
    } while ((int)uVar13 < iVar11);
  }
  iVar14 = (this->CurrentBuffer).SampleRate;
  pwVar7 = (wchar_t *)CONCAT44(uVar19,iVar14);
  SerializeWaveFile(&this->SerializedWavData,
                    (uchar *)(this->CurrentBuffer).RawPCMData.AllocatorInstance.Data,iVar11 * 2,
                    (this->CurrentBuffer).NumChannels,iVar14);
  pwVar15 = L"";
  if (5 < (byte)LogAudio._0_1_) {
    if ((this->AbsoluteFilePath).Data.ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(this->AbsoluteFilePath).Data.AllocatorInstance.Data;
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
  }
  piVar16 = &(this->SerializedWavData).ArrayNum;
  if (*piVar16 == 0) {
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
  }
  else {
    this->CurrentState = WritingToDisk;
    this_00 = FPlatformFileManager::Get();
    pIVar8 = FPlatformFileManager::GetPlatformFile(this_00);
    if ((this->AbsoluteFilePath).Data.ArrayNum != 0) {
      pwVar15 = (wchar_t *)(this->AbsoluteFilePath).Data.AllocatorInstance.Data;
    }
    plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x110))(pIVar8,pwVar15,0,0,pwVar7);
    if (plVar9 != (longlong *)0x0) {
      fVar18 = (float)*piVar16;
      iVar11 = -((int)ROUND(__real_bf000000 - (fVar18 + fVar18) / (float)this->ChunkSize) >> 1);
      if (5 < (byte)LogAudio._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      }
      iVar14 = 0;
      if (0 < iVar11) {
        do {
          iVar1 = this->ChunkSize;
          iVar12 = (this->SerializedWavData).ArrayNum - iVar1 * iVar14;
          if (iVar1 < iVar12) {
            iVar12 = iVar1;
          }
          cVar4 = (**(code **)(*plVar9 + 0x30))
                            (plVar9,(this->SerializedWavData).AllocatorInstance.Data +
                                    iVar1 * iVar14);
          if (cVar4 == '\0') {
            if (1 < (byte)LogAudio._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
            }
            (this->SerializedWavData).ArrayNum = 0;
            if ((this->SerializedWavData).ArrayMax < 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,0,&(this->SerializedWavData).AllocatorInstance,0,
                         &(this->SerializedWavData).ArrayMax);
            }
            (**(code **)*plVar9)(plVar9,1);
            goto LAB_1484f9064;
          }
          LOCK();
          (this->Progress).Counter = (this->Progress).Counter + iVar12;
          UNLOCK();
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar11);
      }
      (**(code **)*plVar9)(plVar9,1);
      if (5 < (byte)LogAudio._0_1_) {
        UE::Logging::Private::BasicLog<6>
                  ((FStaticBasicLogRecord *)&PTR_u_Succeeded_in_wr_151aef4a8,
                   (FLogCategoryBase *)&LogAudio);
      }
      this->CurrentState = Suceeded;
      return;
    }
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    (this->SerializedWavData).ArrayNum = 0;
    if ((this->SerializedWavData).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->SerializedWavData).AllocatorInstance,0,
                 &(this->SerializedWavData).ArrayMax);
    }
  }
LAB_1484f9064:
  this->CurrentState = Failed;
  return;
}

// SerializeSoundWaveToAsset @ 1484fa7e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall Audio::FSoundWavePCMWriter::SerializeSoundWaveToAsset(FSoundWavePCMWriter *this)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  longlong *local_res8;
  code *local_38 [2];
  undefined **local_28;
  USoundWave *local_20;
  undefined8 local_10;
  
  if ((this->CurrentSoundWave == (USoundWave *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentSoundWave != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SampleBufferIO.cpp"
                         ,0x217,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar5 = (this->CurrentBuffer).NumSamples;
  this->CurrentState = Generating;
  if (iVar5 == 0) {
    if (1 < (byte)LogAudio._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    }
    this->CurrentState = Failed;
    return;
  }
  (this->SerializedWavData).ArrayNum = 0;
  if ((this->SerializedWavData).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->SerializedWavData).AllocatorInstance,0,
               &(this->SerializedWavData).ArrayMax);
  }
  SerializeWaveFile(&this->SerializedWavData,
                    (uchar *)(this->CurrentBuffer).RawPCMData.AllocatorInstance.Data,
                    (this->CurrentBuffer).NumSamples * 2,(this->CurrentBuffer).NumChannels,
                    (this->CurrentBuffer).SampleRate);
  if (5 < (byte)LogAudio._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
  }
  FSharedBuffer::Clone(&local_res8,(ulong64)(this->SerializedWavData).AllocatorInstance.Data);
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SampleBufferIO.cpp"
                     ,0x22e,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`Audio::FSoundWavePCMWriter::SerializeSoundWaveToAsset'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_20 = this->CurrentSoundWave;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`Audio::FSoundWavePCMWriter::SerializeSoundWaveToAsset'::__l2::<lambda_1>,void>
                ::Call;
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
  this->CurrentState = Suceeded;
  if (local_res8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_res8 + 3;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*local_res8 + 0x10))(local_res8);
      local_res8[1] = 0;
      local_res8[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(local_res8 + 3);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar4 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
  }
  return;
}

// SynchronouslyWriteSoundWave @ 1484fd1a0

/* WARNING: Enum "Type": Some values do not have unique names */

USoundWave * __thiscall
Audio::FSoundWavePCMWriter::SynchronouslyWriteSoundWave
          (FSoundWavePCMWriter *this,TSampleBuffer<short> *param_1,FString *param_2,FString *param_3
          )

{
  ESoundWavePCMWriterState EVar1;
  bool bVar2;
  UObject *pUVar3;
  USoundWave *pUVar4;
  FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *pFVar5;
  TStatId TVar6;
  undefined ***pppuVar7;
  FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *pFVar8;
  undefined **local_28;
  code *local_20;
  undefined ***local_10;
  
  bVar2 = true;
  pFVar8 = (this->CurrentOperation).Ptr;
  if (pFVar8 != (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0) {
    if (((FThreadSafeCounter *)&pFVar8->_padding_)->Counter == 0) {
      FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar8,false);
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  EVar1 = this->CurrentState;
  if (((EVar1 == Suceeded) || (((EVar1 & ~Cancelled) == Idle && (EVar1 != Generating)))) && (bVar2))
  {
    this->CurrentState = Generating;
    pUVar3 = GetTransientPackageAsObject();
    pUVar4 = NewObject<USoundWave>(pUVar3);
    this->CurrentSoundWave = pUVar4;
    TSampleBuffer<short>::operator=(&this->CurrentBuffer,param_1);
    if (2 < (this->CurrentBuffer).NumChannels) {
      TSampleBuffer<short>::MixBufferToChannels(&this->CurrentBuffer,2);
    }
    pFVar5 = ::operator_new(0xe0);
    pFVar8 = (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0;
    if (pFVar5 != (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0) {
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = 0;
      pFVar5->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
      *(undefined4 *)&pFVar5->_padding_ = 0;
      pFVar5->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
      pFVar5->_padding_ = (longlong)&___7__FAsyncTask_VFAsyncSoundWavePCMWriteWorker_Audio____6B_;
      local_28 = &
                 ___7__TFunction_OwnedObject_P6AXPEBVUSoundWave___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      pFVar5->_padding_ = 0;
      *(undefined2 *)&pFVar5->_padding_ = 3;
      pFVar5->_padding_ = -1;
      pFVar5->_padding_ = 0;
      local_20 = `Audio::FSoundWavePCMWriter::SynchronouslyWriteSoundWave'::__l62::<lambda_2>::
                 <lambda_invoker_cdecl>;
      local_10 = (undefined ***)0x0;
      (pFVar5->Task).Writer = this;
      (pFVar5->Task).TaskType = GenerateSoundWave;
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&(pFVar5->Task).NonAbandonableSection,4000);
      *(code **)&(pFVar5->Task).CallbackOnSuccess =
           UE::Core::Private::Function::
           TFunctionRefCaller<void_(__cdecl*)(USoundWave_const_*),void,USoundWave_const_*>::Call;
      *(undefined8 *)&(pFVar5->Task).CallbackOnSuccess.field_0x28 = 0;
      pppuVar7 = &local_28;
      if (local_10 != (undefined ***)0x0) {
        pppuVar7 = local_10;
      }
      (*(code *)**pppuVar7)();
      pppuVar7 = &local_28;
      if (local_10 != (undefined ***)0x0) {
        pppuVar7 = local_10;
      }
      (*(code *)(*pppuVar7)[2])();
      TVar6 = FAsyncSoundWavePCMWriteWorker::GetStatId(&pFVar5->Task);
      pFVar5->_padding_ = (longlong)(TVar6.StatIdPtr)->Name;
      pFVar8 = pFVar5;
    }
    pFVar5 = (this->CurrentOperation).Ptr;
    if ((pFVar5 != pFVar8) &&
       ((this->CurrentOperation).Ptr = pFVar8,
       pFVar5 != (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0)) {
      (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5,1);
    }
    FAsyncTaskBase::Start
              ((FAsyncTaskBase *)(this->CurrentOperation).Ptr,true,GThreadPool,Normal,None,-1,
               (wchar_t *)0x0);
    return this->CurrentSoundWave;
  }
  if (1 < (byte)LogAudio._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
  }
  return (USoundWave *)0x0;
}

// SynchronouslyWriteToWavFile @ 1484fd3d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Audio::FSoundWavePCMWriter::SynchronouslyWriteToWavFile
          (FSoundWavePCMWriter *this,TSampleBuffer<short> *param_1,FString *param_2,FString *param_3
          ,FString *param_4)

{
  ESoundWavePCMWriterState EVar1;
  int iVar2;
  bool bVar3;
  FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *pFVar4;
  TStatId TVar5;
  undefined ***pppuVar6;
  FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *pFVar7;
  int iVar8;
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  
  bVar3 = true;
  pFVar7 = (this->CurrentOperation).Ptr;
  if (pFVar7 != (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0) {
    if (((FThreadSafeCounter *)&pFVar7->_padding_)->Counter == 0) {
      FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar7,false);
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  EVar1 = this->CurrentState;
  if (((EVar1 == Suceeded) || (((EVar1 & ~Cancelled) == Idle && (EVar1 != Generating)))) && (bVar3))
  {
    bVar3 = PrepWavFileOutput(this,param_1,param_2,param_3);
    if (bVar3) {
      pFVar4 = ::operator_new(0xe0);
      pFVar7 = (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0;
      if (pFVar4 != (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0) {
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
        *(undefined4 *)&pFVar4->_padding_ = 0;
        pFVar4->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
        pFVar4->_padding_ = (longlong)&___7__FAsyncTask_VFAsyncSoundWavePCMWriteWorker_Audio____6B_;
        local_38 = &
                   ___7__TFunction_OwnedObject_P6AXPEBVUSoundWave___Z_0A__0A__Function_Private_Core_UE__6B_
        ;
        pFVar4->_padding_ = 0;
        *(undefined2 *)&pFVar4->_padding_ = 3;
        pFVar4->_padding_ = -1;
        pFVar4->_padding_ = 0;
        local_30 = `Audio::FSoundWavePCMWriter::SynchronouslyWriteToWavFile'::__l2::<lambda_1>::
                   <lambda_invoker_cdecl>;
        local_20 = (undefined ***)0x0;
        (pFVar4->Task).Writer = this;
        (pFVar4->Task).TaskType = WriteWavFile;
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)&(pFVar4->Task).NonAbandonableSection,4000);
        *(code **)&(pFVar4->Task).CallbackOnSuccess =
             UE::Core::Private::Function::
             TFunctionRefCaller<void_(__cdecl*)(USoundWave_const_*),void,USoundWave_const_*>::Call;
        *(undefined8 *)&(pFVar4->Task).CallbackOnSuccess.field_0x28 = 0;
        pppuVar6 = &local_38;
        if (local_20 != (undefined ***)0x0) {
          pppuVar6 = local_20;
        }
        (*(code *)**pppuVar6)();
        pppuVar6 = &local_38;
        if (local_20 != (undefined ***)0x0) {
          pppuVar6 = local_20;
        }
        (*(code *)(*pppuVar6)[2])();
        TVar5 = FAsyncSoundWavePCMWriteWorker::GetStatId(&pFVar4->Task);
        pFVar4->_padding_ = (longlong)(TVar5.StatIdPtr)->Name;
        pFVar7 = pFVar4;
      }
      pFVar4 = (this->CurrentOperation).Ptr;
      if ((pFVar4 != pFVar7) &&
         ((this->CurrentOperation).Ptr = pFVar7,
         pFVar4 != (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0)) {
        (**(code **)(pFVar4->_padding_ + 0x28))(pFVar4,1);
      }
      FAsyncTaskBase::Start
                ((FAsyncTaskBase *)(this->CurrentOperation).Ptr,true,GThreadPool,Normal,None,-1,
                 (wchar_t *)0x0);
      if (param_4 != (FString *)0x0) {
        iVar2 = (this->AbsoluteFilePath).Data.ArrayNum;
        iVar8 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar8 = 0;
        }
        ::FString::AssignRange
                  (param_4,(wchar_t *)(this->AbsoluteFilePath).Data.AllocatorInstance.Data,iVar8);
      }
      return true;
    }
  }
  else if (1 < (byte)LogAudio._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    return false;
  }
  return false;
}

