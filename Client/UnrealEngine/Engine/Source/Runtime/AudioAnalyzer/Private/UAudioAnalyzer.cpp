// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioAnalyzer
// Functions: 20

// StaticClass @ 14d80be90

UClass * __cdecl UAudioAnalyzer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioAnalyzer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioAnalyzer",L"AudioAnalyzer",
               &Z_Registration_Info_UClass_UAudioAnalyzer.InnerSingleton,
               StaticRegisterNativesUAudioAnalyzer,0xa0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioAnalyzer>,
               InternalVTableHelperCtorCaller<UAudioAnalyzer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzer.InnerSingleton;
}

// UAudioAnalyzer @ 14d80cab0

UAudioAnalyzer * __thiscall
UAudioAnalyzer::UAudioAnalyzer(UAudioAnalyzer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->NumFramesPerBufferToAnalyze = 0x400;
  this->_padding_ = (longlong)&___7UAudioAnalyzer__6B_;
  (this->AudioBus).field0_0x0.DebugPtr = (UAudioBus *)0x0;
  (this->AudioAnalyzerSubsystem).field0_0x0.DebugPtr = (UAudioAnalyzerSubsystem *)0x0;
  (this->PatchOutputStrongPtr).Object = (FPatchOutput *)0x0;
  (this->PatchOutputStrongPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AnalysisTask).Object = (FAsyncTask<FAudioAnalyzeTask> *)0x0;
  (this->AnalysisTask).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->AnalyzerFacade).Ptr = (FAnalyzerFacade *)0x0;
  (this->ResultsInternal).Ptr = (IAnalyzerResult *)0x0;
  (this->AnalyzerControls).Object = (IAnalyzerControls *)0x0;
  (this->AnalyzerControls).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AnalysisBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnalysisBuffer).ArrayNum = 0;
  (this->AnalysisBuffer).ArrayMax = 0;
  this->AudioMixerSampleRate = 0;
  this->NumBusChannels = 0;
  this->AnalyzerFactory = (IAnalyzerFactory *)0x0;
  return this;
}

// UAudioAnalyzer @ 14d80cb30

UAudioAnalyzer * __thiscall
UAudioAnalyzer::UAudioAnalyzer(UAudioAnalyzer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->NumFramesPerBufferToAnalyze = 0x400;
  this->_padding_ = (longlong)&___7UAudioAnalyzer__6B_;
  (this->AudioBus).field0_0x0.DebugPtr = (UAudioBus *)0x0;
  (this->AudioAnalyzerSubsystem).field0_0x0.DebugPtr = (UAudioAnalyzerSubsystem *)0x0;
  (this->PatchOutputStrongPtr).Object = (FPatchOutput *)0x0;
  (this->PatchOutputStrongPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AnalysisTask).Object = (FAsyncTask<FAudioAnalyzeTask> *)0x0;
  (this->AnalysisTask).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->AnalyzerFacade).Ptr = (FAnalyzerFacade *)0x0;
  (this->ResultsInternal).Ptr = (IAnalyzerResult *)0x0;
  (this->AnalyzerControls).Object = (IAnalyzerControls *)0x0;
  (this->AnalyzerControls).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->AnalysisBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnalysisBuffer).ArrayNum = 0;
  (this->AnalysisBuffer).ArrayMax = 0;
  this->AudioMixerSampleRate = 0;
  this->NumBusChannels = 0;
  this->AnalyzerFactory = (IAnalyzerFactory *)0x0;
  return this;
}

// ~UAudioAnalyzer @ 14d80ce90

void __thiscall UAudioAnalyzer::~UAudioAnalyzer(UAudioAnalyzer *this)

