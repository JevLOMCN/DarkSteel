// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// ~FTSRHistory @ 1447f8d00

void __thiscall FTSRHistory::~FTSRHistory(FTSRHistory *this)

{
  FScriptContainerElement *pFVar1;
  IPooledRenderTarget *pIVar2;
  
  DestructItems<TRefCountPtr<IPooledRenderTarget>,int>
            ((TRefCountPtr<IPooledRenderTarget> *)
             (this->DistortingDisplacementTextures).AllocatorInstance.Data,
             (this->DistortingDisplacementTextures).ArrayNum);
  pFVar1 = (this->DistortingDisplacementTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InputViewportRects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SceneColorPreExposures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ViewMatrices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->CoverageArray).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->MoireArray).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->GuideArray).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->MetadataArray).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->ColorArray).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001447f8da5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pIVar2->_padding_ + 0x38))();
    return;
  }
  return;
}

// operator= @ 1447f9c30

FTSRHistory * __thiscall FTSRHistory::operator=(FTSRHistory *this,FTSRHistory *param_1)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  TRefCountPtr<IPooledRenderTarget> *pTVar2;
  TArray<FViewMatrices,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FViewMatrices,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_> *pTVar10;
  IPooledRenderTarget *pIVar11;
  FScriptContainerElement *pFVar12;
  
  if (this != param_1) {
    pIVar11 = (this->ColorArray).Reference;
    (this->ColorArray).Reference = (param_1->ColorArray).Reference;
    (param_1->ColorArray).Reference = (IPooledRenderTarget *)0x0;
    if (pIVar11 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar11->_padding_ + 0x38))();
    }
  }
  pTVar1 = &param_1->MetadataArray;
  pTVar2 = &this->MetadataArray;
  if (pTVar2 != pTVar1) {
    pIVar11 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar11 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar11->_padding_ + 0x38))();
    }
  }
  pTVar1 = &param_1->GuideArray;
  pTVar2 = &this->GuideArray;
  if (pTVar2 != pTVar1) {
    pIVar11 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar11 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar11->_padding_ + 0x38))();
    }
  }
  pTVar1 = &param_1->MoireArray;
  pTVar2 = &this->MoireArray;
  if (pTVar2 != pTVar1) {
    pIVar11 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar11 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar11->_padding_ + 0x38))();
    }
  }
  pTVar1 = &param_1->CoverageArray;
  pTVar2 = &this->CoverageArray;
  if (pTVar2 != pTVar1) {
    pIVar11 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar11 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar11->_padding_ + 0x38))();
    }
  }
  pTVar3 = &param_1->ViewMatrices;
  (this->InputViewportRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->InputViewportRect).field0_0x0._s_0.Min.field0_0x0;
  pTVar4 = &this->ViewMatrices;
  (this->InputViewportRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->InputViewportRect).field0_0x0._s_0.Max.field0_0x0;
  (this->OutputViewportRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->OutputViewportRect).field0_0x0._s_0.Min.field0_0x0;
  (this->OutputViewportRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->OutputViewportRect).field0_0x0._s_0.Max.field0_0x0;
  this->FormatBit = param_1->FormatBit;
  this->FrameStorageCount = param_1->FrameStorageCount;
  this->FrameStoragePeriod = param_1->FrameStoragePeriod;
  this->AccumulatedFrameCount = param_1->AccumulatedFrameCount;
  this->LastFrameRollingIndex = param_1->LastFrameRollingIndex;
  if (pTVar4 != pTVar3) {
    pFVar12 = (pTVar4->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ViewMatrices).ArrayNum = (param_1->ViewMatrices).ArrayNum;
    (this->ViewMatrices).ArrayMax = (param_1->ViewMatrices).ArrayMax;
    (param_1->ViewMatrices).ArrayNum = 0;
    (param_1->ViewMatrices).ArrayMax = 0;
  }
  pTVar5 = &param_1->SceneColorPreExposures;
  pTVar6 = &this->SceneColorPreExposures;
  if (pTVar6 != pTVar5) {
    pFVar12 = (pTVar6->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->SceneColorPreExposures).ArrayNum = (param_1->SceneColorPreExposures).ArrayNum;
    (this->SceneColorPreExposures).ArrayMax = (param_1->SceneColorPreExposures).ArrayMax;
    (param_1->SceneColorPreExposures).ArrayNum = 0;
    (param_1->SceneColorPreExposures).ArrayMax = 0;
  }
  pTVar7 = &param_1->InputViewportRects;
  pTVar8 = &this->InputViewportRects;
  if (pTVar8 != pTVar7) {
    pFVar12 = (pTVar8->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar8->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->InputViewportRects).ArrayNum = (param_1->InputViewportRects).ArrayNum;
    (this->InputViewportRects).ArrayMax = (param_1->InputViewportRects).ArrayMax;
    (param_1->InputViewportRects).ArrayNum = 0;
    (param_1->InputViewportRects).ArrayMax = 0;
  }
  pTVar9 = &param_1->DistortingDisplacementTextures;
  pTVar10 = &this->DistortingDisplacementTextures;
  if (pTVar10 != pTVar9) {
    DestructItems<TRefCountPtr<IPooledRenderTarget>,int>
              ((TRefCountPtr<IPooledRenderTarget> *)(pTVar10->AllocatorInstance).Data,
               (this->DistortingDisplacementTextures).ArrayNum);
    pFVar12 = (pTVar10->AllocatorInstance).Data;
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    (pTVar10->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->DistortingDisplacementTextures).ArrayNum =
         (param_1->DistortingDisplacementTextures).ArrayNum;
    (this->DistortingDisplacementTextures).ArrayMax =
         (param_1->DistortingDisplacementTextures).ArrayMax;
    (param_1->DistortingDisplacementTextures).ArrayNum = 0;
    (param_1->DistortingDisplacementTextures).ArrayMax = 0;
  }
  return this;
}

