// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 9

// AsProperty @ 142e2be90

IAccessibleProperty * __thiscall
SComboBox<TSharedPtr<int,1>_>::FSlateAccessibleComboBox::AsProperty(FSlateAccessibleComboBox *this)

{
  IAccessibleProperty *pIVar1;
  
  pIVar1 = (IAccessibleProperty *)&this->field_0x68;
  if (this == (FSlateAccessibleComboBox *)0x0) {
    pIVar1 = (IAccessibleProperty *)0x0;
  }
  return pIVar1;
}

// AsProperty @ 142e2beb0

IAccessibleProperty * __thiscall
SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FSlateAccessibleComboBox::
AsProperty(FSlateAccessibleComboBox *this)

{
  IAccessibleProperty *pIVar1;
  
  pIVar1 = (IAccessibleProperty *)&this->field_0x68;
  if (this == (FSlateAccessibleComboBox *)0x0) {
    pIVar1 = (IAccessibleProperty *)0x0;
  }
  return pIVar1;
}

// AsProperty @ 142e2bed0

IAccessibleProperty * __thiscall
SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FSlateAccessibleComboBox::AsProperty
          (FSlateAccessibleComboBox *this)

{
  IAccessibleProperty *pIVar1;
  
  pIVar1 = (IAccessibleProperty *)&this->field_0x68;
  if (this == (FSlateAccessibleComboBox *)0x0) {
    pIVar1 = (IAccessibleProperty *)0x0;
  }
  return pIVar1;
}

// GetValue @ 142ea94b0

FString * __thiscall
SComboBox<TSharedPtr<int,1>_>::FSlateAccessibleComboBox::GetValue
          (FSlateAccessibleComboBox *this,FString *__return_storage_ptr__)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  FString *pFVar6;
  FText *pFVar7;
  longlong *plVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  FText local_18;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_142ea96ad;
  pTVar10 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = pTVar10;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_142ea952f:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pTVar10 = pTVar9;
