// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 25

// SetHorizontalAlignment_WrapperImpl @ 14695a9f0

void __cdecl UUniformGridSlot::SetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  FSlotBase *pFVar2;
  FSlotBase *this;
  
  bVar1 = *(byte *)param_2;
  pFVar2 = *(FSlotBase **)((longlong)param_1 + 0x48);
  *(byte *)((longlong)param_1 + 0x38) = bVar1;
  if (pFVar2 != (FSlotBase *)0x0) {
    if ((uint)pFVar2[1]._padding_ != (uint)bVar1) {
      *(uint *)&pFVar2[1]._padding_ = (uint)bVar1;
      this = (FSlotBase *)0x0;
      if (pFVar2 + 1 != (FSlotBase *)0x0) {
        this = pFVar2;
      }
      FSlotBase::Invalidate(this,Layout);
      return;
    }
  }
  return;
}

// SetVerticalAlignment_WrapperImpl @ 14695aa30

void __cdecl UUniformGridSlot::SetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  FSlotBase *this;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x39) = bVar1;
  this = *(FSlotBase **)((longlong)param_1 + 0x48);
  if ((this != (FSlotBase *)0x0) && (*(uint *)((longlong)&this[1]._padding_ + 4) != (uint)bVar1)) {
    *(uint *)((longlong)&this[1]._padding_ + 4) = (uint)bVar1;
    FSlotBase::Invalidate(this,Layout);
    return;
  }
  return;
}

// SetRow_WrapperImpl @ 14695aa60

void __cdecl UUniformGridSlot::SetRow_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  FSlotBase *this;
  
  iVar1 = *(int *)param_2;
  *(int *)((longlong)param_1 + 0x3c) = iVar1;
  this = *(FSlotBase **)((longlong)param_1 + 0x48);
  if ((this != (FSlotBase *)0x0) && (iVar1 != *(int *)((longlong)&this[1].Owner + 4))) {
    *(int *)((longlong)&this[1].Owner + 4) = iVar1;
    FSlotBase::Invalidate(this,Layout);
    return;
  }
  return;
}

// SetColumn_WrapperImpl @ 14695aa90

void __cdecl UUniformGridSlot::SetColumn_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  FSlotBase *this;
  
  iVar1 = *(int *)param_2;
  *(int *)((longlong)param_1 + 0x40) = iVar1;
  this = *(FSlotBase **)((longlong)param_1 + 0x48);
  if ((this != (FSlotBase *)0x0) && (iVar1 != *(int *)&this[1].Owner)) {
    *(int *)&this[1].Owner = iVar1;
    FSlotBase::Invalidate(this,Layout);
    return;
  }
  return;
}

// StaticClass @ 14695ab00

UClass * __cdecl UUniformGridSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUniformGridSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UniformGridSlot",
               &Z_Registration_Info_UClass_UUniformGridSlot.InnerSingleton,
               StaticRegisterNativesUUniformGridSlot,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UUniformGridSlot>,
               InternalVTableHelperCtorCaller<UUniformGridSlot>,local_res8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUniformGridSlot.InnerSingleton;
}

// UUniformGridSlot @ 14698e8d0

UUniformGridSlot * __thiscall
UUniformGridSlot::UUniformGridSlot(UUniformGridSlot *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UUniformGridSlot__6B_;
  return this;
}

// UUniformGridSlot @ 14698e910

UUniformGridSlot * __thiscall
UUniformGridSlot::UUniformGridSlot(UUniformGridSlot *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UUniformGridSlot__6B_;
  this->HorizontalAlignment = '\x01';
  this->VerticalAlignment = '\x01';
  this->Slot = (FSlot *)0x0;
  return this;
}

// ~UUniformGridSlot @ 146994890

void __thiscall UUniformGridSlot::~UUniformGridSlot(UUniformGridSlot *this)

