// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 15

// StaticClass @ 14a786280

UClass * __cdecl ULoadGuardSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULoadGuardSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"LoadGuardSlot",
               &Z_Registration_Info_UClass_ULoadGuardSlot.InnerSingleton,
               StaticRegisterNativesULoadGuardSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULoadGuardSlot>,InternalVTableHelperCtorCaller<ULoadGuardSlot>,
               local_res8,UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULoadGuardSlot.InnerSingleton;
}

// ULoadGuardSlot @ 14a7b0560

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ULoadGuardSlot * __thiscall
ULoadGuardSlot::ULoadGuardSlot(ULoadGuardSlot *this,FVTableHelper *param_1)

{
  UPanelSlot::UPanelSlot((UPanelSlot *)this,param_1);
  this->_padding_ = (longlong)&___7ULoadGuardSlot__6B_;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  this->HorizontalAlignment = '\0';
  this->VerticalAlignment = '\0';
  (this->LoadGuard).Object = (SLoadGuard *)0x0;
  (this->LoadGuard).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ULoadGuardSlot @ 14a7b05a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ULoadGuardSlot * __thiscall
ULoadGuardSlot::ULoadGuardSlot(ULoadGuardSlot *this,FObjectInitializer *param_1)

{
  UPanelSlot::UPanelSlot((UPanelSlot *)this,param_1);
  this->_padding_ = (longlong)&___7ULoadGuardSlot__6B_;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  this->HorizontalAlignment = '\0';
  this->VerticalAlignment = '\0';
  (this->LoadGuard).Object = (SLoadGuard *)0x0;
  (this->LoadGuard).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~ULoadGuardSlot @ 14a7b3e20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ULoadGuardSlot::~ULoadGuardSlot(ULoadGuardSlot *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7ULoadGuardSlot__6B_;
  pTVar3 = (this->LoadGuard).WeakReferenceCount.ReferenceController;
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
  UPanelSlot::~UPanelSlot((UPanelSlot *)this);
  return;
}

// BuildSlot @ 14a7c2d70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ULoadGuardSlot::BuildSlot(ULoadGuardSlot *this,TSharedRef<SLoadGuard,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SLoadGuard *pSVar5;
  SBorder *this_00;
  code *pcVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  TSharedRef<SWidget,1> *pTVar9;
  int iVar10;
  int iVar11;
  TSharedRef<SWidget,1> local_88;
  SWidget *local_78;
  TReferenceControllerBase<1> *local_70;
  TSharedRef<SWidget,1> local_68;
  TAttribute<FMargin> local_58;
  
  iVar10 = 0;
  (this->LoadGuard).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->LoadGuard).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->LoadGuard).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->LoadGuard).WeakReferenceCount.ReferenceController = pTVar3;
  }
  pSVar5 = param_1->Object;
  if ((pSVar5->ContentBorder).Object == (SBorder *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  this_00 = (pSVar5->ContentBorder).Object;
  pTVar3 = (pSVar5->ContentBorder).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (SBorder *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_58.Value.Left = (this->Padding).Left;
  local_58.Value.Top = (this->Padding).Top;
  local_58.Value.Right = (this->Padding).Right;
  local_58.Value.Bottom = (this->Padding).Bottom;
  local_58.bIsSet = true;
  local_58.Getter._16_8_ = 0;
  local_58.Getter._0_8_ = 0;
  local_58.Getter._8_8_ = 0;
  SBorder::SetPadding(this_00,&local_58);
  SBorder::SetHAlign(this_00,(uint)(this->HorizontalAlignment).Value);
  SBorder::SetVAlign(this_00,(uint)(this->VerticalAlignment).Value);
  local_78 = SNullWidget::NullWidget.Object;
  pcVar6 = *(code **)(this_00->_padding_ + 0x248);
  if ((UWidget *)this->_padding_ == (UWidget *)0x0) {
    local_88.Object = SNullWidget::NullWidget.Object;
    local_88.SharedReferenceCount.ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar9 = &local_88;
    iVar11 = 2;
  }
  else {
    pTVar9 = UWidget::TakeWidget((UWidget *)this->_padding_,&local_68);
    local_78 = pTVar9->Object;
    iVar11 = iVar10;
    iVar10 = 1;
  }
  FVar7.ReferenceController = local_88.SharedReferenceCount.ReferenceController;
  local_70 = (pTVar9->SharedReferenceCount).ReferenceController;
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar6)(this_00,&local_78);
  if (iVar11 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
  }
  if (iVar10 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetPrivateStaticClass @ 14a7e71d0

UClass * __cdecl ULoadGuardSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULoadGuardSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"LoadGuardSlot",
               &Z_Registration_Info_UClass_ULoadGuardSlot.InnerSingleton,
               StaticRegisterNativesULoadGuardSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULoadGuardSlot>,InternalVTableHelperCtorCaller<ULoadGuardSlot>,
               local_res8,UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULoadGuardSlot.InnerSingleton;
}

// ReleaseSlateResources @ 14a812280

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ULoadGuardSlot::ReleaseSlateResources(ULoadGuardSlot *this,bool param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 local_18 [2];
  
  UPanelSlot::ReleaseSlateResources((UPanelSlot *)this,param_1);
  if (&this->LoadGuard != (TWeakPtr<SLoadGuard,1> *)local_18) {
    pTVar3 = (this->LoadGuard).WeakReferenceCount.ReferenceController;
    (this->LoadGuard).Object = (SLoadGuard *)0x0;
    (this->LoadGuard).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014a8122ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        return;
      }
    }
  }
  return;
}

