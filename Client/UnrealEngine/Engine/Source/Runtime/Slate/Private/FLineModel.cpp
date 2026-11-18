// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// FLineModel @ 1428441e0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FLineModel * __thiscall FTextLayout::FLineModel::FLineModel(FLineModel *this,FLineModel *param_1)

{
  TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FTextLayout::FBreakCandidate,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FTextRunRenderer,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FTextLineHighlight,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  FRunModel *pFVar8;
  FScriptContainerElement *_Src;
  FTextRunRenderer *pFVar9;
  FTextLineHighlight *pFVar10;
  
  (this->Text).Object = (param_1->Text).Object;
  pTVar7 = (param_1->Text).SharedReferenceCount.ReferenceController;
  (this->Text).SharedReferenceCount.ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ShapedTextCache).Object = (param_1->ShapedTextCache).Object;
  pTVar7 = (param_1->ShapedTextCache).SharedReferenceCount.ReferenceController;
  (this->ShapedTextCache).SharedReferenceCount.ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->Runs;
  this->TextBaseDirection = param_1->TextBaseDirection;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Runs).ArrayMax;
  iVar6 = (param_1->Runs).ArrayNum;
  pFVar8 = (FRunModel *)(param_1->Runs).AllocatorInstance.Data;
  (this->Runs).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar6,0,&pTVar1->AllocatorInstance,iVar6,piVar2);
    ConstructItems<FTextLayout::FRunModel,FTextLayout::FRunModel,int>
              ((pTVar1->AllocatorInstance).Data,pFVar8,iVar6);
  }
  pTVar3 = &this->BreakCandidates;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->BreakCandidates).ArrayMax;
  iVar6 = (param_1->BreakCandidates).ArrayNum;
  _Src = (param_1->BreakCandidates).AllocatorInstance.Data;
  (this->BreakCandidates).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar6 * 0x30);
  }
  pTVar4 = &this->RunRenderers;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->RunRenderers).ArrayMax;
  iVar6 = (param_1->RunRenderers).ArrayNum;
  pFVar9 = (FTextRunRenderer *)(param_1->RunRenderers).AllocatorInstance.Data;
  (this->RunRenderers).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar2);
    ConstructItems<FTextRunRenderer,FTextRunRenderer,int>
              ((pTVar4->AllocatorInstance).Data,pFVar9,iVar6);
  }
  pTVar5 = &this->LineHighlights;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->LineHighlights).ArrayMax;
  iVar6 = (param_1->LineHighlights).ArrayNum;
  pFVar10 = (FTextLineHighlight *)(param_1->LineHighlights).AllocatorInstance.Data;
  (this->LineHighlights).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar2);
    ConstructItems<FTextLineHighlight,FTextLineHighlight,int>
              ((pTVar5->AllocatorInstance).Data,pFVar10,iVar6);
  }
  this->DirtyFlags = param_1->DirtyFlags;
  return this;
}

