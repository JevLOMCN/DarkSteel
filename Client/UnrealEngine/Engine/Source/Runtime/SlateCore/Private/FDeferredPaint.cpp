// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// FDeferredPaint @ 1424e97b0

/* WARNING: Type propagation algorithm not settling */

FDeferredPaint * __thiscall
FSlateWindowElementList::FDeferredPaint::FDeferredPaint
          (FDeferredPaint *this,FDeferredPaint *param_1,FPaintArgs *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FHittestGrid *pFVar4;
  SWidget *pSVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  
  (this->WidgetToPaintPtr).Object = (param_1->WidgetToPaintPtr).Object;
  pTVar3 = (param_1->WidgetToPaintPtr).WeakReferenceCount.ReferenceController;
  (this->WidgetToPaintPtr).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = param_2->CurrentGrid;
  (this->Args).RootGrid = param_2->RootGrid;
  (this->Args).CurrentGrid = pFVar4;
  pSVar5 = param_2->PaintParentPtr;
  (this->Args).WindowOffset.field0_0x0 = (param_2->WindowOffset).field0_0x0;
  (this->Args).PaintParentPtr = pSVar5;
  fVar7 = param_2->DeltaTime;
  uVar8 = *(undefined4 *)&param_2->field_0x2c;
  (this->Args).CurrentTime = param_2->CurrentTime;
  (this->Args).DeltaTime = fVar7;
  *(undefined4 *)&(this->Args).field_0x2c = uVar8;
  uVar6 = *(undefined8 *)&(param_1->AllottedGeometry).Scale;
  (this->AllottedGeometry).Size = (param_1->AllottedGeometry).Size;
  *(undefined8 *)&(this->AllottedGeometry).Scale = uVar6;
  uVar6 = *(undefined8 *)((longlong)&(param_1->AllottedGeometry).Position.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->AllottedGeometry).AbsolutePosition.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(param_1->AllottedGeometry).AbsolutePosition.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(this->AllottedGeometry).Position.field0_0x0 + 4) = uVar6;
  uVar6 = *(undefined8 *)((param_1->AllottedGeometry).AccumulatedRenderTransform.M.M[1] + 1);
  *(undefined8 *)((this->AllottedGeometry).AccumulatedRenderTransform.M.M[0] + 1) =
       *(undefined8 *)((param_1->AllottedGeometry).AccumulatedRenderTransform.M.M[0] + 1);
  *(undefined8 *)((this->AllottedGeometry).AccumulatedRenderTransform.M.M[1] + 1) = uVar6;
  *(undefined8 *)
   ((longlong)&(this->AllottedGeometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4) =
       *(undefined8 *)
        ((longlong)&(param_1->AllottedGeometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
  uVar6 = *(undefined8 *)((longlong)&(param_1->WidgetStyle).ColorAndOpacityTint.field0_0x0 + 8);
  *(undefined8 *)&(this->WidgetStyle).ColorAndOpacityTint.field0_0x0 =
       *(undefined8 *)&(param_1->WidgetStyle).ColorAndOpacityTint.field0_0x0;
  *(undefined8 *)((longlong)&(this->WidgetStyle).ColorAndOpacityTint.field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&(param_1->WidgetStyle).ForegroundColor.field0_0x0 + 8);
  *(undefined8 *)&(this->WidgetStyle).ForegroundColor.field0_0x0 =
       *(undefined8 *)&(param_1->WidgetStyle).ForegroundColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->WidgetStyle).ForegroundColor.field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&(param_1->WidgetStyle).SubduedForeground.field0_0x0 + 8);
  *(undefined8 *)&(this->WidgetStyle).SubduedForeground.field0_0x0 =
       *(undefined8 *)&(param_1->WidgetStyle).SubduedForeground.field0_0x0;
  *(undefined8 *)((longlong)&(this->WidgetStyle).SubduedForeground.field0_0x0 + 8) = uVar6;
  bVar2 = param_1->bParentEnabled;
  (this->Args).bDeferredPainting = '\x01';
  this->bParentEnabled = bVar2;
  return this;
}

// FDeferredPaint @ 1424e9850

/* WARNING: Type propagation algorithm not settling */

