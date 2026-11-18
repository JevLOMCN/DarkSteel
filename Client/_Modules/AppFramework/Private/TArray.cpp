// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 36

// ~TArray<SSegmentedControl<int>::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> @ 142f388f0

void __thiscall
TArray<SSegmentedControl<int>::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
~TArray<SSegmentedControl<int>::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>
          (TArray<SSegmentedControl<int>::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<SSegmentedControl<int>::FSlot::FSlotArguments,int>
            ((FSlotArguments *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<SGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> @ 142f38930

void __thiscall
TArray<SGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
~TArray<SGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>
          (TArray<SGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<SGridPanel::FSlot::FSlotArguments,int>
            ((FSlotArguments *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<SUniformGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> @ 142f38970

void __thiscall
TArray<SUniformGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
~TArray<SUniformGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>
          (TArray<SUniformGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<SUniformGridPanel::FSlot::FSlotArguments,int>
            ((FSlotArguments *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<SUniformWrapPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> @ 142f389b0

void __thiscall
TArray<SUniformWrapPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
~TArray<SUniformWrapPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>
          (TArray<SUniformWrapPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<SUniformWrapPanel::FSlot::FSlotArguments,int>
            ((FSlotArguments *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<TAttribute<float>,TSizedDefaultAllocator<32>_> @ 142f389f0

void __thiscall
TArray<TAttribute<float>,TSizedDefaultAllocator<32>_>::
~TArray<TAttribute<float>,TSizedDefaultAllocator<32>_>
          (TArray<TAttribute<float>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TAttribute<float>,int>
            ((TAttribute<float> *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> @ 142f38a30

void __thiscall
TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>::
~TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>
          (TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedPtr<int,1>,int>
            ((TSharedPtr<int,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 142f40410

TArray<FCurveSequence::FSlateCurve,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FCurveSequence::FSlateCurve,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FCurveSequence::FSlateCurve,TSizedDefaultAllocator<32>_> *this,
          TArray<FCurveSequence::FSlateCurve,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0xc);
    }
  }
  return this;
}

// operator= @ 142f404b0

TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<FTestData,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<FTestData,1>,int>
              ((TSharedPtr<FTestData,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedPtr<FTestData,1> *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<FTestData,1>,TSharedPtr<FTestData,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// operator= @ 142f40550

TArray<TSharedPtr<ESelectionMode::Type,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedPtr<enum_ESelectionMode::Type,1>,TSizedDefaultAllocator<32>_>::operator=
          (void *this,
          TArray<TSharedPtr<ESelectionMode::Type,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<ESelectionMode::Type,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<enum_ESelectionMode::Type,1>,int>
              (*(TSharedPtr<ESelectionMode::Type,1> **)this,*(int *)((longlong)this + 8));
    iVar2 = param_1->ArrayNum;
    piVar1 = (int *)((longlong)this + 0xc);
    pTVar3 = (TSharedPtr<ESelectionMode::Type,1> *)(param_1->AllocatorInstance).Data;
    *(int *)((longlong)this + 8) = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,this,iVar2,piVar1);
    ConstructItems<TSharedPtr<enum_ESelectionMode::Type,1>,TSharedPtr<enum_ESelectionMode::Type,1>,int>
              (*(void **)this,pTVar3,iVar2);
  }
  return this;
}

// Empty @ 142fb7a70

void __thiscall
TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<TSharedPtr<FString,1>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TSharedPtr<FString,1>,int>
              ((TSharedPtr<FString,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Insert @ 142fe26a0

int __thiscall
TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_>::Insert
          (TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedPtr<FTestData,1> *param_1,int param_2)

{
  TSharedPtr<FTestData,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  
  pTVar1 = (TSharedPtr<FTestData,1> *)(this->AllocatorInstance).Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar5 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  lVar6 = (longlong)param_2 * 0x10;
  pFVar5 = pFVar5 + lVar6;
  memmove(pFVar5 + 0x10,pFVar5,(longlong)(iVar4 - param_2) << 4);
  pFVar5 = (this->AllocatorInstance).Data;
  *(FTestData **)(pFVar5 + lVar6) = param_1->Object;
  *(TReferenceControllerBase<1> **)(pFVar5 + lVar6 + 8) =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FTestData *)0x0;
  return param_2;
}

// RemoveAt @ 143007fa0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// Insert @ 1430375a0

int __thiscall
TArray<TSharedPtr<FColorInfo,1>,TSizedDefaultAllocator<32>_>::Insert
          (TArray<TSharedPtr<FColorInfo,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedPtr<FColorInfo,1> *param_1,int param_2)

{
  TSharedPtr<FColorInfo,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  
  pTVar1 = (TSharedPtr<FColorInfo,1> *)(this->AllocatorInstance).Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar6 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  lVar7 = (longlong)param_2 * 0x10;
  pFVar6 = pFVar6 + lVar7;
  memmove(pFVar6 + 0x10,pFVar6,(longlong)(iVar5 - param_2) << 4);
  pFVar6 = (this->AllocatorInstance).Data;
  *(FColorInfo **)(pFVar6 + lVar7) = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar6 + lVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return param_2;
}

// CopyToEmpty<UE::Math::TVector2<float>,int> @ 143046250

void __thiscall
TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
CopyToEmpty<UE::Math::TVector2<float>,int>
          (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *this,
          TVector2<float> *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 3);
  }
  return;
}

// CopyToEmpty<FSlateGradientStop,int> @ 1430462e0

void __thiscall
TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_>::CopyToEmpty<FSlateGradientStop,int>
          (TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> *this,FSlateGradientStop *param_1,
          int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,4,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 * 0x18);
  }
  return;
}

// ~TArray<unsigned_int,TSizedDefaultAllocator<32>_> @ 14305e2a0

void __thiscall
TArray<unsigned_int,TSizedDefaultAllocator<32>_>::~TArray<unsigned_int,TSizedDefaultAllocator<32>_>
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<float,TSizedDefaultAllocator<32>_> @ 14305e2c0

void __thiscall
TArray<float,TSizedDefaultAllocator<32>_>::~TArray<float,TSizedDefaultAllocator<32>_>
          (TArray<float,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FColor_*,TSizedDefaultAllocator<32>_> @ 14305e2e0

void __thiscall
TArray<FColor_*,TSizedDefaultAllocator<32>_>::~TArray<FColor_*,TSizedDefaultAllocator<32>_>
          (TArray<FColor_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FLinearColor_*,TSizedDefaultAllocator<32>_> @ 14305e300

void __thiscall
TArray<FLinearColor_*,TSizedDefaultAllocator<32>_>::
~TArray<FLinearColor_*,TSizedDefaultAllocator<32>_>
          (TArray<FLinearColor_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> @ 14305e320

void __thiscall
TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
~TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>
          (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FColorChannels,TSizedDefaultAllocator<32>_> @ 14305e340

void __thiscall
TArray<FColorChannels,TSizedDefaultAllocator<32>_>::
~TArray<FColorChannels,TSizedDefaultAllocator<32>_>
          (TArray<FColorChannels,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FLinearColor,TSizedDefaultAllocator<32>_> @ 14305e360

void __thiscall
TArray<FLinearColor,TSizedDefaultAllocator<32>_>::~TArray<FLinearColor,TSizedDefaultAllocator<32>_>
          (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FNotificationButtonInfo,TSizedDefaultAllocator<32>_> @ 14305e380

void __thiscall
TArray<FNotificationButtonInfo,TSizedDefaultAllocator<32>_>::
~TArray<FNotificationButtonInfo,TSizedDefaultAllocator<32>_>
          (TArray<FNotificationButtonInfo,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FNotificationButtonInfo,int>
            ((FNotificationButtonInfo *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> @ 14305e3c0

void __thiscall
TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_>::
~TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_>
          (TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<FSlateVertex,TSizedDefaultAllocator<32>_> @ 14305e3e0

void __thiscall
TArray<FSlateVertex,TSizedDefaultAllocator<32>_>::~TArray<FSlateVertex,TSizedDefaultAllocator<32>_>
          (TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<SResponsiveGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> @ 14305e400

void __thiscall
TArray<SResponsiveGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
~TArray<SResponsiveGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>
          (TArray<SResponsiveGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<SResponsiveGridPanel::FSlot::FSlotArguments,int>
            ((FSlotArguments *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> @ 14305e440

void __thiscall
TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
~TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>
          (TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<SScrollBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_> @ 14305e480

void __thiscall
TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_>::
~TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_>
          (TArray<TSharedRef<ITextDecorator,1>,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedRef<ITextDecorator,1>,int>
            ((TSharedRef<ITextDecorator,1> *)(this->AllocatorInstance).Data,this->ArrayNum);
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TArray<bool,TSizedDefaultAllocator<32>_> @ 14305e4c0

void __thiscall
TArray<bool,TSizedDefaultAllocator<32>_>::~TArray<bool,TSizedDefaultAllocator<32>_>
          (TArray<bool,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator= @ 143062490

TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> *this,
          TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x18);
    }
  }
  return this;
}

// operator= @ 143062530

TArray<TSharedPtr<FTextStyles::FFontFamily,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedPtr<FTextStyles::FFontFamily,1>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSharedPtr<FTextStyles::FFontFamily,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedPtr<FTextStyles::FFontFamily,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<FTextStyles::FFontFamily,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<FTextStyles::FFontFamily,1>,int>
              ((TSharedPtr<FTextStyles::FFontFamily,1> *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedPtr<FTextStyles::FFontFamily,1> *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<FTextStyles::FFontFamily,1>,TSharedPtr<FTextStyles::FFontFamily,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// operator= @ 1430625d0

TArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSizedDefaultAllocator<32>_> *this,
          TArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedRef<SDocumentsTest::FDocumentInfo,1>,int>
              ((TSharedRef<SDocumentsTest::FDocumentInfo,1> *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedRef<SDocumentsTest::FDocumentInfo,1> *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<SDocumentsTest::FDocumentInfo,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// AddZeroed @ 14306e660

int __thiscall
TArray<FSlateVertex,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<FSlateVertex,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x42c,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  pFVar2 = (this->AllocatorInstance).Data + (longlong)iVar1 * 0x2c;
  *(undefined8 *)pFVar2 = 0;
  *(undefined8 *)(pFVar2 + 8) = 0;
  *(undefined8 *)(pFVar2 + 0x10) = 0;
  *(undefined8 *)(pFVar2 + 0x18) = 0;
  *(undefined8 *)(pFVar2 + 0x20) = 0;
  *(undefined4 *)(pFVar2 + 0x28) = 0;
  return iVar1;
}

// AddZeroed @ 14306e6c0

int __thiscall
TArray<bool,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<bool,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + iVar1,0,(longlong)param_1);
  return iVar1;
}

// Empty @ 1430b5ec0

void __thiscall
TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reset @ 1430ea790

void __thiscall
TArray<bool,TSizedDefaultAllocator<32>_>::Reset
          (TArray<bool,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

