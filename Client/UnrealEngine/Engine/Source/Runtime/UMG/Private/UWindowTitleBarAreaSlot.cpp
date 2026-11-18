// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 21

// SetPadding_WrapperImpl @ 146a47090

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWindowTitleBarAreaSlot::SetPadding_WrapperImpl(void *param_1,void *param_2)

{
  SWindowTitleBarArea *this;
  undefined8 uVar1;
  undefined8 uVar2;
  UWindowTitleBarArea *pUVar3;
  TAttribute<FMargin> local_48;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
  pUVar3 = CastChecked<UWindowTitleBarArea,UPanelWidget>
                     ((TObjectPtr<UPanelWidget> *)((longlong)param_1 + 0x28),NullChecked);
  this = (pUVar3->MyWindowTitleBarArea).Object;
  if (this != (SWindowTitleBarArea *)0x0) {
    local_48.bIsSet = true;
    local_48.Getter._16_8_ = 0;
    local_48.Getter._0_8_ = 0;
    local_48.Getter._8_8_ = 0;
    local_48.Value._0_8_ = uVar1;
    local_48.Value._8_8_ = uVar2;
    SWindowTitleBarArea::SetPadding(this,&local_48);
  }
  return;
}

// SetHorizontalAlignment_WrapperImpl @ 146a47100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWindowTitleBarAreaSlot::SetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  SWindowTitleBarArea *this;
  UWindowTitleBarArea *pUVar2;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x48) = bVar1;
  pUVar2 = CastChecked<UWindowTitleBarArea,UPanelWidget>
                     ((TObjectPtr<UPanelWidget> *)((longlong)param_1 + 0x28),NullChecked);
  this = (pUVar2->MyWindowTitleBarArea).Object;
  if (this != (SWindowTitleBarArea *)0x0) {
    SWindowTitleBarArea::SetHAlign(this,(uint)bVar1);
    return;
  }
  return;
}

// SetVerticalAlignment_WrapperImpl @ 146a47140

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWindowTitleBarAreaSlot::SetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  SWindowTitleBarArea *this;
  UWindowTitleBarArea *pUVar2;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x49) = bVar1;
  pUVar2 = CastChecked<UWindowTitleBarArea,UPanelWidget>
                     ((TObjectPtr<UPanelWidget> *)((longlong)param_1 + 0x28),NullChecked);
  this = (pUVar2->MyWindowTitleBarArea).Object;
  if (this != (SWindowTitleBarArea *)0x0) {
    SWindowTitleBarArea::SetVAlign(this,(uint)bVar1);
    return;
  }
  return;
}

// StaticClass @ 146a47200

UClass * __cdecl UWindowTitleBarAreaSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWindowTitleBarAreaSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WindowTitleBarAreaSlot",
               &Z_Registration_Info_UClass_UWindowTitleBarAreaSlot.InnerSingleton,
               StaticRegisterNativesUWindowTitleBarAreaSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWindowTitleBarAreaSlot>,
               InternalVTableHelperCtorCaller<UWindowTitleBarAreaSlot>,local_res8,
               UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWindowTitleBarAreaSlot.InnerSingleton;
}

// UWindowTitleBarAreaSlot @ 146a57d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UWindowTitleBarAreaSlot * __thiscall
UWindowTitleBarAreaSlot::UWindowTitleBarAreaSlot
          (UWindowTitleBarAreaSlot *this,FVTableHelper *param_1)

{
  UPanelSlot::UPanelSlot((UPanelSlot *)this,param_1);
  this->_padding_ = (longlong)&___7UWindowTitleBarAreaSlot__6B_;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  (this->WindowTitleBarArea).Object = (SWindowTitleBarArea *)0x0;
  (this->WindowTitleBarArea).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UWindowTitleBarAreaSlot @ 146a57da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UWindowTitleBarAreaSlot * __thiscall
UWindowTitleBarAreaSlot::UWindowTitleBarAreaSlot
          (UWindowTitleBarAreaSlot *this,FObjectInitializer *param_1)

{
  UPanelSlot::UPanelSlot((UPanelSlot *)this,param_1);
  this->_padding_ = (longlong)&___7UWindowTitleBarAreaSlot__6B_;
  (this->WindowTitleBarArea).Object = (SWindowTitleBarArea *)0x0;
  (this->WindowTitleBarArea).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->HorizontalAlignment = '\0';
  this->VerticalAlignment = '\0';
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  return this;
}

// ~UWindowTitleBarAreaSlot @ 146a58dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UWindowTitleBarAreaSlot::~UWindowTitleBarAreaSlot(UWindowTitleBarAreaSlot *this)

{
  this->_padding_ = (longlong)&___7UWindowTitleBarAreaSlot__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WindowTitleBarArea).SharedReferenceCount.ReferenceController);
  UPanelSlot::~UPanelSlot((UPanelSlot *)this);
  return;
}

