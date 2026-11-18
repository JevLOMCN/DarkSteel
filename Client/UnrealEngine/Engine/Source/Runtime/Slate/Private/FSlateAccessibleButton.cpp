// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 4

// FSlateAccessibleButton @ 142844dc0

FSlateAccessibleButton * __thiscall
FSlateAccessibleButton::FSlateAccessibleButton
          (FSlateAccessibleButton *this,TWeakPtr<SWidget,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TWeakPtr<SWidget,1> local_18;
  
  local_18.Object = param_1->Object;
  local_18.WeakReferenceCount.ReferenceController =
       (param_1->WeakReferenceCount).ReferenceController;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FSlateAccessibleWidget::FSlateAccessibleWidget((FSlateAccessibleWidget *)this,&local_18,Button);
  *(undefined ***)this = &_vftable__for__FSlateAccessibleWidget__;
  *(undefined ***)&this->field_0x68 = &_vftable__for__IAccessibleActivatable__;
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return this;
}

// ~FSlateAccessibleButton @ 142849a70

void __thiscall FSlateAccessibleButton::~FSlateAccessibleButton(FSlateAccessibleButton *this)

{
  *(undefined ***)this = &_vftable__for__FSlateAccessibleWidget__;
  *(undefined ***)&this->field_0x68 = &_vftable__for__IAccessibleActivatable__;
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  return;
}

// Activate @ 14284fe60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSlateAccessibleButton::Activate(FSlateAccessibleButton *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SButton *pSVar4;
  SButton *pSVar5;
  SButton *this_00;
  bool bVar6;
  FReply local_c8;
  
  if (*(longlong *)&this[-1].field_0x20 == 0) {
    return;
  }
  if (*(longlong *)&this[-1].field_0x28 == 0) {
    return;
  }
  if (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1) {
    return;
  }
  pSVar5 = *(SButton **)&this[-1].field_0x28;
  this_00 = (SButton *)0x0;
  pSVar4 = pSVar5;
  if (pSVar5 != (SButton *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar5->_padding_;
    do {
      pSVar4 = this_00;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14284fec1;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar5->_padding_;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    this_00 = *(SButton **)&this[-1].field_0x20;
    LOCK();
    *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pSVar5->_padding_ + 1);
    UNLOCK();
    pSVar4 = pSVar5;
    if (this_00 != (SButton *)0x0) goto LAB_14284fee7;
  }
LAB_14284fec1:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar5 = pSVar4;
  if (bVar6) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14284fee7:
  SButton::ExecuteOnClick(this_00,&local_c8);
  FReply::~FReply(&local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return;
}

// AsActivatable @ 142853aa0

IAccessibleActivatable * __thiscall
FSlateAccessibleButton::AsActivatable(FSlateAccessibleButton *this)

{
  IAccessibleActivatable *pIVar1;
  
  pIVar1 = (IAccessibleActivatable *)&this->field_0x68;
  if (this == (FSlateAccessibleButton *)0x0) {
    pIVar1 = (IAccessibleActivatable *)0x0;
  }
  return pIVar1;
}

