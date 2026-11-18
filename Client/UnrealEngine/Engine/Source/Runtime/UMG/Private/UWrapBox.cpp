// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 36

// GetInnerSlotPadding_WrapperImpl @ 146a4b5f0

void __cdecl UWrapBox::GetInnerSlotPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x1d0);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x1c8);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetInnerSlotPadding_WrapperImpl @ 146a4b610

void __cdecl UWrapBox::SetInnerSlotPadding_WrapperImpl(void *param_1,void *param_2)

{
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (double)*(undefined8 *)param_2;
  local_18._s_0.Y = *(double *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x1c8) = local_18._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = local_18._s_0.Y;
  if (*(SWrapBox **)((longlong)param_1 + 0x1e0) != (SWrapBox *)0x0) {
    SWrapBox::SetInnerSlotPadding
              (*(SWrapBox **)((longlong)param_1 + 0x1e0),(TVector2<double> *)&local_18._s_0);
  }
  return;
}

// GetWrapSize_WrapperImpl @ 146a4b650

void __cdecl UWrapBox::GetWrapSize_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1d8);
  return;
}

// SetWrapSize_WrapperImpl @ 146a4b660

void __cdecl UWrapBox::SetWrapSize_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<float> local_28;
  
  local_28.Value = *(float *)param_2;
  *(float *)((longlong)param_1 + 0x1d8) = local_28.Value;
  if (*(SWrapBox **)((longlong)param_1 + 0x1e0) != (SWrapBox *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SWrapBox::SetWrapSize(*(SWrapBox **)((longlong)param_1 + 0x1e0),&local_28);
  }
  return;
}

// GetbExplicitWrapSize_WrapperImpl @ 146a4b6b0

void __cdecl UWrapBox::GetbExplicitWrapSize_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1dc);
  return;
}

// SetbExplicitWrapSize_WrapperImpl @ 146a4b6c0

void __cdecl UWrapBox::SetbExplicitWrapSize_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)param_2;
  *(char *)((longlong)param_1 + 0x1dc) = cVar1;
  if (*(SWrapBox **)((longlong)param_1 + 0x1e0) != (SWrapBox *)0x0) {
    SWrapBox::SetUseAllottedSize(*(SWrapBox **)((longlong)param_1 + 0x1e0),cVar1 == '\0');
    return;
  }
  return;
}

// GetHorizontalAlignment_WrapperImpl @ 146a4b6f0

void __cdecl UWrapBox::GetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1dd);
  return;
}

// SetHorizontalAlignment_WrapperImpl @ 146a4b700

void __cdecl UWrapBox::SetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  TAttribute<EHorizontalAlignment> local_28;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x1dd) = bVar1;
  if (*(SWrapBox **)((longlong)param_1 + 0x1e0) != (SWrapBox *)0x0) {
    local_28.Value = (EHorizontalAlignment)bVar1;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SWrapBox::SetHorizontalAlignment(*(SWrapBox **)((longlong)param_1 + 0x1e0),&local_28);
  }
  return;
}

// GetOrientation_WrapperImpl @ 146a4b750

void __cdecl UWrapBox::GetOrientation_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1de);
  return;
}

// SetOrientation_WrapperImpl @ 146a4b760

void __cdecl UWrapBox::SetOrientation_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x1de) = bVar1;
  if (*(SWrapBox **)((longlong)param_1 + 0x1e0) != (SWrapBox *)0x0) {
    SWrapBox::SetOrientation(*(SWrapBox **)((longlong)param_1 + 0x1e0),(uint)bVar1);
    return;
  }
  return;
}

// StaticClass @ 146a4b790

UClass * __cdecl UWrapBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWrapBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WrapBox",&Z_Registration_Info_UClass_UWrapBox.InnerSingleton,
               StaticRegisterNativesUWrapBox,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWrapBox>,InternalVTableHelperCtorCaller<UWrapBox>,local_res8,
               UPanelWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWrapBox.InnerSingleton;
}

// UWrapBox @ 146a57de0

UWrapBox * __thiscall UWrapBox::UWrapBox(UWrapBox *this,FVTableHelper *param_1)

