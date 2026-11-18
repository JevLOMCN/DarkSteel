// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 6

// AsProperty @ 1469a2880

IAccessibleProperty * __thiscall
SComboBox<UObject_*>::FSlateAccessibleComboBox::AsProperty(FSlateAccessibleComboBox *this)

{
  IAccessibleProperty *pIVar1;
  
  pIVar1 = (IAccessibleProperty *)&this->field_0x68;
  if (this == (FSlateAccessibleComboBox *)0x0) {
    pIVar1 = (IAccessibleProperty *)0x0;
  }
  return pIVar1;
}

// AsProperty @ 1469a28a0

IAccessibleProperty * __thiscall
SComboBox<FName>::FSlateAccessibleComboBox::AsProperty(FSlateAccessibleComboBox *this)

{
  IAccessibleProperty *pIVar1;
  
  pIVar1 = (IAccessibleProperty *)&this->field_0x68;
  if (this == (FSlateAccessibleComboBox *)0x0) {
    pIVar1 = (IAccessibleProperty *)0x0;
  }
  return pIVar1;
}

// GetValue @ 1469d9760

FString * __thiscall
SComboBox<UObject_*>::FSlateAccessibleComboBox::GetValue
          (FSlateAccessibleComboBox *this,FString *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FString *pFVar5;
  FText *pFVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  FText local_18;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_1469d9934;
  pTVar9 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = pTVar9;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
LAB_1469d97df:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    pTVar9 = pTVar8;
LAB_1469d97e4:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  else {
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      pTVar8 = pTVar10;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1469d97df;
      LOCK();
      aVar4 = pTVar9->SharedReferenceCount;
      bVar11 = aVar3 == aVar4;
      if (bVar11) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar11);
    pTVar10 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) goto LAB_1469d97e4;
  }
  lVar1._0_4_ = pTVar10[0x45].SharedReferenceCount;
  lVar1._4_4_ = pTVar10[0x45].WeakReferenceCount;
  if (lVar1 != 0) {
    if ((pTVar10[0x46]._padding_ == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
    plVar7 = (longlong *)(pTVar10[0x46]._padding_ + 0x598);
    (**(code **)(*plVar7 + 0xd8))(plVar7,&local_38);
    if (local_38 != (longlong *)0x0) {
      if ((local_38 == (longlong *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
      (**(code **)(*local_38 + 0x58))(local_38,&local_28);
      pFVar6 = SWidget::GetAccessibleText(local_28,&local_18,Main);
      pFVar5 = FText::ToString(pFVar6);
      ::FString::FString(__return_storage_ptr__,pFVar5);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
LAB_1469d9934:
  pFVar6 = FText::GetEmpty();
  pFVar5 = FText::ToString(pFVar6);
  ::FString::FString(__return_storage_ptr__,pFVar5);
  return __return_storage_ptr__;
}

// GetValue @ 1469d9970

FString * __thiscall
SComboBox<FName>::FSlateAccessibleComboBox::GetValue
          (FSlateAccessibleComboBox *this,FString *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FString *pFVar5;
  FText *pFVar6;
  longlong *plVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  FText local_18;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) goto LAB_1469d9b44;
  pTVar9 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = pTVar9;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
LAB_1469d99ef:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    pTVar9 = pTVar8;
LAB_1469d99f4:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  else {
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      pTVar8 = pTVar10;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1469d99ef;
      LOCK();
      aVar4 = pTVar9->SharedReferenceCount;
      bVar11 = aVar3 == aVar4;
      if (bVar11) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar11);
    pTVar10 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) goto LAB_1469d99f4;
  }
  lVar1._0_4_ = pTVar10[0x45].SharedReferenceCount;
  lVar1._4_4_ = pTVar10[0x45].WeakReferenceCount;
  if (lVar1 != 0) {
    if ((pTVar10[0x46]._padding_ == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
    plVar7 = (longlong *)(pTVar10[0x46]._padding_ + 0x588);
    (**(code **)(*plVar7 + 0xd8))(plVar7,&local_38);
    if (local_38 != (longlong *)0x0) {
      if ((local_38 == (longlong *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
      (**(code **)(*local_38 + 0x58))(local_38,&local_28);
      pFVar6 = SWidget::GetAccessibleText(local_28,&local_18,Main);
      pFVar5 = FText::ToString(pFVar6);
      ::FString::FString(__return_storage_ptr__,pFVar5);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
LAB_1469d9b44:
  pFVar6 = FText::GetEmpty();
  pFVar5 = FText::ToString(pFVar6);
  ::FString::FString(__return_storage_ptr__,pFVar5);
  return __return_storage_ptr__;
}

// GetValueAsVariant @ 1469d9bc0

FVariant * __thiscall
SComboBox<UObject_*>::FSlateAccessibleComboBox::GetValueAsVariant
          (FSlateAccessibleComboBox *this,FVariant *__return_storage_ptr__)

{
  FString *pFVar1;
  undefined1 local_18 [16];
  
  pFVar1 = (FString *)(**(code **)(*(longlong *)this + 0x28))(this,local_18);
  FVariant::FVariant<FString>(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetValueAsVariant @ 1469d9bf0

FVariant * __thiscall
SComboBox<FName>::FSlateAccessibleComboBox::GetValueAsVariant
          (FSlateAccessibleComboBox *this,FVariant *__return_storage_ptr__)

{
  FString *pFVar1;
  undefined1 local_18 [16];
  
  pFVar1 = (FString *)(**(code **)(*(longlong *)this + 0x28))(this,local_18);
  FVariant::FVariant<FString>(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

