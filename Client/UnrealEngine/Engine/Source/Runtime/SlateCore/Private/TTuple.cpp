// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_><SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_> @ 1425b02c0

TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
* __thiscall
TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
::
TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_><SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
          (TTuple<SWidget::TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>,SWidget::TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
           *this,TSlateManagedAttribute<FSlateBrush_const_*,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
                 *param_1,
          TSlateManagedAttribute<FSlateColor,2,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)&this->field_0x8 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&param_1->field_0x10 = 0;
  *(undefined8 *)&param_1->field_0x8 = 0;
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1425b0321;
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar6 = aVar3 == aVar4;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar6);
    pTVar5 = pTVar1;
    if (*(SWidget **)&this->field_0x8 != (SWidget *)0x0) {
      FSlateAttributeMetaData::MoveAttribute
                (*(SWidget **)&this->field_0x8,(FSlateAttributeBase *)this,Managed,
                 (FSlateAttributeBase *)param_1);
    }
  }
LAB_1425b0321:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  uVar2 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&this->field_0x18 = *(undefined8 *)param_2;
  *(undefined8 *)&this->field_0x20 = uVar2;
  *(undefined4 *)&this->field_0x28 = *(undefined4 *)&param_2->field_0x10;
  *(undefined8 *)&this->field_0x30 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&this->field_0x38 = *(undefined8 *)&param_2->field_0x20;
  *(undefined8 *)&param_2->field_0x20 = 0;
  *(undefined8 *)&param_2->field_0x18 = 0;
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x38;
  pTVar5 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1425b0372;
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar6 = aVar3 == aVar4;
      if (bVar6) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar6);
    pTVar5 = pTVar1;
    if (*(SWidget **)&this->field_0x30 != (SWidget *)0x0) {
      FSlateAttributeMetaData::MoveAttribute
                (*(SWidget **)&this->field_0x30,(FSlateAttributeBase *)&this->field_0x18,Managed,
                 (FSlateAttributeBase *)param_2);
    }
  }
LAB_1425b0372:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return this;
}

