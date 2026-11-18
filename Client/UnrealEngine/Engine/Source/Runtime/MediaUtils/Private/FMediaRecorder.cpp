// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 5

// FMediaRecorder @ 146bf2a20

FMediaRecorder * __thiscall FMediaRecorder::FMediaRecorder(FMediaRecorder *this)

{
  this->NumerationStyle = AppendSampleTime;
  (this->ClockSink).Object = (FMediaRecorderClockSink *)0x0;
  (this->ClockSink).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->SampleQueue).Object =
       (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0;
  (this->SampleQueue).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bRecording = false;
  this->bUnsupportedWarningShowed = false;
  this->FrameCount = 0;
  (this->BaseFilename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseFilename).Data.ArrayNum = 0;
  (this->BaseFilename).Data.ArrayMax = 0;
  this->bSetAlpha = false;
  this->CompressionQuality = 0;
  this->ImageWriteQueue = (IImageWriteQueue *)0x0;
  *(undefined8 *)&this->CompletedFence = 0;
  *(undefined8 *)&(this->CompletedFence).field_0x8 = 0;
  return this;
}

// StartRecording @ 146c0d810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall FMediaRecorder::StartRecording(FMediaRecorder *this,FMediaRecorderData *param_1)

{
  TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
  *pTVar1;
  FName FVar2;
  FMediaPlayerFacade *pFVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FModuleManager *pFVar7;
  IModuleInterface *pIVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong *plVar10;
  IImageWriteQueue *pIVar11;
  TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *pTVar12;
  TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *pTVar13;
  FName local_res8;
  FName local_res18;
  TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *local_68;
  FSharedReferencer<1> FStack_60;
  undefined1 local_58 [32];
  TSharedRef<TMediaSampleSink<IMediaTextureSample>,1> local_38;
  
  if (this->bRecording != false) {
    StopRecording(this);
  }
  pFVar6 = ::FName::FName(&local_res8,"Media");
  FVar2 = *pFVar6;
  pFVar7 = FModuleManager::Get();
  pIVar8 = FModuleManager::LoadModule(pFVar7,FVar2,None);
  if (pIVar8 != (IModuleInterface *)0x0) {
    ::FString::operator=(&this->BaseFilename,&param_1->BaseFilename);
    this->NumerationStyle = param_1->NumerationStyle;
    this->TargetImageFormat = param_1->TargetImageFormat;
    this->bSetAlpha = param_1->bResetAlpha;
    this->CompressionQuality = param_1->CompressionQuality;
    pTVar9 = ::operator_new(0x88);
    pTVar13 = (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)
              &DAT_00000010;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
      local_68 = ___xmm_00000000000000000000000000000010;
      pTVar12 = (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)
                &DAT_00000010;
      FStack_60.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      pTVar9->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TMediaSampleQueue_VIMediaTextureSample__V__TMediaSampleSink_VIMediaTextureSample_______00_SharedPointerInternals__6B_
      ;
      TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::
      TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>
                ((TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)
                 (pTVar9 + 1),-1);
      pTVar12 = (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)
                (pTVar9 + 1);
      if (pTVar12 ==
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      FStack_60.ReferenceController = pTVar9;
      local_68 = pTVar12;
    }
    pTVar1 = &this->SampleQueue;
    if (pTVar1 != (TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1>
                   *)&local_68) {
      pTVar1->Object = pTVar12;
      local_68 = (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)
                 0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SampleQueue).SharedReferenceCount,&FStack_60);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_60.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pFVar3 = (param_1->PlayerFacade).Object;
    if (pTVar1->Object ==
        (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pTVar12 = pTVar1->Object;
    pTVar9 = (this->SampleQueue).SharedReferenceCount.ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar12 ==
        (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.Object = (TMediaSampleSink<IMediaTextureSample> *)pTVar12;
    local_38.SharedReferenceCount.ReferenceController = pTVar9;
    TMediaSampleSinks<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::Add
              (&pFVar3->VideoSampleSinks,&local_38,(UMediaPlayer *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pTVar9 = ::operator_new(0x20);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
      local_58._0_8_ = ___xmm_00000000000000000000000000000010;
      local_58._8_8_ = _UNK_150651568;
    }
    else {
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar13 = (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)
                (pTVar9 + 1);
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      pTVar9->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFMediaRecorderClockSink___00_SharedPointerInternals__6B_
      ;
      pTVar9[1]._padding_ = (longlong)&___7FMediaRecorderClockSink__6B_;
      *(FMediaRecorder **)&pTVar9[1].SharedReferenceCount = this;
      if (pTVar13 ==
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      local_58._8_8_ = pTVar9;
      local_58._0_8_ = pTVar13;
    }
    if (this != (FMediaRecorder *)local_58) {
      (this->ClockSink).Object = (FMediaRecorderClockSink *)pTVar13;
      local_58._0_8_ =
           (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ClockSink).SharedReferenceCount,(FSharedReferencer<1> *)(local_58 + 8));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_58._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    plVar10 = (longlong *)(**(code **)((longlong)*pIVar8 + 0xa8))(pIVar8);
    pcVar4 = *(code **)(*plVar10 + 0x10);
    if ((this->ClockSink).Object == (FMediaRecorderClockSink *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pTVar9 = (this->ClockSink).SharedReferenceCount.ReferenceController;
    pTVar13 = (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)
              (this->ClockSink).Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar13 ==
        (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58._16_8_ = pTVar13;
    local_58._24_8_ = pTVar9;
    (*pcVar4)(plVar10,local_58 + 0x10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_58._24_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pFVar6 = ::FName::FName(&local_res18,"ImageWriteQueue");
    FVar2 = *pFVar6;
    pFVar7 = FModuleManager::Get();
    pIVar8 = FModuleManager::LoadModuleChecked(pFVar7,FVar2);
    pIVar11 = (IImageWriteQueue *)(**(code **)((longlong)*pIVar8 + 0x40))(pIVar8);
    this->ImageWriteQueue = pIVar11;
    this->bRecording = true;
  }
  return;
}

// StopRecording @ 146c0dcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMediaRecorder::StopRecording(FMediaRecorder *this)

{
  IImageWriteQueue *pIVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [88];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((this->bRecording != false) &&
     (pIVar1 = this->ImageWriteQueue, pIVar1 != (IImageWriteQueue *)0x0)) {
    local_78._48_8_ = 0;
    local_20 = (longlong *)0x0;
    puVar2 = (undefined8 *)
             (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,local_78 + 0x20,local_78 + 0x30);
    if (&this->CompletedFence != (TFuture<void> *)puVar2) {
      *(undefined8 *)&this->CompletedFence = *puVar2;
      *puVar2 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&(this->CompletedFence).field_0x8,
                 (FSharedReferencer<1> *)(puVar2 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_78._40_8_);
    if (local_78._48_8_ != 0) {
      plVar3 = (longlong *)(local_78 + 0x40);
      if (local_20 != (longlong *)0x0) {
        plVar3 = local_20;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  this->bRecording = false;
  this->ImageWriteQueue = (IImageWriteQueue *)0x0;
  local_78._0_8_ = (FMediaRecorderClockSink *)0x0;
  local_78._8_8_ = (TReferenceControllerBase<1> *)0x0;
  if (this != (FMediaRecorder *)local_78) {
    (this->ClockSink).Object = (FMediaRecorderClockSink *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ClockSink).SharedReferenceCount,(FSharedReferencer<1> *)(local_78 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_78._8_8_);
  local_78._16_8_ =
       (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0;
  local_78._24_8_ = (TReferenceControllerBase<1> *)0x0;
  if (&this->SampleQueue !=
      (TSharedPtr<TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>,1> *
      )(local_78 + 0x10)) {
    (this->SampleQueue).Object =
         (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SampleQueue).SharedReferenceCount,(FSharedReferencer<1> *)(local_78 + 0x18));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_78._24_8_);
  return;
}

// TickRecording @ 146c0f910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMediaRecorder::TickRecording(FMediaRecorder *this)

{
  FString *pFVar1;
  FImagePixelData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TIntPoint<int>_u_0 TVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  EMediaTextureSampleFormat EVar10;
  longlong lVar11;
  int *piVar12;
  FImageWriteTask *pFVar13;
  FImagePixelData *pFVar14;
  TUniquePtr<TImagePixelData<FFloat16Color>,TDefaultDelete<TImagePixelData<FFloat16Color>_>_> TVar15
  ;
  TUniquePtr<TImagePixelData<FColor>,TDefaultDelete<TImagePixelData<FColor>_>_> TVar16;
  longlong *plVar17;
  FSharedReferencer<1> FVar18;
  ForAnyElementType FVar19;
  int iVar20;
  FImageWriteTask *this_00;
  uint uVar21;
  ERGBFormat EVar22;
  int local_res8;
  undefined4 uStackX_c;
  FImageWriteTask *local_res10;
  TSharedPtr<IMediaTextureSample,1> local_res18;
  undefined1 local_c8 [16];
  longlong *local_b8;
  TIntPoint<int>_u_0 TStack_b0;
  FString local_a8;
  FString local_98;
  longlong *local_88;
  TIntPoint<int>_u_0 TStack_80;
  longlong *local_78;
  TIntPoint<int>_u_0 TStack_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [24];
  
  if (this->bRecording == false) {
    return;
  }
  if (((this->SampleQueue).Object ==
       (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SampleQueue.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaRecorder.cpp"
                         ,199,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this->ImageWriteQueue == (IImageWriteQueue *)0x0) {
    while (((this->SampleQueue).Object !=
            (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0 ||
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), !bVar6))) {
      cVar7 = (**(code **)(((this->SampleQueue).Object)->_padding_ + 0x18))();
      if (cVar7 == '\0') {
        StopRecording(this);
        return;
      }
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_b8 = (longlong *)0x0;
  TStack_b0 = (TIntPoint<int>_u_0)0x0;
  do {
    this_00 = (FImageWriteTask *)0x0;
    while( true ) {
      do {
        do {
          if (((this->SampleQueue).Object ==
               (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *)0x0)
             && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          plVar17 = &((this->SampleQueue).Object)->_padding_;
          cVar7 = (**(code **)*plVar17)(plVar17,&local_b8);
          if ((cVar7 == '\0') || (local_b8 == (longlong *)0x0)) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)TStack_b0);
            return;
          }
          if ((local_b8 == (longlong *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar11 = (**(code **)*local_b8)();
        } while (lVar11 == 0);
        if ((local_b8 == (longlong *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        piVar12 = (int *)(**(code **)(*local_b8 + 8))(local_b8,local_c8);
        iVar9 = piVar12[1];
        if (*piVar12 < piVar12[1]) {
          iVar9 = *piVar12;
        }
      } while (iVar9 == 0);
      if ((local_b8 == (longlong *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (**(code **)(*local_b8 + 0x28))();
      if (iVar9 == 2) break;
      if ((local_b8 == (longlong *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (**(code **)(*local_b8 + 0x28))();
      if (iVar9 == 0xd) break;
      if (this->bUnsupportedWarningShowed == false) {
        if (2 < (byte)LogMediaUtils._0_1_) {
          if ((local_b8 == (longlong *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          EVar10 = (**(code **)(*local_b8 + 0x28))();
          MediaTextureSampleFormat::EnumToString(EVar10);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaUtils);
        }
        this->bUnsupportedWarningShowed = true;
      }
    }
    pFVar13 = ::operator_new(0x80);
    if (pFVar13 != (FImageWriteTask *)0x0) {
      *(undefined ***)pFVar13 = &___7FImageWriteTask__6B_;
      (pFVar13->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar13->Filename).Data.ArrayNum = 0;
      (pFVar13->Filename).Data.ArrayMax = 0;
      pFVar13->Format = BMP;
      pFVar13->CompressionQuality = 0;
      pFVar13->bOverwriteFile = true;
      *(undefined8 *)&pFVar13->OnCompleted = 0;
      *(undefined8 *)&(pFVar13->OnCompleted).field_0x28 = 0;
      (pFVar13->PixelData).Ptr = (FImagePixelData *)0x0;
      (pFVar13->PixelPreProcessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar13->PixelPreProcessors).ArrayNum = 0;
      (pFVar13->PixelPreProcessors).ArrayMax = 0;
      this_00 = pFVar13;
    }
    if ((local_b8 == (longlong *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(*local_b8 + 8))(local_b8,&local_res8);
    if ((local_b8 == (longlong *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (**(code **)(*local_b8 + 0x28))();
    bVar6 = iVar9 == 0xd;
    uVar21 = 0x10;
    if (!bVar6) {
      uVar21 = 8;
    }
    EVar22 = RGBAF;
    if (!bVar6) {
      EVar22 = BGRA;
    }
    if (this->bSetAlpha == false) {
      if ((local_b8 == (longlong *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar20 = (uVar21 >> 3) * local_res8;
      iVar9 = (**(code **)(*local_b8 + 0x38))();
      if (iVar9 != iVar20 * 4) goto LAB_146c0fe95;
      bVar8 = false;
      pFVar14 = ::operator_new(0x38);
      if (pFVar14 == (FImagePixelData *)0x0) {
        pFVar14 = (FImagePixelData *)0x0;
      }
      else {
        pFVar14->_padding_ = (longlong)&___7FImagePixelData__6B_;
        TVar5._s_0.Y = uStackX_c;
        TVar5._s_0.X = local_res8;
        (pFVar14->Size).field0_0x0 = TVar5;
        pFVar14->Type = (uint)bVar6;
        (pFVar14->Payload).Object = (IImagePixelDataPayload *)0x0;
        pFVar14->PixelLayout = EVar22;
        pFVar14->BitDepth = (uchar)uVar21;
        pFVar14->NumChannels = '\x04';
        (pFVar14->Payload).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar14->bSRGB = !bVar6;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        pFVar14->_padding_ = (longlong)&___7FMediaImagePixelData__6B_;
        pFVar14[1]._padding_ = (longlong)local_b8;
        pFVar14[1].Size.field0_0x0 = TStack_b0;
        if (TStack_b0 != (TIntPoint<int>_u_0)0x0) {
          LOCK();
          *(int *)((longlong)TStack_b0 + 8) = *(int *)((longlong)TStack_b0 + 8) + 1;
          UNLOCK();
        }
      }
      pFVar2 = (this_00->PixelData).Ptr;
      (this_00->PixelData).Ptr = pFVar14;
      if (pFVar2 != (FImagePixelData *)0x0) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
    else {
LAB_146c0fe95:
      bVar8 = true;
      if ((local_b8 == (longlong *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (**(code **)(*local_b8 + 0x28))();
      if (iVar9 == 0xd) {
        local_88 = local_b8;
        TStack_80 = TStack_b0;
        if (TStack_b0 != (TIntPoint<int>_u_0)0x0) {
          LOCK();
          *(int *)((longlong)TStack_b0 + 8) = *(int *)((longlong)TStack_b0 + 8) + 1;
          UNLOCK();
        }
        TVar15 = MediaRecorderHelpers::CreatePixelData<FFloat16Color>
                           (&local_res18,(TIntPoint<int>)&local_88,local_res8);
        pFVar14 = (this_00->PixelData).Ptr;
        (this_00->PixelData).Ptr = (FImagePixelData *)(TVar15.Ptr)->_padding_;
        (TVar15.Ptr)->_padding_ = 0;
        FVar18.ReferenceController = (TReferenceControllerBase<1> *)local_res18.Object;
        if (pFVar14 != (FImagePixelData *)0x0) {
          (**(code **)pFVar14->_padding_)(pFVar14,1);
          FVar18.ReferenceController = (TReferenceControllerBase<1> *)local_res18.Object;
        }
      }
      else {
        if ((local_b8 == (longlong *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = (**(code **)(*local_b8 + 0x28))();
        if ((iVar9 != 2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Sample->GetFormat() == EMediaTextureSampleFormat::CharBGRA",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaRecorder.cpp"
                               ,0x107,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_78 = local_b8;
        TStack_70 = TStack_b0;
        if (TStack_b0 != (TIntPoint<int>_u_0)0x0) {
          LOCK();
          *(int *)((longlong)TStack_b0 + 8) = *(int *)((longlong)TStack_b0 + 8) + 1;
          UNLOCK();
        }
        TVar16 = MediaRecorderHelpers::CreatePixelData<FColor>
                           ((TSharedPtr<IMediaTextureSample,1> *)&local_res18.SharedReferenceCount,
                            (TIntPoint<int>)&local_78,local_res8);
        pFVar14 = (this_00->PixelData).Ptr;
        (this_00->PixelData).Ptr = (FImagePixelData *)(TVar16.Ptr)->_padding_;
        (TVar16.Ptr)->_padding_ = 0;
        FVar18.ReferenceController = local_res18.SharedReferenceCount.ReferenceController;
        if (pFVar14 != (FImagePixelData *)0x0) {
          (**(code **)pFVar14->_padding_)(pFVar14,1);
          FVar18.ReferenceController = local_res18.SharedReferenceCount.ReferenceController;
        }
      }
      if (FVar18.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        (**(code **)(FVar18.ReferenceController)->_padding_)(FVar18.ReferenceController,1);
      }
    }
    if (this->bSetAlpha != false) {
      if ((!bVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("bUseFMediaImagePixelData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Private\\MediaRecorder.cpp"
                             ,0x113,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FImageWriteTask::AddPreProcessorToSetAlphaOpaque(this_00);
    }
    if ((local_b8 == (longlong *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = (**(code **)(*local_b8 + 0x28))();
    if (iVar9 == 2) {
      pFVar14 = (this_00->PixelData).Ptr;
      if ((local_b8 == (longlong *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar6 = (bool)(**(code **)(*local_b8 + 0x80))();
      pFVar14->bSRGB = bVar6;
    }
    this_00->Format = this->TargetImageFormat;
    this_00->CompressionQuality = this->CompressionQuality;
    this_00->bOverwriteFile = true;
    if (this->NumerationStyle == AppendFrameNumber) {
      ::FString::PrintfImpl(&local_a8,L"%s_%08d");
      pFVar1 = &this_00->Filename;
      FVar19.Data = local_a8.Data.AllocatorInstance.Data;
      if (pFVar1 != &local_a8) {
        pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this_00->Filename).Data.ArrayNum = local_a8.Data.ArrayNum;
        (this_00->Filename).Data.ArrayMax = local_a8.Data.ArrayMax;
        local_a8.Data.ArrayNum = 0;
        local_a8.Data.ArrayMax = 0;
        FVar19.Data = local_a8.Data.AllocatorInstance.Data;
      }
    }
    else {
      if ((local_b8 == (longlong *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*local_b8 + 0x60))(local_b8,local_58);
      ::FString::PrintfImpl(&local_98,L"%s_%.16lld");
      pFVar1 = &this_00->Filename;
      FVar19.Data = local_98.Data.AllocatorInstance.Data;
      if (pFVar1 != &local_98) {
        pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
        local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this_00->Filename).Data.ArrayNum = local_98.Data.ArrayNum;
        (this_00->Filename).Data.ArrayMax = local_98.Data.ArrayMax;
        local_98.Data.ArrayNum = 0;
        local_98.Data.ArrayMax = 0;
        FVar19.Data = local_98.Data.AllocatorInstance.Data;
      }
    }
    if (FVar19.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar19.Data);
    }
    local_res10 = this_00;
    (**(code **)((longlong)*this->ImageWriteQueue + 8))
              (this->ImageWriteQueue,local_68,&local_res10,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    if (local_res10 != (FImageWriteTask *)0x0) {
      (*(code *)**(undefined8 **)local_res10)(local_res10,1);
    }
    this->FrameCount = this->FrameCount + 1;
  } while( true );
}

// WaitPendingTasks @ 146c11750

bool __thiscall FMediaRecorder::WaitPendingTasks(FMediaRecorder *this,FTimespan *param_1)

{
  TFuture<void> *pTVar1;
  bool bVar2;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->CompletedFence;
  bVar2 = true;
  if (*(FFutureState **)pTVar1 != (FFutureState *)0x0) {
    bVar2 = FFutureState::WaitFor(*(FFutureState **)pTVar1,param_1);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TFuture<void> *)&local_18) {
    *(undefined8 *)pTVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->CompletedFence).field_0x8,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return bVar2;
}

