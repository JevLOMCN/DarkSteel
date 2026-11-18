// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 76

// FMediaIOCoreSampleContainer<IMediaOverlaySample> @ 14d7892b0

FMediaIOCoreSampleContainer<IMediaOverlaySample> * __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::FMediaIOCoreSampleContainer<IMediaOverlaySample>
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this,FName param_1)

{
  this->ChannelName = param_1;
  this->_padding_ = (longlong)&___7__FMediaIOCoreSampleContainer_VIMediaOverlaySample____6B_;
  (this->CachedSamplesData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedSamplesData).ArrayNum = 0;
  (this->CachedSamplesData).ArrayMax = 0;
  (this->CachedEvaluationData).DistanceToNewestSampleSeconds = 0.0;
  (this->CachedEvaluationData).DistanceToOldestSampleSeconds = 0.0;
  this->BufferUnderflow = (TAtomic<int>)0x0;
  this->BufferOverflow = (TAtomic<int>)0x0;
  this->FrameDrop = (TAtomic<int>)0x0;
  (this->EvaluationSettings).FrameRate.Numerator = 0x18;
  (this->EvaluationSettings).FrameRate.Denominator = 1;
  (this->EvaluationSettings).EvaluationType = PlatformTime;
  (this->EvaluationSettings).BufferSize = 8;
  (this->EvaluationSettings).PlayerTimeOffset = 0.0;
  (this->EvaluationSettings).AbsoluteMaxBufferSize = 0x20;
  this->bIsStatEnabled = true;
  this->bIsChannelEnabled = false;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Samples).ArrayNum = 0;
  (this->Samples).ArrayMax = 0;
  return this;
}

// ~FMediaIOCoreSampleContainer<IMediaAudioSample> @ 14d78bb10

