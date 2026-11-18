// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 18

// DestroyObject @ 142fb6dd0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TDefaultNumericTypeInterface<int>,SharedPointerInternals::DefaultDeleter<TDefaultNumericTypeInterface<int>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TDefaultNumericTypeInterface<int>,SharedPointerInternals::DefaultDeleter<TDefaultNumericTypeInterface<int>_>,1>
                *this)

{
  TDefaultNumericTypeInterface<int> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TDefaultNumericTypeInterface<int> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142fb6de1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142fb6df0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TDefaultNumericTypeInterface<float>,SharedPointerInternals::DefaultDeleter<TDefaultNumericTypeInterface<float>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TDefaultNumericTypeInterface<float>,SharedPointerInternals::DefaultDeleter<TDefaultNumericTypeInterface<float>_>,1>
                *this)

{
  TDefaultNumericTypeInterface<float> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TDefaultNumericTypeInterface<float> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142fb6e01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142fb6e10

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TDefaultNumericTypeInterface<double>,SharedPointerInternals::DefaultDeleter<TDefaultNumericTypeInterface<double>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TDefaultNumericTypeInterface<double>,SharedPointerInternals::DefaultDeleter<TDefaultNumericTypeInterface<double>_>,1>
                *this)

{
  TDefaultNumericTypeInterface<double> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TDefaultNumericTypeInterface<double> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142fb6e21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142fb6e30

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTableViewDragDrop,SharedPointerInternals::DefaultDeleter<FTableViewDragDrop>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTableViewDragDrop,SharedPointerInternals::DefaultDeleter<FTableViewDragDrop>,1>
                *this)

{
  FTableViewDragDrop *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTableViewDragDrop *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142fb6e41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142fb6e50

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTestData,SharedPointerInternals::DefaultDeleter<FTestData>,1>::
DestroyObject(TReferenceControllerWithDeleter<FTestData,SharedPointerInternals::DefaultDeleter<FTestData>,1>
              *this)

{
  FTestData *pFVar1;
  ITextData *pIVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTestData *)0x0) {
    pIVar2 = (pFVar1->Name).TextData.Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    DestructItems<TSharedPtr<FTestData,1>,int>
              ((TSharedPtr<FTestData,1> *)(pFVar1->Children).AllocatorInstance.Data,
               (pFVar1->Children).ArrayNum);
    pFVar3 = (pFVar1->Children).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar1,0x28);
    return;
  }
  return;
}

// DestroyObject @ 142fb6eb0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<SUserWidgetExampleImpl,SharedPointerInternals::DefaultDeleter<SUserWidgetExampleImpl>,1>
::DestroyObject(TReferenceControllerWithDeleter<SUserWidgetExampleImpl,SharedPointerInternals::DefaultDeleter<SUserWidgetExampleImpl>,1>
                *this)

{
  SUserWidgetExampleImpl *pSVar1;
  
  pSVar1 = this->Object;
  if (pSVar1 != (SUserWidgetExampleImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142fb6ec1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pSVar1)(pSVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142fb6ed0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<enum_ESelectionMode::Type,SharedPointerInternals::DefaultDeleter<enum_ESelectionMode::Type>,1>
::DestroyObject(void *this)

{
  ::operator_delete(*(void **)((longlong)this + 0x10),4);
  return;
}

// DestroyObject @ 14302fb00

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FColorInfo,SharedPointerInternals::DefaultDeleter<FColorInfo>,1>::
DestroyObject(TReferenceControllerWithDeleter<FColorInfo,SharedPointerInternals::DefaultDeleter<FColorInfo>,1>
              *this)

{
  FColorInfo *pFVar1;
  ITextData *pIVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FColorInfo *)0x0) {
    pIVar2 = (pFVar1->Label).TextData.Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->Color).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar1,0x20);
    return;
  }
  return;
}

// DestroyObject @ 14302fb50

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FColorDragDrop,SharedPointerInternals::DefaultDeleter<FColorDragDrop>,1>
::DestroyObject(TReferenceControllerWithDeleter<FColorDragDrop,SharedPointerInternals::DefaultDeleter<FColorDragDrop>,1>
                *this)

{
  FColorDragDrop *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FColorDragDrop *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014302fb61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14302fb70

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FColorTheme,SharedPointerInternals::DefaultDeleter<FColorTheme>,1>::
DestroyObject(TReferenceControllerWithDeleter<FColorTheme,SharedPointerInternals::DefaultDeleter<FColorTheme>,1>
              *this)

{
  FColorTheme *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FColorTheme *)0x0) {
    FColorTheme::~FColorTheme(this_00);
    ::operator_delete(this_00,0x40);
    return;
  }
  return;
}

