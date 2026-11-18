// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 5

// FAudioRenderSchedulerTesterImpl @ 14653c930

/* WARNING: Enum "Type": Some values do not have unique names */

FAudioRenderSchedulerTesterImpl * __thiscall
Audio::FAudioRenderSchedulerTesterImpl::FAudioRenderSchedulerTesterImpl
          (FAudioRenderSchedulerTesterImpl *this)

{
  this->_padding_ = (longlong)&___7FAudioRenderSchedulerTesterImpl_Audio__6B_;
  *(undefined8 *)&this->Steps = 0;
  *(undefined8 *)&(this->Steps).field_0x8 = 0;
  *(undefined8 *)&(this->Steps).field_0x20 = 0;
  *(undefined4 *)&(this->Steps).field_0x28 = 0;
  *(undefined4 *)&(this->Steps).field_0x2c = 0x80;
  *(undefined4 *)&(this->Steps).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Steps).field_0x34 = 0;
  *(undefined8 *)&(this->Steps).field_0x40 = 0;
  *(undefined4 *)&(this->Steps).field_0x48 = 0;
  *(undefined8 *)&(this->Scheduler).IndexMap = 0;
  *(undefined8 *)&(this->Scheduler).IndexMap.field_0x8 = 0;
  *(undefined8 *)&(this->Scheduler).IndexMap.field_0x20 = 0;
  (this->Scheduler).MixerDevice = (FMixerDevice *)0x0;
  *(undefined4 *)&(this->Scheduler).IndexMap.field_0x28 = 0;
  *(undefined4 *)&(this->Scheduler).IndexMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->Scheduler).IndexMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Scheduler).IndexMap.field_0x34 = 0;
  *(undefined8 *)&(this->Scheduler).IndexMap.field_0x40 = 0;
  *(undefined4 *)&(this->Scheduler).IndexMap.field_0x48 = 0;
  (this->Scheduler).Steps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Scheduler).Steps.ArrayNum = 0;
  (this->Scheduler).Steps.ArrayMax = 0;
  (this->Scheduler).FirstFreeIndex = -1;
  (this->Scheduler).ActiveSteps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Scheduler).ActiveSteps.ArrayNum = 0;
  (this->Scheduler).ActiveSteps.ArrayMax = 0;
  (this->Scheduler).bDirty = true;
  (this->Scheduler).BrokenLinks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Scheduler).BrokenLinks.ArrayNum = 0;
  (this->Scheduler).BrokenLinks.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ResultsLock,4000);
  (this->Results).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Results).ArrayNum = 0;
  (this->Results).ArrayMax = 0;
  return this;
}

// AddDependency @ 146545fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FAudioRenderSchedulerTesterImpl::AddDependency
          (FAudioRenderSchedulerTesterImpl *this,int param_1,int param_2)

{
  FAudioRenderScheduler::AddDependency
            (&this->Scheduler,(FAudioRenderStepId)(longlong)param_1,
             (FAudioRenderStepId)(longlong)param_2);
  return;
}

// AddStep @ 146547320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FAudioRenderSchedulerTesterImpl::AddStep(FAudioRenderSchedulerTesterImpl *this,int param_1)