{
  UPanelWidget::UPanelWidget((UPanelWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->MyWrapBox).Object = (SWrapBox *)0x0;
  (this->MyWrapBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Orientation).Value = '\0';
  return this;
}

// UWrapBox @ 146a57e30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWrapBox * __thiscall UWrapBox::UWrapBox(UWrapBox *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UPanelWidget::UPanelWidget((UPanelWidget *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->Orientation).Value = '\0';
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->MyWrapBox).Object = (SWrapBox *)0x0;
  (this->MyWrapBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  this->WrapSize = 500.0;
  this->bExplicitWrapSize = false;
  this->HorizontalAlignment = '\x01';
  (this->Orientation).Value = '\0';
  return this;
}

// ~UWrapBox @ 146a58df0

void __thiscall UWrapBox::~UWrapBox(UWrapBox *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyWrapBox).SharedReferenceCount.ReferenceController);
  UPanelWidget::~UPanelWidget((UPanelWidget *)this);
  return;
}

// AddChildToWrapBox @ 146a5c6e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWrapBoxSlot * __thiscall UWrapBox::AddChildToWrapBox(UWrapBox *this,UWidget *param_1)

{
  int iVar1;
  UWrapBoxSlot *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UWrapBoxSlot *)UPanelWidget::AddChild((UPanelWidget *)this,param_1);
  if (pUVar2 != (UWrapBoxSlot *)0x0) {
    pUVar3 = UWrapBoxSlot::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UWrapBoxSlot *)0x0;
}

// GetHorizontalAlignment @ 146a76a20

EHorizontalAlignment __thiscall UWrapBox::GetHorizontalAlignment(UWrapBox *this)

{
  return (EHorizontalAlignment)(this->HorizontalAlignment).Value;
}

// GetInnerSlotPadding @ 146a76aa0

TVector2<double> * __thiscall
UWrapBox::GetInnerSlotPadding(UWrapBox *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->InnerSlotPadding).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->InnerSlotPadding).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetOrientation @ 146a77800

EOrientation __thiscall UWrapBox::GetOrientation(UWrapBox *this)

{
  return (EOrientation)(this->Orientation).Value;
}

// GetPrivateStaticClass @ 146a78810

UClass * __cdecl UWrapBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWrapBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WrapBox",&Z_Registration_Info_UClass_UWrapBox.InnerSingleton,
               StaticRegisterNativesUWrapBox,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWrapBox>,InternalVTableHelperCtorCaller<UWrapBox>,local_res8,
               UPanelWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWrapBox.InnerSingleton;
}

// GetSlotClass @ 146a79400

UClass * __thiscall UWrapBox::GetSlotClass(UWrapBox *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UWrapBoxSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WrapBoxSlot",&Z_Registration_Info_UClass_UWrapBoxSlot.InnerSingleton
               ,UWrapBoxSlot::StaticRegisterNativesUWrapBoxSlot,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWrapBoxSlot>,
               InternalVTableHelperCtorCaller<UWrapBoxSlot>,aFStackX_8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWrapBoxSlot.InnerSingleton;
}

// GetWrapSize @ 146a79c10

float __thiscall UWrapBox::GetWrapSize(UWrapBox *this)

{
  return this->WrapSize;
}

// OnSlotAdded @ 146a867f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWrapBox::OnSlotAdded(UWrapBox *this,UPanelSlot *param_1)

