// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MoviePlayer
// Functions: 12

// FSlateLoadingSynchronizationMechanism @ 146c771b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FSlateLoadingSynchronizationMechanism * __thiscall
FSlateLoadingSynchronizationMechanism::FSlateLoadingSynchronizationMechanism
          (FSlateLoadingSynchronizationMechanism *this,
          TSharedPtr<FMoviePlayerWidgetRenderer,1> *param_1,TSharedPtr<IMovieStreamer,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->bMainLoopRunning = (TAtomic<bool>)0x0;
  (this->IsRunningSlateMainLoop).Counter = 0;
  (this->IsSlateDrawEnqueued).Counter = 0;
  (this->WidgetRenderer).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->WidgetRenderer).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->MovieStreamer).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->MovieStreamer).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FSlateLoadingSynchronizationMechanism @ 146c77720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateLoadingSynchronizationMechanism::~FSlateLoadingSynchronizationMechanism
          (FSlateLoadingSynchronizationMechanism *this)

{
  DestroySlateThread(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MovieStreamer).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetRenderer).SharedReferenceCount.ReferenceController);
  return;
}

// DestroySlateThread @ 146c7af40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateLoadingSynchronizationMechanism::DestroySlateThread
          (FSlateLoadingSynchronizationMechanism *this)

{
  FRunnableThread *pFVar1;
  FRunnable *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\MoviePlayerThreading.cpp"
                       ,0x49,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->SlateLoadingThread != (FRunnableThread *)0x0) {
    LOCK();
    (this->IsRunningSlateMainLoop).Counter = 0;
    fVar4 = __real_3a83126f;
    UNLOCK();
    while (this->bMainLoopRunning != (TAtomic<bool>)0x0) {
      FWindowsPlatformApplicationMisc::PumpMessages(false);
      FWindowsPlatformProcess::Sleep(fVar4);
    }
    pFVar1 = this->SlateLoadingThread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
    pFVar2 = this->SlateRunnableTask;
    if (pFVar2 != (FRunnable *)0x0) {
      (**(code **)((longlong)*pFVar2 + 0x28))(pFVar2,1);
    }
    this->SlateLoadingThread = (FRunnableThread *)0x0;
    this->SlateRunnableTask = (FRunnable *)0x0;
  }
  return;
}

// Initialize @ 146c7ee40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateLoadingSynchronizationMechanism::Initialize(FSlateLoadingSynchronizationMechanism *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FRunnable *pFVar4;
  FRunnableThread *pFVar5;
  ForAnyElementType FVar6;
  FString local_18;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\MoviePlayerThreading.cpp"
                       ,0x39,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  LOCK();
  (this->IsSlateDrawEnqueued).Counter = 0;
  UNLOCK();
  LOCK();
  (this->IsRunningSlateMainLoop).Counter = 1;
  UNLOCK();
  LOCK();
  this->bMainLoopRunning = (TAtomic<bool>)0x1;
  UNLOCK();
  ::FString::FString(&local_18,L"SlateLoadingThread");
  LOCK();
  UNLOCK();
  iVar1 = LoadingThreadInstanceCounter.Counter + 1;
  LoadingThreadInstanceCounter.Counter = LoadingThreadInstanceCounter.Counter + 1;
  ::FString::AppendInt(&local_18,iVar1);
  pFVar4 = ::operator_new(0x10);
  if (pFVar4 != (FRunnable *)0x0) {
    pFVar4[1] = (FRunnable)this;
    *pFVar4 = (FRunnable)&___7FSlateLoadingThreadTask__6B_;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar6.Data = local_18.Data.AllocatorInstance.Data;
  }
  this->SlateRunnableTask = pFVar4;
  pFVar5 = FRunnableThread::Create
                     (pFVar4,(wchar_t *)FVar6.Data,0,TPri_Normal,0xffffffffffffffff,None);
  this->SlateLoadingThread = pFVar5;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// IsSlateDrawPassEnqueued @ 146c7f200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FSlateLoadingSynchronizationMechanism::IsSlateDrawPassEnqueued
          (FSlateLoadingSynchronizationMechanism *this)

{
  return (this->IsSlateDrawEnqueued).Counter != 0;
}

// IsSlateMainLoopRunning @ 146c7f210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FSlateLoadingSynchronizationMechanism::IsSlateMainLoopRunning
          (FSlateLoadingSynchronizationMechanism *this)

{
  return (this->IsRunningSlateMainLoop).Counter != 0;
}

// ResetSlateDrawPassEnqueued @ 146c80260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateLoadingSynchronizationMechanism::ResetSlateDrawPassEnqueued
          (FSlateLoadingSynchronizationMechanism *this)

{
  LOCK();
  (this->IsSlateDrawEnqueued).Counter = 0;
  UNLOCK();
  return;
}

