// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// FLineView @ 142844530

FLineView * __thiscall FTextLayout::FLineView::FLineView(FLineView *this,FLineView *param_1)

{
  int *piVar1;
  TArray<FTextLayout::FLineViewHighlight,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  TSharedRef<ILayoutBlock,1> *pTVar4;
  FLineViewHighlight *pFVar5;
  double dVar6;
  
  piVar1 = &(this->Blocks).ArrayMax;
  (this->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Blocks).ArrayNum;
  pTVar4 = (TSharedRef<ILayoutBlock,1> *)(param_1->Blocks).AllocatorInstance.Data;
  (this->Blocks).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    ConstructItems<TSharedRef<ILayoutBlock,1>,TSharedRef<ILayoutBlock,1>,int>
              ((this->Blocks).AllocatorInstance.Data,pTVar4,iVar3);
  }
  pTVar2 = &this->UnderlayHighlights;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->UnderlayHighlights).ArrayMax;
  iVar3 = (param_1->UnderlayHighlights).ArrayNum;
  pFVar5 = (FLineViewHighlight *)(param_1->UnderlayHighlights).AllocatorInstance.Data;
  (this->UnderlayHighlights).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FTextLayout::FLineViewHighlight,FTextLayout::FLineViewHighlight,int>
              ((pTVar2->AllocatorInstance).Data,pFVar5,iVar3);
  }
  pTVar2 = &this->OverlayHighlights;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->OverlayHighlights).ArrayMax;
  iVar3 = (param_1->OverlayHighlights).ArrayNum;
  pFVar5 = (FLineViewHighlight *)(param_1->OverlayHighlights).AllocatorInstance.Data;
  (this->OverlayHighlights).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    ConstructItems<FTextLayout::FLineViewHighlight,FTextLayout::FLineViewHighlight,int>
              ((pTVar2->AllocatorInstance).Data,pFVar5,iVar3);
  }
  dVar6 = (param_1->Offset).field0_0x0._s_0.Y;
  (this->Offset).field0_0x0._s_0.X = (param_1->Offset).field0_0x0._s_0.X;
  (this->Offset).field0_0x0._s_0.Y = dVar6;
  dVar6 = (param_1->Size).field0_0x0._s_0.Y;
  (this->Size).field0_0x0._s_0.X = (param_1->Size).field0_0x0._s_0.X;
  (this->Size).field0_0x0._s_0.Y = dVar6;
  this->TextHeight = param_1->TextHeight;
  this->JustificationWidth = param_1->JustificationWidth;
  this->Range = param_1->Range;
  this->TextBaseDirection = param_1->TextBaseDirection;
  this->ModelIndex = param_1->ModelIndex;
  return this;
}

// ~FLineView @ 142849880

void __thiscall FTextLayout::FLineView::~FLineView(FLineView *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FTextLayout::FLineViewHighlight,int>
            ((FLineViewHighlight *)(this->OverlayHighlights).AllocatorInstance.Data,
             (this->OverlayHighlights).ArrayNum);
  pFVar1 = (this->OverlayHighlights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FTextLayout::FLineViewHighlight,int>
            ((FLineViewHighlight *)(this->UnderlayHighlights).AllocatorInstance.Data,
             (this->UnderlayHighlights).ArrayNum);
  pFVar1 = (this->UnderlayHighlights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<ILayoutBlock,1>,int>
            ((TSharedRef<ILayoutBlock,1> *)(this->Blocks).AllocatorInstance.Data,
             (this->Blocks).ArrayNum);
  pFVar1 = (this->Blocks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

