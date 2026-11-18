// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 67

// FLiveLinkSubject @ 14d0121d0

FLiveLinkSubject * __thiscall
FLiveLinkSubject::FLiveLinkSubject
          (FLiveLinkSubject *this,TSharedPtr<FLiveLinkTimedDataInput,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  FLiveLinkSubject *pFVar6;
  
  pTVar5 = (TNode *)0x0;
  this->_padding_ = (longlong)&_vftable__for__ILiveLinkSubject__;
  (this->Role).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->_padding_ = (longlong)&_vftable__for__ITimedDataInputChannel__;
  (this->FramePreProcessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FramePreProcessors).ArrayNum = 0;
  (this->FramePreProcessors).ArrayMax = 0;
  (this->FrameInterpolationProcessor).Object = (ILiveLinkFrameInterpolationProcessorWorker *)0x0;
  (this->FrameInterpolationProcessor).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->FrameTranslators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameTranslators).ArrayNum = 0;
  (this->FrameTranslators).ArrayMax = 0;
  (this->SubjectRemapper).Object = (ILiveLinkSubjectRemapperWorker *)0x0;
  (this->SubjectRemapper).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FStructOnScope::FStructOnScope(&(this->StaticData).WrappedStruct);
  (this->OverrideStaticData).bIsSet = false;
  (this->FrameData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameData).ArrayNum = 0;
  (this->FrameData).ArrayMax = 0;
  pTVar4 = ::operator_new(0x10);
  if (pTVar4 != (TNode *)0x0) {
    pTVar4->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar4->Item = 0;
    pTVar4->NextNode = (TNode *)0x0;
    pTVar5 = pTVar4;
  }
  (this->ReceivedOrderedFrames).Tail = pTVar5;
  (this->ReceivedOrderedFrames).Head = pTVar5;
  this->NextIdentifier = 0;
  FStructOnScope::FStructOnScope((FStructOnScope *)&this->FrameSnapshot);
  FStructOnScope::FStructOnScope(&(this->FrameSnapshot).FrameData.WrappedStruct);
  (this->SubjectKey).Source.A = 0;
  (this->SubjectKey).Source.B = 0;
  (this->SubjectKey).Source.C = 0;
  (this->SubjectKey).Source.D = 0;
  (this->SubjectKey).SubjectName.Name = (FName)0x0;
  (this->TimedDataGroup).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->TimedDataGroup).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->CachedSettings).SourceMode = EngineTime;
  (this->CachedSettings).BufferSettings.bValidEngineTimeEnabled = false;
  (this->CachedSettings).BufferSettings.ValidEngineTime = 1.0;
  (this->CachedSettings).BufferSettings.EngineTimeOffset = 0.0;
  (this->CachedSettings).BufferSettings.EngineTimeClockOffset = 0.0;
  (this->CachedSettings).BufferSettings.SmoothEngineTimeOffset = 0.0;
  (this->CachedSettings).BufferSettings.bGenerateSubFrame = false;
  (this->CachedSettings).BufferSettings.DetectedFrameRate.Numerator = 0x18;
  (this->CachedSettings).BufferSettings.DetectedFrameRate.Denominator = 1;
  (this->CachedSettings).BufferSettings.bUseTimecodeSmoothLatest = false;
  (this->CachedSettings).BufferSettings.SourceTimecodeFrameRate.Numerator = 0x18;
  (this->CachedSettings).BufferSettings.SourceTimecodeFrameRate.Denominator = 1;
  (this->CachedSettings).BufferSettings.bValidTimecodeFrameEnabled = false;
  (this->CachedSettings).BufferSettings.ValidTimecodeFrame = 0x1e;
  (this->CachedSettings).BufferSettings.TimecodeFrameOffset = 0.0;
  (this->CachedSettings).BufferSettings.TimecodeClockOffset = 0.0;
  (this->CachedSettings).BufferSettings.LatestOffset = 0;
  (this->CachedSettings).BufferSettings.MaxNumberOfFrameToBuffered = 10;
  (this->CachedSettings).BufferSettings.bKeepAtLeastOneFrame = true;
  (this->ModeOverride).bIsSet = false;
  this->LastPushTime = 0.0;
  this->bIsStatLoggingEnabled = true;
  (this->EvaluationStatistics).BufferUnderflow = (TAtomic<int>)0x0;
  (this->EvaluationStatistics).BufferOverflow = (TAtomic<int>)0x0;
  (this->EvaluationStatistics).FrameDrop = (TAtomic<int>)0x0;
  (this->EvaluationStatistics).LastEvaluationData.DistanceToNewestSampleSeconds = 0.0;
  (this->EvaluationStatistics).LastEvaluationData.DistanceToOldestSampleSeconds = 0.0;
  (this->LastTimecodeFrameRate).Numerator = 60000;
  *(undefined8 *)&(this->LastTimecodeFrameRate).Denominator = 1;
  this->bClearOverrideStaticData = (atomic<bool>)0x0;
  this->State = Unknown;
  *(undefined8 *)&this->OnStateChangedDelegate = 0;
  *(undefined8 *)&(this->OnStateChangedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnStateChangedDelegate).field_0x10 = 0;
  this->LastRebroadcastFrameId = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->StatisticCriticalSection,4000);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SettingsCriticalSection,4000);
  if ((param_1->Object == (FLiveLinkTimedDataInput *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTimedDataGroup.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkSubject.cpp"
                         ,0x1f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FLiveLinkSubject *)(*pcVar2)();
    return pFVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FLiveLinkSubject @ 14d016500

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FLiveLinkSubject::~FLiveLinkSubject(FLiveLinkSubject *this)

{
  longlong *plVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  FName FVar4;
  TNode *pTVar5;
  FScriptContainerElement *pFVar6;
  FLiveLinkTimedDataInput *pFVar7;
  atomic<int> aVar8;
  int iVar9;
  FName *pFVar10;
  FModuleManager *this_00;
  IModuleInterface *pIVar11;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  FName local_res8;
  
  this->_padding_ = (longlong)&_vftable__for__ILiveLinkSubject__;
  plVar1 = &this->_padding_;
  *plVar1 = (longlong)&_vftable__for__ITimedDataInputChannel__;
  pTVar12 = (this->TimedDataGroup).WeakReferenceCount.ReferenceController;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar12->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d016554;
      }
      LOCK();
      aVar8 = pTVar12->SharedReferenceCount;
      bVar13 = aVar3 == aVar8;
      if (bVar13) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar8 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar8;
    } while (!bVar13);
    pFVar7 = (this->TimedDataGroup).Object;
    if (pFVar7 != (FLiveLinkTimedDataInput *)0x0) {
      (**(code **)(pFVar7->_padding_ + 0x60))(pFVar7,plVar1);
    }
  }
LAB_14d016554:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  pFVar10 = ::FName::FName(&local_res8,L"TimeManagement");
  FVar4 = *pFVar10;
  this_00 = FModuleManager::Get();
  pIVar11 = FModuleManager::LoadModuleChecked(this_00,FVar4);
  this_01 = (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
            (**(code **)((longlong)*pIVar11 + 0x40))(pIVar11);
  local_res8 = (FName)plVar1;
  iVar9 = TArray<ITimedDataInputChannel_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
                    ((TArray<ITimedDataInputChannel_*,TSizedDefaultAllocator<32>_> *)
                     &this_01[1].field_0x10,(ITimedDataInputChannel **)&local_res8,Default);
  if (0 < iVar9) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(this_01);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SettingsCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->StatisticCriticalSection);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnStateChangedDelegate);
  pTVar12 = (this->TimedDataGroup).WeakReferenceCount.ReferenceController;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &pTVar12->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar12->_padding_ + 8))(pTVar12,1);
    }
  }
  FStructOnScope::~FStructOnScope(&(this->FrameSnapshot).FrameData.WrappedStruct);
  FStructOnScope::~FStructOnScope((FStructOnScope *)&this->FrameSnapshot);
  pTVar5 = (this->ReceivedOrderedFrames).Tail;
  while (pTVar5 != (TNode *)0x0) {
    (this->ReceivedOrderedFrames).Tail = pTVar5->NextNode;
    ::operator_delete(pTVar5,0x10);
    pTVar5 = (this->ReceivedOrderedFrames).Tail;
  }
  DestructItems<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int>
            ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)
             (this->FrameData).AllocatorInstance.Data,(this->FrameData).ArrayNum);
  pFVar6 = (this->FrameData).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  if ((this->OverrideStaticData).bIsSet != false) {
    FStructOnScope::~FStructOnScope((FStructOnScope *)&this->OverrideStaticData);
  }
  FStructOnScope::~FStructOnScope(&(this->StaticData).WrappedStruct);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SubjectRemapper).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,int>
            ((TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *)
             (this->FrameTranslators).AllocatorInstance.Data,(this->FrameTranslators).ArrayNum);
  pFVar6 = (this->FrameTranslators).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->FrameInterpolationProcessor).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<ILiveLinkFramePreProcessorWorker,1>,int>
            ((TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)
             (this->FramePreProcessors).AllocatorInstance.Data,(this->FramePreProcessors).ArrayNum);
  pFVar6 = (this->FramePreProcessors).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  this->_padding_ = (longlong)&___7ILiveLinkSubject__6B_;
  return;
}

// AddFrameData @ 14d020880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkSubject::AddFrameData
          (FLiveLinkSubject *this,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_1)

{
  int *piVar1;
  TOptional<ELiveLinkSourceMode> *pTVar2;
  TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_> *pTVar3;
  TAtomic<int> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong *plVar6;
  TNode *pTVar7;
  code *pcVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  FName *pFVar13;
  FString *pFVar14;
  FText *pFVar15;
  FLiveLinkWorldTime *pFVar16;
  ForAnyElementType FVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  TNode *pTVar20;
  longlong lVar21;
  wchar_t *pwVar22;
  int iVar23;
  ELiveLinkSourceMode EVar24;
  wchar_t *pwVar25;
  FScriptContainerElement *pFVar26;
  double dVar27;
  double dVar28;
  undefined1 local_res18 [8];
  int local_res20;
  undefined2 local_118 [2];
  uint local_114;
  FFrameNumber local_110 [2];
  FScriptContainerElement *local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  FText local_c8;
  FText local_b8;
  FString local_a8;
  FTimecode local_98 [4];
  
  bVar10 = ValidateFrameData(this,param_1);
  if (!bVar10) {
    return;
  }
  if ((this->CachedSettings).BufferSettings.MaxNumberOfFrameToBuffered <= (this->FrameData).ArrayNum
     ) {
    RemoveFrames(this,1);
  }
  EVar24 = (this->CachedSettings).SourceMode;
  if ((this->ModeOverride).bIsSet != false) {
    (this->ModeOverride).bIsSet = false;
  }
  lVar12 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x10))(param_1);
  if (lVar12 != 0) {
    lVar12 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x18))(param_1);
    pFVar13 = ::FName::FName(&local_d0,L"ForceSync");
    pFVar14 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::Find((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                      *)(lVar12 + 0x10),*pFVar13);
    if (pFVar14 != (FString *)0x0) {
      if ((pFVar14->Data).ArrayNum == 0) {
        pwVar25 = L"";
      }
      else {
        pwVar25 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
      bVar10 = FToBoolHelper::FromCStringWide(pwVar25);
      EVar24 = Latest;
      if (bVar10) {
        pTVar2 = &this->ModeOverride;
        if ((TOptional<ELiveLinkSourceMode> *)local_118 != pTVar2) {
          pTVar2->TypedValue = Latest;
          pTVar2->bIsSet = true;
        }
        RemoveFrames(this,(this->FrameData).ArrayNum);
        EVar24 = Latest;
      }
    }
  }
  if (EVar24 == Latest) {
LAB_14d020ba5:
    pFVar16 = (FLiveLinkWorldTime *)
              (**(code **)((param_1->WrappedStruct)._padding_ + 0x18))(param_1);
  }
  else {
    if (EVar24 != EngineTime) {
      if (EVar24 == Timecode) {
        if ((0 < (this->LastTimecodeFrameRate).Denominator) &&
           ((lVar12 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x18))(param_1),
            *(int *)(lVar12 + 0x68) != (this->LastTimecodeFrameRate).Numerator ||
            (*(int *)(lVar12 + 0x6c) != (this->LastTimecodeFrameRate).Denominator)))) {
          pFVar15 = FFrameRate::ToPrettyText(&this->LastTimecodeFrameRate,&local_b8);
          pFVar14 = FText::ToString(pFVar15);
          if ((pFVar14->Data).ArrayNum == 0) {
            pwVar25 = L"";
          }
          else {
            pwVar25 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
          }
          lVar12 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x18))(param_1);
          pFVar15 = FFrameRate::ToPrettyText((FFrameRate *)(lVar12 + 0x68),&local_c8);
          pFVar14 = FText::ToString(pFVar15);
          if ((pFVar14->Data).ArrayNum == 0) {
            pwVar22 = L"";
          }
          else {
            pwVar22 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
          }
          ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_100);
          FVar17.Data = (FScriptContainerElement *)L"";
          if (local_100.Data.ArrayNum != 0) {
            FVar17.Data = local_100.Data.AllocatorInstance.Data;
          }
          FLiveLinkLog::Warning<wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
                    ((TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
                      )0x152aa0c60,(wchar_t *)FVar17.Data,pwVar22,pwVar25);
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
          if (local_c8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
          }
          if (local_b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
          }
          TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_>::Reset
                    (&this->FrameData,0);
          TQueue<int,1>::Empty(&this->ReceivedOrderedFrames);
        }
        lVar12 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x18))(param_1);
        this->LastTimecodeFrameRate = *(FFrameRate *)(lVar12 + 0x68);
        pFVar16 = (FLiveLinkWorldTime *)
                  (**(code **)((param_1->WrappedStruct)._padding_ + 0x18))(param_1);
        lVar12 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x18))(param_1);
        local_res20 = FindNewFrame_SceneTime(this,(FQualifiedFrameTime *)(lVar12 + 0x60),pFVar16);
        goto LAB_14d020bb9;
      }
      goto LAB_14d020ba5;
    }
    pFVar16 = (FLiveLinkWorldTime *)
              (**(code **)((param_1->WrappedStruct)._padding_ + 0x18))(param_1);
    if (((this->CachedSettings).BufferSettings.bValidEngineTimeEnabled != false) &&
       (dVar27 = (((double)FApp::CurrentTime -
                  (double)(this->CachedSettings).BufferSettings.EngineTimeOffset) -
                 (double)(this->CachedSettings).BufferSettings.ValidEngineTime) -
                 (this->CachedSettings).BufferSettings.EngineTimeClockOffset,
       pFVar16->Time <= dVar27 && dVar27 != pFVar16->Time)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&NAME_InvalidWorldTime,"LiveLinkSubject_InvalidWorldTIme");
        _Init_thread_footer(&::_TSS0);
      }
      ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_f0);
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_f0.Data.ArrayNum != 0) {
        FVar17.Data = local_f0.Data.AllocatorInstance.Data;
      }
      FLiveLinkLog::Log_Internal<wchar_t_const_*>
                (Warning,NAME_InvalidWorldTime,&this->SubjectKey,
                 (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa0fc0,
                 (wchar_t *)FVar17.Data);
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
    }
  }
  local_res20 = FindNewFrame_WorldTimeInternal(this,pFVar16);
LAB_14d020bb9:
  if (local_res20 < 0) {
    LOCK();
    pTVar4 = &(this->EvaluationStatistics).FrameDrop;
    *pTVar4 = (TAtomic<int>)((int)*pTVar4 + 1);
    UNLOCK();
  }
  else {
    local_114 = (this->FramePreProcessors).ArrayNum;
    uVar18 = (ulonglong)(int)local_114;
    pFVar26 = (this->FramePreProcessors).AllocatorInstance.Data;
    local_108 = pFVar26 + uVar18 * 0x10;
    while( true ) {
      pFVar9 = local_108;
      if ((this->FramePreProcessors).ArrayNum != (int)uVar18) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<ILiveLinkFramePreProcessorWorker,1>,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar26 == pFVar9) break;
      pTVar5 = *(TReferenceControllerBase<1> **)(pFVar26 + 8);
      plVar6 = *(longlong **)pFVar26;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((plVar6 == (longlong *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = *(code **)(*plVar6 + 0x10);
      uVar19 = (**(code **)(this->_padding_ + 0x50))(this,1);
      (*pcVar8)(plVar6,uVar19,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      uVar18 = (ulonglong)local_114;
      pFVar26 = pFVar26 + 0x10;
    }
    iVar23 = this->NextIdentifier;
    this->NextIdentifier = iVar23 + 1;
    pTVar20 = ::operator_new(0x10);
    if (pTVar20 != (TNode *)0x0) {
      pTVar20->NextNode = (TNode *)0x0;
      pTVar20->Item = iVar23;
      pTVar7 = (this->ReceivedOrderedFrames).Head;
      (this->ReceivedOrderedFrames).Head = pTVar20;
      pTVar7->NextNode = pTVar20;
    }
    lVar12 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x18))(param_1);
    *(int *)(lVar12 + 0x98) = iVar23;
    lVar12 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x18))(param_1);
    lVar21 = (**(code **)((param_1->WrappedStruct)._padding_ + 0x18))(param_1);
    local_110[0].Value = *(int *)(lVar21 + 0x60);
    dVar28 = (double)((FFrameRate *)(lVar12 + 0x68))->Numerator / (double)*(int *)(lVar12 + 0x6c);
    dVar27 = dVar28 - ___real_403df853e2556b29;
    if (((__real_3e45798ee2308c3a <
          (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar27,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
        (dVar28 = dVar28 - ___real_404df853e2556b29,
        __real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
       (bVar10 = FTimecode::UseDropFormatTimecodeByDefaultWhenSupported(), !bVar10)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    FTimecode::FromFrameNumber(local_98,local_110,(FFrameRate *)(lVar12 + 0x68),bVar10);
    iVar23 = local_res20;
    if (5 < (byte)LogLiveLink._0_1_) {
      (**(code **)((param_1->WrappedStruct)._padding_ + 0x18))(param_1);
      (**(code **)((param_1->WrappedStruct)._padding_ + 0x18))(param_1);
      (**(code **)((param_1->WrappedStruct)._padding_ + 0x18))(param_1);
      (**(code **)((param_1->WrappedStruct)._padding_ + 0x18))(param_1);
      FTimecode::ToString(local_98,&local_a8,false,false);
      ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_e0);
      iVar23 = local_res20;
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLink);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    pTVar3 = &this->FrameData;
    pFVar26 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar26 <= param_1) && (param_1 < pFVar26 + (longlong)(this->FrameData).ArrayMax * 0x28))
       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar11 = (this->FrameData).ArrayNum;
    piVar1 = &(this->FrameData).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->FrameData).ArrayNum = iVar11 + 1;
    pFVar26 = (pTVar3->AllocatorInstance).Data + (longlong)iVar23 * 0x28;
    memmove(pFVar26 + 0x28,pFVar26,(longlong)(iVar11 - iVar23) * 0x28);
    FStructOnScope::FStructOnScope
              ((FStructOnScope *)((pTVar3->AllocatorInstance).Data + (longlong)iVar23 * 0x28),
               &param_1->WrappedStruct);
    if (((this->CachedSettings).BufferSettings.bGenerateSubFrame != false) &&
       ((this->CachedSettings).SourceMode == Timecode)) {
      AdjustSubFrame_SceneTime(this,iVar23);
    }
  }
  this->LastPushTime = (double)FApp::CurrentTime;
  return;
}

// AdjustSubFrame_SceneTime @ 14d022cb0

