// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 9

// DestroyObject @ 1469be270

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDelegateToolTip,SharedPointerInternals::DefaultDeleter<FDelegateToolTip>,1>
::DestroyObject(TReferenceControllerWithDeleter<FDelegateToolTip,SharedPointerInternals::DefaultDeleter<FDelegateToolTip>,1>
                *this)

{
  FDelegateToolTip *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FDelegateToolTip *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469be281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x48))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1469be290

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRichInlineImage,SharedPointerInternals::DefaultDeleter<FRichInlineImage>,1>
::DestroyObject(TReferenceControllerWithDeleter<FRichInlineImage,SharedPointerInternals::DefaultDeleter<FRichInlineImage>,1>
                *this)

{
  FRichInlineImage *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FRichInlineImage *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469be2a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1469be2b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSceneViewport,SharedPointerInternals::DefaultDeleter<FSceneViewport>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSceneViewport,SharedPointerInternals::DefaultDeleter<FSceneViewport>,1>
                *this)

{
  FSceneViewport *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSceneViewport *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469be2c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(&pFVar1->_padding_,1);
    return;
  }
  return;
}

// DestroyObject @ 1469be2d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateStyleSet,`MakeShareableDeferredCleanup<FSlateStyleSet>'::__l2::<lambda_1>,1>
::DestroyObject(void *this)

{
  FDeferredCleanupInterface FVar1;
  FDeferredCleanupInterface *pFVar2;
  
  FVar1 = *(FDeferredCleanupInterface *)((longlong)this + 0x10);
  pFVar2 = ::operator_new(0x10);
  if (pFVar2 != (FDeferredCleanupInterface *)0x0) {
    pFVar2[1] = FVar1;
    *pFVar2 = (FDeferredCleanupInterface)&___7__FDeferredDeletor_VFSlateStyleSet____6B_;
    BeginCleanup(pFVar2);
    return;
  }
  BeginCleanup((FDeferredCleanupInterface *)0x0);
  return;
}

// DestroyObject @ 1469be320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FUMGViewportClient,SharedPointerInternals::DefaultDeleter<FUMGViewportClient>,1>
::DestroyObject(TReferenceControllerWithDeleter<FUMGViewportClient,SharedPointerInternals::DefaultDeleter<FUMGViewportClient>,1>
                *this)

{
  FUMGViewportClient *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FUMGViewportClient *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469be331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146a6ace0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateMaterialBrush,SharedPointerInternals::DefaultDeleter<FSlateMaterialBrush>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateMaterialBrush,SharedPointerInternals::DefaultDeleter<FSlateMaterialBrush>,1>
                *this)

{
  FSlateMaterialBrush *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateMaterialBrush *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a6acf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146a6ad00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FUMGDragDropOp,SharedPointerInternals::DefaultDeleter<FUMGDragDropOp>,1>
::DestroyObject(TReferenceControllerWithDeleter<FUMGDragDropOp,SharedPointerInternals::DefaultDeleter<FUMGDragDropOp>,1>
                *this)

{
  FUMGDragDropOp *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FUMGDragDropOp *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a6ad11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146a6ad20

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWidget3DHitTester,SharedPointerInternals::DefaultDeleter<FWidget3DHitTester>,1>
::DestroyObject(TReferenceControllerWithDeleter<FWidget3DHitTester,SharedPointerInternals::DefaultDeleter<FWidget3DHitTester>,1>
                *this)

{
  FWidget3DHitTester *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FWidget3DHitTester *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a6ad31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146a6ad40

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWorldWidgetScreenLayer,SharedPointerInternals::DefaultDeleter<FWorldWidgetScreenLayer>,1>
::DestroyObject(TReferenceControllerWithDeleter<FWorldWidgetScreenLayer,SharedPointerInternals::DefaultDeleter<FWorldWidgetScreenLayer>,1>
                *this)

{
  FWorldWidgetScreenLayer *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FWorldWidgetScreenLayer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a6ad51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,1);
    return;
  }
  return;
}

