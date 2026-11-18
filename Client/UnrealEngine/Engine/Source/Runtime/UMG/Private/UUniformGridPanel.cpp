// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 29

// GetSlotPadding_WrapperImpl @ 14696a610

void __cdecl UUniformGridPanel::GetSlotPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x1d0);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x1c8);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetSlotPadding_WrapperImpl @ 14696a630

void __cdecl UUniformGridPanel::SetSlotPadding_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<FMargin> local_38;
  
  local_38.Value._0_8_ = *(undefined8 *)param_2;
  local_38.Value._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x1c8) = local_38.Value._0_8_;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = local_38.Value._8_8_;
  if (*(SUniformGridPanel **)((longlong)param_1 + 0x1e0) != (SUniformGridPanel *)0x0) {
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SUniformGridPanel::SetSlotPadding(*(SUniformGridPanel **)((longlong)param_1 + 0x1e0),&local_38);
  }
  return;
}

// GetMinDesiredSlotWidth_WrapperImpl @ 14696a6c0

void __cdecl UUniformGridPanel::GetMinDesiredSlotWidth_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1d8);
  return;
}

// SetMinDesiredSlotWidth_WrapperImpl @ 14696a6d0

void __cdecl UUniformGridPanel::SetMinDesiredSlotWidth_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<float> local_28;
  
  local_28.Value = *(float *)param_2;
  *(float *)((longlong)param_1 + 0x1d8) = local_28.Value;
  if (*(SUniformGridPanel **)((longlong)param_1 + 0x1e0) != (SUniformGridPanel *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SUniformGridPanel::SetMinDesiredSlotWidth
              (*(SUniformGridPanel **)((longlong)param_1 + 0x1e0),&local_28);
  }
  return;
}

// GetMinDesiredSlotHeight_WrapperImpl @ 14696a760

void __cdecl UUniformGridPanel::GetMinDesiredSlotHeight_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1dc);
  return;
}

// SetMinDesiredSlotHeight_WrapperImpl @ 14696a770

void __cdecl UUniformGridPanel::SetMinDesiredSlotHeight_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<float> local_28;
  
  local_28.Value = *(float *)param_2;
  *(float *)((longlong)param_1 + 0x1dc) = local_28.Value;
  if (*(SUniformGridPanel **)((longlong)param_1 + 0x1e0) != (SUniformGridPanel *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SUniformGridPanel::SetMinDesiredSlotHeight
              (*(SUniformGridPanel **)((longlong)param_1 + 0x1e0),&local_28);
  }
  return;
}

// StaticClass @ 14696a800

UClass * __cdecl UUniformGridPanel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUniformGridPanel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UniformGridPanel",
               &Z_Registration_Info_UClass_UUniformGridPanel.InnerSingleton,
               StaticRegisterNativesUUniformGridPanel,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UUniformGridPanel>,
               InternalVTableHelperCtorCaller<UUniformGridPanel>,local_res8,
               UPanelWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUniformGridPanel.InnerSingleton;
}

// UUniformGridPanel @ 14698e7f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UUniformGridPanel * __thiscall
UUniformGridPanel::UUniformGridPanel(UUniformGridPanel *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SlotPadding).Left = 0.0;
  (this->SlotPadding).Top = 0.0;
  (this->SlotPadding).Right = 0.0;
  (this->SlotPadding).Bottom = 0.0;
  (this->MyUniformGridPanel).Object = (SUniformGridPanel *)0x0;
  (this->MyUniformGridPanel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UUniformGridPanel @ 14698e850

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UUniformGridPanel * __thiscall
UUniformGridPanel::UUniformGridPanel(UUniformGridPanel *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SlotPadding).Left = 0.0;
  (this->SlotPadding).Top = 0.0;
  (this->SlotPadding).Right = 0.0;
  (this->SlotPadding).Bottom = 0.0;
  (this->MyUniformGridPanel).Object = (SUniformGridPanel *)0x0;
  (this->MyUniformGridPanel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined1 *)&this->_padding_ = 1;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  return this;
}

