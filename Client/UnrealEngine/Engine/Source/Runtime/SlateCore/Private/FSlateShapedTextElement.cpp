// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// SetOverflowArgs @ 14251f600

void __thiscall
FSlateShapedTextElement::SetOverflowArgs(FSlateShapedTextElement *this,FTextOverflowArgs *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FShapedGlyphSequence *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  pTVar1 = (param_1->OverflowTextPtr).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->OverflowTextPtr).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->OverflowArgs).OverflowTextPtr.SharedReferenceCount.ReferenceController;
  (this->OverflowArgs).OverflowTextPtr.Object = pFVar2;
  (this->OverflowArgs).OverflowTextPtr.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  (this->OverflowArgs).OverflowDirection = param_1->OverflowDirection;
  (this->OverflowArgs).OverflowPolicy = param_1->OverflowPolicy;
  (this->OverflowArgs).bIsLastVisibleBlock = param_1->bIsLastVisibleBlock;
  (this->OverflowArgs).bIsNextBlockClipped = param_1->bIsNextBlockClipped;
  if ((param_1->OverflowDirection != NoOverflow) &&
     ((param_1->OverflowTextPtr).Object == (FShapedGlyphSequence *)0x0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArgs.OverflowDirection == ETextOverflowDirection::NoOverflow || InArgs.OverflowTextPtr.IsValid()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Rendering\\DrawElementTypes.h"
                       ,0x214,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

