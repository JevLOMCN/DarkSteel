// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 21

// SetPadding_WrapperImpl @ 1468d6120

void __cdecl UBorderSlot::SetPadding_WrapperImpl(void *param_1,void *param_2)

{
  SBorder *this;
  undefined8 uVar1;
  undefined8 uVar2;
  UBorder *pUVar3;
  TAttribute<FMargin> local_48;
  
  uVar1 = *(undefined8 *)param_2;
  uVar2 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
  pUVar3 = CastChecked<UBorder,UPanelWidget>
                     ((TObjectPtr<UPanelWidget> *)((longlong)param_1 + 0x28),NullChecked);
  this = (pUVar3->MyBorder).Object;
  (pUVar3->Padding).Left = (float)uVar1;
  (pUVar3->Padding).Top = SUB84(uVar1,4);
  (pUVar3->Padding).Right = (float)uVar2;
  (pUVar3->Padding).Bottom = SUB84(uVar2,4);
  if (this != (SBorder *)0x0) {
    local_48.bIsSet = true;
    local_48.Getter._16_8_ = 0;
    local_48.Getter._0_8_ = 0;
    local_48.Getter._8_8_ = 0;
    local_48.Value._0_8_ = uVar1;
    local_48.Value._8_8_ = uVar2;
    SBorder::SetPadding(this,&local_48);
  }
  return;
}

// SetHorizontalAlignment_WrapperImpl @ 1468d6250

void __cdecl UBorderSlot::SetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  SBorder *this;
  UBorder *pUVar2;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x48) = bVar1;
  pUVar2 = CastChecked<UBorder,UPanelWidget>
                     ((TObjectPtr<UPanelWidget> *)((longlong)param_1 + 0x28),NullChecked);
  this = (pUVar2->MyBorder).Object;
  (pUVar2->HorizontalAlignment).Value = bVar1;
  if (this != (SBorder *)0x0) {
    SBorder::SetHAlign(this,(uint)bVar1);
    return;
  }
  return;
}

// SetVerticalAlignment_WrapperImpl @ 1468d62a0

void __cdecl UBorderSlot::SetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  SBorder *this;
  UBorder *pUVar2;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x49) = bVar1;
  pUVar2 = CastChecked<UBorder,UPanelWidget>
                     ((TObjectPtr<UPanelWidget> *)((longlong)param_1 + 0x28),NullChecked);
  this = (pUVar2->MyBorder).Object;
  (pUVar2->VerticalAlignment).Value = bVar1;
  if (this != (SBorder *)0x0) {
    SBorder::SetVAlign(this,(uint)bVar1);
    return;
  }
  return;
}

// StaticClass @ 1468d62f0

UClass * __cdecl UBorderSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBorderSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"BorderSlot",&Z_Registration_Info_UClass_UBorderSlot.InnerSingleton,
               StaticRegisterNativesUBorderSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBorderSlot>,InternalVTableHelperCtorCaller<UBorderSlot>,
               local_res8,UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBorderSlot.InnerSingleton;
}

// UBorderSlot @ 146900970

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UBorderSlot * __thiscall UBorderSlot::UBorderSlot(UBorderSlot *this,FVTableHelper *param_1)

{
  UPanelSlot::UPanelSlot((UPanelSlot *)this,param_1);
  this->_padding_ = (longlong)&___7UBorderSlot__6B_;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  (this->Border).Object = (SBorder *)0x0;
  (this->Border).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UBorderSlot @ 1469009b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UBorderSlot * __thiscall UBorderSlot::UBorderSlot(UBorderSlot *this,FObjectInitializer *param_1)

{
  UPanelSlot::UPanelSlot((UPanelSlot *)this,param_1);
  this->_padding_ = (longlong)&___7UBorderSlot__6B_;
  (this->Border).Object = (SBorder *)0x0;
  (this->Border).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Padding).Left = 4.0;
  (this->Padding).Top = 2.0;
  (this->Padding).Right = 4.0;
  (this->Padding).Bottom = 2.0;
  this->HorizontalAlignment = '\0';
  this->VerticalAlignment = '\0';
  return this;
}

