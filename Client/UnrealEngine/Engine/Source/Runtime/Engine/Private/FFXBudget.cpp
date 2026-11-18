// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetAdjustedUsage @ 14810fd30

FFXTimeData * __cdecl FFXBudget::GetAdjustedUsage(FFXTimeData *__return_storage_ptr__)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  FFXTimeData *pFVar5;
  
  if ((!bEnabled) || (StatsListener.Object == (FParticlePerfStatsListener_FXBudget *)0x0)) {
    __return_storage_ptr__->GT = 0.0;
    __return_storage_ptr__->GTConcurrent = 0.0;
    __return_storage_ptr__->RT = 0.0;
    return __return_storage_ptr__;
  }
  if ((StatsListener.Object == (FParticlePerfStatsListener_FXBudget *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FFXTimeData *)(*pcVar2)();
    return pFVar5;
  }
  fVar3 = ((StatsListener.Object)->AdjustedUsage).GTConcurrent;
  fVar1 = ((StatsListener.Object)->AdjustedUsage).RT;
  __return_storage_ptr__->GT = ((StatsListener.Object)->AdjustedUsage).GT;
  __return_storage_ptr__->GTConcurrent = fVar3;
  __return_storage_ptr__->RT = fVar1;
  return __return_storage_ptr__;
}

// GetBudget @ 148110510

FFXTimeData * __cdecl FFXBudget::GetBudget(FFXTimeData *__return_storage_ptr__)

{
  float fVar1;
  
  fVar1 = GFXBudget_GameThreadConcurrent;
  __return_storage_ptr__->GT = GFXBudget_GameThread;
  __return_storage_ptr__->RT = GFXBudget_RenderThread;
  __return_storage_ptr__->GTConcurrent = fVar1;
  return __return_storage_ptr__;
}

// GetTime @ 14811c3e0

FFXTimeData * __cdecl FFXBudget::GetTime(FFXTimeData *__return_storage_ptr__)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  FFXTimeData *pFVar5;
  
  if ((!bEnabled) || (StatsListener.Object == (FParticlePerfStatsListener_FXBudget *)0x0)) {
    __return_storage_ptr__->GT = 0.0;
    __return_storage_ptr__->GTConcurrent = 0.0;
    __return_storage_ptr__->RT = 0.0;
    return __return_storage_ptr__;
  }
  if ((StatsListener.Object == (FParticlePerfStatsListener_FXBudget *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FFXTimeData *)(*pcVar2)();
    return pFVar5;
  }
  fVar3 = ((StatsListener.Object)->AverageTimesMs).GTConcurrent;
  fVar1 = ((StatsListener.Object)->AverageTimesMs).RT;
  __return_storage_ptr__->GT = ((StatsListener.Object)->AverageTimesMs).GT;
  __return_storage_ptr__->GTConcurrent = fVar3;
  __return_storage_ptr__->RT = fVar1;
  return __return_storage_ptr__;
}

// GetUsage @ 14811c600

