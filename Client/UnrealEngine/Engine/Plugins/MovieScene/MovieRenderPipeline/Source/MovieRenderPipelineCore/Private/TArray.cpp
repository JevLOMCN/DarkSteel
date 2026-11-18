// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 30

// AddUniqueImpl<UMovieGraphConfig_*_const_&> @ 14dc6bfa0

int __thiscall
TArray<UMovieGraphConfig_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UMovieGraphConfig_*_const_&>
          (TArray<UMovieGraphConfig_*,TSizedDefaultAllocator<32>_> *this,UMovieGraphConfig **param_1
          )

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
      if (*(UMovieGraphConfig **)pFVar5 == *param_1) {
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
  *(UMovieGraphConfig **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<UMovieGraphNode_*> @ 14dc6c0a0

int __thiscall
TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UMovieGraphNode_*>
          (TArray<UMovieGraphNode_*,TSizedDefaultAllocator<32>_> *this,UMovieGraphNode **param_1)

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
      if (*(UMovieGraphNode **)pFVar5 == *param_1) {
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
  *(UMovieGraphNode **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// CopyToEmpty<UMovieGraphPin_*,int> @ 14dc6c5f0

void __thiscall
TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_>::CopyToEmpty<UMovieGraphPin_*,int>
          (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *this,UMovieGraphPin **param_1,
          int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 3);
  }
  return;
}

// Insert @ 14dc84160

int __thiscall
TArray<TObjectPtr<UMovieGraphVariable>,TSizedDefaultAllocator<32>_>::Insert
          (TArray<TObjectPtr<UMovieGraphVariable>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UMovieGraphVariable> *param_1,int param_2)

{
  UMovieGraphVariable *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->AllocatorInstance).Data;
  if ((pFVar5 <= param_1) && (param_1 < pFVar5 + (longlong)this->ArrayMax * 8)) {
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
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar5 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  pFVar5 = pFVar5 + (longlong)param_2 * 8;
  memmove(pFVar5 + 8,pFVar5,(longlong)(iVar4 - param_2) << 3);
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  *(UMovieGraphVariable **)((this->AllocatorInstance).Data + (longlong)param_2 * 8) = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMovieGraphVariable *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return param_2;
}

// AddUniqueImpl<FMovieGraphPropertyInfo> @ 14dc9f530

int __thiscall
TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FMovieGraphPropertyInfo>
          (TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_> *this,
          FMovieGraphPropertyInfo *param_1)

{
  FMovieGraphPropertyInfo *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = Find(this,param_1);
  if (iVar4 == -1) {
    pFVar1 = (FMovieGraphPropertyInfo *)(this->AllocatorInstance).Data;
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
                        (0x838,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar4 + 1;
    FMovieGraphPropertyInfo::FMovieGraphPropertyInfo
              ((FMovieGraphPropertyInfo *)((this->AllocatorInstance).Data + (longlong)iVar4 * 0x38),
               param_1);
  }
  return iVar4;
}

// Contains<FMovieGraphRenderDataIdentifier> @ 14dca0180

bool __thiscall
TArray<FMovieGraphRenderDataIdentifier,TSizedDefaultAllocator<32>_>::
Contains<FMovieGraphRenderDataIdentifier>
          (TArray<FMovieGraphRenderDataIdentifier,TSizedDefaultAllocator<32>_> *this,
          FMovieGraphRenderDataIdentifier *param_1)

{
  FName *pFVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  FName *pFVar5;
  bool bVar6;
  
  pFVar5 = (FName *)(this->AllocatorInstance).Data;
  pFVar1 = pFVar5 + (longlong)this->ArrayNum * 9;
  do {
    if (pFVar5 == pFVar1) {
      return false;
    }
    if (*pFVar5 == param_1->RootBranchName) {
      uVar2 = pFVar5[2].ComparisonIndex.Value;
      uVar3 = (param_1->LayerName).Data.ArrayNum;
      if (uVar2 == uVar3) {
        if (1 < (int)uVar2) {
          iVar4 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)pFVar5[1],
                             (wchar_t *)(param_1->LayerName).Data.AllocatorInstance.Data);
          bVar6 = iVar4 == 0;
          goto LAB_14dca01e1;
        }
      }
      else {
        bVar6 = uVar2 + uVar3 == 1;
LAB_14dca01e1:
        if (!bVar6) goto LAB_14dca0270;
      }
      uVar2 = pFVar5[4].ComparisonIndex.Value;
      uVar3 = (param_1->RendererName).Data.ArrayNum;
      if (uVar2 == uVar3) {
        if (1 < (int)uVar2) {
          iVar4 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)pFVar5[3],
                             (wchar_t *)(param_1->RendererName).Data.AllocatorInstance.Data);
          bVar6 = iVar4 == 0;
          goto LAB_14dca0211;
        }
      }
      else {
        bVar6 = uVar2 + uVar3 == 1;
LAB_14dca0211:
        if (!bVar6) goto LAB_14dca0270;
      }
      uVar2 = pFVar5[6].ComparisonIndex.Value;
      uVar3 = (param_1->SubResourceName).Data.ArrayNum;
      if (uVar2 == uVar3) {
        if (1 < (int)uVar2) {
          iVar4 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)pFVar5[5],
                             (wchar_t *)(param_1->SubResourceName).Data.AllocatorInstance.Data);
          bVar6 = iVar4 == 0;
          goto LAB_14dca023d;
        }
      }
      else {
        bVar6 = uVar2 + uVar3 == 1;
LAB_14dca023d:
        if (!bVar6) goto LAB_14dca0270;
      }
      uVar2 = pFVar5[8].ComparisonIndex.Value;
      uVar3 = (param_1->CameraName).Data.ArrayNum;
      if (uVar2 == uVar3) {
        if ((int)uVar2 < 2) {
          return true;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)pFVar5[7],
                           (wchar_t *)(param_1->CameraName).Data.AllocatorInstance.Data);
        bVar6 = iVar4 == 0;
      }
      else {
        bVar6 = uVar2 + uVar3 == 1;
      }
      if (bVar6) {
        return true;
      }
    }