FDeferredPaint * __thiscall
FSlateWindowElementList::FDeferredPaint::FDeferredPaint
          (FDeferredPaint *this,TSharedRef<SWidget_const_,1> *param_1,FPaintArgs *param_2,
          FGeometry *param_3,FWidgetStyle *param_4,bool param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  FHittestGrid *pFVar4;
  SWidget *pSVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 uVar10;
  
  (this->WidgetToPaintPtr).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  (this->WidgetToPaintPtr).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = param_2->CurrentGrid;
  (this->Args).RootGrid = param_2->RootGrid;
  (this->Args).CurrentGrid = pFVar4;
  pSVar5 = param_2->PaintParentPtr;
  (this->Args).WindowOffset.field0_0x0 = (param_2->WindowOffset).field0_0x0;
  (this->Args).PaintParentPtr = pSVar5;
  fVar9 = param_2->DeltaTime;
  uVar10 = *(undefined4 *)&param_2->field_0x2c;
  uVar2 = *(undefined8 *)((longlong)&(param_3->AbsolutePosition).field0_0x0 + 4);
  uVar6 = *(undefined8 *)((longlong)&(param_3->Position).field0_0x0 + 4);
  (this->Args).CurrentTime = param_2->CurrentTime;
  (this->Args).DeltaTime = fVar9;
  *(undefined4 *)&(this->Args).field_0x2c = uVar10;
  uVar7 = *(undefined8 *)&param_3->Scale;
  (this->AllottedGeometry).Size = param_3->Size;
  *(undefined8 *)&(this->AllottedGeometry).Scale = uVar7;
  uVar7 = *(undefined8 *)((param_3->AccumulatedRenderTransform).M.M[0] + 1);
  uVar8 = *(undefined8 *)((param_3->AccumulatedRenderTransform).M.M[1] + 1);
  *(undefined8 *)((longlong)&(this->AllottedGeometry).AbsolutePosition.field0_0x0 + 4) = uVar2;
  *(undefined8 *)((longlong)&(this->AllottedGeometry).Position.field0_0x0 + 4) = uVar6;
  uVar2 = *(undefined8 *)((longlong)&(param_3->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  *(undefined8 *)((this->AllottedGeometry).AccumulatedRenderTransform.M.M[0] + 1) = uVar7;
  *(undefined8 *)((this->AllottedGeometry).AccumulatedRenderTransform.M.M[1] + 1) = uVar8;
  *(undefined8 *)
   ((longlong)&(this->AllottedGeometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4) = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(param_4->ColorAndOpacityTint).field0_0x0 + 8);
  *(undefined8 *)&(this->WidgetStyle).ColorAndOpacityTint.field0_0x0 =
       *(undefined8 *)&(param_4->ColorAndOpacityTint).field0_0x0;
  *(undefined8 *)((longlong)&(this->WidgetStyle).ColorAndOpacityTint.field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(param_4->ForegroundColor).field0_0x0 + 8);
  *(undefined8 *)&(this->WidgetStyle).ForegroundColor.field0_0x0 =
       *(undefined8 *)&(param_4->ForegroundColor).field0_0x0;
  *(undefined8 *)((longlong)&(this->WidgetStyle).ForegroundColor.field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)&(param_4->SubduedForeground).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_4->SubduedForeground).field0_0x0 + 8);
  this->bParentEnabled = param_5;
  *(undefined8 *)&(this->WidgetStyle).SubduedForeground.field0_0x0 = uVar2;
  *(undefined8 *)((longlong)&(this->WidgetStyle).SubduedForeground.field0_0x0 + 8) = uVar6;
  (this->Args).bDeferredPainting = '\x01';
  param_1->Object->LastPaintFrame = GFrameNumber;
  return this;
}

// Copy @ 1425059d0

/* WARNING: Type propagation algorithm not settling */

