// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 6

// AsProperty @ 142f588e0

IAccessibleProperty * __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::FSlateAccessibleComboBox::AsProperty
          (void *this)

{
  IAccessibleProperty *pIVar1;
  
  pIVar1 = (IAccessibleProperty *)((longlong)this + 0x68);
  if (this == (void *)0x0) {
    pIVar1 = (IAccessibleProperty *)0x0;
  }
  return pIVar1;
}

// GetValue @ 142fdb110

FString * __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::FSlateAccessibleComboBox::GetValue
          (void *this,FString *__return_storage_ptr__)

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
  
  if (((*(longlong *)((longlong)this + -0x50) == 0) || (*(longlong *)((longlong)this + -0x48) == 0))
     || (*(int *)(*(longlong *)((longlong)this + -0x48) + 8) < 1)) goto LAB_142fdb30d;
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + -0x48);
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = pTVar10;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
LAB_142fdb18f:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    pTVar10 = pTVar9;
LAB_142fdb194:
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
      if (aVar4 == (atomic<int>)0x0) goto LAB_142fdb18f;
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
    pTVar11 = *(TReferenceControllerBase<1> **)((longlong)this + -0x50);
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) goto LAB_142fdb194;
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
LAB_142fdb30d:
  pFVar7 = FText::GetEmpty();
  pFVar6 = FText::ToString(pFVar7);
  ::FString::FString(__return_storage_ptr__,pFVar6);
  return __return_storage_ptr__;
}

// GetValueAsVariant @ 142fdb340

FVariant * __thiscall
SComboBox<TSharedPtr<enum_ESelectionMode::Type,1>_>::FSlateAccessibleComboBox::GetValueAsVariant
          (void *this,FVariant *__return_storage_ptr__)

{
  FString *pFVar1;
  undefined1 local_18 [16];
  
  pFVar1 = (FString *)(**(code **)(*(longlong *)this + 0x28))(this,local_18);
  FVariant::FVariant<FString>(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// AsProperty @ 14306e920

IAccessibleProperty * __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::FSlateAccessibleComboBox::AsProperty
          (FSlateAccessibleComboBox *this)

{
  IAccessibleProperty *pIVar1;
  
  pIVar1 = (IAccessibleProperty *)&this->field_0x68;
  if (this == (FSlateAccessibleComboBox *)0x0) {
    pIVar1 = (IAccessibleProperty *)0x0;
  }
  return pIVar1;
}

// GetValue @ 1430ce850

FString * __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::FSlateAccessibleComboBox::GetValue
          (FSlateAccessibleComboBox *this,FString *__return_storage_ptr__)

{
  FFontFamily *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *pSVar4;
  atomic<int> aVar5;
  FString *pFVar6;
  FText *pFVar7;
  longlong *plVar8;
  bool bVar9;
  TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> local_58;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<FTextStyles::FFontFamily,1> local_38;
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  FText local_18;
  
  if (((*(longlong *)&this[-1].field_0x20 != 0) && (*(longlong *)&this[-1].field_0x28 != 0)) &&
     (0 < *(int *)(*(longlong *)&this[-1].field_0x28 + 8))) {
    local_58.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
    if (local_58.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_58.Object = (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
    }
    else {
      aVar3 = (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          local_58.Object = (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
          local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1430ce8ce;
        }
        LOCK();
        aVar5 = (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar9 = aVar3 == aVar5;
        if (bVar9) {
          (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar3 + 1);
          aVar5 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar5;
      } while (!bVar9);
      local_58.Object = *(SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> **)&this[-1].field_0x20
      ;
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
LAB_1430ce8ce:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    if ((local_58.Object == (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar2)();
      return pFVar6;
    }
    pFVar1 = ((local_58.Object)->SelectedItem).Object;
    if (pFVar1 != (FFontFamily *)0x0) {
      local_38.SharedReferenceCount.ReferenceController =
           ((local_58.Object)->SelectedItem).SharedReferenceCount.ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38.Object = pFVar1;
      if ((local_58.Object == (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar2)();
        return pFVar6;
      }
      pSVar4 = local_58.Object;
      if ((((local_58.Object)->ComboListView).Object ==
           (SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar2)();
        return pFVar6;
      }
      plVar8 = &((pSVar4->ComboListView).Object)->_padding_;
      (**(code **)(*plVar8 + 0xd8))(plVar8,&local_48);
      if (local_48 != (longlong *)0x0) {
        if ((local_48 == (longlong *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar2)();
          return pFVar6;
        }
        (**(code **)(*local_48 + 0x58))(local_48,&local_28);
        pFVar7 = SWidget::GetAccessibleText(local_28,&local_18,Main);
        pFVar6 = FText::ToString(pFVar7);
        ::FString::FString(__return_storage_ptr__,pFVar6);
        if (local_18.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_20);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40);
        TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(&local_38);
        TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
        ~TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>(&local_58);
        return __return_storage_ptr__;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(&local_38);
    }
    TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
    ~TSharedPtr<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>(&local_58);
  }
  pFVar7 = FText::GetEmpty();
  pFVar6 = FText::ToString(pFVar7);
  ::FString::FString(__return_storage_ptr__,pFVar6);
  return __return_storage_ptr__;
}

// GetValueAsVariant @ 1430ceac0

FVariant * __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::FSlateAccessibleComboBox::GetValueAsVariant
          (FSlateAccessibleComboBox *this,FVariant *__return_storage_ptr__)

{
  FString *pFVar1;
  undefined1 local_18 [16];
  
  pFVar1 = (FString *)(**(code **)(*(longlong *)this + 0x28))(this,local_18);
  FVariant::FVariant<FString>(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