// ~UUniformGridPanel @ 146994820

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUniformGridPanel::~UUniformGridPanel(UUniformGridPanel *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyUniformGridPanel).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__UVisual__;
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__INotifyFieldValueChanged__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// AddChildToUniformGrid @ 1469a1530

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UUniformGridSlot * __thiscall
UUniformGridPanel::AddChildToUniformGrid
          (UUniformGridPanel *this,UWidget *param_1,int param_2,int param_3)

{
  int iVar1;
  FSlot *pFVar2;
  UUniformGridSlot *pUVar3;
  UClass *pUVar4;
  
  pUVar3 = (UUniformGridSlot *)
           UPanelWidget::AddChild((UPanelWidget *)this,param_1,(UPanelSlot *)0x0);
  if (pUVar3 != (UUniformGridSlot *)0x0) {
    pUVar4 = UUniformGridSlot::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      pFVar2 = pUVar3->Slot;
      pUVar3->Row = param_2;
      if ((pFVar2 != (FSlot *)0x0) && (param_2 != pFVar2->Row)) {
        pFVar2->Row = param_2;
        FSlotBase::Invalidate((FSlotBase *)pFVar2,Layout);
      }
      pFVar2 = pUVar3->Slot;
      pUVar3->Column = param_3;
      if ((pFVar2 != (FSlot *)0x0) && (param_3 != pFVar2->Column)) {
        pFVar2->Column = param_3;
        FSlotBase::Invalidate((FSlotBase *)pFVar2,Layout);
      }
      return pUVar3;
    }
  }
  return (UUniformGridSlot *)0x0;
}

// GetMinDesiredSlotHeight @ 1469d1de0

float __thiscall UUniformGridPanel::GetMinDesiredSlotHeight(UUniformGridPanel *this)

{
  return this->MinDesiredSlotHeight;
}

// GetMinDesiredSlotWidth @ 1469d1df0

float __thiscall UUniformGridPanel::GetMinDesiredSlotWidth(UUniformGridPanel *this)

{
  return this->MinDesiredSlotWidth;
}

// GetPrivateStaticClass @ 1469d6590

UClass * __cdecl UUniformGridPanel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUniformGridPanel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UniformGridPanel",
               &Z_Registration_Info_UClass_UUniformGridPanel.InnerSingleton,
               StaticRegisterNativesUUniformGridPanel,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UUniformGridPanel>,
               InternalVTableHelperCtorCaller<UUniformGridPanel>,local_res8,
               UPanelWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUniformGridPanel.InnerSingleton;
}

// GetSlotClass @ 1469d87b0

UClass * __thiscall UUniformGridPanel::GetSlotClass(UUniformGridPanel *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UUniformGridSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UniformGridSlot",
               &Z_Registration_Info_UClass_UUniformGridSlot.InnerSingleton,
               UUniformGridSlot::StaticRegisterNativesUUniformGridSlot,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UUniformGridSlot>,
               InternalVTableHelperCtorCaller<UUniformGridSlot>,aFStackX_8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUniformGridSlot.InnerSingleton;
}

// GetSlotPadding @ 1469d8920

FMargin * __thiscall
UUniformGridPanel::GetSlotPadding(UUniformGridPanel *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->SlotPadding).Top;
  fVar2 = (this->SlotPadding).Right;
  fVar3 = (this->SlotPadding).Bottom;
  __return_storage_ptr__->Left = (this->SlotPadding).Left;
  __return_storage_ptr__->Top = fVar1;
  __return_storage_ptr__->Right = fVar2;
  __return_storage_ptr__->Bottom = fVar3;
  return __return_storage_ptr__;
}

// OnSlotAdded @ 1469f0f80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUniformGridPanel::OnSlotAdded(UUniformGridPanel *this,UPanelSlot *param_1)