void __thiscall FLiveLinkSubject::AdjustSubFrame_SceneTime(FLiveLinkSubject *this,int param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  <lambda_1> local_res10;
  FString local_78 [4];
  
  uVar11 = (ulonglong)param_1;
  fVar16 = (((float)(this->LastTimecodeFrameRate).Numerator /
            (float)(this->LastTimecodeFrameRate).Denominator) *
           (float)(this->CachedSettings).BufferSettings.SourceTimecodeFrameRate.Denominator) /
           (float)(this->CachedSettings).BufferSettings.SourceTimecodeFrameRate.Numerator;
  if (((this->CachedSettings).BufferSettings.bGenerateSubFrame == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CachedSettings.BufferSettings.bGenerateSubFrame",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkSubject.cpp"
                         ,0x2c1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar10 = 0;
  if (param_1 < (this->FrameData).ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar13 = uVar11 * 0x28;
  lVar7 = (**(code **)(*(longlong *)((this->FrameData).AllocatorInstance.Data + lVar13) + 0x18))();
  iVar1 = *(int *)(lVar7 + 0x60);
  lVar7 = lVar13;
  for (uVar10 = param_1; -1 < (int)uVar10; uVar10 = uVar10 - 1) {
    uVar6 = 0;
    if ((int)uVar10 < (this->FrameData).ArrayNum) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar8 = (**(code **)(*(longlong *)((this->FrameData).AllocatorInstance.Data + lVar7) + 0x18))();
    if (iVar1 != *(int *)(lVar8 + 0x60)) break;
    lVar7 = lVar7 + -0x28;
  }
  iVar2 = (this->FrameData).ArrayNum;
  uVar6 = iVar2 - 1;
  if ((int)(uVar10 + 1) < (int)uVar6) {
    uVar6 = uVar10 + 1;
  }
  uVar10 = 0;
  if (0 < (int)uVar6) {
    uVar10 = uVar6;
  }
  if (param_1 < iVar2) {
    do {
      param_1 = (int)uVar11;
      uVar6 = 0;
      if (param_1 < (this->FrameData).ArrayNum) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar7 = (**(code **)(*(longlong *)((this->FrameData).AllocatorInstance.Data + lVar13) + 0x18))
                        ();
      if (iVar1 != *(int *)(lVar7 + 0x60)) break;
      param_1 = param_1 + 1;
      uVar11 = (ulonglong)(uint)param_1;
      lVar13 = lVar13 + 0x28;
    } while (param_1 < (this->FrameData).ArrayNum);
  }
  uVar6 = (this->FrameData).ArrayNum - 1;
  if (param_1 < (int)uVar6) {
    uVar6 = param_1;
  }
  uVar12 = uVar10;
  if ((int)uVar10 < (int)uVar6) {
    uVar12 = uVar6;
  }
  if ((int)uVar12 < (int)uVar10) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("LowerInclusiveLimit <= HigherInclusiveLimit",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkSubject.cpp"
                       ,0x2dd,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if ((int)uVar10 < (int)uVar12) {
    uVar6 = 0;
    if ((int)uVar10 < (this->FrameData).ArrayNum) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->FrameData).AllocatorInstance.Data;
    lVar7 = (longlong)(int)uVar10;
    lVar13 = lVar7 * 0x28;
    iVar2 = (uVar12 - uVar10) + 1;
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int,_FLiveLinkSubject::AdjustSubFrame_SceneTime_::__l29::<lambda_1>,TLess<void>_>
              ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)(pFVar3 + lVar13),iVar2,
               local_res10,(TLess<void>)local_res10);
    fVar15 = __real_3f800000;
    if ((int)(__real_3f800000 / fVar16) <= (int)(uVar12 - uVar10)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&NAME_TooManyFrameForGenerateSubFrame,
                       "LiveLinkSubject_TooManyFrameForGenerateSubFrame");
        _Init_thread_footer(&::_TSS0);
      }
      ::FName::ToString(&(this->SubjectKey).SubjectName.Name,local_78);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_78[0].Data.ArrayNum != 0) {
        FVar9.Data = local_78[0].Data.AllocatorInstance.Data;
      }
      FLiveLinkLog::Log_Internal<wchar_t_const_*>
                (Warning,NAME_TooManyFrameForGenerateSubFrame,&this->SubjectKey,
                 (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa1620,
                 (wchar_t *)FVar9.Data);
      if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
      }
      fVar16 = fVar15 / (float)iVar2;
    }
    fVar15 = 0.0;
    if (lVar7 <= (int)uVar12) {
      lVar7 = ((int)uVar12 - lVar7) + 1;
      do {
        fVar14 = ::FFrameTime::MaxSubframe;
        if (fVar15 <= ::FFrameTime::MaxSubframe) {
          fVar14 = fVar15;
        }
        if (fVar14 <= 0.0) {
          fVar14 = 0.0;
        }
        uVar6 = 0;
        if ((int)uVar10 < (this->FrameData).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar8 = (**(code **)(*(longlong *)((this->FrameData).AllocatorInstance.Data + lVar13) + 0x18
                            ))();
        fVar15 = fVar15 + fVar16;
        uVar10 = uVar10 + 1;
        lVar13 = lVar13 + 0x28;
        *(ulonglong *)(lVar8 + 0x60) = CONCAT44(fVar14,iVar1);
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  return;
}

// CacheSettings @ 14d028170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkSubject::CacheSettings
          (FLiveLinkSubject *this,ULiveLinkSourceSettings *param_1,ULiveLinkSubjectSettings *param_2
          )

{
  int *piVar1;
  TSharedPtr<ILiveLinkFrameInterpolationProcessorWorker,1> *pTVar2;
  TOptional<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_> *this_00;
  ELiveLinkSourceMode EVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TNode *pTVar6;
  TNode *pTVar7;
  TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  ULiveLinkSubjectRemapper *pUVar10;
  ULiveLinkFrameInterpolationProcessor *pUVar11;
  TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *pTVar12;
  code *pcVar13;
  double dVar14;
  undefined8 uVar15;
  bool bVar16;
  undefined3 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined7 uVar21;
  void *pvVar22;
  bool bVar23;
  char cVar24;
  int iVar25;
  longlong *plVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  ILiveLinkSubjectRemapperWorker *pIVar29;
  FScriptContainerElement *pFVar30;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined1 local_f8 [8];
  ILiveLinkSubjectRemapperWorker *local_f0;
  FSharedReferencer<1> local_e8;
  longlong local_e0;
  TReferenceControllerBase<1> *local_d8;
  longlong local_d0;
  TReferenceControllerBase<1> *local_c8;
  undefined8 local_c0;
  FSharedReferencer<1> FStack_b8;
  undefined8 local_b0;
  FSharedReferencer<1> FStack_a8;
  undefined1 local_a0 [8];
  TReferenceControllerBase<1> *local_98;
  FStructOnScope local_90;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  if (&this->SettingsCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->SettingsCriticalSection);
  if (param_1 == (ULiveLinkSourceSettings *)0x0) goto LAB_14d02838a;
  EVar3 = param_1->Mode;
  if ((EVar3 == Timecode) &&
     ((param_1->BufferSettings).bGenerateSubFrame !=
      (this->CachedSettings).BufferSettings.bGenerateSubFrame)) {
    bVar23 = true;
LAB_14d0281e0:
    if ((param_1->BufferSettings).bUseTimecodeSmoothLatest ==
        (this->CachedSettings).BufferSettings.bUseTimecodeSmoothLatest) goto LAB_14d0281f0;
    bVar16 = true;
  }
  else {
    bVar23 = false;
    if (EVar3 == Timecode) goto LAB_14d0281e0;
LAB_14d0281f0:
    bVar16 = false;
  }
  if (((EVar3 != (this->CachedSettings).SourceMode) || (bVar23)) || (bVar16)) {
    piVar1 = &(this->FrameData).ArrayMax;
    pFVar5 = (this->FrameData).AllocatorInstance.Data;
    iVar4 = (this->FrameData).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int>
                ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar5,iVar4);
      (this->FrameData).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&(this->FrameData).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int>
                ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar5,iVar4);
      (this->FrameData).ArrayNum = 0;
    }
    while (pTVar6 = ((this->ReceivedOrderedFrames).Tail)->NextNode, pTVar6 != (TNode *)0x0) {
      pTVar7 = (this->ReceivedOrderedFrames).Tail;
      (this->ReceivedOrderedFrames).Tail = pTVar6;
      pTVar6->Item = 0;
      ::operator_delete(pTVar7,0x10);
    }
  }
  (this->CachedSettings).SourceMode = param_1->Mode;
  uVar17 = *(undefined3 *)&(param_1->BufferSettings).field_0x1;
  fVar18 = (param_1->BufferSettings).ValidEngineTime;
  fVar19 = (param_1->BufferSettings).EngineTimeOffset;
  uVar20 = *(undefined4 *)&(param_1->BufferSettings).field_0xc;
  (this->CachedSettings).BufferSettings.bValidEngineTimeEnabled =
       (param_1->BufferSettings).bValidEngineTimeEnabled;
  *(undefined3 *)&(this->CachedSettings).BufferSettings.field_0x1 = uVar17;
  (this->CachedSettings).BufferSettings.ValidEngineTime = fVar18;
  (this->CachedSettings).BufferSettings.EngineTimeOffset = fVar19;
  *(undefined4 *)&(this->CachedSettings).BufferSettings.field_0xc = uVar20;
  dVar14 = (param_1->BufferSettings).SmoothEngineTimeOffset;
  (this->CachedSettings).BufferSettings.EngineTimeClockOffset =
       (param_1->BufferSettings).EngineTimeClockOffset;
  (this->CachedSettings).BufferSettings.SmoothEngineTimeOffset = dVar14;
  uVar17 = *(undefined3 *)&(param_1->BufferSettings).field_0x21;
  iVar4 = (param_1->BufferSettings).DetectedFrameRate.Numerator;
  uVar15 = *(undefined8 *)&(param_1->BufferSettings).DetectedFrameRate.Denominator;
  (this->CachedSettings).BufferSettings.bGenerateSubFrame =
       (param_1->BufferSettings).bGenerateSubFrame;
  *(undefined3 *)&(this->CachedSettings).BufferSettings.field_0x21 = uVar17;
  (this->CachedSettings).BufferSettings.DetectedFrameRate.Numerator = iVar4;
  *(undefined8 *)&(this->CachedSettings).BufferSettings.DetectedFrameRate.Denominator = uVar15;
  bVar23 = (param_1->BufferSettings).bValidTimecodeFrameEnabled;
  uVar17 = *(undefined3 *)&(param_1->BufferSettings).field_0x39;
  iVar4 = (param_1->BufferSettings).ValidTimecodeFrame;
  (this->CachedSettings).BufferSettings.SourceTimecodeFrameRate =
       (param_1->BufferSettings).SourceTimecodeFrameRate;
  (this->CachedSettings).BufferSettings.bValidTimecodeFrameEnabled = bVar23;
  *(undefined3 *)&(this->CachedSettings).BufferSettings.field_0x39 = uVar17;
  (this->CachedSettings).BufferSettings.ValidTimecodeFrame = iVar4;
  uVar20 = *(undefined4 *)&(param_1->BufferSettings).field_0x44;
  dVar14 = (param_1->BufferSettings).TimecodeClockOffset;
  (this->CachedSettings).BufferSettings.TimecodeFrameOffset =
       (param_1->BufferSettings).TimecodeFrameOffset;
  *(undefined4 *)&(this->CachedSettings).BufferSettings.field_0x44 = uVar20;
  (this->CachedSettings).BufferSettings.TimecodeClockOffset = dVar14;
  iVar4 = (param_1->BufferSettings).MaxNumberOfFrameToBuffered;
  bVar23 = (param_1->BufferSettings).bKeepAtLeastOneFrame;
  uVar21 = *(undefined7 *)&(param_1->BufferSettings).field_0x59;
  (this->CachedSettings).BufferSettings.LatestOffset = (param_1->BufferSettings).LatestOffset;
  (this->CachedSettings).BufferSettings.MaxNumberOfFrameToBuffered = iVar4;
  (this->CachedSettings).BufferSettings.bKeepAtLeastOneFrame = bVar23;
  *(undefined7 *)&(this->CachedSettings).BufferSettings.field_0x59 = uVar21;
  iVar4 = (this->CachedSettings).BufferSettings.MaxNumberOfFrameToBuffered;
  iVar25 = 1;
  if (1 < iVar4) {
    iVar25 = iVar4;
  }
  (this->CachedSettings).BufferSettings.MaxNumberOfFrameToBuffered = iVar25;
  pvVar22 = ThreadLocalStoragePointer;
  if (((this->CachedSettings).BufferSettings.bGenerateSubFrame != false) &&
     ((double)(this->CachedSettings).BufferSettings.SourceTimecodeFrameRate.Numerator /
      (double)(this->CachedSettings).BufferSettings.SourceTimecodeFrameRate.Denominator <=
      (double)(this->LastTimecodeFrameRate).Numerator /
      (double)(this->LastTimecodeFrameRate).Denominator)) {
    uVar28 = (ulonglong)_tls_index;
    (this->CachedSettings).BufferSettings.bGenerateSubFrame = false;
    if ((*(int *)(*(longlong *)((longlong)pvVar22 + uVar28 * 8) + 0x9d4c) < ::_TSS0) &&
       (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&NAME_CanGenerateSubFrame,"LiveLinkSubject_CantGenerateSubFrame");
      _Init_thread_footer(&::_TSS0);
    }
    FLiveLinkLog::Log_Internal<>
              (Warning,NAME_CanGenerateSubFrame,&this->SubjectKey,
               (TCheckedFormatStringPrivate<wchar_t>)0x152aa1ad0);
  }
LAB_14d02838a:
  if (param_2 != (ULiveLinkSubjectSettings *)0x0) {
    piVar1 = &(this->FramePreProcessors).ArrayMax;
    param_2->FrameRate = this->LastTimecodeFrameRate;
    this->bRebroadcastSubject = param_2->bRebroadcastSubject;
    pTVar8 = (TSharedPtr<ILiveLinkFramePreProcessorWorker,1> *)
             (this->FramePreProcessors).AllocatorInstance.Data;
    iVar4 = (this->FramePreProcessors).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<TSharedPtr<ILiveLinkFramePreProcessorWorker,1>,int>(pTVar8,iVar4);
      (this->FramePreProcessors).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->FramePreProcessors).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TSharedPtr<ILiveLinkFramePreProcessorWorker,1>,int>(pTVar8,iVar4);
      (this->FramePreProcessors).ArrayNum = 0;
    }
    pFVar30 = (param_2->PreProcessors).AllocatorInstance.Data;
    iVar4 = (param_2->PreProcessors).ArrayNum;
    pFVar5 = pFVar30 + (longlong)iVar4 * 8;
    while( true ) {
      if ((param_2->PreProcessors).ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<ULiveLinkFramePreProcessor>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar30 == pFVar5) break;
      plVar26 = *(longlong **)pFVar30;
      if (plVar26 != (longlong *)0x0) {
        (**(code **)(*plVar26 + 0x2b8))(plVar26,&local_e0);
        if (local_e0 != 0) {
          pFVar9 = (this->FramePreProcessors).AllocatorInstance.Data;
          if (((pFVar9 <= (FScriptContainerElement *)&local_e0) &&
              ((FScriptContainerElement *)&local_e0 < pFVar9 + (longlong)*piVar1 * 0x10)) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar23)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar25 = (this->FramePreProcessors).ArrayNum;
          if (iVar25 == *piVar1) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(this->FramePreProcessors).AllocatorInstance,piVar1);
          }
          (this->FramePreProcessors).ArrayNum = iVar25 + 1;
          pFVar9 = (this->FramePreProcessors).AllocatorInstance.Data;
          *(longlong *)(pFVar9 + (longlong)iVar25 * 0x10) = local_e0;
          *(TReferenceControllerBase<1> **)(pFVar9 + (longlong)iVar25 * 0x10 + 8) = local_d8;
          if (local_d8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_d8->SharedReferenceCount = (atomic<int>)((int)local_d8->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8);
      }
      pFVar30 = pFVar30 + 8;
    }
    local_c0 = 0;
    FStack_b8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->SubjectRemapper != (TSharedPtr<ILiveLinkSubjectRemapperWorker,1> *)&local_c0) {
      (this->SubjectRemapper).Object = (ILiveLinkSubjectRemapperWorker *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SubjectRemapper).SharedReferenceCount,&FStack_b8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_b8.ReferenceController);
    pUVar10 = (param_2->Remapper).field0_0x0.DebugPtr;
    if (pUVar10 != (ULiveLinkSubjectRemapper *)0x0) {
      plVar26 = (longlong *)(**(code **)(pUVar10->_padding_ + 0x2b8))(pUVar10,local_a0);
      if (((*plVar26 == 0) || (((param_2->Remapper).field0_0x0.DebugPtr)->bDirty != false)) ||
         (this->bNeedsStaticRemap != false)) {
        bVar23 = true;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98);
        this->bNeedsStaticRemap = false;
        pUVar10 = (param_2->Remapper).field0_0x0.DebugPtr;
        puVar27 = (undefined8 *)(**(code **)(pUVar10->_padding_ + 0x2b0))(pUVar10,local_58);
        local_e8.ReferenceController = (TReferenceControllerBase<1> *)puVar27[1];
        pIVar29 = (ILiveLinkSubjectRemapperWorker *)*puVar27;
        puVar27[1] = 0;
        *puVar27 = 0;
        local_60 = local_50;
      }
      else {
        bVar23 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98);
        this->bNeedsStaticRemap = false;
        pUVar10 = (param_2->Remapper).field0_0x0.DebugPtr;
        puVar27 = (undefined8 *)(**(code **)(pUVar10->_padding_ + 0x2b8))(pUVar10,local_68);
        local_e8.ReferenceController = (TReferenceControllerBase<1> *)puVar27[1];
        pIVar29 = (ILiveLinkSubjectRemapperWorker *)*puVar27;
        puVar27[1] = 0;
        *puVar27 = 0;
      }
      local_f0 = pIVar29;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
      if ((pIVar29 != (ILiveLinkSubjectRemapperWorker *)0x0) && (bVar23)) {
        ((param_2->Remapper).field0_0x0.DebugPtr)->bDirty = false;
        cVar24 = (**(code **)(((param_2->Remapper).field0_0x0.DebugPtr)->_padding_ + 0x2d0))();
        if (cVar24 == '\0') {
          (**(code **)(this->_padding_ + 0x20))(this);
          if ((this->OverrideStaticData).bIsSet != false) {
            FStructOnScope::~FStructOnScope((FStructOnScope *)&this->OverrideStaticData);
            (this->OverrideStaticData).bIsSet = false;
          }
        }
        else {
          FStructOnScope::FStructOnScope(&local_90);
          FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::InitializeWith
                    ((FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *)&local_90,&this->StaticData
                    );
          (**(code **)((longlong)*pIVar29 + 8))(pIVar29,&local_90);
          if ((pIVar29 == (ILiveLinkSubjectRemapperWorker *)0x0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar23)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          cVar24 = (**(code **)((longlong)*pIVar29 + 0x18))(pIVar29,&this->StaticData);
          if (cVar24 == '\0') {
            if (2 < (byte)LogLiveLink._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLink);
            }
            FStructOnScope::~FStructOnScope(&local_90);
          }
          else {
            cVar24 = (**(code **)(this->_padding_ + 0x40))(this);
            if (cVar24 != '\0') {
              if ((pIVar29 == (ILiveLinkSubjectRemapperWorker *)0x0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar23)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              (**(code **)((longlong)*pIVar29 + 8))(pIVar29,&this->FrameSnapshot);
              if ((pIVar29 == (ILiveLinkSubjectRemapperWorker *)0x0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar23)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              (**(code **)((longlong)*pIVar29 + 0x10))(pIVar29,&this->FrameSnapshot);
            }
            iVar4 = (this->FrameData).ArrayNum;
            pFVar30 = (this->FrameData).AllocatorInstance.Data;
            pFVar5 = pFVar30 + (longlong)iVar4 * 0x28;
            while( true ) {
              if ((this->FrameData).ArrayNum != iVar4) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_res20);
              }
              if (pFVar30 == pFVar5) break;
              if ((pIVar29 == (ILiveLinkSubjectRemapperWorker *)0x0) &&
                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar23)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              (**(code **)((longlong)*pIVar29 + 0x10))(pIVar29);
              pFVar30 = pFVar30 + 0x28;
            }
            this_00 = &this->OverrideStaticData;
            if ((TOptional<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_> *)&local_90 != this_00
               ) {
              if ((this->OverrideStaticData).bIsSet != false) {
                FStructOnScope::~FStructOnScope((FStructOnScope *)this_00);
              }
              FStructOnScope::FStructOnScope((FStructOnScope *)this_00,&local_90);
              (this->OverrideStaticData).bIsSet = true;
            }
            (**(code **)(this->_padding_ + 0x80))(this,0);
            FStructOnScope::~FStructOnScope(&local_90);
          }
        }
      }
      if (&this->SubjectRemapper != (TSharedPtr<ILiveLinkSubjectRemapperWorker,1> *)&local_f0) {
        (this->SubjectRemapper).Object = pIVar29;
        local_f0 = (ILiveLinkSubjectRemapperWorker *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->SubjectRemapper).SharedReferenceCount,&local_e8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.ReferenceController);
    }
    pTVar2 = &this->FrameInterpolationProcessor;
    local_b0 = 0;
    FStack_a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar2 != (TSharedPtr<ILiveLinkFrameInterpolationProcessorWorker,1> *)&local_b0) {
      pTVar2->Object = (ILiveLinkFrameInterpolationProcessorWorker *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->FrameInterpolationProcessor).SharedReferenceCount,&FStack_a8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_a8.ReferenceController);
    pUVar11 = (param_2->InterpolationProcessor).field0_0x0.DebugPtr;
    if (pUVar11 != (ULiveLinkFrameInterpolationProcessor *)0x0) {
      puVar27 = (undefined8 *)(**(code **)(*(longlong *)pUVar11 + 0x2b8))(pUVar11,local_48);
      if (pTVar2 != (TSharedPtr<ILiveLinkFrameInterpolationProcessorWorker,1> *)puVar27) {
        pTVar2->Object = (ILiveLinkFrameInterpolationProcessorWorker *)*puVar27;
        *puVar27 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->FrameInterpolationProcessor).SharedReferenceCount,
                   (FSharedReferencer<1> *)(puVar27 + 1));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    }
    piVar1 = &(this->FrameTranslators).ArrayMax;
    pTVar12 = (TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *)
              (this->FrameTranslators).AllocatorInstance.Data;
    iVar4 = (this->FrameTranslators).ArrayNum;
    if ((this->FrameTranslators).ArrayMax < 0) {
      DestructItems<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,int>(pTVar12,iVar4);
      (this->FrameTranslators).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->FrameTranslators).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,int>(pTVar12,iVar4);
      (this->FrameTranslators).ArrayNum = 0;
    }
    pFVar30 = (param_2->Translators).AllocatorInstance.Data;
    iVar4 = (param_2->Translators).ArrayNum;
    pFVar5 = pFVar30 + (longlong)iVar4 * 8;
    while( true ) {
      if ((param_2->Translators).ArrayNum != iVar4) {
        local_f8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<ULiveLinkFrameTranslator>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_f8);
      }
      if (pFVar30 == pFVar5) break;
      plVar26 = *(longlong **)pFVar30;
      if (plVar26 != (longlong *)0x0) {
        (**(code **)(*plVar26 + 0x2c0))(plVar26,&local_d0);
        if (local_d0 != 0) {
          pFVar9 = (this->FrameTranslators).AllocatorInstance.Data;
          if (((pFVar9 <= (FScriptContainerElement *)&local_d0) &&
              ((FScriptContainerElement *)&local_d0 < pFVar9 + (longlong)*piVar1 * 0x10)) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar23)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar25 = (this->FrameTranslators).ArrayNum;
          if (iVar25 == *piVar1) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(this->FrameTranslators).AllocatorInstance,piVar1);
          }
          (this->FrameTranslators).ArrayNum = iVar25 + 1;
          pFVar9 = (this->FrameTranslators).AllocatorInstance.Data;
          *(longlong *)(pFVar9 + (longlong)iVar25 * 0x10) = local_d0;
          *(TReferenceControllerBase<1> **)(pFVar9 + (longlong)iVar25 * 0x10 + 8) = local_c8;
          if (local_c8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_c8->SharedReferenceCount = (atomic<int>)((int)local_c8->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c8);
      }
      pFVar30 = pFVar30 + 8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d028a67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->SettingsCriticalSection);
  return;
}

// ClearFrames @ 14d029770

void __thiscall FLiveLinkSubject::ClearFrames(FLiveLinkSubject *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  
  (**(code **)((this->FrameSnapshot).StaticData.WrappedStruct._padding_ + 0x48))();
  (**(code **)((this->FrameSnapshot).FrameData.WrappedStruct._padding_ + 0x48))();
  piVar1 = &(this->FrameData).ArrayMax;
  pFVar3 = (this->FrameData).AllocatorInstance.Data;
  iVar2 = (this->FrameData).ArrayNum;
  if ((this->FrameData).ArrayMax < 0) {
    DestructItems<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int>
              ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar3,iVar2);
    (this->FrameData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->FrameData).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int>
              ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar3,iVar2);
    (this->FrameData).ArrayNum = 0;
  }
  while (pTVar4 = ((this->ReceivedOrderedFrames).Tail)->NextNode, pTVar4 != (TNode *)0x0) {
    pTVar5 = (this->ReceivedOrderedFrames).Tail;
    (this->ReceivedOrderedFrames).Tail = pTVar4;
    pTVar4->Item = 0;
    ::operator_delete(pTVar5,0x10);
  }
  return;
}

// ClearOverrideStaticData_AnyThread @ 14d029890

void __thiscall FLiveLinkSubject::ClearOverrideStaticData_AnyThread(FLiveLinkSubject *this)

{
  LOCK();
  this->bClearOverrideStaticData = (atomic<bool>)0x1;
  UNLOCK();
  return;
}

// EvaluateFrameAtSceneTime @ 14d03b080

bool __thiscall
FLiveLinkSubject::EvaluateFrameAtSceneTime
          (FLiveLinkSubject *this,FQualifiedFrameTime *param_1,TSubclassOf<ULiveLinkRole> param_2,
          FLiveLinkSubjectFrameData *param_3)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  float fVar3;
  char cVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  longlong lVar8;
  FFrameTime FVar9;
  uint uVar10;
  FQualifiedFrameTime *this_00;
  int iVar11;
  FName FVar12;
  ForAnyElementType FVar13;
  wchar_t *pwVar14;
  ForAnyElementType FVar15;
  FFrameTime FVar16;
  FFrameTime FVar17;
  double dVar18;
  float fVar19;
  double in_XMM1_Qa;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 in_XMM2 [16];
  undefined1 auVar23 [16];
  double dVar24;
  FName local_res8;
  FString local_d8;
  FQualifiedFrameTime local_c8;
  FQualifiedFrameTime local_b8;
  FString local_a8;
  FLiveLinkSubjectFrameData local_98;
  
  pUVar7 = (this->Role).Class.field0_0x0.DebugPtr;
  if ((pUVar7 == (UClass *)0x0) ||
     (pUVar6 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar6 == (UClass *)0x0)) {
LAB_14d03b700:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&NAME_InvalidRole,"LiveLinkSubject_InvalidRole");
      _Init_thread_footer(&::_TSS0);
    }
    ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_d8);
    pwVar14 = L"Can\'t evaluate frame for subject \'%s\'. No role has been set yet.";
    FVar12 = NAME_InvalidRole;
  }
  else {
    iVar11 = (int)pUVar6->_padding_;
    if (((int)pUVar7->_padding_ < iVar11) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar11 * 8) != &pUVar6->_padding_
       )) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((!bVar5) || ((this->Role).Class.field0_0x0.DebugPtr == (UClass *)0x0)) goto LAB_14d03b700;
    lVar8 = *(longlong *)param_2.Class.field0_0x0;
    if ((lVar8 != 0) &&
       (pUVar7 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar7 != (UClass *)0x0)) {
      iVar11 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar8 + 0x38) < iVar11) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar11 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (*(longlong *)param_2.Class.field0_0x0 != 0)) {
        lVar8 = 0x1b8;
        if ((this->ModeOverride).bIsSet == false) {
          lVar8 = 0x150;
        }
        if (*(char *)((longlong)&this->_padding_ + lVar8) == '\x02') {
          if ((this->FrameData).ArrayNum == 0) {
            return false;
          }
          FVar17.FrameNumber.Value = 0;
          FVar17.SubFrame = 0.0;
          local_res8.ComparisonIndex.Value = 0;
          local_res8.Number = 0;
          FVar9 = FVar17;
          if ((this->CachedSettings).BufferSettings.bUseTimecodeSmoothLatest != false) {
            in_XMM2._8_8_ = 0;
            in_XMM2._0_8_ = (this->CachedSettings).BufferSettings.TimecodeClockOffset;
            FVar9 = FFrameRate::AsFrameTime(&param_1->Rate,in_XMM1_Qa);
            FVar9 = *(FFrameTime *)FVar9;
          }
          this_00 = &local_c8;
          dVar24 = (double)(this->CachedSettings).BufferSettings.TimecodeFrameOffset;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = dVar24;
          auVar23 = roundpd(in_XMM2,auVar23,1);
          dVar22 = auVar23._0_8_;
          dVar18 = dVar22;
          if (__real_41dfffffffc00000 <= dVar22) {
            dVar18 = __real_41dfffffffc00000;
          }
          fVar19 = (float)(dVar24 - dVar22);
          if (dVar18 <= __real_c1e0000000000000) {
            dVar18 = __real_c1e0000000000000;
          }
          if (::FFrameTime::MaxSubframe <= fVar19) {
            fVar19 = ::FFrameTime::MaxSubframe;
          }
          auVar20 = ZEXT416((uint)fVar19);
          if (fVar19 <= 0.0) {
            auVar20 = ZEXT816(0) << 0x20;
          }
          local_c8.Rate = this->LastTimecodeFrameRate;
          if (::FFrameTime::MaxSubframe <= auVar20._0_4_) {
            auVar20._0_4_ = ::FFrameTime::MaxSubframe;
          }
          if (auVar20._0_4_ <= 0.0) {
            auVar2._12_4_ = 0;
            auVar2._0_12_ = auVar20._4_12_;
            auVar20 = auVar2 << 0x20;
          }
          local_c8.Time.SubFrame = auVar20._0_4_;
          local_c8.Time.FrameNumber.Value = (int)dVar18;
          ::FQualifiedFrameTime::ConvertTo(this_00,(FFrameRate)&local_res8);
          local_c8.Time.SubFrame = FVar9.SubFrame;
          local_c8.Time.SubFrame = (float)local_res8.Number + local_c8.Time.SubFrame;
          iVar11 = (int)local_c8.Time.SubFrame;
          fVar19 = local_c8.Time.SubFrame;
          if ((iVar11 != -0x80000000) && ((float)iVar11 != local_c8.Time.SubFrame)) {
            auVar21._4_4_ = local_c8.Time.SubFrame;
            auVar21._0_4_ = local_c8.Time.SubFrame;
            auVar21._8_8_ = 0;
            uVar10 = movmskps((int)this_00,auVar21);
            fVar19 = (float)(int)(iVar11 - (uVar10 & 1));
          }
          FVar12.ComparisonIndex.Value = *(uint *)&(param_1->Time).FrameNumber;
          FVar12.Number = (uint)(param_1->Time).SubFrame;
          lVar8 = *(longlong *)param_2.Class.field0_0x0;
          fVar3 = local_c8.Time.SubFrame - fVar19;
          if (::FFrameTime::MaxSubframe <= local_c8.Time.SubFrame - fVar19) {
            fVar3 = ::FFrameTime::MaxSubframe;
          }
          auVar23 = ZEXT416((uint)fVar3);
          if (fVar3 <= 0.0) {
            auVar23 = ZEXT816(0) << 0x20;
          }
          local_b8.Time.SubFrame = (float)FVar12.Number - auVar23._0_4_;
          auVar23 = roundps(auVar23,ZEXT416((uint)local_b8.Time.SubFrame),1);
          local_b8.Time.SubFrame = local_b8.Time.SubFrame - auVar23._0_4_;
          if (::FFrameTime::MaxSubframe <= local_b8.Time.SubFrame) {
            local_b8.Time.SubFrame = ::FFrameTime::MaxSubframe;
          }
          local_b8.Time.FrameNumber.Value =
               (((FVar12.ComparisonIndex.Value -
                 ((int)ROUND((local_c8.Time.SubFrame + local_c8.Time.SubFrame) - __real_3f000000) >>
                 1)) - local_res8.ComparisonIndex.Value) - FVar9.FrameNumber.Value) +
               (int)auVar23._0_4_;
          local_b8.Rate = param_1->Rate;
          if (local_b8.Time.SubFrame <= 0.0) {
            local_b8.Time.SubFrame = 0.0;
          }
          FVar16 = FVar17;
          local_res8 = FVar12;
          local_c8.Time = FVar9;
          if ((lVar8 != 0) &&
             (pUVar7 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar7 != (UClass *)0x0)) {
            iVar11 = (int)pUVar7->_padding_;
            if ((*(int *)(lVar8 + 0x38) < iVar11) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar11 * 8) !=
                &pUVar7->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              FVar16 = *(FFrameTime *)param_2.Class.field0_0x0;
            }
          }
          pUVar7 = (this->Role).Class.field0_0x0.DebugPtr;
          FVar9 = FVar17;
          if ((pUVar7 != (UClass *)0x0) &&
             (pUVar6 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar6 != (UClass *)0x0)) {
            iVar11 = (int)pUVar6->_padding_;
            if (((int)pUVar7->_padding_ < iVar11) ||
               ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar11 * 8) !=
                &pUVar6->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              FVar9 = (FFrameTime)(this->Role).Class.field0_0x0.DebugPtr;
            }
          }
          if (FVar9 == FVar16) {
LAB_14d03b47e:
            GetFrameAtSceneTime(this,&local_b8,param_3);
            return true;
          }
          pUVar7 = (this->Role).Class.field0_0x0.DebugPtr;
          FVar9 = FVar17;
          if ((pUVar7 != (UClass *)0x0) &&
             (pUVar6 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar6 != (UClass *)0x0)) {
            iVar11 = (int)pUVar6->_padding_;
            if (((int)pUVar7->_padding_ < iVar11) ||
               ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar11 * 8) !=
                &pUVar6->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              FVar9 = (FFrameTime)(this->Role).Class.field0_0x0.DebugPtr;
            }
          }
          lVar8 = *(longlong *)param_2.Class.field0_0x0;
          if ((lVar8 != 0) &&
             (pUVar7 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar7 != (UClass *)0x0)) {
            iVar11 = (int)pUVar7->_padding_;
            if ((*(int *)(lVar8 + 0x38) < iVar11) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar11 * 8) !=
                &pUVar7->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              FVar12 = *(FName *)param_2.Class.field0_0x0;
              if (FVar12 != (FName)0x0) {
                if ((*(int *)((longlong)FVar9 + 0x38) < *(int *)((longlong)FVar12 + 0x38)) ||
                   (*(undefined1 **)
                     (*(longlong *)((longlong)FVar9 + 0x30) +
                     (longlong)*(int *)((longlong)FVar12 + 0x38) * 8) !=
                    (undefined1 *)((longlong)FVar12 + 0x30))) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (bVar5) goto LAB_14d03b47e;
              }
              goto LAB_14d03b498;
            }
          }
          FVar12 = *(FName *)param_2.Class.field0_0x0;
