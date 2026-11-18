// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 8

// ~FSlateAccessibleCheckBox @ 142849a90

void __thiscall FSlateAccessibleCheckBox::~FSlateAccessibleCheckBox(FSlateAccessibleCheckBox *this)

{
  *(undefined ***)this = &_vftable__for__FSlateAccessibleWidget__;
  *(undefined ***)&this->field_0x68 = &_vftable__for__IAccessibleActivatable__;
  *(undefined ***)&this->field_0x70 = &_vftable__for__IAccessibleProperty__;
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  return;
}

// Activate @ 14284ff40

void __thiscall FSlateAccessibleCheckBox::Activate(FSlateAccessibleCheckBox *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  SCheckBox *pSVar4;
  SCheckBox *pSVar5;
  SCheckBox *this_00;
  bool bVar6;
  
  if (*(longlong *)&this[-1].field_0x28 == 0) {
    return;
  }
  if (*(longlong *)&this[-1].field_0x30 == 0) {
    return;
  }
  if (*(int *)(*(longlong *)&this[-1].field_0x30 + 8) < 1) {
    return;
  }
  pSVar5 = *(SCheckBox **)&this[-1].field_0x30;
  this_00 = (SCheckBox *)0x0;
  pSVar4 = pSVar5;
  if (pSVar5 != (SCheckBox *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar5->_padding_;
    do {
      pSVar4 = this_00;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14284ff93;
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
    this_00 = *(SCheckBox **)&this[-1].field_0x28;
    LOCK();
    *(atomic<int> *)&pSVar5->_padding_ = (atomic<int>)((int)*(atomic<int> *)&pSVar5->_padding_ + 1);
    UNLOCK();
    pSVar4 = pSVar5;
    if (this_00 != (SCheckBox *)0x0) goto LAB_14284ffb9;
  }
LAB_14284ff93:
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
LAB_14284ffb9:
  SCheckBox::ToggleCheckedState(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar5);
  return;
}

// AsActivatable @ 142853ac0

IAccessibleActivatable * __thiscall
FSlateAccessibleCheckBox::AsActivatable(FSlateAccessibleCheckBox *this)

{
  IAccessibleActivatable *pIVar1;
  
  pIVar1 = (IAccessibleActivatable *)&this->field_0x68;
  if (this == (FSlateAccessibleCheckBox *)0x0) {
    pIVar1 = (IAccessibleActivatable *)0x0;
  }
  return pIVar1;
}

// AsProperty @ 142853ae0

IAccessibleProperty * __thiscall
FSlateAccessibleCheckBox::AsProperty(FSlateAccessibleCheckBox *this)

{
  IAccessibleProperty *pIVar1;
  
  pIVar1 = (IAccessibleProperty *)&this->field_0x70;
  if (this == (FSlateAccessibleCheckBox *)0x0) {
    pIVar1 = (IAccessibleProperty *)0x0;
  }
  return pIVar1;
}

// GetCheckedState @ 1428755b0

bool __thiscall FSlateAccessibleCheckBox::GetCheckedState(FSlateAccessibleCheckBox *this)

{
  ECheckBoxState EVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  ECheckBoxState *pEVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  
  if (((*(longlong *)&this[-1].field_0x28 == 0) || (*(longlong *)&this[-1].field_0x30 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x30 + 8) < 1)) {
    return false;
  }
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = *(TReferenceControllerBase<1> **)&this[-1].field_0x30;
  pTVar8 = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      pTVar8 = pTVar7;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142875607;
      LOCK();
      aVar5 = pTVar9->SharedReferenceCount;
      bVar10 = aVar3 == aVar5;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar10);
    pTVar7 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    pTVar8 = pTVar9;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_14287562d;
  }
LAB_142875607:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pTVar9 = pTVar8;
  if (bVar10) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_14287562d:
  pEVar6 = TAttribute<enum_ECheckBoxState>::Get(&pTVar7[0x2b].SharedReferenceCount);
  EVar1 = *pEVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return EVar1 == Checked;
}

// GetValue @ 14287d610

FString * __thiscall
FSlateAccessibleCheckBox::GetValue(FSlateAccessibleCheckBox *this,FString *__return_storage_ptr__)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)&this[-1].field_0x70 + 0x10))(&this[-1].field_0x70);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::AppendInt(__return_storage_ptr__,(uint)(cVar1 != '\0'));
  return __return_storage_ptr__;
}

// GetValueAsVariant @ 14287d7b0

FVariant * __thiscall
FSlateAccessibleCheckBox::GetValueAsVariant
          (FSlateAccessibleCheckBox *this,FVariant *__return_storage_ptr__)

{
  bool bVar1;
  
  bVar1 = (bool)(**(code **)(*(longlong *)&this[-1].field_0x70 + 0x10))(&this[-1].field_0x70);
  FVariant::FVariant<bool>(__return_storage_ptr__,bVar1);
  return __return_storage_ptr__;
}

// IsCheckable @ 142881c10

bool __thiscall FSlateAccessibleCheckBox::IsCheckable(FSlateAccessibleCheckBox *this)

{
  return true;
}