// FLineModel @ 1428443b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FLineModel * __thiscall
FTextLayout::FLineModel::FLineModel(FLineModel *this,TSharedRef<FString,1> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FSlateApplication *pFVar4;
  FLineModel *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<FSlateFontCache,1> local_18;
  
  (this->Text).Object = param_1->Object;
  pTVar6 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Text).SharedReferenceCount.ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = FSlateApplication::Get();
  lVar1 = *(longlong *)&pFVar4->field_0x60;
  if (*(longlong *)(lVar1 + 8) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FLineModel *)(*pcVar2)();
      return pFVar5;
    }
  }
  FSlateFontServices::GetFontCache(*(FSlateFontServices **)(lVar1 + 8),&local_18);
  pTVar6 = ::operator_new(0x70);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    (this->ShapedTextCache).Object = (FShapedTextCache *)0x10;
    (this->ShapedTextCache).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFShapedTextCache___00_SharedPointerInternals__6B_;
    pTVar6[1]._padding_ = (longlong)local_18.Object;
    *(TReferenceControllerBase<1> **)&pTVar6[1].SharedReferenceCount =
         local_18.SharedReferenceCount.ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6[2]._padding_ = 0;
    pTVar6[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar6[4]._padding_ = 0;
    pTVar6[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar6[4].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar6[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar6[5]._padding_ + 4) = 0;
    pTVar6[6]._padding_ = 0;
    pTVar6[6].SharedReferenceCount = (atomic<int>)0x0;
    (this->ShapedTextCache).Object = (FShapedTextCache *)(pTVar6 + 1);
    (this->ShapedTextCache).SharedReferenceCount.ReferenceController = pTVar6;
    if ((FShapedTextCache *)(pTVar6 + 1) == (FShapedTextCache *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FLineModel *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  this->TextBaseDirection = LeftToRight;
  (this->Runs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Runs).ArrayNum = 0;
  (this->Runs).ArrayMax = 0;
  (this->BreakCandidates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BreakCandidates).ArrayNum = 0;
  (this->BreakCandidates).ArrayMax = 0;
  (this->RunRenderers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RunRenderers).ArrayNum = 0;
  (this->RunRenderers).ArrayMax = 0;
  (this->LineHighlights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LineHighlights).ArrayNum = 0;
  (this->LineHighlights).ArrayMax = 0;
  this->DirtyFlags = '\a';
  return this;
}

// ~FLineModel @ 1428497f0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FTextLayout::FLineModel::~FLineModel(FLineModel *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FTextLineHighlight,int>
            ((FTextLineHighlight *)(this->LineHighlights).AllocatorInstance.Data,
             (this->LineHighlights).ArrayNum);
  pFVar1 = (this->LineHighlights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FTextRunRenderer,int>
            ((FTextRunRenderer *)(this->RunRenderers).AllocatorInstance.Data,
             (this->RunRenderers).ArrayNum);
  pFVar1 = (this->RunRenderers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BreakCandidates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FTextLayout::FRunModel,int>
            ((FRunModel *)(this->Runs).AllocatorInstance.Data,(this->Runs).ArrayNum);
  pFVar1 = (this->Runs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ShapedTextCache).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Text).SharedReferenceCount.ReferenceController);
  return;
}

// operator= @ 14284c090

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FLineModel * __thiscall FTextLayout::FLineModel::operator=(FLineModel *this,FLineModel *param_1)

{
  TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FTextLayout::FBreakCandidate,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FTextRunRenderer,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FTextLineHighlight,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  TReferenceControllerBase<1> *pTVar7;
  FString *pFVar8;
  FShapedTextCache *pFVar9;
  FRunModel *pFVar10;
  FScriptContainerElement *_Src;
  FTextRunRenderer *pFVar11;
  FTextLineHighlight *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  
  pTVar7 = (param_1->Text).SharedReferenceCount.ReferenceController;
  pFVar8 = (param_1->Text).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar13 = (this->Text).SharedReferenceCount.ReferenceController;
  (this->Text).Object = pFVar8;
  (this->Text).SharedReferenceCount.ReferenceController = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar7 = (param_1->ShapedTextCache).SharedReferenceCount.ReferenceController;
  pFVar9 = (param_1->ShapedTextCache).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar13 = (this->ShapedTextCache).SharedReferenceCount.ReferenceController;
  (this->ShapedTextCache).Object = pFVar9;
  (this->ShapedTextCache).SharedReferenceCount.ReferenceController = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  pTVar1 = &this->Runs;
  this->TextBaseDirection = param_1->TextBaseDirection;
  if (pTVar1 != &param_1->Runs) {
    DestructItems<FTextLayout::FRunModel,int>
              ((FRunModel *)(pTVar1->AllocatorInstance).Data,(this->Runs).ArrayNum);
    iVar6 = (param_1->Runs).ArrayNum;
    piVar2 = &(this->Runs).ArrayMax;
    pFVar10 = (FRunModel *)(param_1->Runs).AllocatorInstance.Data;
    (this->Runs).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar6,*piVar2,&pTVar1->AllocatorInstance,iVar6,piVar2);
      ConstructItems<FTextLayout::FRunModel,FTextLayout::FRunModel,int>
                ((pTVar1->AllocatorInstance).Data,pFVar10,iVar6);
    }
  }
  pTVar3 = &this->BreakCandidates;
  if (pTVar3 != &param_1->BreakCandidates) {
    iVar6 = (param_1->BreakCandidates).ArrayNum;
    piVar2 = &(this->BreakCandidates).ArrayMax;
    _Src = (param_1->BreakCandidates).AllocatorInstance.Data;
    (this->BreakCandidates).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar6,*piVar2,&pTVar3->AllocatorInstance,iVar6,piVar2);
      if (iVar6 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar6 * 0x30);
      }
    }
  }
  pTVar4 = &this->RunRenderers;
  if (pTVar4 != &param_1->RunRenderers) {
    DestructItems<FTextRunRenderer,int>
              ((FTextRunRenderer *)(pTVar4->AllocatorInstance).Data,(this->RunRenderers).ArrayNum);
    iVar6 = (param_1->RunRenderers).ArrayNum;
    piVar2 = &(this->RunRenderers).ArrayMax;
    pFVar11 = (FTextRunRenderer *)(param_1->RunRenderers).AllocatorInstance.Data;
    (this->RunRenderers).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar6,*piVar2,&pTVar4->AllocatorInstance,iVar6,piVar2);
      ConstructItems<FTextRunRenderer,FTextRunRenderer,int>
                ((pTVar4->AllocatorInstance).Data,pFVar11,iVar6);
    }
  }
  pTVar5 = &this->LineHighlights;
  if (pTVar5 != &param_1->LineHighlights) {
    DestructItems<FTextLineHighlight,int>
              ((FTextLineHighlight *)(pTVar5->AllocatorInstance).Data,
               (this->LineHighlights).ArrayNum);
    iVar6 = (param_1->LineHighlights).ArrayNum;
    piVar2 = &(this->LineHighlights).ArrayMax;
    pFVar12 = (FTextLineHighlight *)(param_1->LineHighlights).AllocatorInstance.Data;
    (this->LineHighlights).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar6,*piVar2,&pTVar5->AllocatorInstance,iVar6,piVar2);
      ConstructItems<FTextLineHighlight,FTextLineHighlight,int>
                ((pTVar5->AllocatorInstance).Data,pFVar12,iVar6);
    }
  }
  this->DirtyFlags = param_1->DirtyFlags;
  return this;
}