LAB_14d03b498:
          pcVar1 = *(code **)(this->_padding_ + 0x38);
          local_res8 = FVar12;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar12 != (FName)0x0)) {
            UE::GC::MarkAsReachable((UObject *)FVar12);
          }
          cVar4 = (*pcVar1)(this,&local_res8);
          if (cVar4 == '\0') {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
              ::FName::FName(&NAME_CantTranslate,"LiveLinkSubject_CantTranslate");
              _Init_thread_footer(&::_TSS3);
            }
            pUVar7 = (this->Role).Class.field0_0x0.DebugPtr;
            FVar9 = FVar17;
            if ((pUVar7 != (UClass *)0x0) &&
               (pUVar6 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar6 != (UClass *)0x0)) {
              iVar11 = (int)pUVar6->_padding_;
              if (((int)pUVar7->_padding_ < iVar11) ||
                 ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar11 * 8) !=
                  &pUVar6->_padding_)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar5) {
                FVar9 = (FFrameTime)(this->Role).Class.field0_0x0.DebugPtr;
              }
            }
            local_res8 = *(FName *)((longlong)FVar9 + 0x18);
            ::FName::ToString(&local_res8,&local_d8);
            lVar8 = *(longlong *)param_2.Class.field0_0x0;
            FVar15.Data = (FScriptContainerElement *)L"";
            if (local_d8.Data.ArrayNum != 0) {
              FVar15.Data = local_d8.Data.AllocatorInstance.Data;
            }
            if ((lVar8 != 0) &&
               (pUVar7 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar7 != (UClass *)0x0)) {
              iVar11 = (int)pUVar7->_padding_;
              if ((*(int *)(lVar8 + 0x38) < iVar11) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar11 * 8)
                  != &pUVar7->_padding_)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (bVar5) {
                FVar17 = *(FFrameTime *)param_2.Class.field0_0x0;
              }
            }
            local_res8 = *(FName *)((longlong)FVar17 + 0x18);
            ::FName::ToString(&local_res8,&local_a8);
            FVar13.Data = (FScriptContainerElement *)L"";
            if (local_a8.Data.ArrayNum != 0) {
              FVar13.Data = local_a8.Data.AllocatorInstance.Data;
            }
            ::FName::ToString(&(this->SubjectKey).SubjectName.Name,(FString *)&local_c8);
            FVar17 = (FFrameTime)L"";
            if (local_c8.Rate.Numerator != 0) {
              FVar17 = local_c8.Time;
            }
            FLiveLinkLog::Log_Internal<wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
                      (Warning,NAME_CantTranslate,&this->SubjectKey,
                       (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
                        )0x152aa09a0,(wchar_t *)FVar17,(wchar_t *)FVar13.Data,(wchar_t *)FVar15.Data
                      );
            if (local_c8.Time != (FFrameTime)0x0) {
              FMemory::Free((void *)local_c8.Time);
            }
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
            }
            local_res8.ComparisonIndex.Value._0_1_ = 0;
          }
          else {
            FStructOnScope::FStructOnScope((FStructOnScope *)&local_98);
            FStructOnScope::FStructOnScope(&local_98.FrameData.WrappedStruct);
            GetFrameAtSceneTime(this,&local_b8,&local_98);
            local_res8 = *(FName *)param_2.Class.field0_0x0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)local_res8);
            }
            bVar5 = ILiveLinkSubject::Translate
                              ((ILiveLinkSubject *)this,(TSubclassOf<ULiveLinkRole>)&local_res8,
                               &local_98.StaticData,&local_98.FrameData,param_3);
            local_res8.ComparisonIndex.Value._0_1_ = bVar5;
            FStructOnScope::~FStructOnScope(&local_98.FrameData.WrappedStruct);
            FStructOnScope::~FStructOnScope((FStructOnScope *)&local_98);
          }
          return (bool)(undefined1)local_res8.ComparisonIndex.Value;
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
          ::FName::FName(&NAME_EvaluationSceneTime,"LiveLinkSubject_EvalutationSceneTime");
          _Init_thread_footer(&::_TSS2);
        }
        ::FName::ToString(&(this->SubjectKey).SubjectName.Name,(FString *)&local_b8);
        pwVar14 = L"";
        if (local_b8.Rate.Numerator != 0) {
          pwVar14 = (wchar_t *)CONCAT44(local_b8.Time.SubFrame,local_b8.Time.FrameNumber.Value);
        }
        FLiveLinkLog::Log_Internal<wchar_t_const_*>
                  (Error,NAME_EvaluationSceneTime,&this->SubjectKey,
                   (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa0a80,pwVar14);
        local_d8.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)
             CONCAT44(local_b8.Time.SubFrame,local_b8.Time.FrameNumber.Value);
        goto LAB_14d03b76b;
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&NAME_InvalidDesiredRole,"LiveLinkSubject_InvalidDesiredRole");
      _Init_thread_footer(&::_TSS1);
    }
    ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_d8);
    pwVar14 = L"Can\'t evaluate frame for subject \'%s\'. Invalid role was received for evaluation."
    ;
    FVar12 = NAME_InvalidDesiredRole;
  }
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar15.Data = local_d8.Data.AllocatorInstance.Data;
  }
  FLiveLinkLog::Log_Internal<wchar_t_const_*>
            (Error,FVar12,&this->SubjectKey,
             (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)pwVar14,(wchar_t *)FVar15.Data);
LAB_14d03b76b:
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return false;
}

// EvaluateFrameAtWorldTime @ 14d03bbe0

bool __thiscall
FLiveLinkSubject::EvaluateFrameAtWorldTime
          (FLiveLinkSubject *this,double param_1,TSubclassOf<ULiveLinkRole> param_2,
          FLiveLinkSubjectFrameData *param_3)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  char cVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  longlong lVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  FName FVar11;
  ForAnyElementType FVar12;
  ForAnyElementType FVar13;
  ForAnyElementType FVar14;
  wchar_t *pwVar15;
  FName local_res8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FLiveLinkSubjectFrameData local_88;
  
  pUVar7 = (this->Role).Class.field0_0x0.DebugPtr;
  if ((pUVar7 == (UClass *)0x0) ||
     (pUVar6 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar6 == (UClass *)0x0)) {
LAB_14d03c120:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&NAME_InvalidRole,"LiveLinkSubject_InvalidRole");
      _Init_thread_footer(&::_TSS0);
    }
    ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_98);
    pwVar15 = L"Can\'t evaluate frame for subject \'%s\'. No role has been set yet.";
    FVar11 = NAME_InvalidRole;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((!bVar5) || ((this->Role).Class.field0_0x0.DebugPtr == (UClass *)0x0)) goto LAB_14d03c120;
    lVar8 = *(longlong *)param_2.Class.field0_0x0;
    if ((lVar8 != 0) &&
       (pUVar7 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar7 != (UClass *)0x0)) {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar8 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (*(longlong *)param_2.Class.field0_0x0 != 0)) {
        lVar8 = 0x1b8;
        if ((this->ModeOverride).bIsSet == false) {
          lVar8 = 0x150;
        }
        if (*(char *)((longlong)&this->_padding_ + lVar8) == '\x01') {
          if ((this->FrameData).ArrayNum == 0) {
            return false;
          }
          pUVar7 = (this->Role).Class.field0_0x0.DebugPtr;
          pUVar6 = (UClass *)0x0;
          dVar3 = (param_1 - (double)(this->CachedSettings).BufferSettings.EngineTimeOffset) -
                  (this->CachedSettings).BufferSettings.EngineTimeClockOffset;
          pUVar10 = pUVar6;
          if ((pUVar7 != (UClass *)0x0) &&
             (pUVar9 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar9 != (UClass *)0x0)) {
            iVar1 = (int)pUVar9->_padding_;
            if (((int)pUVar7->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar9->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              pUVar10 = (this->Role).Class.field0_0x0.DebugPtr;
            }
          }
          lVar8 = *(longlong *)param_2.Class.field0_0x0;
          pUVar7 = pUVar6;
          if ((lVar8 != 0) &&
             (pUVar9 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar9 != (UClass *)0x0)) {
            iVar1 = (int)pUVar9->_padding_;
            if ((*(int *)(lVar8 + 0x38) < iVar1) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar9->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              pUVar7 = *(UClass **)param_2.Class.field0_0x0;
            }
          }
          if (pUVar10 == pUVar7) {
LAB_14d03bea3:
            GetFrameAtWorldTime(this,dVar3,param_3);
            return true;
          }
          pUVar7 = (this->Role).Class.field0_0x0.DebugPtr;
          pUVar10 = pUVar6;
          if ((pUVar7 != (UClass *)0x0) &&
             (pUVar9 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar9 != (UClass *)0x0)) {
            iVar1 = (int)pUVar9->_padding_;
            if (((int)pUVar7->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar9->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              pUVar10 = (this->Role).Class.field0_0x0.DebugPtr;
            }
          }
          lVar8 = *(longlong *)param_2.Class.field0_0x0;
          if ((lVar8 != 0) &&
             (pUVar7 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar7 != (UClass *)0x0)) {
            iVar1 = (int)pUVar7->_padding_;
            if ((*(int *)(lVar8 + 0x38) < iVar1) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar7->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              local_res8 = *(FName *)param_2.Class.field0_0x0;
              if (local_res8 != (FName)0x0) {
                if (((int)pUVar10->_padding_ < *(int *)((longlong)local_res8 + 0x38)) ||
                   (*(undefined1 **)
                     (pUVar10->_padding_ + (longlong)*(int *)((longlong)local_res8 + 0x38) * 8) !=
                    (undefined1 *)((longlong)local_res8 + 0x30))) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (bVar5) goto LAB_14d03bea3;
              }
              goto LAB_14d03bed8;
            }
          }
          local_res8 = *(FName *)param_2.Class.field0_0x0;
LAB_14d03bed8:
          pcVar2 = *(code **)(this->_padding_ + 0x38);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_res8);
          }
          cVar4 = (*pcVar2)(this,&local_res8);
          if (cVar4 != '\0') {
            FStructOnScope::FStructOnScope((FStructOnScope *)&local_88);
            FStructOnScope::FStructOnScope(&local_88.FrameData.WrappedStruct);
            GetFrameAtWorldTime(this,dVar3,&local_88);
            local_res8 = *(FName *)param_2.Class.field0_0x0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)local_res8);
            }
            bVar5 = ILiveLinkSubject::Translate
                              ((ILiveLinkSubject *)this,(TSubclassOf<ULiveLinkRole>)&local_res8,
                               &local_88.StaticData,&local_88.FrameData,param_3);
            FStructOnScope::~FStructOnScope(&local_88.FrameData.WrappedStruct);
            FStructOnScope::~FStructOnScope((FStructOnScope *)&local_88);
            return bVar5;
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
            ::FName::FName(&NAME_CantTranslate,"LiveLinkSubject_CantTranslate");
            _Init_thread_footer(&::_TSS3);
          }
          pUVar7 = (this->Role).Class.field0_0x0.DebugPtr;
          pUVar10 = pUVar6;
          if ((pUVar7 != (UClass *)0x0) &&
             (pUVar9 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar9 != (UClass *)0x0)) {
            iVar1 = (int)pUVar9->_padding_;
            if (((int)pUVar7->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar9->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              pUVar10 = (this->Role).Class.field0_0x0.DebugPtr;
            }
          }
          local_res8 = (FName)pUVar10->_padding_;
          ::FName::ToString(&local_res8,&local_98);
          lVar8 = *(longlong *)param_2.Class.field0_0x0;
          FVar12.Data = (FScriptContainerElement *)L"";
          if (local_98.Data.ArrayNum != 0) {
            FVar12.Data = local_98.Data.AllocatorInstance.Data;
          }
          if ((lVar8 != 0) &&
             (pUVar7 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar7 != (UClass *)0x0)) {
            iVar1 = (int)pUVar7->_padding_;
            if ((*(int *)(lVar8 + 0x38) < iVar1) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar7->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              pUVar6 = *(UClass **)param_2.Class.field0_0x0;
            }
          }
          local_res8 = (FName)pUVar6->_padding_;
          ::FName::ToString(&local_res8,&local_a8);
          FVar14.Data = (FScriptContainerElement *)L"";
          if (local_a8.Data.ArrayNum != 0) {
            FVar14.Data = local_a8.Data.AllocatorInstance.Data;
          }
          ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_b8);
          FVar13.Data = (FScriptContainerElement *)L"";
          if (local_b8.Data.ArrayNum != 0) {
            FVar13.Data = local_b8.Data.AllocatorInstance.Data;
          }
          FLiveLinkLog::Log_Internal<wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
                    (Warning,NAME_CantTranslate,&this->SubjectKey,
                     (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
                      )0x152aa09a0,(wchar_t *)FVar13.Data,(wchar_t *)FVar14.Data,
                     (wchar_t *)FVar12.Data);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_98.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return false;
          }
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
          return false;
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
          ::FName::FName(&NAME_EvalutationWorldTime,"LiveLinkSubject_EvalutationWorldTime");
          _Init_thread_footer(&::_TSS2);
        }
        ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_b8);
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_b8.Data.ArrayNum != 0) {
          FVar12.Data = local_b8.Data.AllocatorInstance.Data;
        }
        FLiveLinkLog::Log_Internal<wchar_t_const_*>
                  (Error,NAME_EvalutationWorldTime,&this->SubjectKey,
                   (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa08c0,
                   (wchar_t *)FVar12.Data);
        goto LAB_14d03c18b;
      }
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&NAME_InvalidDesiredRole,"LiveLinkSubject_InvalidDesiredRole");
      _Init_thread_footer(&::_TSS1);
    }
    ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_98);
    pwVar15 = L"Can\'t evaluate frame for subject \'%s\'. Invalid role was received for evaluation."
    ;
    FVar11 = NAME_InvalidDesiredRole;
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_98.Data.ArrayNum != 0) {
    FVar12.Data = local_98.Data.AllocatorInstance.Data;
  }
  FLiveLinkLog::Log_Internal<wchar_t_const_*>
            (Error,FVar11,&this->SubjectKey,
             (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)pwVar15,(wchar_t *)FVar12.Data);
  local_b8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
LAB_14d03c18b:
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return false;
}

// FindNewFrame_Latest @ 14d041850