FDeferredPaint * __thiscall
FSlateWindowElementList::FDeferredPaint::Copy
          (FDeferredPaint *this,FDeferredPaint *__return_storage_ptr__,FPaintArgs *param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FHittestGrid *pFVar4;
  SWidget *pSVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  
  (__return_storage_ptr__->WidgetToPaintPtr).Object = (this->WidgetToPaintPtr).Object;
  pTVar3 = (this->WidgetToPaintPtr).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->WidgetToPaintPtr).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = param_1->CurrentGrid;
  (__return_storage_ptr__->Args).RootGrid = param_1->RootGrid;
  (__return_storage_ptr__->Args).CurrentGrid = pFVar4;
  pSVar5 = param_1->PaintParentPtr;
  (__return_storage_ptr__->Args).WindowOffset.field0_0x0 = (param_1->WindowOffset).field0_0x0;
  (__return_storage_ptr__->Args).PaintParentPtr = pSVar5;
  fVar7 = param_1->DeltaTime;
  uVar8 = *(undefined4 *)&param_1->field_0x2c;
  (__return_storage_ptr__->Args).CurrentTime = param_1->CurrentTime;
  (__return_storage_ptr__->Args).DeltaTime = fVar7;
  *(undefined4 *)&(__return_storage_ptr__->Args).field_0x2c = uVar8;
  uVar6 = *(undefined8 *)&(this->AllottedGeometry).Scale;
  (__return_storage_ptr__->AllottedGeometry).Size = (this->AllottedGeometry).Size;
  *(undefined8 *)&(__return_storage_ptr__->AllottedGeometry).Scale = uVar6;
  uVar6 = *(undefined8 *)((longlong)&(this->AllottedGeometry).Position.field0_0x0 + 4);
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->AllottedGeometry).AbsolutePosition.field0_0x0 + 4) =
       *(undefined8 *)((longlong)&(this->AllottedGeometry).AbsolutePosition.field0_0x0 + 4);
  *(undefined8 *)((longlong)&(__return_storage_ptr__->AllottedGeometry).Position.field0_0x0 + 4) =
       uVar6;
  uVar6 = *(undefined8 *)((this->AllottedGeometry).AccumulatedRenderTransform.M.M[1] + 1);
  *(undefined8 *)((__return_storage_ptr__->AllottedGeometry).AccumulatedRenderTransform.M.M[0] + 1)
       = *(undefined8 *)((this->AllottedGeometry).AccumulatedRenderTransform.M.M[0] + 1);
  *(undefined8 *)((__return_storage_ptr__->AllottedGeometry).AccumulatedRenderTransform.M.M[1] + 1)
       = uVar6;
  *(undefined8 *)
   ((longlong)
    &(__return_storage_ptr__->AllottedGeometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4) =
       *(undefined8 *)
        ((longlong)&(this->AllottedGeometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
  uVar6 = *(undefined8 *)((longlong)&(this->WidgetStyle).ColorAndOpacityTint.field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->WidgetStyle).ColorAndOpacityTint.field0_0x0 =
       *(undefined8 *)&(this->WidgetStyle).ColorAndOpacityTint.field0_0x0;
  *(undefined8 *)
   ((longlong)&(__return_storage_ptr__->WidgetStyle).ColorAndOpacityTint.field0_0x0 + 8) = uVar6;
  uVar6 = *(undefined8 *)((longlong)&(this->WidgetStyle).ForegroundColor.field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->WidgetStyle).ForegroundColor.field0_0x0 =
       *(undefined8 *)&(this->WidgetStyle).ForegroundColor.field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->WidgetStyle).ForegroundColor.field0_0x0 + 8) =
       uVar6;
  uVar6 = *(undefined8 *)((longlong)&(this->WidgetStyle).SubduedForeground.field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->WidgetStyle).SubduedForeground.field0_0x0 =
       *(undefined8 *)&(this->WidgetStyle).SubduedForeground.field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->WidgetStyle).SubduedForeground.field0_0x0 + 8)
       = uVar6;
  bVar2 = this->bParentEnabled;
  (__return_storage_ptr__->Args).bDeferredPainting = '\x01';
  __return_storage_ptr__->bParentEnabled = bVar2;
  return __return_storage_ptr__;
}

// ExecutePaint @ 142508810

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FSlateWindowElementList::FDeferredPaint::ExecutePaint
          (FDeferredPaint *this,int param_1,FSlateWindowElementList *param_2,FSlateRect *param_3)

{
  SWidget *this_00;
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = (this->WidgetToPaintPtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142508850;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    this_00 = (this->WidgetToPaintPtr).Object;
    if (this_00 != (SWidget *)0x0) {
      param_1 = SWidget::Paint(this_00,&this->Args,&this->AllottedGeometry,param_3,param_2,param_1,
                               &this->WidgetStyle,this->bParentEnabled);
    }
  }
LAB_142508850:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return param_1;
}