// ~UBorderSlot @ 1469045f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBorderSlot::~UBorderSlot(UBorderSlot *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7UBorderSlot__6B_;
  pTVar3 = (this->Border).WeakReferenceCount.ReferenceController;
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

// BuildSlot @ 14690df20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBorderSlot::BuildSlot(UBorderSlot *this,TSharedRef<SBorder,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SBorder *pSVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  FSharedReferencer<1> FVar9;
  TSharedRef<SWidget,1> *pTVar10;
  TSharedRef<SWidget,1> local_88;
  SWidget *local_78;
  TReferenceControllerBase<1> *local_70;
  TSharedRef<SWidget,1> local_68;
  TAttribute<FMargin> local_58;
  
  bVar7 = false;
  (this->Border).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  bVar8 = true;
  if (pTVar3 != (this->Border).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->Border).WeakReferenceCount.ReferenceController;
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
    (this->Border).WeakReferenceCount.ReferenceController = pTVar3;
  }
  local_58.Value.Left = (this->Padding).Left;
  local_58.Value.Top = (this->Padding).Top;
  local_58.Value.Right = (this->Padding).Right;
  local_58.Value.Bottom = (this->Padding).Bottom;
  local_58.bIsSet = true;
  local_58.Getter._16_8_ = 0;
  local_58.Getter._0_8_ = 0;
  local_58.Getter._8_8_ = 0;
  SBorder::SetPadding(param_1->Object,&local_58);
  SBorder::SetHAlign(param_1->Object,(uint)(this->HorizontalAlignment).Value);
  SBorder::SetVAlign(param_1->Object,(uint)(this->VerticalAlignment).Value);
  local_78 = SNullWidget::NullWidget.Object;
  pSVar5 = param_1->Object;
  pcVar6 = *(code **)(pSVar5->_padding_ + 0x248);
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
    bVar8 = false;
    pTVar10 = &local_88;
    bVar7 = true;
  }
  else {
    pTVar10 = UWidget::TakeWidget((UWidget *)this->_padding_,&local_68);
    local_78 = pTVar10->Object;
  }
  FVar9.ReferenceController = local_88.SharedReferenceCount.ReferenceController;
  local_70 = (pTVar10->SharedReferenceCount).ReferenceController;
  if (local_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar6)(pSVar5,&local_78);
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar9.ReferenceController);
  }
  if (bVar8) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetHorizontalAlignment @ 14691e870

EHorizontalAlignment __thiscall UBorderSlot::GetHorizontalAlignment(UBorderSlot *this)

{
  return (EHorizontalAlignment)(this->HorizontalAlignment).Value;
}

// GetPadding @ 146920aa0

FMargin * __thiscall UBorderSlot::GetPadding(UBorderSlot *this,FMargin *__return_storage_ptr__)

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

// GetPrivateStaticClass @ 1469219f0

UClass * __cdecl UBorderSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBorderSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"BorderSlot",&Z_Registration_Info_UClass_UBorderSlot.InnerSingleton,
               StaticRegisterNativesUBorderSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBorderSlot>,InternalVTableHelperCtorCaller<UBorderSlot>,
               local_res8,UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBorderSlot.InnerSingleton;
}

// GetVerticalAlignment @ 146927a50

EVerticalAlignment __thiscall UBorderSlot::GetVerticalAlignment(UBorderSlot *this)

{
  return (EVerticalAlignment)(this->VerticalAlignment).Value;
}

// ReleaseSlateResources @ 14693ab70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBorderSlot::ReleaseSlateResources(UBorderSlot *this,bool param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 local_18 [2];
  
  UPanelSlot::ReleaseSlateResources((UPanelSlot *)this,param_1);
  if (&this->Border != (TWeakPtr<SBorder,1> *)local_18) {
    pTVar3 = (this->Border).WeakReferenceCount.ReferenceController;
    (this->Border).Object = (SBorder *)0x0;
    (this->Border).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014693abba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        return;
      }
    }
  }
  return;
}

// SetHorizontalAlignment @ 146942c40

void __thiscall UBorderSlot::SetHorizontalAlignment(UBorderSlot *this,EHorizontalAlignment param_1)

