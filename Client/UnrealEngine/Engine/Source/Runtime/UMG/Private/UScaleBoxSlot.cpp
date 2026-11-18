// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 19

// SetHorizontalAlignment_WrapperImpl @ 146964840

void __cdecl UScaleBoxSlot::SetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  SetHorizontalAlignment(param_1,(uint)*(byte *)param_2);
  return;
}

// SetVerticalAlignment_WrapperImpl @ 146964850

void __cdecl UScaleBoxSlot::SetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  SetVerticalAlignment(param_1,(uint)*(byte *)param_2);
  return;
}

// StaticClass @ 146964870

UClass * __cdecl UScaleBoxSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScaleBoxSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ScaleBoxSlot",
               &Z_Registration_Info_UClass_UScaleBoxSlot.InnerSingleton,
               StaticRegisterNativesUScaleBoxSlot,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UScaleBoxSlot>,InternalVTableHelperCtorCaller<UScaleBoxSlot>,
               local_res8,UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScaleBoxSlot.InnerSingleton;
}

// UScaleBoxSlot @ 14698d000

UScaleBoxSlot * __thiscall UScaleBoxSlot::UScaleBoxSlot(UScaleBoxSlot *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UScaleBoxSlot__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ScaleBox).Object = (SScaleBox *)0x0;
  (this->ScaleBox).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UScaleBoxSlot @ 14698d040

UScaleBoxSlot * __thiscall
UScaleBoxSlot::UScaleBoxSlot(UScaleBoxSlot *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UScaleBoxSlot__6B_;
  (this->ScaleBox).Object = (SScaleBox *)0x0;
  (this->ScaleBox).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->HorizontalAlignment = '\x02';
  this->VerticalAlignment = '\x02';
  return this;
}

// ~UScaleBoxSlot @ 146993ff0

void __thiscall UScaleBoxSlot::~UScaleBoxSlot(UScaleBoxSlot *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7UScaleBoxSlot__6B_;
  pTVar3 = (this->ScaleBox).WeakReferenceCount.ReferenceController;
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
  this->_padding_ = (longlong)&___7UVisual__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildSlot @ 1469a4470

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UScaleBoxSlot::BuildSlot(UScaleBoxSlot *this,TSharedRef<SScaleBox,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  SScaleBox *this_00;
  bool bVar5;
  bool bVar6;
  FSharedReferencer<1> FVar7;
  TSharedRef<SWidget,1> *pTVar8;
  TSharedRef<SWidget,1> local_48;
  TSharedRef<SWidget,1> local_38;
  TSharedRef<SWidget,1> local_28;
  
  bVar5 = false;
  (this->ScaleBox).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  bVar6 = true;
  if (pTVar3 != (this->ScaleBox).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->ScaleBox).WeakReferenceCount.ReferenceController;
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
    (this->ScaleBox).WeakReferenceCount.ReferenceController = pTVar3;
  }
  SScaleBox::SetHAlign(param_1->Object,(uint)(this->HorizontalAlignment).Value);
  SScaleBox::SetVAlign(param_1->Object,(uint)(this->VerticalAlignment).Value);
  local_38.Object = SNullWidget::NullWidget.Object;
  this_00 = param_1->Object;
  if ((UWidget *)this->_padding_ == (UWidget *)0x0) {
    local_48.Object = SNullWidget::NullWidget.Object;
    local_48.SharedReferenceCount.ReferenceController =
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
    bVar6 = false;
    pTVar8 = &local_48;
    bVar5 = true;
  }
  else {
    pTVar8 = UWidget::TakeWidget((UWidget *)this->_padding_,&local_28);
    local_38.Object = pTVar8->Object;
  }
  FVar7.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
  local_38.SharedReferenceCount.ReferenceController =
       (pTVar8->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SScaleBox::SetContent(this_00,&local_38);
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetHorizontalAlignment @ 1469d12c0

EHorizontalAlignment __thiscall UScaleBoxSlot::GetHorizontalAlignment(UScaleBoxSlot *this)

{
  return (EHorizontalAlignment)(this->HorizontalAlignment).Value;
}

// GetPrivateStaticClass @ 1469d5820

UClass * __cdecl UScaleBoxSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScaleBoxSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ScaleBoxSlot",
               &Z_Registration_Info_UClass_UScaleBoxSlot.InnerSingleton,
               StaticRegisterNativesUScaleBoxSlot,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UScaleBoxSlot>,InternalVTableHelperCtorCaller<UScaleBoxSlot>,
               local_res8,UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScaleBoxSlot.InnerSingleton;
}

// GetVerticalAlignment @ 1469d9c80

EVerticalAlignment __thiscall UScaleBoxSlot::GetVerticalAlignment(UScaleBoxSlot *this)

{
  return (EVerticalAlignment)(this->VerticalAlignment).Value;
}

// ReleaseSlateResources @ 146a0b150

void __thiscall UScaleBoxSlot::ReleaseSlateResources(UScaleBoxSlot *this,bool param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  longlong lVar4;
  TReferenceControllerBase<1> *pTVar5;
  UClass *pUVar6;
  undefined8 local_18 [2];
  
  lVar4 = this->_padding_;
  if (lVar4 != 0) {
    pUVar6 = Z_Construct_UClass_UUserWidget_NoRegister();
    lVar4 = *(longlong *)(lVar4 + 0x10);
    iVar3 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar6->_padding_)) {
      (**(code **)(*(longlong *)this->_padding_ + 0x2b0))();
    }
  }
  if (&this->ScaleBox != (TWeakPtr<SScaleBox,1> *)local_18) {
    pTVar5 = (this->ScaleBox).WeakReferenceCount.ReferenceController;
    (this->ScaleBox).Object = (SScaleBox *)0x0;
    (this->ScaleBox).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  return;
}