{
  FMixerDevice *this_00;
  FTestStep *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>
  *pTVar7;
  FAudioRenderStepId FVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 local_res8 [8];
  int local_res10 [2];
  TPairInitializer<int_&,TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>_&&>
  local_res18;
  ulong64 local_48;
  wchar_t *local_40;
  int *local_38;
  TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>
  **local_30;
  
  if (*(int *)&(this->Steps).field_0x8 != *(int *)&(this->Steps).field_0x34) {
    puVar10 = *(undefined1 **)&(this->Steps).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Steps).field_0x38;
    }
    iVar6 = *(int *)(puVar10 + (ulonglong)(*(int *)&(this->Steps).field_0x48 - 1U & param_1) * 4);
    if (iVar6 != -1) {
      do {
        if (*(int *)(*(longlong *)&this->Steps + (longlong)iVar6 * 0x18) == param_1) {
          return;
        }
        iVar6 = *(int *)(*(longlong *)&this->Steps + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  local_res10[0] = param_1;
  pTVar7 = ::operator_new(0x18);
  local_res18.Value =
       (TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>
        *)0x0;
  if (pTVar7 != (TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>
                 *)0x0) {
    pTVar7->Ptr = (FTestStep *)&___7FTestStep_FAudioRenderSchedulerTesterImpl_Audio__6B_;
    pTVar7[1].Ptr = (FTestStep *)this;
    *(int *)&pTVar7[2].Ptr = local_res10[0];
    local_res18.Value = pTVar7;
  }
  local_38 = local_res10;
  local_30 = &local_res18.Value;
  TSet<TTuple<int,TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<int_&,TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>_&&>_>
            ((TSet<TTuple<int,TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>,0>,FDefaultSetAllocator>
              *)&this->Steps,&local_res18,(bool *)&local_38);
  if (local_res18.Value !=
      (TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>
       *)0x0) {
    (*(code *)(local_res18.Value)->Ptr->_padding_)(local_res18.Value,1);
  }
  pTVar7 = TMapBase<int,TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>,0>_>
           ::FindChecked((TMapBase<int,TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TUniquePtr<Audio::FAudioRenderSchedulerTesterImpl::FTestStep,TDefaultDelete<Audio::FAudioRenderSchedulerTesterImpl::FTestStep>_>,0>_>
                          *)&this->Steps,local_res10[0]);
  this_00 = (this->Scheduler).MixerDevice;
  FVar8.Value = (ulong64)local_res10[0];
  pFVar1 = pTVar7->Ptr;
  if (((this_00 != (FMixerDevice *)0x0) &&
      (bVar4 = FMixerDevice::IsAudioRenderingThread(this_00), !bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MixerDevice == nullptr || MixerDevice->IsAudioRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
                         ,0x54,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((FVar8.Value == 0xffffffffffffffff) || (pFVar1 == (FTestStep *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Id.IsValid() && Step != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
                         ,0x56,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  sVar5 = FAudioRenderScheduler::GetInternalIndex(&this->Scheduler,FVar8);
  uVar9 = 0;
  if ((int)sVar5 < (this->Scheduler).Steps.ArrayNum) {
    uVar9 = (uint)~(int)sVar5 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Scheduler).Steps.AllocatorInstance.Data;
  if ((*(longlong *)(pFVar2 + (longlong)sVar5 * 0x40 + 8) == 0) ||
     (bVar4 = `Audio::FAudioRenderScheduler::AddStep'::__l17::<lambda_1>::operator()(local_res8),
     bVar4)) {
    if (5 < (byte)LogAudioRenderScheduler._0_1_) {
      local_48 = FVar8.Value;
      local_40 = (wchar_t *)(**(code **)(pFVar1->_padding_ + 0x10))(pFVar1);
      UE::Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,wchar_t_const_*,unsigned___int64>
                ((FLogCategoryBase *)&LogAudioRenderScheduler,&::LOG_Static,&local_40,&local_48);
    }
    *(int *)(pFVar2 + (longlong)sVar5 * 0x40 + 0x28) =
         *(int *)(pFVar2 + (longlong)sVar5 * 0x40 + 0x28) + 1;
    *(FTestStep **)(pFVar2 + (longlong)sVar5 * 0x40 + 8) = pFVar1;
    (this->Scheduler).bDirty = true;
  }
  return;
}

// RemoveDependency @ 14656d360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Audio::FAudioRenderSchedulerTesterImpl::RemoveDependency
          (FAudioRenderSchedulerTesterImpl *this,int param_1,int param_2)

{
  FAudioRenderScheduler *this_00;
  code *pcVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  FAudioRenderStepId FVar7;
  FAudioRenderStepId FVar8;
  undefined1 local_res10 [8];
  short local_res18 [4];
  
  this_00 = &this->Scheduler;
  FVar7.Value = (ulong64)param_2;
  FVar8.Value = (ulong64)param_1;
  if (((this_00->MixerDevice != (FMixerDevice *)0x0) &&
      (bVar2 = FMixerDevice::IsAudioRenderingThread(this_00->MixerDevice), !bVar2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MixerDevice == nullptr || MixerDevice->IsAudioRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
                         ,0x89,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((FVar8.Value == 0xffffffffffffffff) || (FVar7.Value == 0xffffffffffffffff)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FirstStep.IsValid() && SecondStep.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
                         ,0x8b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (FVar8.Value == FVar7.Value) {
    return;
  }
  sVar3 = FAudioRenderScheduler::GetInternalIndex(this_00,FVar8);
  local_res18[0] = sVar3;
  sVar4 = FAudioRenderScheduler::GetInternalIndex(this_00,FVar7);
  uVar6 = 0;
  if ((int)sVar4 < (this->Scheduler).Steps.ArrayNum) {
    uVar6 = (uint)~(int)sVar4 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar5 = TArray<short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::RemoveSingleSwap
                    ((TArray<short,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)
                     ((this->Scheduler).Steps.AllocatorInstance.Data + (longlong)sVar4 * 0x40 + 0x10
                     ),local_res18,Default);
  if ((iVar5 != 0) ||
     (bVar2 = `Audio::FAudioRenderScheduler::RemoveDependency'::__l20::<lambda_1>::operator()
                        (local_res10), bVar2)) {
    FAudioRenderScheduler::RemoveReference(this_00,sVar3);
    FAudioRenderScheduler::RemoveReference(this_00,sVar4);
  }
  (this->Scheduler).bDirty = true;
  return;
}

// Run @ 1465705f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FAudioRenderSchedulerTesterImpl::Run
          (FAudioRenderSchedulerTesterImpl *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  FMixerDevice *this_00;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  FTaskBase *this_01;
  
  (this->Results).ArrayNum = 0;
  if ((this->Results).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Results).AllocatorInstance,0,&(this->Results).ArrayMax);
  }
  this_00 = (this->Scheduler).MixerDevice;
  if (((this_00 != (FMixerDevice *)0x0) &&
      (bVar5 = FMixerDevice::IsAudioRenderingThread(this_00), !bVar5)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MixerDevice == nullptr || MixerDevice->IsAudioRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
                         ,0x9f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar6;
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId160,"FAudioRenderScheduler::RenderBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioMixer\\Private\\AudioRenderScheduler.cpp"
               ,0xa0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId160);
  }
  this_01 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this_01 == (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_01,2,true);
    this_01->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`Audio::FAudioRenderScheduler::RenderBlock'::`14'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init(this_01,L"Scheduled audio render steps",High,None,None);
    this_01[1]._padding_ = (longlong)&this->Scheduler;
    this_01->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`Audio::FAudioRenderScheduler::RenderBlock'::`14'::<lambda_1>_>::_vftable_
    ;
    UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
    UE::Tasks::Private::FTaskBase::Wait(this_01);
    LOCK();
    paVar1 = &this_01->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (this->Results).ArrayNum;
  _Src = (this->Results).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar3;
  if (iVar3 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&__return_storage_ptr__->AllocatorInstance,iVar3,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
  }
  return __return_storage_ptr__;
}