{
  int iVar1;
  UClass *pUVar2;
  TSharedRef<SUniformGridPanel,1> *pTVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_38;
  TSharedRef<SUniformGridPanel,1> local_28;
  FString local_18;
  
  if ((this->MyUniformGridPanel).Object != (SUniformGridPanel *)0x0) {
    if (param_1 == (UPanelSlot *)0x0) {
      pFVar4 = GetTypeName<UUniformGridSlot>(&local_38);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar2 = UUniformGridSlot::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pFVar4 = GetTypeName<UUniformGridSlot>(&local_38);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UPanelSlot>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
    pTVar3 = TSharedPtr<SUniformGridPanel,1>::ToSharedRef(&this->MyUniformGridPanel,&local_28);
    UUniformGridSlot::BuildSlot((UUniformGridSlot *)param_1,pTVar3);
  }
  return;
}

// OnSlotRemoved @ 1469f1940

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUniformGridPanel::OnSlotRemoved(UUniformGridPanel *this,UPanelSlot *param_1)

{
  UWidget *this_00;
  code *pcVar1;
  SUniformGridPanel *this_01;
  bool bVar2;
  TSharedPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  if (((this->MyUniformGridPanel).Object != (SUniformGridPanel *)0x0) &&
     (this_00 = (param_1->Content).field0_0x0.DebugPtr, this_00 != (UWidget *)0x0)) {
    UWidget::GetCachedWidget(this_00,&local_28);
    bVar2 = local_28.Object == (SWidget *)0x0;
    if (local_28.Object != (SWidget *)0x0) {
      this_01 = TSharedPtr<SUniformGridPanel,1>::operator->(&this->MyUniformGridPanel);
      if (bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_18.Object = local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_28.Object == (SWidget *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      SUniformGridPanel::RemoveSlot(this_01,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// RebuildWidget @ 146a07ea0

TSharedRef<SWidget,1> * __thiscall
UUniformGridPanel::RebuildWidget
          (UUniformGridPanel *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  UUniformGridSlot *this_00;
  SUniformGridPanel *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  FArguments *pFVar12;
  TSharedRef<SWidget,1> *pTVar13;
  UClass *pUVar14;
  undefined8 *puVar15;
  undefined1 local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  SUniformGridPanel *local_2f8;
  FSharedReferencer<1> local_2f0;
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> local_2e8;
  FMemScope local_2d0;
  TSharedRef<SUniformGridPanel,1> local_2c8;
  undefined1 local_2b8 [544];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  pFVar12 = SUniformGridPanel::FArguments::FArguments((FArguments *)local_2b8);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2d0,&local_res20,true);
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>
            (&local_2e8,"SUniformGridPanel",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\UniformGridPanel.cpp"
             ,0x3a,local_res10);
  FMemScope::~FMemScope(&local_2d0);
  FLLMScope::~FLLMScope(local_res18);
  pSVar5 = local_2e8._Widget.Object;
  if (local_2e8._Widget.Object == (SUniformGridPanel *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar13;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_2e8._Widget.Object,(FSlateBaseNamedArgs *)pFVar12);
  SUniformGridPanel::Construct(local_2e8._Widget.Object,pFVar12);
  if (local_2e8._Widget.Object == (SUniformGridPanel *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar13;
    }
  }
  if (((local_2e8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_2e8._Widget.Object)->_padding_ + 0x228))(local_2e8._Widget.Object);
    bVar11 = 0;
    if (cVar10 == '\0') goto LAB_146a07fe5;
  }
  bVar11 = 0x20;
LAB_146a07fe5:
  FVar8.ReferenceController = local_2e8._Widget.SharedReferenceCount.ReferenceController;
  *(byte *)&(local_2e8._Widget.Object)->_padding_ =
       (byte)(local_2e8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2e8._Widget.Object)->_padding_ =
       (byte)(local_2e8._Widget.Object)->_padding_ | bVar11;
  pbVar1 = (byte *)((longlong)&(local_2e8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  local_2e8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2e8._Widget.Object = (SUniformGridPanel *)0x0;
  if (pSVar5 == (SUniformGridPanel *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar13;
    }
  }
  local_2f8 = pSVar5;
  local_2f0.ReferenceController = FVar8.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyUniformGridPanel != (TSharedPtr<SUniformGridPanel,1> *)&local_2f8) {
    (this->MyUniformGridPanel).Object = pSVar5;
    local_2f8 = (SUniformGridPanel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyUniformGridPanel).SharedReferenceCount,&local_2f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2f0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
  if ((void *)local_58._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
  if ((void *)local_78._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
  if ((void *)local_98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_98);
  DestructItems<SUniformGridPanel::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_2b8._504_8_,local_2b8._512_4_);
  if ((FSlotArguments *)local_2b8._504_8_ != (FSlotArguments *)0x0) {
    FMemory::Free((void *)local_2b8._504_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2b8);
  puVar15 = (undefined8 *)this->_padding_;
  iVar3 = (int)this->_padding_;
  puVar2 = puVar15 + iVar3;
  while( true ) {
    if ((int)this->_padding_ != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPanelSlot>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar15 == puVar2) break;
    this_00 = (UUniformGridSlot *)*puVar15;
    if (this_00 != (UUniformGridSlot *)0x0) {
      pUVar14 = UUniformGridSlot::StaticClass();
      iVar4 = (int)pUVar14->_padding_;
      if ((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar14->_padding_)) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UUniformGridPanel *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        this_00->_padding_ = (longlong)this;
        if ((this->MyUniformGridPanel).Object == (SUniformGridPanel *)0x0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L"");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
            return pTVar13;
          }
        }
        local_2c8.SharedReferenceCount.ReferenceController =
             (this->MyUniformGridPanel).SharedReferenceCount.ReferenceController;
        local_2c8.Object = (this->MyUniformGridPanel).Object;
        if (local_2c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (local_2c8.Object == (SUniformGridPanel *)0x0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
            return pTVar13;
          }
        }
        UUniformGridSlot::BuildSlot(this_00,&local_2c8);
      }
    }
    puVar15 = puVar15 + 1;
  }
  if ((this->MyUniformGridPanel).Object == (SUniformGridPanel *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar13;
    }
  }
  pSVar5 = (this->MyUniformGridPanel).Object;
  pTVar6 = (this->MyUniformGridPanel).SharedReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar5 == (SUniformGridPanel *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar13;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar5;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0b790

void __thiscall UUniformGridPanel::ReleaseSlateResources(UUniformGridPanel *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyUniformGridPanel != (TSharedPtr<SUniformGridPanel,1> *)&local_18) {
    (this->MyUniformGridPanel).Object = (SUniformGridPanel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyUniformGridPanel).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetMinDesiredSlotHeight @ 146a17400

void __thiscall UUniformGridPanel::SetMinDesiredSlotHeight(UUniformGridPanel *this,float param_1)

{
  SUniformGridPanel *this_00;
  TAttribute<float> local_28;
  
  this->MinDesiredSlotHeight = param_1;
  this_00 = (this->MyUniformGridPanel).Object;
  if (this_00 != (SUniformGridPanel *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Value = param_1;
    SUniformGridPanel::SetMinDesiredSlotHeight(this_00,&local_28);
  }
  return;
}

// SetMinDesiredSlotWidth @ 146a17450

void __thiscall UUniformGridPanel::SetMinDesiredSlotWidth(UUniformGridPanel *this,float param_1)

{
  SUniformGridPanel *this_00;
  TAttribute<float> local_28;
  
  this->MinDesiredSlotWidth = param_1;
  this_00 = (this->MyUniformGridPanel).Object;
  if (this_00 != (SUniformGridPanel *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Value = param_1;
    SUniformGridPanel::SetMinDesiredSlotWidth(this_00,&local_28);
  }
  return;
}

// SetSlotPadding @ 146a1b920

void __thiscall UUniformGridPanel::SetSlotPadding(UUniformGridPanel *this,FMargin *param_1)

{
  SUniformGridPanel *this_00;
  TAttribute<FMargin> local_38;
  
  local_38.Value.Left = param_1->Left;
  local_38.Value.Top = param_1->Top;
  local_38.Value.Right = param_1->Right;
  local_38.Value.Bottom = param_1->Bottom;
  (this->SlotPadding).Left = local_38.Value.Left;
  (this->SlotPadding).Top = local_38.Value.Top;
  (this->SlotPadding).Right = local_38.Value.Right;
  (this->SlotPadding).Bottom = local_38.Value.Bottom;
  this_00 = (this->MyUniformGridPanel).Object;
  if (this_00 != (SUniformGridPanel *)0x0) {
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SUniformGridPanel::SetSlotPadding(this_00,&local_38);
  }
  return;
}

// StaticRegisterNativesUUniformGridPanel @ 146a1f260

void __cdecl UUniformGridPanel::StaticRegisterNativesUUniformGridPanel(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UUniformGridPanel_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a27230

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UUniformGridPanel::SynchronizeProperties(UUniformGridPanel *this)

{
  SUniformGridPanel *this_00;
  code *pcVar1;
  bool bVar2;
  TAttribute<float> local_78;
  TAttribute<float> local_58;
  TAttribute<FMargin> local_38;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  this_00 = (this->MyUniformGridPanel).Object;
  if (this_00 != (SUniformGridPanel *)0x0) {
    local_38.Value.Left = (this->SlotPadding).Left;
    local_38.Value.Top = (this->SlotPadding).Top;
    local_38.Value.Right = (this->SlotPadding).Right;
    local_38.Value.Bottom = (this->SlotPadding).Bottom;
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SUniformGridPanel::SetSlotPadding(this_00,&local_38);
    if ((this->MyUniformGridPanel).Object == (SUniformGridPanel *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_78.Value = this->MinDesiredSlotWidth;
    local_78.Getter._0_8_ = 0;
    local_78.Getter._8_8_ = 0;
    local_78.bIsSet = true;
    local_78.Getter._16_8_ = 0;
    SUniformGridPanel::SetMinDesiredSlotWidth((this->MyUniformGridPanel).Object,&local_78);
    if ((this->MyUniformGridPanel).Object == (SUniformGridPanel *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_58.Value = this->MinDesiredSlotHeight;
    local_58.Getter._0_8_ = 0;
    local_58.Getter._8_8_ = 0;
    local_58.bIsSet = true;
    local_58.Getter._16_8_ = 0;
    SUniformGridPanel::SetMinDesiredSlotHeight((this->MyUniformGridPanel).Object,&local_58);
  }
  return;
}

// execAddChildToUniformGrid @ 146a319d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UUniformGridPanel::execAddChildToUniformGrid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined1 *puVar2;
  uint uVar3;
  FProperty *pFVar4;
  FSlotBase *pFVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  TObjectPtr<UWidget>_u_0 TVar9;
  bool bVar10;
  int iVar11;
  UClass *pUVar12;
  UPanelSlot *pUVar13;
  int local_res10 [2];
  int local_res18 [2];
  TObjectPtr<UWidget>_u_0 local_res20;
  UPanelSlot *local_48;
  undefined8 local_40;
  
  local_res20.DebugPtr = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  TVar9 = local_res20;
  iVar8 = local_res18[0];
  iVar7 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res20.DebugPtr != (UWidget *)0x0) &&
     ((param_1[0xb].field_0x8 != '\0' || (*(int *)(param_1 + 0xb) < 1)))) {
    (**(code **)((local_res20.DebugPtr)->_padding_ + 0x2d0))(local_res20.DebugPtr);
    uVar3 = *(uint *)&param_1->field_0x8;
    local_40 = 0;
    pUVar12 = (UClass *)(**(code **)(*(longlong *)param_1 + 0x318))(param_1);
    pUVar13 = NewObject<UPanelSlot>
                        (param_1,pUVar12,(FName)0x0,(uVar3 >> 6 & 1) * 0x40 + RF_Transactional,
                         (UObject *)0x0,false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar9.DebugPtr);
    }
    (pUVar13->Content).field0_0x0.DebugPtr = (UWidget *)TVar9;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    (pUVar13->Parent).field0_0x0.DebugPtr = (UPanelWidget *)param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UPanelSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    (((TObjectPtr<UPanelSlot> *)((longlong)TVar9 + 0x30))->field0_0x0).DebugPtr = pUVar13;
    puVar2 = &param_1[10].field_0x20;
    local_48 = pUVar13;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UPanelSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
    if ((*(UPanelSlot ***)puVar2 <= &local_48) &&
       (&local_48 < *(UPanelSlot ***)puVar2 + *(int *)&param_1[0xb].field_0x4)) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar11 = *(int *)(param_1 + 0xb);
    if (iVar11 == *(int *)&param_1[0xb].field_0x4) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)puVar2,(int *)&param_1[0xb].field_0x4);
    }
    *(int *)(param_1 + 0xb) = iVar11 + 1;
    *(UPanelSlot **)(*(longlong *)puVar2 + (longlong)iVar11 * 8) = local_48;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UPanelSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48);
    }
    (**(code **)(*(longlong *)param_1 + 800))(param_1,pUVar13);
    UWidget::InvalidateLayoutAndVolatility((UWidget *)param_1);
    if (pUVar13 != (UPanelSlot *)0x0) {
      pUVar12 = UUniformGridSlot::StaticClass();
      iVar11 = (int)pUVar12->_padding_;
      if ((iVar11 <= *(int *)(pUVar13->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
          &pUVar12->_padding_)) {
        pFVar5 = (FSlotBase *)pUVar13[1]._padding_;
        *(int *)((longlong)&pUVar13[1]._padding_ + 4) = iVar8;
        if ((pFVar5 != (FSlotBase *)0x0) && (iVar8 != *(int *)((longlong)&pFVar5[1].Owner + 4))) {
          *(int *)((longlong)&pFVar5[1].Owner + 4) = iVar8;
          FSlotBase::Invalidate(pFVar5,Layout);
        }
        pFVar5 = (FSlotBase *)pUVar13[1]._padding_;
        *(int *)&pUVar13[1]._padding_ = iVar7;
        if ((pFVar5 != (FSlotBase *)0x0) && (iVar7 != *(int *)&pFVar5[1].Owner)) {
          *(int *)&pFVar5[1].Owner = iVar7;
          FSlotBase::Invalidate(pFVar5,Layout);
        }
        *(UPanelSlot **)param_3 = pUVar13;
        return;
      }
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execSetMinDesiredSlotHeight @ 146a3f3e0

void __cdecl
UUniformGridPanel::execSetMinDesiredSlotHeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SUniformGridPanel *this;
  float local_res8 [2];
  TAttribute<float> local_28;
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SUniformGridPanel **)(param_1 + 0xc);
  *(float *)&param_1[0xb].field_0x24 = local_res8[0];
  if (this != (SUniformGridPanel *)0x0) {
    local_28.Value = local_res8[0];
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SUniformGridPanel::SetMinDesiredSlotHeight(this,&local_28);
  }
  return;
}

// execSetMinDesiredSlotWidth @ 146a3f4a0

void __cdecl
UUniformGridPanel::execSetMinDesiredSlotWidth(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SUniformGridPanel *this;
  float local_res8 [2];
  TAttribute<float> local_28;
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SUniformGridPanel **)(param_1 + 0xc);
  *(float *)&param_1[0xb].field_0x20 = local_res8[0];
  if (this != (SUniformGridPanel *)0x0) {
    local_28.Value = local_res8[0];
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SUniformGridPanel::SetMinDesiredSlotWidth(this,&local_28);
  }
  return;
}

// execSetSlotPadding @ 146a42d60

void __cdecl UUniformGridPanel::execSetSlotPadding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SUniformGridPanel *this;
  FMargin local_58;
  FMargin local_48;
  TAttribute<FMargin> local_38;
  
  local_58.Left = 0.0;
  local_58.Top = 0.0;
  local_58.Right = 0.0;
  local_58.Bottom = 0.0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_48.Left = local_58.Left;
  local_48.Top = local_58.Top;
  local_48.Right = local_58.Right;
  local_48.Bottom = local_58.Bottom;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SUniformGridPanel **)(param_1 + 0xc);
  *(float *)&param_1[0xb].field_0x10 = local_58.Left;
  *(float *)&param_1[0xb].field_0x14 = local_58.Top;
  *(float *)&param_1[0xb].field_0x18 = local_58.Right;
  *(float *)&param_1[0xb].field_0x1c = local_58.Bottom;
  if (this != (SUniformGridPanel *)0x0) {
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Value.Left = local_58.Left;
    local_38.Value.Top = local_58.Top;
    local_38.Value.Right = local_58.Right;
    local_38.Value.Bottom = local_58.Bottom;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SUniformGridPanel::SetSlotPadding(this,&local_38);
  }
  return;
}