{
  int iVar1;
  UClass *pUVar2;
  TSharedRef<SWrapBox,1> *pTVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_38;
  TSharedRef<SWrapBox,1> local_28;
  FString local_18;
  
  if ((this->MyWrapBox).Object != (SWrapBox *)0x0) {
    if (param_1 == (UPanelSlot *)0x0) {
      pFVar4 = GetTypeName<UWrapBoxSlot>(&local_38);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar2 = UWrapBoxSlot::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pFVar4 = GetTypeName<UWrapBoxSlot>(&local_38);
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
    pTVar3 = TSharedPtr<SWrapBox,1>::ToSharedRef(&this->MyWrapBox,&local_28);
    UWrapBoxSlot::BuildSlot((UWrapBoxSlot *)param_1,pTVar3);
  }
  return;
}

// OnSlotRemoved @ 146a86a20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWrapBox::OnSlotRemoved(UWrapBox *this,UPanelSlot *param_1)

{
  UWidget *this_00;
  code *pcVar1;
  bool bVar2;
  SWrapBox *this_01;
  TSharedPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  if (((this->MyWrapBox).Object != (SWrapBox *)0x0) &&
     (this_00 = (param_1->Content).field0_0x0.DebugPtr, this_00 != (UWidget *)0x0)) {
    UWidget::GetCachedWidget(this_00,&local_28);
    if (local_28.Object != (SWidget *)0x0) {
      this_01 = TSharedPtr<SWrapBox,1>::operator->(&this->MyWrapBox);
      if (local_28.Object == (SWidget *)0x0) {
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
      SWrapBox::RemoveSlot(this_01,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// RebuildWidget @ 146a8cf50

TSharedRef<SWidget,1> * __thiscall
UWrapBox::RebuildWidget(UWrapBox *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  UWrapBoxSlot *this_00;
  TReferenceControllerBase<1> *pTVar5;
  SWrapBox *pSVar6;
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
  SWrapBox *local_328;
  FSharedReferencer<1> local_320;
  float local_318;
  undefined1 local_314;
  undefined1 local_310 [8];
  void *pvStack_308;
  undefined8 local_300;
  EHorizontalAlignment local_2f8;
  undefined1 local_2f4;
  undefined1 local_2f0 [8];
  void *pvStack_2e8;
  undefined8 local_2e0;
  TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs> local_2d8;
  FMemScope local_2c0;
  TSharedRef<SWrapBox,1> local_2b8;
  undefined1 local_2a8 [528];
  undefined1 local_98 [32];
  undefined1 local_78 [56];
  
  pFVar12 = SWrapBox::FArguments::FArguments((FArguments *)local_2a8);
  pFVar12->_UseAllottedSize = this->bExplicitWrapSize == false;
  local_318 = this->WrapSize;
  local_314 = 1;
  local_300 = 0;
  local_310 = (undefined1  [8])0x0;
  pvStack_308 = (void *)0x0;
  (pFVar12->_PreferredSize).Value = local_318;
  (pFVar12->_PreferredSize).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_PreferredSize).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_310);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_310);
  if (pvStack_308 != (void *)0x0) {
    FMemory::Free(pvStack_308);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_310);
  local_2f8 = (EHorizontalAlignment)(this->HorizontalAlignment).Value;
  local_2f4 = 1;
  local_2f0 = (undefined1  [8])0x0;
  pvStack_2e8 = (void *)0x0;
  local_2e0 = 0;
  (pFVar12->_HAlign).Value = local_2f8;
  (pFVar12->_HAlign).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_HAlign).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f0);
  if (pvStack_2e8 != (void *)0x0) {
    FMemory::Free(pvStack_2e8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2f0);
  pFVar12->_Orientation = (uint)(this->Orientation).Value;
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2c0,&local_res20,true);
  TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs>
            (&local_2d8,"SWrapBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WrapBox.cpp"
             ,0x44,local_res10);
  FMemScope::~FMemScope(&local_2c0);
  FLLMScope::~FLLMScope(local_res18);
  pSVar6 = local_2d8._Widget.Object;
  if (local_2d8._Widget.Object == (SWrapBox *)0x0) {
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
  SWidget::SWidgetConstruct((SWidget *)local_2d8._Widget.Object,(FSlateBaseNamedArgs *)pFVar12);
  SWrapBox::Construct(local_2d8._Widget.Object,pFVar12);
  if (local_2d8._Widget.Object == (SWrapBox *)0x0) {
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
  if (((local_2d8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_2d8._Widget.Object)->_padding_ + 0x228))(local_2d8._Widget.Object);
    bVar11 = 0;
    if (cVar10 == '\0') goto LAB_146a8d19d;
  }
  bVar11 = 0x20;
LAB_146a8d19d:
  FVar8.ReferenceController = local_2d8._Widget.SharedReferenceCount.ReferenceController;
  *(byte *)&(local_2d8._Widget.Object)->_padding_ =
       (byte)(local_2d8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2d8._Widget.Object)->_padding_ =
       (byte)(local_2d8._Widget.Object)->_padding_ | bVar11;
  pbVar1 = (byte *)((longlong)&(local_2d8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  local_2d8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2d8._Widget.Object = (SWrapBox *)0x0;
  if (pSVar6 == (SWrapBox *)0x0) {
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
  local_328 = pSVar6;
  local_320.ReferenceController = FVar8.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyWrapBox != (TSharedPtr<SWrapBox,1> *)&local_328) {
    (this->MyWrapBox).Object = pSVar6;
    local_328 = (SWrapBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyWrapBox).SharedReferenceCount,&local_320);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_320.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
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
  DestructItems<SWrapBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_2a8._504_8_,local_2a8._512_4_);
  if ((FSlotArguments *)local_2a8._504_8_ != (FSlotArguments *)0x0) {
    FMemory::Free((void *)local_2a8._504_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2a8);
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
    this_00 = (UWrapBoxSlot *)*puVar15;
    if (this_00 != (UWrapBoxSlot *)0x0) {
      pUVar14 = UWrapBoxSlot::StaticClass();
      iVar4 = (int)pUVar14->_padding_;
      if ((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar14->_padding_)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        this_00->_padding_ = (longlong)this;
        if ((this->MyWrapBox).Object == (SWrapBox *)0x0) {
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
        local_2b8.SharedReferenceCount.ReferenceController =
             (this->MyWrapBox).SharedReferenceCount.ReferenceController;
        local_2b8.Object = (this->MyWrapBox).Object;
        if (local_2b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_2b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_2b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (local_2b8.Object == (SWrapBox *)0x0) {
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
        UWrapBoxSlot::BuildSlot(this_00,&local_2b8);
      }
    }
    puVar15 = puVar15 + 1;
  }
  if ((this->MyWrapBox).Object == (SWrapBox *)0x0) {
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
  pTVar5 = (this->MyWrapBox).SharedReferenceCount.ReferenceController;
  pSVar6 = (this->MyWrapBox).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar6 == (SWrapBox *)0x0) {
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
  __return_storage_ptr__->Object = (SWidget *)pSVar6;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a8ec80

void __thiscall UWrapBox::ReleaseSlateResources(UWrapBox *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyWrapBox != (TSharedPtr<SWrapBox,1> *)&local_18) {
    (this->MyWrapBox).Object = (SWrapBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyWrapBox).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetExplicitWrapSize @ 146a936d0

void __thiscall UWrapBox::SetExplicitWrapSize(UWrapBox *this,bool param_1)

{
  SWrapBox *this_00;
  
  this->bExplicitWrapSize = param_1;
  this_00 = (this->MyWrapBox).Object;
  if (this_00 != (SWrapBox *)0x0) {
    SWrapBox::SetUseAllottedSize(this_00,!param_1);
    return;
  }
  return;
}

// SetHorizontalAlignment @ 146a93af0

void __thiscall UWrapBox::SetHorizontalAlignment(UWrapBox *this,EHorizontalAlignment param_1)

{
  SWrapBox *this_00;
  TAttribute<EHorizontalAlignment> local_28;
  
  (this->HorizontalAlignment).Value = (uchar)param_1;
  this_00 = (this->MyWrapBox).Object;
  if (this_00 != (SWrapBox *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.bIsSet = true;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.Value = param_1;
    SWrapBox::SetHorizontalAlignment(this_00,&local_28);
  }
  return;
}

// SetInnerSlotPadding @ 146a93b70

void __thiscall UWrapBox::SetInnerSlotPadding(UWrapBox *this,TVector2<double> *param_1)

{
  SWrapBox *this_00;
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_18._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  (this->InnerSlotPadding).field0_0x0._s_0.X = local_18._s_0.X;
  (this->InnerSlotPadding).field0_0x0._s_0.Y = local_18._s_0.Y;
  this_00 = (this->MyWrapBox).Object;
  if (this_00 != (SWrapBox *)0x0) {
    SWrapBox::SetInnerSlotPadding(this_00,(TVector2<double> *)&local_18._s_0);
  }
  return;
}

// SetOrientation @ 146a94010

void __thiscall UWrapBox::SetOrientation(UWrapBox *this,EOrientation param_1)

{
  SWrapBox *this_00;
  
  (this->Orientation).Value = (uchar)param_1;
  this_00 = (this->MyWrapBox).Object;
  if (this_00 == (SWrapBox *)0x0) {
    return;
  }
  if (this_00->Orientation != param_1) {
    this_00->Orientation = param_1;
    SWidget::Invalidate((SWidget *)this_00,Layout);
    return;
  }
  return;
}

// SetWrapSize @ 146a95c30

void __thiscall UWrapBox::SetWrapSize(UWrapBox *this,float param_1)

{
  SWrapBox *this_00;
  TAttribute<float> local_28;
  
  this->WrapSize = param_1;
  this_00 = (this->MyWrapBox).Object;
  if (this_00 != (SWrapBox *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Value = param_1;
    SWrapBox::SetWrapSize(this_00,&local_28);
  }
  return;
}

// StaticRegisterNativesUWrapBox @ 146a96a90

void __cdecl UWrapBox::StaticRegisterNativesUWrapBox(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UWrapBox_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a97830

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWrapBox::SynchronizeProperties(UWrapBox *this)

{
  SWrapBox *this_00;
  code *pcVar1;
  bool bVar2;
  TVector2<double>_u_0 local_58;
  TAttribute<float> local_48;
  TAttribute<EHorizontalAlignment> local_28;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  this_00 = (this->MyWrapBox).Object;
  if (this_00 == (SWrapBox *)0x0) {
    return;
  }
  local_58._s_0.X = (this->InnerSlotPadding).field0_0x0._s_0.X;
  local_58._s_0.Y = (this->InnerSlotPadding).field0_0x0._s_0.Y;
  SWrapBox::SetInnerSlotPadding(this_00,(TVector2<double> *)&local_58._s_0);
  if ((this->MyWrapBox).Object == (SWrapBox *)0x0) {
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
  SWrapBox::SetUseAllottedSize((this->MyWrapBox).Object,this->bExplicitWrapSize == false);
  if ((this->MyWrapBox).Object == (SWrapBox *)0x0) {
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
  local_48.Value = this->WrapSize;
  local_48.Getter._0_8_ = 0;
  local_48.Getter._8_8_ = 0;
  local_48.bIsSet = true;
  local_48.Getter._16_8_ = 0;
  SWrapBox::SetWrapSize((this->MyWrapBox).Object,&local_48);
  if ((this->MyWrapBox).Object == (SWrapBox *)0x0) {
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
  local_28.Value = (EHorizontalAlignment)(this->HorizontalAlignment).Value;
  local_28.Getter._16_8_ = 0;
  local_28.bIsSet = true;
  local_28.Getter._0_8_ = 0;
  local_28.Getter._8_8_ = 0;
  SWrapBox::SetHorizontalAlignment((this->MyWrapBox).Object,&local_28);
  if ((this->MyWrapBox).Object == (SWrapBox *)0x0) {
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
  SWrapBox::SetOrientation((this->MyWrapBox).Object,(uint)(this->Orientation).Value);
  return;
}

// UseExplicitWrapSize @ 146a9c130

bool __thiscall UWrapBox::UseExplicitWrapSize(UWrapBox *this)

{
  return this->bExplicitWrapSize;
}

// execAddChildToWrapBox @ 146a9d6d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWrapBox::execAddChildToWrapBox(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UPanelSlot *pUVar3;
  UClass *pUVar4;
  UWidget *local_res10;
  
  local_res10 = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = UPanelWidget::AddChild((UPanelWidget *)param_1,local_res10);
  if (pUVar3 != (UPanelSlot *)0x0) {
    pUVar4 = UWrapBoxSlot::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      *(UPanelSlot **)param_3 = pUVar3;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execSetHorizontalAlignment @ 146aa8a30

void __cdecl UWrapBox::execSetHorizontalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SWrapBox *this;
  byte local_res8 [8];
  TAttribute<EHorizontalAlignment> local_28;
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SWrapBox **)(param_1 + 0xc);
  param_1[0xb].field_0x25 = local_res8[0];
  if (this != (SWrapBox *)0x0) {
    local_28.Value = (EHorizontalAlignment)local_res8[0];
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SWrapBox::SetHorizontalAlignment(this,&local_28);
  }
  return;
}

// execSetInnerSlotPadding @ 146aa8ba0

void __cdecl UWrapBox::execSetInnerSlotPadding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SWrapBox *this;
  double local_28;
  double dStack_20;
  TVector2<double>_u_0 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SWrapBox **)(param_1 + 0xc);
  *(double *)&param_1[0xb].field_0x10 = local_28;
  *(double *)&param_1[0xb].field_0x18 = dStack_20;
  if (this != (SWrapBox *)0x0) {
    local_18._s_0.X = local_28;
    local_18._s_0.Y = dStack_20;
    SWrapBox::SetInnerSlotPadding(this,(TVector2<double> *)&local_18._s_0);
  }
  return;
}

