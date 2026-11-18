// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 24

// GetPadding_WrapperImpl @ 1468dc260

void __cdecl UButtonSlot::GetPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x40);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetPadding_WrapperImpl @ 1468dc2b0

void __cdecl UButtonSlot::SetPadding_WrapperImpl(void *param_1,void *param_2)

{
  FMargin local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  SetPadding(param_1,&local_18);
  return;
}

// GetHorizontalAlignment_WrapperImpl @ 1468dc320

void __cdecl UButtonSlot::GetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x48);
  return;
}

// SetHorizontalAlignment_WrapperImpl @ 1468dc330

void __cdecl UButtonSlot::SetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  SetHorizontalAlignment(param_1,(uint)*(byte *)param_2);
  return;
}

// GetVerticalAlignment_WrapperImpl @ 1468dc340

void __cdecl UButtonSlot::GetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x49);
  return;
}

// SetVerticalAlignment_WrapperImpl @ 1468dc350

void __cdecl UButtonSlot::SetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  SetVerticalAlignment(param_1,(uint)*(byte *)param_2);
  return;
}

// StaticClass @ 1468dc360

UClass * __cdecl UButtonSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UButtonSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ButtonSlot",&Z_Registration_Info_UClass_UButtonSlot.InnerSingleton,
               StaticRegisterNativesUButtonSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UButtonSlot>,InternalVTableHelperCtorCaller<UButtonSlot>,
               local_res8,UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UButtonSlot.InnerSingleton;
}

// UButtonSlot @ 146900dc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UButtonSlot * __thiscall UButtonSlot::UButtonSlot(UButtonSlot *this,FVTableHelper *param_1)

{
  UPanelSlot::UPanelSlot((UPanelSlot *)this,param_1);
  this->_padding_ = (longlong)&___7UButtonSlot__6B_;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  (this->Button).Object = (SButton *)0x0;
  (this->Button).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UButtonSlot @ 146900e00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UButtonSlot * __thiscall UButtonSlot::UButtonSlot(UButtonSlot *this,FObjectInitializer *param_1)

{
  UPanelSlot::UPanelSlot((UPanelSlot *)this,param_1);
  this->_padding_ = (longlong)&___7UButtonSlot__6B_;
  (this->Button).Object = (SButton *)0x0;
  (this->Button).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Padding).Left = 4.0;
  (this->Padding).Top = 2.0;
  (this->Padding).Right = 4.0;
  (this->Padding).Bottom = 2.0;
  this->HorizontalAlignment = '\x02';
  this->VerticalAlignment = '\x02';
  return this;
}

// ~UButtonSlot @ 1469047b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UButtonSlot::~UButtonSlot(UButtonSlot *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7UButtonSlot__6B_;
  pTVar3 = (this->Button).WeakReferenceCount.ReferenceController;
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

// BuildSlot @ 14690e090

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UButtonSlot::BuildSlot(UButtonSlot *this,TSharedRef<SButton,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SButton *pSVar5;
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
  (this->Button).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  bVar8 = true;
  if (pTVar3 != (this->Button).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->Button).WeakReferenceCount.ReferenceController;
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
    (this->Button).WeakReferenceCount.ReferenceController = pTVar3;
  }
  local_58.Value.Left = (this->Padding).Left;
  local_58.Value.Top = (this->Padding).Top;
  local_58.Value.Right = (this->Padding).Right;
  local_58.Value.Bottom = (this->Padding).Bottom;
  local_58.bIsSet = true;
  local_58.Getter._16_8_ = 0;
  local_58.Getter._0_8_ = 0;
  local_58.Getter._8_8_ = 0;
  SButton::SetContentPadding(param_1->Object,&local_58);
  SBorder::SetHAlign((SBorder *)param_1->Object,(uint)(this->HorizontalAlignment).Value);
  SBorder::SetVAlign((SBorder *)param_1->Object,(uint)(this->VerticalAlignment).Value);
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

// GetHorizontalAlignment @ 14691e880

EHorizontalAlignment __thiscall UButtonSlot::GetHorizontalAlignment(UButtonSlot *this)

{
  return (EHorizontalAlignment)(this->HorizontalAlignment).Value;
}

// GetPadding @ 146920ac0

FMargin * __thiscall UButtonSlot::GetPadding(UButtonSlot *this,FMargin *__return_storage_ptr__)

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

// GetPrivateStaticClass @ 146921c30

UClass * __cdecl UButtonSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UButtonSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ButtonSlot",&Z_Registration_Info_UClass_UButtonSlot.InnerSingleton,
               StaticRegisterNativesUButtonSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UButtonSlot>,InternalVTableHelperCtorCaller<UButtonSlot>,
               local_res8,UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UButtonSlot.InnerSingleton;
}

// GetVerticalAlignment @ 146927a60

EVerticalAlignment __thiscall UButtonSlot::GetVerticalAlignment(UButtonSlot *this)

{
  return (EVerticalAlignment)(this->VerticalAlignment).Value;
}

// ReleaseSlateResources @ 14693ac30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UButtonSlot::ReleaseSlateResources(UButtonSlot *this,bool param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 local_18 [2];
  
  UPanelSlot::ReleaseSlateResources((UPanelSlot *)this,param_1);
  if (&this->Button != (TWeakPtr<SButton,1> *)local_18) {
    pTVar3 = (this->Button).WeakReferenceCount.ReferenceController;
    (this->Button).Object = (SButton *)0x0;
    (this->Button).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014693ac7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        return;
      }
    }
  }
  return;
}

// SetHorizontalAlignment @ 146942c90

