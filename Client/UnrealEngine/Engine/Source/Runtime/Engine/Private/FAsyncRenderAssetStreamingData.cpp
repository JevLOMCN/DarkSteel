// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// ~FAsyncRenderAssetStreamingData @ 14877ea70

void __thiscall
FAsyncRenderAssetStreamingData::~FAsyncRenderAssetStreamingData
          (FAsyncRenderAssetStreamingData *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FRenderAssetInstanceView *pFVar3;
  ForElementType<FStreamingViewInfoExtra> FVar4;
  
  pFVar2 = (this->StaticInstancesViewLevelIndices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CulledStaticInstancesViewIndices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->StaticInstancesViewIndices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FRenderAssetInstanceAsyncView,int>
            ((FRenderAssetInstanceAsyncView *)(this->StaticInstancesViews).AllocatorInstance.Data,
             (this->StaticInstancesViews).ArrayNum);
  pFVar2 = (this->StaticInstancesViews).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DynamicInstancesView).BoundsViewInfo.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar3 = (this->DynamicInstancesView).View.Reference;
  if (pFVar3 != (FRenderAssetInstanceView *)0x0) {
    plVar1 = &pFVar3->_padding_;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  FVar4 = (this->ViewInfoExtras).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FStreamingViewInfoExtra>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  pFVar2 = (this->ViewInfos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// operator() @ 148782fb0

bool __thiscall
`FAsyncRenderAssetStreamingData::UpdateBoundSizes_Async'::__l15::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  
  lVar3 = *(longlong *)this;
  uVar8 = 0;
  if (param_1 < *(int *)(lVar3 + 0x68)) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  lVar4 = *(longlong *)this;
  fVar2 = *(float *)((longlong)param_1 * 0x20 + 0x18 + *(longlong *)(lVar3 + 0x60));
  uVar8 = 0;
  if (param_2 < *(int *)(lVar4 + 0x68)) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  pfVar1 = (float *)((longlong)param_2 * 0x20 + 0x18 + *(longlong *)(lVar4 + 0x60));
  return *pfVar1 <= fVar2 && fVar2 != *pfVar1;
}

// ComputeViewInfoExtras @ 14878db10

void __thiscall
FAsyncRenderAssetStreamingData::ComputeViewInfoExtras
          (FAsyncRenderAssetStreamingData *this,FRenderAssetStreamingSettings *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  ForElementType<FStreamingViewInfoExtra> FVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  ForElementType<FStreamingViewInfoExtra> FVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar3 = (this->ViewInfos).ArrayNum;
  fVar16 = __real_3f800000 / param_1->MaxHiddenPrimitiveViewBoost;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = &(this->ViewInfoExtras).ArrayMax;
  piVar2 = &(this->ViewInfoExtras).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 != uVar3) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FStreamingViewInfoExtra>_>
              (8,4,uVar3,&(this->ViewInfoExtras).AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::
  ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FStreamingViewInfoExtra>_>
            (8,4,uVar3,&(this->ViewInfoExtras).AllocatorInstance,piVar2,piVar1);
  uVar13 = 0;
  this->MaxScreenSizeOverAllViews = 0.0;
  fVar7 = __real_3f000000;
  if (0 < (int)uVar3) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar13 < (this->ViewInfos).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->ViewInfos).AllocatorInstance.Data;
      uVar9 = 0;
      if ((int)uVar13 < *piVar2) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar5 = (this->ViewInfoExtras).AllocatorInstance.SecondaryData;
      fVar14 = *(float *)(pFVar4 + lVar12 + 0x18);
      FVar10 = (ForElementType<FStreamingViewInfoExtra>)&this->ViewInfoExtras;
      if (FVar5 != (ForElementType<FStreamingViewInfoExtra>)0x0) {
        FVar10 = FVar5;
      }
      fVar15 = param_1->MaxEffectiveScreenSize;
      if ((0.0 < fVar15) && (fVar15 <= fVar14)) {
        fVar14 = fVar15;
      }
      fVar15 = fVar14 * fVar7;
      if (fVar14 <= this->MaxScreenSizeOverAllViews) {
        fVar14 = this->MaxScreenSizeOverAllViews;
      }
      this->MaxScreenSizeOverAllViews = fVar14;
      *(float *)((longlong)FVar10 + lVar11 * 8) = fVar15;
      *(undefined4 *)((longlong)FVar10 + 4 + lVar11 * 8) = 0x3f800000;
      if (*(float *)(pFVar4 + lVar12 + 0x20) <= param_1->MaxHiddenPrimitiveViewBoost) {
        *(float *)((longlong)FVar10 + lVar11 * 8) = *(float *)(pFVar4 + lVar12 + 0x20) * fVar15;
      }
      else {
        *(float *)((longlong)FVar10 + lVar11 * 8) = param_1->MaxHiddenPrimitiveViewBoost * fVar15;
        *(float *)((longlong)FVar10 + 4 + lVar11 * 8) = fVar16 * *(float *)(pFVar4 + lVar12 + 0x20);
      }
      uVar13 = uVar13 + 1;
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + 0x40;
    } while (lVar11 < (int)uVar3);
  }
  return;
}

// Init @ 1487ad380

void __thiscall
FAsyncRenderAssetStreamingData::Init
          (FAsyncRenderAssetStreamingData *this,
          TArray<FStreamingViewInfo,TSizedDefaultAllocator<32>_> *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  FRenderAssetInstanceAsyncView *pFVar3;
  FScriptContainerElement *pFVar4;
  
  TArray<FStreamingViewInfo,TSizedDefaultAllocator<32>_>::operator=(&this->ViewInfos,param_1);
  this->LastUpdateTime = param_2;
  piVar1 = &(this->StaticInstancesViews).ArrayMax;
  pFVar3 = (FRenderAssetInstanceAsyncView *)(this->StaticInstancesViews).AllocatorInstance.Data;
  iVar2 = (this->StaticInstancesViews).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FRenderAssetInstanceAsyncView,int>(pFVar3,iVar2);
    (this->StaticInstancesViews).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->StaticInstancesViews).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FRenderAssetInstanceAsyncView,int>(pFVar3,iVar2);
    (this->StaticInstancesViews).ArrayNum = 0;
  }
  (this->StaticInstancesViewIndices).ArrayNum = 0;
  if ((this->StaticInstancesViewIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->StaticInstancesViewIndices).AllocatorInstance,0,
               &(this->StaticInstancesViewIndices).ArrayMax);
  }
  (this->CulledStaticInstancesViewIndices).ArrayNum = 0;
  if ((this->CulledStaticInstancesViewIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->CulledStaticInstancesViewIndices).AllocatorInstance,0,
               &(this->CulledStaticInstancesViewIndices).ArrayMax);
  }
  (this->StaticInstancesViewLevelIndices).ArrayNum = 0;
  if ((this->StaticInstancesViewLevelIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->StaticInstancesViewLevelIndices).AllocatorInstance,0,
               &(this->StaticInstancesViewLevelIndices).ArrayMax);
  }
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// Init @ 1487ad4c0

/* WARNING: Removing unreachable block (ram,0x0001487ada49) */
/* WARNING: Removing unreachable block (ram,0x0001487ada5b) */
/* WARNING: Removing unreachable block (ram,0x0001487ada65) */

void __thiscall
FAsyncRenderAssetStreamingData::Init
          (FAsyncRenderAssetStreamingData *this,
          TArray<FStreamingViewInfo,TSizedDefaultAllocator<32>_> *param_1,float param_2,
          TArray<FLevelRenderAssetManager_*,TSizedDefaultAllocator<32>_> *param_3,
          FDynamicRenderAssetInstanceManager *param_4)

{
  TRefCountPtr<FRenderAssetInstanceView_const_> *pTVar1;
  FRenderAssetDynamicInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks> *pFVar2;
  TArray<FBoundsViewInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FRenderAssetInstanceAsyncView,TSizedDefaultAllocator<32>_> *pTVar4;
  int *piVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  FRenderAssetInstanceView *pFVar7;
  FScriptContainerElement *pFVar8;
  FRenderAssetInstanceAsyncView *pFVar9;
  longlong *plVar10;
  longlong lVar11;
  code *pcVar12;
  FDynamicRenderAssetInstanceManager *pFVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  TRefCountPtr<FRenderAssetInstanceView_const_> TVar18;
  longlong lVar19;
  uint uVar20;
  FRenderAssetInstanceView *pFVar21;
  FRenderAssetInstanceView *pFVar22;
  uint uVar23;
  undefined4 local_98;
  int local_94;
  undefined4 local_90 [2];
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  undefined8 local_60 [5];
  
  TArray<FStreamingViewInfo,TSizedDefaultAllocator<32>_>::operator=(&this->ViewInfos,param_1);
  pFVar13 = param_4;
  this->LastUpdateTime = param_2;
  FRenderAssetDynamicInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks>::Sync
            (&param_4->StateSync);
  pTVar1 = &pFVar13->AsyncView;
  pFVar22 = (FRenderAssetInstanceView *)0x0;
  if (pTVar1->Reference == (FRenderAssetInstanceView *)0x0) {
    TVar18 = FRenderAssetInstanceView::CreateView((FRenderAssetInstanceView *)&param_4);
    if ((FRenderAssetInstanceView *)pTVar1 != TVar18.Reference) {
      pFVar21 = pTVar1->Reference;
      pTVar1->Reference = (FRenderAssetInstanceView *)(TVar18.Reference)->_padding_;
      (TVar18.Reference)->_padding_ = 0;
      if (pFVar21 != (FRenderAssetInstanceView *)0x0) {
        plVar10 = &pFVar21->_padding_;
        *(int *)plVar10 = (int)*plVar10 + -1;
        if ((int)*plVar10 == 0) {
          (**(code **)pFVar21->_padding_)(pFVar21,1);
        }
      }
    }
    if (param_4 != (FDynamicRenderAssetInstanceManager *)0x0) {
      pFVar2 = &param_4->StateSync;
      *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + -1;
      if ((int)pFVar2->_padding_ == 0) {
        (**(code **)param_4->_padding_)(param_4,1);
      }
    }
  }
  pFVar21 = pTVar1->Reference;
  pFVar13->DirtyIndex = 0;
  if (pFVar21 != (FRenderAssetInstanceView *)0x0) {
    *(int *)&pFVar21->_padding_ = (int)pFVar21->_padding_ + 1;
  }
  pFVar9 = &this->DynamicInstancesView;
  if (pFVar9 != (FRenderAssetInstanceAsyncView *)&local_68) {
    pFVar7 = (pFVar9->View).Reference;
    (pFVar9->View).Reference = pFVar21;
    pFVar21 = pFVar22;
    if (pFVar7 != (FRenderAssetInstanceView *)0x0) {
      plVar10 = &pFVar7->_padding_;
      *(int *)plVar10 = (int)*plVar10 + -1;
      pFVar21 = (FRenderAssetInstanceView *)0x0;
      if ((int)*plVar10 == 0) {
        (**(code **)pFVar7->_padding_)(pFVar7,1);
      }
    }
  }
  pTVar3 = &(this->DynamicInstancesView).BoundsViewInfo;
  if (pTVar3 != (TArray<FBoundsViewInfo,TSizedDefaultAllocator<32>_> *)local_60) {
    pFVar8 = (pTVar3->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->DynamicInstancesView).BoundsViewInfo.ArrayNum = 0;
    (this->DynamicInstancesView).BoundsViewInfo.ArrayMax = 0;
  }
  (this->DynamicInstancesView).MaxLevelRenderAssetScreenSize = 3.4028235e+38;
  if (pFVar21 != (FRenderAssetInstanceView *)0x0) {
    plVar10 = &pFVar21->_padding_;
    *(int *)plVar10 = (int)*plVar10 + -1;
    if ((int)*plVar10 == 0) {
      (**(code **)pFVar21->_padding_)(pFVar21,1);
    }
  }
  pFVar9 = (FRenderAssetInstanceAsyncView *)(this->StaticInstancesViews).AllocatorInstance.Data;
  pTVar4 = &this->StaticInstancesViews;
  piVar5 = &(this->StaticInstancesViews).ArrayMax;
  iVar16 = (this->StaticInstancesViews).ArrayNum;
  if (*piVar5 < 0) {
    DestructItems<FRenderAssetInstanceAsyncView,int>(pFVar9,iVar16);
    (this->StaticInstancesViews).ArrayNum = 0;
    if (*piVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&pTVar4->AllocatorInstance,0,piVar5);
    }
  }
  else {
    DestructItems<FRenderAssetInstanceAsyncView,int>(pFVar9,iVar16);
    (this->StaticInstancesViews).ArrayNum = 0;
  }
  (this->StaticInstancesViewIndices).ArrayNum = 0;
  if ((this->StaticInstancesViewIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->StaticInstancesViewIndices).AllocatorInstance,0,
               &(this->StaticInstancesViewIndices).ArrayMax);
  }
  (this->CulledStaticInstancesViewIndices).ArrayNum = 0;
  if ((this->CulledStaticInstancesViewIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->CulledStaticInstancesViewIndices).AllocatorInstance,0,
               &(this->CulledStaticInstancesViewIndices).ArrayMax);
  }
  pTVar6 = &this->StaticInstancesViewLevelIndices;
  piVar5 = &(this->StaticInstancesViewLevelIndices).ArrayMax;
  (this->StaticInstancesViewLevelIndices).ArrayNum = 0;
  if ((this->StaticInstancesViewLevelIndices).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar6->AllocatorInstance,0,piVar5);
  }
  iVar16 = param_3->ArrayNum;
  pFVar21 = pFVar22;
  if (0 < iVar16) {
    do {
      uVar23 = (uint)pFVar21;
      uVar20 = ~uVar23 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar23 < iVar16) {
        uVar15 = uVar20;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if (*(longlong *)((param_3->AllocatorInstance).Data + (longlong)pFVar22) == 0) {
        pFVar8 = (pTVar6->AllocatorInstance).Data;
        local_98 = 0xffffffff;
        if (((pFVar8 <= (FScriptContainerElement *)&local_98) &&
            ((FScriptContainerElement *)&local_98 < pFVar8 + (longlong)*piVar5 * 4)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar16 = (this->StaticInstancesViewLevelIndices).ArrayNum;
        uVar17 = local_98;
        if (iVar16 == *piVar5) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar6->AllocatorInstance,piVar5);
          uVar17 = local_98;
        }
LAB_1487adb02:
        (this->StaticInstancesViewLevelIndices).ArrayNum = iVar16 + 1;
        *(undefined4 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar16 * 4) = uVar17;
      }
      else {
        uVar15 = 0;
        if ((int)uVar23 < param_3->ArrayNum) {
          uVar15 = uVar20;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        plVar10 = *(longlong **)((param_3->AllocatorInstance).Data + (longlong)pFVar22);
        if ((((char)plVar10[1] == '\0') || ((*(byte *)(*plVar10 + 0x240) & 0x20) == 0)) ||
           (*(int *)(plVar10[3] + 0x140) < 1)) {
          pFVar8 = (pTVar6->AllocatorInstance).Data;
          local_90[0] = 0xffffffff;
          if (((pFVar8 <= (FScriptContainerElement *)local_90) &&
              ((FScriptContainerElement *)local_90 < pFVar8 + (longlong)*piVar5 * 4)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar16 = (this->StaticInstancesViewLevelIndices).ArrayNum;
          uVar17 = local_90[0];
          if (iVar16 == *piVar5) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar6->AllocatorInstance,piVar5);
            uVar17 = local_90[0];
          }
          goto LAB_1487adb02;
        }
        pFVar8 = (pTVar6->AllocatorInstance).Data;
        local_94 = (this->StaticInstancesViews).ArrayNum;
        if (((pFVar8 <= (FScriptContainerElement *)&local_94) &&
            ((FScriptContainerElement *)&local_94 < pFVar8 + (longlong)*piVar5 * 4)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar16 = (this->StaticInstancesViewLevelIndices).ArrayNum;
        if (iVar16 == *piVar5) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar6->AllocatorInstance,piVar5);
        }
        (this->StaticInstancesViewLevelIndices).ArrayNum = iVar16 + 1;
        *(int *)((pTVar6->AllocatorInstance).Data + (longlong)iVar16 * 4) = local_94;
        uVar15 = 0;
        if ((int)uVar23 < param_3->ArrayNum) {
          uVar15 = uVar20;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar19 = *(longlong *)((param_3->AllocatorInstance).Data + (longlong)pFVar22);
        FStaticRenderAssetInstanceManager::FTasks::SyncResults((FTasks *)(lVar19 + 0x20));
        if ((*(longlong *)(lVar19 + 0x30) == 0) &&
           (lVar11 = *(longlong *)(lVar19 + 0x18), lVar11 != 0)) {
          *(longlong *)(lVar19 + 0x30) = lVar11;
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        }
        local_88 = *(longlong *)(lVar19 + 0x30);
        *(undefined4 *)(lVar19 + 0x38) = 0;
        if (local_88 != 0) {
          *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
        }
        pFVar8 = (pTVar4->AllocatorInstance).Data;
        local_70 = 0x7f7fffff;
        local_80 = 0;
        local_78 = 0;
        if (((pFVar8 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 <
             pFVar8 + (longlong)(this->StaticInstancesViews).ArrayMax * 0x20)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar16 = (this->StaticInstancesViews).ArrayNum;
        if (iVar16 == (this->StaticInstancesViews).ArrayMax) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&pTVar4->AllocatorInstance,
                              &(this->StaticInstancesViews).ArrayMax);
        }
        (this->StaticInstancesViews).ArrayNum = iVar16 + 1;
        pFVar8 = (pTVar4->AllocatorInstance).Data;
        lVar19 = (longlong)iVar16 * 0x20;
        *(undefined8 *)(pFVar8 + lVar19) = 0;
        *(longlong *)(pFVar8 + lVar19) = local_88;
        *(undefined8 *)(pFVar8 + lVar19 + 8) = 0;
        *(undefined8 *)(pFVar8 + lVar19 + 8) = local_80;
        *(undefined4 *)(pFVar8 + lVar19 + 0x10) = (undefined4)local_78;
        *(undefined4 *)(pFVar8 + lVar19 + 0x14) = local_78._4_4_;
        *(undefined4 *)(pFVar8 + lVar19 + 0x18) = local_70;
        local_78 = 0;
        local_80 = 0;
        local_88 = 0;
      }
      iVar16 = param_3->ArrayNum;
      pFVar22 = (FRenderAssetInstanceView *)&pFVar22->_padding_;
      pFVar21 = (FRenderAssetInstanceView *)(ulonglong)(uVar23 + 1);
    } while ((int)(uVar23 + 1) < iVar16);
  }
  pFVar8 = (param_1->AllocatorInstance).Data;
  if (pFVar8 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar8);
  }
  return;
}

// UpdateBoundSizes_Async @ 1487cbad0

void __thiscall
FAsyncRenderAssetStreamingData::UpdateBoundSizes_Async
          (FAsyncRenderAssetStreamingData *this,FRenderAssetStreamingSettings *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  FRenderAssetInstanceView *pFVar4;
  code *pcVar5;
  FSimpleStreamableAssetManager *pFVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  FRenderAssetInstanceAsyncView *this_00;
  float local_res8 [2];
  FAsyncRenderAssetStreamingData *local_res10;
  uint local_58 [2];
  TArrayView<FBounds4_const_,int> local_50 [3];
  
  local_58[0] = 0;
  if (0 < (this->StaticInstancesViews).ArrayNum) {
    do {
      uVar7 = local_58[0];
      uVar10 = 0;
      if ((int)local_58[0] < (this->StaticInstancesViews).ArrayNum) {
        uVar10 = ~local_58[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = (FRenderAssetInstanceAsyncView *)
                ((this->StaticInstancesViews).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20);
      FRenderAssetInstanceAsyncView::UpdateBoundSizes_Async
                (this_00,&this->ViewInfos,&this->ViewInfoExtras,this->LastUpdateTime,param_1);
      if ((param_1->MinLevelRenderAssetScreenSize < this_00->MaxLevelRenderAssetScreenSize) ||
         ((pFVar4 = (this_00->View).Reference, pFVar4 != (FRenderAssetInstanceView *)0x0 &&
          (*(int *)&(pFVar4->CompiledNumForcedLODCompMap).field_0x8 !=
           *(int *)&(pFVar4->CompiledNumForcedLODCompMap).field_0x34)))) {
        pFVar12 = (this->StaticInstancesViewIndices).AllocatorInstance.Data;
        if ((pFVar12 <= (FScriptContainerElement *)local_58) &&
           (((FScriptContainerElement *)local_58 <
             pFVar12 + (longlong)(this->StaticInstancesViewIndices).ArrayMax * 4 &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar8)))) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = (this->StaticInstancesViewIndices).ArrayNum;
        piVar1 = &(this->StaticInstancesViewIndices).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->StaticInstancesViewIndices).AllocatorInstance,piVar1);
        }
        (this->StaticInstancesViewIndices).ArrayNum = iVar11 + 1;
        pFVar12 = (this->StaticInstancesViewIndices).AllocatorInstance.Data;
      }
      else {
        pTVar2 = &this->CulledStaticInstancesViewIndices;
        pFVar12 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar12 <= (FScriptContainerElement *)local_58) &&
            ((FScriptContainerElement *)local_58 <
             pFVar12 + (longlong)(this->CulledStaticInstancesViewIndices).ArrayMax * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = (this->CulledStaticInstancesViewIndices).ArrayNum;
        piVar1 = &(this->CulledStaticInstancesViewIndices).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->CulledStaticInstancesViewIndices).ArrayNum = iVar11 + 1;
        pFVar12 = (pTVar2->AllocatorInstance).Data;
      }
      *(uint *)(pFVar12 + (longlong)iVar11 * 4) = local_58[0];
      local_58[0] = local_58[0] + 1;
    } while ((int)local_58[0] < (this->StaticInstancesViews).ArrayNum);
  }
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0) {
    fVar3 = this->LastUpdateTime;
    if ((FSimpleStreamableAssetManager::Instance == (FSimpleStreamableAssetManager *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Instance != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                           ,0x7f,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar6 = FSimpleStreamableAssetManager::Instance;
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Silver,"FSimpleStreamableAssetManager_UpdateBounds");
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId723,"FSimpleStreamableAssetManager_UpdateBounds",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                 ,0x2d3);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId723);
    }
    local_50[0].DataPtr = (FBounds4 *)(pFVar6->ObjectBounds4).AllocatorInstance.Data;
    iVar11 = (pFVar6->ObjectBounds4).ArrayNum;
    local_res8[0] = 0.0;
    if ((iVar11 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_50[0].ArrayNum = iVar11;
    FRenderAssetInstanceAsyncView::UpdateBoundSizes
              (&this->ViewInfos,&this->ViewInfoExtras,fVar3,__real_3f800000,param_1,local_50,
               &pFVar6->BoundsViewInfos,local_res8);
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (0.0 < param_1->MinLevelRenderAssetScreenSize) {
    local_res10 = this;
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FAsyncRenderAssetStreamingData::UpdateBoundSizes_Async_::__l15::<lambda_1>_>_>
              ((int *)(this->StaticInstancesViewIndices).AllocatorInstance.Data,
               (this->StaticInstancesViewIndices).ArrayNum,local_res8[0]._0_1_,
               (<lambda_1> *)&local_res10);
  }
  FRenderAssetInstanceAsyncView::UpdateBoundSizes_Async
            (&this->DynamicInstancesView,&this->ViewInfos,&this->ViewInfoExtras,this->LastUpdateTime
             ,param_1);
  return;
}

// UpdatePerfectWantedMips_Async @ 1487ce690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncRenderAssetStreamingData::UpdatePerfectWantedMips_Async
          (FAsyncRenderAssetStreamingData *this,FStreamingRenderAsset *param_1,
          FRenderAssetStreamingSettings *param_2,bool param_3)

{
  float *pfVar1;
  schar *psVar2;
  uint *puVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  float fVar6;
  EStreamableRenderAssetType EVar7;
  char cVar8;
  FRenderAssetInstanceView *pFVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  UStreamableRenderAsset *pUVar13;
  bool bVar14;
  byte bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  wchar_t *pwVar21;
  int *piVar22;
  wchar_t *pwVar23;
  byte bVar24;
  byte bVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  FRenderAssetInstanceAsyncView *pFVar29;
  FScriptContainerElement *pFVar30;
  ForElementType<unsigned_int> FVar31;
  ForElementType<unsigned_int> FVar32;
  wchar_t *pwVar33;
  wchar_t *pwVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  bool local_108;
  float local_104;
  float local_100;
  int local_fc;
  undefined1 local_f8;
  undefined1 local_f7 [3];
  uint local_f4;
  float local_f0;
  float local_ec;
  int local_e8;
  float local_e4;
  float local_e0;
  int local_dc;
  UStreamableRenderAsset *local_d8;
  uint local_d0;
  ulonglong local_c8;
  schar *local_c0;
  int local_b8;
  int local_b4;
  FRenderAssetLinkConstIterator local_b0;
  FRenderAssetLinkConstIterator local_a0 [6];
  
  fVar6 = __real_46800000;
  local_d8 = param_1->RenderAsset;
  if (local_d8 == (UStreamableRenderAsset *)0x0) {
    return;
  }
  EVar7 = param_1->RenderAssetType;
  psVar2 = &param_1->MaxAllowedMips;
  pwVar33 = (wchar_t *)0x0;
  local_104 = 0.0;
  local_100 = 0.0;
  local_fc = 0;
  bVar14 = false;
  local_108 = false;
  if (EVar7 == Texture) {
    fVar38 = (float)(1 << (*psVar2 - 1U & 0x1f));
    fVar37 = fVar38;
  }
  else {
    fVar38 = this->MaxScreenSizeOverAllViews;
    fVar37 = __real_46800000;
  }
  local_c0 = psVar2;
  if (param_2->bStressTest == false) {
    if ((param_2->bFullyLoadMeshes == false) || (EVar7 == Texture)) {
      if (param_2->bFullyLoadUsedTextures == false) {
        fVar36 = fVar38;
        fVar35 = fVar38;
        if (param_1->MinAllowedMips != *psVar2) {
          pwVar21 = pwVar33;
          if (param_3) {
            pwVar21 = L"Dynamic";
          }
          FRenderAssetInstanceAsyncView::GetRenderAssetScreenSize
                    (&this->DynamicInstancesView,EVar7,local_d8,&local_104,&local_100,&local_fc,
                     fVar37,pwVar21);
          if ((((FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0) &&
               (piVar22 = TSharedPtr<int,1>::operator*<int>
                                    (&param_1->SimpleStreamableAssetManagerIndex), *piVar22 != -1))
              && (local_100 < fVar37)) && (cVar8 = *psVar2, local_fc < cVar8)) {
            local_f0 = local_104;
            local_ec = local_100;
            local_e8 = local_fc;
            piVar22 = TSharedPtr<int,1>::operator*<int>(&param_1->SimpleStreamableAssetManagerIndex)
            ;
            iVar20 = *piVar22;
            if ((FSimpleStreamableAssetManager::Instance == (FSimpleStreamableAssetManager *)0x0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Instance != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                                    ,0x8d,L""), bVar14)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pwVar21 = pwVar33;
            if (param_3) {
              pwVar21 = L"Static";
            }
            FSimpleStreamableAssetManager::GetRenderAssetScreenSize_Impl
                      (FSimpleStreamableAssetManager::Instance,EVar7,iVar20,&local_f0,&local_ec,
                       &local_e8,fVar37,(int)cVar8,pwVar21);
            fVar36 = local_f0;
            if (local_f0 <= local_104) {
              fVar36 = local_104;
            }
            fVar35 = local_ec;
            if (local_ec <= local_100) {
              fVar35 = local_100;
            }
            local_104 = fVar36;
            local_100 = fVar35;
            if (local_fc < local_e8) {
              local_fc = local_e8;
            }
          }
          uVar17 = 0;
          if ((fVar37 <= local_100) || (*psVar2 <= local_fc)) {
            bVar14 = false;
          }
          else {
            bVar12 = false;
            if (param_2->bMipCalculationEnablePerLevelList == false) {
              pFVar30 = (this->StaticInstancesViewIndices).AllocatorInstance.Data;
              iVar20 = (this->StaticInstancesViewIndices).ArrayNum;
              pFVar4 = pFVar30 + (longlong)iVar20 * 4;
              while( true ) {
                if ((this->StaticInstancesViewIndices).ArrayNum != iVar20) {
                  local_f8 = 0;
                  `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(&local_f8);
                }
                bVar14 = bVar12;
                if (pFVar30 == pFVar4) break;
                uVar19 = *(uint *)pFVar30;
                uVar27 = uVar17;
                if ((int)uVar19 < (this->StaticInstancesViews).ArrayNum) {
                  uVar27 = ~uVar19 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pFVar29 = (FRenderAssetInstanceAsyncView *)
                          ((this->StaticInstancesViews).AllocatorInstance.Data +
                          (longlong)(int)uVar19 * 0x20);
                if ((((param_1->MaxAllowedMips <= local_fc) || (fVar6 <= local_100)) ||
                    ((pfVar1 = &pFVar29->MaxLevelRenderAssetScreenSize,
                     *pfVar1 <= local_100 && local_100 != *pfVar1 &&
                     (0.0 < param_2->MinLevelRenderAssetScreenSize)))) && (!param_3)) break;
                pwVar21 = pwVar33;
                if (param_3) {
                  pwVar21 = L"Static";
                }
                FRenderAssetInstanceAsyncView::GetRenderAssetScreenSize
                          (pFVar29,EVar7,local_d8,&local_104,&local_100,&local_fc,fVar37,pwVar21);
                pFVar30 = pFVar30 + 4;
              }
            }
            else {
              uVar19 = (param_1->LevelIndexUsage).NumBits;
              local_d0 = (this->StaticInstancesViewLevelIndices).ArrayNum;
              local_c8 = CONCAT44(local_c8._4_4_,1);
              if ((int)uVar19 < (int)local_d0) {
                local_d0 = uVar19;
              }
              pwVar21 = pwVar33;
              pwVar23 = pwVar33;
              pwVar34 = pwVar33;
              if (uVar19 != 0) {
                FVar31 = (param_1->LevelIndexUsage).AllocatorInstance.SecondaryData;
                pwVar23 = (wchar_t *)(ulonglong)uVar19;
                if (FVar31 == (ForElementType<unsigned_int>)0x0) {
                  FVar31 = (ForElementType<unsigned_int>)&param_1->LevelIndexUsage;
                }
                uVar27 = *(uint *)FVar31;
                while (uVar27 == 0) {
                  iVar20 = (int)pwVar21;
                  pwVar34 = (wchar_t *)(ulonglong)((int)pwVar34 + 0x20);
                  uVar27 = iVar20 + 1;
                  pwVar21 = (wchar_t *)(ulonglong)uVar27;
                  if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar27)
                  goto LAB_1487ceae1;
                  uVar27 = *(uint *)((uchar *)((longlong)FVar31 + 4) + (longlong)iVar20 * 4);
                }
                local_c8 = (ulonglong)(-uVar27 & uVar27);
                uVar5 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
                lVar10 = 0x3f;
                if (uVar5 != 0) {
                  for (; uVar5 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                  }
                }
                local_b8 = (int)lVar10;
                uVar27 = local_b8 + -1 + (int)pwVar34;
                if ((int)uVar19 < (int)uVar27) {
                  uVar27 = uVar19;
                }
                pwVar23 = (wchar_t *)(ulonglong)uVar27;
              }
LAB_1487ceae1:
              bVar14 = false;
              if ((int)pwVar23 < (int)local_d0) {
                local_f4 = 0xffffffff;
                do {
                  uVar27 = (uint)pwVar23;
                  uVar19 = uVar17;
                  if ((int)uVar27 < (this->StaticInstancesViewLevelIndices).ArrayNum) {
                    uVar19 = ~uVar27 >> 0x1f;
                  }
                  if ((uVar19 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  uVar19 = *(uint *)((this->StaticInstancesViewLevelIndices).AllocatorInstance.Data
                                    + (longlong)(int)uVar27 * 4);
                  if (uVar19 != 0xffffffff) {
                    uVar28 = uVar17;
                    if ((int)uVar19 < (this->StaticInstancesViews).ArrayNum) {
                      uVar28 = ~uVar19 >> 0x1f;
                    }
                    if ((uVar28 == 0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    pFVar29 = (FRenderAssetInstanceAsyncView *)
                              ((this->StaticInstancesViews).AllocatorInstance.Data +
                              (longlong)(int)uVar19 * 0x20);
                    pFVar9 = (pFVar29->View).Reference;
                    if ((pFVar9 == (FRenderAssetInstanceView *)0x0) ||
                       (FRenderAssetInstanceView::FRenderAssetLinkConstIterator::
                        FRenderAssetLinkConstIterator(&local_b0,pFVar9,local_d8), pUVar13 = local_d8
                       , local_b0.CurrElementIndex == -1)) {
                      if ((((int)uVar27 < 0) || ((param_1->LevelIndexUsage).NumBits <= (int)uVar27))
                         && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                                ("Index>=0 && Index<NumBits",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                                 ,0x5be,L""), bVar14)) {
                        pcVar11 = (code *)swi(3);
                        (*pcVar11)();
                        return;
                      }
                      FVar31 = (param_1->LevelIndexUsage).AllocatorInstance.SecondaryData;
                      FVar32 = (ForElementType<unsigned_int>)&param_1->LevelIndexUsage;
                      if (FVar31 != (ForElementType<unsigned_int>)0x0) {
                        FVar32 = FVar31;
                      }
                      if ((int)uVar27 < 0) {
                        uVar27 = uVar27 + 0x1f;
                      }
                      puVar3 = (uint *)((longlong)FVar32 + (longlong)((int)uVar27 >> 5) * 4);
                      *puVar3 = *puVar3 & ~(1 << ((byte)pwVar23 & 0x1f));
                    }
                    else if ((param_2->MinLevelRenderAssetScreenSize <
                              pFVar29->MaxLevelRenderAssetScreenSize ||
                              param_2->MinLevelRenderAssetScreenSize ==
                              pFVar29->MaxLevelRenderAssetScreenSize) ||
                            ((pFVar9 = (pFVar29->View).Reference,
                             pFVar9 != (FRenderAssetInstanceView *)0x0 &&
                             (piVar22 = TMapBase<UStreamableRenderAsset_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,int,0>_>
                                        ::Find((TMapBase<UStreamableRenderAsset_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,int,0>_>
                                                *)&pFVar9->CompiledNumForcedLODCompMap,local_d8),
                             piVar22 != (int *)0x0)))) {
                      bVar14 = bVar12;
                      if ((fVar37 <= local_100) || (*local_c0 <= local_fc)) break;
                      local_dc = local_fc;
                      pwVar23 = pwVar33;
                      if (param_3) {
                        pwVar23 = L"Static";
                      }
                      local_e4 = local_104;
                      local_e0 = local_100;
                      FRenderAssetInstanceAsyncView::GetRenderAssetScreenSize
                                (pFVar29,EVar7,pUVar13,&local_e4,&local_e0,&local_dc,fVar37,pwVar23)
                      ;
                      fVar6 = local_e4;
                      if (local_e4 <= local_104) {
                        fVar6 = local_104;
                      }
                      fVar36 = local_e0;
                      if (local_e0 <= local_100) {
                        fVar36 = local_100;
                      }
                      local_104 = fVar6;
                      local_100 = fVar36;
                      if (local_fc < local_dc) {
                        local_fc = local_dc;
                      }
                    }
                    else {
                      bVar12 = true;
                    }
                  }
                  FVar31 = (param_1->LevelIndexUsage).AllocatorInstance.SecondaryData;
                  uVar19 = (param_1->LevelIndexUsage).NumBits;
                  local_f4 = ~(uint)local_c8 & local_f4;
                  FVar32 = (ForElementType<unsigned_int>)&param_1->LevelIndexUsage;
                  if (FVar31 != (ForElementType<unsigned_int>)0x0) {
                    FVar32 = FVar31;
                  }
                  uVar27 = local_f4 & *(uint *)((longlong)FVar32 + (longlong)(int)pwVar21 * 4);
                  while (uVar27 == 0) {
                    iVar20 = (int)pwVar21;
                    pwVar34 = (wchar_t *)(ulonglong)((int)pwVar34 + 0x20);
                    uVar28 = iVar20 + 1;
                    pwVar21 = (wchar_t *)(ulonglong)uVar28;
                    uVar27 = uVar19;
                    if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar28
                       ) goto LAB_1487ced46;
                    uVar27 = *(uint *)((longlong)FVar32 + 4 + (longlong)iVar20 * 4);
                    local_f4 = 0xffffffff;
                  }
                  local_c8 = CONCAT44(local_c8._4_4_,-uVar27 & uVar27);
                  uVar5 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
                  lVar10 = 0x3f;
                  if (uVar5 != 0) {
                    for (; uVar5 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                    }
                  }
                  local_b4 = (int)lVar10;
                  uVar27 = local_b4 + -1 + (int)pwVar34;
                  if ((int)uVar19 < (int)uVar27) {
                    uVar27 = uVar19;
                  }
LAB_1487ced46:
                  pwVar23 = (wchar_t *)(ulonglong)uVar27;
                  bVar14 = bVar12;
                } while ((int)uVar27 < (int)local_d0);
              }
            }
          }
          fVar37 = __real_7f7fffff;
          fVar6 = __real_40a00000;
          if ((local_fc < param_1->MaxAllowedMips) &&
             ((((0.0 < local_104 || (0.0 < local_100)) && (local_104 != __real_7f7fffff)) &&
              (local_100 != __real_7f7fffff)))) {
            fVar36 = local_100;
            if (local_100 <= local_104) {
              fVar36 = local_104;
            }
            fVar35 = param_1->DynamicBoostFactor * param_1->BoostFactor;
            if (fVar36 <= fVar38) {
              fVar36 = fVar38;
            }
            local_108 = fVar35 + fVar35 <= fVar36 / fVar38;
            local_104 = local_104 * fVar35;
            local_100 = local_100 * fVar35;
          }
          if (((local_104 != 0.0) || (local_100 != 0.0)) ||
             ((local_fc != 0 ||
              (fVar36 = (float)((double)FApp::CurrentTime - param_1->InstanceRemovedTimestamp) -
                        __real_40a00000,
              fVar36 < param_1->LastRenderTime || fVar36 == param_1->LastRenderTime)))) {
            bVar15 = 0;
          }
          else {
            bVar15 = 0x80;
          }
          bVar24 = param_1->field_0x96 & 0x7f;
          bVar25 = bVar24 | bVar15;
          param_1->bUseUnkownRefHeuristic = bVar15 >> 7;
          if (bVar15 != 0) {
            if (param_2->bMipCalculationEnablePerLevelList == false) {
              pFVar30 = (this->CulledStaticInstancesViewIndices).AllocatorInstance.Data;
              iVar20 = (this->CulledStaticInstancesViewIndices).ArrayNum;
              pFVar4 = pFVar30 + (longlong)iVar20 * 4;
              while( true ) {
                if ((this->CulledStaticInstancesViewIndices).ArrayNum != iVar20) {
                  local_f7[0] = 0;
                  `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                  operator()(local_f7);
                }
                if (pFVar30 == pFVar4) goto LAB_1487cf0d5;
                uVar19 = *(uint *)pFVar30;
                uVar27 = uVar17;
                if ((int)uVar19 < (this->StaticInstancesViews).ArrayNum) {
                  uVar27 = ~uVar19 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pFVar9 = *(FRenderAssetInstanceView **)
                          ((this->StaticInstancesViews).AllocatorInstance.Data +
                          (longlong)(int)uVar19 * 0x20);
                if ((pFVar9 != (FRenderAssetInstanceView *)0x0) &&
                   (FRenderAssetInstanceView::FRenderAssetLinkConstIterator::
                    FRenderAssetLinkConstIterator(local_a0,pFVar9,local_d8),
                   local_a0[0].CurrElementIndex != -1)) break;
                pFVar30 = pFVar30 + 4;
              }
              param_1->bUseUnkownRefHeuristic = '\0';
            }
            else {
              if (!bVar14) {
                pwVar33 = (wchar_t *)&DAT_00000080;
              }
              param_1->field_0x96 = (byte)pwVar33 | bVar24;
            }
LAB_1487cf0d5:
            bVar25 = param_1->field_0x96;
            if ((((bool)param_1->bUseUnkownRefHeuristic) &&
                (fVar36 = param_1->LastRenderTime, fVar36 < __real_42b40000)) &&
               (((param_2->DropMips != 3 && (param_2->DropMips != 4)) || (EVar7 == Texture)))) {
              if ((param_3) && (4 < (byte)LogContentStreaming._0_1_)) {
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
                fVar36 = param_1->LastRenderTime;
                bVar25 = param_1->field_0x96;
              }
              fVar35 = fVar38;
              if (fVar38 <= local_104) {
                fVar35 = local_104;
              }
              local_104 = fVar35;
              if ((fVar36 < fVar6) &&
                 (iVar20 = (int)local_100, local_100 = (float)iVar20, (float)iVar20 <= fVar38)) {
                local_100 = fVar38;
              }
            }
          }
          bVar14 = local_108;
          if ((bVar25 & 8) == 0) {
            fVar36 = local_104;
            fVar35 = local_100;
            if ((EVar7 != Texture) || (param_1->LODGroup != 0x1d)) goto LAB_1487cf24e;
            if (param_2->HLODStrategy != 2) {
              if (param_2->HLODStrategy == 1) {
                if ((param_3) && (4 < (byte)LogContentStreaming._0_1_)) {
                  UE::Logging::Private::BasicLog<5>
                            ((FStaticBasicLogRecord *)&PTR_u___HLOD_Strategy_151b76f90,
                             (FLogCategoryBase *)&LogContentStreaming);
                }
                fVar35 = local_100;
                if (param_2->bUseNewMetrics == false) {
                  fVar36 = fVar38 * __real_3f000000;
                  if (fVar38 * __real_3f000000 <= local_104) {
                    fVar36 = local_104;
                  }
                }
                else {
                  fVar36 = fVar38;
                  if (fVar38 <= local_104) {
                    fVar36 = local_104;
                  }
                }
              }
              goto LAB_1487cf24e;
            }
          }
          if ((param_3) && (4 < (byte)LogContentStreaming._0_1_)) {
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
          }
          local_104 = fVar37;
          fVar36 = local_104;
          fVar35 = local_100;
        }
      }
      else {
        fVar36 = local_104;
        if ((param_1->LastRenderTime <= __real_43960000 &&
             __real_43960000 != param_1->LastRenderTime) ||
           (fVar35 = local_100, param_1->bForceFullyLoad != '\0')) {
          local_100 = 3.4028235e+38;
          fVar35 = local_100;
        }
      }
    }
    else {
      local_104 = __real_7f7fffff;
      local_100 = 3.4028235e+38;
      fVar36 = local_104;
      fVar35 = local_100;
    }
  }
  else {
    cVar8 = param_1->MinAllowedMips;
    iVar26 = (int)*psVar2 - (int)cVar8;
    iVar20 = 0;
    if (0 < iVar26 + 1) {
      uVar17 = rand();
      iVar18 = (int)((float)(uVar17 & 0x7fff) * (float)(iVar26 + 1) * __real_38000100);
      iVar20 = iVar26;
      if (iVar18 < iVar26) {
        iVar20 = iVar18;
      }
    }
    fVar36 = this->MaxScreenSizeOverAllViews;
    uVar17 = iVar20 + cVar8;
    if (param_1->RenderAssetType == Texture) {
      fVar36 = (float)(1 << ((char)uVar17 - 1U & 0x1f));
      bVar14 = false;
      fVar35 = fVar36;
    }
    else {
      if ((((int)uVar17 < 1) || (8 < uVar17)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumMips > 0 && (uint32)NumMips <= (sizeof(UEArrayCountHelper(LODScreenSizes)) - 1)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                              ,0x79,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      fVar36 = fVar36 * *(float *)((param_1->LevelIndexUsage).AllocatorInstance.InlineData +
                                  (longlong)(int)uVar17 * 4 + -0x58);
      bVar14 = false;
      fVar35 = fVar36;
    }
  }
LAB_1487cf24e:
  local_100 = fVar35;
  local_104 = fVar36;
  fVar6 = local_104;
  if ((param_2->bUseNewMetrics == false) && (fVar6 = local_100, local_100 <= local_104)) {
    fVar6 = local_104;
    local_100 = local_104;
  }
  local_104 = fVar6;
  FStreamingRenderAsset::SetPerfectWantedMips_Async
            (param_1,local_104,local_100,this->MaxScreenSizeOverAllViews,local_fc,bVar14,param_2);
  return;
}