{
  this->_padding_ = (longlong)&___7UVisual__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BuildSlot @ 1469a5000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UUniformGridSlot::BuildSlot(UUniformGridSlot *this,TSharedRef<SUniformGridPanel,1> *param_1)

{
  longlong *plVar1;
  FSharedReferencer<1> FVar2;
  FScopedWidgetSlotArguments *pFVar3;
  TSharedRef<SWidget,1> *pTVar4;
  int iVar5;
  int iVar6;
  FScopedWidgetSlotArguments *pFVar7;
  undefined1 auStack_118 [32];
  SWidget *local_f8;
  FSharedReferencer<1> local_f0 [2];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  TSharedRef<SWidget,1> local_d0;
  TSharedRef<SWidget,1> local_c0;
  FScopedWidgetSlotArguments local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar3 = SUniformGridPanel::AddSlot(param_1->Object,&local_a8,this->Column,this->Row);
  plVar1 = &pFVar3->_padding_;
  this->Slot = (FSlot *)pFVar3->_padding_;
  if ((longlong *)local_e0 != plVar1) {
    *(uint *)plVar1 = (uint)(this->HorizontalAlignment).Value;
    *(undefined1 *)((longlong)&pFVar3->_padding_ + 4) = 1;
  }
  pFVar7 = (FScopedWidgetSlotArguments *)0x0;
  if (plVar1 != (longlong *)0x0) {
    pFVar7 = pFVar3;
  }
  if ((longlong *)local_d8 != &pFVar7->_padding_) {
    *(uint *)&pFVar7->_padding_ = (uint)(this->VerticalAlignment).Value;
    *(undefined1 *)((longlong)&pFVar7->_padding_ + 4) = 1;
  }
  local_f8 = SNullWidget::NullWidget.Object;
  if (pFVar7 == (FScopedWidgetSlotArguments *)0xffffffffffffffe8) {
    pFVar7 = (FScopedWidgetSlotArguments *)0x0;
  }
  iVar6 = 0;
  if ((UWidget *)this->_padding_ == (UWidget *)0x0) {
    local_d0.Object = SNullWidget::NullWidget.Object;
    local_d0.SharedReferenceCount.ReferenceController =
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
    pTVar4 = &local_d0;
    iVar5 = iVar6;
    iVar6 = 1;
  }
  else {
    pTVar4 = UWidget::TakeWidget((UWidget *)this->_padding_,&local_c0);
    iVar5 = 2;
    local_f8 = pTVar4->Object;
  }
  FVar2.ReferenceController = local_d0.SharedReferenceCount.ReferenceController;
  local_f0[0].ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_f0[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f0[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_f0[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar7->_padding_ != &local_f8) {
    pFVar7->_padding_ = (longlong)local_f8;
    local_f8 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar7->_padding_,local_f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0[0].ReferenceController);
  if (iVar5 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c0.SharedReferenceCount.ReferenceController);
  }
  if (iVar6 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar2.ReferenceController);
  }
  TPanelChildren<SUniformGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetColumn @ 1469ce640

int __thiscall UUniformGridSlot::GetColumn(UUniformGridSlot *this)

{
  return this->Column;
}

// GetHorizontalAlignment @ 1469d1320

EHorizontalAlignment __thiscall UUniformGridSlot::GetHorizontalAlignment(UUniformGridSlot *this)

{
  return (EHorizontalAlignment)(this->HorizontalAlignment).Value;
}

// GetPrivateStaticClass @ 1469d6650

UClass * __cdecl UUniformGridSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUniformGridSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UniformGridSlot",
               &Z_Registration_Info_UClass_UUniformGridSlot.InnerSingleton,
               StaticRegisterNativesUUniformGridSlot,0x50,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UUniformGridSlot>,
               InternalVTableHelperCtorCaller<UUniformGridSlot>,local_res8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUniformGridSlot.InnerSingleton;
}

// GetRow @ 1469d6fb0

int __thiscall UUniformGridSlot::GetRow(UUniformGridSlot *this)

{
  return this->Row;
}

// GetVerticalAlignment @ 1469d9ce0

EVerticalAlignment __thiscall UUniformGridSlot::GetVerticalAlignment(UUniformGridSlot *this)

{
  return (EVerticalAlignment)(this->VerticalAlignment).Value;
}

// ReleaseSlateResources @ 146a0b7f0

void __thiscall UUniformGridSlot::ReleaseSlateResources(UUniformGridSlot *this,bool param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      (**(code **)(*(longlong *)this->_padding_ + 0x2b0))((longlong *)this->_padding_,param_1);
    }
    this->Slot = (FSlot *)0x0;
    return;
  }
  this->Slot = (FSlot *)0x0;
  return;
}

// SetColumn @ 146a124f0

void __thiscall UUniformGridSlot::SetColumn(UUniformGridSlot *this,int param_1)

{
  FSlot *this_00;
  
  this->Column = param_1;
  this_00 = this->Slot;
  if ((this_00 != (FSlot *)0x0) && (param_1 != this_00->Column)) {
    this_00->Column = param_1;
    FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    return;
  }
  return;
}

// SetHorizontalAlignment @ 146a154b0

void __thiscall
UUniformGridSlot::SetHorizontalAlignment(UUniformGridSlot *this,EHorizontalAlignment param_1)

{
  FSlot *pFVar1;
  FSlot *this_00;
  
  pFVar1 = this->Slot;
  (this->HorizontalAlignment).Value = (uchar)param_1;
  if ((pFVar1 != (FSlot *)0x0) && ((EHorizontalAlignment)pFVar1->_padding_ != param_1)) {
    *(EHorizontalAlignment *)&pFVar1->_padding_ = param_1;
    this_00 = (FSlot *)0x0;
    if (&pFVar1->_padding_ != (longlong *)0x0) {
      this_00 = pFVar1;
    }
    FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    return;
  }
  return;
}

// SetRow @ 146a19980

void __thiscall UUniformGridSlot::SetRow(UUniformGridSlot *this,int param_1)

{
  FSlot *this_00;
  
  this->Row = param_1;
  this_00 = this->Slot;
  if ((this_00 != (FSlot *)0x0) && (param_1 != this_00->Row)) {
    this_00->Row = param_1;
    FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    return;
  }
  return;
}