// SetHorizontalAlignment @ 146a15280

void __thiscall
UScaleBoxSlot::SetHorizontalAlignment(UScaleBoxSlot *this,EHorizontalAlignment param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SScaleBox *pSVar5;
  SScaleBox *pSVar6;
  SScaleBox *this_00;
  bool bVar7;
  
  (this->HorizontalAlignment).Value = (uchar)param_1;
  if ((this->ScaleBox).Object == (SScaleBox *)0x0) {
    return;
  }
  pTVar1 = (this->ScaleBox).WeakReferenceCount.ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar1->SharedReferenceCount < 1) {
    return;
  }
  pSVar6 = (SScaleBox *)(this->ScaleBox).WeakReferenceCount.ReferenceController;
  this_00 = (SScaleBox *)0x0;
  pSVar5 = pSVar6;
  if (pSVar6 != (SScaleBox *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar6->_padding_;
    do {
      pSVar5 = this_00;
      if (aVar3 == (atomic<int>)0x0) goto LAB_146a152d3;
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
    this_00 = (this->ScaleBox).Object;
    pSVar5 = pSVar6;
    if (this_00 != (SScaleBox *)0x0) goto LAB_146a152f9;
  }
LAB_146a152d3:
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
LAB_146a152f9:
  SScaleBox::SetHAlign(this_00,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// SetPadding @ 146a18a70

void __thiscall UScaleBoxSlot::SetPadding(UScaleBoxSlot *this,FMargin *param_1)

{
  return;
}

// SetVerticalAlignment @ 146a1d680

void __thiscall UScaleBoxSlot::SetVerticalAlignment(UScaleBoxSlot *this,EVerticalAlignment param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  SScaleBox *pSVar5;
  SScaleBox *pSVar6;
  SScaleBox *this_00;
  bool bVar7;
  
  (this->VerticalAlignment).Value = (uchar)param_1;
  if ((this->ScaleBox).Object == (SScaleBox *)0x0) {
    return;
  }
  pTVar1 = (this->ScaleBox).WeakReferenceCount.ReferenceController;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    return;
  }
  if ((int)pTVar1->SharedReferenceCount < 1) {
    return;
  }
  pSVar6 = (SScaleBox *)(this->ScaleBox).WeakReferenceCount.ReferenceController;
  this_00 = (SScaleBox *)0x0;
  pSVar5 = pSVar6;
  if (pSVar6 != (SScaleBox *)0x0) {
    aVar3 = *(atomic<int> *)&pSVar6->_padding_;
    do {
      pSVar5 = this_00;
      if (aVar3 == (atomic<int>)0x0) goto LAB_146a1d6d3;
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
    this_00 = (this->ScaleBox).Object;
    pSVar5 = pSVar6;
    if (this_00 != (SScaleBox *)0x0) goto LAB_146a1d6f9;
  }
LAB_146a1d6d3:
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
LAB_146a1d6f9:
  SScaleBox::SetVAlign(this_00,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar6);
  return;
}

// StaticRegisterNativesUScaleBoxSlot @ 146a1ee40

void __cdecl UScaleBoxSlot::StaticRegisterNativesUScaleBoxSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UScaleBoxSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a24be0

void __thiscall UScaleBoxSlot::SynchronizeProperties(UScaleBoxSlot *this)

{
  SetHorizontalAlignment(this,(uint)(this->HorizontalAlignment).Value);
  SetVerticalAlignment(this,(uint)(this->VerticalAlignment).Value);
  return;
}

// execSetHorizontalAlignment @ 146a3d8c0

void __cdecl
UScaleBoxSlot::execSetHorizontalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetHorizontalAlignment((UScaleBoxSlot *)param_1,(uint)local_res10[0]);
  return;
}

// execSetPadding @ 146a40920

void __cdecl UScaleBoxSlot::execSetPadding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

// execSetVerticalAlignment @ 146a44360

void __cdecl UScaleBoxSlot::execSetVerticalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetVerticalAlignment((UScaleBoxSlot *)param_1,(uint)local_res10[0]);
  return;
}