LAB_142ea9534:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  else {
    aVar4 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = pTVar11;
      if (aVar4 == (atomic<int>)0x0) goto LAB_142ea952f;
      LOCK();
      aVar5 = pTVar10->SharedReferenceCount;
      bVar12 = aVar4 == aVar5;
      if (bVar12) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar12);
    pTVar11 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) goto LAB_142ea9534;
  }
  lVar1._0_4_ = pTVar11[0x45].SharedReferenceCount;
  lVar1._4_4_ = pTVar11[0x45].WeakReferenceCount;
  if (lVar1 != 0) {
    local_30 = (TReferenceControllerBase<1> *)pTVar11[0x46]._padding_;
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    lVar2._0_4_ = pTVar11[0x46].SharedReferenceCount;
    lVar2._4_4_ = pTVar11[0x46].WeakReferenceCount;
    local_38 = lVar1;
    if ((lVar2 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
    plVar8 = (longlong *)(*(longlong *)&pTVar11[0x46].SharedReferenceCount + 0x588);
    (**(code **)(*plVar8 + 0xd8))(plVar8,&local_48);
    if (local_48 != (longlong *)0x0) {
      if ((local_48 == (longlong *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      (**(code **)(*local_48 + 0x58))(local_48,&local_28);
      pFVar7 = SWidget::GetAccessibleText(local_28,&local_18,Main);
      pFVar6 = FText::ToString(pFVar7);
      ::FString::FString(__return_storage_ptr__,pFVar6);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_142ea96ad:
  pFVar7 = FText::GetEmpty();
  pFVar6 = FText::ToString(pFVar7);
  ::FString::FString(__return_storage_ptr__,pFVar6);
  return __return_storage_ptr__;
}

// GetValue @ 142ea96e0

FString * __thiscall
SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FSlateAccessibleComboBox::
GetValue(FSlateAccessibleComboBox *this,FString *__return_storage_ptr__)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  FString *pFVar6;
  FText *pFVar7;
  longlong *plVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  FText local_18;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_142ea98dd;
  pTVar10 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = pTVar10;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_142ea975f:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pTVar10 = pTVar9;
LAB_142ea9764:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  else {
    aVar4 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = pTVar11;
      if (aVar4 == (atomic<int>)0x0) goto LAB_142ea975f;
      LOCK();
      aVar5 = pTVar10->SharedReferenceCount;
      bVar12 = aVar4 == aVar5;
      if (bVar12) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar12);
    pTVar11 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) goto LAB_142ea9764;
  }
  lVar1._0_4_ = pTVar11[0x45].SharedReferenceCount;
  lVar1._4_4_ = pTVar11[0x45].WeakReferenceCount;
  if (lVar1 != 0) {
    local_30 = (TReferenceControllerBase<1> *)pTVar11[0x46]._padding_;
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    lVar2._0_4_ = pTVar11[0x46].SharedReferenceCount;
    lVar2._4_4_ = pTVar11[0x46].WeakReferenceCount;
    local_38 = lVar1;
    if ((lVar2 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
    plVar8 = (longlong *)(*(longlong *)&pTVar11[0x46].SharedReferenceCount + 0x588);
    (**(code **)(*plVar8 + 0xd8))(plVar8,&local_48);
    if (local_48 != (longlong *)0x0) {
      if ((local_48 == (longlong *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      (**(code **)(*local_48 + 0x58))(local_48,&local_28);
      pFVar7 = SWidget::GetAccessibleText(local_28,&local_18,Main);
      pFVar6 = FText::ToString(pFVar7);
      ::FString::FString(__return_storage_ptr__,pFVar6);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_142ea98dd:
  pFVar7 = FText::GetEmpty();
  pFVar6 = FText::ToString(pFVar7);
  ::FString::FString(__return_storage_ptr__,pFVar6);
  return __return_storage_ptr__;
}

// GetValue @ 142ea9910

FString * __thiscall
SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FSlateAccessibleComboBox::GetValue
          (FSlateAccessibleComboBox *this,FString *__return_storage_ptr__)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  FString *pFVar6;
  FText *pFVar7;
  longlong *plVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  longlong local_38;
  TReferenceControllerBase<1> *local_30;
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  FText local_18;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_142ea9b0d;
  pTVar10 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = pTVar10;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_142ea998f:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pTVar10 = pTVar9;
LAB_142ea9994:
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  else {
    aVar4 = pTVar10->SharedReferenceCount;
    do {
      pTVar9 = pTVar11;
      if (aVar4 == (atomic<int>)0x0) goto LAB_142ea998f;
      LOCK();
      aVar5 = pTVar10->SharedReferenceCount;
      bVar12 = aVar4 == aVar5;
      if (bVar12) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar12);
    pTVar11 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) goto LAB_142ea9994;
  }
  lVar1._0_4_ = pTVar11[0x45].SharedReferenceCount;
  lVar1._4_4_ = pTVar11[0x45].WeakReferenceCount;
  if (lVar1 != 0) {
    local_30 = (TReferenceControllerBase<1> *)pTVar11[0x46]._padding_;
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    lVar2._0_4_ = pTVar11[0x46].SharedReferenceCount;
    lVar2._4_4_ = pTVar11[0x46].WeakReferenceCount;
    local_38 = lVar1;
    if ((lVar2 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
    plVar8 = (longlong *)(*(longlong *)&pTVar11[0x46].SharedReferenceCount + 0x588);
    (**(code **)(*plVar8 + 0xd8))(plVar8,&local_48);
    if (local_48 != (longlong *)0x0) {
      if ((local_48 == (longlong *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      (**(code **)(*local_48 + 0x58))(local_48,&local_28);
      pFVar7 = SWidget::GetAccessibleText(local_28,&local_18,Main);
      pFVar6 = FText::ToString(pFVar7);
      ::FString::FString(__return_storage_ptr__,pFVar6);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
LAB_142ea9b0d:
  pFVar7 = FText::GetEmpty();
  pFVar6 = FText::ToString(pFVar7);
  ::FString::FString(__return_storage_ptr__,pFVar6);
  return __return_storage_ptr__;
}

// GetValueAsVariant @ 142ea9b40

FVariant * __thiscall
SComboBox<TSharedPtr<int,1>_>::FSlateAccessibleComboBox::GetValueAsVariant
          (FSlateAccessibleComboBox *this,FVariant *__return_storage_ptr__)

{
  FString *pFVar1;
  undefined1 local_18 [16];
  
  pFVar1 = (FString *)(**(code **)(*(longlong *)this + 0x28))(this,local_18);
  FVariant::FVariant<FString>(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetValueAsVariant @ 142ea9b70

FVariant * __thiscall
SComboBox<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FSlateAccessibleComboBox::
GetValueAsVariant(FSlateAccessibleComboBox *this,FVariant *__return_storage_ptr__)

{
  FString *pFVar1;
  undefined1 local_18 [16];
  
  pFVar1 = (FString *)(**(code **)(*(longlong *)this + 0x28))(this,local_18);
  FVariant::FVariant<FString>(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetValueAsVariant @ 142ea9ba0

FVariant * __thiscall
SComboBox<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FSlateAccessibleComboBox::GetValueAsVariant
          (FSlateAccessibleComboBox *this,FVariant *__return_storage_ptr__)

{
  FString *pFVar1;
  undefined1 local_18 [16];
  
  pFVar1 = (FString *)(**(code **)(*(longlong *)this + 0x28))(this,local_18);
  FVariant::FVariant<FString>(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

