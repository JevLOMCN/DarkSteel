// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 6

// HeapPush<FDS_Predicate> @ 149488a70

int __thiscall
TArray<FWN_TileNode_*,TSizedDefaultAllocator<32>_>::HeapPush<FDS_Predicate>
          (TArray<FWN_TileNode_*,TSizedDefaultAllocator<32>_> *this,FWN_TileNode **param_1,
          FDS_Predicate *param_2)

{
  double *pdVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  
  pFVar3 = (this->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)this->ArrayMax * 8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  iVar7 = this->ArrayNum;
  if (iVar7 == this->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar7 + 1;
  *(FWN_TileNode **)((this->AllocatorInstance).Data + (longlong)iVar7 * 8) = *param_1;
  pFVar3 = (this->AllocatorInstance).Data;
  iVar7 = this->ArrayNum + -1;
  if (0 < iVar7) {
    while( true ) {
      iVar8 = (iVar7 + -1) / 2;
      lVar4 = *(longlong *)(pFVar3 + (longlong)iVar7 * 8);
      dVar2 = *(double *)(*(longlong *)(pFVar3 + (longlong)iVar8 * 8) + 0x18);
      pdVar1 = (double *)(lVar4 + 0x18);
      if (dVar2 < *pdVar1 || dVar2 == *pdVar1) break;
      *(longlong *)(pFVar3 + (longlong)iVar7 * 8) = *(longlong *)(pFVar3 + (longlong)iVar8 * 8);
      *(longlong *)(pFVar3 + (longlong)iVar8 * 8) = lVar4;
      iVar7 = iVar8;
      if (iVar8 < 1) {
        return iVar8;
      }
    }
  }
  return iVar7;
}

// operator= @ 149490e80

TArray<FHitResult,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FHitResult,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FHitResult,TSizedDefaultAllocator<32>_> *this,
          TArray<FHitResult,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FHitResult *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (FHitResult *)(param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<FHitResult,FHitResult,int>((this->AllocatorInstance).Data,pFVar2,iVar1);
  }
  return this;
}

// operator= @ 149490f10

TArray<FOverlapResult,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FOverlapResult,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *this,
          TArray<FOverlapResult,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FOverlapResult *pFVar2;
  
  if (this != param_1) {
    pFVar2 = (FOverlapResult *)(param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    ConstructItems<FOverlapResult,FOverlapResult,int>((this->AllocatorInstance).Data,pFVar2,iVar1);
  }
  return this;
}

// RemoveAtSwapImpl @ 1494aade0

void __thiscall
TArray<TSharedPtr<IHttpRequest,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<TSharedPtr<IHttpRequest,1>,TSizedDefaultAllocator<32>_> *this,int param_1)

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

// RemoveSwap @ 1494ab4d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<TSharedPtr<IHttpRequest,1>,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<TSharedPtr<IHttpRequest,1>,TSizedDefaultAllocator<32>_> *this,
          TSharedPtr<IHttpRequest,1> *param_1,EAllowShrinking param_2)

{
  TSharedPtr<IHttpRequest,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  
  pTVar1 = (TSharedPtr<IHttpRequest,1> *)(this->AllocatorInstance).Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) {
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
  bVar3 = false;
  uVar8 = 0;
  if (0 < iVar5) {
    lVar9 = 0;
    iVar10 = iVar5;
    do {
      uVar7 = 0;
      if ((int)uVar8 < iVar10) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
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
      uVar7 = uVar8;
      if (*(IHttpRequest **)((this->AllocatorInstance).Data + lVar9) == param_1->Object) {
        uVar7 = uVar8 - 1;
        lVar9 = lVar9 + -0x10;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar8 < this->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
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
        RemoveAtSwapImpl(this,uVar8);
      }
      iVar10 = this->ArrayNum;
      uVar8 = uVar7 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar8 < iVar10);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&this->AllocatorInstance,iVar10,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

// SetNum @ 1494ad540

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TObjectPtr<UTexture>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TObjectPtr<UTexture>,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 8,0,(longlong)(param_1 - iVar5) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
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
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 8,(longlong)iVar5 << 3);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