// SetVerticalAlignment @ 146a1d8b0

void __thiscall
UUniformGridSlot::SetVerticalAlignment(UUniformGridSlot *this,EVerticalAlignment param_1)

{
  FSlot *this_00;
  
  (this->VerticalAlignment).Value = (uchar)param_1;
  this_00 = this->Slot;
  if ((this_00 != (FSlot *)0x0) &&
     (*(EVerticalAlignment *)((longlong)&this_00->_padding_ + 4) != param_1)) {
    *(EVerticalAlignment *)((longlong)&this_00->_padding_ + 4) = param_1;
    FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    return;
  }
  return;
}

// StaticRegisterNativesUUniformGridSlot @ 146a1f2a0

void __cdecl UUniformGridSlot::StaticRegisterNativesUUniformGridSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UUniformGridSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a27370

void __thiscall UUniformGridSlot::SynchronizeProperties(UUniformGridSlot *this)

{
  longlong *plVar1;
  FSlot *pFVar2;
  uint uVar3;
  FSlot *this_00;
  
  pFVar2 = this->Slot;
  if ((pFVar2 != (FSlot *)0x0) && (this->Row != pFVar2->Row)) {
    pFVar2->Row = this->Row;
    FSlotBase::Invalidate((FSlotBase *)pFVar2,Layout);
  }
  pFVar2 = this->Slot;
  if ((pFVar2 != (FSlot *)0x0) && (this->Column != pFVar2->Column)) {
    pFVar2->Column = this->Column;
    FSlotBase::Invalidate((FSlotBase *)pFVar2,Layout);
  }
  pFVar2 = this->Slot;
  if (pFVar2 != (FSlot *)0x0) {
    plVar1 = &pFVar2->_padding_;
    uVar3 = (uint)(this->HorizontalAlignment).Value;
    if ((uint)*plVar1 != uVar3) {
      *(uint *)plVar1 = uVar3;
      this_00 = (FSlot *)0x0;
      if (plVar1 != (longlong *)0x0) {
        this_00 = pFVar2;
      }
      FSlotBase::Invalidate((FSlotBase *)this_00,Layout);
    }
  }
  pFVar2 = this->Slot;
  if ((pFVar2 != (FSlot *)0x0) &&
     (uVar3 = (uint)(this->VerticalAlignment).Value,
     *(uint *)((longlong)&pFVar2->_padding_ + 4) != uVar3)) {
    *(uint *)((longlong)&pFVar2->_padding_ + 4) = uVar3;
    FSlotBase::Invalidate((FSlotBase *)pFVar2,Layout);
    return;
  }
  return;
}

// execSetColumn @ 146a3b1c0

void __cdecl UUniformGridSlot::execSetColumn(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlotBase *this;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FSlotBase **)&param_1[1].field_0x20;
  *(int *)&param_1[1].field_0x18 = local_res8[0];
  if ((this != (FSlotBase *)0x0) && (local_res8[0] != *(int *)&this[1].Owner)) {
    *(int *)&this[1].Owner = local_res8[0];
    FSlotBase::Invalidate(this,Layout);
  }
  return;
}

// execSetHorizontalAlignment @ 146a3da90

void __cdecl
UUniformGridSlot::execSetHorizontalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlotBase *pFVar2;
  FSlotBase *this;
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
  pFVar2 = *(FSlotBase **)&param_1[1].field_0x20;
  param_1[1].field_0x10 = local_res8[0];
  if (pFVar2 != (FSlotBase *)0x0) {
    if ((uint)pFVar2[1]._padding_ != (uint)local_res8[0]) {
      *(uint *)&pFVar2[1]._padding_ = (uint)local_res8[0];
      this = (FSlotBase *)0x0;
      if (pFVar2 + 1 != (FSlotBase *)0x0) {
        this = pFVar2;
      }
      FSlotBase::Invalidate(this,Layout);
    }
  }
  return;
}

// execSetRow @ 146a41620

void __cdecl UUniformGridSlot::execSetRow(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlotBase *this;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FSlotBase **)&param_1[1].field_0x20;
  *(int *)&param_1[1].field_0x14 = local_res8[0];
  if ((this != (FSlotBase *)0x0) && (local_res8[0] != *(int *)((longlong)&this[1].Owner + 4))) {
    *(int *)((longlong)&this[1].Owner + 4) = local_res8[0];
    FSlotBase::Invalidate(this,Layout);
  }
  return;
}

// execSetVerticalAlignment @ 146a44520

void __cdecl
UUniformGridSlot::execSetVerticalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlotBase *this;
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
  this = *(FSlotBase **)&param_1[1].field_0x20;
  param_1[1].field_0x11 = local_res8[0];
  if ((this != (FSlotBase *)0x0) &&
     (*(uint *)((longlong)&this[1]._padding_ + 4) != (uint)local_res8[0])) {
    *(uint *)((longlong)&this[1]._padding_ + 4) = (uint)local_res8[0];
    FSlotBase::Invalidate(this,Layout);
  }
  return;
}