LAB_14dca0270:
    pFVar5 = pFVar5 + 9;
  } while( true );
}

// operator= @ 14dcb3470

TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *this,
          TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *param_1)

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
              (8,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// operator= @ 14dcb3510

TArray<FMovieGraphRenderOutputData,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FMovieGraphRenderOutputData,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FMovieGraphRenderOutputData,TSizedDefaultAllocator<32>_> *this,
          TArray<FMovieGraphRenderOutputData,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FMovieGraphRenderOutputData *pFVar3;
  
  if (this != param_1) {
    DestructItems<FMovieGraphRenderOutputData,int>
              ((FMovieGraphRenderOutputData *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FMovieGraphRenderOutputData *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FMovieGraphRenderOutputData,FMovieGraphRenderOutputData,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// Find @ 14dcc84e0

int __thiscall
TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_>::Find
          (TArray<FMovieGraphPropertyInfo,TSizedDefaultAllocator<32>_> *this,
          FMovieGraphPropertyInfo *param_1)

{
  int iVar1;
  FName *pFVar2;
  bool bVar3;
  FName *pFVar4;
  
  pFVar2 = (FName *)(this->AllocatorInstance).Data;
  iVar1 = this->ArrayNum;
  pFVar4 = pFVar2;
  while( true ) {
    if (pFVar4 == pFVar2 + (longlong)iVar1 * 7) {
      return -1;
    }
    if ((((*pFVar4 == param_1->Name) &&
         (bVar3 = FText::EqualTo((FText *)(pFVar4 + 1),&param_1->ContextMenuName,Default), bVar3))
        && (pFVar4[3] == param_1->PromotionName)) &&
       ((((bool)(char)pFVar4[4].ComparisonIndex.Value == param_1->bIsDynamicProperty &&
         (*(EMovieGraphValueType *)((longlong)&pFVar4[4].ComparisonIndex.Value + 1) ==
          param_1->ValueType)) &&
        ((pFVar4[5] == (FName)(param_1->ValueTypeObject).field0_0x0.DebugPtr &&
         ((bool)(char)pFVar4[6].ComparisonIndex.Value == param_1->bIsPermanentlyExposed)))))) break;
    pFVar4 = pFVar4 + 7;
  }
  return (int)(((longlong)pFVar4 - (longlong)pFVar2) / 0x38);
}

// Insert @ 14dcd5c70

int __thiscall
TArray<TObjectPtr<UMovieGraphConditionGroupQueryBase>,TSizedDefaultAllocator<32>_>::Insert
          (TArray<TObjectPtr<UMovieGraphConditionGroupQueryBase>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UMovieGraphConditionGroupQueryBase> *param_1,int param_2)

{
  UMovieGraphConditionGroupQueryBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar5 = (this->AllocatorInstance).Data;
  if ((pFVar5 <= param_1) && (param_1 < pFVar5 + (longlong)this->ArrayMax * 8)) {
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
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar5 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  pFVar5 = pFVar5 + (longlong)param_2 * 8;
  memmove(pFVar5 + 8,pFVar5,(longlong)(iVar4 - param_2) << 3);
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  *(UMovieGraphConditionGroupQueryBase **)((this->AllocatorInstance).Data + (longlong)param_2 * 8) =
       pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UMovieGraphConditionGroupQueryBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return param_2;
}

// InsertUninitializedImpl @ 14dcd5d60

void __thiscall
TArray<TTuple<int,UE::MovieGraph::FMovieGraphOutputMergerFrame>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<int,UE::MovieGraph::FMovieGraphOutputMergerFrame>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1f8,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x1f8;
  memmove(_Src + (longlong)param_2 * 0x1f8,_Src,(longlong)(iVar1 - param_1) * 0x1f8);
  return;
}

// Remove @ 14dcdea80

int __thiscall
TArray<TObjectPtr<UMovieGraphEdge>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TObjectPtr<UMovieGraphEdge>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UMovieGraphEdge> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
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
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(UMovieGraphEdge **)pFVar1 != (param_1->field0_0x0).DebugPtr;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(UMovieGraphEdge **)(pFVar1 + lVar6 * 8) != (param_1->field0_0x0).DebugPtr))
        break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// Remove @ 14dcdebf0

int __thiscall
TArray<TObjectPtr<UMovieGraphModifierBase>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TObjectPtr<UMovieGraphModifierBase>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UMovieGraphModifierBase> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
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
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(UMovieGraphModifierBase **)pFVar1 != (param_1->field0_0x0).DebugPtr;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(UMovieGraphModifierBase **)(pFVar1 + lVar6 * 8) !=
                     (param_1->field0_0x0).DebugPtr)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// RemoveAtSwapImpl @ 14dcded60

void __thiscall
TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  int iVar4;
  
  pFVar2 = (this->AllocatorInstance).Data;
  puVar3 = *(undefined8 **)(pFVar2 + (longlong)param_1 * 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  iVar4 = ~param_1 + this->ArrayNum;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove(pFVar2 + (longlong)param_1 * 8,pFVar2 + (longlong)(this->ArrayNum - iVar4) * 8,
            (longlong)iVar4 << 3);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// Contains<FSoftClassPath> @ 14dcfbb40

bool __thiscall
TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>::Contains<FSoftClassPath>
          (TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> *this,FSoftClassPath *param_1)

{
  bool bVar1;
  FSoftObjectPath *this_00;
  FSoftObjectPath *pFVar2;
  
  this_00 = (FSoftObjectPath *)(this->AllocatorInstance).Data;
  pFVar2 = this_00 + this->ArrayNum;
  while( true ) {
    if (this_00 == pFVar2) {
      return false;
    }
    bVar1 = FSoftObjectPath::operator==(this_00,(FSoftObjectPath *)param_1);
    if (bVar1) break;
    this_00 = this_00 + 1;
  }
  return true;
}

// CopyToEmpty<UMovieSceneTrack_*,int> @ 14dcfbbb0

void __thiscall
TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_>::CopyToEmpty<UMovieSceneTrack_*,int>
          (TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> *this,UMovieSceneTrack **param_1,
          int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 3);
  }
  return;
}