void __thiscall
FMediaIOCoreSampleContainer<IMediaAudioSample>::~FMediaIOCoreSampleContainer<IMediaAudioSample>
          (FMediaIOCoreSampleContainer<IMediaAudioSample> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<IMediaAudioSample,1>,int>
            ((TSharedPtr<IMediaAudioSample,1> *)(this->Samples).AllocatorInstance.Data,
             (this->Samples).ArrayNum);
  pFVar1 = (this->Samples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  pFVar1 = (this->CachedSamplesData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~FMediaIOCoreSampleContainer<IMediaBinarySample> @ 14d78bb70

void __thiscall
FMediaIOCoreSampleContainer<IMediaBinarySample>::~FMediaIOCoreSampleContainer<IMediaBinarySample>
          (FMediaIOCoreSampleContainer<IMediaBinarySample> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<IMediaBinarySample,1>,int>
            ((TSharedPtr<IMediaBinarySample,1> *)(this->Samples).AllocatorInstance.Data,
             (this->Samples).ArrayNum);
  pFVar1 = (this->Samples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  pFVar1 = (this->CachedSamplesData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~FMediaIOCoreSampleContainer<IMediaOverlaySample> @ 14d78bbd0

void __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::~FMediaIOCoreSampleContainer<IMediaOverlaySample>
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<IMediaOverlaySample,1>,int>
            ((TSharedPtr<IMediaOverlaySample,1> *)(this->Samples).AllocatorInstance.Data,
             (this->Samples).ArrayNum);
  pFVar1 = (this->Samples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  pFVar1 = (this->CachedSamplesData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~FMediaIOCoreSampleContainer<IMediaTextureSample> @ 14d78bc30

void __thiscall
FMediaIOCoreSampleContainer<IMediaTextureSample>::~FMediaIOCoreSampleContainer<IMediaTextureSample>
          (FMediaIOCoreSampleContainer<IMediaTextureSample> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<IMediaTextureSample,1>,int>
            ((TSharedPtr<IMediaTextureSample,1> *)(this->Samples).AllocatorInstance.Data,
             (this->Samples).ArrayNum);
  pFVar1 = (this->Samples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  pFVar1 = (this->CachedSamplesData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddSample @ 14d796790

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::AddSample
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this,
          TSharedRef<IMediaOverlaySample,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<TSharedPtr<IMediaOverlaySample,1>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = &this->Samples;
    if ((this->EvaluationSettings).BufferSize < (this->Samples).ArrayNum + 1) {
      LOCK();
      this->FrameDrop = (TAtomic<int>)((int)this->FrameDrop + 1);
      UNLOCK();
      TArray<TSharedPtr<IMediaOverlaySample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                (this_00,(this->Samples).ArrayNum + -1,Default);
    }
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,&this_00->AllocatorInstance,&(this->Samples).ArrayNum,
                       &(this->Samples).ArrayMax);
    pFVar1 = (this_00->AllocatorInstance).Data;
    memmove(pFVar1 + 0x10,pFVar1,(longlong)iVar3 << 4);
    pFVar1 = (this_00->AllocatorInstance).Data;
    *(IMediaOverlaySample **)pFVar1 = param_1->Object;
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar1 + 8) = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CacheState @ 14d798450

void __thiscall
FMediaIOCoreSampleContainer<IMediaAudioSample>::CacheState
          (FMediaIOCoreSampleContainer<IMediaAudioSample> *this,FTimespan param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  FFrameNumber FVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  FTimecode *pFVar21;
  undefined4 extraout_var;
  uint uVar22;
  int *piVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 local_res8 [8];
  long64 local_res10;
  FFrameRate local_res18;
  FFrameRate local_res20;
  FFrameRate local_1c8;
  FScriptContainerElement *local_1c0;
  undefined4 local_1b8;
  float fStack_1b4;
  FFrameRate FStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [28];
  undefined1 local_15c [28];
  undefined1 local_140 [28];
  undefined1 local_124 [28];
  undefined1 local_108 [28];
  undefined1 local_ec [172];
  
  local_res10 = param_1.Ticks;
  if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  uVar17 = (this->Samples).ArrayNum;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  (this->CachedSamplesData).ArrayNum = 0;
  if ((this->CachedSamplesData).ArrayMax < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar17,&(this->CachedSamplesData).AllocatorInstance,0,
               &(this->CachedSamplesData).ArrayMax);
  }
  dVar9 = __real_3e7ad7f29abcaf48;
  if (uVar17 == 0) goto LAB_14d798d20;
  iVar1 = (this->Samples).ArrayNum;
  pFVar25 = (this->Samples).AllocatorInstance.Data;
  pFVar24 = pFVar25 + (longlong)iVar1 * 0x10;
  local_1c0 = pFVar24;
  while( true ) {
    piVar23 = &(this->CachedSamplesData).ArrayMax;
    if ((this->Samples).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<IMediaAudioSample,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar25 == pFVar24) break;
    if (*(longlong *)pFVar25 != 0) {
      iVar15 = (this->CachedSamplesData).ArrayNum;
      if (iVar15 == *piVar23) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(this->CachedSamplesData).AllocatorInstance,piVar23);
      }
      pFVar2 = (this->CachedSamplesData).AllocatorInstance.Data;
      (this->CachedSamplesData).ArrayNum = iVar15 + 1;
      lVar18 = (longlong)iVar15;
      *(undefined8 *)(pFVar2 + lVar18 * 0x18) = 0;
      *(undefined8 *)(pFVar2 + lVar18 * 0x18 + 8) = 0;
      *(undefined4 *)(pFVar2 + lVar18 * 0x18 + 0x10) = 0x18;
      *(undefined4 *)(pFVar2 + lVar18 * 0x18 + 0x14) = 1;
      if ((*(longlong *)pFVar25 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar19 = (longlong *)
                (**(code **)(**(longlong **)pFVar25 + 0x30))(*(longlong **)pFVar25,local_1a8);
      *(double *)(pFVar2 + lVar18 * 0x18) =
           (double)*plVar19 * dVar9 - (this->EvaluationSettings).PlayerTimeOffset;
      if ((*(longlong *)pFVar25 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar20 = (**(code **)(**(longlong **)pFVar25 + 0x38))(*(longlong **)pFVar25,local_178);
      if (*(char *)(lVar20 + 0x18) != '\0') {
        if ((*(longlong *)pFVar25 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar21 = (FTimecode *)
                  (**(code **)(**(longlong **)pFVar25 + 0x38))(*(longlong **)pFVar25,local_15c);
        if (((char)pFVar21[1].Hours == '\0') &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar16 = FTimecode::ToFrameNumber(pFVar21,&local_1c8);
        fStack_1b4 = pFVar21->Subframe;
        if (::FFrameTime::MaxSubframe <= pFVar21->Subframe) {
          fStack_1b4 = ::FFrameTime::MaxSubframe;
        }
        local_1b8 = *(undefined4 *)CONCAT44(extraout_var,FVar16.Value);
        FStack_1b0 = (this->EvaluationSettings).FrameRate;
        if (fStack_1b4 <= 0.0) {
          fStack_1b4 = 0.0;
        }
        pFVar2 = pFVar2 + lVar18 * 0x18 + 8;
        *(undefined4 *)pFVar2 = local_1b8;
        *(float *)(pFVar2 + 4) = fStack_1b4;
        *(int *)(pFVar2 + 8) = FStack_1b0.Numerator;
        *(int *)(pFVar2 + 0xc) = FStack_1b0.Denominator;
        pFVar24 = local_1c0;
      }
    }
    pFVar25 = pFVar25 + 0x10;
  }
  cVar14 = (**(code **)(this->_padding_ + 0x40))(this);
  if (cVar14 == '\0') goto LAB_14d798d20;
  iVar1 = (this->Samples).ArrayNum;
  dVar5 = 0.0;
  dVar6 = 0.0;
  dVar7 = (double)local_res10;
  dVar8 = (double)(this->EvaluationSettings).FrameRate.Denominator /
          (double)(this->EvaluationSettings).FrameRate.Numerator - __real_3e45798ee0000000;
  if ((this->EvaluationSettings).EvaluationType == Timecode) {
    if ((iVar1 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar25 = (this->Samples).AllocatorInstance.Data;
    if ((*(longlong *)pFVar25 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar19 = *(longlong **)pFVar25;
    lVar18 = (**(code **)(*plVar19 + 0x38))(plVar19,local_140);
    dVar12 = __real_416312d000000000;
    dVar11 = __real_3fe0000000000000;
    if (*(char *)(lVar18 + 0x18) != '\0') {
      if (((this->Samples).ArrayNum < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar25 = (this->Samples).AllocatorInstance.Data;
      if ((*(longlong *)pFVar25 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar19 = *(longlong **)pFVar25;
      pFVar21 = (FTimecode *)(**(code **)(*plVar19 + 0x38))(plVar19,local_124);
      if (((char)pFVar21[1].Hours == '\0') &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FTimecode::ToFrameNumber(pFVar21,&local_res18);
      auVar27._0_8_ = (double)(this->EvaluationSettings).FrameRate.Numerator;
      auVar27._8_8_ = 0;
      auVar28._8_8_ = 0;
      auVar28._0_8_ =
           ((double)(this->EvaluationSettings).FrameRate.Denominator / auVar27._0_8_) *
           (double)local_res18.Numerator * dVar12 + dVar11;
      auVar28 = roundpd(auVar27,auVar28,1);
      dVar5 = (double)(longlong)auVar28._0_8_ * dVar9 + dVar8;
    }
    uVar22 = (this->CachedSamplesData).ArrayNum - 1;
    uVar17 = 0;
    if ((int)uVar22 < (this->Samples).ArrayNum) {
      uVar17 = ~uVar22 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar25 = (this->Samples).AllocatorInstance.Data;
    if ((*(longlong *)(pFVar25 + (longlong)(int)uVar22 * 0x10) == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar19 = *(longlong **)(pFVar25 + (longlong)(int)uVar22 * 0x10);
    lVar18 = (**(code **)(*plVar19 + 0x38))(plVar19,local_108);
    if (*(char *)(lVar18 + 0x18) != '\0') {
      uVar22 = (this->CachedSamplesData).ArrayNum - 1;
      uVar17 = 0;
      if ((int)uVar22 < (this->Samples).ArrayNum) {
        uVar17 = ~uVar22 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar25 = (this->Samples).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar25 + (longlong)(int)uVar22 * 0x10) == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar19 = *(longlong **)(pFVar25 + (longlong)(int)uVar22 * 0x10);
      pFVar21 = (FTimecode *)(**(code **)(*plVar19 + 0x38))(plVar19,local_ec);
      if (((char)pFVar21[1].Hours == '\0') &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FTimecode::ToFrameNumber(pFVar21,&local_res20);
      auVar29._0_8_ = (double)(this->EvaluationSettings).FrameRate.Numerator;
      auVar29._8_8_ = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = ((double)(this->EvaluationSettings).FrameRate.Denominator / auVar29._0_8_) *
                     (double)local_res20.Numerator * dVar12 + dVar11;
      auVar28 = roundpd(auVar29,auVar4,1);
      lVar18 = (longlong)auVar28._0_8_;
      goto LAB_14d798c59;
    }
  }
  else {
    if ((iVar1 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar25 = (this->Samples).AllocatorInstance.Data;
    if ((*(longlong *)pFVar25 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar19 = *(longlong **)pFVar25;
    plVar19 = (longlong *)(**(code **)(*plVar19 + 0x30))(plVar19,local_198);
    uVar22 = (this->CachedSamplesData).ArrayNum - 1;
    uVar17 = 0;
    if ((int)uVar22 < (this->Samples).ArrayNum) {
      uVar17 = ~uVar22 >> 0x1f;
    }
    dVar5 = (double)*plVar19 * dVar9 + dVar8;
    if ((uVar17 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar25 = (this->Samples).AllocatorInstance.Data;
    if ((*(longlong *)(pFVar25 + (longlong)(int)uVar22 * 0x10) == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar19 = *(longlong **)(pFVar25 + (longlong)(int)uVar22 * 0x10);
    plVar19 = (longlong *)(**(code **)(*plVar19 + 0x30))(plVar19,local_188);
    lVar18 = *plVar19;
LAB_14d798c59:
    dVar6 = (double)lVar18 * dVar9;
  }
  fVar26 = (float)(dVar5 - dVar7 * dVar9);
  (this->CachedEvaluationData).DistanceToNewestSampleSeconds = fVar26;
  if ((0.0 <= fVar26) && ((double)fVar26 <= dVar8)) {
    (this->CachedEvaluationData).DistanceToNewestSampleSeconds = 0.0;
    fVar26 = 0.0;
  }
  uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar10 = __real_322bcc77;
  fVar30 = (float)((uint)fVar26 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  (this->CachedEvaluationData).DistanceToOldestSampleSeconds = (float)(dVar7 * dVar9 - dVar6);
  if ((fVar10 < fVar30) && (fVar26 < 0.0)) {
    LOCK();
    this->BufferOverflow = (TAtomic<int>)((int)this->BufferOverflow + 1);
    UNLOCK();
  }
  fVar26 = (this->CachedEvaluationData).DistanceToOldestSampleSeconds;
  if ((fVar10 < (float)((uint)fVar26 & uVar17)) && (fVar26 < 0.0)) {
    LOCK();
    this->BufferUnderflow = (TAtomic<int>)((int)this->BufferUnderflow + 1);
    UNLOCK();
  }
LAB_14d798d20:
                    /* WARNING: Could not recover jumptable at 0x00014d798d46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return;
}

// CacheState @ 14d798d70

void __thiscall
FMediaIOCoreSampleContainer<IMediaBinarySample>::CacheState
          (FMediaIOCoreSampleContainer<IMediaBinarySample> *this,FTimespan param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  FFrameNumber FVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  FTimecode *pFVar21;
  undefined4 extraout_var;
  uint uVar22;
  int *piVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 local_res8 [8];
  long64 local_res10;
  FFrameRate local_res18;
  FFrameRate local_res20;
  FFrameRate local_1c8;
  FScriptContainerElement *local_1c0;
  undefined4 local_1b8;
  float fStack_1b4;
  FFrameRate FStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [28];
  undefined1 local_15c [28];
  undefined1 local_140 [28];
  undefined1 local_124 [28];
  undefined1 local_108 [28];
  undefined1 local_ec [172];
  
  local_res10 = param_1.Ticks;
  if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  uVar17 = (this->Samples).ArrayNum;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  (this->CachedSamplesData).ArrayNum = 0;
  if ((this->CachedSamplesData).ArrayMax < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar17,&(this->CachedSamplesData).AllocatorInstance,0,
               &(this->CachedSamplesData).ArrayMax);
  }
  dVar9 = __real_3e7ad7f29abcaf48;
  if (uVar17 == 0) goto LAB_14d799640;
  iVar1 = (this->Samples).ArrayNum;
  pFVar25 = (this->Samples).AllocatorInstance.Data;
  pFVar24 = pFVar25 + (longlong)iVar1 * 0x10;
  local_1c0 = pFVar24;
  while( true ) {
    piVar23 = &(this->CachedSamplesData).ArrayMax;
    if ((this->Samples).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<IMediaBinarySample,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar25 == pFVar24) break;
    if (*(longlong *)pFVar25 != 0) {
      iVar15 = (this->CachedSamplesData).ArrayNum;
      if (iVar15 == *piVar23) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(this->CachedSamplesData).AllocatorInstance,piVar23);
      }
      pFVar2 = (this->CachedSamplesData).AllocatorInstance.Data;
      (this->CachedSamplesData).ArrayNum = iVar15 + 1;
      lVar18 = (longlong)iVar15;
      *(undefined8 *)(pFVar2 + lVar18 * 0x18) = 0;
      *(undefined8 *)(pFVar2 + lVar18 * 0x18 + 8) = 0;
      *(undefined4 *)(pFVar2 + lVar18 * 0x18 + 0x10) = 0x18;
      *(undefined4 *)(pFVar2 + lVar18 * 0x18 + 0x14) = 1;
      if ((*(longlong *)pFVar25 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar19 = (longlong *)
                (**(code **)(**(longlong **)pFVar25 + 0x18))(*(longlong **)pFVar25,local_1a8);
      *(double *)(pFVar2 + lVar18 * 0x18) =
           (double)*plVar19 * dVar9 - (this->EvaluationSettings).PlayerTimeOffset;
      if ((*(longlong *)pFVar25 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar20 = (**(code **)(**(longlong **)pFVar25 + 0x20))(*(longlong **)pFVar25,local_178);
      if (*(char *)(lVar20 + 0x18) != '\0') {
        if ((*(longlong *)pFVar25 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar21 = (FTimecode *)
                  (**(code **)(**(longlong **)pFVar25 + 0x20))(*(longlong **)pFVar25,local_15c);
        if (((char)pFVar21[1].Hours == '\0') &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar16 = FTimecode::ToFrameNumber(pFVar21,&local_1c8);
        fStack_1b4 = pFVar21->Subframe;
        if (::FFrameTime::MaxSubframe <= pFVar21->Subframe) {
          fStack_1b4 = ::FFrameTime::MaxSubframe;
        }
        local_1b8 = *(undefined4 *)CONCAT44(extraout_var,FVar16.Value);
        FStack_1b0 = (this->EvaluationSettings).FrameRate;
        if (fStack_1b4 <= 0.0) {
          fStack_1b4 = 0.0;
        }
        pFVar2 = pFVar2 + lVar18 * 0x18 + 8;
        *(undefined4 *)pFVar2 = local_1b8;
        *(float *)(pFVar2 + 4) = fStack_1b4;
        *(int *)(pFVar2 + 8) = FStack_1b0.Numerator;
        *(int *)(pFVar2 + 0xc) = FStack_1b0.Denominator;
        pFVar24 = local_1c0;
      }
    }
    pFVar25 = pFVar25 + 0x10;
  }
  cVar14 = (**(code **)(this->_padding_ + 0x40))(this);
  if (cVar14 == '\0') goto LAB_14d799640;
  iVar1 = (this->Samples).ArrayNum;
  dVar5 = 0.0;
  dVar6 = 0.0;
  dVar7 = (double)local_res10;
  dVar8 = (double)(this->EvaluationSettings).FrameRate.Denominator /
          (double)(this->EvaluationSettings).FrameRate.Numerator - __real_3e45798ee0000000;
  if ((this->EvaluationSettings).EvaluationType == Timecode) {
    if ((iVar1 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar25 = (this->Samples).AllocatorInstance.Data;
    if ((*(longlong *)pFVar25 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar19 = *(longlong **)pFVar25;
    lVar18 = (**(code **)(*plVar19 + 0x20))(plVar19,local_140);
    dVar12 = __real_416312d000000000;
    dVar11 = __real_3fe0000000000000;
    if (*(char *)(lVar18 + 0x18) != '\0') {
      if (((this->Samples).ArrayNum < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar25 = (this->Samples).AllocatorInstance.Data;
      if ((*(longlong *)pFVar25 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar19 = *(longlong **)pFVar25;
      pFVar21 = (FTimecode *)(**(code **)(*plVar19 + 0x20))(plVar19,local_124);
      if (((char)pFVar21[1].Hours == '\0') &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FTimecode::ToFrameNumber(pFVar21,&local_res18);
      auVar27._0_8_ = (double)(this->EvaluationSettings).FrameRate.Numerator;
      auVar27._8_8_ = 0;
      auVar28._8_8_ = 0;
      auVar28._0_8_ =
           ((double)(this->EvaluationSettings).FrameRate.Denominator / auVar27._0_8_) *
           (double)local_res18.Numerator * dVar12 + dVar11;
      auVar28 = roundpd(auVar27,auVar28,1);
      dVar5 = (double)(longlong)auVar28._0_8_ * dVar9 + dVar8;
    }
    uVar22 = (this->CachedSamplesData).ArrayNum - 1;
    uVar17 = 0;
    if ((int)uVar22 < (this->Samples).ArrayNum) {
      uVar17 = ~uVar22 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar25 = (this->Samples).AllocatorInstance.Data;
    if ((*(longlong *)(pFVar25 + (longlong)(int)uVar22 * 0x10) == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar19 = *(longlong **)(pFVar25 + (longlong)(int)uVar22 * 0x10);
    lVar18 = (**(code **)(*plVar19 + 0x20))(plVar19,local_108);
    if (*(char *)(lVar18 + 0x18) != '\0') {
      uVar22 = (this->CachedSamplesData).ArrayNum - 1;
      uVar17 = 0;
      if ((int)uVar22 < (this->Samples).ArrayNum) {
        uVar17 = ~uVar22 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar25 = (this->Samples).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar25 + (longlong)(int)uVar22 * 0x10) == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar19 = *(longlong **)(pFVar25 + (longlong)(int)uVar22 * 0x10);
      pFVar21 = (FTimecode *)(**(code **)(*plVar19 + 0x20))(plVar19,local_ec);
      if (((char)pFVar21[1].Hours == '\0') &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FTimecode::ToFrameNumber(pFVar21,&local_res20);
      auVar29._0_8_ = (double)(this->EvaluationSettings).FrameRate.Numerator;
      auVar29._8_8_ = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = ((double)(this->EvaluationSettings).FrameRate.Denominator / auVar29._0_8_) *
                     (double)local_res20.Numerator * dVar12 + dVar11;
      auVar28 = roundpd(auVar29,auVar4,1);
      lVar18 = (longlong)auVar28._0_8_;
      goto LAB_14d799579;
    }
  }
  else {
    if ((iVar1 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar25 = (this->Samples).AllocatorInstance.Data;
    if ((*(longlong *)pFVar25 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar19 = *(longlong **)pFVar25;
    plVar19 = (longlong *)(**(code **)(*plVar19 + 0x18))(plVar19,local_198);
    uVar22 = (this->CachedSamplesData).ArrayNum - 1;
    uVar17 = 0;
    if ((int)uVar22 < (this->Samples).ArrayNum) {
      uVar17 = ~uVar22 >> 0x1f;
    }
    dVar5 = (double)*plVar19 * dVar9 + dVar8;
    if ((uVar17 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar25 = (this->Samples).AllocatorInstance.Data;
    if ((*(longlong *)(pFVar25 + (longlong)(int)uVar22 * 0x10) == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar19 = *(longlong **)(pFVar25 + (longlong)(int)uVar22 * 0x10);
    plVar19 = (longlong *)(**(code **)(*plVar19 + 0x18))(plVar19,local_188);
    lVar18 = *plVar19;
LAB_14d799579:
    dVar6 = (double)lVar18 * dVar9;
  }
  fVar26 = (float)(dVar5 - dVar7 * dVar9);
  (this->CachedEvaluationData).DistanceToNewestSampleSeconds = fVar26;
  if ((0.0 <= fVar26) && ((double)fVar26 <= dVar8)) {
    (this->CachedEvaluationData).DistanceToNewestSampleSeconds = 0.0;
    fVar26 = 0.0;
  }
  uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar10 = __real_322bcc77;
  fVar30 = (float)((uint)fVar26 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  (this->CachedEvaluationData).DistanceToOldestSampleSeconds = (float)(dVar7 * dVar9 - dVar6);
  if ((fVar10 < fVar30) && (fVar26 < 0.0)) {
    LOCK();
    this->BufferOverflow = (TAtomic<int>)((int)this->BufferOverflow + 1);
    UNLOCK();
  }
  fVar26 = (this->CachedEvaluationData).DistanceToOldestSampleSeconds;
  if ((fVar10 < (float)((uint)fVar26 & uVar17)) && (fVar26 < 0.0)) {
    LOCK();
    this->BufferUnderflow = (TAtomic<int>)((int)this->BufferUnderflow + 1);
    UNLOCK();
  }
LAB_14d799640:
                    /* WARNING: Could not recover jumptable at 0x00014d799666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return;
}

// CacheState @ 14d799690

void __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::CacheState
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this,FTimespan param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  FFrameNumber FVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  FTimecode *pFVar21;
  undefined4 extraout_var;
  uint uVar22;
  int *piVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 local_res8 [8];
  long64 local_res10;
  FFrameRate local_res18;
  FFrameRate local_res20;
  FFrameRate local_1c8;
  FScriptContainerElement *local_1c0;
  undefined4 local_1b8;
  float fStack_1b4;
  FFrameRate FStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [28];
  undefined1 local_15c [28];
  undefined1 local_140 [28];
  undefined1 local_124 [28];
  undefined1 local_108 [28];
  undefined1 local_ec [172];
  
  local_res10 = param_1.Ticks;
  if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  uVar17 = (this->Samples).ArrayNum;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  (this->CachedSamplesData).ArrayNum = 0;
  if ((this->CachedSamplesData).ArrayMax < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar17,&(this->CachedSamplesData).AllocatorInstance,0,
               &(this->CachedSamplesData).ArrayMax);
  }
  dVar9 = __real_3e7ad7f29abcaf48;
  if (uVar17 == 0) goto LAB_14d799f60;
  iVar1 = (this->Samples).ArrayNum;
  pFVar25 = (this->Samples).AllocatorInstance.Data;
  pFVar24 = pFVar25 + (longlong)iVar1 * 0x10;
  local_1c0 = pFVar24;
  while( true ) {
    piVar23 = &(this->CachedSamplesData).ArrayMax;
    if ((this->Samples).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<IMediaOverlaySample,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar25 == pFVar24) break;
    if (*(longlong *)pFVar25 != 0) {
      iVar15 = (this->CachedSamplesData).ArrayNum;
      if (iVar15 == *piVar23) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(this->CachedSamplesData).AllocatorInstance,piVar23);
      }
      pFVar2 = (this->CachedSamplesData).AllocatorInstance.Data;
      (this->CachedSamplesData).ArrayNum = iVar15 + 1;
      lVar18 = (longlong)iVar15;
      *(undefined8 *)(pFVar2 + lVar18 * 0x18) = 0;
      *(undefined8 *)(pFVar2 + lVar18 * 0x18 + 8) = 0;
      *(undefined4 *)(pFVar2 + lVar18 * 0x18 + 0x10) = 0x18;
      *(undefined4 *)(pFVar2 + lVar18 * 0x18 + 0x14) = 1;
      if ((*(longlong *)pFVar25 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar19 = (longlong *)
                (**(code **)(**(longlong **)pFVar25 + 0x18))(*(longlong **)pFVar25,local_1a8);
      *(double *)(pFVar2 + lVar18 * 0x18) =
           (double)*plVar19 * dVar9 - (this->EvaluationSettings).PlayerTimeOffset;
      if ((*(longlong *)pFVar25 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar20 = (**(code **)(**(longlong **)pFVar25 + 0x20))(*(longlong **)pFVar25,local_178);
      if (*(char *)(lVar20 + 0x18) != '\0') {
        if ((*(longlong *)pFVar25 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar21 = (FTimecode *)
                  (**(code **)(**(longlong **)pFVar25 + 0x20))(*(longlong **)pFVar25,local_15c);
        if (((char)pFVar21[1].Hours == '\0') &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar16 = FTimecode::ToFrameNumber(pFVar21,&local_1c8);
        fStack_1b4 = pFVar21->Subframe;
        if (::FFrameTime::MaxSubframe <= pFVar21->Subframe) {
          fStack_1b4 = ::FFrameTime::MaxSubframe;
        }
        local_1b8 = *(undefined4 *)CONCAT44(extraout_var,FVar16.Value);
        FStack_1b0 = (this->EvaluationSettings).FrameRate;
        if (fStack_1b4 <= 0.0) {
          fStack_1b4 = 0.0;
        }
        pFVar2 = pFVar2 + lVar18 * 0x18 + 8;
        *(undefined4 *)pFVar2 = local_1b8;
        *(float *)(pFVar2 + 4) = fStack_1b4;
        *(int *)(pFVar2 + 8) = FStack_1b0.Numerator;
        *(int *)(pFVar2 + 0xc) = FStack_1b0.Denominator;
        pFVar24 = local_1c0;
      }
    }
    pFVar25 = pFVar25 + 0x10;
  }
  cVar14 = (**(code **)(this->_padding_ + 0x40))(this);
  if (cVar14 == '\0') goto LAB_14d799f60;
  iVar1 = (this->Samples).ArrayNum;
  dVar5 = 0.0;
  dVar6 = 0.0;
  dVar7 = (double)local_res10;
  dVar8 = (double)(this->EvaluationSettings).FrameRate.Denominator /
          (double)(this->EvaluationSettings).FrameRate.Numerator - __real_3e45798ee0000000;
  if ((this->EvaluationSettings).EvaluationType == Timecode) {
    if ((iVar1 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar25 = (this->Samples).AllocatorInstance.Data;
    if ((*(longlong *)pFVar25 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar19 = *(longlong **)pFVar25;
    lVar18 = (**(code **)(*plVar19 + 0x20))(plVar19,local_140);
    dVar12 = __real_416312d000000000;
    dVar11 = __real_3fe0000000000000;
    if (*(char *)(lVar18 + 0x18) != '\0') {
      if (((this->Samples).ArrayNum < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar25 = (this->Samples).AllocatorInstance.Data;
      if ((*(longlong *)pFVar25 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar19 = *(longlong **)pFVar25;
      pFVar21 = (FTimecode *)(**(code **)(*plVar19 + 0x20))(plVar19,local_124);
      if (((char)pFVar21[1].Hours == '\0') &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FTimecode::ToFrameNumber(pFVar21,&local_res18);
      auVar27._0_8_ = (double)(this->EvaluationSettings).FrameRate.Numerator;
      auVar27._8_8_ = 0;
      auVar28._8_8_ = 0;
      auVar28._0_8_ =
           ((double)(this->EvaluationSettings).FrameRate.Denominator / auVar27._0_8_) *
           (double)local_res18.Numerator * dVar12 + dVar11;
      auVar28 = roundpd(auVar27,auVar28,1);
      dVar5 = (double)(longlong)auVar28._0_8_ * dVar9 + dVar8;
    }
    uVar22 = (this->CachedSamplesData).ArrayNum - 1;
    uVar17 = 0;
    if ((int)uVar22 < (this->Samples).ArrayNum) {
      uVar17 = ~uVar22 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar25 = (this->Samples).AllocatorInstance.Data;
    if ((*(longlong *)(pFVar25 + (longlong)(int)uVar22 * 0x10) == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar19 = *(longlong **)(pFVar25 + (longlong)(int)uVar22 * 0x10);
    lVar18 = (**(code **)(*plVar19 + 0x20))(plVar19,local_108);
    if (*(char *)(lVar18 + 0x18) != '\0') {
      uVar22 = (this->CachedSamplesData).ArrayNum - 1;
      uVar17 = 0;
      if ((int)uVar22 < (this->Samples).ArrayNum) {
        uVar17 = ~uVar22 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar25 = (this->Samples).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar25 + (longlong)(int)uVar22 * 0x10) == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar19 = *(longlong **)(pFVar25 + (longlong)(int)uVar22 * 0x10);
      pFVar21 = (FTimecode *)(**(code **)(*plVar19 + 0x20))(plVar19,local_ec);
      if (((char)pFVar21[1].Hours == '\0') &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FTimecode::ToFrameNumber(pFVar21,&local_res20);
      auVar29._0_8_ = (double)(this->EvaluationSettings).FrameRate.Numerator;
      auVar29._8_8_ = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = ((double)(this->EvaluationSettings).FrameRate.Denominator / auVar29._0_8_) *
                     (double)local_res20.Numerator * dVar12 + dVar11;
      auVar28 = roundpd(auVar29,auVar4,1);
      lVar18 = (longlong)auVar28._0_8_;
      goto LAB_14d799e99;
    }
  }
  else {
    if ((iVar1 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar25 = (this->Samples).AllocatorInstance.Data;
    if ((*(longlong *)pFVar25 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar19 = *(longlong **)pFVar25;
    plVar19 = (longlong *)(**(code **)(*plVar19 + 0x18))(plVar19,local_198);
    uVar22 = (this->CachedSamplesData).ArrayNum - 1;
    uVar17 = 0;
    if ((int)uVar22 < (this->Samples).ArrayNum) {
      uVar17 = ~uVar22 >> 0x1f;
    }
    dVar5 = (double)*plVar19 * dVar9 + dVar8;
    if ((uVar17 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar25 = (this->Samples).AllocatorInstance.Data;
    if ((*(longlong *)(pFVar25 + (longlong)(int)uVar22 * 0x10) == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar19 = *(longlong **)(pFVar25 + (longlong)(int)uVar22 * 0x10);
    plVar19 = (longlong *)(**(code **)(*plVar19 + 0x18))(plVar19,local_188);
    lVar18 = *plVar19;
LAB_14d799e99:
    dVar6 = (double)lVar18 * dVar9;
  }
  fVar26 = (float)(dVar5 - dVar7 * dVar9);
  (this->CachedEvaluationData).DistanceToNewestSampleSeconds = fVar26;
  if ((0.0 <= fVar26) && ((double)fVar26 <= dVar8)) {
    (this->CachedEvaluationData).DistanceToNewestSampleSeconds = 0.0;
    fVar26 = 0.0;
  }
  uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar10 = __real_322bcc77;
  fVar30 = (float)((uint)fVar26 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  (this->CachedEvaluationData).DistanceToOldestSampleSeconds = (float)(dVar7 * dVar9 - dVar6);
  if ((fVar10 < fVar30) && (fVar26 < 0.0)) {
    LOCK();
    this->BufferOverflow = (TAtomic<int>)((int)this->BufferOverflow + 1);
    UNLOCK();
  }
  fVar26 = (this->CachedEvaluationData).DistanceToOldestSampleSeconds;
  if ((fVar10 < (float)((uint)fVar26 & uVar17)) && (fVar26 < 0.0)) {
    LOCK();
    this->BufferUnderflow = (TAtomic<int>)((int)this->BufferUnderflow + 1);
    UNLOCK();
  }
LAB_14d799f60:
                    /* WARNING: Could not recover jumptable at 0x00014d799f86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return;
}

// CacheState @ 14d799fb0

void __thiscall
FMediaIOCoreSampleContainer<IMediaTextureSample>::CacheState
          (FMediaIOCoreSampleContainer<IMediaTextureSample> *this,FTimespan param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  FFrameNumber FVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  FTimecode *pFVar21;
  undefined4 extraout_var;
  uint uVar22;
  int *piVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 local_res8 [8];
  long64 local_res10;
  FFrameRate local_res18;
  FFrameRate local_res20;
  FFrameRate local_1c8;
  FScriptContainerElement *local_1c0;
  undefined4 local_1b8;
  float fStack_1b4;
  FFrameRate FStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [28];
  undefined1 local_15c [28];
  undefined1 local_140 [28];
  undefined1 local_124 [28];
  undefined1 local_108 [28];
  undefined1 local_ec [172];
  
  local_res10 = param_1.Ticks;
  if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  uVar17 = (this->Samples).ArrayNum;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  (this->CachedSamplesData).ArrayNum = 0;
  if ((this->CachedSamplesData).ArrayMax < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar17,&(this->CachedSamplesData).AllocatorInstance,0,
               &(this->CachedSamplesData).ArrayMax);
  }
  dVar9 = __real_3e7ad7f29abcaf48;
  if (uVar17 == 0) goto LAB_14d79a880;
  iVar1 = (this->Samples).ArrayNum;
  pFVar25 = (this->Samples).AllocatorInstance.Data;
  pFVar24 = pFVar25 + (longlong)iVar1 * 0x10;
  local_1c0 = pFVar24;
  while( true ) {
    piVar23 = &(this->CachedSamplesData).ArrayMax;
    if ((this->Samples).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<IMediaTextureSample,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar25 == pFVar24) break;
    if (*(longlong *)pFVar25 != 0) {
      iVar15 = (this->CachedSamplesData).ArrayNum;
      if (iVar15 == *piVar23) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(this->CachedSamplesData).AllocatorInstance,piVar23);
      }
      pFVar2 = (this->CachedSamplesData).AllocatorInstance.Data;
      (this->CachedSamplesData).ArrayNum = iVar15 + 1;
      lVar18 = (longlong)iVar15;
      *(undefined8 *)(pFVar2 + lVar18 * 0x18) = 0;
      *(undefined8 *)(pFVar2 + lVar18 * 0x18 + 8) = 0;
      *(undefined4 *)(pFVar2 + lVar18 * 0x18 + 0x10) = 0x18;
      *(undefined4 *)(pFVar2 + lVar18 * 0x18 + 0x14) = 1;
      if ((*(longlong *)pFVar25 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar19 = (longlong *)
                (**(code **)(**(longlong **)pFVar25 + 0x60))(*(longlong **)pFVar25,local_1a8);
      *(double *)(pFVar2 + lVar18 * 0x18) =
           (double)*plVar19 * dVar9 - (this->EvaluationSettings).PlayerTimeOffset;
      if ((*(longlong *)pFVar25 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar20 = (**(code **)(**(longlong **)pFVar25 + 0x68))(*(longlong **)pFVar25,local_178);
      if (*(char *)(lVar20 + 0x18) != '\0') {
        if ((*(longlong *)pFVar25 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar21 = (FTimecode *)
                  (**(code **)(**(longlong **)pFVar25 + 0x68))(*(longlong **)pFVar25,local_15c);
        if (((char)pFVar21[1].Hours == '\0') &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar16 = FTimecode::ToFrameNumber(pFVar21,&local_1c8);
        fStack_1b4 = pFVar21->Subframe;
        if (::FFrameTime::MaxSubframe <= pFVar21->Subframe) {
          fStack_1b4 = ::FFrameTime::MaxSubframe;
        }
        local_1b8 = *(undefined4 *)CONCAT44(extraout_var,FVar16.Value);
        FStack_1b0 = (this->EvaluationSettings).FrameRate;
        if (fStack_1b4 <= 0.0) {
          fStack_1b4 = 0.0;
        }
        pFVar2 = pFVar2 + lVar18 * 0x18 + 8;
        *(undefined4 *)pFVar2 = local_1b8;
        *(float *)(pFVar2 + 4) = fStack_1b4;
        *(int *)(pFVar2 + 8) = FStack_1b0.Numerator;
        *(int *)(pFVar2 + 0xc) = FStack_1b0.Denominator;
        pFVar24 = local_1c0;
      }
    }
    pFVar25 = pFVar25 + 0x10;
  }
  cVar14 = (**(code **)(this->_padding_ + 0x40))(this);
  if (cVar14 == '\0') goto LAB_14d79a880;
  iVar1 = (this->Samples).ArrayNum;
  dVar5 = 0.0;
  dVar6 = 0.0;
  dVar7 = (double)local_res10;
  dVar8 = (double)(this->EvaluationSettings).FrameRate.Denominator /
          (double)(this->EvaluationSettings).FrameRate.Numerator - __real_3e45798ee0000000;
  if ((this->EvaluationSettings).EvaluationType == Timecode) {
    if ((iVar1 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar25 = (this->Samples).AllocatorInstance.Data;
    if ((*(longlong *)pFVar25 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar19 = *(longlong **)pFVar25;
    lVar18 = (**(code **)(*plVar19 + 0x68))(plVar19,local_140);
    dVar12 = __real_416312d000000000;
    dVar11 = __real_3fe0000000000000;
    if (*(char *)(lVar18 + 0x18) != '\0') {
      if (((this->Samples).ArrayNum < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar25 = (this->Samples).AllocatorInstance.Data;
      if ((*(longlong *)pFVar25 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar19 = *(longlong **)pFVar25;
      pFVar21 = (FTimecode *)(**(code **)(*plVar19 + 0x68))(plVar19,local_124);
      if (((char)pFVar21[1].Hours == '\0') &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FTimecode::ToFrameNumber(pFVar21,&local_res18);
      auVar27._0_8_ = (double)(this->EvaluationSettings).FrameRate.Numerator;
      auVar27._8_8_ = 0;
      auVar28._8_8_ = 0;
      auVar28._0_8_ =
           ((double)(this->EvaluationSettings).FrameRate.Denominator / auVar27._0_8_) *
           (double)local_res18.Numerator * dVar12 + dVar11;
      auVar28 = roundpd(auVar27,auVar28,1);
      dVar5 = (double)(longlong)auVar28._0_8_ * dVar9 + dVar8;
    }
    uVar22 = (this->CachedSamplesData).ArrayNum - 1;
    uVar17 = 0;
    if ((int)uVar22 < (this->Samples).ArrayNum) {
      uVar17 = ~uVar22 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar25 = (this->Samples).AllocatorInstance.Data;
    if ((*(longlong *)(pFVar25 + (longlong)(int)uVar22 * 0x10) == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar19 = *(longlong **)(pFVar25 + (longlong)(int)uVar22 * 0x10);
    lVar18 = (**(code **)(*plVar19 + 0x68))(plVar19,local_108);
    if (*(char *)(lVar18 + 0x18) != '\0') {
      uVar22 = (this->CachedSamplesData).ArrayNum - 1;
      uVar17 = 0;
      if ((int)uVar22 < (this->Samples).ArrayNum) {
        uVar17 = ~uVar22 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar25 = (this->Samples).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar25 + (longlong)(int)uVar22 * 0x10) == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar19 = *(longlong **)(pFVar25 + (longlong)(int)uVar22 * 0x10);
      pFVar21 = (FTimecode *)(**(code **)(*plVar19 + 0x68))(plVar19,local_ec);
      if (((char)pFVar21[1].Hours == '\0') &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar13)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FTimecode::ToFrameNumber(pFVar21,&local_res20);
      auVar29._0_8_ = (double)(this->EvaluationSettings).FrameRate.Numerator;
      auVar29._8_8_ = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = ((double)(this->EvaluationSettings).FrameRate.Denominator / auVar29._0_8_) *
                     (double)local_res20.Numerator * dVar12 + dVar11;
      auVar28 = roundpd(auVar29,auVar4,1);
      lVar18 = (longlong)auVar28._0_8_;
      goto LAB_14d79a7b9;
    }
  }
  else {
    if ((iVar1 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar25 = (this->Samples).AllocatorInstance.Data;
    if ((*(longlong *)pFVar25 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar19 = *(longlong **)pFVar25;
    plVar19 = (longlong *)(**(code **)(*plVar19 + 0x60))(plVar19,local_198);
    uVar22 = (this->CachedSamplesData).ArrayNum - 1;
    uVar17 = 0;
    if ((int)uVar22 < (this->Samples).ArrayNum) {
      uVar17 = ~uVar22 >> 0x1f;
    }
    dVar5 = (double)*plVar19 * dVar9 + dVar8;
    if ((uVar17 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar25 = (this->Samples).AllocatorInstance.Data;
    if ((*(longlong *)(pFVar25 + (longlong)(int)uVar22 * 0x10) == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar19 = *(longlong **)(pFVar25 + (longlong)(int)uVar22 * 0x10);
    plVar19 = (longlong *)(**(code **)(*plVar19 + 0x60))(plVar19,local_188);
    lVar18 = *plVar19;
LAB_14d79a7b9:
    dVar6 = (double)lVar18 * dVar9;
  }
  fVar26 = (float)(dVar5 - dVar7 * dVar9);
  (this->CachedEvaluationData).DistanceToNewestSampleSeconds = fVar26;
  if ((0.0 <= fVar26) && ((double)fVar26 <= dVar8)) {
    (this->CachedEvaluationData).DistanceToNewestSampleSeconds = 0.0;
    fVar26 = 0.0;
  }
  uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar10 = __real_322bcc77;
  fVar30 = (float)((uint)fVar26 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  (this->CachedEvaluationData).DistanceToOldestSampleSeconds = (float)(dVar7 * dVar9 - dVar6);
  if ((fVar10 < fVar30) && (fVar26 < 0.0)) {
    LOCK();
    this->BufferOverflow = (TAtomic<int>)((int)this->BufferOverflow + 1);
    UNLOCK();
  }
  fVar26 = (this->CachedEvaluationData).DistanceToOldestSampleSeconds;
  if ((fVar10 < (float)((uint)fVar26 & uVar17)) && (fVar26 < 0.0)) {
    LOCK();
    this->BufferUnderflow = (TAtomic<int>)((int)this->BufferUnderflow + 1);
    UNLOCK();
  }
LAB_14d79a880:
                    /* WARNING: Could not recover jumptable at 0x00014d79a8a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return;
}

// EnableChannel @ 14d7a3b00

void __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::EnableChannel
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this,ITimedDataInput *param_1,
          bool param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FModuleManager *pFVar5;
  IModuleInterface *pIVar6;
  FTimedDataInputCollection *pFVar7;
  FName local_res8;
  FName local_res10;
  
  if (param_1 == (ITimedDataInput *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Input",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Public\\MediaIOCoreSampleContainer.h"
                       ,0x89,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2 != this->bIsChannelEnabled) {
    this->bIsChannelEnabled = param_2;
    if (param_2) {
      (**(code **)((longlong)*param_1 + 0x58))(param_1,this);
      pFVar4 = ::FName::FName(&local_res8,L"TimeManagement");
      FVar1 = *pFVar4;
      pFVar5 = FModuleManager::Get();
      pIVar6 = FModuleManager::LoadModuleChecked(pFVar5,FVar1);
      pFVar7 = (FTimedDataInputCollection *)(**(code **)((longlong)*pIVar6 + 0x40))(pIVar6);
      FTimedDataInputCollection::Add(pFVar7,(ITimedDataInputChannel *)this);
      return;
    }
    pFVar4 = ::FName::FName(&local_res10,L"TimeManagement");
    FVar1 = *pFVar4;
    pFVar5 = FModuleManager::Get();
    pIVar6 = FModuleManager::LoadModuleChecked(pFVar5,FVar1);
    pFVar7 = (FTimedDataInputCollection *)(**(code **)((longlong)*pIVar6 + 0x40))(pIVar6);
    FTimedDataInputCollection::Remove(pFVar7,(ITimedDataInputChannel *)this);
    (**(code **)((longlong)*param_1 + 0x60))(param_1,this);
  }
  return;
}

// FetchSample @ 14d7a7020

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FMediaIOCoreSampleContainer<IMediaAudioSample>::FetchSample
          (FMediaIOCoreSampleContainer<IMediaAudioSample> *this,TRange<FTimespan> *param_1,
          TSharedPtr<IMediaAudioSample,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  IMediaAudioSample *pIVar4;
  longlong lVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  TRange<FTimespan> *local_res10;
  undefined1 local_68 [16];
  TRange<FTimespan> local_58;
  
  lpCriticalSection = &this->CriticalSection;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->Samples).ArrayNum;
  if (0 < iVar1) {
    uVar12 = iVar1 - 1;
    uVar10 = 0;
    if ((int)uVar12 < iVar1) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
    }
    pFVar2 = (this->Samples).AllocatorInstance.Data;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)(int)uVar12 * 0x10 + 8);
    pIVar4 = *(IMediaAudioSample **)(pFVar2 + (longlong)(int)uVar12 * 0x10);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pIVar4 != (IMediaAudioSample *)0x0) {
      plVar11 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x30))(pIVar4,local_68);
      lVar5 = *plVar11;
      plVar11 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x10))(pIVar4,local_res8);
      local_58.UpperBound.Value.Ticks = *plVar11 + lVar5;
      local_58.LowerBound.Type.Value = '\x01';
      local_58.UpperBound.Type.Value = '\0';
      local_58.LowerBound.Value.Ticks = lVar5;
      bVar8 = TRange<FTimespan>::Overlaps(local_res10,&local_58);
      if (bVar8) {
        TArray<TSharedPtr<IMediaAudioSample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->Samples,uVar12,Default);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar7 = (param_2->SharedReferenceCount).ReferenceController;
        param_2->Object = pIVar4;
        (param_2->SharedReferenceCount).ReferenceController = pTVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        bVar8 = true;
        goto LAB_14d7a717d;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  bVar8 = false;
LAB_14d7a717d:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar8;
}

// FetchSample @ 14d7a71d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FMediaIOCoreSampleContainer<IMediaBinarySample>::FetchSample
          (FMediaIOCoreSampleContainer<IMediaBinarySample> *this,TRange<FTimespan> *param_1,
          TSharedPtr<IMediaBinarySample,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  IMediaBinarySample *pIVar4;
  longlong lVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  TRange<FTimespan> *local_res10;
  undefined1 local_68 [16];
  TRange<FTimespan> local_58;
  
  lpCriticalSection = &this->CriticalSection;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->Samples).ArrayNum;
  if (0 < iVar1) {
    uVar12 = iVar1 - 1;
    uVar10 = 0;
    if ((int)uVar12 < iVar1) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
    }
    pFVar2 = (this->Samples).AllocatorInstance.Data;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)(int)uVar12 * 0x10 + 8);
    pIVar4 = *(IMediaBinarySample **)(pFVar2 + (longlong)(int)uVar12 * 0x10);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pIVar4 != (IMediaBinarySample *)0x0) {
      plVar11 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,local_68);
      lVar5 = *plVar11;
      plVar11 = (longlong *)(**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
      local_58.UpperBound.Value.Ticks = *plVar11 + lVar5;
      local_58.LowerBound.Type.Value = '\x01';
      local_58.UpperBound.Type.Value = '\0';
      local_58.LowerBound.Value.Ticks = lVar5;
      bVar8 = TRange<FTimespan>::Overlaps(local_res10,&local_58);
      if (bVar8) {
        TArray<TSharedPtr<IMediaBinarySample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->Samples,uVar12,Default);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar7 = (param_2->SharedReferenceCount).ReferenceController;
        param_2->Object = pIVar4;
        (param_2->SharedReferenceCount).ReferenceController = pTVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        bVar8 = true;
        goto LAB_14d7a732d;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  bVar8 = false;
LAB_14d7a732d:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar8;
}

// FetchSample @ 14d7a7380

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::FetchSample
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this,TRange<FTimespan> *param_1,
          TSharedPtr<IMediaOverlaySample,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  IMediaOverlaySample *pIVar4;
  longlong lVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  TRange<FTimespan> *local_res10;
  undefined1 local_68 [16];
  TRange<FTimespan> local_58;
  
  lpCriticalSection = &this->CriticalSection;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->Samples).ArrayNum;
  if (0 < iVar1) {
    uVar12 = iVar1 - 1;
    uVar10 = 0;
    if ((int)uVar12 < iVar1) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
    }
    pFVar2 = (this->Samples).AllocatorInstance.Data;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)(int)uVar12 * 0x10 + 8);
    pIVar4 = *(IMediaOverlaySample **)(pFVar2 + (longlong)(int)uVar12 * 0x10);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pIVar4 != (IMediaOverlaySample *)0x0) {
      plVar11 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,local_68);
      lVar5 = *plVar11;
      plVar11 = (longlong *)(**(code **)*pIVar4)(pIVar4,local_res8);
      local_58.UpperBound.Value.Ticks = *plVar11 + lVar5;
      local_58.LowerBound.Type.Value = '\x01';
      local_58.UpperBound.Type.Value = '\0';
      local_58.LowerBound.Value.Ticks = lVar5;
      bVar8 = TRange<FTimespan>::Overlaps(local_res10,&local_58);
      if (bVar8) {
        TArray<TSharedPtr<IMediaOverlaySample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->Samples,uVar12,Default);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar7 = (param_2->SharedReferenceCount).ReferenceController;
        param_2->Object = pIVar4;
        (param_2->SharedReferenceCount).ReferenceController = pTVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        bVar8 = true;
        goto LAB_14d7a74dc;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  bVar8 = false;
LAB_14d7a74dc:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar8;
}

// FetchSample @ 14d7a7530

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FMediaIOCoreSampleContainer<IMediaTextureSample>::FetchSample
          (FMediaIOCoreSampleContainer<IMediaTextureSample> *this,TRange<FTimespan> *param_1,
          TSharedPtr<IMediaTextureSample,1> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  IMediaTextureSample *pIVar4;
  longlong lVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  TRange<FTimespan> *local_res10;
  undefined1 local_68 [16];
  TRange<FTimespan> local_58;
  
  lpCriticalSection = &this->CriticalSection;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar1 = (this->Samples).ArrayNum;
  if (0 < iVar1) {
    uVar12 = iVar1 - 1;
    uVar10 = 0;
    if ((int)uVar12 < iVar1) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
    }
    pFVar2 = (this->Samples).AllocatorInstance.Data;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)(int)uVar12 * 0x10 + 8);
    pIVar4 = *(IMediaTextureSample **)(pFVar2 + (longlong)(int)uVar12 * 0x10);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pIVar4 != (IMediaTextureSample *)0x0) {
      plVar11 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x60))(pIVar4,local_68);
      lVar5 = *plVar11;
      plVar11 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,local_res8);
      local_58.UpperBound.Value.Ticks = *plVar11 + lVar5;
      local_58.LowerBound.Type.Value = '\x01';
      local_58.UpperBound.Type.Value = '\0';
      local_58.LowerBound.Value.Ticks = lVar5;
      bVar8 = TRange<FTimespan>::Overlaps(local_res10,&local_58);
      if (bVar8) {
        TArray<TSharedPtr<IMediaTextureSample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->Samples,uVar12,Default);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar7 = (param_2->SharedReferenceCount).ReferenceController;
        param_2->Object = pIVar4;
        (param_2->SharedReferenceCount).ReferenceController = pTVar3;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        bVar8 = true;
        goto LAB_14d7a768d;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  bVar8 = false;
LAB_14d7a768d:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar8;
}

// FlushSamples @ 14d7a7ae0

void __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::FlushSamples
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<TSharedPtr<IMediaOverlaySample,1>,int>
              ((TSharedPtr<IMediaOverlaySample,1> *)(this->Samples).AllocatorInstance.Data,
               (this->Samples).ArrayNum);
    piVar1 = &(this->Samples).ArrayMax;
    (this->Samples).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Samples).AllocatorInstance,0,piVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00014d7a7b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetBufferOverflowStat @ 14d7a9370

int __thiscall
FMediaIOCoreSampleContainer<IMediaAudioSample>::GetBufferOverflowStat
          (FMediaIOCoreSampleContainer<IMediaAudioSample> *this)

{
  return (int)this->BufferOverflow;
}

// GetBufferOverflowStat @ 14d7a9380

int __thiscall
FMediaIOCoreSampleContainer<IMediaBinarySample>::GetBufferOverflowStat
          (FMediaIOCoreSampleContainer<IMediaBinarySample> *this)

{
  return (int)this->BufferOverflow;
}

// GetBufferOverflowStat @ 14d7a9390

int __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::GetBufferOverflowStat
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this)

{
  return (int)this->BufferOverflow;
}

// GetBufferOverflowStat @ 14d7a93a0

int __thiscall
FMediaIOCoreSampleContainer<IMediaTextureSample>::GetBufferOverflowStat
          (FMediaIOCoreSampleContainer<IMediaTextureSample> *this)

{
  return (int)this->BufferOverflow;
}

// GetBufferUnderflowStat @ 14d7a9440

int __thiscall
FMediaIOCoreSampleContainer<IMediaAudioSample>::GetBufferUnderflowStat
          (FMediaIOCoreSampleContainer<IMediaAudioSample> *this)

{
  return (int)this->BufferUnderflow;
}

// GetBufferUnderflowStat @ 14d7a9450

int __thiscall
FMediaIOCoreSampleContainer<IMediaBinarySample>::GetBufferUnderflowStat
          (FMediaIOCoreSampleContainer<IMediaBinarySample> *this)

{
  return (int)this->BufferUnderflow;
}

// GetBufferUnderflowStat @ 14d7a9460

int __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::GetBufferUnderflowStat
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this)

{
  return (int)this->BufferUnderflow;
}

// GetBufferUnderflowStat @ 14d7a9470

int __thiscall
FMediaIOCoreSampleContainer<IMediaTextureSample>::GetBufferUnderflowStat
          (FMediaIOCoreSampleContainer<IMediaTextureSample> *this)

{
  return (int)this->BufferUnderflow;
}

// GetDataBufferSize @ 14d7a9d20

int __thiscall
FMediaIOCoreSampleContainer<IMediaAudioSample>::GetDataBufferSize
          (FMediaIOCoreSampleContainer<IMediaAudioSample> *this)

{
  return (this->EvaluationSettings).BufferSize;
}

// GetDataBufferSize @ 14d7a9d30

int __thiscall
FMediaIOCoreSampleContainer<IMediaBinarySample>::GetDataBufferSize
          (FMediaIOCoreSampleContainer<IMediaBinarySample> *this)

{
  return (this->EvaluationSettings).BufferSize;
}

// GetDataBufferSize @ 14d7a9d40

int __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::GetDataBufferSize
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this)

{
  return (this->EvaluationSettings).BufferSize;
}

// GetDataBufferSize @ 14d7a9d50

int __thiscall
FMediaIOCoreSampleContainer<IMediaTextureSample>::GetDataBufferSize
          (FMediaIOCoreSampleContainer<IMediaTextureSample> *this)

{
  return (this->EvaluationSettings).BufferSize;
}

// GetDataTimes @ 14d7a9d60

TArray<FTimedDataChannelSampleTime,TSizedDefaultAllocator<32>_> * __thiscall
FMediaIOCoreSampleContainer<IMediaAudioSample>::GetDataTimes
          (FMediaIOCoreSampleContainer<IMediaAudioSample> *this,
          TArray<FTimedDataChannelSampleTime,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->CachedSamplesData).ArrayNum;
  _Src = (this->CachedSamplesData).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x18);
  return __return_storage_ptr__;
}

// GetDataTimes @ 14d7a9df0

TArray<FTimedDataChannelSampleTime,TSizedDefaultAllocator<32>_> * __thiscall
FMediaIOCoreSampleContainer<IMediaBinarySample>::GetDataTimes
          (FMediaIOCoreSampleContainer<IMediaBinarySample> *this,
          TArray<FTimedDataChannelSampleTime,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->CachedSamplesData).ArrayNum;
  _Src = (this->CachedSamplesData).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x18);
  return __return_storage_ptr__;
}

// GetDataTimes @ 14d7a9e80

TArray<FTimedDataChannelSampleTime,TSizedDefaultAllocator<32>_> * __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::GetDataTimes
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this,
          TArray<FTimedDataChannelSampleTime,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->CachedSamplesData).ArrayNum;
  _Src = (this->CachedSamplesData).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x18);
  return __return_storage_ptr__;
}

// GetDataTimes @ 14d7a9f10

TArray<FTimedDataChannelSampleTime,TSizedDefaultAllocator<32>_> * __thiscall
FMediaIOCoreSampleContainer<IMediaTextureSample>::GetDataTimes
          (FMediaIOCoreSampleContainer<IMediaTextureSample> *this,
          TArray<FTimedDataChannelSampleTime,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->CachedSamplesData).ArrayNum;
  _Src = (this->CachedSamplesData).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x18);
  return __return_storage_ptr__;
}

// GetDisplayName @ 14d7aa180

FText * __thiscall
FMediaIOCoreSampleContainer<IMediaAudioSample>::GetDisplayName
          (FMediaIOCoreSampleContainer<IMediaAudioSample> *this,FText *__return_storage_ptr__)

{
  FText::FromName(__return_storage_ptr__,&this->ChannelName);
  return __return_storage_ptr__;
}

// GetDisplayName @ 14d7aa1b0

FText * __thiscall
FMediaIOCoreSampleContainer<IMediaBinarySample>::GetDisplayName
          (FMediaIOCoreSampleContainer<IMediaBinarySample> *this,FText *__return_storage_ptr__)

{
  FText::FromName(__return_storage_ptr__,&this->ChannelName);
  return __return_storage_ptr__;
}

// GetDisplayName @ 14d7aa1e0

FText * __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::GetDisplayName
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this,FText *__return_storage_ptr__)

{
  FText::FromName(__return_storage_ptr__,&this->ChannelName);
  return __return_storage_ptr__;
}

// GetDisplayName @ 14d7aa210

FText * __thiscall
FMediaIOCoreSampleContainer<IMediaTextureSample>::GetDisplayName
          (FMediaIOCoreSampleContainer<IMediaTextureSample> *this,FText *__return_storage_ptr__)

{
  FText::FromName(__return_storage_ptr__,&this->ChannelName);
  return __return_storage_ptr__;
}

// GetFrameDroppedStat @ 14d7aa850

int __thiscall
FMediaIOCoreSampleContainer<IMediaAudioSample>::GetFrameDroppedStat
          (FMediaIOCoreSampleContainer<IMediaAudioSample> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TAtomic<int> TVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TVar1 = this->FrameDrop;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (int)TVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetFrameDroppedStat @ 14d7aa8a0

int __thiscall
FMediaIOCoreSampleContainer<IMediaBinarySample>::GetFrameDroppedStat
          (FMediaIOCoreSampleContainer<IMediaBinarySample> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TAtomic<int> TVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TVar1 = this->FrameDrop;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (int)TVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetFrameDroppedStat @ 14d7aa8f0

int __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::GetFrameDroppedStat
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TAtomic<int> TVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TVar1 = this->FrameDrop;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (int)TVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetFrameDroppedStat @ 14d7aa940

int __thiscall
FMediaIOCoreSampleContainer<IMediaTextureSample>::GetFrameDroppedStat
          (FMediaIOCoreSampleContainer<IMediaTextureSample> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TAtomic<int> TVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TVar1 = this->FrameDrop;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return (int)TVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetLastEvaluationData @ 14d7ab1c0

void __thiscall
FMediaIOCoreSampleContainer<IMediaAudioSample>::GetLastEvaluationData
          (FMediaIOCoreSampleContainer<IMediaAudioSample> *this,
          FTimedDataInputEvaluationData *param_1)

{
  *param_1 = this->CachedEvaluationData;
  return;
}

// GetLastEvaluationData @ 14d7ab1d0

void __thiscall
FMediaIOCoreSampleContainer<IMediaBinarySample>::GetLastEvaluationData
          (FMediaIOCoreSampleContainer<IMediaBinarySample> *this,
          FTimedDataInputEvaluationData *param_1)

{
  *param_1 = this->CachedEvaluationData;
  return;
}

// GetLastEvaluationData @ 14d7ab1e0

void __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::GetLastEvaluationData
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this,
          FTimedDataInputEvaluationData *param_1)

{
  *param_1 = this->CachedEvaluationData;
  return;
}

// GetLastEvaluationData @ 14d7ab1f0

void __thiscall
FMediaIOCoreSampleContainer<IMediaTextureSample>::GetLastEvaluationData
          (FMediaIOCoreSampleContainer<IMediaTextureSample> *this,
          FTimedDataInputEvaluationData *param_1)

{
  *param_1 = this->CachedEvaluationData;
  return;
}

// GetNewestDataTime @ 14d7abd30

FTimedDataChannelSampleTime * __thiscall
FMediaIOCoreSampleContainer<IMediaAudioSample>::GetNewestDataTime
          (FMediaIOCoreSampleContainer<IMediaAudioSample> *this,
          FTimedDataChannelSampleTime *__return_storage_ptr__)

{
  FFrameRate FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FTimedDataChannelSampleTime *pFVar7;
  int iVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  double dVar12;
  int iStack_40;
  float fStack_3c;
  
  iVar5 = (this->CachedSamplesData).ArrayNum;
  if (iVar5 == 0) {
    (__return_storage_ptr__->Timecode).Rate.Numerator = 0x18;
    __return_storage_ptr__->PlatformSecond = 0.0;
    (__return_storage_ptr__->Timecode).Time.FrameNumber = 0;
    (__return_storage_ptr__->Timecode).Time.SubFrame = 0.0;
    (__return_storage_ptr__->Timecode).Rate.Denominator = 1;
    return __return_storage_ptr__;
  }
  fVar11 = ::FFrameTime::MaxSubframe;
  if (__real_3f7d70a4 <= ::FFrameTime::MaxSubframe) {
    fVar11 = __real_3f7d70a4;
  }
  dVar12 = (double)(this->EvaluationSettings).FrameRate.Denominator /
           (double)(this->EvaluationSettings).FrameRate.Numerator - __real_3e45798ee0000000;
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  if (iVar5 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FTimedDataChannelSampleTime *)(*pcVar3)();
      return pFVar7;
    }
  }
  pFVar2 = (this->CachedSamplesData).AllocatorInstance.Data;
  FVar1 = *(FFrameRate *)(pFVar2 + 0x10);
  fStack_3c = (float)((ulonglong)*(double *)(pFVar2 + 8) >> 0x20);
  fVar11 = fVar11 + fStack_3c;
  iVar5 = (int)ROUND(fVar11 * __real_40000000 - __real_3f000000) >> 1;
  iStack_40 = SUB84(*(double *)(pFVar2 + 8),0);
  iVar8 = (int)fVar11;
  fVar9 = fVar11;
  if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar11)) {
    auVar10._4_4_ = fVar11;
    auVar10._0_4_ = fVar11;
    auVar10._8_8_ = 0;
    uVar6 = movmskps(iVar5,auVar10);
    fVar9 = (float)(int)(iVar8 - (uVar6 & 1));
  }
  __return_storage_ptr__->PlatformSecond = *(double *)pFVar2 + dVar12;
  (__return_storage_ptr__->Timecode).Time.FrameNumber.Value = iStack_40 + iVar5;
  (__return_storage_ptr__->Timecode).Time.SubFrame = fVar11 - fVar9;
  (__return_storage_ptr__->Timecode).Rate = FVar1;
  return __return_storage_ptr__;
}

// GetNewestDataTime @ 14d7abe90

FTimedDataChannelSampleTime * __thiscall
FMediaIOCoreSampleContainer<IMediaBinarySample>::GetNewestDataTime
          (FMediaIOCoreSampleContainer<IMediaBinarySample> *this,
          FTimedDataChannelSampleTime *__return_storage_ptr__)

{
  FFrameRate FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FTimedDataChannelSampleTime *pFVar7;
  int iVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  double dVar12;
  int iStack_40;
  float fStack_3c;
  
  iVar5 = (this->CachedSamplesData).ArrayNum;
  if (iVar5 == 0) {
    (__return_storage_ptr__->Timecode).Rate.Numerator = 0x18;
    __return_storage_ptr__->PlatformSecond = 0.0;
    (__return_storage_ptr__->Timecode).Time.FrameNumber = 0;
    (__return_storage_ptr__->Timecode).Time.SubFrame = 0.0;
    (__return_storage_ptr__->Timecode).Rate.Denominator = 1;
    return __return_storage_ptr__;
  }
  fVar11 = ::FFrameTime::MaxSubframe;
  if (__real_3f7d70a4 <= ::FFrameTime::MaxSubframe) {
    fVar11 = __real_3f7d70a4;
  }
  dVar12 = (double)(this->EvaluationSettings).FrameRate.Denominator /
           (double)(this->EvaluationSettings).FrameRate.Numerator - __real_3e45798ee0000000;
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  if (iVar5 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FTimedDataChannelSampleTime *)(*pcVar3)();
      return pFVar7;
    }
  }
  pFVar2 = (this->CachedSamplesData).AllocatorInstance.Data;
  FVar1 = *(FFrameRate *)(pFVar2 + 0x10);
  fStack_3c = (float)((ulonglong)*(double *)(pFVar2 + 8) >> 0x20);
  fVar11 = fVar11 + fStack_3c;
  iVar5 = (int)ROUND(fVar11 * __real_40000000 - __real_3f000000) >> 1;
  iStack_40 = SUB84(*(double *)(pFVar2 + 8),0);
  iVar8 = (int)fVar11;
  fVar9 = fVar11;
  if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar11)) {
    auVar10._4_4_ = fVar11;
    auVar10._0_4_ = fVar11;
    auVar10._8_8_ = 0;
    uVar6 = movmskps(iVar5,auVar10);
    fVar9 = (float)(int)(iVar8 - (uVar6 & 1));
  }
  __return_storage_ptr__->PlatformSecond = *(double *)pFVar2 + dVar12;
  (__return_storage_ptr__->Timecode).Time.FrameNumber.Value = iStack_40 + iVar5;
  (__return_storage_ptr__->Timecode).Time.SubFrame = fVar11 - fVar9;
  (__return_storage_ptr__->Timecode).Rate = FVar1;
  return __return_storage_ptr__;
}

// GetNewestDataTime @ 14d7abff0

FTimedDataChannelSampleTime * __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::GetNewestDataTime
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this,
          FTimedDataChannelSampleTime *__return_storage_ptr__)

{
  FFrameRate FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FTimedDataChannelSampleTime *pFVar7;
  int iVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  double dVar12;
  int iStack_40;
  float fStack_3c;
  
  iVar5 = (this->CachedSamplesData).ArrayNum;
  if (iVar5 == 0) {
    (__return_storage_ptr__->Timecode).Rate.Numerator = 0x18;
    __return_storage_ptr__->PlatformSecond = 0.0;
    (__return_storage_ptr__->Timecode).Time.FrameNumber = 0;
    (__return_storage_ptr__->Timecode).Time.SubFrame = 0.0;
    (__return_storage_ptr__->Timecode).Rate.Denominator = 1;
    return __return_storage_ptr__;
  }
  fVar11 = ::FFrameTime::MaxSubframe;
  if (__real_3f7d70a4 <= ::FFrameTime::MaxSubframe) {
    fVar11 = __real_3f7d70a4;
  }
  dVar12 = (double)(this->EvaluationSettings).FrameRate.Denominator /
           (double)(this->EvaluationSettings).FrameRate.Numerator - __real_3e45798ee0000000;
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  if (iVar5 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FTimedDataChannelSampleTime *)(*pcVar3)();
      return pFVar7;
    }
  }
  pFVar2 = (this->CachedSamplesData).AllocatorInstance.Data;
  FVar1 = *(FFrameRate *)(pFVar2 + 0x10);
  fStack_3c = (float)((ulonglong)*(double *)(pFVar2 + 8) >> 0x20);
  fVar11 = fVar11 + fStack_3c;
  iVar5 = (int)ROUND(fVar11 * __real_40000000 - __real_3f000000) >> 1;
  iStack_40 = SUB84(*(double *)(pFVar2 + 8),0);
  iVar8 = (int)fVar11;
  fVar9 = fVar11;
  if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar11)) {
    auVar10._4_4_ = fVar11;
    auVar10._0_4_ = fVar11;
    auVar10._8_8_ = 0;
    uVar6 = movmskps(iVar5,auVar10);
    fVar9 = (float)(int)(iVar8 - (uVar6 & 1));
  }
  __return_storage_ptr__->PlatformSecond = *(double *)pFVar2 + dVar12;
  (__return_storage_ptr__->Timecode).Time.FrameNumber.Value = iStack_40 + iVar5;
  (__return_storage_ptr__->Timecode).Time.SubFrame = fVar11 - fVar9;
  (__return_storage_ptr__->Timecode).Rate = FVar1;
  return __return_storage_ptr__;
}

// GetNewestDataTime @ 14d7ac150

FTimedDataChannelSampleTime * __thiscall
FMediaIOCoreSampleContainer<IMediaTextureSample>::GetNewestDataTime
          (FMediaIOCoreSampleContainer<IMediaTextureSample> *this,
          FTimedDataChannelSampleTime *__return_storage_ptr__)

{
  FFrameRate FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FTimedDataChannelSampleTime *pFVar7;
  int iVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  double dVar12;
  int iStack_40;
  float fStack_3c;
  
  iVar5 = (this->CachedSamplesData).ArrayNum;
  if (iVar5 == 0) {
    (__return_storage_ptr__->Timecode).Rate.Numerator = 0x18;
    __return_storage_ptr__->PlatformSecond = 0.0;
    (__return_storage_ptr__->Timecode).Time.FrameNumber = 0;
    (__return_storage_ptr__->Timecode).Time.SubFrame = 0.0;
    (__return_storage_ptr__->Timecode).Rate.Denominator = 1;
    return __return_storage_ptr__;
  }
  fVar11 = ::FFrameTime::MaxSubframe;
  if (__real_3f7d70a4 <= ::FFrameTime::MaxSubframe) {
    fVar11 = __real_3f7d70a4;
  }
  dVar12 = (double)(this->EvaluationSettings).FrameRate.Denominator /
           (double)(this->EvaluationSettings).FrameRate.Numerator - __real_3e45798ee0000000;
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  if (iVar5 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FTimedDataChannelSampleTime *)(*pcVar3)();
      return pFVar7;
    }
  }
  pFVar2 = (this->CachedSamplesData).AllocatorInstance.Data;
  FVar1 = *(FFrameRate *)(pFVar2 + 0x10);
  fStack_3c = (float)((ulonglong)*(double *)(pFVar2 + 8) >> 0x20);
  fVar11 = fVar11 + fStack_3c;
  iVar5 = (int)ROUND(fVar11 * __real_40000000 - __real_3f000000) >> 1;
  iStack_40 = SUB84(*(double *)(pFVar2 + 8),0);
  iVar8 = (int)fVar11;
  fVar9 = fVar11;
  if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar11)) {
    auVar10._4_4_ = fVar11;
    auVar10._0_4_ = fVar11;
    auVar10._8_8_ = 0;
    uVar6 = movmskps(iVar5,auVar10);
    fVar9 = (float)(int)(iVar8 - (uVar6 & 1));
  }
  __return_storage_ptr__->PlatformSecond = *(double *)pFVar2 + dVar12;
  (__return_storage_ptr__->Timecode).Time.FrameNumber.Value = iStack_40 + iVar5;
  (__return_storage_ptr__->Timecode).Time.SubFrame = fVar11 - fVar9;
  (__return_storage_ptr__->Timecode).Rate = FVar1;
  return __return_storage_ptr__;
}

// GetNumberOfSamples @ 14d7ac310

int __thiscall
FMediaIOCoreSampleContainer<IMediaAudioSample>::GetNumberOfSamples
          (FMediaIOCoreSampleContainer<IMediaAudioSample> *this)

{
  return (this->CachedSamplesData).ArrayNum;
}

// GetNumberOfSamples @ 14d7ac320

int __thiscall
FMediaIOCoreSampleContainer<IMediaBinarySample>::GetNumberOfSamples
          (FMediaIOCoreSampleContainer<IMediaBinarySample> *this)

{
  return (this->CachedSamplesData).ArrayNum;
}

// GetNumberOfSamples @ 14d7ac330

int __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::GetNumberOfSamples
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this)

{
  return (this->CachedSamplesData).ArrayNum;
}

// GetNumberOfSamples @ 14d7ac340

int __thiscall
FMediaIOCoreSampleContainer<IMediaTextureSample>::GetNumberOfSamples
          (FMediaIOCoreSampleContainer<IMediaTextureSample> *this)

{
  return (this->CachedSamplesData).ArrayNum;
}

// GetOldestDataTime @ 14d7ac510

FTimedDataChannelSampleTime * __thiscall
FMediaIOCoreSampleContainer<IMediaAudioSample>::GetOldestDataTime
          (FMediaIOCoreSampleContainer<IMediaAudioSample> *this,
          FTimedDataChannelSampleTime *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FFrameTime FVar5;
  bool bVar6;
  FTimedDataChannelSampleTime *pFVar7;
  uint uVar8;
  uint uVar9;
  
  iVar2 = (this->CachedSamplesData).ArrayNum;
  if (iVar2 == 0) {
    __return_storage_ptr__->PlatformSecond = 0.0;
    (__return_storage_ptr__->Timecode).Time.FrameNumber = 0;
    (__return_storage_ptr__->Timecode).Time.SubFrame = 0.0;
    (__return_storage_ptr__->Timecode).Rate.Numerator = 0x18;
    (__return_storage_ptr__->Timecode).Rate.Denominator = 1;
    return __return_storage_ptr__;
  }
  uVar9 = iVar2 - 1;
  uVar8 = 0;
  if ((int)uVar9 < iVar2) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FTimedDataChannelSampleTime *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar3 = (this->CachedSamplesData).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(int)uVar9 * 0x18;
  FVar5 = *(FFrameTime *)(pFVar1 + 8);
  __return_storage_ptr__->PlatformSecond = *(double *)pFVar1;
  (__return_storage_ptr__->Timecode).Time = FVar5;
  (__return_storage_ptr__->Timecode).Rate =
       *(FFrameRate *)(pFVar3 + (longlong)(int)uVar9 * 0x18 + 0x10);
  return __return_storage_ptr__;
}

// GetOldestDataTime @ 14d7ac5d0

FTimedDataChannelSampleTime * __thiscall
FMediaIOCoreSampleContainer<IMediaBinarySample>::GetOldestDataTime
          (FMediaIOCoreSampleContainer<IMediaBinarySample> *this,
          FTimedDataChannelSampleTime *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FFrameTime FVar5;
  bool bVar6;
  FTimedDataChannelSampleTime *pFVar7;
  uint uVar8;
  uint uVar9;
  
  iVar2 = (this->CachedSamplesData).ArrayNum;
  if (iVar2 == 0) {
    __return_storage_ptr__->PlatformSecond = 0.0;
    (__return_storage_ptr__->Timecode).Time.FrameNumber = 0;
    (__return_storage_ptr__->Timecode).Time.SubFrame = 0.0;
    (__return_storage_ptr__->Timecode).Rate.Numerator = 0x18;
    (__return_storage_ptr__->Timecode).Rate.Denominator = 1;
    return __return_storage_ptr__;
  }
  uVar9 = iVar2 - 1;
  uVar8 = 0;
  if ((int)uVar9 < iVar2) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FTimedDataChannelSampleTime *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar3 = (this->CachedSamplesData).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(int)uVar9 * 0x18;
  FVar5 = *(FFrameTime *)(pFVar1 + 8);
  __return_storage_ptr__->PlatformSecond = *(double *)pFVar1;
  (__return_storage_ptr__->Timecode).Time = FVar5;
  (__return_storage_ptr__->Timecode).Rate =
       *(FFrameRate *)(pFVar3 + (longlong)(int)uVar9 * 0x18 + 0x10);
  return __return_storage_ptr__;
}

// GetOldestDataTime @ 14d7ac690

FTimedDataChannelSampleTime * __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::GetOldestDataTime
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this,
          FTimedDataChannelSampleTime *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FFrameTime FVar5;
  bool bVar6;
  FTimedDataChannelSampleTime *pFVar7;
  uint uVar8;
  uint uVar9;
  
  iVar2 = (this->CachedSamplesData).ArrayNum;
  if (iVar2 == 0) {
    __return_storage_ptr__->PlatformSecond = 0.0;
    (__return_storage_ptr__->Timecode).Time.FrameNumber = 0;
    (__return_storage_ptr__->Timecode).Time.SubFrame = 0.0;
    (__return_storage_ptr__->Timecode).Rate.Numerator = 0x18;
    (__return_storage_ptr__->Timecode).Rate.Denominator = 1;
    return __return_storage_ptr__;
  }
  uVar9 = iVar2 - 1;
  uVar8 = 0;
  if ((int)uVar9 < iVar2) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FTimedDataChannelSampleTime *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar3 = (this->CachedSamplesData).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(int)uVar9 * 0x18;
  FVar5 = *(FFrameTime *)(pFVar1 + 8);
  __return_storage_ptr__->PlatformSecond = *(double *)pFVar1;
  (__return_storage_ptr__->Timecode).Time = FVar5;
  (__return_storage_ptr__->Timecode).Rate =
       *(FFrameRate *)(pFVar3 + (longlong)(int)uVar9 * 0x18 + 0x10);
  return __return_storage_ptr__;
}

// GetOldestDataTime @ 14d7ac750

FTimedDataChannelSampleTime * __thiscall
FMediaIOCoreSampleContainer<IMediaTextureSample>::GetOldestDataTime
          (FMediaIOCoreSampleContainer<IMediaTextureSample> *this,
          FTimedDataChannelSampleTime *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FFrameTime FVar5;
  bool bVar6;
  FTimedDataChannelSampleTime *pFVar7;
  uint uVar8;
  uint uVar9;
  
  iVar2 = (this->CachedSamplesData).ArrayNum;
  if (iVar2 == 0) {
    __return_storage_ptr__->PlatformSecond = 0.0;
    (__return_storage_ptr__->Timecode).Time.FrameNumber = 0;
    (__return_storage_ptr__->Timecode).Time.SubFrame = 0.0;
    (__return_storage_ptr__->Timecode).Rate.Numerator = 0x18;
    (__return_storage_ptr__->Timecode).Rate.Denominator = 1;
    return __return_storage_ptr__;
  }
  uVar9 = iVar2 - 1;
  uVar8 = 0;
  if ((int)uVar9 < iVar2) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FTimedDataChannelSampleTime *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar3 = (this->CachedSamplesData).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(int)uVar9 * 0x18;
  FVar5 = *(FFrameTime *)(pFVar1 + 8);
  __return_storage_ptr__->PlatformSecond = *(double *)pFVar1;
  (__return_storage_ptr__->Timecode).Time = FVar5;
  (__return_storage_ptr__->Timecode).Rate =
       *(FFrameRate *)(pFVar3 + (longlong)(int)uVar9 * 0x18 + 0x10);
  return __return_storage_ptr__;
}

// GetState @ 14d7adfc0

ETimedDataInputState __thiscall
FMediaIOCoreSampleContainer<IMediaAudioSample>::GetState
          (FMediaIOCoreSampleContainer<IMediaAudioSample> *this)

{
  return Connected;
}

// GetState @ 14d7adfd0

ETimedDataInputState __thiscall
FMediaIOCoreSampleContainer<IMediaBinarySample>::GetState
          (FMediaIOCoreSampleContainer<IMediaBinarySample> *this)

{
  return Connected;
}

// GetState @ 14d7adfe0

ETimedDataInputState __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::GetState
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this)

{
  return Connected;
}

// GetState @ 14d7adff0

ETimedDataInputState __thiscall
FMediaIOCoreSampleContainer<IMediaTextureSample>::GetState
          (FMediaIOCoreSampleContainer<IMediaTextureSample> *this)

{
  return Connected;
}

// IsBufferStatsEnabled @ 14d7b15d0

bool __thiscall
FMediaIOCoreSampleContainer<IMediaAudioSample>::IsBufferStatsEnabled
          (FMediaIOCoreSampleContainer<IMediaAudioSample> *this)

{
  return this->bIsStatEnabled;
}

// IsBufferStatsEnabled @ 14d7b15e0

bool __thiscall
FMediaIOCoreSampleContainer<IMediaBinarySample>::IsBufferStatsEnabled
          (FMediaIOCoreSampleContainer<IMediaBinarySample> *this)

{
  return this->bIsStatEnabled;
}

// IsBufferStatsEnabled @ 14d7b15f0

bool __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::IsBufferStatsEnabled
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this)

{
  return this->bIsStatEnabled;
}

// IsBufferStatsEnabled @ 14d7b1600

bool __thiscall
FMediaIOCoreSampleContainer<IMediaTextureSample>::IsBufferStatsEnabled
          (FMediaIOCoreSampleContainer<IMediaTextureSample> *this)

{
  return this->bIsStatEnabled;
}

// ResetBufferStats @ 14d7baf50

void __thiscall
FMediaIOCoreSampleContainer<IMediaAudioSample>::ResetBufferStats
          (FMediaIOCoreSampleContainer<IMediaAudioSample> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LOCK();
    this->BufferUnderflow = (TAtomic<int>)0x0;
    UNLOCK();
    LOCK();
    this->BufferOverflow = (TAtomic<int>)0x0;
    UNLOCK();
    LOCK();
    this->FrameDrop = (TAtomic<int>)0x0;
    UNLOCK();
    (this->CachedEvaluationData).DistanceToNewestSampleSeconds = 0.0;
    (this->CachedEvaluationData).DistanceToOldestSampleSeconds = 0.0;
                    /* WARNING: Could not recover jumptable at 0x00014d7baf91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ResetBufferStats @ 14d7bafb0

void __thiscall
FMediaIOCoreSampleContainer<IMediaBinarySample>::ResetBufferStats
          (FMediaIOCoreSampleContainer<IMediaBinarySample> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LOCK();
    this->BufferUnderflow = (TAtomic<int>)0x0;
    UNLOCK();
    LOCK();
    this->BufferOverflow = (TAtomic<int>)0x0;
    UNLOCK();
    LOCK();
    this->FrameDrop = (TAtomic<int>)0x0;
    UNLOCK();
    (this->CachedEvaluationData).DistanceToNewestSampleSeconds = 0.0;
    (this->CachedEvaluationData).DistanceToOldestSampleSeconds = 0.0;
                    /* WARNING: Could not recover jumptable at 0x00014d7baff1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ResetBufferStats @ 14d7bb010

void __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::ResetBufferStats
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LOCK();
    this->BufferUnderflow = (TAtomic<int>)0x0;
    UNLOCK();
    LOCK();
    this->BufferOverflow = (TAtomic<int>)0x0;
    UNLOCK();
    LOCK();
    this->FrameDrop = (TAtomic<int>)0x0;
    UNLOCK();
    (this->CachedEvaluationData).DistanceToNewestSampleSeconds = 0.0;
    (this->CachedEvaluationData).DistanceToOldestSampleSeconds = 0.0;
                    /* WARNING: Could not recover jumptable at 0x00014d7bb051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ResetBufferStats @ 14d7bb070

void __thiscall
FMediaIOCoreSampleContainer<IMediaTextureSample>::ResetBufferStats
          (FMediaIOCoreSampleContainer<IMediaTextureSample> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LOCK();
    this->BufferUnderflow = (TAtomic<int>)0x0;
    UNLOCK();
    LOCK();
    this->BufferOverflow = (TAtomic<int>)0x0;
    UNLOCK();
    LOCK();
    this->FrameDrop = (TAtomic<int>)0x0;
    UNLOCK();
    (this->CachedEvaluationData).DistanceToNewestSampleSeconds = 0.0;
    (this->CachedEvaluationData).DistanceToOldestSampleSeconds = 0.0;
                    /* WARNING: Could not recover jumptable at 0x00014d7bb0b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetBufferStatsEnabled @ 14d7bbdc0

void __thiscall
FMediaIOCoreSampleContainer<IMediaAudioSample>::SetBufferStatsEnabled
          (FMediaIOCoreSampleContainer<IMediaAudioSample> *this,bool param_1)

{
  if ((param_1) && (this->bIsStatEnabled == false)) {
    (**(code **)(this->_padding_ + 0x70))();
    this->bIsStatEnabled = true;
    return;
  }
  this->bIsStatEnabled = param_1;
  return;
}

// SetBufferStatsEnabled @ 14d7bbe10

void __thiscall
FMediaIOCoreSampleContainer<IMediaBinarySample>::SetBufferStatsEnabled
          (FMediaIOCoreSampleContainer<IMediaBinarySample> *this,bool param_1)

{
  if ((param_1) && (this->bIsStatEnabled == false)) {
    (**(code **)(this->_padding_ + 0x70))();
    this->bIsStatEnabled = true;
    return;
  }
  this->bIsStatEnabled = param_1;
  return;
}

// SetBufferStatsEnabled @ 14d7bbe60

void __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::SetBufferStatsEnabled
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this,bool param_1)

{
  if ((param_1) && (this->bIsStatEnabled == false)) {
    (**(code **)(this->_padding_ + 0x70))();
    this->bIsStatEnabled = true;
    return;
  }
  this->bIsStatEnabled = param_1;
  return;
}

// SetBufferStatsEnabled @ 14d7bbeb0

void __thiscall
FMediaIOCoreSampleContainer<IMediaTextureSample>::SetBufferStatsEnabled
          (FMediaIOCoreSampleContainer<IMediaTextureSample> *this,bool param_1)

{
  if ((param_1) && (this->bIsStatEnabled == false)) {
    (**(code **)(this->_padding_ + 0x70))();
    this->bIsStatEnabled = true;
    return;
  }
  this->bIsStatEnabled = param_1;
  return;
}

// SetDataBufferSize @ 14d7bc210

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMediaIOCoreSampleContainer<IMediaAudioSample>::SetDataBufferSize
          (FMediaIOCoreSampleContainer<IMediaAudioSample> *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->EvaluationSettings).AbsoluteMaxBufferSize;
    if (param_1 < iVar1) {
      iVar1 = param_1;
    }
    iVar3 = 1;
    if (1 < iVar1) {
      iVar3 = iVar1;
    }
    uVar2 = (this->Samples).ArrayNum - iVar3;
    (this->EvaluationSettings).BufferSize = iVar3;
    if (0 < (int)uVar2) {
      uVar4 = (ulonglong)uVar2;
      do {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        iVar1 = (this->Samples).ArrayNum;
        if (0 < iVar1) {
          TArray<TSharedPtr<IMediaAudioSample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->Samples,iVar1 + -1,Default);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00014d7bc2a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetDataBufferSize @ 14d7bc2c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMediaIOCoreSampleContainer<IMediaBinarySample>::SetDataBufferSize
          (FMediaIOCoreSampleContainer<IMediaBinarySample> *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->EvaluationSettings).AbsoluteMaxBufferSize;
    if (param_1 < iVar1) {
      iVar1 = param_1;
    }
    iVar3 = 1;
    if (1 < iVar1) {
      iVar3 = iVar1;
    }
    uVar2 = (this->Samples).ArrayNum - iVar3;
    (this->EvaluationSettings).BufferSize = iVar3;
    if (0 < (int)uVar2) {
      uVar4 = (ulonglong)uVar2;
      do {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        iVar1 = (this->Samples).ArrayNum;
        if (0 < iVar1) {
          TArray<TSharedPtr<IMediaBinarySample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->Samples,iVar1 + -1,Default);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00014d7bc355. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetDataBufferSize @ 14d7bc370

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMediaIOCoreSampleContainer<IMediaOverlaySample>::SetDataBufferSize
          (FMediaIOCoreSampleContainer<IMediaOverlaySample> *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->EvaluationSettings).AbsoluteMaxBufferSize;
    if (param_1 < iVar1) {
      iVar1 = param_1;
    }
    iVar3 = 1;
    if (1 < iVar1) {
      iVar3 = iVar1;
    }
    uVar2 = (this->Samples).ArrayNum - iVar3;
    (this->EvaluationSettings).BufferSize = iVar3;
    if (0 < (int)uVar2) {
      uVar4 = (ulonglong)uVar2;
      do {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        iVar1 = (this->Samples).ArrayNum;
        if (0 < iVar1) {
          TArray<TSharedPtr<IMediaOverlaySample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->Samples,iVar1 + -1,Default);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00014d7bc405. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// SetDataBufferSize @ 14d7bc420

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMediaIOCoreSampleContainer<IMediaTextureSample>::SetDataBufferSize
          (FMediaIOCoreSampleContainer<IMediaTextureSample> *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (this->EvaluationSettings).AbsoluteMaxBufferSize;
    if (param_1 < iVar1) {
      iVar1 = param_1;
    }
    iVar3 = 1;
    if (1 < iVar1) {
      iVar3 = iVar1;
    }
    uVar2 = (this->Samples).ArrayNum - iVar3;
    (this->EvaluationSettings).BufferSize = iVar3;
    if (0 < (int)uVar2) {
      uVar4 = (ulonglong)uVar2;
      do {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        iVar1 = (this->Samples).ArrayNum;
        if (0 < iVar1) {
          TArray<TSharedPtr<IMediaTextureSample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->Samples,iVar1 + -1,Default);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00014d7bc4b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