// DestroyObject @ 1430b5360

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TDefaultNumericTypeInterface<unsigned_short>,SharedPointerInternals::DefaultDeleter<TDefaultNumericTypeInterface<unsigned_short>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TDefaultNumericTypeInterface<unsigned_short>,SharedPointerInternals::DefaultDeleter<TDefaultNumericTypeInterface<unsigned_short>_>,1>
                *this)

{
  TDefaultNumericTypeInterface<unsigned_short> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TDefaultNumericTypeInterface<unsigned_short> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001430b5371. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1430b5380

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<SDocumentsTest::FDocumentInfo,SharedPointerInternals::DefaultDeleter<SDocumentsTest::FDocumentInfo>,1>
::DestroyObject(TReferenceControllerWithDeleter<SDocumentsTest::FDocumentInfo,SharedPointerInternals::DefaultDeleter<SDocumentsTest::FDocumentInfo>,1>
                *this)

{
  FDocumentInfo *pFVar1;
  ITextData *pIVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FDocumentInfo *)0x0) {
    pIVar2 = (pFVar1->DisplayName).TextData.Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    ::operator_delete(pFVar1,0x10);
    return;
  }
  return;
}

// DestroyObject @ 1430b53c0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTextStyles::FFontFamily,SharedPointerInternals::DefaultDeleter<FTextStyles::FFontFamily>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTextStyles::FFontFamily,SharedPointerInternals::DefaultDeleter<FTextStyles::FFontFamily>,1>
                *this)

{
  FFontFamily *pFVar1;
  ITextData *pIVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FFontFamily *)0x0) {
    TSharedRef<FCompositeFont_const_,1>::~TSharedRef<FCompositeFont_const_,1>
              (&pFVar1->CompositeFont);
    pIVar2 = (pFVar1->DisplayName).TextData.Reference;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    ::operator_delete(pFVar1,0x28);
    return;
  }
  return;
}

// DestroyObject @ 1430b5410

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<SSplitterTest::FVisibilityCycler,SharedPointerInternals::DefaultDeleter<SSplitterTest::FVisibilityCycler>,1>
::DestroyObject(TReferenceControllerWithDeleter<SSplitterTest::FVisibilityCycler,SharedPointerInternals::DefaultDeleter<SSplitterTest::FVisibilityCycler>,1>
                *this)

{
  ::operator_delete(this->Object,1);
  return;
}

// DestroyObject @ 1430b5430

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMultiBoxTestCommandList,SharedPointerInternals::DefaultDeleter<FMultiBoxTestCommandList>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMultiBoxTestCommandList,SharedPointerInternals::DefaultDeleter<FMultiBoxTestCommandList>,1>
                *this)

{
  FMultiBoxTestCommandList *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMultiBoxTestCommandList *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001430b5441. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1430b5450

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTextStyleDecoratorTest,SharedPointerInternals::DefaultDeleter<FTextStyleDecoratorTest>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTextStyleDecoratorTest,SharedPointerInternals::DefaultDeleter<FTextStyleDecoratorTest>,1>
                *this)

{
  FTextStyleDecoratorTest *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FTextStyleDecoratorTest *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001430b5461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1430b5470

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<SRenderTransformManipulatorWidgetImpl,SharedPointerInternals::DefaultDeleter<SRenderTransformManipulatorWidgetImpl>,1>
::DestroyObject(TReferenceControllerWithDeleter<SRenderTransformManipulatorWidgetImpl,SharedPointerInternals::DefaultDeleter<SRenderTransformManipulatorWidgetImpl>,1>
                *this)

{
  SRenderTransformManipulatorWidgetImpl *pSVar1;
  
  pSVar1 = this->Object;
  if (pSVar1 != (SRenderTransformManipulatorWidgetImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001430b5481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pSVar1->_padding_)(pSVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1430b5490

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<SResponsiveGridPanelTestWidgetImpl,SharedPointerInternals::DefaultDeleter<SResponsiveGridPanelTestWidgetImpl>,1>
::DestroyObject(TReferenceControllerWithDeleter<SResponsiveGridPanelTestWidgetImpl,SharedPointerInternals::DefaultDeleter<SResponsiveGridPanelTestWidgetImpl>,1>
                *this)

{
  SResponsiveGridPanelTestWidgetImpl *pSVar1;
  
  pSVar1 = this->Object;
  if (pSVar1 != (SResponsiveGridPanelTestWidgetImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001430b54a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pSVar1)(pSVar1,1);
    return;
  }
  return;
}