void __thiscall UButtonSlot::SetHorizontalAlignment(UButtonSlot *this,EHorizontalAlignment param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SButton *pSVar5;
  SButton *pSVar6;
  SButton *this_00;
  bool bVar7;
  
  (this->HorizontalAlignment).Value = (uchar)param_1;
  if ((this->Button).Object == (SButton *)0x0) {
    return;
  }
  pTVar1 = (this->Button).WeakReferenceCount.ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar1->SharedReferenceCount < 1) {
    return;
  }
  pSVar6 = (SButton *)(this->Button).WeakReferenceCount.ReferenceController;
  this_00 = (SButton *)0x0;
  pSVar5 = pSVar6;
  if (pSVar6 != (SButton *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar6->_padding_;
    do {
      pSVar5 = this_00;
      if (aVar3 == (atomic<int>)0x0) goto LAB_146942ce3;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar6->_padding_;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        *(atomic<int> *)&pSVar6->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    this_00 = (this->Button).Object;
    pSVar5 = pSVar6;
    if (this_00 != (SButton *)0x0) goto LAB_146942d09;
  }
LAB_146942ce3:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar6 = pSVar5;
  if (bVar7) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_146942d09:
  SBorder::SetHAlign((SBorder *)this_00,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// SetPadding @ 146943bb0

void __thiscall UButtonSlot::SetPadding(UButtonSlot *this,FMargin *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  atomic<int> aVar6;
  TReferenceControllerBase<1> *pTVar7;
  SButton *this_00;
  bool bVar8;
  TAttribute<FMargin> local_38;
  
  fVar3 = param_1->Top;
  fVar4 = param_1->Right;
  fVar5 = param_1->Bottom;
  (this->Padding).Left = param_1->Left;
  (this->Padding).Top = fVar3;
  (this->Padding).Right = fVar4;
  (this->Padding).Bottom = fVar5;
  if ((this->Button).Object == (SButton *)0x0) {
    return;
  }
  pTVar7 = (this->Button).WeakReferenceCount.ReferenceController;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar7->SharedReferenceCount < 1) {
    return;
  }
  pTVar7 = (this->Button).WeakReferenceCount.ReferenceController;
  this_00 = (SButton *)0x0;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_146943c12;
      }
      LOCK();
      aVar6 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar6;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar6;
    } while (!bVar8);
    this_00 = (this->Button).Object;
    if (this_00 != (SButton *)0x0) goto LAB_146943c38;
  }
LAB_146943c12:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_146943c38:
  local_38.Value.Left = param_1->Left;
  local_38.Value.Top = param_1->Top;
  local_38.Value.Right = param_1->Right;
  local_38.Value.Bottom = param_1->Bottom;
  local_38.bIsSet = true;
  local_38.Getter._16_8_ = 0;
  local_38.Getter._0_8_ = 0;
  local_38.Getter._8_8_ = 0;
  SButton::SetContentPadding(this_00,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// SetVerticalAlignment @ 146944550

void __thiscall UButtonSlot::SetVerticalAlignment(UButtonSlot *this,EVerticalAlignment param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SButton *pSVar5;
  SButton *pSVar6;
  SButton *this_00;
  bool bVar7;
  
  (this->VerticalAlignment).Value = (uchar)param_1;
  if ((this->Button).Object == (SButton *)0x0) {
    return;
  }
  pTVar1 = (this->Button).WeakReferenceCount.ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar1->SharedReferenceCount < 1) {
    return;
  }
  pSVar6 = (SButton *)(this->Button).WeakReferenceCount.ReferenceController;
  this_00 = (SButton *)0x0;
  pSVar5 = pSVar6;
  if (pSVar6 != (SButton *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar6->_padding_;
    do {
      pSVar5 = this_00;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1469445a3;
      LOCK();
      aVar4 = *(atomic<int> *)&pSVar6->_padding_;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        *(atomic<int> *)&pSVar6->_padding_ = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    this_00 = (this->Button).Object;
    pSVar5 = pSVar6;
    if (this_00 != (SButton *)0x0) goto LAB_1469445c9;
  }
LAB_1469445a3:
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pSVar6 = pSVar5;
  if (bVar7) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1469445c9:
  SBorder::SetVAlign((SBorder *)this_00,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// StaticRegisterNativesUButtonSlot @ 146945730

void __cdecl UButtonSlot::StaticRegisterNativesUButtonSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UButtonSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146947c00

void __thiscall UButtonSlot::SynchronizeProperties(UButtonSlot *this)

{
  FMargin local_18;
  
  local_18.Left = (this->Padding).Left;
  local_18.Top = (this->Padding).Top;
  local_18.Right = (this->Padding).Right;
  local_18.Bottom = (this->Padding).Bottom;
  SetPadding(this,&local_18);
  SetHorizontalAlignment(this,(uint)(this->HorizontalAlignment).Value);
  SetVerticalAlignment(this,(uint)(this->VerticalAlignment).Value);
  return;
}

// execSetHorizontalAlignment @ 146955630

void __cdecl UButtonSlot::execSetHorizontalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetHorizontalAlignment((UButtonSlot *)param_1,(uint)local_res10[0]);
  return;
}

// execSetPadding @ 146955ed0

void __cdecl UButtonSlot::execSetPadding(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetPadding((UButtonSlot *)param_1,&local_18);
  return;
}

// execSetVerticalAlignment @ 146956ab0

void __cdecl UButtonSlot::execSetVerticalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetVerticalAlignment((UButtonSlot *)param_1,(uint)local_res10[0]);
  return;
}