{
  FScriptContainerElement *pFVar1;
  IAnalyzerResult *pIVar2;
  FAnalyzerFacade *pFVar3;
  IAnalyzerWorker *pIVar4;
  IAnalyzerSettings *pIVar5;
  
  this->_padding_ = (longlong)&___7UAudioAnalyzer__6B_;
  pFVar1 = (this->AnalysisBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnalyzerControls).SharedReferenceCount.ReferenceController);
  pIVar2 = (this->ResultsInternal).Ptr;
  if (pIVar2 != (IAnalyzerResult *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  pFVar3 = (this->AnalyzerFacade).Ptr;
  if (pFVar3 != (FAnalyzerFacade *)0x0) {
    pIVar4 = (pFVar3->Worker).Ptr;
    if (pIVar4 != (IAnalyzerWorker *)0x0) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
    pIVar5 = (pFVar3->Settings).Ptr;
    if (pIVar5 != (IAnalyzerSettings *)0x0) {
      (**(code **)*pIVar5)(pIVar5,1);
    }
    ::operator_delete(pFVar3,0x20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnalysisTask).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PatchOutputStrongPtr).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 14d80df80

void __thiscall UAudioAnalyzer::BeginDestroy(UAudioAnalyzer *this)

{
  FAsyncTask<FAudioAnalyzeTask> *this_00;
  UAudioAnalyzerSubsystem *this_01;
  
  UObject::BeginDestroy((UObject *)this);
  this_00 = (this->AnalysisTask).Object;
  if (this_00 != (FAsyncTask<FAudioAnalyzeTask> *)0x0) {
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this_00,true,false);
  }
  this_01 = (this->AudioAnalyzerSubsystem).field0_0x0.DebugPtr;
  if (this_01 != (UAudioAnalyzerSubsystem *)0x0) {
    UAudioAnalyzerSubsystem::UnregisterAudioAnalyzer(this_01,this);
    return;
  }
  return;
}

// BroadcastResults @ 14d80dfd0

void __thiscall UAudioAnalyzer::BroadcastResults(UAudioAnalyzer *this)

{
  return;
}

// DoAnalysis @ 14d80e250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UAudioAnalyzer::DoAnalysis(UAudioAnalyzer *this)

{
  TSharedPtr<FAsyncTask<FAudioAnalyzeTask>,1> *pTVar1;
  TUniquePtr<Audio::IAnalyzerResult,TDefaultDelete<Audio::IAnalyzerResult>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  IAnalyzerResult *pIVar6;
  FScriptContainerElement *pFVar7;
  FAnalyzerFacade *pFVar8;
  longlong lVar9;
  IAnalyzerControls *pIVar10;
  TReferenceControllerBase<1> *pTVar11;
  code *pcVar12;
  void *pvVar13;
  bool bVar14;
  undefined1 uVar15;
  bool bVar16;
  int iVar17;
  IAnalyzerResult IVar18;
  FAsyncTask<FAudioAnalyzeTask> *pFVar19;
  FName *pFVar20;
  TStatIdData *pTVar21;
  FAsyncTask<FAudioAnalyzeTask> *pFVar22;
  undefined8 *puVar23;
  IAnalyzerResult *pIVar24;
  ulonglong uVar25;
  FAsyncTask<FAudioAnalyzeTask> *pFVar26;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar27;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar28;
  FName local_res8;
  FName local_res10;
  longlong local_78;
  FAsyncTask<FAudioAnalyzeTask> *local_70;
  FSharedReferencer<1> local_68;
  IAnalyzerControls *local_60;
  TReferenceControllerBase<1> *pTStack_58;
  
  pFVar22 = (this->AnalysisTask).Object;
  pTVar1 = &this->AnalysisTask;
  bVar14 = false;
  if (pFVar22 == (FAsyncTask<FAudioAnalyzeTask> *)0x0) {
    pFVar19 = ::operator_new(0xa8);
    pFVar22 = (FAsyncTask<FAudioAnalyzeTask> *)0x0;
    pFVar26 = pFVar22;
    if (pFVar19 != (FAsyncTask<FAudioAnalyzeTask> *)0x0) {
      pFVar19->_padding_ = 0;
      pFVar19->_padding_ = 0;
      pFVar19->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
      *(undefined4 *)&pFVar19->_padding_ = 0;
      pFVar19->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
      pFVar19->_padding_ = (longlong)&___7__FAsyncTask_VFAudioAnalyzeTask____6B_;
      pFVar19->_padding_ = 0;
      *(undefined2 *)&pFVar19->_padding_ = 3;
      pFVar19->_padding_ = -1;
      pFVar19->_padding_ = 0;
      iVar17 = this->NumBusChannels;
      iVar5 = this->AudioMixerSampleRate;
      pFVar8 = (this->AnalyzerFacade).Ptr;
      (this->AnalyzerFacade).Ptr = (FAnalyzerFacade *)0x0;
      (pFVar19->Task).AnalyzerFacade.Ptr = pFVar8;
      pvVar13 = ThreadLocalStoragePointer;
      (pFVar19->Task).SampleRate = iVar5;
      uVar25 = (ulonglong)_tls_index;
      (pFVar19->Task).NumChannels = iVar17;
      (pFVar19->Task).AudioData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar19->Task).AudioData.ArrayNum = 0;
      (pFVar19->Task).AudioData.ArrayMax = 0;
      lVar9 = *(longlong *)((longlong)pvVar13 + uVar25 * 8);
      (pFVar19->Task).Results.Ptr = (IAnalyzerResult *)0x0;
      (pFVar19->Task).AnalyzerControls.Object = (IAnalyzerControls *)0x0;
      (pFVar19->Task).AnalyzerControls.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if ((*(int *)(lVar9 + 0x9d4c) <
           `public:_struct_TStatId___cdecl_FAudioAnalyzeTask::GetStatId(void)const___ptr64'::__l2::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_struct_TStatId___cdecl_FAudioAnalyzeTask::GetStatId(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_struct_TStatId___cdecl_FAudioAnalyzeTask::GetStatId(void)const___ptr64'::__l2::
         _thread_safe_static_guard_0__ == -1)) {
        _StatPtr_AudioAnalyzeTask = (TStatIdData *)0x0;
        pFVar20 = ::FName::FName(&local_res8,"AudioAnalyzeTask");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &`public:_struct_TStatId___cdecl_FAudioAnalyzeTask::GetStatId(void)const___ptr64'
                    ::__l2::StatPtr_AudioAnalyzeTask,*pFVar20,L"AudioAnalyzeTask",
                   "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks",
                   true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&`public:_struct_TStatId___cdecl_FAudioAnalyzeTask::GetStatId(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      pTVar21 = _StatPtr_AudioAnalyzeTask;
      if (_StatPtr_AudioAnalyzeTask == (TStatIdData *)0x0) {
        pFVar20 = ::FName::FName(&local_res10,"AudioAnalyzeTask");
        pTVar21 = FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)
                             &`public:_struct_TStatId___cdecl_FAudioAnalyzeTask::GetStatId(void)const___ptr64'
                              ::__l2::StatPtr_AudioAnalyzeTask,*pFVar20,L"AudioAnalyzeTask",
                             "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                             L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
      }
      pFVar19->_padding_ = (longlong)pTVar21;
      pFVar26 = pFVar19;
    }
    local_70 = pFVar26;
    pFVar19 = ::operator_new(0x18);
    if (pFVar19 != (FAsyncTask<FAudioAnalyzeTask> *)0x0) {
      *(undefined4 *)&pFVar19->_padding_ = 1;
      pFVar19->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_V__FAsyncTask_VFAudioAnalyzeTask____U__DefaultDeleter_V__FAsyncTask_VFAudioAnalyzeTask_____SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)((longlong)&pFVar19->_padding_ + 4) = 1;
      pFVar19->_padding_ = (longlong)pFVar26;
      pFVar22 = pFVar19;
    }
    local_68.ReferenceController = (TReferenceControllerBase<1> *)pFVar22;
    if (pTVar1 != (TSharedPtr<FAsyncTask<FAudioAnalyzeTask>,1> *)&local_70) {
      pTVar1->Object = pFVar26;
      local_70 = (FAsyncTask<FAudioAnalyzeTask> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AnalysisTask).SharedReferenceCount,&local_68);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.ReferenceController);
    goto LAB_14d80e549;
  }
  if (((int)pFVar22->_padding_ != 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("AnalysisTask->IsWorkDone()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioAnalyzer\\Private\\AudioAnalyzer.cpp"
                          ,0xc2,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    uVar15 = (*pcVar12)();
    return (bool)uVar15;
  }
  if ((pTVar1->Object == (FAsyncTask<FAudioAnalyzeTask> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    uVar15 = (*pcVar12)();
    return (bool)uVar15;
  }
  FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)pTVar1->Object,true,false);
  if ((pTVar1->Object == (FAsyncTask<FAudioAnalyzeTask> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    uVar15 = (*pcVar12)();
    return (bool)uVar15;
  }
  pFVar22 = pTVar1->Object;
  FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)pFVar22);
  pIVar24 = (pFVar22->Task).Results.Ptr;
  pTVar2 = &this->ResultsInternal;
  (pFVar22->Task).Results.Ptr = (IAnalyzerResult *)0x0;
  if (pTVar2 == (TUniquePtr<Audio::IAnalyzerResult,TDefaultDelete<Audio::IAnalyzerResult>_> *)
                &local_78) {
    if (pIVar24 != (IAnalyzerResult *)0x0) {
      IVar18 = *pIVar24;
      goto LAB_14d80e355;
    }
  }
  else {
    pIVar6 = pTVar2->Ptr;
    pTVar2->Ptr = pIVar24;
    if (pIVar6 != (IAnalyzerResult *)0x0) {
      IVar18 = *pIVar6;
      pIVar24 = pIVar6;
LAB_14d80e355:
      (**(code **)IVar18)(pIVar24);
    }
  }
  pTVar28 = &(pFVar22->Task).AudioData;
  pTVar27 = &this->AnalysisBuffer;
  if (pTVar27 != pTVar28) {
    pFVar7 = (pTVar27->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar27->AllocatorInstance).Data = (pTVar28->AllocatorInstance).Data;
    (pTVar28->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->AnalysisBuffer).ArrayNum = (pFVar22->Task).AudioData.ArrayNum;
    (this->AnalysisBuffer).ArrayMax = (pFVar22->Task).AudioData.ArrayMax;
    (pFVar22->Task).AudioData.ArrayNum = 0;
    (pFVar22->Task).AudioData.ArrayMax = 0;
  }
  bVar14 = true;
LAB_14d80e549:
  pTVar27 = &this->AnalysisBuffer;
  pFVar22 = pTVar1->Object;
  if ((pFVar22 == (FAsyncTask<FAudioAnalyzeTask> *)0x0) ||
     (((FThreadSafeCounter *)&pFVar22->_padding_)->Counter != 0)) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("AnalysisTask.IsValid() && AnalysisTask->IsDone()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioAnalyzer\\Private\\AudioAnalyzer.cpp"
                        ,0xd7,L"");
    if (bVar16) {
      pcVar12 = (code *)swi(3);
      uVar15 = (*pcVar12)();
      return (bool)uVar15;
    }
  }
  else {
    FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar22,false);
  }
  if (((this->PatchOutputStrongPtr).Object == (FPatchOutput *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    uVar15 = (*pcVar12)();
    return (bool)uVar15;
  }
  iVar17 = Audio::FPatchOutput::GetNumSamplesAvailable((this->PatchOutputStrongPtr).Object);
  piVar3 = &(this->AnalysisBuffer).ArrayMax;
  (this->AnalysisBuffer).ArrayNum = 0;
  piVar4 = &(this->AnalysisBuffer).ArrayNum;
  if ((this->AnalysisBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar27->AllocatorInstance,0,piVar3);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar17,&pTVar27->AllocatorInstance,piVar4,piVar3);
  if (((this->PatchOutputStrongPtr).Object == (FPatchOutput *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    uVar15 = (*pcVar12)();
    return (bool)uVar15;
  }
  Audio::FPatchOutput::PopAudio
            ((this->PatchOutputStrongPtr).Object,(float *)(pTVar27->AllocatorInstance).Data,iVar17,
             false);
  if ((this->AudioMixerSampleRate == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("AudioMixerSampleRate != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioAnalyzer\\Private\\AudioAnalyzer.cpp"
                          ,0xe0,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    uVar15 = (*pcVar12)();
    return (bool)uVar15;
  }
  if ((this->NumBusChannels == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumBusChannels != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioAnalyzer\\Private\\AudioAnalyzer.cpp"
                          ,0xe1,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    uVar15 = (*pcVar12)();
    return (bool)uVar15;
  }
  if ((pTVar1->Object == (FAsyncTask<FAudioAnalyzeTask> *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    uVar15 = (*pcVar12)();
    return (bool)uVar15;
  }
  pFVar22 = pTVar1->Object;
  FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)pFVar22);
  puVar23 = (undefined8 *)(**(code **)(this->_padding_ + 0x2b8))(this);
  pIVar10 = (IAnalyzerControls *)*puVar23;
  pTVar11 = (TReferenceControllerBase<1> *)puVar23[1];
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_60 = (pFVar22->Task).AnalyzerControls.Object;
  pTStack_58 = (pFVar22->Task).AnalyzerControls.SharedReferenceCount.ReferenceController;
  (pFVar22->Task).AnalyzerControls.Object = pIVar10;
  (pFVar22->Task).AnalyzerControls.SharedReferenceCount.ReferenceController = pTVar11;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)puVar23[1]);
  pTVar28 = &(pFVar22->Task).AudioData;
  if (pTVar28 != pTVar27) {
    pFVar7 = (pTVar28->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar28->AllocatorInstance).Data = (pTVar27->AllocatorInstance).Data;
    (pTVar27->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar22->Task).AudioData.ArrayNum = *piVar4;
    (pFVar22->Task).AudioData.ArrayMax = *piVar3;
    *piVar4 = 0;
    *piVar3 = 0;
  }
  if ((pTVar1->Object == (FAsyncTask<FAudioAnalyzeTask> *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    uVar15 = (*pcVar12)();
    return (bool)uVar15;
  }
  FAsyncTaskBase::Start
            ((FAsyncTaskBase *)pTVar1->Object,false,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
  return bVar14;
}

// GetAnalyzerControls @ 14d80ec70

TSharedPtr<Audio::IAnalyzerControls,1> * __thiscall
UAudioAnalyzer::GetAnalyzerControls
          (UAudioAnalyzer *this,TSharedPtr<Audio::IAnalyzerControls,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->AnalyzerControls).Object;
  pTVar1 = (this->AnalyzerControls).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetAnalyzerFactoryName @ 14d80f1e0

FName __thiscall UAudioAnalyzer::GetAnalyzerFactoryName(UAudioAnalyzer *this)

{
  FName in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioAnalyzer\\Classes\\AudioAnalyzer.h"
             ,0x8f,L"Pure virtual not implemented (%s)");
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetPrivateStaticClass @ 14d80f870

UClass * __cdecl UAudioAnalyzer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioAnalyzer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioAnalyzer",L"AudioAnalyzer",
               &Z_Registration_Info_UClass_UAudioAnalyzer.InnerSingleton,
               StaticRegisterNativesUAudioAnalyzer,0xa0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioAnalyzer>,
               InternalVTableHelperCtorCaller<UAudioAnalyzer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioAnalyzer.InnerSingleton;
}

// GetSettings @ 14d80fcd0

TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_> __thiscall
UAudioAnalyzer::GetSettings(UAudioAnalyzer *this,int param_1,int param_2)

{
  IAnalyzerSettings *pIVar1;
  IAnalyzerSettings IVar2;
  undefined4 in_register_00000014;
  
  pIVar1 = (IAnalyzerSettings *)CONCAT44(in_register_00000014,param_1);
  IVar2 = (IAnalyzerSettings)::operator_new(8);
  if (IVar2 != (IAnalyzerSettings)0x0) {
    *pIVar1 = IVar2;
    *(undefined ***)IVar2 = &___7IAnalyzerSettings_Audio__6B_;
    return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)pIVar1;
  }
  *pIVar1 = (IAnalyzerSettings)0x0;
  return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)pIVar1;
}

// GetSettingsFromProperty @ 14d80fdb0

UAudioAnalyzerSettings * __thiscall
UAudioAnalyzer::GetSettingsFromProperty(UAudioAnalyzer *this,FProperty *param_1)

{
  int iVar1;
  FFieldClass *pFVar2;
  longlong lVar3;
  code *pcVar4;
  FFieldClass *pFVar5;
  bool bVar6;
  FFieldClass *pFVar7;
  UAudioAnalyzerSettings *pUVar8;
  UClass *pUVar9;
  
  if (param_1 == (FProperty *)0x0) {
    return (UAudioAnalyzerSettings *)0x0;
  }
  pFVar7 = FObjectPropertyBase::StaticClass();
  if ((pFVar7 == (FFieldClass *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x2dd,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pUVar8 = (UAudioAnalyzerSettings *)(*pcVar4)();
    return pUVar8;
  }
  pFVar2 = (FFieldClass *)param_1->_padding_;
  pFVar5 = pFVar2;
  if (pFVar7->Id == CASTCLASS_None) {
    for (; pFVar5 != (FFieldClass *)0x0; pFVar5 = pFVar5->SuperClass) {
      if (pFVar5 == pFVar7) {
        bVar6 = true;
        goto LAB_14d80fe30;
      }
    }
    bVar6 = false;
  }
  else {
    bVar6 = (pFVar2->CastFlags & pFVar7->Id) != CASTCLASS_None;
  }
LAB_14d80fe30:
  if (!bVar6) {
    return (UAudioAnalyzerSettings *)0x0;
  }
  if (((uint)(int)pFVar2->CastFlags >> 0x1a & 1) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (!bVar6) {
      return (UAudioAnalyzerSettings *)0x0;
    }
    pcVar4 = (code *)swi(3);
    pUVar8 = (UAudioAnalyzerSettings *)(*pcVar4)();
    return pUVar8;
  }
  lVar3 = param_1[1]._padding_;
  pUVar9 = UAudioAnalyzerSettings::StaticClass();
  if (pUVar9 == (UClass *)0x0) {
    return (UAudioAnalyzerSettings *)0x0;
  }
  iVar1 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (bVar6) {
    pUVar8 = (UAudioAnalyzerSettings *)(**(code **)(param_1->_padding_ + 0x208))(param_1,this,0);
    if (pUVar8 != (UAudioAnalyzerSettings *)0x0) {
      pUVar9 = UAudioAnalyzerSettings::StaticClass();
      iVar1 = (int)pUVar9->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar9->_padding_)) {
        return pUVar8;
      }
    }
    return (UAudioAnalyzerSettings *)0x0;
  }
  return (UAudioAnalyzerSettings *)0x0;
}

// IsReadyForAnalysis @ 14d80ffc0

bool __thiscall UAudioAnalyzer::IsReadyForAnalysis(UAudioAnalyzer *this)

{
  FAsyncTask<FAudioAnalyzeTask> *pFVar1;
  FPatchOutput *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  
  if ((this->AudioBus).field0_0x0.DebugPtr == (UAudioBus *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AudioBus != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioAnalyzer\\Private\\AudioAnalyzer.cpp"
                       ,0xa7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->AnalysisTask).Object;
  if (((pFVar1 == (FAsyncTask<FAudioAnalyzeTask> *)0x0) || ((int)pFVar1->_padding_ == 0)) &&
     (this_00 = (this->PatchOutputStrongPtr).Object, this_00 != (FPatchOutput *)0x0)) {
    iVar5 = Audio::FPatchOutput::GetNumSamplesAvailable(this_00);
    return this->NumFramesPerBufferToAnalyze <=
           iVar5 / (int)(((this->AudioBus).field0_0x0.DebugPtr)->AudioBusChannels + 1);
  }
  return false;
}

// StartAnalyzing @ 14d810710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAudioAnalyzer::StartAnalyzing(UAudioAnalyzer *this,uint param_1,UAudioBus *param_2)

{
  TUniquePtr<Audio::FAnalyzerFacade,TDefaultDelete<Audio::FAnalyzerFacade>_> *pTVar1;
  FObjectSubsystemCollection<UEngineSubsystem> *this_00;
  uint uVar2;
  int iVar3;
  UAudioBus *pUVar4;
  IAnalyzerSettings *pIVar5;
  IAnalyzerWorker *pIVar6;
  code *pcVar7;
  FAudioBusKey FVar8;
  FAudioBusKey FVar9;
  float fVar10;
  bool bVar11;
  FAudioDeviceManager *this_01;
  FAudioDevice *pFVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  UAudioAnalyzerSubsystem *pUVar15;
  FName *pFVar16;
  IAnalyzerFactory *pIVar17;
  UAudioBusSubsystem *this_02;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar18;
  undefined8 *puVar19;
  FAnalyzerFacade *pFVar20;
  FAnalyzerFacade *pFVar21;
  int iVar22;
  ForAnyElementType FVar23;
  uint local_res18;
  uint uStackX_1c;
  FName local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_e8;
  undefined8 *local_d8;
  FString local_d0;
  FString local_c0;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  FString local_a0;
  TSharedPtr<Audio::FPatchOutput,1> local_90;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  if (param_2 == (UAudioBus *)0x0) {
    if ((byte)LogAudioAnalyzer._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioAnalyzer);
    return;
  }
  this_01 = FAudioDeviceManager::Get();
  if (this_01 == (FAudioDeviceManager *)0x0) {
    if ((byte)LogAudioAnalyzer._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioAnalyzer);
    return;
  }
  pFVar12 = FAudioDeviceManager::GetAudioDeviceRaw(this_01,param_1);
  if (pFVar12 == (FAudioDevice *)0x0) {
    if ((byte)LogAudioAnalyzer._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioAnalyzer);
    return;
  }
  if ((this->AudioAnalyzerSubsystem).field0_0x0.DebugPtr == (UAudioAnalyzerSubsystem *)0x0) {
    if (GEngine == (UEngine *)0x0) {
      pUVar15 = (UAudioAnalyzerSubsystem *)0x0;
    }
    else {
      this_00 = &GEngine->EngineSubsystemCollection;
      pUVar13 = UAudioAnalyzerSubsystem::StaticClass();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar13 != (UClass *)0x0) goto LAB_14d81082a;
LAB_14d810858:
        pUVar13 = (UClass *)0x0;
      }
      else {
        if (pUVar13 == (UClass *)0x0) goto LAB_14d810858;
        UE::GC::MarkAsReachable((UObject *)pUVar13);
LAB_14d81082a:
        pUVar14 = UAudioAnalyzerSubsystem::StaticClass();
        if (pUVar14 == (UClass *)0x0) goto LAB_14d810858;
        iVar22 = (int)pUVar14->_padding_;
        if (((int)pUVar13->_padding_ < iVar22) ||
           ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar22 * 8) !=
            &pUVar14->_padding_)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if (!bVar11) goto LAB_14d810858;
      }
      pUVar15 = (UAudioAnalyzerSubsystem *)
                FSubsystemCollectionBase::GetSubsystemInternal
                          ((FSubsystemCollectionBase *)this_00,pUVar13);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar15 != (UAudioAnalyzerSubsystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    (this->AudioAnalyzerSubsystem).field0_0x0.DebugPtr = pUVar15;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->AudioBus).field0_0x0.DebugPtr = param_2;
  this->NumBusChannels = param_2->AudioBusChannels + 1;
  this->AudioMixerSampleRate = (int)(float)pFVar12->SampleRate;
  pIVar17 = this->AnalyzerFactory;
  if (pIVar17 == (IAnalyzerFactory *)0x0) {
    pFVar16 = (FName *)(**(code **)(this->_padding_ + 0x2c8))(this,&local_res18);
    pIVar17 = Audio::GetAnalyzerFactory(*pFVar16);
    this->AnalyzerFactory = pIVar17;
  }
  if (pIVar17 == (IAnalyzerFactory *)0x0) {
    pFVar16 = (FName *)(**(code **)(this->_padding_ + 0x2c8))(this,local_b0);
    ::FName::ToString(pFVar16,&local_a0);
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("AnalyzerFactory != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioAnalyzer\\Private\\AudioAnalyzer.cpp"
                        ,99,
                        L"Need to register the factory as a modular feature for the analyzer \'%s\'."
                       );
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pUVar4 = (this->AudioBus).field0_0x0.DebugPtr;
  uVar2 = *(uint *)((longlong)&pUVar4->_padding_ + 4);
  iVar22 = pUVar4->AudioBusChannels + 1;
  pUVar13 = Z_Construct_UClass_UAudioBusSubsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar13 != (UClass *)0x0) goto LAB_14d81098e;
LAB_14d8109bc:
    pUVar13 = (UClass *)0x0;
  }
  else {
    if (pUVar13 == (UClass *)0x0) goto LAB_14d8109bc;
    UE::GC::MarkAsReachable((UObject *)pUVar13);
LAB_14d81098e:
    pUVar14 = Z_Construct_UClass_UAudioBusSubsystem_NoRegister();
    if (pUVar14 == (UClass *)0x0) goto LAB_14d8109bc;
    iVar3 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar3 * 8) !=
        &pUVar14->_padding_)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (!bVar11) goto LAB_14d8109bc;
  }
  this_02 = (UAudioBusSubsystem *)
            FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)&pFVar12->SubsystemCollection,pUVar13);
  if ((this_02 == (UAudioBusSubsystem *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("AudioBusSubsystem",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioAnalyzer\\Private\\AudioAnalyzer.cpp"
                          ,0x6a,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_res20 = (FName)this->_padding_;
  uStackX_1c = 0xffffffff;
  local_res18 = uVar2;
  ::FName::ToString(&local_res20,&local_d0);
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_d0.Data.ArrayNum != 0) {
    FVar23.Data = local_d0.Data.AllocatorInstance.Data;
  }
  FStringFormatArg::FStringFormatArg(&local_78,(wchar_t *)FVar23.Data);
  FStringFormatArg::FStringFormatArg(&local_58,uVar2);
  local_e8.ArrayNum = 2;
  pFVar21 = (FAnalyzerFacade *)0x0;
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_e8.AllocatorInstance,2,&local_e8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_e8.AllocatorInstance.Data,&local_78,2)
  ;
  ::FString::FormatImpl(&local_c0,L"_Analyzer_{0}_AudioBusId_{1}",&local_e8);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if ((FStringFormatArg *)local_e8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  FVar8.InstanceId = uStackX_1c;
  FVar8.ObjectId = local_res18;
  UAudioBusSubsystem::StartAudioBus(this_02,FVar8,&local_c0,iVar22,false);
  fVar10 = __real_3f800000;
  iVar3 = (pFVar12->PlatformSettings).CallbackBufferFrameSize;
  FVar9.InstanceId = uStackX_1c;
  FVar9.ObjectId = local_res18;
  this->NumFramesPerBufferToAnalyze = iVar3;
  pTVar18 = UAudioBusSubsystem::AddPatchOutputForAudioBus
                      (this_02,&local_90,FVar9,iVar3,iVar22,fVar10);
  if (&this->PatchOutputStrongPtr != pTVar18) {
    (this->PatchOutputStrongPtr).Object = pTVar18->Object;
    pTVar18->Object = (FPatchOutput *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PatchOutputStrongPtr).SharedReferenceCount,&pTVar18->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  pUVar15 = (this->AudioAnalyzerSubsystem).field0_0x0.DebugPtr;
  if (pUVar15 != (UAudioAnalyzerSubsystem *)0x0) {
    UAudioAnalyzerSubsystem::RegisterAudioAnalyzer(pUVar15,this);
  }
  puVar19 = (undefined8 *)
            (**(code **)(this->_padding_ + 0x2b0))
                      (this,&local_d8,this->AudioMixerSampleRate,this->NumBusChannels);
  pFVar20 = ::operator_new(0x20);
  if (pFVar20 != (FAnalyzerFacade *)0x0) {
    pIVar17 = this->AnalyzerFactory;
    pIVar5 = (IAnalyzerSettings *)*puVar19;
    *puVar19 = 0;
    (pFVar20->Settings).Ptr = pIVar5;
    (pFVar20->Worker).Ptr = (IAnalyzerWorker *)0x0;
    pFVar20->Factory = pIVar17;
    (pFVar20->FactoryName).ComparisonIndex = 0;
    (pFVar20->FactoryName).Number = 0;
    pFVar21 = pFVar20;
  }
  pTVar1 = &this->AnalyzerFacade;
  if (pTVar1 == (TUniquePtr<Audio::FAnalyzerFacade,TDefaultDelete<Audio::FAnalyzerFacade>_> *)
                &local_a8) {
    if (pFVar21 == (FAnalyzerFacade *)0x0) goto LAB_14d810c56;
    pIVar6 = (pFVar21->Worker).Ptr;
    if (pIVar6 != (IAnalyzerWorker *)0x0) {
      (**(code **)*pIVar6)(pIVar6,1);
    }
    pIVar5 = (pFVar21->Settings).Ptr;
    pFVar20 = pFVar21;
    if (pIVar5 != (IAnalyzerSettings *)0x0) {
      (**(code **)*pIVar5)(pIVar5,1);
    }
  }
  else {
    pFVar20 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar21;
    if (pFVar20 == (FAnalyzerFacade *)0x0) goto LAB_14d810c56;
    pIVar6 = (pFVar20->Worker).Ptr;
    if (pIVar6 != (IAnalyzerWorker *)0x0) {
      (**(code **)*pIVar6)(pIVar6,1);
    }
    pIVar5 = (pFVar20->Settings).Ptr;
    if (pIVar5 != (IAnalyzerSettings *)0x0) {
      (**(code **)*pIVar5)(pIVar5,1);
    }
  }
  ::operator_delete(pFVar20,0x20);
LAB_14d810c56:
  if (local_d8 != (undefined8 *)0x0) {
    (**(code **)*local_d8)(local_d8,1);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  return;
}

// StartAnalyzing @ 14d810ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UAudioAnalyzer::StartAnalyzing(UAudioAnalyzer *this,UWorld *param_1,UAudioBus *param_2)

{
  bool bVar1;
  uint uVar2;
  FAudioDeviceHandle local_28;
  
  if (param_1 != (UWorld *)0x0) {
    UWorld::GetAudioDevice(param_1,&local_28);
    bVar1 = FAudioDeviceHandle::IsValid(&local_28);
    if (bVar1) {
      uVar2 = FAudioDeviceHandle::GetDeviceID(&local_28);
      StartAnalyzing(this,uVar2,param_2);
    }
    FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
  }
  return;
}

// StartAnalyzing @ 14d810d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UAudioAnalyzer::StartAnalyzing(UAudioAnalyzer *this,UObject *param_1,UAudioBus *param_2)

{
  bool bVar1;
  ENetMode EVar2;
  uint uVar3;
  UWorld *this_00;
  FAudioDeviceHandle local_28;
  
  if (param_2 == (UAudioBus *)0x0) {
    if (1 < (byte)LogAudioAnalyzer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioAnalyzer);
      return;
    }
  }
  else {
    this_00 = UEngine::GetWorldFromContextObject(GEngine,param_1,ReturnNull);
    if (((this_00 != (UWorld *)0x0) && (this_00->bAllowAudioPlayback != '\0')) &&
       (EVar2 = UWorld::InternalGetNetMode(this_00), EVar2 != NM_DedicatedServer)) {
      UWorld::GetAudioDevice(this_00,&local_28);
      bVar1 = FAudioDeviceHandle::IsValid(&local_28);
      if (bVar1) {
        uVar3 = FAudioDeviceHandle::GetDeviceID(&local_28);
        StartAnalyzing(this,uVar3,param_2);
      }
      FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
    }
  }
  return;
}

// StaticRegisterNativesUAudioAnalyzer @ 14d810de0

void __cdecl UAudioAnalyzer::StaticRegisterNativesUAudioAnalyzer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAudioAnalyzer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopAnalyzing @ 14d810ea0

void __thiscall UAudioAnalyzer::StopAnalyzing(UAudioAnalyzer *this,UObject *param_1)

{
  UAudioAnalyzerSubsystem *this_00;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this_00 = (this->AudioAnalyzerSubsystem).field0_0x0.DebugPtr;
  if (this_00 != (UAudioAnalyzerSubsystem *)0x0) {
    UAudioAnalyzerSubsystem::UnregisterAudioAnalyzer(this_00,this);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->PatchOutputStrongPtr != (TSharedPtr<Audio::FPatchOutput,1> *)&local_18) {
      (this->PatchOutputStrongPtr).Object = (FPatchOutput *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->PatchOutputStrongPtr).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    return;
  }
  return;
}

// execStartAnalyzing @ 14d811630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UAudioAnalyzer::execStartAnalyzing(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FObjectSubsystemCollection<UEngineSubsystem> *this;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  FAudioBusKey FVar8;
  FAudioBusKey FVar9;
  float fVar10;
  UObject *pUVar11;
  bool bVar12;
  ENetMode EVar13;
  uint uVar14;
  UWorld *this_00;
  FAudioDeviceManager *this_01;
  FAudioDevice *pFVar15;
  UClass *pUVar16;
  UClass *pUVar17;
  UClass *pUVar18;
  FName *pFVar19;
  IAnalyzerFactory *pIVar20;
  UAudioBusSubsystem *this_02;
  TSharedPtr<Audio::FPatchOutput,1> *pTVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong *plVar24;
  int iVar25;
  ForAnyElementType FVar26;
  UObject *local_res10 [2];
  UObject *local_res20;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_108;
  uint local_f8;
  uint uStack_f4;
  FName local_f0;
  undefined8 *local_e8;
  FString local_e0;
  FString local_d0;
  FAudioDeviceHandle local_c0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  FString local_98;
  TSharedPtr<Audio::FPatchOutput,1> local_88;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  
  pUVar18 = (UClass *)0x0;
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar11 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == (UObject *)0x0) {
    if ((byte)LogAudioAnalyzer._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioAnalyzer);
    return;
  }
  this_00 = UEngine::GetWorldFromContextObject(GEngine,local_res20,ReturnNull);
  if (this_00 == (UWorld *)0x0) {
    return;
  }
  if (this_00->bAllowAudioPlayback == '\0') {
    return;
  }
  EVar13 = UWorld::InternalGetNetMode(this_00);
  if (EVar13 == NM_DedicatedServer) {
    return;
  }
  UWorld::GetAudioDevice(this_00,&local_c0);
  bVar12 = FAudioDeviceHandle::IsValid(&local_c0);
  if (!bVar12) goto LAB_14d811c7f;
  uVar14 = FAudioDeviceHandle::GetDeviceID(&local_c0);
  this_01 = FAudioDeviceManager::Get();
  if (this_01 == (FAudioDeviceManager *)0x0) {
    if (1 < (byte)LogAudioAnalyzer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioAnalyzer);
    }
    goto LAB_14d811c7f;
  }
  pFVar15 = FAudioDeviceManager::GetAudioDeviceRaw(this_01,uVar14);
  if (pFVar15 == (FAudioDevice *)0x0) {
    if (1 < (byte)LogAudioAnalyzer._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAudioAnalyzer);
    }
    goto LAB_14d811c7f;
  }
  if (*(longlong *)&param_1[1].field_0x10 == 0) {
    if (GEngine != (UEngine *)0x0) {
      this = &GEngine->EngineSubsystemCollection;
      pUVar16 = UAudioAnalyzerSubsystem::StaticClass();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar16 != (UClass *)0x0) goto LAB_14d811830;
LAB_14d81185e:
        pUVar16 = pUVar18;
      }
      else {
        if (pUVar16 == (UClass *)0x0) goto LAB_14d81185e;
        UE::GC::MarkAsReachable((UObject *)pUVar16);
LAB_14d811830:
        pUVar17 = UAudioAnalyzerSubsystem::StaticClass();
        if (pUVar17 == (UClass *)0x0) goto LAB_14d81185e;
        iVar25 = (int)pUVar17->_padding_;
        if (((int)pUVar16->_padding_ < iVar25) ||
           ((longlong *)*(undefined1 **)(pUVar16->_padding_ + (longlong)iVar25 * 8) !=
            &pUVar17->_padding_)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if (!bVar12) goto LAB_14d81185e;
      }
      pUVar18 = (UClass *)
                FSubsystemCollectionBase::GetSubsystemInternal
                          ((FSubsystemCollectionBase *)this,pUVar16);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar18);
    }
    *(UClass **)&param_1[1].field_0x10 = pUVar18;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar11);
  }
  *(UObject **)(param_1 + 1) = pUVar11;
  *(uint *)&param_1[3].field_0x1c = (byte)pUVar11[1].field_0x8 + 1;
  *(int *)&param_1[3].field_0x18 = (int)(float)pFVar15->SampleRate;
  pIVar20 = *(IAnalyzerFactory **)&param_1[3].field_0x20;
  if (pIVar20 == (IAnalyzerFactory *)0x0) {
    pFVar19 = (FName *)(**(code **)(*(longlong *)param_1 + 0x2c8))(param_1,&local_f8);
    pIVar20 = Audio::GetAnalyzerFactory(*pFVar19);
    *(IAnalyzerFactory **)&param_1[3].field_0x20 = pIVar20;
  }
  if (pIVar20 == (IAnalyzerFactory *)0x0) {
    pFVar19 = (FName *)(**(code **)(*(longlong *)param_1 + 0x2c8))(param_1,local_a8);
    ::FName::ToString(pFVar19,&local_98);
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("AnalyzerFactory != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioAnalyzer\\Private\\AudioAnalyzer.cpp"
                        ,99,
                        L"Need to register the factory as a modular feature for the analyzer \'%s\'."
                       );
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar14 = *(uint *)(*(longlong *)(param_1 + 1) + 0xc);
  iVar25 = *(byte *)(*(longlong *)(param_1 + 1) + 0x30) + 1;
  pUVar18 = Z_Construct_UClass_UAudioBusSubsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar18 != (UClass *)0x0) goto LAB_14d811996;
