// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// BuildMultiBlockWidget @ 1427db480

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SGroupMarkerBlock::BuildMultiBlockWidget
          (SGroupMarkerBlock *this,ISlateStyle *param_1,FName *param_2)

{
  code *pcVar1;
  atomic<int> aVar2;
  SWidget *pSVar3;
  FSharedReferencer<1> FVar4;
  atomic<int> aVar5;
  FText *pFVar6;
  undefined8 *puVar7;
  SMultiBoxWidget *pSVar8;
  SMultiBoxWidget *pSVar9;
  SMultiBoxWidget *this_00;
  bool bVar10;
  undefined1 local_res8 [8];
  FText local_58;
  TSharedPtr<SWidget,1> local_48;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->field_0x240);
  FVar4 = SNullWidget::NullWidget.SharedReferenceCount;
  pSVar3 = SNullWidget::NullWidget.Object;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = *(undefined8 *)&this->field_0x250;
  pTStack_30 = *(TReferenceControllerBase<1> **)&this->field_0x258;
  *(SWidget **)&this->field_0x250 = pSVar3;
  *(TReferenceControllerBase<1> **)&this->field_0x258 = FVar4.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->field_0x240);
  pSVar9 = *(SMultiBoxWidget **)&this->field_0x2b8;
  this_00 = (SMultiBoxWidget *)0x0;
  pSVar8 = pSVar9;
  if (pSVar9 != (SMultiBoxWidget *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar9->_padding_;
    do {
      pSVar8 = this_00;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1427db515;
      LOCK();
      aVar5 = *(atomic<int> *)&pSVar9->_padding_;
      bVar10 = aVar2 == aVar5;
      if (bVar10) {
        *(atomic<int> *)&pSVar9->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar5 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar5;
    } while (!bVar10);
    this_00 = *(SMultiBoxWidget **)&this->field_0x2b0;
    pSVar8 = pSVar9;
    if (this_00 != (SMultiBoxWidget *)0x0) goto LAB_1427db53b;
  }
LAB_1427db515:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pSVar9 = pSVar8;
  if (bVar10) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1427db53b:
  if ((*(longlong *)&this->field_0x2c0 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar10 = *(bool *)(*(longlong *)&this->field_0x2c0 + 0xbc);
  pFVar6 = FText::GetEmpty();
  local_58.TextData.Reference = (pFVar6->TextData).Reference;
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 8))
              (local_58.TextData.Reference,local_res8);
  }
  local_58.Flags = pFVar6->Flags;
  puVar7 = (undefined8 *)(**(code **)(*(longlong *)this + 8))(this,local_28);
  local_48.Object = (SWidget *)*puVar7;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar7[1];
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SMultiBoxWidget::AddElement(this_00,&local_48,&local_58,bVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar9);
  return;
}