// GetGPUSizeBytes @ 1454f6780

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall FTSRHistory::GetGPUSizeBytes(FTSRHistory *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  IPooledRenderTarget *pIVar3;
  uint uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  uVar5 = GetRenderTargetGPUSizeBytes(&this->MoireArray,param_1);
  uVar6 = GetRenderTargetGPUSizeBytes(&this->GuideArray,param_1);
  uVar7 = GetRenderTargetGPUSizeBytes(&this->MetadataArray,param_1);
  uVar8 = GetRenderTargetGPUSizeBytes(&this->ColorArray,param_1);
  pIVar3 = (this->CoverageArray).Reference;
  uVar8 = uVar5 + uVar6 + uVar7 + uVar8;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    uVar4 = (**(code **)(pIVar3->_padding_ + 0x18))();
    if (((param_1) && (uVar4 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
      (**(code **)(((this->CoverageArray).Reference)->_padding_ + 0x10))();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
    uVar8 = uVar8 + uVar4;
  }
  pFVar9 = (this->DistortingDisplacementTextures).AllocatorInstance.Data;
  iVar2 = (this->DistortingDisplacementTextures).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->DistortingDisplacementTextures).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TRefCountPtr<IPooledRenderTarget>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    if (*(longlong **)pFVar9 != (longlong *)0x0) {
      uVar4 = (**(code **)(**(longlong **)pFVar9 + 0x18))();
      if (((param_1) && (uVar4 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
        (**(code **)(**(longlong **)pFVar9 + 0x10))();
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
      }
      uVar8 = uVar8 + uVar4;
    }
    pFVar9 = pFVar9 + 8;
  }
  return uVar8;
}

// operator= @ 145521800

FTSRHistory * __thiscall FTSRHistory::operator=(FTSRHistory *this,FTSRHistory *param_1)

{
  TArray<FViewMatrices,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<TRefCountPtr<IPooledRenderTarget>,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  IPooledRenderTarget *pIVar7;
  IPooledRenderTarget *pIVar8;
  FScriptContainerElement *pFVar9;
  
  pIVar7 = (param_1->ColorArray).Reference;
  pIVar8 = (this->ColorArray).Reference;
  if (pIVar8 != pIVar7) {
    (this->ColorArray).Reference = pIVar7;
    if (pIVar7 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar7->_padding_ + 0x30))();
    }
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))(pIVar8);
    }
  }
  pIVar7 = (param_1->MetadataArray).Reference;
  pIVar8 = (this->MetadataArray).Reference;
  if (pIVar8 != pIVar7) {
    (this->MetadataArray).Reference = pIVar7;
    if (pIVar7 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar7->_padding_ + 0x30))();
    }
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))(pIVar8);
    }
  }
  pIVar7 = (param_1->GuideArray).Reference;
  pIVar8 = (this->GuideArray).Reference;
  if (pIVar8 != pIVar7) {
    (this->GuideArray).Reference = pIVar7;
    if (pIVar7 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar7->_padding_ + 0x30))();
    }
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))(pIVar8);
    }
  }
  pIVar7 = (param_1->MoireArray).Reference;
  pIVar8 = (this->MoireArray).Reference;
  if (pIVar8 != pIVar7) {
    (this->MoireArray).Reference = pIVar7;
    if (pIVar7 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar7->_padding_ + 0x30))();
    }
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))(pIVar8);
    }
  }
  pIVar7 = (param_1->CoverageArray).Reference;
  pIVar8 = (this->CoverageArray).Reference;
  if (pIVar8 != pIVar7) {
    (this->CoverageArray).Reference = pIVar7;
    if (pIVar7 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar7->_padding_ + 0x30))();
    }
    if (pIVar8 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar8->_padding_ + 0x38))(pIVar8);
    }
  }
  (this->InputViewportRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->InputViewportRect).field0_0x0._s_0.Min.field0_0x0;
  pTVar1 = &this->ViewMatrices;
  (this->InputViewportRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->InputViewportRect).field0_0x0._s_0.Max.field0_0x0;
  (this->OutputViewportRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->OutputViewportRect).field0_0x0._s_0.Min.field0_0x0;
  (this->OutputViewportRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->OutputViewportRect).field0_0x0._s_0.Max.field0_0x0;
  this->FormatBit = param_1->FormatBit;
  this->FrameStorageCount = param_1->FrameStorageCount;
  this->FrameStoragePeriod = param_1->FrameStoragePeriod;
  this->AccumulatedFrameCount = param_1->AccumulatedFrameCount;
  this->LastFrameRollingIndex = param_1->LastFrameRollingIndex;
  if (pTVar1 != &param_1->ViewMatrices) {
    iVar6 = (param_1->ViewMatrices).ArrayNum;
    piVar2 = &(this->ViewMatrices).ArrayMax;
    pFVar9 = (param_1->ViewMatrices).AllocatorInstance.Data;
    (this->ViewMatrices).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x880,0x10,iVar6,*piVar2,&pTVar1->AllocatorInstance,iVar6,piVar2);
      if (iVar6 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar9,(longlong)iVar6 * 0x880);
      }
    }
  }
  pTVar3 = &this->SceneColorPreExposures;
  if (pTVar3 != &param_1->SceneColorPreExposures) {
    iVar6 = (param_1->SceneColorPreExposures).ArrayNum;
    piVar2 = &(this->SceneColorPreExposures).ArrayMax;
    pFVar9 = (param_1->SceneColorPreExposures).AllocatorInstance.Data;
    (this->SceneColorPreExposures).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar6,*piVar2,&pTVar3->AllocatorInstance,iVar6,piVar2);
      if (iVar6 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar9,(longlong)iVar6 << 2);
      }
    }
  }
  pTVar4 = &this->InputViewportRects;
  if (pTVar4 != &param_1->InputViewportRects) {
    iVar6 = (param_1->InputViewportRects).ArrayNum;
    piVar2 = &(this->InputViewportRects).ArrayMax;
    pFVar9 = (param_1->InputViewportRects).AllocatorInstance.Data;
    (this->InputViewportRects).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar6,*piVar2,&pTVar4->AllocatorInstance,iVar6,piVar2);
      ConstructItems<UE::Math::TIntRect<int>,UE::Math::TIntRect<int>,int>
                ((pTVar4->AllocatorInstance).Data,(TIntRect<int> *)pFVar9,iVar6);
    }
  }
  pTVar5 = &this->DistortingDisplacementTextures;
  if (pTVar5 != &param_1->DistortingDisplacementTextures) {
    DestructItems<TRefCountPtr<IPooledRenderTarget>,int>
              ((TRefCountPtr<IPooledRenderTarget> *)(pTVar5->AllocatorInstance).Data,
               (this->DistortingDisplacementTextures).ArrayNum);
    iVar6 = (param_1->DistortingDisplacementTextures).ArrayNum;
    piVar2 = &(this->DistortingDisplacementTextures).ArrayMax;
    pFVar9 = (param_1->DistortingDisplacementTextures).AllocatorInstance.Data;
    (this->DistortingDisplacementTextures).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar6,*piVar2,&pTVar5->AllocatorInstance,iVar6,piVar2);
      ConstructItems<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<IPooledRenderTarget>,int>
                ((pTVar5->AllocatorInstance).Data,(TRefCountPtr<IPooledRenderTarget> *)pFVar9,iVar6)
      ;
    }
  }
  return this;
}