// ResetSlateMainLoopRunning @ 146c80270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateLoadingSynchronizationMechanism::ResetSlateMainLoopRunning
          (FSlateLoadingSynchronizationMechanism *this)

{
  LOCK();
  (this->IsRunningSlateMainLoop).Counter = 0;
  UNLOCK();
  return;
}

// SetSlateDrawPassEnqueued @ 146c803a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateLoadingSynchronizationMechanism::SetSlateDrawPassEnqueued
          (FSlateLoadingSynchronizationMechanism *this)

{
  LOCK();
  (this->IsSlateDrawEnqueued).Counter = 1;
  UNLOCK();
  return;
}

// SetSlateMainLoopRunning @ 146c803b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateLoadingSynchronizationMechanism::SetSlateMainLoopRunning
          (FSlateLoadingSynchronizationMechanism *this)

{
  LOCK();
  (this->IsRunningSlateMainLoop).Counter = 1;
  UNLOCK();
  return;
}

// SlateThreadInitFailed @ 146c80fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateLoadingSynchronizationMechanism::SlateThreadInitFailed
          (FSlateLoadingSynchronizationMechanism *this)

{
  LOCK();
  this->bMainLoopRunning = (TAtomic<bool>)0x0;
  UNLOCK();
  return;
}

// SlateThreadRunMainLoop @ 146c80fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FSlateLoadingSynchronizationMechanism::SlateThreadRunMainLoop
          (FSlateLoadingSynchronizationMechanism *this)

{
  int iVar1;
  IMovieStreamer *pIVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar11;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  
  QueryPerformanceCounter(&local_res10);
  dVar9 = __real_3f91111111111111;
  dVar8 = __real_4170000000000000;
  iVar1 = (this->IsRunningSlateMainLoop).Counter;
  dVar6 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  fVar7 = __real_3c888889;
  do {
    __real_3c888889 = fVar7;
    if (iVar1 == 0) {
      iVar1 = (this->IsSlateDrawEnqueued).Counter;
      while (iVar1 != 0) {
        FWindowsPlatformProcess::Sleep(fVar7);
        iVar1 = (this->IsSlateDrawEnqueued).Counter;
      }
      LOCK();
      this->bMainLoopRunning = (TAtomic<bool>)0x0;
      UNLOCK();
      return;
    }
    uVar10 = GetCurrentThreadId();
    LOCK();
    bVar11 = uVar10 != GSlateLoadingThreadId;
    if (bVar11) {
      uVar10 = GSlateLoadingThreadId;
    }
    GSlateLoadingThreadId = uVar10;
    UNLOCK();
    if ((bVar11) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("PreviousThreadId == CurrentThreadId",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MoviePlayer\\Private\\MoviePlayerThreading.cpp"
                            ,0x8b,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    QueryPerformanceCounter(&local_res18);
    dVar4 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8;
    dVar5 = dVar4 - dVar6;
    if (0.0 < dVar9 - dVar5) {
      FWindowsPlatformProcess::Sleep((float)(dVar9 - dVar5));
      QueryPerformanceCounter(&local_res20);
      dVar4 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8;
      dVar5 = dVar4 - dVar6;
    }
    if ((FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) &&
       ((this->IsSlateDrawEnqueued).Counter == 0)) {
      pIVar2 = (this->MovieStreamer).Object;
      if (pIVar2 != (IMovieStreamer *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x70))();
        if (((this->MovieStreamer).Object == (IMovieStreamer *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (**(code **)((longlong)*(this->MovieStreamer).Object + 0x78))();
      }
      if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentApplication.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                              ,0x141,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar11 = IsInGameThread();
      if ((((!bVar11) && (bVar11 = IsInSlateThread(), !bVar11)) &&
          (bVar11 = (*IsInAsyncLoadingThread)(), !bVar11)) &&
         ((bVar11 = IsInParallelLoadingThread(), !bVar11 &&
          (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                               ,0x142,L""), bVar11)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lpCriticalSection =
           (LPCRITICAL_SECTION)
           (**(code **)(**(longlong **)&(FSlateApplication::CurrentApplication.Object)->field_0x60 +
                       0x160))();
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      if (((this->WidgetRenderer).Object == (FMoviePlayerWidgetRenderer *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FMoviePlayerWidgetRenderer::DrawWindow((this->WidgetRenderer).Object,(float)dVar5);
      LOCK();
      (this->IsSlateDrawEnqueued).Counter = 1;
      UNLOCK();
      pIVar2 = (this->MovieStreamer).Object;
      if (pIVar2 != (IMovieStreamer *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x80))();
      }
      LeaveCriticalSection(lpCriticalSection);
    }
    iVar1 = (this->IsRunningSlateMainLoop).Counter;
    dVar6 = dVar4;
    fVar7 = __real_3c888889;
  } while( true );
}

