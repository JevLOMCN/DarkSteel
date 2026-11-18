// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 15

// ~TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_> @ 14ea96910

void __thiscall
TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_>::
~TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_>
          (TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__TMediaSampleSink<IMediaAudioSample>__;
  this->_padding_ = (longlong)&_vftable__for__TMediaSampleSource<IMediaAudioSample>__;
  DestructItems<TSharedPtr<IMediaAudioSample,1>,int>
            ((TSharedPtr<IMediaAudioSample,1> *)(this->Samples).AllocatorInstance.Data,
             (this->Samples).ArrayNum);
  pFVar1 = (this->Samples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  this->_padding_ = (longlong)&___7__TMediaSampleSource_VIMediaAudioSample____6B_;
  this->_padding_ = (longlong)&___7__TMediaSampleSink_VIMediaAudioSample____6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  return;
}

// CanAcceptSamples @ 14eaa1070

bool __thiscall
TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_>::CanAcceptSamples
          (TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_> *this,
          int param_1)

{
  if ((-1 < this->MaxSamplesInQueue) &&
     (this->MaxSamplesInQueue < (this->Samples).ArrayNum + param_1)) {
    return false;
  }
  return true;
}

// Dequeue @ 14eaa7a70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_>::Dequeue
          (TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_> *this,
          TSharedPtr<IMediaAudioSample,1> *param_1)

{
  longlong *lpCriticalSection;
  longlong *plVar1;
  IMediaAudioSample *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  atomic<int> *paVar8;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CriticalSection).CriticalSection.Opaque2[0] == 0) {
    bVar6 = false;
  }
  else {
    if ((this->CriticalSection).CriticalSection.Opaque2[0] < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    plVar1 = (this->CriticalSection).CriticalSection.Opaque1[0];
    pIVar2 = (IMediaAudioSample *)*plVar1;
    pTVar3 = (TReferenceControllerBase<1> *)plVar1[1];
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      paVar8 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar8 = &pTVar3->SharedReferenceCount;
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    if (pIVar2 == (IMediaAudioSample *)0x0) {
      bVar6 = false;
    }
    else {
      TArray<TSharedPtr<IMediaAudioSample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                ((TArray<TSharedPtr<IMediaAudioSample,1>,TSizedDefaultAllocator<32>_> *)
                 &this->CriticalSection,0,Default);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar8 = (atomic<int>)((int)*paVar8 + 1);
        UNLOCK();
      }
      pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pIVar2;
      (param_1->SharedReferenceCount).ReferenceController = pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      bVar6 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  if (lpCriticalSection != (longlong *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar6;
}

// Discard @ 14eaa7e80

bool __thiscall
TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_>::Discard
          (TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_> *this,
          TRange<FMediaTimeStamp> *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int local_res8 [2];
  uint local_res10 [4];
  int local_res20 [2];
  
  if (((param_1->LowerBound).Type.Value == '\x02') || ((param_1->UpperBound).Type.Value == '\x02'))
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TimeRange.HasLowerBound() && TimeRange.HasUpperBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaSampleQueue.h"
                       ,0xa6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FindRangeInQueue(this,param_1,param_2,(int *)local_res10,local_res8,local_res20);
    if ((int)local_res10[0] < 0) {
      bVar2 = false;
    }
    else {
      if (local_res8[0] < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("LastPossibleIndex >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaSampleQueue.h"
                           ,0xb0,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      uVar5 = (local_res8[0] - local_res10[0]) + 1;
      uVar4 = 0;
      if ((int)(uVar5 + local_res10[0]) <= (this->Samples).ArrayNum) {
        uVar4 = ~(uVar5 | local_res10[0]) >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (uVar5 != 0) {
        TArray<TSharedPtr<IMediaAudioSample,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this->Samples,local_res10[0],uVar5);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->Samples).AllocatorInstance,(this->Samples).ArrayNum,
                   &(this->Samples).ArrayMax);
      }
      this->NumDroppedSamples = this->NumDroppedSamples + uVar5;
      bVar2 = true;
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Discard @ 14eaa8030

bool __thiscall
TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_>::Discard
          (TMediaSampleQueue<IMediaBinarySample,TMediaSampleSink<IMediaBinarySample>_> *this,
          TRange<FMediaTimeStamp> *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int local_res8 [2];
  uint local_res10 [4];
  int local_res20 [2];
  
  if (((param_1->LowerBound).Type.Value == '\x02') || ((param_1->UpperBound).Type.Value == '\x02'))
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TimeRange.HasLowerBound() && TimeRange.HasUpperBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaSampleQueue.h"
                       ,0xa6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FindRangeInQueue(this,param_1,param_2,(int *)local_res10,local_res8,local_res20);
    if ((int)local_res10[0] < 0) {
      bVar2 = false;
    }
    else {
      if (local_res8[0] < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("LastPossibleIndex >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaSampleQueue.h"
                           ,0xb0,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      uVar5 = (local_res8[0] - local_res10[0]) + 1;
      uVar4 = 0;
      if ((int)(uVar5 + local_res10[0]) <= (this->Samples).ArrayNum) {
        uVar4 = ~(uVar5 | local_res10[0]) >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (uVar5 != 0) {
        TArray<TSharedPtr<IMediaBinarySample,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this->Samples,local_res10[0],uVar5);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->Samples).AllocatorInstance,(this->Samples).ArrayNum,
                   &(this->Samples).ArrayMax);
      }
      this->NumDroppedSamples = this->NumDroppedSamples + uVar5;
      bVar2 = true;
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Discard @ 14eaa81e0

bool __thiscall
TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_>::Discard
          (TMediaSampleQueue<IMediaTextureSample,TMediaSampleSink<IMediaTextureSample>_> *this,
          TRange<FMediaTimeStamp> *param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int local_res8 [2];
  uint local_res10 [4];
  int local_res20 [2];
  
  if (((param_1->LowerBound).Type.Value == '\x02') || ((param_1->UpperBound).Type.Value == '\x02'))
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TimeRange.HasLowerBound() && TimeRange.HasUpperBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaSampleQueue.h"
                       ,0xa6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FindRangeInQueue(this,param_1,param_2,(int *)local_res10,local_res8,local_res20);
    if ((int)local_res10[0] < 0) {
      bVar2 = false;
    }
    else {
      if (local_res8[0] < 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("LastPossibleIndex >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MediaUtils\\Public\\MediaSampleQueue.h"
                           ,0xb0,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      uVar5 = (local_res8[0] - local_res10[0]) + 1;
      uVar4 = 0;
      if ((int)(uVar5 + local_res10[0]) <= (this->Samples).ArrayNum) {
        uVar4 = ~(uVar5 | local_res10[0]) >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (uVar5 != 0) {
        TArray<TSharedPtr<IMediaTextureSample,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this->Samples,local_res10[0],uVar5);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->Samples).AllocatorInstance,(this->Samples).ArrayNum,
                   &(this->Samples).ArrayMax);
      }
      this->NumDroppedSamples = this->NumDroppedSamples + uVar5;
      bVar2 = true;
    }
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Enqueue @ 14eaa97d0

bool __thiscall
TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_>::Enqueue
          (TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_> *this,
          TSharedRef<IMediaAudioSample,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  IMediaAudioSample *local_18;
  TReferenceControllerBase<1> *local_10;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->MaxSamplesInQueue < 1) || ((this->Samples).ArrayNum < this->MaxSamplesInQueue)) {
    local_18 = param_1->Object;
    local_10 = (param_1->SharedReferenceCount).ReferenceController;
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar6 = (this->Samples).AllocatorInstance.Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_18) &&
       ((FScriptContainerElement *)&local_18 < pFVar6 + (longlong)(this->Samples).ArrayMax * 0x10))
    {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    piVar1 = &(this->Samples).ArrayMax;
    iVar5 = (this->Samples).ArrayNum;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->Samples).AllocatorInstance,piVar1);
    }
    (this->Samples).ArrayNum = iVar5 + 1;
    pFVar6 = (this->Samples).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    *(IMediaAudioSample **)pFVar6 = local_18;
    *(TReferenceControllerBase<1> **)(pFVar6 + 8) = local_10;
    local_10 = (TReferenceControllerBase<1> *)0x0;
    local_18 = (IMediaAudioSample *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar3;
}

// FindRangeInQueue @ 14eaabbd0

void __thiscall
TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_>::FindRangeInQueue
          (TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_> *this,
          TRange<FMediaTimeStamp> *param_1,bool param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong local_res20;
  longlong local_a8;
  undefined1 local_98 [8];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  TRange<FMediaTimeStamp> local_70;
  
  uVar12 = 0;
  *param_3 = -1;
  *param_4 = -1;
  *param_5 = 0;
  iVar1 = (this->Samples).ArrayNum;
  if (0 < iVar1) {
    local_a8 = 0;
    local_res20 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->Samples).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11 = (this->Samples).AllocatorInstance.Data + local_a8;
      if ((*(longlong *)pFVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar9 = (longlong *)
               (**(code **)(**(longlong **)pFVar11 + 0x30))(*(longlong **)pFVar11,local_90);
      if ((*(longlong *)pFVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar10 = (longlong *)
                (**(code **)(**(longlong **)pFVar11 + 0x10))(*(longlong **)pFVar11,local_98);
      iVar2 = *(int *)((longlong)plVar9 + 0xc);
      lVar6 = plVar9[1];
      lVar3 = *plVar10;
      lVar4 = *plVar9;
      if ((*(longlong *)pFVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar9 = (longlong *)
               (**(code **)(**(longlong **)pFVar11 + 0x30))(*(longlong **)pFVar11,local_80);
      local_70.LowerBound.Type.Value = '\x01';
      local_70.LowerBound.Value.Time.Ticks = *plVar9;
      local_70.LowerBound.Value._8_8_ = plVar9[1];
      local_70.UpperBound.Type.Value = '\0';
      local_70.UpperBound.Value.Time.Ticks = lVar3 + lVar4;
      local_70.UpperBound.Value.SequenceIndex = (int)lVar6;
      local_70.UpperBound.Value.LoopIndex = iVar2;
      bVar7 = TRange<FMediaTimeStamp>::Overlaps(param_1,&local_70);
      if (bVar7) {
        if (*param_3 < 0) {
          *param_3 = uVar12;
        }
LAB_14eaabdc0:
        *param_4 = uVar12;
      }
      else {
        if (param_2) {
          if ((local_70.UpperBound.Type.Value == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((param_1->LowerBound).Type.Value == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar2 = (param_1->LowerBound).Value.SequenceIndex;
          if (((((local_70.UpperBound.Value.SequenceIndex == iVar2) &&
                (local_70.UpperBound.Value.LoopIndex == (param_1->LowerBound).Value.LoopIndex)) &&
               (local_70.UpperBound.Value.Time.Ticks == (param_1->LowerBound).Value.Time.Ticks)) ||
              (local_70.UpperBound.Value.SequenceIndex < iVar2)) ||
             ((local_70.UpperBound.Value.SequenceIndex == iVar2 &&
              ((iVar2 = (param_1->LowerBound).Value.LoopIndex,
               local_70.UpperBound.Value.LoopIndex < iVar2 ||
               ((local_70.UpperBound.Value.LoopIndex == iVar2 &&
                (local_70.UpperBound.Value.Time.Ticks < (param_1->LowerBound).Value.Time.Ticks))))))
             )) goto LAB_14eaabf6c;
LAB_14eaabf68:
          bVar7 = false;
        }
        else {
          if ((local_70.LowerBound.Type.Value == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((param_1->UpperBound).Type.Value == '\x02') &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar2 = (param_1->UpperBound).Value.SequenceIndex;
          if (local_70.LowerBound.Value.SequenceIndex < iVar2) goto LAB_14eaabf68;
          if (local_70.LowerBound.Value.SequenceIndex == iVar2) {
            iVar2 = (param_1->UpperBound).Value.LoopIndex;
            if (local_70.LowerBound.Value.LoopIndex < iVar2) goto LAB_14eaabf68;
            if ((local_70.LowerBound.Value.LoopIndex != iVar2) ||
               ((param_1->UpperBound).Value.Time.Ticks <= local_70.LowerBound.Value.Time.Ticks))
            goto LAB_14eaabf6c;
            bVar7 = false;
          }
          else {
LAB_14eaabf6c:
            bVar7 = true;
          }
        }
        if (bVar7) {
          return;
        }
        if (-1 < *param_3) goto LAB_14eaabdc0;
        *param_5 = *param_5 + 1;
      }
      uVar12 = uVar12 + 1;
      local_res20 = local_res20 + 1;
      local_a8 = local_a8 + 0x10;
    } while (local_res20 < iVar1);
  }
  return;
}

// GetFlushCount @ 14eaad680

uint __thiscall
TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_>::GetFlushCount
          (TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = this->FlushCount;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetSampleTimes @ 14eaaed70

void __thiscall
TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_>::GetSampleTimes
          (TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_> *this,
          TArray<TRange<FMediaTimeStamp>,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *lpCriticalSection;
  undefined4 uVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 local_a8 [8];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  longlong local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar15 = 0;
  lVar10 = (longlong)(this->CriticalSection).CriticalSection.Opaque2[0];
  if (0 < lVar10) {
    lVar18 = 0;
    lVar17 = 0;
    do {
      uVar16 = ~uVar15 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar15 < (this->CriticalSection).CriticalSection.Opaque2[0]) {
        uVar8 = uVar16;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)(lVar17 + (longlong)(this->CriticalSection).CriticalSection.Opaque1[0]) != 0)
      {
        uVar8 = 0;
        if ((int)uVar15 < (this->CriticalSection).CriticalSection.Opaque2[0]) {
          uVar8 = uVar16;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar2 = (this->CriticalSection).CriticalSection.Opaque1[0];
        if ((*(longlong *)((longlong)pvVar2 + lVar17) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar11 = *(longlong **)((longlong)pvVar2 + lVar17);
        plVar11 = (longlong *)(**(code **)(*plVar11 + 0x30))(plVar11,local_a0);
        uVar8 = 0;
        if ((int)uVar15 < (this->CriticalSection).CriticalSection.Opaque2[0]) {
          uVar8 = uVar16;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar2 = (this->CriticalSection).CriticalSection.Opaque1[0];
        if ((*(longlong *)((longlong)pvVar2 + lVar17) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar12 = *(longlong **)((longlong)pvVar2 + lVar17);
        plVar12 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12,local_a8);
        uVar1 = *(undefined4 *)((longlong)plVar11 + 0xc);
        lVar6 = plVar11[1];
        lVar3 = *plVar11;
        lVar4 = *plVar12;
        uVar8 = 0;
        if ((int)uVar15 < (this->CriticalSection).CriticalSection.Opaque2[0]) {
          uVar8 = uVar16;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar2 = (this->CriticalSection).CriticalSection.Opaque1[0];
        if ((*(longlong *)((longlong)pvVar2 + lVar17) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar11 = *(longlong **)((longlong)pvVar2 + lVar17);
        puVar13 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,local_90);
        local_80 = 1;
        uStack_78 = *puVar13;
        uStack_70 = puVar13[1];
        uStack_68 = 0;
        iVar9 = param_1->ArrayNum;
        local_60 = lVar3 + lVar4;
        uStack_58 = (int)lVar6;
        uStack_54 = uVar1;
        if (iVar9 == param_1->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar9 + 1;
        pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar9 * 0x30;
        *(ulonglong *)pFVar14 = CONCAT71(uStack_7f,local_80);
        *(undefined8 *)(pFVar14 + 8) = uStack_78;
        *(undefined8 *)(pFVar14 + 0x10) = uStack_70;
        *(ulonglong *)(pFVar14 + 0x18) = CONCAT71(uStack_67,uStack_68);
        *(longlong *)(pFVar14 + 0x20) = local_60;
        *(ulonglong *)(pFVar14 + 0x28) = CONCAT44(uStack_54,uStack_58);
      }
      uVar15 = uVar15 + 1;
      lVar18 = lVar18 + 1;
      lVar17 = lVar17 + 0x10;
    } while (lVar18 < lVar10);
  }
  if (lpCriticalSection != (longlong *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// Num @ 14eab7a10

int __thiscall
TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_>::Num
          (TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_> *this)

{
  return (this->Samples).ArrayNum;
}

// Peek @ 14eab8720

bool __thiscall
TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_>::Peek
          (TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_> *this,
          TSharedPtr<IMediaAudioSample,1> *param_1)

{
  longlong *lpCriticalSection;
  longlong *plVar1;
  IMediaAudioSample *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  atomic<int> *paVar8;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CriticalSection).CriticalSection.Opaque2[0] == 0) {
    bVar6 = false;
  }
  else {
    if ((this->CriticalSection).CriticalSection.Opaque2[0] < 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
    plVar1 = (this->CriticalSection).CriticalSection.Opaque1[0];
    pIVar2 = (IMediaAudioSample *)*plVar1;
    pTVar3 = (TReferenceControllerBase<1> *)plVar1[1];
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      paVar8 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar8 = &pTVar3->SharedReferenceCount;
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    if (pIVar2 == (IMediaAudioSample *)0x0) {
      bVar6 = false;
    }
    else {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar8 = (atomic<int>)((int)*paVar8 + 1);
        UNLOCK();
      }
      pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pIVar2;
      (param_1->SharedReferenceCount).ReferenceController = pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      bVar6 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  if (lpCriticalSection != (longlong *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar6;
}

// Pop @ 14eab8a30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_>::Pop
          (TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_> *this)

{
  longlong *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CriticalSection).CriticalSection.Opaque2[0] != 0) {
    if ((this->CriticalSection).CriticalSection.Opaque2[0] < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (*(longlong *)(this->CriticalSection).CriticalSection.Opaque1[0] != 0) {
      TArray<TSharedPtr<IMediaAudioSample,1>,TSizedDefaultAllocator<32>_>::RemoveAt
                ((TArray<TSharedPtr<IMediaAudioSample,1>,TSizedDefaultAllocator<32>_> *)
                 &this->CriticalSection,0,Default);
      bVar2 = true;
      goto LAB_14eab8ac0;
    }
  }
  bVar2 = false;
LAB_14eab8ac0:
  if (lpCriticalSection != (longlong *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return bVar2;
}

// PurgeUntilSequenceIndex @ 14eab90b0

void __thiscall
TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_>::PurgeUntilSequenceIndex
          (TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_> *this,
          int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_28 [16];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar6 = (this->Samples).ArrayNum;
  while (iVar6 != 0) {
    if (((this->Samples).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->Samples).AllocatorInstance.Data;
    if ((*(longlong *)pFVar2 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar3 = *(longlong **)pFVar2;
    lVar7 = (**(code **)(*plVar3 + 0x30))(plVar3,local_28);
    if (param_1 <= *(int *)(lVar7 + 8)) break;
    if (((this->Samples).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->Samples).AllocatorInstance.Data;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(pFVar2 + 8));
    iVar6 = (this->Samples).ArrayNum + -1;
    if (iVar6 != 0) {
      memmove(pFVar2,pFVar2 + 0x10,(longlong)iVar6 << 4);
    }
    piVar1 = &(this->Samples).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(this->Samples).AllocatorInstance,(this->Samples).ArrayNum,
               &(this->Samples).ArrayMax);
    this->NumDroppedSamples = this->NumDroppedSamples + 1;
    iVar6 = (this->Samples).ArrayNum;
  }
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// RequestFlush @ 14eaba090

void __thiscall
TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_>::RequestFlush
          (TMediaSampleQueue<IMediaAudioSample,TMediaSampleSink<IMediaAudioSample>_> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<TSharedPtr<IMediaAudioSample,1>,int>
              ((TSharedPtr<IMediaAudioSample,1> *)(this->Samples).AllocatorInstance.Data,
               (this->Samples).ArrayNum);
    (this->Samples).ArrayNum = 0;
    piVar1 = &(this->Samples).ArrayMax;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Samples).AllocatorInstance,0,piVar1);
    }
    this->FlushCount = this->FlushCount + 1;
                    /* WARNING: Could not recover jumptable at 0x00014eaba107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