// CopyToEmpty<FMovieSceneNestedSequenceTransform,int> @ 14dcfbc40

void __thiscall
TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_>::
CopyToEmpty<FMovieSceneNestedSequenceTransform,int>
          (TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *this,
          FMovieSceneNestedSequenceTransform *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// operator= @ 14dd0e6f0

TArray<FMoviePipelineShotOutputData,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FMoviePipelineShotOutputData,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FMoviePipelineShotOutputData,TSizedDefaultAllocator<32>_> *this,
          TArray<FMoviePipelineShotOutputData,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FMoviePipelineShotOutputData *pFVar3;
  
  if (this != param_1) {
    DestructItems<FMoviePipelineShotOutputData,int>
              ((FMoviePipelineShotOutputData *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FMoviePipelineShotOutputData *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FMoviePipelineShotOutputData,FMoviePipelineShotOutputData,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// SetNum @ 14dd40210

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>,TSizedDefaultAllocator<32>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,param_1 - iVar5);
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x10,(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>_const_&> @ 14dd61c80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

int __thiscall
TArray<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>_const_&>
          (TArray<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSizedDefaultAllocator<32>_>
           *this,TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *param_1)

{
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)
           (this->AllocatorInstance).Data;
  if (pTVar1 != pTVar1 + this->ArrayNum) {
    pTVar6 = pTVar1;
    do {
      if (pTVar6->Object == param_1->Object) {
        iVar5 = (int)((longlong)pTVar6 - (longlong)pTVar1 >> 4);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pTVar6 = pTVar6 + 1;
    } while (pTVar6 != pTVar1 + this->ArrayNum);
  }
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) &&
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
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  this->ArrayNum = iVar5 + 1;
  pFVar7 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(FCameraCutSubSectionHierarchyNode **)pFVar7 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return iVar5;
}

// TArray<float,TSizedDefaultAllocator<64>_> @ 14dd69b20

TArray<float,TSizedDefaultAllocator<64>_> * __thiscall
TArray<float,TSizedDefaultAllocator<64>_>::TArray<float,TSizedDefaultAllocator<64>_>
          (TArray<float,TSizedDefaultAllocator<64>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<float,TSizedDefaultAllocator<64>_> @ 14dd6b930

void __thiscall
TArray<float,TSizedDefaultAllocator<64>_>::~TArray<float,TSizedDefaultAllocator<64>_>
          (TArray<float,TSizedDefaultAllocator<64>_> *this)

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

// InsertUninitializedImpl @ 14dd8fc50

void __thiscall
TArray<TTuple<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<FMoviePipelineFrameOutputState,FMoviePipelineMergerOutputFrame>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x2a8,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x2a8;
  memmove(_Src + (longlong)param_2 * 0x2a8,_Src,(longlong)(iVar1 - param_1) * 0x2a8);
  return;
}

// Remove @ 14dd99380

int __thiscall
TArray<TObjectPtr<UMoviePipelineExecutorJob>,TSizedDefaultAllocator<32>_>::Remove
          (TArray<TObjectPtr<UMoviePipelineExecutorJob>,TSizedDefaultAllocator<32>_> *this,
          TObjectPtr<UMoviePipelineExecutorJob> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
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
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  lVar5 = (longlong)iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  iVar9 = 0;
  bVar3 = *(UMoviePipelineExecutorJob **)pFVar1 != (param_1->field0_0x0).DebugPtr;
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar5) {
      do {
        if (bVar3 != (*(UMoviePipelineExecutorJob **)(pFVar1 + lVar6 * 8) !=
                     (param_1->field0_0x0).DebugPtr)) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar5);
    }
    if (bVar3 != false) {
      if (iVar9 != iVar7) {
        memmove(pFVar1 + (longlong)iVar9 * 8,pFVar1 + (longlong)iVar7 * 8,
                (longlong)(iVar8 - iVar7) << 3);
      }
      iVar9 = iVar9 + (iVar8 - iVar7);
    }
    bVar3 = (bool)(bVar3 ^ 1);
    iVar7 = iVar8;
    if (lVar5 <= lVar6) {
      this->ArrayNum = iVar9;
      return iVar4 - iVar9;
    }
  } while( true );
}

// RemoveAtImpl @ 14dd994f0

void __thiscall
TArray<FImageOverlappedPlane,TSizedDefaultAllocator<64>_>::RemoveAtImpl
          (TArray<FImageOverlappedPlane,TSizedDefaultAllocator<64>_> *this,long64 param_1,
          long64 param_2)

{
  FImageOverlappedPlane *_Dst;
  longlong lVar1;
  
  _Dst = (FImageOverlappedPlane *)((this->AllocatorInstance).Data + param_1 * 0x20);
  DestructItems<FImageOverlappedPlane,__int64>(_Dst,param_2);
  lVar1 = (this->ArrayNum - param_1) - param_2;
  if (lVar1 != 0) {
    memmove(_Dst,_Dst + param_2,lVar1 * 0x20);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14dd99570

void __thiscall
TArray<FImageTilePlane,TSizedDefaultAllocator<64>_>::RemoveAtImpl
          (TArray<FImageTilePlane,TSizedDefaultAllocator<64>_> *this,long64 param_1,long64 param_2)

{
  FImageTilePlane *_Dst;
  longlong lVar1;
  
  _Dst = (FImageTilePlane *)((this->AllocatorInstance).Data + param_1 * 0x28);
  DestructItems<FImageTilePlane,__int64>(_Dst,param_2);
  lVar1 = (this->ArrayNum - param_1) - param_2;
  if (lVar1 != 0) {
    memmove(_Dst,_Dst + param_2,lVar1 * 0x28);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNumUninitialized @ 14dda2c60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<float,TSizedDefaultAllocator<64>_>::SetNumUninitialized
          (TArray<float,TSizedDefaultAllocator<64>_> *this,long64 param_1,EAllowShrinking param_2)

{
  long64 *plVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = &this->ArrayNum;
  lVar4 = *plVar1;
  if (lVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (4,4,param_1 - lVar4,&this->AllocatorInstance,plVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(param_1);
    }
    if (param_1 < lVar4) {
      lVar4 = lVar4 - param_1;
      if ((lVar4 < 0) &&
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
      if (lVar4 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1 * 4;
        lVar5 = (*plVar1 - lVar4) - param_1;
        if (lVar5 != 0) {
          memmove(_Dst,_Dst + lVar4 * 4,lVar5 * 4);
        }
        lVar5 = *plVar1;
        *plVar1 = lVar5 - lVar4;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,lVar5 - lVar4,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 14dda2d90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FColor,TSizedDefaultAllocator<64>_>::SetNumUninitialized
          (TArray<FColor,TSizedDefaultAllocator<64>_> *this,long64 param_1,EAllowShrinking param_2)

{
  long64 *plVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = &this->ArrayNum;
  lVar4 = *plVar1;
  if (lVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (4,4,param_1 - lVar4,&this->AllocatorInstance,plVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(param_1);
    }
    if (param_1 < lVar4) {
      lVar4 = lVar4 - param_1;
      if ((lVar4 < 0) &&
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
      if (lVar4 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1 * 4;
        lVar5 = (*plVar1 - lVar4) - param_1;
        if (lVar5 != 0) {
          memmove(_Dst,_Dst + lVar4 * 4,lVar5 * 4);
        }
        lVar5 = *plVar1;
        *plVar1 = lVar5 - lVar4;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (4,4,&this->AllocatorInstance,lVar5 - lVar4,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 14dda2ec0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FLinearColor,TSizedDefaultAllocator<64>_>::SetNumUninitialized
          (TArray<FLinearColor,TSizedDefaultAllocator<64>_> *this,long64 param_1,
          EAllowShrinking param_2)

{
  long64 *plVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *_Dst;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = &this->ArrayNum;
  lVar4 = *plVar1;
  if (lVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (0x10,4,param_1 - lVar4,&this->AllocatorInstance,plVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(param_1);
    }
    if (param_1 < lVar4) {
      lVar4 = lVar4 - param_1;
      if ((lVar4 < 0) &&
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
      if (lVar4 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1 * 0x10;
        lVar5 = (*plVar1 - lVar4) - param_1;
        if (lVar5 != 0) {
          memmove(_Dst,_Dst + lVar4 * 0x10,lVar5 * 0x10);
        }
        lVar5 = *plVar1;
        *plVar1 = lVar5 - lVar4;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (0x10,4,&this->AllocatorInstance,lVar5 - lVar4,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumUninitialized @ 14dda3000

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FFloat16Color,TSizedDefaultAllocator<64>_>::SetNumUninitialized
          (TArray<FFloat16Color,TSizedDefaultAllocator<64>_> *this,long64 param_1,
          EAllowShrinking param_2)

{
  long64 *plVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = &this->ArrayNum;
  lVar4 = *plVar1;
  if (lVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (8,2,param_1 - lVar4,&this->AllocatorInstance,plVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(param_1);
    }
    if (param_1 < lVar4) {
      lVar4 = lVar4 - param_1;
      if ((lVar4 < 0) &&
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
      if (lVar4 != 0) {
        _Dst = (this->AllocatorInstance).Data + param_1 * 8;
        lVar5 = (*plVar1 - lVar4) - param_1;
        if (lVar5 != 0) {
          memmove(_Dst,_Dst + lVar4 * 8,lVar5 * 8);
        }
        lVar5 = *plVar1;
        *plVar1 = lVar5 - lVar4;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (8,2,&this->AllocatorInstance,lVar5 - lVar4,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