// SetHorizontalAlignment @ 14a818410

void __thiscall
ULoadGuardSlot::SetHorizontalAlignment(ULoadGuardSlot *this,EHorizontalAlignment param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SBorder *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SLoadGuard *pSVar5;
  SLoadGuard *pSVar6;
  SLoadGuard *pSVar7;
  bool bVar8;
  
  (this->HorizontalAlignment).Value = (uchar)param_1;
  if ((this->LoadGuard).Object == (SLoadGuard *)0x0) {
    return;
  }
  pTVar1 = (this->LoadGuard).WeakReferenceCount.ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar1->SharedReferenceCount < 1) {
    return;
  }
  pSVar6 = (SLoadGuard *)(this->LoadGuard).WeakReferenceCount.ReferenceController;
  pSVar7 = (SLoadGuard *)0x0;
  pSVar5 = pSVar6;
  if (pSVar6 != (SLoadGuard *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar6->_padding_;
    do {
      pSVar5 = pSVar7;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14a818485;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar6->_padding_;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        *(atomic<int> *)&pSVar6->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    pSVar7 = (this->LoadGuard).Object;
    pSVar5 = pSVar6;
    if (pSVar7 != (SLoadGuard *)0x0) goto LAB_14a8184ab;
  }
LAB_14a818485:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar6 = pSVar5;
  if (bVar8) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14a8184ab:
  if (((pSVar7->ContentBorder).Object == (SBorder *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (pSVar7->ContentBorder).Object;
  pTVar1 = (pSVar7->ContentBorder).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_00 == (SBorder *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SBorder::SetHAlign(this_00,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// SetPadding @ 14a81a7f0

void __thiscall ULoadGuardSlot::SetPadding(ULoadGuardSlot *this,FMargin *param_1)

{
  SBorder *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  SLoadGuard *pSVar9;
  bool bVar10;
  TAttribute<FMargin> local_38;
  
  fVar4 = param_1->Top;
  fVar5 = param_1->Right;
  fVar6 = param_1->Bottom;
  (this->Padding).Left = param_1->Left;
  (this->Padding).Top = fVar4;
  (this->Padding).Right = fVar5;
  (this->Padding).Bottom = fVar6;
  if ((this->LoadGuard).Object == (SLoadGuard *)0x0) {
    return;
  }
  pTVar8 = (this->LoadGuard).WeakReferenceCount.ReferenceController;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar8->SharedReferenceCount < 1) {
    return;
  }
  pTVar8 = (this->LoadGuard).WeakReferenceCount.ReferenceController;
  pSVar9 = (SLoadGuard *)0x0;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar8->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a81a864;
      }
      LOCK();
      aVar7 = pTVar8->SharedReferenceCount;
      bVar10 = aVar3 == aVar7;
      if (bVar10) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar7 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar7;
    } while (!bVar10);
    pSVar9 = (this->LoadGuard).Object;
    if (pSVar9 != (SLoadGuard *)0x0) goto LAB_14a81a88a;
  }
LAB_14a81a864:
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar10) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14a81a88a:
  if (((pSVar9->ContentBorder).Object == (SBorder *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (pSVar9->ContentBorder).Object;
  pTVar1 = (pSVar9->ContentBorder).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_00 == (SBorder *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_38.Value.Left = param_1->Left;
  local_38.Value.Top = param_1->Top;
  local_38.Value.Right = param_1->Right;
  local_38.Value.Bottom = param_1->Bottom;
  local_38.bIsSet = true;
  local_38.Getter._16_8_ = 0;
  local_38.Getter._0_8_ = 0;
  local_38.Getter._8_8_ = 0;
  SBorder::SetPadding(this_00,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// SetVerticalAlignment @ 14a81ce50

void __thiscall
ULoadGuardSlot::SetVerticalAlignment(ULoadGuardSlot *this,EVerticalAlignment param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SBorder *this_00;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SLoadGuard *pSVar5;
  SLoadGuard *pSVar6;
  SLoadGuard *pSVar7;
  bool bVar8;
  
  (this->VerticalAlignment).Value = (uchar)param_1;
  if ((this->LoadGuard).Object == (SLoadGuard *)0x0) {
    return;
  }
  pTVar1 = (this->LoadGuard).WeakReferenceCount.ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar1->SharedReferenceCount < 1) {
    return;
  }
  pSVar6 = (SLoadGuard *)(this->LoadGuard).WeakReferenceCount.ReferenceController;
  pSVar7 = (SLoadGuard *)0x0;
  pSVar5 = pSVar6;
  if (pSVar6 != (SLoadGuard *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar6->_padding_;
    do {
      pSVar5 = pSVar7;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14a81cec5;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar6->_padding_;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        *(atomic<int> *)&pSVar6->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    pSVar7 = (this->LoadGuard).Object;
    pSVar5 = pSVar6;
    if (pSVar7 != (SLoadGuard *)0x0) goto LAB_14a81ceeb;
  }
LAB_14a81cec5:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar6 = pSVar5;
  if (bVar8) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14a81ceeb:
  if (((pSVar7->ContentBorder).Object == (SBorder *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (pSVar7->ContentBorder).Object;
  pTVar1 = (pSVar7->ContentBorder).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_00 == (SBorder *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SBorder::SetVAlign(this_00,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// StaticRegisterNativesULoadGuardSlot @ 14a81ebb0

void __cdecl ULoadGuardSlot::StaticRegisterNativesULoadGuardSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_ULoadGuardSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14a820bf0

void __thiscall ULoadGuardSlot::SynchronizeProperties(ULoadGuardSlot *this)

{
  SBorder *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  SLoadGuard *pSVar6;
  bool bVar7;
  TAttribute<FMargin> local_38;
  
  if ((this->LoadGuard).Object == (SLoadGuard *)0x0) {
    return;
  }
  pTVar5 = (this->LoadGuard).WeakReferenceCount.ReferenceController;
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar5->SharedReferenceCount < 1) {
    return;
  }
  pTVar5 = (this->LoadGuard).WeakReferenceCount.ReferenceController;
  pSVar6 = (SLoadGuard *)0x0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar5->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14a820c54;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    pSVar6 = (this->LoadGuard).Object;
    if (pSVar6 != (SLoadGuard *)0x0) goto LAB_14a820c7a;
  }
LAB_14a820c54:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar7) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14a820c7a:
  if (((pSVar6->ContentBorder).Object == (SBorder *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (pSVar6->ContentBorder).Object;
  pTVar1 = (pSVar6->ContentBorder).SharedReferenceCount.ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((this_00 == (SBorder *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  local_38.Value.Left = (this->Padding).Left;
  local_38.Value.Top = (this->Padding).Top;
  local_38.Value.Right = (this->Padding).Right;
  local_38.Value.Bottom = (this->Padding).Bottom;
  local_38.bIsSet = true;
  local_38.Getter._16_8_ = 0;
  local_38.Getter._0_8_ = 0;
  local_38.Getter._8_8_ = 0;
  SBorder::SetPadding(this_00,&local_38);
  SBorder::SetHAlign(this_00,(uint)(this->HorizontalAlignment).Value);
  SBorder::SetVAlign(this_00,(uint)(this->VerticalAlignment).Value);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// execSetHorizontalAlignment @ 14a8330a0

void __cdecl
ULoadGuardSlot::execSetHorizontalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [24];
  
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetHorizontalAlignment((ULoadGuardSlot *)param_1,(uint)local_res10[0]);
  return;
}

// execSetPadding @ 14a834ee0

void __cdecl ULoadGuardSlot::execSetPadding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMargin local_28;
  FMargin local_18;
  
  local_28.Left = 0.0;
  local_28.Top = 0.0;
  local_28.Right = 0.0;
  local_28.Bottom = 0.0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18.Left = local_28.Left;
  local_18.Top = local_28.Top;
  local_18.Right = local_28.Right;
  local_18.Bottom = local_28.Bottom;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetPadding((ULoadGuardSlot *)param_1,&local_18);
  return;
}

// execSetVerticalAlignment @ 14a836840

void __cdecl
ULoadGuardSlot::execSetVerticalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [24];
  
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetVerticalAlignment((ULoadGuardSlot *)param_1,(uint)local_res10[0]);
  return;
}