int __thiscall
FLiveLinkSubject::FindNewFrame_Latest(FLiveLinkSubject *this,FLiveLinkWorldTime *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  uint uVar8;
  double dVar9;
  FString aFStack_28 [2];
  
  uVar8 = (this->FrameData).ArrayNum - 1;
  dVar9 = param_1->Time;
  if (-1 < (int)uVar8) {
    lVar7 = (longlong)(int)uVar8 * 0x28;
    do {
      uVar3 = 0;
      if ((int)uVar8 < (this->FrameData).ArrayNum) {
        uVar3 = ~uVar8 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      pdVar5 = (double *)
               (**(code **)(*(longlong *)((this->FrameData).AllocatorInstance.Data + lVar7) + 0x10))
                         ();
      if (*pdVar5 <= dVar9) {
        dVar9 = *pdVar5 - dVar9;
        if ((double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3e45798ee2308c3a) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            ::FName::FName(&NAME_SameWorldTime,"LiveLinkSubject_SameWorldTime");
            _Init_thread_footer(&::_TSS0);
          }
          ::FName::ToString(&(this->SubjectKey).SubjectName.Name,aFStack_28);
          FVar6.Data = (FScriptContainerElement *)L"";
          if (aFStack_28[0].Data.ArrayNum != 0) {
            FVar6.Data = aFStack_28[0].Data.AllocatorInstance.Data;
          }
          FLiveLinkLog::Log_Internal<wchar_t_const_*>
                    (Warning,NAME_SameWorldTime,&this->SubjectKey,
                     (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa1110,
                     (wchar_t *)FVar6.Data);
          if (aFStack_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(aFStack_28[0].Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      lVar7 = lVar7 + -0x28;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  return uVar8 + 1;
}

// FindNewFrame_SceneTime @ 14d041860

int __thiscall
FLiveLinkSubject::FindNewFrame_SceneTime
          (FLiveLinkSubject *this,FQualifiedFrameTime *param_1,FLiveLinkWorldTime *param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  uint uVar4;
  int iVar5;
  FFrameTime FVar6;
  FQualifiedFrameTime *pFVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  longlong lVar10;
  double *pdVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong lVar14;
  double in_XMM1_Qa;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  int local_res10;
  float fStack_d4;
  float fStack_cc;
  undefined1 local_c8 [8];
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  TOptional<FQualifiedFrameTime> local_80;
  FQualifiedFrameTime local_60 [2];
  
  bVar3 = FApp::CurrentFrameTime.bIsSet;
  if ((param_1->Time).FrameNumber.Value < 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&NAME_NoSceneTime,"LiveLinkSubject_NoSceneTime");
      _Init_thread_footer(&::_TSS0);
    }
    ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_c0);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_c0.Data.ArrayNum != 0) {
      FVar8.Data = local_c0.Data.AllocatorInstance.Data;
    }
    FLiveLinkLog::Log_Internal<wchar_t_const_*>
              (Error,NAME_NoSceneTime,&this->SubjectKey,
               (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa11d0,
               (wchar_t *)FVar8.Data);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    return -1;
  }
  if ((FApp::CurrentFrameTime.bIsSet) &&
     ((this->CachedSettings).BufferSettings.bValidTimecodeFrameEnabled != false)) {
    local_res10 = 0;
    if ((this->CachedSettings).BufferSettings.bUseTimecodeSmoothLatest == false) {
      uVar13 = 0;
    }
    else {
      FVar6 = FFrameRate::AsFrameTime(&this->LastTimecodeFrameRate,in_XMM1_Qa);
      uVar13 = *(undefined8 *)FVar6;
      local_res10 = (int)uVar13;
    }
    local_80.bIsSet = bVar3;
    local_80.TypedValue = FApp::CurrentFrameTime.TypedValue;
    pFVar7 = TOptional<FQualifiedFrameTime>::GetValue(&local_80);
    local_60[0].Time = pFVar7->Time;
    local_60[0].Rate = pFVar7->Rate;
    ::FQualifiedFrameTime::ConvertTo(local_60,(FFrameRate)local_c8);
    dVar15 = (double)(this->CachedSettings).BufferSettings.TimecodeFrameOffset;
    fStack_d4 = local_c8._4_4_;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = dVar15;
    auVar19 = roundpd(in_XMM3,auVar17,1);
    auVar18._0_8_ = dVar15 - auVar19._0_8_;
    auVar18._8_8_ = 0;
    if (__real_41dfffffffc00000 <= auVar19._0_8_) {
      auVar19._0_8_ = __real_41dfffffffc00000;
    }
    if (auVar19._0_8_ <= __real_c1e0000000000000) {
      auVar19._0_8_ = __real_c1e0000000000000;
    }
    fVar21 = (float)auVar18._0_8_;
    if (::FFrameTime::MaxSubframe <= (float)auVar18._0_8_) {
      fVar21 = ::FFrameTime::MaxSubframe;
    }
    auVar20 = ZEXT416((uint)fVar21);
    if (fVar21 <= 0.0) {
      auVar20 = ZEXT816(0) << 0x20;
    }
    if (::FFrameTime::MaxSubframe <= auVar20._0_4_) {
      auVar20._0_4_ = ::FFrameTime::MaxSubframe;
    }
    if (auVar20._0_4_ <= 0.0) {
      auVar2._12_4_ = 0;
      auVar2._0_12_ = auVar20._4_12_;
      auVar20 = auVar2 << 0x20;
    }
    fStack_d4 = fStack_d4 - auVar20._0_4_;
    auVar17 = roundps(auVar18,ZEXT416((uint)fStack_d4),1);
    fStack_d4 = fStack_d4 - auVar17._0_4_;
    if (::FFrameTime::MaxSubframe <= fStack_d4) {
      fStack_d4 = ::FFrameTime::MaxSubframe;
    }
    if (fStack_d4 <= 0.0) {
      fStack_d4 = 0.0;
    }
    auVar18 = roundps(auVar17,ZEXT416((uint)(fStack_d4 - 0.0)),1);
    fVar21 = (fStack_d4 - 0.0) - auVar18._0_4_;
    if (::FFrameTime::MaxSubframe <= fVar21) {
      fVar21 = ::FFrameTime::MaxSubframe;
    }
    if (fVar21 <= 0.0) {
      fVar21 = 0.0;
    }
    fStack_cc = (float)((ulonglong)uVar13 >> 0x20);
    auVar20 = roundps(auVar19,ZEXT416((uint)(fVar21 - fStack_cc)),1);
    fVar21 = (fVar21 - fStack_cc) - auVar20._0_4_;
    if (::FFrameTime::MaxSubframe <= fVar21) {
      fVar21 = ::FFrameTime::MaxSubframe;
    }
    if (fVar21 <= 0.0) {
      fVar21 = 0.0;
    }
    if ((param_1->Time).SubFrame + (float)(param_1->Time).FrameNumber.Value <
        fVar21 + (float)((((((int)auVar17._0_4_ + (local_c8._0_4_ - (int)auVar19._0_8_)) -
                           (this->CachedSettings).BufferSettings.ValidTimecodeFrame) +
                          (int)auVar18._0_4_) - local_res10) + (int)auVar20._0_4_)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ::FName::FName(&NAME_InvalidTC,"LiveLinkSubject_InvalidTC");
        _Init_thread_footer(&::_TSS1);
      }
      ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_b0);
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_b0.Data.ArrayNum != 0) {
        FVar8.Data = local_b0.Data.AllocatorInstance.Data;
      }
      FLiveLinkLog::Log_Internal<wchar_t_const_*>
                (Warning,NAME_InvalidTC,&this->SubjectKey,
                 (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa12b0,
                 (wchar_t *)FVar8.Data);
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
    }
  }
  if ((this->CachedSettings).BufferSettings.bGenerateSubFrame != false) {
    uVar12 = (this->FrameData).ArrayNum - 1;
    if (-1 < (int)uVar12) {
      lVar14 = (longlong)(int)uVar12 * 0x28;
      do {
        uVar4 = 0;
        if ((int)uVar12 < (this->FrameData).ArrayNum) {
          uVar4 = ~uVar12 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
        lVar9 = (**(code **)(*(longlong *)((this->FrameData).AllocatorInstance.Data + lVar14) + 0x10
                            ))();
        if (*(int *)(lVar9 + 0x60) < (param_1->Time).FrameNumber.Value) {
          iVar5 = (this->FrameData).ArrayNum;
          uVar12 = uVar12 + 1;
          if (iVar5 <= (int)uVar12) {
            return iVar5;
          }
          lVar9 = (longlong)(int)uVar12;
          lVar14 = lVar9 * 0x28;
          goto LAB_14d041c00;
        }
        lVar14 = lVar14 + -0x28;
        uVar12 = uVar12 - 1;
      } while (-1 < (int)uVar12);
    }
    return 0;
  }
  fStack_cc = (param_1->Time).SubFrame;
  iVar5 = (param_1->Rate).Denominator;
  uVar12 = (this->FrameData).ArrayNum - 1;
  dVar15 = ((double)((longlong)(param_1->Time).FrameNumber.Value * (longlong)iVar5) +
           (double)fStack_cc * (double)iVar5) / (double)(param_1->Rate).Numerator;
  if (-1 < (int)uVar12) {
    lVar14 = (longlong)(int)uVar12 * 0x28;
    do {
      uVar4 = 0;
      if ((int)uVar12 < (this->FrameData).ArrayNum) {
        uVar4 = ~uVar12 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      lVar9 = (**(code **)(*(longlong *)((this->FrameData).AllocatorInstance.Data + lVar14) + 0x10))
                        ();
      fStack_d4 = (float)((ulonglong)*(undefined8 *)(lVar9 + 0x60) >> 0x20);
      iVar5 = (int)((ulonglong)*(undefined8 *)(lVar9 + 0x68) >> 0x20);
      dVar16 = ((double)((longlong)(int)*(undefined8 *)(lVar9 + 0x60) * (longlong)iVar5) +
               (double)fStack_d4 * (double)iVar5) / (double)(int)*(undefined8 *)(lVar9 + 0x68);
      if (dVar16 <= dVar15) {
        dVar16 = dVar16 - dVar15;
        if ((double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3e45798ee2308c3a) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
            ::FName::FName(&NAME_SameSceneTime,"LiveLinkSubject_SameSceneTime");
            _Init_thread_footer(&::_TSS3);
          }
          ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_90);
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_90.Data.ArrayNum != 0) {
            FVar8.Data = local_90.Data.AllocatorInstance.Data;
          }
          FLiveLinkLog::Log_Internal<wchar_t_const_*>
                    (Warning,NAME_SameSceneTime,&this->SubjectKey,
                     (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa14f0,
                     (wchar_t *)FVar8.Data);
          local_a0.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
LAB_14d041f33:
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      lVar14 = lVar14 + -0x28;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
LAB_14d041f3d:
  return uVar12 + 1;
  while( true ) {
    uVar12 = uVar12 + 1;
    lVar14 = lVar14 + 0x28;
    if ((this->FrameData).ArrayNum <= (int)uVar12) break;
LAB_14d041c00:
    uVar4 = 0;
    if ((int)uVar12 < (this->FrameData).ArrayNum) {
      uVar4 = ~uVar12 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      iVar5 = (*pcVar1)();
      return iVar5;
    }
    lVar10 = (**(code **)(*(longlong *)((this->FrameData).AllocatorInstance.Data + lVar14) + 0x10))
                       ();
    if ((param_1->Time).FrameNumber.Value != *(int *)(lVar10 + 0x60)) break;
  }
  uVar12 = uVar12 - 1;
  lVar14 = (longlong)(int)uVar12;
  dVar15 = param_2->Time;
  if (lVar9 <= lVar14) {
    lVar10 = lVar14 * 0x28;
    do {
      uVar4 = 0;
      if ((int)uVar12 < (this->FrameData).ArrayNum) {
        uVar4 = ~uVar12 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      pdVar11 = (double *)
                (**(code **)(*(longlong *)((this->FrameData).AllocatorInstance.Data + lVar10) + 0x10
                            ))();
      if (*pdVar11 <= dVar15) {
        dVar15 = *pdVar11 - dVar15;
        if ((double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3e45798ee2308c3a) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
            ::FName::FName(&NAME_SameWorldSceneTime,"LiveLinkSubject_SameWorldSceneTime");
            _Init_thread_footer(&::_TSS2);
          }
          ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_a0);
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_a0.Data.ArrayNum != 0) {
            FVar8.Data = local_a0.Data.AllocatorInstance.Data;
          }
          FLiveLinkLog::Log_Internal<wchar_t_const_*>
                    (Warning,NAME_SameWorldSceneTime,&this->SubjectKey,
                     (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa1410,
                     (wchar_t *)FVar8.Data);
          goto LAB_14d041f33;
        }
        break;
      }
      uVar12 = uVar12 - 1;
      lVar14 = lVar14 + -1;
      lVar10 = lVar10 + -0x28;
    } while (lVar9 <= lVar14);
  }
  goto LAB_14d041f3d;
}

// FindNewFrame_WorldTime @ 14d042070

int __thiscall
FLiveLinkSubject::FindNewFrame_WorldTime(FLiveLinkSubject *this,FLiveLinkWorldTime *param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  double dVar3;
  FString local_18;
  
  if (((this->CachedSettings).BufferSettings.bValidEngineTimeEnabled != false) &&
     (dVar3 = (((double)FApp::CurrentTime -
               (double)(this->CachedSettings).BufferSettings.EngineTimeOffset) -
              (double)(this->CachedSettings).BufferSettings.ValidEngineTime) -
              (this->CachedSettings).BufferSettings.EngineTimeClockOffset,
     param_1->Time <= dVar3 && dVar3 != param_1->Time)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&NAME_InvalidWorldTime,"LiveLinkSubject_InvalidWorldTIme");
        _Init_thread_footer(&::_TSS0);
      }
    }
    ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_18);
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    FLiveLinkLog::Log_Internal<wchar_t_const_*>
              (Warning,NAME_InvalidWorldTime,&this->SubjectKey,
               (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa0fc0,
               (wchar_t *)FVar2.Data);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  iVar1 = FindNewFrame_WorldTimeInternal(this,param_1);
  return iVar1;
}

// FindNewFrame_WorldTimeInternal @ 14d0421b0

int __thiscall
FLiveLinkSubject::FindNewFrame_WorldTimeInternal(FLiveLinkSubject *this,FLiveLinkWorldTime *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  uint uVar8;
  double dVar9;
  FString local_28 [2];
  
  uVar8 = (this->FrameData).ArrayNum - 1;
  dVar9 = param_1->Time;
  if (-1 < (int)uVar8) {
    lVar7 = (longlong)(int)uVar8 * 0x28;
    do {
      uVar3 = 0;
      if ((int)uVar8 < (this->FrameData).ArrayNum) {
        uVar3 = ~uVar8 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      pdVar5 = (double *)
               (**(code **)(*(longlong *)((this->FrameData).AllocatorInstance.Data + lVar7) + 0x10))
                         ();
      if (*pdVar5 <= dVar9) {
        dVar9 = *pdVar5 - dVar9;
        if ((double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3e45798ee2308c3a) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            ::FName::FName(&NAME_SameWorldTime,"LiveLinkSubject_SameWorldTime");
            _Init_thread_footer(&::_TSS0);
          }
          ::FName::ToString(&(this->SubjectKey).SubjectName.Name,local_28);
          FVar6.Data = (FScriptContainerElement *)L"";
          if (local_28[0].Data.ArrayNum != 0) {
            FVar6.Data = local_28[0].Data.AllocatorInstance.Data;
          }
          FLiveLinkLog::Log_Internal<wchar_t_const_*>
                    (Warning,NAME_SameWorldTime,&this->SubjectKey,
                     (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa1110,
                     (wchar_t *)FVar6.Data);
          if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      lVar7 = lVar7 + -0x28;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  return uVar8 + 1;
}

// GetBufferOverflowStat @ 14d049d20

int __thiscall FLiveLinkSubject::GetBufferOverflowStat(FLiveLinkSubject *this)

{
  return *(int *)&this->bIsStatLoggingEnabled;
}

// GetBufferUnderflowStat @ 14d049d30

int __thiscall FLiveLinkSubject::GetBufferUnderflowStat(FLiveLinkSubject *this)

{
  return *(int *)((longlong)&this->LastPushTime + 4);
}

// GetDataTimes @ 14d04ab70

TArray<FTimedDataChannelSampleTime,TSizedDefaultAllocator<32>_> * __thiscall
FLiveLinkSubject::GetDataTimes
          (FLiveLinkSubject *this,
          TArray<FTimedDataChannelSampleTime,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  TArray<FTimedDataChannelSampleTime,TSizedDefaultAllocator<32>_> *pTVar12;
  longlong lVar13;
  double *pdVar14;
  longlong lVar15;
  int iVar16;
  longlong *plVar17;
  float fVar18;
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 in_XMM2 [16];
  undefined1 auVar21 [16];
  double dVar22;
  float fVar23;
  undefined8 local_res8;
  int local_res10;
  int local_res18;
  float fStackX_1c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (0 < *(int *)&(this->FrameData).AllocatorInstance.Data) {
    local_res10 = 0;
    fVar23 = 0.0;
    if ((char)(this->CachedSettings).BufferSettings.DetectedFrameRate.Numerator != '\0') {
      if ((*(int *)&(this->FrameData).AllocatorInstance.Data < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        pTVar12 = (TArray<FTimedDataChannelSampleTime,TSizedDefaultAllocator<32>_> *)(*pcVar8)();
        return pTVar12;
      }
      lVar13 = (**(code **)(**(longlong **)&(this->OverrideStaticData).bIsSet + 0x10))();
      dVar22 = ((double)*(int *)(lVar13 + 0x68) *
               *(double *)&(this->CachedSettings).BufferSettings.TimecodeFrameOffset) /
               (double)*(int *)(lVar13 + 0x6c);
      auVar21._8_8_ = 0;
      auVar21._0_8_ = dVar22;
      auVar21 = roundpd(in_XMM2,auVar21,1);
      dVar20 = auVar21._0_8_;
      dVar22 = dVar22 - dVar20;
      if (__real_41dfffffffc00000 <= dVar20) {
        dVar20 = __real_41dfffffffc00000;
      }
      if (dVar20 <= __real_c1e0000000000000) {
        dVar20 = __real_c1e0000000000000;
      }
      local_res10 = (int)dVar22;
      fVar23 = (float)dVar22 - (float)local_res10;
      if ((0.0 < fVar23) && (::FFrameTime::MaxSubframe <= fVar23)) {
        fVar23 = ::FFrameTime::MaxSubframe;
      }
      if (::FFrameTime::MaxSubframe <= fVar23) {
        fVar23 = ::FFrameTime::MaxSubframe;
      }
      local_res10 = (int)dVar20 + local_res10;
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
    }
    uVar11 = *(uint *)&(this->FrameData).AllocatorInstance.Data;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    __return_storage_ptr__->ArrayNum = 0;
    if (*piVar1 < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar11,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    }
    fVar9 = __real_3f000000;
    iVar4 = *(int *)&(this->FrameData).AllocatorInstance.Data;
    plVar17 = *(longlong **)&(this->OverrideStaticData).bIsSet;
    plVar2 = plVar17 + (longlong)iVar4 * 5;
    while( true ) {
      if (*(int *)&(this->FrameData).AllocatorInstance.Data != iVar4) {
        `TCheckedPointerIterator<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_res8);
      }
      if (plVar17 == plVar2) break;
      pdVar14 = (double *)(**(code **)(*plVar17 + 0x10))(plVar17);
      dVar20 = *(double *)&(this->CachedSettings).BufferSettings.EngineTimeOffset;
      dVar22 = *pdVar14;
      dVar3 = (this->CachedSettings).BufferSettings.EngineTimeClockOffset;
      lVar13 = (**(code **)(*plVar17 + 0x10))(plVar17);
      lVar15 = (**(code **)(*plVar17 + 0x10))(plVar17);
      uVar5 = *(undefined8 *)(lVar15 + 0x60);
      local_res8._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
      local_res8._4_4_ = fVar23 + local_res8._4_4_;
      local_res18 = ((int)ROUND((local_res8._4_4_ + local_res8._4_4_) - fVar9) >> 1) + local_res10 +
                    (int)uVar5;
      iVar16 = (int)local_res8._4_4_;
      fVar18 = local_res8._4_4_;
      if ((iVar16 != -0x80000000) && ((float)iVar16 != local_res8._4_4_)) {
        auVar19._4_4_ = local_res8._4_4_;
        auVar19._0_4_ = local_res8._4_4_;
        auVar19._8_8_ = 0;
        uVar11 = movmskps(local_res18,auVar19);
        fVar18 = (float)(int)(iVar16 - (uVar11 & 1));
      }
      iVar16 = __return_storage_ptr__->ArrayNum;
      uVar6 = *(undefined8 *)(lVar13 + 0x68);
      fStackX_1c = local_res8._4_4_ - fVar18;
      if (::FFrameTime::MaxSubframe <= local_res8._4_4_ - fVar18) {
        fStackX_1c = ::FFrameTime::MaxSubframe;
      }
      if (fStackX_1c <= 0.0) {
        fStackX_1c = 0.0;
      }
      local_res8 = uVar5;
      if (iVar16 == __return_storage_ptr__->ArrayMax) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      plVar17 = plVar17 + 5;
      __return_storage_ptr__->ArrayNum = iVar16 + 1;
      pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
      lVar13 = (longlong)iVar16;
      *(double *)(pFVar7 + lVar13 * 0x18) = dVar20 + dVar22 + dVar3;
      *(ulonglong *)(pFVar7 + lVar13 * 0x18 + 8) = CONCAT44(fStackX_1c,local_res18);
      *(undefined8 *)(pFVar7 + lVar13 * 0x18 + 0x10) = uVar6;
    }
  }
  return __return_storage_ptr__;
}

// GetDisplayName @ 14d04b4f0

FText * __thiscall
FLiveLinkSubject::GetDisplayName(FLiveLinkSubject *this,FText *__return_storage_ptr__)

{
  FText::FromName(__return_storage_ptr__,(FName *)&(this->SubjectKey).Source.C);
  return __return_storage_ptr__;
}

// GetFrameAtSceneTime @ 14d04bd30

bool __thiscall
FLiveLinkSubject::GetFrameAtSceneTime
          (FLiveLinkSubject *this,FQualifiedFrameTime *param_1,FLiveLinkSubjectFrameData *param_2)

{
  TAtomic<int> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  ILiveLinkFrameInterpolationProcessorWorker *pIVar3;
  undefined8 *puVar4;
  code *pcVar5;
  FWeakObjectPtr FVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  longlong lVar11;
  void *pvVar12;
  UScriptStruct *pUVar13;
  UClass *pUVar14;
  void *pvVar15;
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *this_00;
  FWeakObjectPtr local_res8;
  UScriptStruct *local_res20;
  float local_58;
  float local_54;
  undefined8 local_50;
  undefined2 local_48;
  
  if ((this->FrameData).ArrayNum == 0) {
    cVar7 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
    if (cVar7 == '\0') {
      return false;
    }
    LOCK();
    pTVar1 = &(this->EvaluationStatistics).BufferOverflow;
    *pTVar1 = (TAtomic<int>)((int)*pTVar1 + 1);
    UNLOCK();
    return false;
  }
  if ((this->FrameInterpolationProcessor).Object ==
      (ILiveLinkFrameInterpolationProcessorWorker *)0x0) {
    bVar8 = GetFrameAtSceneTime_Closest(this,param_1,param_2);
    if (!bVar8) {
      return bVar8;
    }
  }
  else {
    pIVar3 = (this->FrameInterpolationProcessor).Object;
    local_50 = 0xffffffffffffffff;
    local_48 = 0;
    (**(code **)((longlong)*pIVar3 + 8))
              (pIVar3,param_1,&this->StaticData,&this->FrameData,param_2,&local_58);
    cVar7 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
    if (cVar7 != '\0') {
      if (local_48._1_1_ == '\0') {
        if ((char)local_48 != '\0') {
          LOCK();
          (this->EvaluationStatistics).BufferUnderflow =
               (TAtomic<int>)((int)(this->EvaluationStatistics).BufferUnderflow + 1);
          UNLOCK();
        }
      }
      else {
        LOCK();
        pTVar1 = &(this->EvaluationStatistics).BufferOverflow;
        *pTVar1 = (TAtomic<int>)((int)*pTVar1 + 1);
        UNLOCK();
      }
      lpCriticalSection = &this->StatisticCriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      (this->EvaluationStatistics).LastEvaluationData.DistanceToNewestSampleSeconds = local_58;
      (this->EvaluationStatistics).LastEvaluationData.DistanceToOldestSampleSeconds = local_54;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    bVar8 = true;
  }
  this_00 = &this->StaticData;
  lVar11 = (**(code **)((param_2->StaticData).WrappedStruct._padding_ + 0x10))(param_2);
  if (lVar11 != 0) {
    return bVar8;
  }
  pvVar12 = (void *)(**(code **)((this_00->WrappedStruct)._padding_ + 0x18))(this_00);
  pUVar13 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::GetStruct(this_00);
  if ((pUVar13 == (UScriptStruct *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOtherStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                         ,0x16d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar10 = (*pcVar5)();
    return (bool)uVar10;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = pUVar13;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  FVar6 = local_res8;
  (**(code **)((param_2->StaticData).WrappedStruct._padding_ + 0x40))(param_2);
  puVar4 = (undefined8 *)(param_2->StaticData).WrappedStruct._padding_;
  (param_2->StaticData).WrappedStruct.ScriptStruct.WeakPtr = FVar6;
  (*(code *)*puVar4)(param_2);
  if (pvVar12 == (void *)0x0) {
    return bVar8;
  }
  pUVar13 = (UScriptStruct *)
            (**(code **)((param_2->StaticData).WrappedStruct._padding_ + 0x20))(param_2);
  if (pUVar13 != (UScriptStruct *)0x0) {
    pUVar14 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar14->_padding_;
    if ((iVar2 <= *(int *)(pUVar13->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar14->_padding_)) goto LAB_14d04bf3a;
  }
  pUVar13 = (UScriptStruct *)0x0;
LAB_14d04bf3a:
  pvVar15 = (void *)(**(code **)((param_2->StaticData).WrappedStruct._padding_ + 0x18))(param_2);
  UScriptStruct::CopyScriptStruct(pUVar13,pvVar15,pvVar12,1);
  return bVar8;
}

// GetFrameAtSceneTime_Closest @ 14d04bfa0

bool __thiscall
FLiveLinkSubject::GetFrameAtSceneTime_Closest
          (FLiveLinkSubject *this,FQualifiedFrameTime *param_1,FLiveLinkSubjectFrameData *param_2)

{
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar1;
  TAtomic<int> *pTVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  double dVar10;
  bool bVar11;
  FWeakObjectPtr FVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  char cVar16;
  longlong lVar17;
  void *pvVar18;
  UScriptStruct *pUVar19;
  UClass *pUVar20;
  void *pvVar21;
  UObject *pUVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  double dVar29;
  double dVar30;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  float fStackX_24;
  float fStack_94;
  float fStack_8c;
  UObject *local_88;
  UScriptStruct *local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  if (((this->FrameData).ArrayNum == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("FrameData.Num() != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkSubject.cpp"
                          ,0x382,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  bVar11 = false;
  bVar13 = false;
  fStackX_24 = (param_1->Time).SubFrame;
  iVar23 = (param_1->Rate).Denominator;
  uVar25 = (this->FrameData).ArrayNum - 1;
  dVar10 = ((double)((longlong)iVar23 * (longlong)(param_1->Time).FrameNumber.Value) +
           (double)iVar23 * (double)fStackX_24) / (double)(param_1->Rate).Numerator;
  if (-1 < (int)uVar25) {
    lVar28 = (longlong)(int)uVar25 * 0x28;
    do {
      if (((this->FrameData).ArrayNum <= (int)uVar25) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return (bool)uVar14;
      }
      lVar17 = (**(code **)(*(longlong *)((this->FrameData).AllocatorInstance.Data + lVar28) + 0x18)
               )();
      fStack_94 = (float)((ulonglong)*(undefined8 *)(lVar17 + 0x60) >> 0x20);
      iVar23 = (int)((ulonglong)*(undefined8 *)(lVar17 + 0x68) >> 0x20);
      dVar30 = ((double)((longlong)(int)*(undefined8 *)(lVar17 + 0x60) * (longlong)iVar23) +
               (double)fStack_94 * (double)iVar23) / (double)(int)*(undefined8 *)(lVar17 + 0x68);
      if (dVar30 <= dVar10) {
        iVar23 = (this->FrameData).ArrayNum;
        if (uVar25 == (this->FrameData).ArrayNum - 1U) {
          if ((iVar23 <= (int)uVar25) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::InitializeWith
                    (&param_2->FrameData,
                     (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)
                     ((this->FrameData).AllocatorInstance.Data + (ulonglong)uVar25 * 0x28));
          uVar25 = SUB84(dVar30 - dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar26 = (uint)((ulonglong)(dVar30 - dVar10) >> 0x20) &
                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          bVar13 = __real_3e45798ee2308c3a <= (double)CONCAT44(uVar26,uVar25) &&
                   (double)CONCAT44(uVar26,uVar25) != __real_3e45798ee2308c3a;
        }
        else {
          uVar27 = uVar25 + 1;
          uVar26 = 0;
          if ((int)uVar27 < iVar23) {
            uVar26 = ~uVar27 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          lVar28 = (**(code **)(*(longlong *)
                                 ((this->FrameData).AllocatorInstance.Data +
                                 (longlong)(int)uVar27 * 0x28) + 0x18))();
          pFVar1 = &param_2->FrameData;
          fStack_8c = (float)((ulonglong)*(undefined8 *)(lVar28 + 0x60) >> 0x20);
          iVar23 = (int)((ulonglong)*(undefined8 *)(lVar28 + 0x68) >> 0x20);
          if (__real_3fe0000000000000 <
              (dVar10 - dVar30) /
              (((double)((longlong)(int)*(undefined8 *)(lVar28 + 0x60) * (longlong)iVar23) +
               (double)fStack_8c * (double)iVar23) / (double)(int)*(undefined8 *)(lVar28 + 0x68) -
              dVar30)) {
            uVar27 = uVar25;
          }
          uVar25 = 0;
          if ((int)uVar27 < (this->FrameData).ArrayNum) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          lVar28 = (longlong)(int)uVar27;
          pvVar18 = (void *)(**(code **)(*(longlong *)
                                          ((this->FrameData).AllocatorInstance.Data + lVar28 * 0x28)
                                        + 0x18))();
          uVar25 = 0;
          if ((int)uVar27 < (this->FrameData).ArrayNum) {
            uVar25 = ~uVar27 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            uVar14 = (*pcVar9)();
            return (bool)uVar14;
          }
          pFVar4 = (this->FrameData).AllocatorInstance.Data;
          pUVar22 = (UObject *)
                    (**(code **)(*(longlong *)(pFVar4 + lVar28 * 0x28) + 0x20))
                              (pFVar4 + lVar28 * 0x28);
          if (pUVar22 == (UObject *)0x0) {
LAB_14d04c52c:
            pUVar22 = (UObject *)0x0;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("InOtherStruct",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                                ,0x16d,L"");
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              uVar14 = (*pcVar9)();
              return (bool)uVar14;
            }
          }
          else {
            pUVar20 = Z_Construct_UClass_UScriptStruct_NoRegister();
            iVar23 = (int)pUVar20->_padding_;
            if ((*(int *)(*(longlong *)&pUVar22->field_0x10 + 0x38) < iVar23) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar22->field_0x10 + 0x30) + (longlong)iVar23 * 8) !=
                &pUVar20->_padding_)) goto LAB_14d04c52c;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar22 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar22);
          }
          local_res8.ObjectIndex = 0;
          local_res8.ObjectSerialNumber = 0;
          local_88 = pUVar22;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar22 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar22);
          }
          FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_88);
          FVar12 = local_res8;
          (**(code **)((pFVar1->WrappedStruct)._padding_ + 0x40))(pFVar1);
          puVar3 = (undefined8 *)(pFVar1->WrappedStruct)._padding_;
          (param_2->FrameData).WrappedStruct.ScriptStruct.WeakPtr = FVar12;
          (*(code *)*puVar3)(pFVar1);
          if (pvVar18 != (void *)0x0) {
            pUVar19 = (UScriptStruct *)
                      (**(code **)((pFVar1->WrappedStruct)._padding_ + 0x20))(pFVar1);
            if (pUVar19 == (UScriptStruct *)0x0) {
LAB_14d04c601:
              pUVar19 = (UScriptStruct *)0x0;
            }
            else {
              pUVar20 = Z_Construct_UClass_UScriptStruct_NoRegister();
              iVar23 = (int)pUVar20->_padding_;
              if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar23) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar23 * 8)
                  != &pUVar20->_padding_)) goto LAB_14d04c601;
            }
            pvVar21 = (void *)(**(code **)((pFVar1->WrappedStruct)._padding_ + 0x18))(pFVar1);
            UScriptStruct::CopyScriptStruct(pUVar19,pvVar21,pvVar18,1);
          }
          bVar13 = false;
        }
        goto LAB_14d04c624;
      }
      lVar28 = lVar28 + -0x28;
      uVar25 = uVar25 - 1;
    } while (-1 < (int)uVar25);
  }
  bVar11 = true;
  if (((this->FrameData).ArrayNum < 1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  pvVar18 = (void *)(**(code **)(*(longlong *)(this->FrameData).AllocatorInstance.Data + 0x18))();
  if (((this->FrameData).ArrayNum < 1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return (bool)uVar14;
  }
  pUVar19 = (UScriptStruct *)
            (**(code **)(*(longlong *)(this->FrameData).AllocatorInstance.Data + 0x20))();
  if (pUVar19 == (UScriptStruct *)0x0) {
LAB_14d04c1f1:
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("InOtherStruct",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                        ,0x16d,L"");
    pUVar19 = (UScriptStruct *)0x0;
    if (bVar15) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
  }
  else {
    pUVar20 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar23 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar23) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar23 * 8) !=
        &pUVar20->_padding_)) goto LAB_14d04c1f1;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar19);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_80 = pUVar19;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar19 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar19);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_80);
  FVar12 = local_res10;
  (**(code **)((param_2->FrameData).WrappedStruct._padding_ + 0x40))(&param_2->FrameData);
  puVar3 = (undefined8 *)(param_2->FrameData).WrappedStruct._padding_;
  (param_2->FrameData).WrappedStruct.ScriptStruct.WeakPtr = FVar12;
  (*(code *)*puVar3)(&param_2->FrameData);
  if (pvVar18 == (void *)0x0) goto LAB_14d04c624;
  pUVar19 = (UScriptStruct *)
            (**(code **)((param_2->FrameData).WrappedStruct._padding_ + 0x20))(&param_2->FrameData);
  if (pUVar19 == (UScriptStruct *)0x0) {
LAB_14d04c2c9:
    pUVar19 = (UScriptStruct *)0x0;
  }
  else {
    pUVar20 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar23 = (int)pUVar20->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar23) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar23 * 8) !=
        &pUVar20->_padding_)) goto LAB_14d04c2c9;
  }
  pvVar21 = (void *)(**(code **)((param_2->FrameData).WrappedStruct._padding_ + 0x18))
                              (&param_2->FrameData);
  UScriptStruct::CopyScriptStruct(pUVar19,pvVar21,pvVar18,1);
LAB_14d04c624:
  cVar16 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
  if (cVar16 != '\0') {
    if (bVar11) {
      LOCK();
      (this->EvaluationStatistics).BufferUnderflow =
           (TAtomic<int>)((int)(this->EvaluationStatistics).BufferUnderflow + 1);
      UNLOCK();
    }
    if (bVar13) {
      LOCK();
      pTVar2 = &(this->EvaluationStatistics).BufferOverflow;
      *pTVar2 = (TAtomic<int>)((int)*pTVar2 + 1);
      UNLOCK();
    }
    uVar26 = (this->FrameData).ArrayNum - 1;
    uVar25 = 0;
    if ((int)uVar26 < (this->FrameData).ArrayNum) {
      uVar25 = ~uVar26 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    lVar28 = (**(code **)(*(longlong *)
                           ((this->FrameData).AllocatorInstance.Data + (longlong)(int)uVar26 * 0x28)
                         + 0x18))();
    uVar5 = *(undefined8 *)(lVar28 + 0x68);
    uVar6 = *(undefined8 *)(lVar28 + 0x60);
    local_78._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
    dVar30 = (double)local_78._4_4_;
    iVar23 = (int)((ulonglong)uVar5 >> 0x20);
    local_78 = uVar6;
    if (((this->FrameData).ArrayNum < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return (bool)uVar14;
    }
    lVar28 = (**(code **)(*(longlong *)(this->FrameData).AllocatorInstance.Data + 0x18))();
    lpCriticalSection = &this->StatisticCriticalSection;
    uVar7 = *(undefined8 *)(lVar28 + 0x68);
    uVar8 = *(undefined8 *)(lVar28 + 0x60);
    local_70._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
    iVar24 = (int)((ulonglong)uVar7 >> 0x20);
    dVar29 = (double)local_70._4_4_;
    local_70 = uVar8;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->EvaluationStatistics).LastEvaluationData.DistanceToNewestSampleSeconds =
         (float)(((double)((longlong)(int)uVar6 * (longlong)iVar23) + dVar30 * (double)iVar23) /
                 (double)(int)uVar5 - dVar10);
    (this->EvaluationStatistics).LastEvaluationData.DistanceToOldestSampleSeconds =
         (float)(dVar10 - ((double)((longlong)(int)uVar8 * (longlong)iVar24) +
                          (double)iVar24 * dVar29) / (double)(int)uVar7);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return true;
}

// GetFrameAtSceneTime_Interpolated @ 14d04c830

bool __thiscall
FLiveLinkSubject::GetFrameAtSceneTime_Interpolated
          (FLiveLinkSubject *this,FQualifiedFrameTime *param_1,FLiveLinkSubjectFrameData *param_2)

{
  TAtomic<int> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  ILiveLinkFrameInterpolationProcessorWorker *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  float local_48;
  float local_44;
  undefined8 local_40;
  undefined2 local_38;
  
  if ((this->FrameData).ArrayNum == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FrameData.Num() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkSubject.cpp"
                       ,0x3c3,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_40 = 0xffffffffffffffff;
  local_38 = 0;
  if ((this->FrameInterpolationProcessor).Object ==
      (ILiveLinkFrameInterpolationProcessorWorker *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pIVar2 = (this->FrameInterpolationProcessor).Object;
  (**(code **)((longlong)*pIVar2 + 8))
            (pIVar2,param_1,&this->StaticData,&this->FrameData,param_2,&local_48);
  cVar6 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
  if (cVar6 != '\0') {
    if (local_38._1_1_ == '\0') {
      if ((char)local_38 != '\0') {
        LOCK();
        (this->EvaluationStatistics).BufferUnderflow =
             (TAtomic<int>)((int)(this->EvaluationStatistics).BufferUnderflow + 1);
        UNLOCK();
      }
    }
    else {
      LOCK();
      pTVar1 = &(this->EvaluationStatistics).BufferOverflow;
      *pTVar1 = (TAtomic<int>)((int)*pTVar1 + 1);
      UNLOCK();
    }
    lpCriticalSection = &this->StatisticCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->EvaluationStatistics).LastEvaluationData.DistanceToNewestSampleSeconds = local_48;
    (this->EvaluationStatistics).LastEvaluationData.DistanceToOldestSampleSeconds = local_44;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return true;
}

// GetFrameAtWorldTime @ 14d04c990

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLiveLinkSubject::GetFrameAtWorldTime
          (FLiveLinkSubject *this,double param_1,FLiveLinkSubjectFrameData *param_2)

{
  TAtomic<int> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar2;
  ILiveLinkFrameInterpolationProcessorWorker *pIVar3;
  undefined8 *puVar4;
  code *pcVar5;
  FWeakObjectPtr FVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  longlong lVar11;
  void *pvVar12;
  UScriptStruct *pUVar13;
  UClass *pUVar14;
  void *pvVar15;
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *this_00;
  FWeakObjectPtr local_res8;
  UScriptStruct *local_res20;
  FString local_78;
  float local_68;
  float local_64;
  undefined8 local_60;
  undefined2 local_58;
  
  if ((this->FrameData).ArrayNum == 0) {
    cVar10 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
    if (cVar10 == '\0') {
      return false;
    }
    LOCK();
    pTVar1 = &(this->EvaluationStatistics).BufferOverflow;
    *pTVar1 = (TAtomic<int>)((int)*pTVar1 + 1);
    UNLOCK();
    return false;
  }
  if ((this->FrameInterpolationProcessor).Object ==
      (ILiveLinkFrameInterpolationProcessorWorker *)0x0) {
    bVar7 = GetFrameAtWorldTime_Closest(this,param_1,param_2);
    if (!bVar7) goto LAB_14d04cc0c;
  }
  else {
    pIVar3 = (this->FrameInterpolationProcessor).Object;
    local_60 = 0xffffffffffffffff;
    local_58 = 0;
    (**(code **)((longlong)*pIVar3 + 0x10))
              (pIVar3,&local_68,&this->StaticData,&this->FrameData,param_2,&local_68);
    if (5 < (byte)LogLiveLink._0_1_) {
      ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_78);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLink);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    if (local_58._1_1_ == '\0') {
      if ((char)local_58 != '\0') {
        LOCK();
        (this->EvaluationStatistics).BufferUnderflow =
             (TAtomic<int>)((int)(this->EvaluationStatistics).BufferUnderflow + 1);
        UNLOCK();
      }
    }
    else {
      LOCK();
      pTVar1 = &(this->EvaluationStatistics).BufferOverflow;
      *pTVar1 = (TAtomic<int>)((int)*pTVar1 + 1);
      UNLOCK();
    }
    lpCriticalSection = &this->StatisticCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->EvaluationStatistics).LastEvaluationData.DistanceToNewestSampleSeconds = local_68;
    (this->EvaluationStatistics).LastEvaluationData.DistanceToOldestSampleSeconds = local_64;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar7 = true;
  }
  this_00 = &this->StaticData;
  lVar11 = (**(code **)((param_2->StaticData).WrappedStruct._padding_ + 0x10))(param_2);
  if (lVar11 != 0) goto LAB_14d04cc0c;
  pvVar12 = (void *)(**(code **)((this_00->WrappedStruct)._padding_ + 0x18))(this_00);
  pUVar13 = FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::GetStruct(this_00);
  if ((pUVar13 == (UScriptStruct *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOtherStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                         ,0x16d,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    uVar9 = (*pcVar5)();
    return (bool)uVar9;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = pUVar13;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  FVar6 = local_res8;
  (**(code **)((param_2->StaticData).WrappedStruct._padding_ + 0x40))(param_2);
  puVar4 = (undefined8 *)(param_2->StaticData).WrappedStruct._padding_;
  (param_2->StaticData).WrappedStruct.ScriptStruct.WeakPtr = FVar6;
  (*(code *)*puVar4)(param_2);
  if (pvVar12 == (void *)0x0) goto LAB_14d04cc0c;
  pUVar13 = (UScriptStruct *)
            (**(code **)((param_2->StaticData).WrappedStruct._padding_ + 0x20))(param_2);
  if (pUVar13 == (UScriptStruct *)0x0) {
LAB_14d04cbe4:
    pUVar13 = (UScriptStruct *)0x0;
  }
  else {
    pUVar14 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar14->_padding_;
    if ((*(int *)(pUVar13->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar14->_padding_)) goto LAB_14d04cbe4;
  }
  pvVar15 = (void *)(**(code **)((param_2->StaticData).WrappedStruct._padding_ + 0x18))(param_2);
  UScriptStruct::CopyScriptStruct(pUVar13,pvVar15,pvVar12,1);
LAB_14d04cc0c:
  lVar11 = (**(code **)((param_2->FrameData).WrappedStruct._padding_ + 0x18))(&param_2->FrameData);
  *(double *)(lVar11 + 8) = (this->CachedSettings).BufferSettings.EngineTimeClockOffset;
  return bVar7;
}

// GetFrameAtWorldTime_Closest @ 14d04cc70

bool __thiscall
FLiveLinkSubject::GetFrameAtWorldTime_Closest
          (FLiveLinkSubject *this,double param_1,FLiveLinkSubjectFrameData *param_2)

{
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FWeakObjectPtr FVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  char cVar12;
  double *pdVar13;
  void *pvVar14;
  UScriptStruct *pUVar15;
  UClass *pUVar16;
  void *pvVar17;
  UObject *pUVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  UObject *local_78;
  UScriptStruct *local_70 [7];
  
  if (((this->FrameData).ArrayNum == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrameData.Num() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkSubject.cpp"
                         ,0x319,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  bVar9 = false;
  uVar19 = (this->FrameData).ArrayNum - 1;
  if (-1 < (int)uVar19) {
    lVar22 = (longlong)(int)uVar19 * 0x28;
    do {
      if (((this->FrameData).ArrayNum <= (int)uVar19) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      pdVar13 = (double *)
                (**(code **)(*(longlong *)((this->FrameData).AllocatorInstance.Data + lVar22) + 0x18
                            ))();
      dVar2 = *pdVar13;
      if (dVar2 <= param_1) {
        iVar4 = (this->FrameData).ArrayNum;
        if (uVar19 == (this->FrameData).ArrayNum - 1U) {
          if ((iVar4 <= (int)uVar19) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>::InitializeWith
                    (&param_2->FrameData,
                     (FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)
                     ((this->FrameData).AllocatorInstance.Data + (ulonglong)uVar19 * 0x28));
          uVar19 = SUB84(dVar2 - param_1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar20 = (uint)((ulonglong)(dVar2 - param_1) >> 0x20) &
                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          bVar9 = __real_3e45798ee2308c3a <= (double)CONCAT44(uVar20,uVar19) &&
                  (double)CONCAT44(uVar20,uVar19) != __real_3e45798ee2308c3a;
        }
        else {
          uVar21 = uVar19 + 1;
          uVar20 = 0;
          if ((int)uVar21 < iVar4) {
            uVar20 = ~uVar21 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          pdVar13 = (double *)
                    (**(code **)(*(longlong *)
                                  ((this->FrameData).AllocatorInstance.Data +
                                  (longlong)(int)uVar21 * 0x28) + 0x18))();
          pFVar1 = &param_2->FrameData;
          if (__real_3f000000 < (float)((param_1 - *pdVar13) / (*pdVar13 - dVar2))) {
            uVar21 = uVar19;
          }
          uVar19 = 0;
          if ((int)uVar21 < (this->FrameData).ArrayNum) {
            uVar19 = ~uVar21 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          lVar22 = (longlong)(int)uVar21;
          pvVar14 = (void *)(**(code **)(*(longlong *)
                                          ((this->FrameData).AllocatorInstance.Data + lVar22 * 0x28)
                                        + 0x18))();
          uVar19 = 0;
          if ((int)uVar21 < (this->FrameData).ArrayNum) {
            uVar19 = ~uVar21 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
          pFVar6 = (this->FrameData).AllocatorInstance.Data;
          pUVar18 = (UObject *)
                    (**(code **)(*(longlong *)(pFVar6 + lVar22 * 0x28) + 0x20))
                              (pFVar6 + lVar22 * 0x28);
          if (pUVar18 == (UObject *)0x0) {
LAB_14d04d274:
            pUVar18 = (UObject *)0x0;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InOtherStruct",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                                ,0x16d,L"");
            if (bVar11) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
          }
          else {
            pUVar16 = Z_Construct_UClass_UScriptStruct_NoRegister();
            iVar4 = (int)pUVar16->_padding_;
            if ((*(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38) < iVar4) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
                &pUVar16->_padding_)) goto LAB_14d04d274;
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar18);
          }
          local_res8.ObjectIndex = 0;
          local_res8.ObjectSerialNumber = 0;
          local_78 = pUVar18;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar18);
          }
          FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_78);
          FVar8 = local_res8;
          (**(code **)((pFVar1->WrappedStruct)._padding_ + 0x40))(pFVar1);
          puVar5 = (undefined8 *)(pFVar1->WrappedStruct)._padding_;
          (param_2->FrameData).WrappedStruct.ScriptStruct.WeakPtr = FVar8;
          (*(code *)*puVar5)(pFVar1);
          if (pvVar14 != (void *)0x0) {
            pUVar15 = (UScriptStruct *)
                      (**(code **)((pFVar1->WrappedStruct)._padding_ + 0x20))(pFVar1);
            if (pUVar15 == (UScriptStruct *)0x0) {
LAB_14d04d34d:
              pUVar15 = (UScriptStruct *)0x0;
            }
            else {
              pUVar16 = Z_Construct_UClass_UScriptStruct_NoRegister();
              iVar4 = (int)pUVar16->_padding_;
              if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar4) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar4 * 8)
                  != &pUVar16->_padding_)) goto LAB_14d04d34d;
            }
            pvVar17 = (void *)(**(code **)((pFVar1->WrappedStruct)._padding_ + 0x18))(pFVar1);
            UScriptStruct::CopyScriptStruct(pUVar15,pvVar17,pvVar14,1);
          }
        }
        goto LAB_14d04cf1b;
      }
      lVar22 = lVar22 + -0x28;
      uVar19 = uVar19 - 1;
    } while (-1 < (int)uVar19);
  }
  if (((this->FrameData).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  pvVar14 = (void *)(**(code **)(*(longlong *)(this->FrameData).AllocatorInstance.Data + 0x18))();
  if (((this->FrameData).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  pUVar15 = (UScriptStruct *)
            (**(code **)(*(longlong *)(this->FrameData).AllocatorInstance.Data + 0x20))();
  if (pUVar15 == (UScriptStruct *)0x0) {
LAB_14d04ce22:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOtherStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                       ,0x16d,L"");
    pUVar15 = (UScriptStruct *)0x0;
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
  }
  else {
    pUVar16 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar4 = (int)pUVar16->_padding_;
    if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar4 * 8)
        != &pUVar16->_padding_)) goto LAB_14d04ce22;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_70[0] = pUVar15;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_70);
  FVar8 = local_res20;
  (**(code **)((param_2->FrameData).WrappedStruct._padding_ + 0x40))(&param_2->FrameData);
  puVar5 = (undefined8 *)(param_2->FrameData).WrappedStruct._padding_;
  (param_2->FrameData).WrappedStruct.ScriptStruct.WeakPtr = FVar8;
  (*(code *)*puVar5)(&param_2->FrameData);
  if (pvVar14 == (void *)0x0) goto LAB_14d04cf18;
  pUVar15 = (UScriptStruct *)
            (**(code **)((param_2->FrameData).WrappedStruct._padding_ + 0x20))(&param_2->FrameData);
  if (pUVar15 == (UScriptStruct *)0x0) {
LAB_14d04cef6:
    pUVar15 = (UScriptStruct *)0x0;
  }
  else {
    pUVar16 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar4 = (int)pUVar16->_padding_;
    if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar4 * 8)
        != &pUVar16->_padding_)) goto LAB_14d04cef6;
  }
  pvVar17 = (void *)(**(code **)((param_2->FrameData).WrappedStruct._padding_ + 0x18))
                              (&param_2->FrameData);
  UScriptStruct::CopyScriptStruct(pUVar15,pvVar17,pvVar14,1);
LAB_14d04cf18:
  bVar9 = true;
LAB_14d04cf1b:
  cVar12 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
  if (cVar12 != '\0') {
    if (bVar9) {
      LOCK();
      (this->EvaluationStatistics).BufferUnderflow =
           (TAtomic<int>)((int)(this->EvaluationStatistics).BufferUnderflow + 1);
      UNLOCK();
    }
    uVar20 = (this->FrameData).ArrayNum - 1;
    uVar19 = 0;
    if ((int)uVar20 < (this->FrameData).ArrayNum) {
      uVar19 = ~uVar20 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    pdVar13 = (double *)
              (**(code **)(*(longlong *)
                            ((this->FrameData).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x28
                            ) + 0x18))();
    dVar2 = *pdVar13;
    if (((this->FrameData).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    pdVar13 = (double *)
              (**(code **)(*(longlong *)(this->FrameData).AllocatorInstance.Data + 0x18))();
    lpCriticalSection = &this->StatisticCriticalSection;
    dVar3 = *pdVar13;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->EvaluationStatistics).LastEvaluationData.DistanceToNewestSampleSeconds =
         (float)(dVar2 - param_1);
    (this->EvaluationStatistics).LastEvaluationData.DistanceToOldestSampleSeconds =
         (float)(param_1 - dVar3);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return true;
}

// GetFrameAtWorldTime_Interpolated @ 14d04d380

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLiveLinkSubject::GetFrameAtWorldTime_Interpolated
          (FLiveLinkSubject *this,double param_1,FLiveLinkSubjectFrameData *param_2)

{
  TAtomic<int> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  ILiveLinkFrameInterpolationProcessorWorker *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_58;
  float local_48;
  float local_44;
  undefined8 local_40;
  undefined2 local_38;
  
  if (((this->FrameData).ArrayNum == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrameData.Num() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkSubject.cpp"
                         ,0x357,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_40 = 0xffffffffffffffff;
  local_38 = 0;
  if (((this->FrameInterpolationProcessor).Object ==
       (ILiveLinkFrameInterpolationProcessorWorker *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pIVar2 = (this->FrameInterpolationProcessor).Object;
  (**(code **)((longlong)*pIVar2 + 0x10))
            (pIVar2,SUB84(param_1,0),&this->StaticData,&this->FrameData,param_2,&local_48);
  if (5 < (byte)LogLiveLink._0_1_) {
    ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_58);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLink);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_38._1_1_ == '\0') {
    if ((char)local_38 != '\0') {
      LOCK();
      (this->EvaluationStatistics).BufferUnderflow =
           (TAtomic<int>)((int)(this->EvaluationStatistics).BufferUnderflow + 1);
      UNLOCK();
    }
  }
  else {
    LOCK();
    pTVar1 = &(this->EvaluationStatistics).BufferOverflow;
    *pTVar1 = (TAtomic<int>)((int)*pTVar1 + 1);
    UNLOCK();
  }
  lpCriticalSection = &this->StatisticCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->EvaluationStatistics).LastEvaluationData.DistanceToNewestSampleSeconds = local_48;
    (this->EvaluationStatistics).LastEvaluationData.DistanceToOldestSampleSeconds = local_44;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetFrameDroppedStat @ 14d04d520

int __thiscall FLiveLinkSubject::GetFrameDroppedStat(FLiveLinkSubject *this)

{
  return (int)(this->EvaluationStatistics).BufferUnderflow;
}

// GetFrameRemapper @ 14d04d5c0

TSharedPtr<ILiveLinkSubjectRemapperWorker,1> * __thiscall
FLiveLinkSubject::GetFrameRemapper
          (FLiveLinkSubject *this,
          TSharedPtr<ILiveLinkSubjectRemapperWorker,1> *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TReferenceControllerBase<1> *pTVar1;
  
  lpCriticalSection = &this->SettingsCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    __return_storage_ptr__->Object = (this->SubjectRemapper).Object;
    pTVar1 = (this->SubjectRemapper).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetFrameSnapshot @ 14d04d630

FLiveLinkSubjectFrameData * __thiscall FLiveLinkSubject::GetFrameSnapshot(FLiveLinkSubject *this)

{
  return &this->FrameSnapshot;
}

// GetFrameTimes @ 14d04d640

TArray<FLiveLinkTime,TSizedDefaultAllocator<32>_> * __thiscall
FLiveLinkSubject::GetFrameTimes
          (FLiveLinkSubject *this,
          TArray<FLiveLinkTime,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined8 uVar9;
  int iVar10;
  double *pdVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar6 = (this->FrameData).ArrayNum;
  if (-1 < (int)uVar6) {
    if (0 < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar6,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    }
    iVar7 = (this->FrameData).ArrayNum;
    pFVar13 = (this->FrameData).AllocatorInstance.Data;
    pFVar2 = pFVar13 + (longlong)iVar7 * 0x28;
    while( true ) {
      if ((this->FrameData).ArrayNum != iVar7) {
        `TCheckedPointerIterator<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar13 == pFVar2) break;
      pdVar11 = (double *)(**(code **)(*(longlong *)pFVar13 + 0x10))(pFVar13);
      dVar3 = (this->CachedSettings).BufferSettings.EngineTimeClockOffset;
      dVar4 = *pdVar11;
      dVar5 = (this->CachedSettings).BufferSettings.SmoothEngineTimeOffset;
      lVar12 = (**(code **)(*(longlong *)pFVar13 + 0x10))(pFVar13);
      iVar10 = __return_storage_ptr__->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      pFVar13 = pFVar13 + 0x28;
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
      *(double *)(pFVar8 + (longlong)iVar10 * 0x18) = dVar3 + dVar4 + dVar5;
      uVar9 = *(undefined8 *)(lVar12 + 0x68);
      pFVar8 = pFVar8 + (longlong)iVar10 * 0x18 + 8;
      *(undefined8 *)pFVar8 = *(undefined8 *)(lVar12 + 0x60);
      *(undefined8 *)(pFVar8 + 8) = uVar9;
    }
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// GetFrameTranslators @ 14d04d780

TArray<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,TSizedDefaultAllocator<32>_> * __thiscall
FLiveLinkSubject::GetFrameTranslators
          (FLiveLinkSubject *this,
          TArray<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *pTVar2;
  
  lpCriticalSection = &this->SettingsCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar1 = (this->FrameTranslators).ArrayNum;
    pTVar2 = (TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *)
             (this->FrameTranslators).AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
                 &__return_storage_ptr__->ArrayMax);
      ConstructItems<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,int>
                ((__return_storage_ptr__->AllocatorInstance).Data,pTVar2,iVar1);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetLastEvaluationData @ 14d04e260

void __thiscall
FLiveLinkSubject::GetLastEvaluationData
          (FLiveLinkSubject *this,FTimedDataInputEvaluationData *param_1)

{
  int *lpCriticalSection;
  TAtomic<int> TVar1;
  
  lpCriticalSection = &this->LastRebroadcastFrameId;
  if (lpCriticalSection != (int *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TVar1 = (this->EvaluationStatistics).FrameDrop;
    param_1->DistanceToNewestSampleSeconds = (float)(this->EvaluationStatistics).BufferOverflow;
    param_1->DistanceToOldestSampleSeconds = (float)TVar1;
                    /* WARNING: Could not recover jumptable at 0x00014d04e2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetLatestFrame @ 14d04e2d0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FLiveLinkSubject::GetLatestFrame(FLiveLinkSubject *this,FLiveLinkSubjectFrameData *param_1)

{
  TAtomic<int> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  int iVar15;
  bool bVar16;
  FWeakObjectPtr FVar17;
  bool bVar18;
  undefined1 uVar19;
  char cVar20;
  bool bVar21;
  int iVar22;
  void *pvVar23;
  UObject *pUVar24;
  UClass *pUVar25;
  UScriptStruct *pUVar26;
  void *pvVar27;
  double *pdVar28;
  longlong lVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  double dVar33;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UObject *local_78;
  UObject *local_70;
  undefined8 local_68;
  
  iVar9 = (this->FrameData).ArrayNum;
  if (iVar9 == 0) {
    return false;
  }
  iVar32 = iVar9 - (this->CachedSettings).BufferSettings.LatestOffset;
  bVar21 = false;
  iVar22 = iVar32 + -1;
  if ((iVar22 < iVar9) && (iVar22 < 0)) {
    uVar30 = 0;
    bVar16 = true;
LAB_14d04e353:
    if ((this->FrameData).ArrayNum <= (int)uVar30) goto LAB_14d04e362;
  }
  else {
    iVar15 = iVar9;
    if (iVar22 < iVar9) {
      iVar15 = iVar32;
    }
    bVar21 = iVar9 <= iVar22;
    bVar16 = false;
    uVar30 = iVar15 - 1;
    if (-1 < (int)uVar30) goto LAB_14d04e353;
LAB_14d04e362:
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("FrameData.IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkSubject.cpp"
                        ,0x3f5,L"");
    if (bVar18) {
      pcVar14 = (code *)swi(3);
      uVar19 = (*pcVar14)();
      return (bool)uVar19;
    }
  }
  uVar31 = 0;
  if ((int)uVar30 < (this->FrameData).ArrayNum) {
    uVar31 = ~uVar30 >> 0x1f;
  }
  if ((uVar31 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar14 = (code *)swi(3);
    uVar19 = (*pcVar14)();
    return (bool)uVar19;
  }
  pFVar10 = (this->FrameData).AllocatorInstance.Data;
  pFVar2 = pFVar10 + (longlong)(int)uVar30 * 0x28;
  pvVar23 = (void *)(**(code **)(*(longlong *)(pFVar10 + (longlong)(int)uVar30 * 0x28) + 0x18))
                              (pFVar2);
  pUVar24 = (UObject *)(**(code **)(*(longlong *)pFVar2 + 0x20))(pFVar2);
  if (pUVar24 == (UObject *)0x0) {
LAB_14d04e41f:
    pUVar24 = (UObject *)0x0;
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("InOtherStruct",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                        ,0x16d,L"");
    if (bVar18) {
      pcVar14 = (code *)swi(3);
      uVar19 = (*pcVar14)();
      return (bool)uVar19;
    }
  }
  else {
    pUVar25 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar22 = (int)pUVar25->_padding_;
    if ((*(int *)(*(longlong *)&pUVar24->field_0x10 + 0x38) < iVar22) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar24->field_0x10 + 0x30) + (longlong)iVar22 * 8) !=
        &pUVar25->_padding_)) goto LAB_14d04e41f;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar24);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_78 = pUVar24;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar24);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_78);
  FVar17 = local_res18;
  (**(code **)((param_1->FrameData).WrappedStruct._padding_ + 0x40))(&param_1->FrameData);
  puVar11 = (undefined8 *)(param_1->FrameData).WrappedStruct._padding_;
  (param_1->FrameData).WrappedStruct.ScriptStruct.WeakPtr = FVar17;
  (*(code *)*puVar11)(&param_1->FrameData);
  if (pvVar23 != (void *)0x0) {
    pUVar26 = (UScriptStruct *)
              (**(code **)((param_1->FrameData).WrappedStruct._padding_ + 0x20))
                        (&param_1->FrameData);
    if (pUVar26 == (UScriptStruct *)0x0) {
LAB_14d04e4fb:
      pUVar26 = (UScriptStruct *)0x0;
    }
    else {
      pUVar25 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar22 = (int)pUVar25->_padding_;
      if ((*(int *)(pUVar26->_padding_ + 0x38) < iVar22) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar26->_padding_ + 0x30) + (longlong)iVar22 * 8) !=
          &pUVar25->_padding_)) goto LAB_14d04e4fb;
    }
    pvVar27 = (void *)(**(code **)((param_1->FrameData).WrappedStruct._padding_ + 0x18))
                                (&param_1->FrameData);
    UScriptStruct::CopyScriptStruct(pUVar26,pvVar27,pvVar23,1);
  }
  pvVar23 = (void *)(**(code **)((this->StaticData).WrappedStruct._padding_ + 0x18))
                              (&this->StaticData);
  pUVar24 = (UObject *)
            (**(code **)((this->StaticData).WrappedStruct._padding_ + 0x20))(&this->StaticData);
  if (pUVar24 == (UObject *)0x0) {
LAB_14d04e567:
    pUVar24 = (UObject *)0x0;
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("InOtherStruct",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Public\\LiveLinkTypes.h"
                        ,0x16d,L"");
    if (bVar18) {
      pcVar14 = (code *)swi(3);
      uVar19 = (*pcVar14)();
      return (bool)uVar19;
    }
  }
  else {
    pUVar25 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar22 = (int)pUVar25->_padding_;
    if ((*(int *)(*(longlong *)&pUVar24->field_0x10 + 0x38) < iVar22) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar24->field_0x10 + 0x30) + (longlong)iVar22 * 8) !=
        &pUVar25->_padding_)) goto LAB_14d04e567;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar24);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_70 = pUVar24;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar24);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_70);
  FVar17 = local_res20;
  (**(code **)((param_1->StaticData).WrappedStruct._padding_ + 0x40))(param_1);
  puVar11 = (undefined8 *)(param_1->StaticData).WrappedStruct._padding_;
  (param_1->StaticData).WrappedStruct.ScriptStruct.WeakPtr = FVar17;
  (*(code *)*puVar11)(param_1);
  if (pvVar23 == (void *)0x0) goto LAB_14d04e661;
  pUVar26 = (UScriptStruct *)
            (**(code **)((param_1->StaticData).WrappedStruct._padding_ + 0x20))(param_1);
  if (pUVar26 == (UScriptStruct *)0x0) {
LAB_14d04e640:
    pUVar26 = (UScriptStruct *)0x0;
  }
  else {
    pUVar25 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar22 = (int)pUVar25->_padding_;
    if ((*(int *)(pUVar26->_padding_ + 0x38) < iVar22) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar26->_padding_ + 0x30) + (longlong)iVar22 * 8) !=
        &pUVar25->_padding_)) goto LAB_14d04e640;
  }
  pvVar27 = (void *)(**(code **)((param_1->StaticData).WrappedStruct._padding_ + 0x18))(param_1);
  UScriptStruct::CopyScriptStruct(pUVar26,pvVar27,pvVar23,1);
LAB_14d04e661:
  cVar20 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
  if (cVar20 != '\0') {
    if (bVar16) {
      LOCK();
      (this->EvaluationStatistics).BufferUnderflow =
           (TAtomic<int>)((int)(this->EvaluationStatistics).BufferUnderflow + 1);
      UNLOCK();
    }
    if (bVar21) {
      LOCK();
      pTVar1 = &(this->EvaluationStatistics).BufferOverflow;
      *pTVar1 = (TAtomic<int>)((int)*pTVar1 + 1);
      UNLOCK();
    }
    uVar31 = (this->FrameData).ArrayNum - 1;
    uVar30 = 0;
    if ((int)uVar31 < (this->FrameData).ArrayNum) {
      uVar30 = ~uVar31 >> 0x1f;
    }
    if ((uVar30 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar14 = (code *)swi(3);
      uVar19 = (*pcVar14)();
      return (bool)uVar19;
    }
    pdVar28 = (double *)
              (**(code **)(*(longlong *)
                            ((this->FrameData).AllocatorInstance.Data + (longlong)(int)uVar31 * 0x28
                            ) + 0x18))();
    dVar3 = pdVar28[1];
    dVar4 = *pdVar28;
    pdVar28 = (double *)(**(code **)((param_1->FrameData).WrappedStruct._padding_ + 0x18))();
    dVar5 = pdVar28[1];
    dVar6 = *pdVar28;
    if (((this->FrameData).ArrayNum < 1) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar14 = (code *)swi(3);
      uVar19 = (*pcVar14)();
      return (bool)uVar19;
    }
    lVar29 = (**(code **)(*(longlong *)(this->FrameData).AllocatorInstance.Data + 0x18))();
    uVar12 = *(undefined8 *)(lVar29 + 0x60);
    uVar13 = *(undefined8 *)(lVar29 + 0x68);
    local_68 = uVar12;
    pdVar28 = (double *)(**(code **)((param_1->FrameData).WrappedStruct._padding_ + 0x18))();
    dVar33 = (double)local_68._4_4_;
    dVar7 = pdVar28[1];
    dVar8 = *pdVar28;
    iVar22 = (int)((ulonglong)uVar13 >> 0x20);
    lpCriticalSection = &this->StatisticCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->EvaluationStatistics).LastEvaluationData.DistanceToNewestSampleSeconds =
         (float)((dVar3 + dVar4) - (dVar5 + dVar6));
    (this->EvaluationStatistics).LastEvaluationData.DistanceToOldestSampleSeconds =
         (float)((dVar7 + dVar8) -
                ((double)((longlong)iVar22 * (longlong)(int)uVar12) + (double)iVar22 * dVar33) /
                (double)(int)uVar13);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return iVar9 != 0;
}

// GetMode @ 14d0501e0

ELiveLinkSourceMode __thiscall FLiveLinkSubject::GetMode(FLiveLinkSubject *this)

{
  longlong lVar1;
  
  lVar1 = 0x1b8;
  if ((this->ModeOverride).bIsSet == false) {
    lVar1 = 0x150;
  }
  return *(ELiveLinkSourceMode *)((longlong)&this->_padding_ + lVar1);
}

// GetNewestDataTime @ 14d050280

FTimedDataChannelSampleTime * __thiscall
FLiveLinkSubject::GetNewestDataTime
          (FLiveLinkSubject *this,FTimedDataChannelSampleTime *__return_storage_ptr__)

{
  bool *pbVar1;
  double dVar2;
  FFrameRate FVar3;
  code *pcVar4;
  FFrameTime FVar5;
  bool bVar6;
  uint uVar7;
  FFrameNumber FVar8;
  FTimedDataChannelSampleTime *pFVar9;
  longlong lVar10;
  double *pdVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  double dVar20;
  undefined1 in_XMM2 [16];
  undefined1 auVar21 [16];
  double dVar22;
  float fVar23;
  float fStackX_c;
  
  uVar14 = 0;
  if (*(int *)&(this->FrameData).AllocatorInstance.Data < 1) {
    __return_storage_ptr__->PlatformSecond = 0.0;
    (__return_storage_ptr__->Timecode).Time.FrameNumber = 0;
    (__return_storage_ptr__->Timecode).Time.SubFrame = 0.0;
    (__return_storage_ptr__->Timecode).Rate.Numerator = 0x18;
    (__return_storage_ptr__->Timecode).Rate.Denominator = 1;
    return __return_storage_ptr__;
  }
  pbVar1 = &(this->OverrideStaticData).bIsSet;
  if ((char)(this->CachedSettings).BufferSettings.DetectedFrameRate.Numerator == '\0') {
    fVar23 = 0.0;
  }
  else {
    iVar13 = *(int *)&(this->FrameData).AllocatorInstance.Data;
    uVar15 = iVar13 - 1;
    if ((int)uVar15 < iVar13) {
      uVar14 = ~uVar15 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FTimedDataChannelSampleTime *)(*pcVar4)();
        return pFVar9;
      }
    }
    lVar10 = (**(code **)(*(longlong *)
                           (*(longlong *)pbVar1 + -0x28 +
                           (longlong)*(int *)&(this->FrameData).AllocatorInstance.Data * 0x28) +
                         0x10))();
    dVar22 = ((double)*(int *)(lVar10 + 0x68) *
             *(double *)&(this->CachedSettings).BufferSettings.TimecodeFrameOffset) /
             (double)*(int *)(lVar10 + 0x6c);
    auVar21._8_8_ = 0;
    auVar21._0_8_ = dVar22;
    auVar21 = roundpd(in_XMM2,auVar21,1);
    dVar20 = auVar21._0_8_;
    dVar22 = dVar22 - dVar20;
    if (__real_41dfffffffc00000 <= dVar20) {
      dVar20 = __real_41dfffffffc00000;
    }
    if (dVar20 <= __real_c1e0000000000000) {
      dVar20 = __real_c1e0000000000000;
    }
    iVar13 = (int)dVar22;
    fVar23 = (float)dVar22 - (float)iVar13;
    if ((0.0 < fVar23) && (::FFrameTime::MaxSubframe <= fVar23)) {
      fVar23 = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= fVar23) {
      fVar23 = ::FFrameTime::MaxSubframe;
    }
    if (fVar23 <= 0.0) {
      fVar23 = 0.0;
    }
    uVar14 = iVar13 + (int)dVar20;
  }
  iVar13 = *(int *)&(this->FrameData).AllocatorInstance.Data;
  uVar16 = iVar13 - 1;
  uVar7 = 0;
  uVar15 = uVar7;
  if ((int)uVar16 < iVar13) {
    uVar15 = ~uVar16 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FTimedDataChannelSampleTime *)(*pcVar4)();
      return pFVar9;
    }
  }
  pdVar11 = (double *)
            (**(code **)(*(longlong *)
                          (*(longlong *)pbVar1 + -0x28 +
                          (longlong)*(int *)&(this->FrameData).AllocatorInstance.Data * 0x28) + 0x10
                        ))();
  iVar13 = *(int *)&(this->FrameData).AllocatorInstance.Data;
  dVar20 = *(double *)&(this->CachedSettings).BufferSettings.EngineTimeOffset;
  dVar22 = *pdVar11;
  uVar16 = iVar13 - 1;
  dVar2 = (this->CachedSettings).BufferSettings.EngineTimeClockOffset;
  uVar15 = uVar7;
  if ((int)uVar16 < iVar13) {
    uVar15 = ~uVar16 >> 0x1f;
  }
  if (uVar15 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FTimedDataChannelSampleTime *)(*pcVar4)();
      return pFVar9;
    }
  }
  lVar10 = (**(code **)(*(longlong *)
                         (*(longlong *)pbVar1 +
                         ((longlong)*(int *)&(this->FrameData).AllocatorInstance.Data * 5 + -5) * 8)
                       + 0x10))();
  iVar13 = *(int *)&(this->FrameData).AllocatorInstance.Data;
  uVar15 = iVar13 - 1;
  if ((int)uVar15 < iVar13) {
    uVar7 = ~uVar15 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FTimedDataChannelSampleTime *)(*pcVar4)();
      return pFVar9;
    }
  }
  lVar12 = (**(code **)(*(longlong *)
                         (*(longlong *)pbVar1 + -0x28 +
                         (longlong)*(int *)&(this->FrameData).AllocatorInstance.Data * 0x28) + 0x10)
           )();
  fStackX_c = (float)((ulonglong)*(undefined8 *)(lVar12 + 0x60) >> 0x20);
  fVar23 = fVar23 + fStackX_c;
  FVar8.Value = ((int)ROUND((fVar23 + fVar23) - __real_3f000000) >> 1) +
                (int)*(undefined8 *)(lVar12 + 0x60) + uVar14;
  iVar13 = (int)fVar23;
  fVar17 = fVar23;
  if ((iVar13 != -0x80000000) && ((float)iVar13 != fVar23)) {
    auVar18._4_4_ = fVar23;
    auVar18._0_4_ = fVar23;
    auVar18._8_8_ = 0;
    uVar14 = movmskps(FVar8.Value,auVar18);
    fVar17 = (float)(int)(iVar13 - (uVar14 & 1));
  }
  FVar3 = *(FFrameRate *)(lVar10 + 0x68);
  fVar19 = fVar23 - fVar17;
  if (::FFrameTime::MaxSubframe <= fVar23 - fVar17) {
    fVar19 = ::FFrameTime::MaxSubframe;
  }
  __return_storage_ptr__->PlatformSecond = dVar20 + dVar22 + dVar2;
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  FVar5.SubFrame = fVar19;
  FVar5.FrameNumber.Value = FVar8.Value;
  (__return_storage_ptr__->Timecode).Time = FVar5;
  (__return_storage_ptr__->Timecode).Rate = FVar3;
  return __return_storage_ptr__;
}

// GetNumberOfSamples @ 14d050790

int __thiscall FLiveLinkSubject::GetNumberOfSamples(FLiveLinkSubject *this)

{
  return *(int *)&(this->FrameData).AllocatorInstance.Data;
}

// GetOldestDataTime @ 14d050f10

FTimedDataChannelSampleTime * __thiscall
FLiveLinkSubject::GetOldestDataTime
          (FLiveLinkSubject *this,FTimedDataChannelSampleTime *__return_storage_ptr__)

{
  bool *pbVar1;
  double dVar2;
  FFrameRate FVar3;
  code *pcVar4;
  FFrameTime FVar5;
  bool bVar6;
  FFrameNumber FVar7;
  uint uVar8;
  FTimedDataChannelSampleTime *pFVar9;
  longlong lVar10;
  double *pdVar11;
  longlong lVar12;
  int iVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  double dVar17;
  undefined1 in_XMM2 [16];
  undefined1 auVar18 [16];
  double dVar19;
  float fVar20;
  float fStackX_c;
  
  iVar13 = 0;
  if (*(int *)&(this->FrameData).AllocatorInstance.Data < 1) {
    __return_storage_ptr__->PlatformSecond = 0.0;
    (__return_storage_ptr__->Timecode).Time.FrameNumber = 0;
    (__return_storage_ptr__->Timecode).Time.SubFrame = 0.0;
    (__return_storage_ptr__->Timecode).Rate.Numerator = 0x18;
    (__return_storage_ptr__->Timecode).Rate.Denominator = 1;
    return __return_storage_ptr__;
  }
  pbVar1 = &(this->OverrideStaticData).bIsSet;
  if ((char)(this->CachedSettings).BufferSettings.DetectedFrameRate.Numerator == '\0') {
    fVar20 = 0.0;
  }
  else {
    if (*(int *)&(this->FrameData).AllocatorInstance.Data < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FTimedDataChannelSampleTime *)(*pcVar4)();
        return pFVar9;
      }
    }
    lVar10 = (**(code **)(**(longlong **)pbVar1 + 0x10))();
    dVar19 = ((double)*(int *)(lVar10 + 0x68) *
             *(double *)&(this->CachedSettings).BufferSettings.TimecodeFrameOffset) /
             (double)*(int *)(lVar10 + 0x6c);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = dVar19;
    auVar18 = roundpd(in_XMM2,auVar18,1);
    dVar17 = auVar18._0_8_;
    dVar19 = dVar19 - dVar17;
    if (__real_41dfffffffc00000 <= dVar17) {
      dVar17 = __real_41dfffffffc00000;
    }
    if (dVar17 <= __real_c1e0000000000000) {
      dVar17 = __real_c1e0000000000000;
    }
    iVar13 = (int)dVar19;
    fVar20 = (float)dVar19 - (float)iVar13;
    if ((0.0 < fVar20) && (::FFrameTime::MaxSubframe <= fVar20)) {
      fVar20 = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= fVar20) {
      fVar20 = ::FFrameTime::MaxSubframe;
    }
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    iVar13 = iVar13 + (int)dVar17;
  }
  if (*(int *)&(this->FrameData).AllocatorInstance.Data < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FTimedDataChannelSampleTime *)(*pcVar4)();
      return pFVar9;
    }
  }
  pdVar11 = (double *)(**(code **)(**(longlong **)pbVar1 + 0x10))();
  dVar17 = *(double *)&(this->CachedSettings).BufferSettings.EngineTimeOffset;
  dVar19 = *pdVar11;
  dVar2 = (this->CachedSettings).BufferSettings.EngineTimeClockOffset;
  if (*(int *)&(this->FrameData).AllocatorInstance.Data < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FTimedDataChannelSampleTime *)(*pcVar4)();
      return pFVar9;
    }
  }
  lVar10 = (**(code **)(**(longlong **)pbVar1 + 0x10))();
  if (*(int *)&(this->FrameData).AllocatorInstance.Data < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FTimedDataChannelSampleTime *)(*pcVar4)();
      return pFVar9;
    }
  }
  lVar12 = (**(code **)(**(longlong **)pbVar1 + 0x10))();
  fStackX_c = (float)((ulonglong)*(undefined8 *)(lVar12 + 0x60) >> 0x20);
  fVar20 = fVar20 + fStackX_c;
  FVar7.Value = ((int)ROUND((fVar20 + fVar20) - __real_3f000000) >> 1) + iVar13 +
                (int)*(undefined8 *)(lVar12 + 0x60);
  iVar13 = (int)fVar20;
  fVar14 = fVar20;
  if ((iVar13 != -0x80000000) && ((float)iVar13 != fVar20)) {
    auVar15._4_4_ = fVar20;
    auVar15._0_4_ = fVar20;
    auVar15._8_8_ = 0;
    uVar8 = movmskps(FVar7.Value,auVar15);
    fVar14 = (float)(int)(iVar13 - (uVar8 & 1));
  }
  FVar3 = *(FFrameRate *)(lVar10 + 0x68);
  fVar16 = fVar20 - fVar14;
  if (::FFrameTime::MaxSubframe <= fVar20 - fVar14) {
    fVar16 = ::FFrameTime::MaxSubframe;
  }
  __return_storage_ptr__->PlatformSecond = dVar17 + dVar19 + dVar2;
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  FVar5.SubFrame = fVar16;
  FVar5.FrameNumber.Value = FVar7.Value;
  (__return_storage_ptr__->Timecode).Time = FVar5;
  (__return_storage_ptr__->Timecode).Rate = FVar3;
  return __return_storage_ptr__;
}

// GetRole @ 14d053600

TSubclassOf<ULiveLinkRole> __thiscall FLiveLinkSubject::GetRole(FLiveLinkSubject *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = (this->Role).Class.field0_0x0.DebugPtr;
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<ULiveLinkRole>)in_RDX.field0_0x0;
}

// GetState @ 14d0565f0

ETimedDataInputState __thiscall FLiveLinkSubject::GetState(FLiveLinkSubject *this)

{
  char cVar1;
  void **local_res8 [4];
  
  local_res8[0] = this[-1].SettingsCriticalSection.CriticalSection.Opaque3 + 2;
  cVar1 = *(char *)((longlong)&(this->LastTimecodeFrameRate).Denominator + 1);
  if (cVar1 == '\0') {
    return Connected;
  }
  if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      `FLiveLinkSubject::GetState'::__l4::<lambda_1>::operator()(local_res8);
    }
    return Disconnected;
  }
  return Unresponsive;
}

// GetStaticData @ 14d056640

FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> * __thiscall
FLiveLinkSubject::GetStaticData(FLiveLinkSubject *this,bool param_1)

{
  TOptional<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_> *pTVar1;
  
  pTVar1 = (TOptional<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_> *)&this->StaticData;
  if ((param_1) && ((this->OverrideStaticData).bIsSet != false)) {
    pTVar1 = &this->OverrideStaticData;
  }
  return &pTVar1->TypedValue;
}

// GetStaticData @ 14d056670

FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> * __thiscall
FLiveLinkSubject::GetStaticData(FLiveLinkSubject *this)

{
  TOptional<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_> *pTVar1;
  
  pTVar1 = (TOptional<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>_> *)&this->StaticData;
  if ((this->OverrideStaticData).bIsSet != false) {
    pTVar1 = &this->OverrideStaticData;
  }
  return &pTVar1->TypedValue;
}

// GetSubjectKey @ 14d0569f0

FLiveLinkSubjectKey * __thiscall
FLiveLinkSubject::GetSubjectKey(FLiveLinkSubject *this,FLiveLinkSubjectKey *__return_storage_ptr__)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (this->SubjectKey).Source.B;
  uVar3 = (this->SubjectKey).Source.C;
  uVar4 = (this->SubjectKey).Source.D;
  FVar1 = (this->SubjectKey).SubjectName.Name;
  (__return_storage_ptr__->Source).A = (this->SubjectKey).Source.A;
  (__return_storage_ptr__->Source).B = uVar2;
  (__return_storage_ptr__->Source).C = uVar3;
  (__return_storage_ptr__->Source).D = uVar4;
  (__return_storage_ptr__->SubjectName).Name = FVar1;
  return __return_storage_ptr__;
}

// GetTimeSyncData @ 14d057260

FLiveLinkSubjectTimeSyncData * __thiscall
FLiveLinkSubject::GetTimeSyncData
          (FLiveLinkSubject *this,FLiveLinkSubjectTimeSyncData *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FLiveLinkSubjectTimeSyncData *pFVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  
  __return_storage_ptr__->bIsValid = false;
  (__return_storage_ptr__->OldestSampleTime).FrameNumber = 0;
  (__return_storage_ptr__->OldestSampleTime).SubFrame = 0.0;
  (__return_storage_ptr__->NewestSampleTime).FrameNumber = 0;
  (__return_storage_ptr__->NewestSampleTime).SubFrame = 0.0;
  (__return_storage_ptr__->SampleFrameRate).Numerator = 60000;
  (__return_storage_ptr__->SampleFrameRate).Denominator = 1;
  iVar1 = (this->FrameData).ArrayNum;
  __return_storage_ptr__->bIsValid = 0 < iVar1;
  if (0 < iVar1) {
    iVar1 = (this->FrameData).ArrayNum;
    uVar7 = iVar1 - 1;
    uVar6 = 0;
    if ((int)uVar7 < iVar1) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FLiveLinkSubjectTimeSyncData *)(*pcVar2)();
        return pFVar4;
      }
    }
    lVar5 = (**(code **)(*(longlong *)
                          ((this->FrameData).AllocatorInstance.Data +
                          ((longlong)(this->FrameData).ArrayNum * 5 + -5) * 8) + 0x18))();
    __return_storage_ptr__->NewestSampleTime = *(FFrameTime *)(lVar5 + 0x60);
    if ((this->FrameData).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FLiveLinkSubjectTimeSyncData *)(*pcVar2)();
        return pFVar4;
      }
    }
    lVar5 = (**(code **)(*(longlong *)(this->FrameData).AllocatorInstance.Data + 0x18))();
    __return_storage_ptr__->OldestSampleTime = *(FFrameTime *)(lVar5 + 0x60);
    if ((this->FrameData).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FLiveLinkSubjectTimeSyncData *)(*pcVar2)();
        return pFVar4;
      }
    }
    lVar5 = (**(code **)(*(longlong *)(this->FrameData).AllocatorInstance.Data + 0x18))();
    __return_storage_ptr__->SampleFrameRate = *(FFrameRate *)(lVar5 + 0x68);
  }
  return __return_storage_ptr__;
}

// HasStaticData @ 14d05a810

bool __thiscall FLiveLinkSubject::HasStaticData(FLiveLinkSubject *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)((this->StaticData).WrappedStruct._padding_ + 0x10))(&this->StaticData);
  return lVar1 != 0;
}

// HasStaticDataBeenRebroadcasted @ 14d05a830

bool __thiscall FLiveLinkSubject::HasStaticDataBeenRebroadcasted(FLiveLinkSubject *this)

{
  return this->bRebroadcastStaticDataSent;
}

// HasValidFrameSnapshot @ 14d05a840

bool __thiscall FLiveLinkSubject::HasValidFrameSnapshot(FLiveLinkSubject *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)((this->FrameSnapshot).StaticData.WrappedStruct._padding_ + 0x10))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)((this->FrameSnapshot).FrameData.WrappedStruct._padding_ + 0x10))();
    if (lVar1 != 0) {
      return true;
    }
  }
  return false;
}

// IncreaseBufferOverFlowStat @ 14d05ac20

void __thiscall FLiveLinkSubject::IncreaseBufferOverFlowStat(FLiveLinkSubject *this)

{
  TAtomic<int> *pTVar1;
  
  LOCK();
  pTVar1 = &(this->EvaluationStatistics).BufferOverflow;
  *pTVar1 = (TAtomic<int>)((int)*pTVar1 + 1);
  UNLOCK();
  return;
}

// IncreaseBufferUnderFlowStat @ 14d05ac30

void __thiscall FLiveLinkSubject::IncreaseBufferUnderFlowStat(FLiveLinkSubject *this)

{
  LOCK();
  (this->EvaluationStatistics).BufferUnderflow =
       (TAtomic<int>)((int)(this->EvaluationStatistics).BufferUnderflow + 1);
  UNLOCK();
  return;
}

// IncreaseFrameDroppedStat @ 14d05ac40

void __thiscall FLiveLinkSubject::IncreaseFrameDroppedStat(FLiveLinkSubject *this)

{
  TAtomic<int> *pTVar1;
  
  LOCK();
  pTVar1 = &(this->EvaluationStatistics).FrameDrop;
  *pTVar1 = (TAtomic<int>)((int)*pTVar1 + 1);
  UNLOCK();
  return;
}

// Initialize @ 14d05b360

void __thiscall
FLiveLinkSubject::Initialize
          (FLiveLinkSubject *this,FLiveLinkSubjectKey *param_1,TSubclassOf<ULiveLinkRole> param_2,
          ILiveLinkClient *param_3)

{
  int *piVar1;
  longlong *plVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  TNode *pTVar5;
  TNode *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> **ppTVar8;
  FLiveLinkTimedDataInput *pFVar9;
  code *pcVar10;
  atomic<int> aVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  atomic<int> aVar15;
  int iVar16;
  FName *pFVar17;
  FModuleManager *this_00;
  IModuleInterface *pIVar18;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  TReferenceControllerBase<1> **ppTVar19;
  TReferenceControllerBase<1> *pTVar20;
  bool bVar21;
  FName local_res10;
  TReferenceControllerBase<1> *local_28 [2];
  
  uVar12 = (param_1->Source).B;
  uVar13 = (param_1->Source).C;
  uVar14 = (param_1->Source).D;
  FVar3 = (param_1->SubjectName).Name;
  (this->SubjectKey).Source.A = (param_1->Source).A;
  (this->SubjectKey).Source.B = uVar12;
  (this->SubjectKey).Source.C = uVar13;
  (this->SubjectKey).Source.D = uVar14;
  (this->SubjectKey).SubjectName.Name = FVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)param_2.Class.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_2.Class.field0_0x0);
  }
  (this->Role).Class.field0_0x0 = *(TObjectPtr<UClass>_u_0 *)param_2.Class.field0_0x0;
  piVar1 = &(this->FrameData).ArrayMax;
  this->State = Disconnected;
  pFVar4 = (this->FrameData).AllocatorInstance.Data;
  iVar16 = (this->FrameData).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int>
              ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar4,iVar16);
    (this->FrameData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&(this->FrameData).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int>
              ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar4,iVar16);
    (this->FrameData).ArrayNum = 0;
  }
  while( true ) {
    pTVar5 = ((this->ReceivedOrderedFrames).Tail)->NextNode;
    if (pTVar5 == (TNode *)0x0) break;
    pTVar6 = (this->ReceivedOrderedFrames).Tail;
    (this->ReceivedOrderedFrames).Tail = pTVar5;
    pTVar5->Item = 0;
    ::operator_delete(pTVar6,0x10);
  }
  plVar2 = &this->_padding_;
  (this->LastTimecodeFrameRate).Numerator = 1;
  (this->LastTimecodeFrameRate).Denominator = -1;
  (**(code **)(*plVar2 + 0x70))(plVar2);
  pTVar7 = (this->TimedDataGroup).WeakReferenceCount.ReferenceController;
  pTVar20 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar11 = pTVar7->SharedReferenceCount;
    do {
      pTVar20 = (TReferenceControllerBase<1> *)0x0;
      if (aVar11 == (atomic<int>)0x0) goto LAB_14d05b486;
      LOCK();
      aVar15 = pTVar7->SharedReferenceCount;
      bVar21 = aVar11 == aVar15;
      if (bVar21) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar11 + 1);
        aVar15 = aVar11;
      }
      UNLOCK();
      aVar11 = aVar15;
    } while (!bVar21);
    pFVar9 = (this->TimedDataGroup).Object;
    pTVar20 = pTVar7;
    if (pFVar9 != (FLiveLinkTimedDataInput *)0x0) {
      pTVar20 = (TReferenceControllerBase<1> *)plVar2;
      if (this == (FLiveLinkSubject *)0x0) {
        pTVar20 = (TReferenceControllerBase<1> *)0x0;
      }
      (**(code **)(pFVar9->_padding_ + 0x58))(pFVar9,pTVar20);
      pTVar20 = pTVar7;
    }
  }
LAB_14d05b486:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  pFVar17 = ::FName::FName(&local_res10,L"TimeManagement");
  FVar3 = *pFVar17;
  this_00 = FModuleManager::Get();
  pIVar18 = FModuleManager::LoadModuleChecked(this_00,FVar3);
  this_01 = (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
            (**(code **)((longlong)*pIVar18 + 0x40))(pIVar18);
  if (plVar2 != (longlong *)0x0) {
    ppTVar8 = *(TReferenceControllerBase<1> ***)&this_01[1].field_0x10;
    for (ppTVar19 = ppTVar8; ppTVar19 != ppTVar8 + *(int *)&this_01[1].field_0x18;
        ppTVar19 = ppTVar19 + 1) {
      if (*ppTVar19 == (TReferenceControllerBase<1> *)plVar2) {
        return;
      }
    }
    local_28[0] = (TReferenceControllerBase<1> *)plVar2;
    if (((ppTVar8 <= local_28) && (local_28 < ppTVar8 + *(int *)&this_01[1].field_0x1c)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar21)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar16 = *(int *)&this_01[1].field_0x18;
    if (iVar16 == *(int *)&this_01[1].field_0x1c) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&this_01[1].field_0x10,
                          (int *)&this_01[1].field_0x1c);
    }
    *(int *)&this_01[1].field_0x18 = iVar16 + 1;
    *(TReferenceControllerBase<1> **)(*(longlong *)&this_01[1].field_0x10 + (longlong)iVar16 * 8) =
         local_28[0];
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(this_01);
  }
  return;
}

// IsBufferStatsEnabled @ 14d05ea40

bool __thiscall FLiveLinkSubject::IsBufferStatsEnabled(FLiveLinkSubject *this)

{
  return (bool)*(undefined1 *)&this->LastPushTime;
}

// IsPaused @ 14d05fb20

bool __thiscall FLiveLinkSubject::IsPaused(FLiveLinkSubject *this)

{
  return (bool)this->bPaused;
}

// IsRebroadcasted @ 14d05fb70

bool __thiscall FLiveLinkSubject::IsRebroadcasted(FLiveLinkSubject *this)

{
  return this->bRebroadcastSubject;
}

// IsTimeSynchronized @ 14d0608c0

bool __thiscall FLiveLinkSubject::IsTimeSynchronized(FLiveLinkSubject *this)

{
  FQualifiedFrameTime FVar1;
  longlong lVar2;
  longlong *plVar3;
  FFrameTime FVar4;
  longlong *plVar5;
  undefined1 local_res8 [32];
  FFrameNumber local_38;
  
  lVar2 = 0x1b8;
  if ((this->ModeOverride).bIsSet == false) {
    lVar2 = 0x150;
  }
  if (*(char *)((longlong)&this->_padding_ + lVar2) == '\x02') {
    plVar3 = (longlong *)(**(code **)(this->_padding_ + 0xb8))();
    lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (lVar2 != 0) {
      plVar5 = plVar3 + 5;
      lVar2 = (**(code **)(plVar3[5] + 0x10))(plVar5);
      if (lVar2 != 0) {
        lVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
        FVar1 = FApp::CurrentFrameTime.TypedValue;
        if ((lVar2 != 0) && (FApp::CurrentFrameTime.bIsSet != false)) {
          lVar2 = (**(code **)(*plVar5 + 0x10))(plVar5);
          FVar4 = ::FQualifiedFrameTime::ConvertTo
                            ((FQualifiedFrameTime *)(lVar2 + 0x60),(FFrameRate)local_res8);
          local_38.Value = FVar1.Time.FrameNumber.Value;
          return *(int *)FVar4 == local_38.Value;
        }
      }
    }
  }
  return false;
}

// PauseSubject @ 14d06c760

void __thiscall FLiveLinkSubject::PauseSubject(FLiveLinkSubject *this)

{
  LOCK();
  this->bPaused = (atomic<bool>)0x1;
  UNLOCK();
  return;
}

// PreprocessFrame @ 14d06d0e0

void __thiscall
FLiveLinkSubject::PreprocessFrame
          (FLiveLinkSubject *this,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FramePreProcessors).ArrayNum;
  pFVar7 = (this->FramePreProcessors).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FramePreProcessors).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<ILiveLinkFramePreProcessorWorker,1>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar6) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
    plVar3 = *(longlong **)pFVar7;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar3 == (longlong *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar7 = pFVar7 + 0x10;
  }
  return;
}

// PreprocessFrame @ 14d06d1a0

void __thiscall
FLiveLinkSubject::PreprocessFrame
          (FLiveLinkSubject *this,FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->FramePreProcessors).ArrayNum;
  pFVar7 = (this->FramePreProcessors).AllocatorInstance.Data;
  pFVar6 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->FramePreProcessors).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<ILiveLinkFramePreProcessorWorker,1>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar6) break;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
    plVar3 = *(longlong **)pFVar7;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (plVar3 == (longlong *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,param_1,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar7 = pFVar7 + 0x10;
  }
  return;
}

// RemoveFrames @ 14d078e90

void __thiscall FLiveLinkSubject::RemoveFrames(FLiveLinkSubject *this,int param_1)

{
  int *piVar1;
  TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_> *this_00;
  int iVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TUniquePtr<FLiveLinkLog,TDefaultDelete<FLiveLinkLog>_> TVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  ulonglong uVar14;
  FString local_68;
  FString local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (0 < param_1) {
    this_00 = &this->FrameData;
    uVar14 = (ulonglong)(uint)param_1;
    do {
      iVar13 = -1;
      pTVar3 = ((this->ReceivedOrderedFrames).Tail)->NextNode;
      if (pTVar3 != (TNode *)0x0) {
        iVar13 = pTVar3->Item;
        pTVar4 = (this->ReceivedOrderedFrames).Tail;
        (this->ReceivedOrderedFrames).Tail = pTVar3;
        pTVar3->Item = 0;
        ::operator_delete(pTVar4,0x10);
      }
      pFVar5 = (this_00->AllocatorInstance).Data;
      iVar2 = (this->FrameData).ArrayNum;
      for (pFVar12 = pFVar5; pFVar12 != pFVar5 + (longlong)iVar2 * 0x28; pFVar12 = pFVar12 + 0x28) {
        lVar10 = (**(code **)(*(longlong *)pFVar12 + 0x10))(pFVar12);
        if (*(int *)(lVar10 + 0x98) == iVar13) {
          uVar11 = (uint)(((longlong)pFVar12 - (longlong)pFVar5) / 0x28);
          if (uVar11 != 0xffffffff) {
            uVar9 = 0;
            if ((int)(uVar11 + 1) <= (this->FrameData).ArrayNum) {
              uVar9 = ~uVar11 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            TArray<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,TSizedDefaultAllocator<32>_>::
            RemoveAtImpl(this_00,uVar11,1);
            goto LAB_14d0790ed;
          }
          break;
        }
      }
      ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_68);
      TVar7 = FLiveLinkLog::Instance;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      if (FLiveLinkLog::Instance.Ptr != (FLiveLinkLog *)0x0) {
        pcVar6 = *(code **)((longlong)*FLiveLinkLog::Instance.Ptr + 0x20);
        ::FString::PrintfImpl
                  (&local_58,
                   L"Subject \'%s\': Could not find frame with identifier %d. Buffers are out of sync, resetting them."
                  );
        (*pcVar6)(TVar7.Ptr,1,0,&local_48,&local_58);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      while (pTVar3 = ((this->ReceivedOrderedFrames).Tail)->NextNode, pTVar3 != (TNode *)0x0) {
        pTVar4 = (this->ReceivedOrderedFrames).Tail;
        (this->ReceivedOrderedFrames).Tail = pTVar3;
        pTVar3->Item = 0;
        ::operator_delete(pTVar4,0x10);
      }
      piVar1 = &(this->FrameData).ArrayMax;
      pFVar5 = (this_00->AllocatorInstance).Data;
      iVar13 = (this->FrameData).ArrayNum;
      if (*piVar1 < 0) {
        DestructItems<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int>
                  ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar5,iVar13);
        (this->FrameData).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,&this_00->AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int>
                  ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar5,iVar13);
        (this->FrameData).ArrayNum = 0;
      }
LAB_14d0790ed:
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  return;
}

// ResetBufferStats @ 14d07a970

void __thiscall FLiveLinkSubject::ResetBufferStats(FLiveLinkSubject *this)

{
  int *lpCriticalSection;
  
  lpCriticalSection = &this->LastRebroadcastFrameId;
  if (lpCriticalSection != (int *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LOCK();
    *(undefined4 *)((longlong)&this->LastPushTime + 4) = 0;
    UNLOCK();
    LOCK();
    *(undefined4 *)&this->bIsStatLoggingEnabled = 0;
    UNLOCK();
    LOCK();
    (this->EvaluationStatistics).BufferUnderflow = (TAtomic<int>)0x0;
    UNLOCK();
    (this->EvaluationStatistics).BufferOverflow = (TAtomic<int>)0x0;
    (this->EvaluationStatistics).FrameDrop = (TAtomic<int>)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014d07a9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ResetFrame @ 14d07a9e0

void __thiscall
FLiveLinkSubject::ResetFrame(FLiveLinkSubject *this,FLiveLinkSubjectFrameData *param_1)

{
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>::InitializeWith
            (&param_1->StaticData,&this->StaticData);
                    /* WARNING: Could not recover jumptable at 0x00014d07aa02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((param_1->FrameData).WrappedStruct._padding_ + 0x48))(&param_1->FrameData);
  return;
}

// SetBufferStatsEnabled @ 14d07e020

void __thiscall FLiveLinkSubject::SetBufferStatsEnabled(FLiveLinkSubject *this,bool param_1)

{
  if ((param_1) && (*(char *)&this->LastPushTime == '\0')) {
    (**(code **)(this->_padding_ + 0x70))();
    *(undefined1 *)&this->LastPushTime = 1;
    return;
  }
  *(bool *)&this->LastPushTime = param_1;
  return;
}

// SetStaticData @ 14d07ef90

void __thiscall
FLiveLinkSubject::SetStaticData
          (FLiveLinkSubject *this,TSubclassOf<ULiveLinkRole> param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_2)

{
  int *piVar1;
  FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *pFVar2;
  int iVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  TNode *pTVar6;
  TNode *pTVar7;
  bool bVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  ForAnyElementType FVar13;
  ForAnyElementType FVar14;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  pUVar11 = (this->Role).Class.field0_0x0.DebugPtr;
  if ((pUVar11 != (UClass *)0x0) &&
     (pUVar9 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar9 != (UClass *)0x0)) {
    iVar3 = (int)pUVar9->_padding_;
    if (((int)pUVar11->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar3 * 8) != &pUVar9->_padding_
       )) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if ((bVar8) && (pUVar11 = (this->Role).Class.field0_0x0.DebugPtr, pUVar11 != (UClass *)0x0)) {
      pUVar10 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
      pUVar9 = (UClass *)0x0;
      pUVar12 = pUVar9;
      if (pUVar10 != (UClass *)0x0) {
        iVar3 = (int)pUVar10->_padding_;
        if (((int)pUVar11->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar10->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          pUVar12 = (this->Role).Class.field0_0x0.DebugPtr;
        }
      }
      lVar4 = *(longlong *)param_1.Class.field0_0x0;
      pUVar11 = pUVar9;
      if ((lVar4 != 0) &&
         (pUVar10 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar10 != (UClass *)0x0)) {
        iVar3 = (int)pUVar10->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar10->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          pUVar11 = *(UClass **)param_1.Class.field0_0x0;
        }
      }
      if (pUVar12 == pUVar11) {
        piVar1 = &(this->FrameData).ArrayMax;
        pFVar5 = (this->FrameData).AllocatorInstance.Data;
        iVar3 = (this->FrameData).ArrayNum;
        if (*piVar1 < 0) {
          DestructItems<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int>
                    ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar5,iVar3);
          (this->FrameData).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,0,&(this->FrameData).AllocatorInstance,0,piVar1);
          }
        }
        else {
          DestructItems<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int>
                    ((FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *)pFVar5,iVar3);
          (this->FrameData).ArrayNum = 0;
        }
        while (pTVar6 = ((this->ReceivedOrderedFrames).Tail)->NextNode, pTVar6 != (TNode *)0x0) {
          pTVar7 = (this->ReceivedOrderedFrames).Tail;
          (this->ReceivedOrderedFrames).Tail = pTVar6;
          pTVar6->Item = 0;
          ::operator_delete(pTVar7,0x10);
        }
        pFVar2 = &this->StaticData;
        if (pFVar2 != param_2) {
          (**(code **)((pFVar2->WrappedStruct)._padding_ + 0x48))(pFVar2);
          (this->StaticData).WrappedStruct.ScriptStruct.WeakPtr =
               (param_2->WrappedStruct).ScriptStruct.WeakPtr;
          (this->StaticData).WrappedStruct.SampleStructMemory =
               (param_2->WrappedStruct).SampleStructMemory;
          (this->StaticData).WrappedStruct.OwnsMemory = (param_2->WrappedStruct).OwnsMemory;
          (param_2->WrappedStruct).OwnsMemory = false;
          (**(code **)((param_2->WrappedStruct)._padding_ + 0x48))(param_2);
        }
        this->bNeedsStaticRemap = (this->OverrideStaticData).bIsSet;
        return;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ::FName::FName(&NAME_DifferentRole,"LiveLinkSubject_DifferentRole");
        _Init_thread_footer(&::_TSS1);
      }
      lVar4 = *(longlong *)param_1.Class.field0_0x0;
      if ((lVar4 != 0) &&
         (pUVar11 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar11 != (UClass *)0x0)) {
        iVar3 = (int)pUVar11->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
            &pUVar11->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          pUVar9 = *(UClass **)param_1.Class.field0_0x0;
        }
      }
      local_res8 = (FName)pUVar9->_padding_;
      ::FName::ToString(&local_res8,&local_28);
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar14.Data = local_28.Data.AllocatorInstance.Data;
      }
      ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_38);
      FVar13.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar13.Data = local_38.Data.AllocatorInstance.Data;
      }
      FLiveLinkLog::Log_Internal<wchar_t_const_*,wchar_t_const_*>
                (Warning,NAME_DifferentRole,&this->SubjectKey,
                 (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*>)0x152aa1970,
                 (wchar_t *)FVar13.Data,(wchar_t *)FVar14.Data);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_NoRoleForSubject,"LiveLinkSubject_NoRoleForSubject");
    _Init_thread_footer(&::_TSS0);
  }
  ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_28);
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar14.Data = local_28.Data.AllocatorInstance.Data;
  }
  FLiveLinkLog::Log_Internal<wchar_t_const_*>
            (Warning,NAME_NoRoleForSubject,&this->SubjectKey,
             (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa18d0,
             (wchar_t *)FVar14.Data);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// SetStaticDataAsRebroadcasted @ 14d07f360

void __thiscall FLiveLinkSubject::SetStaticDataAsRebroadcasted(FLiveLinkSubject *this,bool param_1)

{
  this->bRebroadcastStaticDataSent = param_1;
  return;
}

// UnpauseSubject @ 14d085d10

void __thiscall FLiveLinkSubject::UnpauseSubject(FLiveLinkSubject *this)

{
  LOCK();
  this->bPaused = (atomic<bool>)0x0;
  UNLOCK();
  return;
}

// Update @ 14d0869a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveLinkSubject::Update(FLiveLinkSubject *this)

{
  FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *pFVar1;
  ELiveLinkSubjectState EVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  FQualifiedFrameTime FVar7;
  char cVar8;
  bool bVar9;
  double *pdVar10;
  FFrameTime FVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  UClass *this_00;
  int iVar14;
  uint uVar15;
  FQualifiedFrameTime *this_01;
  int iVar16;
  longlong lVar17;
  ELiveLinkSubjectState EVar18;
  FScriptContainerElement *pFVar19;
  FFrameRate FVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  FFrameNumber FVar23;
  FScriptContainerElement *pFVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  double in_XMM1_Qa;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  float fVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 unaff_XMM8 [16];
  FFrameTime local_res8;
  FFrameTime local_res10;
  FFrameNumber local_res18 [2];
  undefined8 local_res20;
  LARGE_INTEGER local_190;
  LARGE_INTEGER local_188;
  undefined1 local_180 [8];
  FFrameTime local_178;
  undefined1 local_170 [8];
  FQualifiedFrameTime local_168;
  FQualifiedFrameTime local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FQualifiedFrameTime local_110;
  FString local_100;
  FReadAccessScope local_f0;
  FTimecode local_d8 [4];
  
  if (&this->SettingsCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->SettingsCriticalSection);
  uVar21 = 0;
  if (this->bClearOverrideStaticData != (atomic<bool>)0x0) {
    (**(code **)(this->_padding_ + 0x20))(this);
    if ((this->OverrideStaticData).bIsSet != false) {
      FStructOnScope::~FStructOnScope((FStructOnScope *)&this->OverrideStaticData);
      (this->OverrideStaticData).bIsSet = false;
    }
    LOCK();
    this->bClearOverrideStaticData = (atomic<bool>)0x0;
    UNLOCK();
  }
  iVar16 = (this->CachedSettings).BufferSettings.MaxNumberOfFrameToBuffered;
  iVar14 = (this->FrameData).ArrayNum;
  if (iVar16 < iVar14) {
    iVar16 = iVar14 - iVar16;
    if (((this->CachedSettings).BufferSettings.bKeepAtLeastOneFrame != false) && (iVar14 == iVar16))
    {
      iVar16 = iVar16 + -1;
    }
    RemoveFrames(this,iVar16);
  }
  if ((this->bPaused != (atomic<bool>)0x0) &&
     (cVar8 = (**(code **)(this->_padding_ + 0x40))(this), cVar8 != '\0')) {
    QueryPerformanceCounter(&local_190);
    dVar41 = (double)local_190.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
    QueryPerformanceCounter(&local_188);
    dVar40 = (double)local_188.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
    pdVar10 = (double *)
              (**(code **)((this->FrameSnapshot).FrameData.WrappedStruct._padding_ + 0x18))();
    *pdVar10 = dVar41;
    pdVar10[1] = dVar40 - dVar41;
    goto LAB_14d0874ac;
  }
  dVar41 = __real_c1e0000000000000;
  dVar40 = __real_41dfffffffc00000;
  fVar6 = __real_3f000000;
  lVar17 = 0x1b8;
  if ((this->ModeOverride).bIsSet == false) {
    lVar17 = 0x150;
  }
  cVar8 = *(char *)((longlong)&this->_padding_ + lVar17);
  if (cVar8 == '\x01') {
    if ((this->CachedSettings).BufferSettings.bValidEngineTimeEnabled != false) {
      iVar16 = (this->FrameData).ArrayNum;
      pFVar19 = (this->FrameData).AllocatorInstance.Data;
      pFVar24 = pFVar19 + (longlong)iVar16 * 0x28;
      dVar38 = (double)FApp::CurrentTime -
               (double)(this->CachedSettings).BufferSettings.EngineTimeOffset;
      fVar37 = (this->CachedSettings).BufferSettings.ValidEngineTime;
      dVar39 = (this->CachedSettings).BufferSettings.EngineTimeClockOffset;
      while( true ) {
        if ((this->FrameData).ArrayNum != iVar16) {
          `TCheckedPointerIterator<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_res8);
        }
        iVar14 = (int)uVar21;
        if ((pFVar19 == pFVar24) ||
           (pdVar10 = (double *)(**(code **)(*(longlong *)pFVar19 + 0x10))(pFVar19),
           (dVar38 - (double)fVar37) - dVar39 < *pdVar10)) break;
        uVar21 = (ulonglong)(iVar14 + 1);
        pFVar19 = pFVar19 + 0x28;
      }
      if (-1 < iVar14 + -1) {
        if (((this->CachedSettings).BufferSettings.bKeepAtLeastOneFrame == false) ||
           (iVar16 = iVar14 + -1, (this->FrameData).ArrayNum != iVar14)) {
          iVar16 = iVar14;
        }
        RemoveFrames(this,iVar16);
      }
    }
  }
  else if (((cVar8 == '\x02') &&
           ((this->CachedSettings).BufferSettings.bValidTimecodeFrameEnabled != false)) &&
          (FApp::CurrentFrameTime.bIsSet != false)) {
    local_res20 = 0;
    local_110 = FApp::CurrentFrameTime.TypedValue;
    uVar22 = uVar21;
    if ((this->CachedSettings).BufferSettings.bUseTimecodeSmoothLatest != false) {
      FVar11 = FFrameRate::AsFrameTime(&this->LastTimecodeFrameRate,in_XMM1_Qa);
      uVar22 = *(ulonglong *)FVar11;
    }
    FVar11 = ::FQualifiedFrameTime::ConvertTo(&local_110,(FFrameRate)local_180);
    iVar16 = (this->CachedSettings).BufferSettings.ValidTimecodeFrame;
    dVar38 = (double)(this->CachedSettings).BufferSettings.TimecodeFrameOffset;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = dVar38;
    auVar35 = roundpd(unaff_XMM8,auVar35,1);
    dVar39 = auVar35._0_8_;
    fVar37 = (float)(dVar38 - dVar39);
    if (::FFrameTime::MaxSubframe <= fVar37) {
      fVar37 = ::FFrameTime::MaxSubframe;
    }
    auVar29 = ZEXT416((uint)fVar37);
    if (fVar37 <= 0.0) {
      auVar29 = ZEXT816(0) << 0x20;
    }
    if (::FFrameTime::MaxSubframe <= auVar29._0_4_) {
      auVar29._0_4_ = ::FFrameTime::MaxSubframe;
    }
    if (auVar29._0_4_ <= 0.0) {
      auVar4._12_4_ = 0;
      auVar4._0_12_ = auVar29._4_12_;
      auVar29 = auVar4 << 0x20;
    }
    local_res8.SubFrame = (float)(uVar22 >> 0x20);
    fVar25 = auVar29._0_4_ + local_res8.SubFrame;
    iVar14 = (int)fVar25;
    fVar37 = fVar25;
    if ((iVar14 != -0x80000000) && ((float)iVar14 != fVar25)) {
      auVar32._4_4_ = fVar25;
      auVar32._0_4_ = fVar25;
      auVar32._8_8_ = 0;
      uVar15 = movmskps(FVar11.FrameNumber.Value.Value,auVar32);
      fVar37 = (float)(int)(iVar14 - (uVar15 & 1));
    }
    fVar28 = fVar25 - fVar37;
    if (::FFrameTime::MaxSubframe <= fVar25 - fVar37) {
      fVar28 = ::FFrameTime::MaxSubframe;
    }
    if (fVar28 <= 0.0) {
      fVar28 = 0.0;
    }
    fVar28 = fVar28 + 0.0;
    auVar33._4_4_ = 0;
    auVar33._0_4_ = fVar28;
    auVar33._8_4_ = auVar29._8_4_;
    auVar33._12_4_ = auVar29._12_4_;
    iVar14 = (int)fVar28;
    if ((iVar14 != -0x80000000) && ((float)iVar14 != fVar28)) {
      auVar34._4_4_ = fVar28;
      auVar34._0_4_ = fVar28;
      auVar34._8_8_ = 0;
      uVar15 = movmskps(iVar16,auVar34);
      auVar33 = ZEXT416((uint)(float)(int)(iVar14 - (uVar15 & 1)));
    }
    fVar37 = fVar28 - auVar33._0_4_;
    iVar14 = (this->FrameData).ArrayNum;
    if (dVar40 <= dVar39) {
      dVar39 = dVar40;
    }
    pFVar24 = (this->FrameData).AllocatorInstance.Data;
    local_res8.SubFrame = local_180._4_4_;
    if (::FFrameTime::MaxSubframe <= fVar37) {
      fVar37 = ::FFrameTime::MaxSubframe;
    }
    if (dVar39 <= dVar41) {
      dVar39 = dVar41;
    }
    if (fVar37 <= 0.0) {
      fVar37 = 0.0;
    }
    pFVar19 = pFVar24 + (longlong)iVar14 * 0x28;
    in_XMM2 = roundps(auVar33,ZEXT416((uint)(local_res8.SubFrame - fVar37)),1);
    fVar37 = (local_res8.SubFrame - fVar37) - in_XMM2._0_4_;
    if (::FFrameTime::MaxSubframe <= fVar37) {
      fVar37 = ::FFrameTime::MaxSubframe;
    }
    FVar23.Value = (int)in_XMM2._0_4_ +
                   (((((local_180._0_4_ - (int)dVar39) -
                      ((int)ROUND((fVar28 + fVar28) - fVar6) >> 1)) -
                     ((int)ROUND((fVar25 + fVar25) - fVar6) >> 1)) - iVar16) - (int)uVar22);
    if (fVar37 <= 0.0) {
      fVar37 = 0.0;
    }
    local_res8.SubFrame = fVar37;
    local_res8.FrameNumber.Value = FVar23.Value;
    FVar11 = local_res8;
    while( true ) {
      if ((this->FrameData).ArrayNum != iVar14) {
        `TCheckedPointerIterator<FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData>,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(&local_res10);
      }
      iVar16 = (int)uVar21;
      if (pFVar24 == pFVar19) break;
      lVar17 = (**(code **)(*(longlong *)pFVar24 + 0x10))(pFVar24);
      local_res10 = FVar11;
      local_res8 = *(FFrameTime *)(lVar17 + 0x60);
      if ((FVar23.Value < local_res8.FrameNumber.Value.Value) ||
         ((local_res8.FrameNumber.Value.Value == FVar23.Value && (fVar37 < local_res8.SubFrame))))
      break;
      uVar21 = (ulonglong)(iVar16 + 1);
      pFVar24 = pFVar24 + 0x28;
      local_res10 = FVar11;
    }
    if (-1 < iVar16 + -1) {
      if (((this->CachedSettings).BufferSettings.bKeepAtLeastOneFrame == false) ||
         (iVar14 = iVar16 + -1, (this->FrameData).ArrayNum != iVar16)) {
        iVar14 = iVar16;
      }
      RemoveFrames(this,iVar14);
    }
  }
  FVar7 = FApp::CurrentFrameTime.TypedValue;
  FVar23.Value = 0;
  lVar17 = 0x1b8;
  bVar9 = false;
  if (0 < (this->FrameData).ArrayNum) {
    if ((this->ModeOverride).bIsSet == false) {
      lVar17 = 0x150;
    }
    cVar8 = *(char *)((longlong)&this->_padding_ + lVar17);
    if (cVar8 == '\0') {
LAB_14d087238:
      bVar9 = GetLatestFrame(this,&this->FrameSnapshot);
    }
    else if (cVar8 == '\x01') {
      dVar40 = (this->CachedSettings).BufferSettings.EngineTimeClockOffset;
      dVar41 = (this->CachedSettings).BufferSettings.SmoothEngineTimeOffset;
      dVar39 = (double)FApp::CurrentTime -
               (double)(this->CachedSettings).BufferSettings.EngineTimeOffset;
      if (5 < (byte)LogLiveLink._0_1_) {
        ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_138);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLink);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
      }
      bVar9 = GetFrameAtWorldTime(this,(dVar39 - dVar40) - dVar41,&this->FrameSnapshot);
    }
    else {
      if (cVar8 != '\x02') goto LAB_14d087238;
      if (FApp::CurrentFrameTime.bIsSet == false) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
          ::FName::FName(&NAME_InvalidTime,"LiveLinkSubject_NoCurrentFrameTime");
          _Init_thread_footer(&::_TSS2);
        }
        ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_148);
        FVar12.Data = (FScriptContainerElement *)L"";
        if (local_148.Data.ArrayNum != 0) {
          FVar12.Data = local_148.Data.AllocatorInstance.Data;
        }
        FLiveLinkLog::Log_Internal<wchar_t_const_*>
                  (Warning,NAME_InvalidTime,&this->SubjectKey,
                   (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa0670,
                   (wchar_t *)FVar12.Data);
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
      }
      else {
        fVar37 = 0.0;
        FVar20 = FApp::CurrentFrameTime.TypedValue.Rate;
        if ((this->CachedSettings).BufferSettings.bUseTimecodeSmoothLatest != false) {
          dVar38 = ((double)FApp::CurrentFrameTime.TypedValue.Rate.Numerator *
                   (this->CachedSettings).BufferSettings.TimecodeClockOffset) /
                   (double)FApp::CurrentFrameTime.TypedValue.Rate.Denominator;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = dVar38;
          in_XMM2 = roundpd(in_XMM2,auVar30,1);
          dVar39 = in_XMM2._0_8_;
          dVar38 = dVar38 - dVar39;
          if (dVar40 <= dVar39) {
            dVar39 = dVar40;
          }
          if (dVar39 <= dVar41) {
            dVar39 = dVar41;
          }
          iVar16 = (int)dVar38;
          fVar37 = (float)dVar38 - (float)iVar16;
          if ((0.0 < fVar37) && (::FFrameTime::MaxSubframe <= fVar37)) {
            fVar37 = ::FFrameTime::MaxSubframe;
          }
          if (::FFrameTime::MaxSubframe <= fVar37) {
            fVar37 = ::FFrameTime::MaxSubframe;
          }
          if (fVar37 <= 0.0) {
            fVar37 = 0.0;
          }
          FVar23.Value = (int)dVar39 + iVar16;
          local_res8.SubFrame = fVar37;
          local_res8.FrameNumber.Value = FVar23.Value;
          local_178 = local_res8;
        }
        dVar36 = (double)(this->CachedSettings).BufferSettings.TimecodeFrameOffset;
        this_01 = &local_168;
        auVar26._8_8_ = 0;
        auVar26._0_8_ = dVar36;
        auVar35 = roundpd(in_XMM2,auVar26,1);
        dVar38 = auVar35._0_8_;
        dVar39 = dVar38;
        if (dVar40 <= dVar38) {
          dVar39 = dVar40;
        }
        if (dVar39 <= dVar41) {
          dVar39 = dVar41;
        }
        local_168.Time.FrameNumber.Value = (int)dVar39;
        fVar25 = (float)(dVar36 - dVar38);
        local_168.Rate = this->LastTimecodeFrameRate;
        if (::FFrameTime::MaxSubframe <= fVar25) {
          fVar25 = ::FFrameTime::MaxSubframe;
        }
        auVar27 = ZEXT416((uint)fVar25);
        if (fVar25 <= 0.0) {
          auVar27 = ZEXT816(0) << 0x20;
        }
        if (::FFrameTime::MaxSubframe <= auVar27._0_4_) {
          auVar27._0_4_ = ::FFrameTime::MaxSubframe;
        }
        if (auVar27._0_4_ <= 0.0) {
          auVar5._12_4_ = 0;
          auVar5._0_12_ = auVar27._4_12_;
          auVar27 = auVar5 << 0x20;
        }
        local_168.Time.SubFrame = auVar27._0_4_;
        ::FQualifiedFrameTime::ConvertTo(this_01,(FFrameRate)local_170);
        local_res8.SubFrame = local_170._4_4_;
        fVar37 = local_res8.SubFrame + fVar37;
        iVar16 = (int)fVar37;
        fVar25 = fVar37;
        if ((iVar16 != -0x80000000) && ((float)iVar16 != fVar37)) {
          auVar31._4_4_ = fVar37;
          auVar31._0_4_ = fVar37;
          auVar31._8_8_ = 0;
          uVar15 = movmskps((int)this_01,auVar31);
          fVar25 = (float)(int)(iVar16 - (uVar15 & 1));
        }
        local_res8.SubFrame = FVar7.Time.SubFrame;
        fVar28 = fVar37 - fVar25;
        if (::FFrameTime::MaxSubframe <= fVar37 - fVar25) {
          fVar28 = ::FFrameTime::MaxSubframe;
        }
        if (fVar28 <= 0.0) {
          fVar28 = 0.0;
        }
        auVar35 = roundps(auVar35,ZEXT416((uint)(local_res8.SubFrame - fVar28)),1);
        local_158.Time.SubFrame = (local_res8.SubFrame - fVar28) - auVar35._0_4_;
        if (::FFrameTime::MaxSubframe <= local_158.Time.SubFrame) {
          local_158.Time.SubFrame = ::FFrameTime::MaxSubframe;
        }
        local_158.Time.FrameNumber.Value =
             (((FVar7.Time.FrameNumber.Value - ((int)ROUND((fVar37 + fVar37) - fVar6) >> 1)) -
              FVar23.Value) - local_170._0_4_) + (int)auVar35._0_4_;
        if (local_158.Time.SubFrame <= 0.0) {
          local_158.Time.SubFrame = 0.0;
        }
        local_res8 = FVar7.Time;
        local_158.Rate = FVar20;
        bVar9 = GetFrameAtSceneTime(this,&local_158,&this->FrameSnapshot);
      }
    }
  }
  pFVar1 = &(this->FrameSnapshot).FrameData;
  lVar17 = (pFVar1->WrappedStruct)._padding_;
  if (bVar9 == false) {
    (**(code **)(lVar17 + 0x48))();
  }
  else {
    lVar17 = (**(code **)(lVar17 + 0x18))(pFVar1);
    lVar13 = (**(code **)((pFVar1->WrappedStruct)._padding_ + 0x18))(pFVar1);
    local_res18[0].Value = *(int *)(lVar13 + 0x60);
    dVar41 = (double)((FFrameRate *)(lVar17 + 0x68))->Numerator / (double)*(int *)(lVar17 + 0x6c);
    dVar40 = dVar41 - ___real_403df853e2556b29;
    if (((__real_3e45798ee2308c3a <
          (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar40,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) &&
        (dVar41 = dVar41 - ___real_404df853e2556b29,
        __real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar41,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
       (bVar9 = FTimecode::UseDropFormatTimecodeByDefaultWhenSupported(), !bVar9)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    FTimecode::FromFrameNumber(local_d8,local_res18,(FFrameRate *)(lVar17 + 0x68),bVar9);
    if (5 < (byte)LogLiveLink._0_1_) {
      (**(code **)((pFVar1->WrappedStruct)._padding_ + 0x18))(pFVar1);
      (**(code **)((pFVar1->WrappedStruct)._padding_ + 0x18))(pFVar1);
      (**(code **)((pFVar1->WrappedStruct)._padding_ + 0x18))(pFVar1);
      (**(code **)((pFVar1->WrappedStruct)._padding_ + 0x18))(pFVar1);
      FTimecode::ToString(local_d8,&local_100,false,false);
      (**(code **)((pFVar1->WrappedStruct)._padding_ + 0x18))(pFVar1);
      ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_128);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLiveLink);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
  }
  EVar2 = this->State;
  dVar40 = (double)FApp::CurrentTime - this->LastPushTime;
  this_00 = ULiveLinkSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  if ((*(double *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[4].field_0x18 <= dVar40) ||
     (cVar8 = (**(code **)(this->_padding_ + 0x40))(this), cVar8 == '\0')) {
    EVar18 = Unresponsive;
  }
  else {
    EVar18 = Connected;
  }
  this->State = EVar18;
  if (EVar18 != EVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnStateChangedDelegate,&local_f0);
    if ((*(int *)&(this->OnStateChangedDelegate).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->OnStateChangedDelegate).field_0x8, plVar3 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar3 + 0x68))(plVar3,EVar18);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f0);
  }
LAB_14d0874ac:
                    /* WARNING: Could not recover jumptable at 0x00014d0874e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->SettingsCriticalSection);
  return;
}

// UpdateEvaluationData @ 14d087990

void __thiscall
FLiveLinkSubject::UpdateEvaluationData
          (FLiveLinkSubject *this,FTimedDataInputEvaluationData *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->StatisticCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->EvaluationStatistics).LastEvaluationData = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00014d0879d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// UpdateState @ 14d0885a0

void __thiscall FLiveLinkSubject::UpdateState(FLiveLinkSubject *this)

{
  ELiveLinkSubjectState EVar1;
  longlong *plVar2;
  char cVar3;
  UClass *this_00;
  ELiveLinkSubjectState EVar4;
  double dVar5;
  FReadAccessScope local_38 [2];
  
  EVar1 = this->State;
  dVar5 = (double)FApp::CurrentTime - this->LastPushTime;
  this_00 = ULiveLinkSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  if (dVar5 < *(double *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[4].field_0x18) {
    cVar3 = (**(code **)(this->_padding_ + 0x40))(this);
    if (cVar3 != '\0') {
      EVar4 = Connected;
      goto LAB_14d088610;
    }
  }
  EVar4 = Unresponsive;
LAB_14d088610:
  this->State = EVar4;
  if (EVar4 != EVar1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnStateChangedDelegate,local_38);
    if ((*(int *)&(this->OnStateChangedDelegate).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OnStateChangedDelegate).field_0x8, plVar2 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar2 + 0x68))(plVar2,EVar4);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_38);
  }
  return;
}

// ValidateFrameData @ 14d088cc0

bool __thiscall
FLiveLinkSubject::ValidateFrameData
          (FLiveLinkSubject *this,FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  ULiveLinkRole *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  ForAnyElementType FVar9;
  ForAnyElementType FVar10;
  TObjectPtr<UClass>_u_0 local_res8;
  FString local_38;
  FString local_28;
  
  lVar3 = (**(code **)((this->StaticData).WrappedStruct._padding_ + 0x10))(&this->StaticData);
  if (lVar3 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&InvalidStatFrame,"LiveLinkSubject_InvalidStatFrame");
      _Init_thread_footer(&::_TSS0);
    }
    ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_38);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar9.Data = local_38.Data.AllocatorInstance.Data;
    }
    FLiveLinkLog::Log_Internal<wchar_t_const_*>
              (Warning,InvalidStatFrame,&this->SubjectKey,
               (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa0d90,
               (wchar_t *)FVar9.Data);
    local_28.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    goto LAB_14d088d5a;
  }
  pUVar7 = (this->Role).Class.field0_0x0.DebugPtr;
  if (pUVar7 == (UClass *)0x0) {
    return false;
  }
  pUVar4 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
  if (pUVar4 == (UClass *)0x0) {
    return false;
  }
  iVar1 = (int)pUVar4->_padding_;
  if (((int)pUVar7->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return false;
  }
  pUVar7 = (this->Role).Class.field0_0x0.DebugPtr;
  if (pUVar7 == (UClass *)0x0) {
    return false;
  }
  pUVar5 = Z_Construct_UClass_ULiveLinkRole_NoRegister();
  pUVar4 = (UClass *)0x0;
  pUVar8 = pUVar4;
  if (pUVar5 != (UClass *)0x0) {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pUVar8 = (this->Role).Class.field0_0x0.DebugPtr;
    }
  }
  pUVar6 = UClass::GetDefaultObject<ULiveLinkRole>(pUVar8);
  pUVar7 = (UClass *)(**(code **)((param_1->WrappedStruct)._padding_ + 0x20))(param_1);
  if (pUVar7 == (UClass *)0x0) {
LAB_14d088e34:
    pUVar7 = pUVar4;
  }
  else {
    pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar8->_padding_)) goto LAB_14d088e34;
  }
  pUVar8 = (UClass *)(**(code **)(*(longlong *)pUVar6 + 0x2b8))(pUVar6);
  if (pUVar8 == pUVar7) {
    local_res8 = (TObjectPtr<UClass>_u_0)(this->Role).Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    bVar2 = FLiveLinkRoleTrait::Validate((TSubclassOf<ULiveLinkRole>)&local_res8,param_1);
    if (bVar2) {
      return true;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      ::FName::FName(&NAME_UnsupportedFrameData,"LiveLinkSubject_UnsupportedFrameData");
      _Init_thread_footer(&::_TSS2);
    }
    pUVar7 = (this->Role).Class.field0_0x0.DebugPtr;
    if ((pUVar7 != (UClass *)0x0) &&
       (pUVar8 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar8 != (UClass *)0x0)) {
      iVar1 = (int)pUVar8->_padding_;
      if (((int)pUVar7->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pUVar4 = (this->Role).Class.field0_0x0.DebugPtr;
      }
    }
    local_res8 = (TObjectPtr<UClass>_u_0)pUVar4->_padding_;
    ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_28);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar9.Data = local_28.Data.AllocatorInstance.Data;
    }
    FLiveLinkLog::Log_Internal<wchar_t_const_*>
              (Warning,NAME_UnsupportedFrameData,&this->SubjectKey,
               (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa0f20,
               (wchar_t *)FVar9.Data);
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&NAME_IncompatibleRoles,"LiveLinkSubject_IncompatibleRoles");
      _Init_thread_footer(&::_TSS1);
    }
    pUVar7 = (this->Role).Class.field0_0x0.DebugPtr;
    if ((pUVar7 != (UClass *)0x0) &&
       (pUVar8 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar8 != (UClass *)0x0)) {
      iVar1 = (int)pUVar8->_padding_;
      if (((int)pUVar7->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        pUVar4 = (this->Role).Class.field0_0x0.DebugPtr;
      }
    }
    local_res8 = (TObjectPtr<UClass>_u_0)pUVar4->_padding_;
    ::FName::ToString((FName *)&local_res8.ObjectPtr,&local_28);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar9.Data = local_28.Data.AllocatorInstance.Data;
    }
    ::FName::ToString(&(this->SubjectKey).SubjectName.Name,&local_38);
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar10.Data = local_38.Data.AllocatorInstance.Data;
    }
    FLiveLinkLog::Log_Internal<wchar_t_const_*,wchar_t_const_*>
              (Warning,NAME_IncompatibleRoles,&this->SubjectKey,
               (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*,wchar_t_const_*>)0x152aa0e40,
               (wchar_t *)FVar10.Data,(wchar_t *)FVar9.Data);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
LAB_14d088d5a:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return false;
}

// VerifyInterpolationInfo @ 14d08a140

void __thiscall
FLiveLinkSubject::VerifyInterpolationInfo
          (FLiveLinkSubject *this,FLiveLinkInterpolationInfo *param_1)

{
  TAtomic<int> *pTVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  float fVar2;
  float fVar3;
  
  if (param_1->bOverflowDetected == false) {
    if (param_1->bUnderflowDetected != false) {
      LOCK();
      (this->EvaluationStatistics).BufferUnderflow =
           (TAtomic<int>)((int)(this->EvaluationStatistics).BufferUnderflow + 1);
      UNLOCK();
    }
  }
  else {
    LOCK();
    pTVar1 = &(this->EvaluationStatistics).BufferOverflow;
    *pTVar1 = (TAtomic<int>)((int)*pTVar1 + 1);
    UNLOCK();
  }
  fVar2 = param_1->ExpectedEvaluationDistanceFromNewestSeconds;
  lpCriticalSection = &this->StatisticCriticalSection;
  fVar3 = param_1->ExpectedEvaluationDistanceFromOldestSeconds;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->EvaluationStatistics).LastEvaluationData.DistanceToNewestSampleSeconds = fVar2;
    (this->EvaluationStatistics).LastEvaluationData.DistanceToOldestSampleSeconds = fVar3;
                    /* WARNING: Could not recover jumptable at 0x00014d08a1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// operator() @ 150579620

bool __thiscall `FLiveLinkSubject::GetState'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9108744629649406669>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9108744629649406669>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

