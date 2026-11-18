// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Media
// Functions: 11

// AddUniqueImpl<TWeakPtr<IMediaClockSink,1>_const_&> @ 146bed8a0

int __thiscall
TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TWeakPtr<IMediaClockSink,1>_const_&>
          (TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<IMediaClockSink,1> *param_1)

{
  TWeakPtr<IMediaClockSink,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pTVar1 = (TWeakPtr<IMediaClockSink,1> *)(this->AllocatorInstance).Data;
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
    *(IMediaClockSink **)pFVar6 = param_1->Object;
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

// AddUniqueImpl<IMediaCaptureSupport_*> @ 146bed980

int __thiscall
TArray<IMediaCaptureSupport_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<IMediaCaptureSupport_*>
          (TArray<IMediaCaptureSupport_*,TSizedDefaultAllocator<32>_> *this,
          IMediaCaptureSupport **param_1)

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
      if (*(IMediaCaptureSupport **)pFVar5 == *param_1) {
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
  *(IMediaCaptureSupport **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<IMediaPlayerFactory_*> @ 146beda80

int __thiscall
TArray<IMediaPlayerFactory_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<IMediaPlayerFactory_*>
          (TArray<IMediaPlayerFactory_*,TSizedDefaultAllocator<32>_> *this,
          IMediaPlayerFactory **param_1)

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
      if (*(IMediaPlayerFactory **)pFVar5 == *param_1) {
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
  *(IMediaPlayerFactory **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<TWeakPtr<IMediaClockSink,1>_> @ 146bedb80

int __thiscall
TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TWeakPtr<IMediaClockSink,1>_>
          (TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<IMediaClockSink,1> *param_1)

{
  TWeakPtr<IMediaClockSink,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pTVar1 = (TWeakPtr<IMediaClockSink,1> *)(this->AllocatorInstance).Data;
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
    this->ArrayNum = iVar4 + 1;
    pFVar5 = (this->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(IMediaClockSink **)pFVar5 = param_1->Object;
    *(TReferenceControllerBase<1> **)(pFVar5 + 8) =
         (param_1->WeakReferenceCount).ReferenceController;
    (param_1->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (IMediaClockSink *)0x0;
  }
  return iVar4;
}

// AddUniqueImpl<TWeakPtr<IMediaTickable,1>_> @ 146bedc60

int __thiscall
TArray<TWeakPtr<IMediaTickable,1>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TWeakPtr<IMediaTickable,1>_>
          (TArray<TWeakPtr<IMediaTickable,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<IMediaTickable,1> *param_1)

{
  TWeakPtr<IMediaTickable,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pTVar1 = (TWeakPtr<IMediaTickable,1> *)(this->AllocatorInstance).Data;
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
    this->ArrayNum = iVar4 + 1;
    pFVar5 = (this->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(IMediaTickable **)pFVar5 = param_1->Object;
    *(TReferenceControllerBase<1> **)(pFVar5 + 8) =
         (param_1->WeakReferenceCount).ReferenceController;
    (param_1->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    param_1->Object = (IMediaTickable *)0x0;
  }
  return iVar4;
}

// Contains<TSharedRef<IMediaClockSink,1>_> @ 146bedd40

bool __thiscall
TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_>::
Contains<TSharedRef<IMediaClockSink,1>_>
          (TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedRef<IMediaClockSink,1> *param_1)

{
  IMediaClockSink *pIVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  IMediaClockSink *pIVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  
  pFVar7 = (this->AllocatorInstance).Data;
  pFVar5 = pFVar7 + (longlong)this->ArrayNum * 0x10;
  do {
    if (pFVar7 == pFVar5) {
      return false;
    }
    pTVar4 = *(TReferenceControllerBase<1> **)(pFVar7 + 8);
    pIVar6 = (IMediaClockSink *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar4->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar4 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_146bedd92;
        }
        LOCK();
        aVar3 = pTVar4->SharedReferenceCount;
        bVar8 = aVar2 == aVar3;
        if (bVar8) {
          pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar8);
      pIVar6 = *(IMediaClockSink **)pFVar7;
    }
LAB_146bedd92:
    pIVar1 = param_1->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (pIVar1 == pIVar6) {
      return true;
    }
    pFVar7 = pFVar7 + 0x10;
  } while( true );
}

// Find @ 146bee5e0

int __thiscall
TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<IMediaClockSink,1> *param_1)

{
  int iVar1;
  TWeakPtr<IMediaClockSink,1> *pTVar2;
  bool bVar3;
  TWeakPtr<IMediaClockSink,1> *this_00;
  
  pTVar2 = (TWeakPtr<IMediaClockSink,1> *)(this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pTVar2;
  while( true ) {
    if (this_00 == pTVar2 + iVar1) {
      return -1;
    }
    bVar3 = TWeakPtr<IMediaClockSink,1>::UEOpEquals<IMediaClockSink>(this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 1;
  }
  return (int)((longlong)this_00 - (longlong)pTVar2 >> 4);
}

// Find @ 146bee660

int __thiscall
TArray<TWeakPtr<IMediaTickable,1>,TSizedDefaultAllocator<32>_>::Find
          (TArray<TWeakPtr<IMediaTickable,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<IMediaTickable,1> *param_1)

{
  int iVar1;
  TWeakPtr<IMediaTickable,1> *pTVar2;
  bool bVar3;
  TWeakPtr<IMediaTickable,1> *this_00;
  
  pTVar2 = (TWeakPtr<IMediaTickable,1> *)(this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  this_00 = pTVar2;
  while( true ) {
    if (this_00 == pTVar2 + iVar1) {
      return -1;
    }
    bVar3 = TWeakPtr<IMediaTickable,1>::UEOpEquals<IMediaTickable>(this_00,param_1);
    if (bVar3) break;
    this_00 = this_00 + 1;
  }
  return (int)((longlong)this_00 - (longlong)pTVar2 >> 4);
}

// RemoveAtSwapImpl @ 146bee890

void __thiscall
TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  pFVar2 = (this->AllocatorInstance).Data;
  _Dst = pFVar2 + (longlong)param_1 * 0x10;
  plVar3 = *(longlong **)(_Dst + 8);
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
    memmove(_Dst,pFVar2 + (longlong)(this->ArrayNum - iVar4) * 0x10,(longlong)iVar4 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveAtSwapImpl @ 146bee940

void __thiscall
TArray<TWeakPtr<IMediaTickable,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TWeakPtr<IMediaTickable,1>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  pFVar2 = (this->AllocatorInstance).Data;
  _Dst = pFVar2 + (longlong)param_1 * 0x10;
  plVar3 = *(longlong **)(_Dst + 8);
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
    memmove(_Dst,pFVar2 + (longlong)(this->ArrayNum - iVar4) * 0x10,(longlong)iVar4 << 4);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveSwap @ 146beeaf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<TWeakPtr<IMediaClockSink,1>,TSizedDefaultAllocator<32>_> *this,
          TWeakPtr<IMediaClockSink,1> *param_1,EAllowShrinking param_2)

{
  TWeakPtr<IMediaClockSink,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  pTVar1 = (TWeakPtr<IMediaClockSink,1> *)(this->AllocatorInstance).Data;
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  bVar3 = false;
  uVar8 = 0;
  iVar9 = iVar5;
  if (0 < iVar5) {
    do {
      uVar7 = 0;
      if ((int)uVar8 < iVar9) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      bVar4 = TWeakPtr<IMediaClockSink,1>::UEOpEquals<IMediaClockSink>
                        ((TWeakPtr<IMediaClockSink,1> *)
                         ((this->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10),param_1);
      uVar7 = uVar8;
      if (bVar4) {
        uVar7 = uVar8 - 1;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        RemoveAtSwapImpl(this,uVar8);
      }
      iVar9 = this->ArrayNum;
      uVar8 = uVar7 + 1;
    } while ((int)uVar8 < iVar9);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&this->AllocatorInstance,iVar9,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