FFXTimeData * __cdecl FFXBudget::GetUsage(FFXTimeData *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FFXTimeData *pFVar3;
  
  if ((!bEnabled) || (StatsListener.Object == (FParticlePerfStatsListener_FXBudget *)0x0)) {
    __return_storage_ptr__->GT = 0.0;
    __return_storage_ptr__->GTConcurrent = 0.0;
    __return_storage_ptr__->RT = 0.0;
    return __return_storage_ptr__;
  }
  if ((StatsListener.Object == (FParticlePerfStatsListener_FXBudget *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FFXTimeData *)(*pcVar1)();
    return pFVar3;
  }
  FParticlePerfStatsListener_FXBudget::GetUsage(StatsListener.Object,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnEnabledCVarChanged @ 148124540

void __cdecl FFXBudget::OnEnabledCVarChanged(IConsoleVariable *param_1)

{
  TSharedRef<FParticlePerfStatsListener_FXBudget,1> *pTVar1;
  TSharedPtr<FParticlePerfStatsListener,1> local_28;
  TSharedRef<FParticlePerfStatsListener_FXBudget,1> local_18;
  
  if (bEnabled) {
    if (StatsListener.Object == (FParticlePerfStatsListener_FXBudget *)0x0) {
      pTVar1 = MakeShared<FParticlePerfStatsListener_FXBudget,1>(&local_18);
      local_28.SharedReferenceCount.ReferenceController =
           (pTVar1->SharedReferenceCount).ReferenceController;
      StatsListener.Object = pTVar1->Object;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28.Object = (FParticlePerfStatsListener *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&StatsListener.SharedReferenceCount,&local_28.SharedReferenceCount);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      local_28.Object = (FParticlePerfStatsListener *)StatsListener.Object;
      local_28.SharedReferenceCount.ReferenceController =
           StatsListener.SharedReferenceCount.ReferenceController;
      if (StatsListener.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (StatsListener.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(StatsListener.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
             1);
        UNLOCK();
      }
      FParticlePerfStatsManager::AddListener(&local_28,true);
      return;
    }
  }
  else if (StatsListener.Object != (FParticlePerfStatsListener_FXBudget *)0x0) {
    local_28.Object = (FParticlePerfStatsListener *)StatsListener.Object;
    local_28.SharedReferenceCount.ReferenceController =
         StatsListener.SharedReferenceCount.ReferenceController;
    if (StatsListener.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
       ) {
      LOCK();
      (StatsListener.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(StatsListener.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
      ;
      UNLOCK();
    }
    FParticlePerfStatsManager::RemoveListener(&local_28);
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    StatsListener.Object = (FParticlePerfStatsListener_FXBudget *)0x0;
    local_28.Object = (FParticlePerfStatsListener *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&StatsListener.SharedReferenceCount,&local_28.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  return;
}

// OnEnabledChangedInternal @ 148124650

void __cdecl FFXBudget::OnEnabledChangedInternal(void)

{
  TSharedRef<FParticlePerfStatsListener_FXBudget,1> *pTVar1;
  TSharedPtr<FParticlePerfStatsListener,1> local_28;
  TSharedRef<FParticlePerfStatsListener_FXBudget,1> local_18;
  
  if (bEnabled) {
    if (StatsListener.Object == (FParticlePerfStatsListener_FXBudget *)0x0) {
      pTVar1 = MakeShared<FParticlePerfStatsListener_FXBudget,1>(&local_18);
      local_28.SharedReferenceCount.ReferenceController =
           (pTVar1->SharedReferenceCount).ReferenceController;
      StatsListener.Object = pTVar1->Object;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28.Object = (FParticlePerfStatsListener *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&StatsListener.SharedReferenceCount,&local_28.SharedReferenceCount);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      local_28.Object = (FParticlePerfStatsListener *)StatsListener.Object;
      local_28.SharedReferenceCount.ReferenceController =
           StatsListener.SharedReferenceCount.ReferenceController;
      if (StatsListener.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (StatsListener.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(StatsListener.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
             1);
        UNLOCK();
      }
      FParticlePerfStatsManager::AddListener(&local_28,true);
      return;
    }
  }
  else if (StatsListener.Object != (FParticlePerfStatsListener_FXBudget *)0x0) {
    local_28.Object = (FParticlePerfStatsListener *)StatsListener.Object;
    local_28.SharedReferenceCount.ReferenceController =
         StatsListener.SharedReferenceCount.ReferenceController;
    if (StatsListener.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
       ) {
      LOCK();
      (StatsListener.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(StatsListener.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
      ;
      UNLOCK();
    }
    FParticlePerfStatsManager::RemoveListener(&local_28);
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    StatsListener.Object = (FParticlePerfStatsListener_FXBudget *)0x0;
    local_28.Object = (FParticlePerfStatsListener *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&StatsListener.SharedReferenceCount,&local_28.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  return;
}

// Reset @ 14812a4d0

void __cdecl FFXBudget::Reset(void)

{
  TSharedRef<FParticlePerfStatsListener_FXBudget,1> *pTVar1;
  TSharedPtr<FParticlePerfStatsListener,1> local_28;
  TSharedRef<FParticlePerfStatsListener_FXBudget,1> local_18;
  
  if (StatsListener.Object != (FParticlePerfStatsListener_FXBudget *)0x0) {
    local_28.Object = (FParticlePerfStatsListener *)StatsListener.Object;
    local_28.SharedReferenceCount.ReferenceController =
         StatsListener.SharedReferenceCount.ReferenceController;
    if (StatsListener.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
       ) {
      LOCK();
      (StatsListener.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(StatsListener.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
      ;
      UNLOCK();
    }
    FParticlePerfStatsManager::RemoveListener(&local_28);
    pTVar1 = MakeShared<FParticlePerfStatsListener_FXBudget,1>(&local_18);
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar1->SharedReferenceCount).ReferenceController;
    StatsListener.Object = pTVar1->Object;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.Object = (FParticlePerfStatsListener *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&StatsListener.SharedReferenceCount,&local_28.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    local_28.Object = (FParticlePerfStatsListener *)StatsListener.Object;
    local_28.SharedReferenceCount.ReferenceController =
         StatsListener.SharedReferenceCount.ReferenceController;
    if (StatsListener.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
       ) {
      LOCK();
      (StatsListener.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(StatsListener.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
      ;
      UNLOCK();
    }
    FParticlePerfStatsManager::AddListener(&local_28,true);
  }
  return;
}

// SetEnabled @ 14812fe20

void __cdecl FFXBudget::SetEnabled(bool param_1)

{
  bEnabled = param_1;
  return;
}