LAB_14d8119c4:
    pUVar18 = (UClass *)0x0;
  }
  else {
    if (pUVar18 == (UClass *)0x0) goto LAB_14d8119c4;
    UE::GC::MarkAsReachable((UObject *)pUVar18);
LAB_14d811996:
    pUVar16 = Z_Construct_UClass_UAudioBusSubsystem_NoRegister();
    if (pUVar16 == (UClass *)0x0) goto LAB_14d8119c4;
    iVar2 = (int)pUVar16->_padding_;
    if (((int)pUVar18->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar18->_padding_ + (longlong)iVar2 * 8) !=
        &pUVar16->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (!bVar12) goto LAB_14d8119c4;
  }
  this_02 = (UAudioBusSubsystem *)
            FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)&pFVar15->SubsystemCollection,pUVar18);
  if ((this_02 == (UAudioBusSubsystem *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("AudioBusSubsystem",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AudioAnalyzer\\Private\\AudioAnalyzer.cpp"
                          ,0x6a,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_f0.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
  local_f0.Number = *(uint *)&param_1->field_0x1c;
  uStack_f4 = 0xffffffff;
  local_f8 = uVar14;
  ::FName::ToString(&local_f0,&local_e0);
  FVar26.Data = (FScriptContainerElement *)L"";
  if (local_e0.Data.ArrayNum != 0) {
    FVar26.Data = local_e0.Data.AllocatorInstance.Data;
  }
  FStringFormatArg::FStringFormatArg(&local_78,(wchar_t *)FVar26.Data);
  FStringFormatArg::FStringFormatArg(&local_58,uVar14);
  local_108.ArrayNum = 2;
  plVar24 = (longlong *)0x0;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_108.AllocatorInstance,2,&local_108.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>
            (local_108.AllocatorInstance.Data,&local_78,2);
  ::FString::FormatImpl(&local_d0,L"_Analyzer_{0}_AudioBusId_{1}",&local_108);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if ((FStringFormatArg *)local_108.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  FVar8.InstanceId = uStack_f4;
  FVar8.ObjectId = local_f8;
  UAudioBusSubsystem::StartAudioBus(this_02,FVar8,&local_d0,iVar25,false);
  fVar10 = __real_3f800000;
  iVar2 = (pFVar15->PlatformSettings).CallbackBufferFrameSize;
  FVar9.InstanceId = uStack_f4;
  FVar9.ObjectId = local_f8;
  *(int *)&param_1[1].field_0x8 = iVar2;
  pTVar21 = UAudioBusSubsystem::AddPatchOutputForAudioBus
                      (this_02,&local_88,FVar9,iVar2,iVar25,fVar10);
  if ((TSharedPtr<Audio::FPatchOutput,1> *)&param_1[1].field_0x18 != pTVar21) {
    *(FPatchOutput **)&param_1[1].field_0x18 = pTVar21->Object;
    pTVar21->Object = (FPatchOutput *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&param_1[1].field_0x20,&pTVar21->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (*(UAudioAnalyzerSubsystem **)&param_1[1].field_0x10 != (UAudioAnalyzerSubsystem *)0x0) {
    UAudioAnalyzerSubsystem::RegisterAudioAnalyzer
              (*(UAudioAnalyzerSubsystem **)&param_1[1].field_0x10,(UAudioAnalyzer *)param_1);
  }
  plVar22 = (longlong *)
            (**(code **)(*(longlong *)param_1 + 0x2b0))
                      (param_1,&local_e8,*(undefined4 *)&param_1[3].field_0x18,
                       *(undefined4 *)&param_1[3].field_0x1c);
  plVar23 = ::operator_new(0x20);
  if (plVar23 != (longlong *)0x0) {
    lVar4 = *(longlong *)&param_1[3].field_0x20;
    lVar5 = *plVar22;
    *plVar22 = 0;
    *plVar23 = lVar5;
    plVar23[1] = 0;
    plVar23[2] = lVar4;
    plVar23[3] = 0;
    plVar24 = plVar23;
  }
  puVar1 = &param_1[2].field_0x10;
  if ((undefined8 *)puVar1 == &local_a0) {
    if (plVar24 != (longlong *)0x0) {
      puVar6 = (undefined8 *)plVar24[1];
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,1);
      }
      puVar6 = (undefined8 *)*plVar24;
      plVar22 = plVar24;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,1);
      }
      goto LAB_14d811c4a;
    }
  }
  else {
    plVar22 = *(longlong **)puVar1;
    *(longlong **)puVar1 = plVar24;
    if (plVar22 != (longlong *)0x0) {
      puVar6 = (undefined8 *)plVar22[1];
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,1);
      }
      puVar6 = (undefined8 *)*plVar22;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,1);
      }
LAB_14d811c4a:
      ::operator_delete(plVar22,0x20);
    }
  }
  if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,1);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
LAB_14d811c7f:
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_c0);
  return;
}

// execStopAnalyzing @ 14d811ca0

void __cdecl UAudioAnalyzer::execStopAnalyzing(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(UAudioAnalyzerSubsystem **)&param_1[1].field_0x10 != (UAudioAnalyzerSubsystem *)0x0) {
    UAudioAnalyzerSubsystem::UnregisterAudioAnalyzer
              (*(UAudioAnalyzerSubsystem **)&param_1[1].field_0x10,(UAudioAnalyzer *)param_1);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((undefined8 *)&param_1[1].field_0x18 != &local_18) {
      *(undefined8 *)&param_1[1].field_0x18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&param_1[1].field_0x20,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  return;
}

