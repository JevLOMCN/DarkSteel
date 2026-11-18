// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 7

// DestroyObject @ 14a7d37f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCarouselDisplayItem,SharedPointerInternals::DefaultDeleter<FCarouselDisplayItem>,1>
::DestroyObject(TReferenceControllerWithDeleter<FCarouselDisplayItem,SharedPointerInternals::DefaultDeleter<FCarouselDisplayItem>,1>
                *this)

{
  int *piVar1;
  int iVar2;
  FCarouselDisplayItem *pFVar3;
  longlong *plVar4;
  
  pFVar3 = this->Object;
  if (pFVar3 != (FCarouselDisplayItem *)0x0) {
    FCurveSequence::~FCurveSequence(&pFVar3->SlideInCurve);
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar3->FXWidget).SharedReferenceCount.ReferenceController);
    plVar4 = (longlong *)pFVar3->_padding_;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    ::operator_delete(pFVar3,0xd0);
    return;
  }
  return;
}

// DestroyObject @ 14a7d3860

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FUIActionBinding,SharedPointerInternals::DefaultDeleter<FUIActionBinding>,1>
::DestroyObject(TReferenceControllerWithDeleter<FUIActionBinding,SharedPointerInternals::DefaultDeleter<FUIActionBinding>,1>
                *this)

{
  FUIActionBinding *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FUIActionBinding *)0x0) {
    FUIActionBinding::~FUIActionBinding(this_00);
    ::operator_delete(this_00,0x198);
    return;
  }
  return;
}

// DestroyObject @ 14a7d38a0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FActivatableTreeNode,SharedPointerInternals::DefaultDeleter<FActivatableTreeNode>,1>
::DestroyObject(TReferenceControllerWithDeleter<FActivatableTreeNode,SharedPointerInternals::DefaultDeleter<FActivatableTreeNode>,1>
                *this)

{
  FActivatableTreeNode *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FActivatableTreeNode *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a7d38b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14a7d38c0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FActivatableTreeRoot,SharedPointerInternals::DefaultDeleter<FActivatableTreeRoot>,1>
::DestroyObject(TReferenceControllerWithDeleter<FActivatableTreeRoot,SharedPointerInternals::DefaultDeleter<FActivatableTreeRoot>,1>
                *this)

{
  FActivatableTreeRoot *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FActivatableTreeRoot *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a7d38d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14a7d38e0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCommonAnalogCursor,SharedPointerInternals::DefaultDeleter<FCommonAnalogCursor>,1>
::DestroyObject(TReferenceControllerWithDeleter<FCommonAnalogCursor,SharedPointerInternals::DefaultDeleter<FCommonAnalogCursor>,1>
                *this)

{
  FCommonAnalogCursor *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FCommonAnalogCursor *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a7d38f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14a7d3900

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCommonDecorator_InlineIcon,SharedPointerInternals::DefaultDeleter<FCommonDecorator_InlineIcon>,1>
::DestroyObject(TReferenceControllerWithDeleter<FCommonDecorator_InlineIcon,SharedPointerInternals::DefaultDeleter<FCommonDecorator_InlineIcon>,1>
                *this)

{
  FCommonDecorator_InlineIcon *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FCommonDecorator_InlineIcon *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a7d3911. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14a7d3920

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCommonRichTextDecorator,SharedPointerInternals::DefaultDeleter<FCommonRichTextDecorator>,1>
::DestroyObject(TReferenceControllerWithDeleter<FCommonRichTextDecorator,SharedPointerInternals::DefaultDeleter<FCommonRichTextDecorator>,1>
                *this)

{
  FCommonRichTextDecorator *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FCommonRichTextDecorator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014a7d3931. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

