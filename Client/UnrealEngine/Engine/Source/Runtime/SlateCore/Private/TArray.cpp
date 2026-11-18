// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 42

// AddUniqueImpl<unsigned___int64_const_&> @ 142422400

int __thiscall
TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned___int64_const_&>
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this,ulong64 *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(ulong64 *)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(ulong64 *)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<FSlateInvalidationRootHandle> @ 142422500

int __thiscall
TArray<FSlateInvalidationRootHandle,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FSlateInvalidationRootHandle>
          (TArray<FSlateInvalidationRootHandle,TSizedDefaultAllocator<32>_> *this,
          FSlateInvalidationRootHandle *param_1)

{
  FScriptContainerElement *pFVar1;
  FSlateInvalidationRootHandle *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FSlateInvalidationRootHandle *pFVar7;
  
  pFVar2 = (FSlateInvalidationRootHandle *)(this->AllocatorInstance).Data;
  if (pFVar2 != pFVar2 + this->ArrayNum) {
    pFVar7 = pFVar2;
    do {
      if (pFVar7->UniqueId == param_1->UniqueId) {
        iVar6 = (int)((longlong)pFVar7 - (longlong)pFVar2 >> 4);
        if (iVar6 != -1) {
          return iVar6;
        }
        break;
      }
      pFVar7 = pFVar7 + 1;
    } while (pFVar7 != pFVar2 + this->ArrayNum);
  }
  if (((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  iVar6 = this->ArrayNum;
  if (iVar6 == this->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar6;
  }
  this->ArrayNum = iVar6 + 1;
  uVar4 = *(undefined8 *)&param_1->UniqueId;
  pFVar1 = (this->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(FSlateInvalidationRoot **)pFVar1 = param_1->InvalidationRoot;
  *(undefined8 *)(pFVar1 + 8) = uVar4;
  return iVar6;
}

// HeapPopDiscard<UE::Slate::Private::FSlateInvalidationReindexHeap::FWidgetOrderGreater> @ 142424950

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
::HeapPopDiscard<UE::Slate::Private::FSlateInvalidationReindexHeap::FWidgetOrderGreater>
          (TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
           *this,FWidgetOrderGreater *param_1,EAllowShrinking param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  ForElementType<FSlateInvalidationWidgetHeapElement> _Dst;
  int iVar9;
  int iVar10;
  
  iVar9 = 0;
  if ((this->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar3 = (this->AllocatorInstance).SecondaryData;
  _Dst = (ForElementType<FSlateInvalidationWidgetHeapElement>)this;
  if (FVar3 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
    _Dst = FVar3;
  }
  iVar10 = this->ArrayNum + -1;
  if (1 < iVar10) {
    iVar10 = 1;
  }
  if (iVar10 != 0) {
    memmove((void *)_Dst,(void *)((longlong)_Dst + (longlong)(this->ArrayNum - iVar10) * 8),
            (longlong)iVar10 << 3);
  }
  iVar10 = this->ArrayNum + -1;
  this->ArrayNum = iVar10;
  if (param_2 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
              (8,4,&this->AllocatorInstance,iVar10,&this->ArrayMax);
  }
  FVar3 = (this->AllocatorInstance).SecondaryData;
  iVar10 = this->ArrayNum;
  if (FVar3 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
    this = (TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
            *)FVar3;
  }
  if (1 < iVar10) {
    do {
      iVar6 = iVar9 * 2;
      iVar8 = iVar6 + 1;
      if (iVar6 + 2 < iVar10) {
        if (*(uint *)((uchar *)((longlong)this + 4) + (longlong)iVar8 * 8) <
            *(uint *)((uchar *)((longlong)this + 0x14) + (longlong)iVar6 * 8)) {
          iVar8 = iVar6;
        }
        iVar8 = iVar8 + 1;
      }
      puVar1 = (undefined8 *)((longlong)this + (longlong)iVar8 * 8);
      puVar2 = (undefined8 *)((longlong)this + (longlong)iVar9 * 8);
      if (*(uint *)((uchar *)((longlong)this + 4) + (longlong)iVar9 * 8) <=
          *(uint *)((longlong)puVar1 + 4)) {
        return;
      }
      uVar4 = *puVar2;
      *puVar2 = *puVar1;
      *puVar1 = uVar4;
      iVar9 = iVar8;
    } while (iVar8 * 2 + 1 < iVar10);
  }
  return;
}

// HeapPopDiscard<FSlateInvalidationWidgetPostHeap::FWidgetOrderGreater> @ 142424ac0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
::HeapPopDiscard<FSlateInvalidationWidgetPostHeap::FWidgetOrderGreater>
          (TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
           *this,FWidgetOrderGreater *param_1,EAllowShrinking param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  ForElementType<FSlateInvalidationWidgetHeapElement> _Dst;
  int iVar9;
  int iVar10;
  
  iVar9 = 0;
  if ((this->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar3 = (this->AllocatorInstance).SecondaryData;
  _Dst = (ForElementType<FSlateInvalidationWidgetHeapElement>)this;
  if (FVar3 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
    _Dst = FVar3;
  }
  iVar10 = this->ArrayNum + -1;
  if (1 < iVar10) {
    iVar10 = 1;
  }
  if (iVar10 != 0) {
    memmove((void *)_Dst,(void *)((longlong)_Dst + (longlong)(this->ArrayNum - iVar10) * 8),
            (longlong)iVar10 << 3);
  }
  iVar10 = this->ArrayNum + -1;
  this->ArrayNum = iVar10;
  if (param_2 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
              (8,4,&this->AllocatorInstance,iVar10,&this->ArrayMax);
  }
  FVar3 = (this->AllocatorInstance).SecondaryData;
  iVar10 = this->ArrayNum;
  if (FVar3 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
    this = (TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<100,32,TSizedDefaultAllocator<32>_>_>
            *)FVar3;
  }
  if (1 < iVar10) {
    do {
      iVar6 = iVar9 * 2;
      iVar8 = iVar6 + 1;
      if (iVar6 + 2 < iVar10) {
        if (*(uint *)((uchar *)((longlong)this + 0x14) + (longlong)iVar6 * 8) <
            *(uint *)((uchar *)((longlong)this + 4) + (longlong)iVar8 * 8)) {
          iVar8 = iVar6;
        }
        iVar8 = iVar8 + 1;
      }
      puVar1 = (undefined8 *)((longlong)this + (longlong)iVar9 * 8);
      puVar2 = (undefined8 *)((longlong)this + (longlong)iVar8 * 8);
      if (*(uint *)((uchar *)((longlong)this + 4) + (longlong)iVar8 * 8) <=
          *(uint *)((longlong)puVar1 + 4)) {
        return;
      }
      uVar4 = *puVar1;
      *puVar1 = *puVar2;
      *puVar2 = uVar4;
      iVar9 = iVar8;
    } while (iVar8 * 2 + 1 < iVar10);
  }
  return;
}

// HeapPopDiscard<FSlateInvalidationWidgetPrepassHeap::FWidgetOrderGreater> @ 142424c30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
::HeapPopDiscard<FSlateInvalidationWidgetPrepassHeap::FWidgetOrderGreater>
          (TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *this,FWidgetOrderGreater *param_1,EAllowShrinking param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  ForElementType<FSlateInvalidationWidgetHeapElement> _Dst;
  int iVar9;
  int iVar10;
  
  iVar9 = 0;
  if ((this->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar3 = (this->AllocatorInstance).SecondaryData;
  _Dst = (ForElementType<FSlateInvalidationWidgetHeapElement>)this;
  if (FVar3 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
    _Dst = FVar3;
  }
  iVar10 = this->ArrayNum + -1;
  if (1 < iVar10) {
    iVar10 = 1;
  }
  if (iVar10 != 0) {
    memmove((void *)_Dst,(void *)((longlong)_Dst + (longlong)(this->ArrayNum - iVar10) * 8),
            (longlong)iVar10 << 3);
  }
  iVar10 = this->ArrayNum + -1;
  this->ArrayNum = iVar10;
  if (param_2 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
              (8,4,&this->AllocatorInstance,iVar10,&this->ArrayMax);
  }
  FVar3 = (this->AllocatorInstance).SecondaryData;
  iVar10 = this->ArrayNum;
  if (FVar3 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
    this = (TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
            *)FVar3;
  }
  if (1 < iVar10) {
    do {
      iVar6 = iVar9 * 2;
      iVar8 = iVar6 + 1;
      if (iVar6 + 2 < iVar10) {
        if (*(uint *)((uchar *)((longlong)this + 4) + (longlong)iVar8 * 8) <
            *(uint *)((uchar *)((longlong)this + 0x14) + (longlong)iVar6 * 8)) {
          iVar8 = iVar6;
        }
        iVar8 = iVar8 + 1;
      }
      puVar1 = (undefined8 *)((longlong)this + (longlong)iVar8 * 8);
      puVar2 = (undefined8 *)((longlong)this + (longlong)iVar9 * 8);
      if (*(uint *)((uchar *)((longlong)this + 4) + (longlong)iVar9 * 8) <=
          *(uint *)((longlong)puVar1 + 4)) {
        return;
      }
      uVar4 = *puVar2;
      *puVar2 = *puVar1;
      *puVar1 = uVar4;
      iVar9 = iVar8;
    } while (iVar8 * 2 + 1 < iVar10);
  }
  return;
}

// HeapPopDiscard<FSlateInvalidationWidgetPreHeap::FWidgetOrderLess> @ 142424da0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
::HeapPopDiscard<FSlateInvalidationWidgetPreHeap::FWidgetOrderLess>
          (TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
           *this,FWidgetOrderLess *param_1,EAllowShrinking param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ForElementType<FSlateInvalidationWidgetHeapElement> FVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  ForElementType<FSlateInvalidationWidgetHeapElement> _Dst;
  int iVar9;
  int iVar10;
  
  iVar9 = 0;
  if ((this->ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar3 = (this->AllocatorInstance).SecondaryData;
  _Dst = (ForElementType<FSlateInvalidationWidgetHeapElement>)this;
  if (FVar3 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
    _Dst = FVar3;
  }
  iVar10 = this->ArrayNum + -1;
  if (1 < iVar10) {
    iVar10 = 1;
  }
  if (iVar10 != 0) {
    memmove((void *)_Dst,(void *)((longlong)_Dst + (longlong)(this->ArrayNum - iVar10) * 8),
            (longlong)iVar10 << 3);
  }
  iVar10 = this->ArrayNum + -1;
  this->ArrayNum = iVar10;
  if (param_2 == Default) {
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateInvalidationWidgetHeapElement>_>
              (8,4,&this->AllocatorInstance,iVar10,&this->ArrayMax);
  }
  FVar3 = (this->AllocatorInstance).SecondaryData;
  iVar10 = this->ArrayNum;
  if (FVar3 != (ForElementType<FSlateInvalidationWidgetHeapElement>)0x0) {
    this = (TArray<FSlateInvalidationWidgetHeapElement,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
            *)FVar3;
  }
  if (1 < iVar10) {
    do {
      iVar6 = iVar9 * 2;
      iVar8 = iVar6 + 1;
      if (iVar6 + 2 < iVar10) {
        if (*(uint *)((uchar *)((longlong)this + 4) + (longlong)iVar8 * 8) <
            *(uint *)((uchar *)((longlong)this + 0x14) + (longlong)iVar6 * 8)) {
          iVar8 = iVar6;
        }
        iVar8 = iVar8 + 1;
      }
      puVar1 = (undefined8 *)((longlong)this + (longlong)iVar8 * 8);
      puVar2 = (undefined8 *)((longlong)this + (longlong)iVar9 * 8);
      if (*(uint *)((uchar *)((longlong)this + 4) + (longlong)iVar9 * 8) <=
          *(uint *)((longlong)puVar1 + 4)) {
        return;
      }
      uVar4 = *puVar2;
      *puVar2 = *puVar1;
      *puVar1 = uVar4;
      iVar9 = iVar8;
    } while (iVar8 * 2 + 1 < iVar10);
  }
  return;
}

// TArray<UE::Slate::Private::FSlateCrashReporterHandler::FContext,TSizedDefaultAllocator<32>_> @ 142426af0

TArray<UE::Slate::Private::FSlateCrashReporterHandler::FContext,TSizedDefaultAllocator<32>_> *
__thiscall
TArray<UE::Slate::Private::FSlateCrashReporterHandler::FContext,TSizedDefaultAllocator<32>_>::
TArray<UE::Slate::Private::FSlateCrashReporterHandler::FContext,TSizedDefaultAllocator<32>_>
          (TArray<UE::Slate::Private::FSlateCrashReporterHandler::FContext,TSizedDefaultAllocator<32>_>
           *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<UE::Slate::Private::FSlateCrashReporterHandler::FContext,TSizedDefaultAllocator<32>_> @ 14242e190

void __thiscall
TArray<UE::Slate::Private::FSlateCrashReporterHandler::FContext,TSizedDefaultAllocator<32>_>::
~TArray<UE::Slate::Private::FSlateCrashReporterHandler::FContext,TSizedDefaultAllocator<32>_>
          (TArray<UE::Slate::Private::FSlateCrashReporterHandler::FContext,TSizedDefaultAllocator<32>_>
           *this)

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

// Remove @ 14244e750

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedRef<SWindow,1> *param_1)

{
  TSharedRef<SWindow,1> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  pTVar1 = (TSharedRef<SWindow,1> *)(this->AllocatorInstance).Data;
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
  lVar6 = (longlong)iVar5;
  if (iVar5 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar12 = 0;
  bVar4 = *(SWindow **)pFVar2 != param_1->Object;
  lVar8 = 0;
  iVar10 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar11 = iVar10 + 1;
    if (lVar8 < lVar6) {
      pFVar7 = pFVar2 + lVar8 * 0x10;
      do {
        if (bVar4 != (*(SWindow **)pFVar7 != param_1->Object)) break;
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 1;
        pFVar7 = pFVar7 + 0x10;
      } while (lVar8 < lVar6);
    }
    iVar9 = iVar11 - iVar10;
    if (bVar4 == false) {
      DestructItems<TSharedRef<SWindow,1>,int>
                ((TSharedRef<SWindow,1> *)(pFVar2 + (longlong)iVar10 * 0x10),iVar9);
    }
    else {
      if (iVar12 != iVar10) {
        memmove(pFVar2 + (longlong)iVar12 * 0x10,pFVar2 + (longlong)iVar10 * 0x10,
                (longlong)iVar9 << 4);
      }
      iVar12 = iVar12 + iVar9;
    }
    bVar4 = (bool)(bVar4 ^ 1);
    iVar10 = iVar11;
    if (lVar6 <= lVar8) {
      this->ArrayNum = iVar12;
      return iVar5 - iVar12;
    }
  } while( true );
}

// RemoveAtSwapImpl @ 14244ebe0

void __thiscall
TArray<FConsoleSlateDebuggerInvalidate::FInvalidationInfo,TSizedDefaultAllocator<32>_>::
RemoveAtSwapImpl(TArray<FConsoleSlateDebuggerInvalidate::FInvalidationInfo,TSizedDefaultAllocator<32>_>
                 *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FInvalidationInfo *this_00;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  this_00 = (FInvalidationInfo *)(pFVar1 + (longlong)param_1 * 0xa8);
  FConsoleSlateDebuggerInvalidate::FInvalidationInfo::~FInvalidationInfo(this_00);
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(this_00,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0xa8,(longlong)iVar2 * 0xa8);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveSingleSwap @ 14244fa60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this,ulong64 *param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar7 = pFVar1;
    do {
      if (*(ulong64 *)pFVar7 == *param_1) {
        uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar1 >> 3);
        if (uVar6 == 0xffffffff) {
          return 0;
        }
        uVar5 = 0;
        if ((int)(uVar6 + 1) <= this->ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar4 = this->ArrayNum + ~uVar6;
        if (1 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar6 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar4) * 8,
                  (longlong)iVar4 << 3);
        }
        iVar4 = this->ArrayNum + -1;
        this->ArrayNum = iVar4;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
        }
        return 1;
      }
      pFVar7 = pFVar7 + 8;
    } while (pFVar7 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  return 0;
}

// RemoveSwap @ 14244fba0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<FSlateDebugging::IWidgetInputRoutingEvent_*,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<FSlateDebugging::IWidgetInputRoutingEvent_*,TSizedDefaultAllocator<32>_> *this,
          IWidgetInputRoutingEvent **param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  uVar9 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    bVar3 = false;
    iVar10 = iVar5;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar8 = uVar9;
      if (*(IWidgetInputRoutingEvent **)((this->AllocatorInstance).Data + lVar7) == *param_1) {
        uVar8 = uVar9 - 1;
        lVar7 = lVar7 + -8;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar9 < this->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar10 = ~uVar9 + this->ArrayNum;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar9 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar10) * 8
                  ,(longlong)iVar10 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar10 = this->ArrayNum;
      uVar9 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar9 < iVar10);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this->AllocatorInstance,iVar10,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

// AddUniqueImpl<UObject_const_*_const_&> @ 14245b310

int __thiscall
TArray<UObject_const_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_const_*_const_&>
          (TArray<UObject_const_*,TSizedDefaultAllocator<32>_> *this,UObject **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(UObject **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(UObject **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<TWeakPtr<FFreeTypeFace,1>_const_&> @ 14245b410

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
TArray<TWeakPtr<FFreeTypeFace,1>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TWeakPtr<FFreeTypeFace,1>_const_&>
          (TArray<TWeakPtr<FFreeTypeFace,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<FFreeTypeFace,1> *param_1)

{
  TWeakPtr<FFreeTypeFace,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pTVar1 = (TWeakPtr<FFreeTypeFace,1> *)(this->AllocatorInstance).Data;
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
    this->ArrayNum = iVar5 + 1;
    pFVar6 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(FFreeTypeFace **)pFVar6 = param_1->Object;
    pTVar2 = (param_1->WeakReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar6 + 8) = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
      UNLOCK();
    }
  }
  return iVar5;
}

// AddDefaulted @ 14247e9a0

int __thiscall
TArray<FCompositeSubFont,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<FCompositeSubFont,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  DefaultConstructItems<FCompositeSubFont,int>
            ((this->AllocatorInstance).Data + (longlong)iVar1 * 0x38,1);
  return iVar1;
}

// AddDefaulted_GetRef @ 14247ea00

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FShapedGlyphEntry * __thiscall
TArray<FShapedGlyphEntry,TSizedDefaultAllocator<32>_>::AddDefaulted_GetRef
          (TArray<FShapedGlyphEntry,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  FShapedGlyphEntry *pFVar2;
  
  iVar1 = this->ArrayNum;
  if (iVar1 == this->ArrayMax) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a8,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar1 + 1;
  pFVar2 = (FShapedGlyphEntry *)((this->AllocatorInstance).Data + (longlong)iVar1 * 0xa8);
  DefaultConstructItems<FShapedGlyphEntry,int>(pFVar2,1);
  return pFVar2;
}

// Empty @ 142485d10

void __thiscall
TArray<UE::Slate::FPreprocessedFontGeometry,TSizedDefaultAllocator<32>_>::Empty
          (TArray<UE::Slate::FPreprocessedFontGeometry,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    DestructItems<UE::Slate::FPreprocessedFontGeometry,int>
              ((FPreprocessedFontGeometry *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Find @ 142487080

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
TArray<TWeakPtr<FFreeTypeFace,1>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TWeakPtr<FFreeTypeFace,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<FFreeTypeFace,1> *param_1)

{
  int iVar1;
  TWeakPtr<FFreeTypeFace,1> *pTVar2;
  bool bVar3;
  TWeakPtr<FFreeTypeFace,1> *this_00;
  
  pTVar2 = (TWeakPtr<FFreeTypeFace,1> *)(this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pTVar2;
  while( true ) {
    if (this_00 == pTVar2 + iVar1) {
      return -1;
    }
    bVar3 = TWeakPtr<FFreeTypeFace,1>::UEOpEquals<FFreeTypeFace>(this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 1;
  }
  return (int)((longlong)this_00 - (longlong)pTVar2 >> 4);
}

// SetNumUninitialized @ 1424a7250

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<float,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 4,(longlong)iVar4 << 2);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<FSlateClippingState_const_&> @ 1424d3050

int __thiscall
TArray<FSlateClippingState,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FSlateClippingState_const_&>
          (TArray<FSlateClippingState,TSizedDefaultAllocator<32>_> *this,
          FSlateClippingState *param_1)

{
  FSlateClippingState *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (FSlateClippingState *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
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
                        (0x848,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    FSlateClippingState::FSlateClippingState
              ((FSlateClippingState *)((this->AllocatorInstance).Data + (longlong)iVar4 * 0x48),
               param_1);
  }
  return iVar4;
}

// AddUniqueImpl<FSlateCachedElementData_*> @ 1424d3130

int __thiscall
TArray<FSlateCachedElementData_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<FSlateCachedElementData_*>
          (TArray<FSlateCachedElementData_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
           *this,FSlateCachedElementData **param_1)

{
  ForElementType<FSlateCachedElementData_*> FVar1;
  ForElementType<FSlateCachedElementData_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSlateCachedElementData_*> FVar6;
  ForElementType<FSlateCachedElementData_*> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<FSlateCachedElementData_*>)this;
  if (FVar2 != (ForElementType<FSlateCachedElementData_*>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<FSlateCachedElementData_*>)
          ((longlong)FVar7 + (longlong)this->ArrayNum * 8);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(FSlateCachedElementData **)FVar6 == *param_1) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<FSlateCachedElementData_*>)((longlong)FVar6 + 8);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<FSlateCachedElementData_*>)this;
  if (FVar2 != (ForElementType<FSlateCachedElementData_*>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<FSlateCachedElementData_*>)this;
    if (FVar2 != (ForElementType<FSlateCachedElementData_*>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FSlateCachedElementData **)((longlong)FVar7 + (longlong)this->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedElementData_*>_>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<FSlateCachedElementData_*>)0x0) {
    this = (TArray<FSlateCachedElementData_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)FVar2;
  }
  *(FSlateCachedElementData **)((longlong)this + (longlong)iVar5 * 8) = *param_1;
  return iVar5;
}

// AddUniqueImpl<FSlateCachedElementList_*> @ 1424d3240

int __thiscall
TArray<FSlateCachedElementList_*,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<FSlateCachedElementList_*>
          (TArray<FSlateCachedElementList_*,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>_>
           *this,FSlateCachedElementList **param_1)

{
  ForElementType<FSlateCachedElementList_*> FVar1;
  ForElementType<FSlateCachedElementList_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSlateCachedElementList_*> FVar6;
  ForElementType<FSlateCachedElementList_*> FVar7;
  
  FVar2 = (this->AllocatorInstance).SecondaryData;
  FVar7 = (ForElementType<FSlateCachedElementList_*>)this;
  if (FVar2 != (ForElementType<FSlateCachedElementList_*>)0x0) {
    FVar7 = FVar2;
  }
  FVar1 = (ForElementType<FSlateCachedElementList_*>)
          ((longlong)FVar7 + (longlong)this->ArrayNum * 8);
  if (FVar7 != FVar1) {
    FVar6 = FVar7;
    do {
      if (*(FSlateCachedElementList **)FVar6 == *param_1) {
        iVar5 = (int)((longlong)FVar6 - (longlong)FVar7 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      FVar6 = (ForElementType<FSlateCachedElementList_*>)((longlong)FVar6 + 8);
    } while (FVar6 != FVar1);
  }
  FVar7 = (ForElementType<FSlateCachedElementList_*>)this;
  if (FVar2 != (ForElementType<FSlateCachedElementList_*>)0x0) {
    FVar7 = FVar2;
  }
  if ((ulonglong)FVar7 <= param_1) {
    FVar7 = (ForElementType<FSlateCachedElementList_*>)this;
    if (FVar2 != (ForElementType<FSlateCachedElementList_*>)0x0) {
      FVar7 = FVar2;
    }
    if ((param_1 < (FSlateCachedElementList **)((longlong)FVar7 + (longlong)this->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateCachedElementList_*>_>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar5 + 1;
  FVar2 = (this->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<FSlateCachedElementList_*>)0x0) {
    this = (TArray<FSlateCachedElementList_*,TSizedInlineAllocator<50,32,TSizedDefaultAllocator<32>_>_>
            *)FVar2;
  }
  *(FSlateCachedElementList **)((longlong)this + (longlong)iVar5 * 8) = *param_1;
  return iVar5;
}

// operator= @ 1424ed2e0

TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1)

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
              (8,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// Find @ 142508b10

int __thiscall
TArray<FSlateClippingState,TSizedDefaultAllocator<32>_>::Find
          (TArray<FSlateClippingState,TSizedDefaultAllocator<32>_> *this,
          FSlateClippingState *param_1)

{
  FScriptContainerElement FVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar3 = (this->AllocatorInstance).Data;
  iVar2 = this->ArrayNum;
  if (pFVar3 != pFVar3 + (longlong)iVar2 * 0x48) {
    FVar1 = (FScriptContainerElement)param_1->Flags;
    pFVar5 = pFVar3;
    do {
      if (pFVar5[0x38] == FVar1) {
        if (((pFVar5[0x34] == (FScriptContainerElement)(param_1->ScissorRect).bIsSet) &&
            (((pFVar5[0x34] == (FScriptContainerElement)0x0 ||
              (bVar4 = FSlateClippingZone::operator==
                                 ((FSlateClippingZone *)(pFVar5 + 0x10),
                                  &(param_1->ScissorRect).TypedValue), bVar4)) &&
             (*(int *)(pFVar5 + 8) == (param_1->StencilQuads).ArrayNum)))) &&
           (bVar4 = CompareItems<FSlateClippingZone,int>
                              (*(FSlateClippingZone **)pFVar5,
                               (FSlateClippingZone *)(param_1->StencilQuads).AllocatorInstance.Data,
                               *(int *)(pFVar5 + 8)), bVar4)) {
          return (int)(((longlong)pFVar5 - (longlong)pFVar3) / 0x48);
        }
      }
      pFVar5 = pFVar5 + 0x48;
    } while (pFVar5 != pFVar3 + (longlong)iVar2 * 0x48);
  }
  return -1;
}

// Insert @ 142510980

int __thiscall
TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FSlateGradientStop,TSizedDefaultAllocator<32>_> *this,FSlateGradientStop *param_1,
          int param_2)

{
  TVector2<float>_u_0 *pTVar1;
  longlong lVar2;
  FSlateGradientStop *pFVar3;
  code *pcVar4;
  TVector2<float>_u_0 TVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  pFVar3 = (FSlateGradientStop *)(this->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + this->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
  }
  iVar7 = this->ArrayNum;
  if (iVar7 == this->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x418,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar7 + 1;
  lVar2 = (longlong)param_2 * 0x18;
  pFVar8 = (this->AllocatorInstance).Data + lVar2;
  memmove(pFVar8 + 0x18,pFVar8,(longlong)(iVar7 - param_2) * 0x18);
  pFVar8 = (this->AllocatorInstance).Data;
  TVar5 = *(TVector2<float>_u_0 *)&(param_1->Color).field0_0x0;
  pTVar1 = (TVector2<float>_u_0 *)(pFVar8 + lVar2);
  *pTVar1 = (param_1->Position).field0_0x0;
  pTVar1[1] = TVar5;
  *(undefined8 *)(pFVar8 + lVar2 + 0x10) =
       *(undefined8 *)((longlong)&(param_1->Color).field0_0x0 + 8);
  return param_2;
}

// RemoveAtImpl @ 14251b460

void __thiscall
TArray<FHittestGrid::FCell,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FHittestGrid::FCell,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  DestructItems<FHittestGrid::FCell,int>((FCell *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x10,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14251b4e0

void __thiscall
TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::RemoveAtImpl
          (TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,int param_2)

{
  FArrangedWidget *_Dst;
  ForElementType<FArrangedWidget> FVar1;
  int iVar2;
  ForElementType<FArrangedWidget> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FArrangedWidget>)this;
  if (FVar1 != (ForElementType<FArrangedWidget>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (FArrangedWidget *)((longlong)FVar3 + (longlong)param_1 * 0x48);
  DestructItems<FArrangedWidget,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 * 0x48);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 14251b570

void __thiscall
TArray<FHittestGrid::FAppendedGridData,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FHittestGrid::FAppendedGridData,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  int iVar4;
  
  pFVar2 = (this->AllocatorInstance).Data;
  plVar3 = *(longlong **)(pFVar2 + (longlong)param_1 * 0x18 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  iVar4 = ~param_1 + this->ArrayNum;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove(pFVar2 + (longlong)param_1 * 0x18,pFVar2 + (longlong)(this->ArrayNum - iVar4) * 0x18,
            (longlong)iVar4 * 0x18);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14251b620

void __thiscall
TArray<TSharedPtr<FSlateCachedElementList,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSharedPtr<FSlateCachedElementList,1>,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TSharedPtr<FSlateCachedElementList,1> *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = (TSharedPtr<FSlateCachedElementList,1> *)(pFVar1 + (longlong)param_1 * 0x10);
  DestructItems<TSharedPtr<FSlateCachedElementList,1>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (param_2 < iVar2) {
    iVar2 = param_2;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 14251b6b0

void __thiscall
TArray<TSharedRef<FSlateWindowElementList,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSharedRef<FSlateWindowElementList,1>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 14251b730

void __thiscall
TArray<FSlateCachedClipState,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FSlateCachedClipState,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// Insert @ 14258b9f0

int __thiscall
TArray<TUniquePtr<UE::Slate::Private::SContainerAttribute::FSlot,TDefaultDelete<UE::Slate::Private::SContainerAttribute::FSlot>_>,TSizedDefaultAllocator<32>_>
::Insert(TArray<TUniquePtr<UE::Slate::Private::SContainerAttribute::FSlot,TDefaultDelete<UE::Slate::Private::SContainerAttribute::FSlot>_>,TSizedDefaultAllocator<32>_>
         *this,TUniquePtr<UE::Slate::Private::SContainerAttribute::FSlot,TDefaultDelete<UE::Slate::Private::SContainerAttribute::FSlot>_>
               *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->AllocatorInstance).Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (longlong)this->ArrayMax * 8)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = this->ArrayNum;
  if (iVar3 == this->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar4 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar3 + 1;
  pFVar4 = pFVar4 + (longlong)param_2 * 8;
  memmove(pFVar4 + 8,pFVar4,(longlong)(iVar3 - param_2) << 3);
  *(FSlot **)((this->AllocatorInstance).Data + (longlong)param_2 * 8) = param_1->Ptr;
  param_1->Ptr = (FSlot *)0x0;
  return param_2;
}

// RemoveAt @ 14258f180

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TUniquePtr<UE::Slate::Private::SContainerAttribute::FSlot,TDefaultDelete<UE::Slate::Private::SContainerAttribute::FSlot>_>,TSizedDefaultAllocator<32>_>
::RemoveAt(TArray<TUniquePtr<UE::Slate::Private::SContainerAttribute::FSlot,TDefaultDelete<UE::Slate::Private::SContainerAttribute::FSlot>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (param_1 < this->ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->AllocatorInstance).Data;
  puVar2 = *(undefined8 **)(pFVar1 + (longlong)param_1 * 8);
  pFVar1 = pFVar1 + (longlong)param_1 * 8;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  iVar6 = this->ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(pFVar1,pFVar1 + 8,(longlong)iVar6 << 3);
  }
  iVar6 = this->ArrayNum + -1;
  this->ArrayNum = iVar6;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar6,&this->ArrayMax);
  }
  return;
}

// Insert @ 1425e7f60

int __thiscall
TArray<FSlateAttributeMetaData::FGetterItem,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
::Insert(TArray<FSlateAttributeMetaData::FGetterItem,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
         *this,FGetterItem *param_1,int param_2)

{
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSlateAttributeMetaData::FGetterItem> FVar5;
  longlong lVar6;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)this;
  if (FVar1 != (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
    FVar5 = FVar1;
  }
  if ((ulonglong)FVar5 <= param_1) {
    FVar5 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)this;
    if (FVar1 != (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
      FVar5 = FVar1;
    }
    if ((param_1 < (FGetterItem *)((longlong)this->ArrayMax * 0x20 + (longlong)FVar5)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FSlateAttributeMetaData::FGetterItem>_>
                      (0x820,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar4 + 1;
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<FSlateAttributeMetaData::FGetterItem>)this;
  if (FVar1 != (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
    FVar5 = FVar1;
  }
  lVar6 = (longlong)param_2 * 0x20;
  memmove((void *)((longlong)FVar5 + lVar6 + 0x20),(void *)((longlong)FVar5 + lVar6),
          (longlong)(iVar4 - param_2) << 5);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<FSlateAttributeMetaData::FGetterItem>)0x0) {
    this = (TArray<FSlateAttributeMetaData::FGetterItem,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  *(FSlateAttributeBase **)(lVar6 + (longlong)this) = param_1->Attribute;
  *(ISlateAttributeGetter **)(lVar6 + 8 + (longlong)this) = (param_1->Getter).Ptr;
  (param_1->Getter).Ptr = (ISlateAttributeGetter *)0x0;
  *(FAttribute **)(lVar6 + 0x10 + (longlong)this) = param_1->CachedAttributeDescriptor;
  *(uint *)(lVar6 + 0x18 + (longlong)this) = param_1->SortOrder;
  *(int *)(lVar6 + 0x1c + (longlong)this) = param_1->AttributeContainerOffset;
  return param_2;
}

// Insert @ 1425e80b0

int __thiscall
TArray<TSharedRef<ISlateMetaData,1>,TSizedDefaultAllocator<32>_>::Insert
          (TArray<TSharedRef<ISlateMetaData,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedRef<ISlateMetaData,1> *param_1,int param_2)

{
  TSharedRef<ISlateMetaData,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  
  pTVar1 = (TSharedRef<ISlateMetaData,1> *)(this->AllocatorInstance).Data;
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
  *(ISlateMetaData **)(pFVar6 + lVar7) = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar6 + lVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return param_2;
}

// Insert @ 1425e81b0

int __thiscall
TArray<TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_>,TSizedDefaultAllocator<32>_>
::Insert(TArray<TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_>,TSizedDefaultAllocator<32>_>
         *this,TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_> *param_1,
        int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->AllocatorInstance).Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (longlong)this->ArrayMax * 8)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = this->ArrayNum;
  if (iVar3 == this->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar4 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar3 + 1;
  pFVar4 = pFVar4 + (longlong)param_2 * 8;
  memmove(pFVar4 + 8,pFVar4,(longlong)(iVar3 - param_2) << 3);
  *(FOverlaySlot **)((this->AllocatorInstance).Data + (longlong)param_2 * 8) = param_1->Ptr;
  param_1->Ptr = (FOverlaySlot *)0x0;
  return param_2;
}

// Insert @ 1425e82a0

int __thiscall
TArray<TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_>,TSizedDefaultAllocator<32>_>::
Insert(TArray<TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_>,TSizedDefaultAllocator<32>_>
       *this,TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->AllocatorInstance).Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (longlong)this->ArrayMax * 8)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = this->ArrayNum;
  if (iVar3 == this->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar4 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar3 + 1;
  pFVar4 = pFVar4 + (longlong)param_2 * 8;
  memmove(pFVar4 + 8,pFVar4,(longlong)(iVar3 - param_2) << 3);
  *(FSlot **)((this->AllocatorInstance).Data + (longlong)param_2 * 8) = param_1->Ptr;
  param_1->Ptr = (FSlot *)0x0;
  return param_2;
}

// RemoveAt @ 1425f7f10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_>,TSizedDefaultAllocator<32>_>
::RemoveAt(TArray<TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (param_1 < this->ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->AllocatorInstance).Data;
  puVar2 = *(undefined8 **)(pFVar1 + (longlong)param_1 * 8);
  pFVar1 = pFVar1 + (longlong)param_1 * 8;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  iVar6 = this->ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(pFVar1,pFVar1 + 8,(longlong)iVar6 << 3);
  }
  iVar6 = this->ArrayNum + -1;
  this->ArrayNum = iVar6;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar6,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1425f8000

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_>,TSizedDefaultAllocator<32>_>::
RemoveAt(TArray<TUniquePtr<SBoxPanel::FSlot,TDefaultDelete<SBoxPanel::FSlot>_>,TSizedDefaultAllocator<32>_>
         *this,int param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (param_1 < this->ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->AllocatorInstance).Data;
  puVar2 = *(undefined8 **)(pFVar1 + (longlong)param_1 * 8);
  pFVar1 = pFVar1 + (longlong)param_1 * 8;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  iVar6 = this->ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(pFVar1,pFVar1 + 8,(longlong)iVar6 << 3);
  }
  iVar6 = this->ArrayNum + -1;
  this->ArrayNum = iVar6;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&this->AllocatorInstance,iVar6,&this->ArrayMax);
  }
  return;
}

// RemoveAtSwapImpl @ 1425f8190

void __thiscall
TArray<TSharedRef<ISlateMetaData,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSharedRef<ISlateMetaData,1>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(_Dst + 8));
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 1425f8210

void __thiscall
TArray<TSharedRef<ISlateMetaData,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSharedRef<ISlateMetaData,1>,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TSharedRef<ISlateMetaData,1> *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = (TSharedRef<ISlateMetaData,1> *)(pFVar1 + (longlong)param_1 * 0x10);
  DestructItems<TSharedRef<ISlateMetaData,1>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (param_2 < iVar2) {
    iVar2 = param_2;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x10,(longlong)iVar2 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveSingle @ 1425f8860

int __thiscall
TArray<TSharedRef<FActiveTimerHandle,1>,TSizedDefaultAllocator<32>_>::RemoveSingle
          (TArray<TSharedRef<FActiveTimerHandle,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedRef<FActiveTimerHandle,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TSharedRef<FActiveTimerHandle,1> *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 0x10) {
    pFVar3 = pFVar1;
    do {
      if (*(FActiveTimerHandle **)pFVar3 == param_1->Object) {
        iVar2 = (int)((longlong)pFVar3 - (longlong)pFVar1 >> 4);
        if (iVar2 == -1) {
          return 0;
        }
        _Dst = (TSharedRef<FActiveTimerHandle,1> *)(pFVar1 + (longlong)iVar2 * 0x10);
        DestructItems<TSharedRef<FActiveTimerHandle,1>,int>(_Dst,1);
        memmove(_Dst,_Dst + 1,(longlong)((this->ArrayNum - iVar2) + -1) << 4);
        this->ArrayNum = this->ArrayNum + -1;
        return 1;
      }
      pFVar3 = pFVar3 + 0x10;
    } while (pFVar3 != pFVar1 + (longlong)this->ArrayNum * 0x10);
  }
  return 0;
}