{
  SBorder *this_00;
  UBorder *pUVar1;
  
  (this->HorizontalAlignment).Value = (uchar)param_1;
  pUVar1 = CastChecked<UBorder,UPanelWidget>
                     ((TObjectPtr<UPanelWidget> *)&this->_padding_,NullChecked);
  this_00 = (pUVar1->MyBorder).Object;
  (pUVar1->HorizontalAlignment).Value = (uchar)param_1;
  if (this_00 != (SBorder *)0x0) {
    SBorder::SetHAlign(this_00,param_1);
    return;
  }
  return;
}

// SetPadding @ 146943b40

void __thiscall UBorderSlot::SetPadding(UBorderSlot *this,FMargin *param_1)

{
  SBorder *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  UBorder *pUVar4;
  TAttribute<FMargin> local_38;
  
  fVar1 = param_1->Top;
  fVar2 = param_1->Right;
  fVar3 = param_1->Bottom;
  (this->Padding).Left = param_1->Left;
  (this->Padding).Top = fVar1;
  (this->Padding).Right = fVar2;
  (this->Padding).Bottom = fVar3;
  pUVar4 = CastChecked<UBorder,UPanelWidget>
                     ((TObjectPtr<UPanelWidget> *)&this->_padding_,NullChecked);
  local_38.Value.Left = param_1->Left;
  local_38.Value.Top = param_1->Top;
  local_38.Value.Right = param_1->Right;
  local_38.Value.Bottom = param_1->Bottom;
  this_00 = (pUVar4->MyBorder).Object;
  (pUVar4->Padding).Left = local_38.Value.Left;
  (pUVar4->Padding).Top = local_38.Value.Top;
  (pUVar4->Padding).Right = local_38.Value.Right;
  (pUVar4->Padding).Bottom = local_38.Value.Bottom;
  if (this_00 != (SBorder *)0x0) {
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SBorder::SetPadding(this_00,&local_38);
  }
  return;
}

// SetVerticalAlignment @ 146944500

void __thiscall UBorderSlot::SetVerticalAlignment(UBorderSlot *this,EVerticalAlignment param_1)

{
  SBorder *this_00;
  UBorder *pUVar1;
  
  (this->VerticalAlignment).Value = (uchar)param_1;
  pUVar1 = CastChecked<UBorder,UPanelWidget>
                     ((TObjectPtr<UPanelWidget> *)&this->_padding_,NullChecked);
  this_00 = (pUVar1->MyBorder).Object;
  (pUVar1->VerticalAlignment).Value = (uchar)param_1;
  if (this_00 != (SBorder *)0x0) {
    SBorder::SetVAlign(this_00,param_1);
    return;
  }
  return;
}

// StaticRegisterNativesUBorderSlot @ 146945670

void __cdecl UBorderSlot::StaticRegisterNativesUBorderSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UBorderSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146947860

void __thiscall UBorderSlot::SynchronizeProperties(UBorderSlot *this)