// BuildSlot @ 146a5f820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UWindowTitleBarAreaSlot::BuildSlot
          (UWindowTitleBarAreaSlot *this,TSharedRef<SWindowTitleBarArea,1> *param_1)

{
  TSharedPtr<SWindowTitleBarArea,1> *pTVar1;
  SWindowTitleBarArea *this_00;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SWidget,1> *pTVar4;
  SWindowTitleBarArea *local_68;
  FSharedReferencer<1> local_60;
  TSharedRef<SWidget,1> local_58;
  TSharedRef<SWidget,1> local_48;
  TAttribute<FMargin> local_38;
  
  local_68 = param_1->Object;
  local_60.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->WindowTitleBarArea;
  if (pTVar1 != (TSharedPtr<SWindowTitleBarArea,1> *)&local_68) {
    pTVar1->Object = local_68;
    local_68 = (SWindowTitleBarArea *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WindowTitleBarArea).SharedReferenceCount,&local_60);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.ReferenceController);
  if (pTVar1->Object == (SWindowTitleBarArea *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_38.Value.Left = (this->Padding).Left;
  local_38.Value.Top = (this->Padding).Top;
  local_38.Value.Right = (this->Padding).Right;
  local_38.Value.Bottom = (this->Padding).Bottom;
  local_38.bIsSet = true;
  local_38.Getter._16_8_ = 0;
  local_38.Getter._0_8_ = 0;
  local_38.Getter._8_8_ = 0;
  SWindowTitleBarArea::SetPadding(pTVar1->Object,&local_38);
  if (pTVar1->Object == (SWindowTitleBarArea *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SWindowTitleBarArea::SetHAlign(pTVar1->Object,(uint)(this->HorizontalAlignment).Value);
  if (pTVar1->Object == (SWindowTitleBarArea *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  SWindowTitleBarArea::SetVAlign(pTVar1->Object,(uint)(this->VerticalAlignment).Value);
  if (pTVar1->Object == (SWindowTitleBarArea *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = pTVar1->Object;
  if ((UWidget *)this->_padding_ == (UWidget *)0x0) {
    local_58.Object = SNullWidget::NullWidget.Object;
    local_58.SharedReferenceCount.ReferenceController =
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
    SWindowTitleBarArea::SetContent(this_00,&local_58);
    local_48.SharedReferenceCount.ReferenceController =
         local_58.SharedReferenceCount.ReferenceController;
  }
  else {
    pTVar4 = UWidget::TakeWidget((UWidget *)this->_padding_,&local_48);
    SWindowTitleBarArea::SetContent(this_00,pTVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetHorizontalAlignment @ 146a76a10

/* WARNING: Enum "Type": Some values do not have unique names */

EHorizontalAlignment __thiscall
UWindowTitleBarAreaSlot::GetHorizontalAlignment(UWindowTitleBarAreaSlot *this)

{
  return (EHorizontalAlignment)(this->HorizontalAlignment).Value;
}

// GetPadding @ 146a77a80

/* WARNING: Enum "Type": Some values do not have unique names */

FMargin * __thiscall
UWindowTitleBarAreaSlot::GetPadding(UWindowTitleBarAreaSlot *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->Padding).Top;
  fVar2 = (this->Padding).Right;
  fVar3 = (this->Padding).Bottom;
  __return_storage_ptr__->Left = (this->Padding).Left;
  __return_storage_ptr__->Top = fVar1;
  __return_storage_ptr__->Right = fVar2;
  __return_storage_ptr__->Bottom = fVar3;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146a78750

UClass * __cdecl UWindowTitleBarAreaSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWindowTitleBarAreaSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WindowTitleBarAreaSlot",
               &Z_Registration_Info_UClass_UWindowTitleBarAreaSlot.InnerSingleton,
               StaticRegisterNativesUWindowTitleBarAreaSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWindowTitleBarAreaSlot>,
               InternalVTableHelperCtorCaller<UWindowTitleBarAreaSlot>,local_res8,
               UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWindowTitleBarAreaSlot.InnerSingleton;
}

// GetVerticalAlignment @ 146a79780

/* WARNING: Enum "Type": Some values do not have unique names */

EVerticalAlignment __thiscall
UWindowTitleBarAreaSlot::GetVerticalAlignment(UWindowTitleBarAreaSlot *this)

{
  return (EVerticalAlignment)(this->VerticalAlignment).Value;
}

// ReleaseSlateResources @ 146a8ec30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UWindowTitleBarAreaSlot::ReleaseSlateResources(UWindowTitleBarAreaSlot *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelSlot::ReleaseSlateResources((UPanelSlot *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->WindowTitleBarArea != (TSharedPtr<SWindowTitleBarArea,1> *)&local_18) {
    (this->WindowTitleBarArea).Object = (SWindowTitleBarArea *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->WindowTitleBarArea).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetHorizontalAlignment @ 146a93ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWindowTitleBarAreaSlot::SetHorizontalAlignment
          (UWindowTitleBarAreaSlot *this,EHorizontalAlignment param_1)

{
  SWindowTitleBarArea *this_00;
  UWindowTitleBarArea *pUVar1;
  
  (this->HorizontalAlignment).Value = (uchar)param_1;
  pUVar1 = CastChecked<UWindowTitleBarArea,UPanelWidget>
                     ((TObjectPtr<UPanelWidget> *)&this->_padding_,NullChecked);
  this_00 = (pUVar1->MyWindowTitleBarArea).Object;
  if (this_00 != (SWindowTitleBarArea *)0x0) {
    SWindowTitleBarArea::SetHAlign(this_00,param_1);
    return;
  }
  return;
}

// SetPadding @ 146a94580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWindowTitleBarAreaSlot::SetPadding(UWindowTitleBarAreaSlot *this,FMargin *param_1)

{
  SWindowTitleBarArea *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  UWindowTitleBarArea *pUVar4;
  TAttribute<FMargin> local_38;
  
  fVar1 = param_1->Top;
  fVar2 = param_1->Right;
  fVar3 = param_1->Bottom;
  (this->Padding).Left = param_1->Left;
  (this->Padding).Top = fVar1;
  (this->Padding).Right = fVar2;
  (this->Padding).Bottom = fVar3;
  pUVar4 = CastChecked<UWindowTitleBarArea,UPanelWidget>
                     ((TObjectPtr<UPanelWidget> *)&this->_padding_,NullChecked);
  this_00 = (pUVar4->MyWindowTitleBarArea).Object;
  if (this_00 != (SWindowTitleBarArea *)0x0) {
    local_38.Value.Left = param_1->Left;
    local_38.Value.Top = param_1->Top;
    local_38.Value.Right = param_1->Right;
    local_38.Value.Bottom = param_1->Bottom;
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SWindowTitleBarArea::SetPadding(this_00,&local_38);
  }
  return;
}

// SetVerticalAlignment @ 146a95150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWindowTitleBarAreaSlot::SetVerticalAlignment
          (UWindowTitleBarAreaSlot *this,EVerticalAlignment param_1)

{
  SWindowTitleBarArea *this_00;
  UWindowTitleBarArea *pUVar1;
  
  (this->VerticalAlignment).Value = (uchar)param_1;
  pUVar1 = CastChecked<UWindowTitleBarArea,UPanelWidget>
                     ((TObjectPtr<UPanelWidget> *)&this->_padding_,NullChecked);
  this_00 = (pUVar1->MyWindowTitleBarArea).Object;
  if (this_00 != (SWindowTitleBarArea *)0x0) {
    SWindowTitleBarArea::SetVAlign(this_00,param_1);
    return;
  }
  return;
}

// StaticRegisterNativesUWindowTitleBarAreaSlot @ 146a96a50

void __cdecl UWindowTitleBarAreaSlot::StaticRegisterNativesUWindowTitleBarAreaSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UWindowTitleBarAreaSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a97750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWindowTitleBarAreaSlot::SynchronizeProperties(UWindowTitleBarAreaSlot *this)

{
  longlong *plVar1;
  byte bVar2;
  SWindowTitleBarArea *pSVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UWindowTitleBarArea *pUVar6;
  TAttribute<FMargin> local_48;
  
  if ((this->WindowTitleBarArea).Object != (SWindowTitleBarArea *)0x0) {
    plVar1 = &this->_padding_;
    uVar4._0_4_ = (this->Padding).Left;
    uVar4._4_4_ = (this->Padding).Top;
    uVar5._0_4_ = (this->Padding).Right;
    uVar5._4_4_ = (this->Padding).Bottom;
    pUVar6 = CastChecked<UWindowTitleBarArea,UPanelWidget>
                       ((TObjectPtr<UPanelWidget> *)plVar1,NullChecked);
    pSVar3 = (pUVar6->MyWindowTitleBarArea).Object;
    if (pSVar3 != (SWindowTitleBarArea *)0x0) {
      local_48.bIsSet = true;
      local_48.Getter._16_8_ = 0;
      local_48.Getter._0_8_ = 0;
      local_48.Getter._8_8_ = 0;
      local_48.Value._0_8_ = uVar4;
      local_48.Value._8_8_ = uVar5;
      SWindowTitleBarArea::SetPadding(pSVar3,&local_48);
    }
    bVar2 = (this->HorizontalAlignment).Value;
    pUVar6 = CastChecked<UWindowTitleBarArea,UPanelWidget>
                       ((TObjectPtr<UPanelWidget> *)plVar1,NullChecked);
    pSVar3 = (pUVar6->MyWindowTitleBarArea).Object;
    if (pSVar3 != (SWindowTitleBarArea *)0x0) {
      SWindowTitleBarArea::SetHAlign(pSVar3,(uint)bVar2);
    }
    bVar2 = (this->VerticalAlignment).Value;
    pUVar6 = CastChecked<UWindowTitleBarArea,UPanelWidget>
                       ((TObjectPtr<UPanelWidget> *)plVar1,NullChecked);
    pSVar3 = (pUVar6->MyWindowTitleBarArea).Object;
    if (pSVar3 != (SWindowTitleBarArea *)0x0) {
      SWindowTitleBarArea::SetVAlign(pSVar3,(uint)bVar2);
      return;
    }
  }
  return;
}

// execSetHorizontalAlignment @ 146aa8990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWindowTitleBarAreaSlot::execSetHorizontalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SWindowTitleBarArea *this;
  UWindowTitleBarArea *pUVar2;
  EHorizontalAlignment EVar3;
  byte local_res8 [8];
  
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
  EVar3 = (EHorizontalAlignment)local_res8[0];
  param_1[1].field_0x20 = local_res8[0];
  pUVar2 = CastChecked<UWindowTitleBarArea,UPanelWidget>
                     ((TObjectPtr<UPanelWidget> *)(param_1 + 1),NullChecked);
  this = (pUVar2->MyWindowTitleBarArea).Object;
  if (this != (SWindowTitleBarArea *)0x0) {
    SWindowTitleBarArea::SetHAlign(this,EVar3);
  }
  return;
}

// execSetPadding @ 146aa99c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWindowTitleBarAreaSlot::execSetPadding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SWindowTitleBarArea *this;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UWindowTitleBarArea *pUVar6;
  FMargin local_68;
  FMargin local_58;
  TAttribute<FMargin> local_48;
  
  local_68.Left = 0.0;
  local_68.Top = 0.0;
  local_68.Right = 0.0;
  local_68.Bottom = 0.0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  uVar4 = local_68._8_8_;
  uVar2 = local_68._0_8_;
  local_58.Left = local_68.Left;
  local_58.Top = local_68.Top;
  local_58.Right = local_68.Right;
  local_58.Bottom = local_68.Bottom;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(float *)&param_1[1].field_0x10 = local_68.Left;
  *(float *)&param_1[1].field_0x14 = local_68.Top;
  *(float *)&param_1[1].field_0x18 = local_68.Right;
  *(float *)&param_1[1].field_0x1c = local_68.Bottom;
  pUVar6 = CastChecked<UWindowTitleBarArea,UPanelWidget>
                     ((TObjectPtr<UPanelWidget> *)(param_1 + 1),NullChecked);
  uVar5 = local_68._8_8_;
  uVar3 = local_68._0_8_;
  this = (pUVar6->MyWindowTitleBarArea).Object;
  if (this != (SWindowTitleBarArea *)0x0) {
    local_48.bIsSet = true;
    local_48.Getter._16_8_ = 0;
    local_68.Left = (float)uVar2;
    local_68.Top = SUB84(uVar2,4);
    local_48.Value.Left = local_68.Left;
    local_48.Value.Top = local_68.Top;
    local_68.Right = (float)uVar4;
    local_68.Bottom = SUB84(uVar4,4);
    local_48.Value.Right = local_68.Right;
    local_48.Value.Bottom = local_68.Bottom;
    local_48.Getter._0_8_ = 0;
    local_48.Getter._8_8_ = 0;
    local_68._0_8_ = uVar3;
    local_68._8_8_ = uVar5;
    SWindowTitleBarArea::SetPadding(this,&local_48);
  }
  return;
}

// execSetVerticalAlignment @ 146aaa5f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWindowTitleBarAreaSlot::execSetVerticalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SWindowTitleBarArea *this;
  UWindowTitleBarArea *pUVar2;
  EVerticalAlignment EVar3;
  byte local_res8 [8];
  
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
  EVar3 = (EVerticalAlignment)local_res8[0];
  param_1[1].field_0x21 = local_res8[0];
  pUVar2 = CastChecked<UWindowTitleBarArea,UPanelWidget>
                     ((TObjectPtr<UPanelWidget> *)(param_1 + 1),NullChecked);
  this = (pUVar2->MyWindowTitleBarArea).Object;
  if (this != (SWindowTitleBarArea *)0x0) {
    SWindowTitleBarArea::SetVAlign(this,EVar3);
  }
  return;
}