{
  longlong *plVar1;
  byte bVar2;
  TReferenceControllerBase<1> *pTVar3;
  SBorder *pSVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  UBorder *pUVar7;
  TAttribute<FMargin> local_48;
  
  if ((((this->Border).Object != (SBorder *)0x0) &&
      (pTVar3 = (this->Border).WeakReferenceCount.ReferenceController,
      pTVar3 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar3->SharedReferenceCount)) {
    plVar1 = &this->_padding_;
    uVar5._0_4_ = (this->Padding).Left;
    uVar5._4_4_ = (this->Padding).Top;
    uVar6._0_4_ = (this->Padding).Right;
    uVar6._4_4_ = (this->Padding).Bottom;
    pUVar7 = CastChecked<UBorder,UPanelWidget>((TObjectPtr<UPanelWidget> *)plVar1,NullChecked);
    pSVar4 = (pUVar7->MyBorder).Object;
    (pUVar7->Padding).Left = (float)uVar5;
    (pUVar7->Padding).Top = uVar5._4_4_;
    (pUVar7->Padding).Right = (float)uVar6;
    (pUVar7->Padding).Bottom = uVar6._4_4_;
    if (pSVar4 != (SBorder *)0x0) {
      local_48.bIsSet = true;
      local_48.Getter._16_8_ = 0;
      local_48.Getter._0_8_ = 0;
      local_48.Getter._8_8_ = 0;
      local_48.Value._0_8_ = uVar5;
      local_48.Value._8_8_ = uVar6;
      SBorder::SetPadding(pSVar4,&local_48);
    }
    bVar2 = (this->HorizontalAlignment).Value;
    pUVar7 = CastChecked<UBorder,UPanelWidget>((TObjectPtr<UPanelWidget> *)plVar1,NullChecked);
    pSVar4 = (pUVar7->MyBorder).Object;
    (pUVar7->HorizontalAlignment).Value = bVar2;
    if (pSVar4 != (SBorder *)0x0) {
      SBorder::SetHAlign(pSVar4,(uint)bVar2);
    }
    bVar2 = (this->VerticalAlignment).Value;
    pUVar7 = CastChecked<UBorder,UPanelWidget>((TObjectPtr<UPanelWidget> *)plVar1,NullChecked);
    pSVar4 = (pUVar7->MyBorder).Object;
    (pUVar7->VerticalAlignment).Value = bVar2;
    if (pSVar4 != (SBorder *)0x0) {
      SBorder::SetVAlign(pSVar4,(uint)bVar2);
      return;
    }
  }
  return;
}

// execSetHorizontalAlignment @ 146955580

void __cdecl UBorderSlot::execSetHorizontalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SBorder *this;
  TEnumAsByte<EHorizontalAlignment> TVar2;
  UBorder *pUVar3;
  EHorizontalAlignment EVar4;
  TEnumAsByte<EHorizontalAlignment> local_res8 [8];
  
  local_res8[0].Value = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  TVar2.Value = local_res8[0].Value;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar4 = (EHorizontalAlignment)local_res8[0].Value;
  param_1[1].field_0x20 = local_res8[0].Value;
  pUVar3 = CastChecked<UBorder,UPanelWidget>((TObjectPtr<UPanelWidget> *)(param_1 + 1),NullChecked);
  this = (pUVar3->MyBorder).Object;
  (pUVar3->HorizontalAlignment).Value = TVar2.Value;
  if (this != (SBorder *)0x0) {
    SBorder::SetHAlign(this,EVar4);
  }
  return;
}

// execSetPadding @ 146955de0

void __cdecl UBorderSlot::execSetPadding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SBorder *this;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UBorder *pUVar6;
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
  pUVar6 = CastChecked<UBorder,UPanelWidget>((TObjectPtr<UPanelWidget> *)(param_1 + 1),NullChecked);
  uVar5 = local_68._8_8_;
  uVar3 = local_68._0_8_;
  this = (pUVar6->MyBorder).Object;
  local_68.Left = (float)uVar2;
  local_68.Top = SUB84(uVar2,4);
  (pUVar6->Padding).Left = local_68.Left;
  (pUVar6->Padding).Top = local_68.Top;
  local_68.Right = (float)uVar4;
  local_68.Bottom = SUB84(uVar4,4);
  (pUVar6->Padding).Right = local_68.Right;
  (pUVar6->Padding).Bottom = local_68.Bottom;
  if (this != (SBorder *)0x0) {
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
    SBorder::SetPadding(this,&local_48);
  }
  return;
}

// execSetVerticalAlignment @ 146956a00

void __cdecl UBorderSlot::execSetVerticalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SBorder *this;
  TEnumAsByte<EVerticalAlignment> TVar2;
  UBorder *pUVar3;
  EVerticalAlignment EVar4;
  TEnumAsByte<EVerticalAlignment> local_res8 [8];
  
  local_res8[0].Value = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  TVar2.Value = local_res8[0].Value;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar4 = (EVerticalAlignment)local_res8[0].Value;
  param_1[1].field_0x21 = local_res8[0].Value;
  pUVar3 = CastChecked<UBorder,UPanelWidget>((TObjectPtr<UPanelWidget> *)(param_1 + 1),NullChecked);
  this = (pUVar3->MyBorder).Object;
  (pUVar3->VerticalAlignment).Value = TVar2.Value;
  if (this != (SBorder *)0x0) {
    SBorder::SetVAlign(this,EVar4);
  }
  return;
}

