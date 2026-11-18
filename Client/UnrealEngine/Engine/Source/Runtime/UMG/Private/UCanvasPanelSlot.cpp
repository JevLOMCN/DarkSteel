// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 51

// GetLayoutData_WrapperImpl @ 1468da3a0

void __cdecl UCanvasPanelSlot::GetLayoutData_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x40);
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x48);
  uVar3 = *(undefined8 *)((longlong)param_1 + 0x50);
  uVar4 = *(undefined8 *)((longlong)param_1 + 0x58);
  uVar5 = *(undefined8 *)((longlong)param_1 + 0x60);
  uVar6 = *(undefined8 *)((longlong)param_1 + 0x68);
  uVar7 = *(undefined8 *)((longlong)param_1 + 0x70);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x10) = uVar2;
  *(undefined8 *)((longlong)param_2 + 0x18) = uVar3;
  *(undefined8 *)((longlong)param_2 + 0x20) = uVar4;
  *(undefined8 *)((longlong)param_2 + 0x28) = uVar5;
  *(undefined8 *)((longlong)param_2 + 0x30) = uVar6;
  *(undefined8 *)((longlong)param_2 + 0x38) = uVar7;
  return;
}

// SetLayoutData_WrapperImpl @ 1468da3d0

void __cdecl UCanvasPanelSlot::SetLayoutData_WrapperImpl(void *param_1,void *param_2)

{
  FSlotBase *this;
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  EInvalidateWidgetReason EVar4;
  bool bVar5;
  FDestructionSentinel FStack_88;
  TVector2<double>_u_0 TStack_70;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  ForAnyElementType FStack_50;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_48;
  ForAnyElementType FStack_40;
  ulonglong uStack_38;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  this = *(FSlotBase **)((longlong)param_1 + 0x80);
  *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 0x50) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x58) = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x38);
  *(undefined8 *)((longlong)param_1 + 0x68) = *(undefined8 *)((longlong)param_2 + 0x30);
  *(undefined8 *)((longlong)param_1 + 0x70) = uVar1;
  if (this == (FSlotBase *)0x0) {
    return;
  }
  TStack_70._s_0.X = *(double *)((longlong)param_1 + 0x38);
  TStack_70._s_0.Y = (double)*(undefined8 *)((longlong)param_1 + 0x40);
  uStack_60 = CONCAT71(uStack_60._1_7_,1);
  auStack_58 = (undefined1  [8])0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  TStack_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  bVar2 = TAttribute<FMargin>::IdenticalTo
                    ((TAttribute<FMargin> *)(this + 1),(TAttribute<FMargin> *)&TStack_70._s_0);
  if (bVar2) goto LAB_146942e6c;
  bVar2 = TAttribute<FMargin>::IsBound((TAttribute<FMargin> *)(this + 1));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
             (FReadAccessScope *)&FStack_88);
  if ((TStack_48.AccessDetector.State._0_4_ == 0) ||
     (FStack_50.Data == (FScriptContainerElement *)0x0)) {
LAB_146942e16:
    bVar5 = false;
  }
  else {
    cVar3 = (**(code **)(*(longlong *)FStack_50.Data + 0x38))();
    bVar5 = true;
    if (cVar3 == '\0') goto LAB_146942e16;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&FStack_88);
  this[1]._padding_ = (longlong)TStack_70._s_0.X;
  this[1].Owner = (FChildren *)TStack_70._s_0.Y;
  *(undefined1 *)&this[1].Widget.Object = (undefined1)uStack_60;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this[1].Widget.SharedReferenceCount,
             (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_58);
  EVar4 = LayoutAndVolatility;
  if (bVar2 == bVar5) {
    EVar4 = Layout;
  }
  FSlotBase::Invalidate(this,EVar4);
LAB_146942e6c:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
             (FWriteAccessScope *)&FStack_88);
  if ((TStack_48.AccessDetector.State._0_4_ != 0) &&
     (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    TStack_48.AccessDetector.State =
         (FMRSWRecursiveAccessDetector)
         ((ulonglong)TStack_48.AccessDetector.State & 0xffffffff00000000);
  }
  if (FStack_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_88.Accessor,&FStack_88);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_58);
  uStack_60 = *(undefined8 *)((longlong)param_1 + 0x58);
  auStack_58 = *(undefined1 (*) [8])((longlong)param_1 + 0x60);
  TStack_70._s_0.X = *(double *)((longlong)param_1 + 0x48);
  TStack_70._s_0.Y = *(double *)((longlong)param_1 + 0x50);
  FStack_50.Data._0_1_ = 1;
  uStack_38 = 0;
  TStack_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  SConstraintCanvas::FSlot::SetAnchors
            (*(FSlot **)((longlong)param_1 + 0x80),(TAttribute<FAnchors> *)&TStack_70._s_0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_48,(FWriteAccessScope *)&FStack_88);
  if (((int)uStack_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
  }
  if (FStack_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_88.Accessor,&FStack_88);
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_48.AccessDetector);
  TStack_70._s_0.X = *(double *)((longlong)param_1 + 0x68);
  TStack_70._s_0.Y = *(double *)((longlong)param_1 + 0x70);
  uStack_60 = CONCAT71(uStack_60._1_7_,1);
  TStack_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  auStack_58 = (undefined1  [8])0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  SConstraintCanvas::FSlot::SetAlignment
            (*(FSlot **)((longlong)param_1 + 0x80),
             (TAttribute<UE::Math::TVector2<double>_> *)&TStack_70._s_0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
             (FWriteAccessScope *)&FStack_88);
  if ((TStack_48.AccessDetector.State._0_4_ != 0) &&
     (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    TStack_48.AccessDetector.State =
         (FMRSWRecursiveAccessDetector)
         ((ulonglong)TStack_48.AccessDetector.State & 0xffffffff00000000);
  }
  if (FStack_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_88.Accessor,&FStack_88);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_58);
  return;
}

// GetbAutoSize_WrapperImpl @ 1468da3e0

void __cdecl UCanvasPanelSlot::GetbAutoSize_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  
  bVar1 = GetAutoSize(param_1);
  *(bool *)param_2 = bVar1;
  return;
}

// SetbAutoSize_WrapperImpl @ 1468da400

void __cdecl UCanvasPanelSlot::SetbAutoSize_WrapperImpl(void *param_1,void *param_2)

{
  SetAutoSize(param_1,*(bool *)param_2);
  return;
}

// GetZOrder_WrapperImpl @ 1468da410

void __cdecl UCanvasPanelSlot::GetZOrder_WrapperImpl(void *param_1,void *param_2)

{
  if (*(longlong *)((longlong)param_1 + 0x80) != 0) {
    *(int *)param_2 = (int)*(float *)(*(longlong *)((longlong)param_1 + 0x80) + 0xe0);
    return;
  }
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x7c);
  return;
}

// SetZOrder_WrapperImpl @ 1468da440

void __cdecl UCanvasPanelSlot::SetZOrder_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)param_2;
  *(int *)((longlong)param_1 + 0x7c) = iVar1;
  if (*(FSlot **)((longlong)param_1 + 0x80) != (FSlot *)0x0) {
    SConstraintCanvas::FSlot::SetZOrder(*(FSlot **)((longlong)param_1 + 0x80),(float)iVar1);
    return;
  }
  return;
}

// StaticClass @ 1468da4b0

UClass * __cdecl UCanvasPanelSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCanvasPanelSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"CanvasPanelSlot",
               &Z_Registration_Info_UClass_UCanvasPanelSlot.InnerSingleton,
               StaticRegisterNativesUCanvasPanelSlot,0x88,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UCanvasPanelSlot>,
               InternalVTableHelperCtorCaller<UCanvasPanelSlot>,local_res8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCanvasPanelSlot.InnerSingleton;
}

// UCanvasPanelSlot @ 146900f10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCanvasPanelSlot * __thiscall
UCanvasPanelSlot::UCanvasPanelSlot(UCanvasPanelSlot *this,FVTableHelper *param_1)

{
  UPanelSlot::UPanelSlot((UPanelSlot *)this,param_1);
  this->_padding_ = (longlong)&___7UCanvasPanelSlot__6B_;
  (this->LayoutData).Offsets.Left = 0.0;
  (this->LayoutData).Offsets.Top = 0.0;
  (this->LayoutData).Offsets.Right = 0.0;
  (this->LayoutData).Offsets.Bottom = 0.0;
  (this->LayoutData).Anchors.Minimum.field0_0x0._s_0.X = 0.0;
  (this->LayoutData).Anchors.Minimum.field0_0x0._s_0.Y = 0.0;
  (this->LayoutData).Anchors.Maximum.field0_0x0._s_0.X = 0.0;
  (this->LayoutData).Anchors.Maximum.field0_0x0._s_0.Y = 0.0;
  (this->LayoutData).Alignment.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return this;
}

// UCanvasPanelSlot @ 146900f60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCanvasPanelSlot * __thiscall
UCanvasPanelSlot::UCanvasPanelSlot(UCanvasPanelSlot *this,FObjectInitializer *param_1)

{
  UPanelSlot::UPanelSlot((UPanelSlot *)this,param_1);
  this->_padding_ = (longlong)&___7UCanvasPanelSlot__6B_;
  this->Slot = (FSlot *)0x0;
  (this->LayoutData).Offsets.Left = 0.0;
  (this->LayoutData).Offsets.Top = 0.0;
  (this->LayoutData).Offsets.Right = 100.0;
  (this->LayoutData).Offsets.Bottom = 30.0;
  (this->LayoutData).Anchors.Minimum.field0_0x0._s_0.X = 0.0;
  (this->LayoutData).Anchors.Minimum.field0_0x0._s_0.Y = 0.0;
  (this->LayoutData).Anchors.Maximum.field0_0x0._s_0.X = 0.0;
  (this->LayoutData).Anchors.Maximum.field0_0x0._s_0.Y = 0.0;
  (this->LayoutData).Alignment.field0_0x0._s_0.X = 0.0;
  (this->LayoutData).Alignment.field0_0x0._s_0.Y = 0.0;
  this->bAutoSize = false;
  this->ZOrder = 0;
  return this;
}

// ~UCanvasPanelSlot @ 146904840

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCanvasPanelSlot::~UCanvasPanelSlot(UCanvasPanelSlot *this)

{
  this->_padding_ = (longlong)&___7UCanvasPanelSlot__6B_;
  UPanelSlot::~UPanelSlot((UPanelSlot *)this);
  return;
}

// BuildSlot @ 14690e200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UCanvasPanelSlot::BuildSlot(UCanvasPanelSlot *this,TSharedRef<SConstraintCanvas,1> *param_1)

{
  bool bVar1;
  bool bVar2;
  FSharedReferencer<1> FVar3;
  FScopedWidgetSlotArguments *pFVar4;
  TSharedRef<SWidget,1> *pTVar5;
  undefined1 auStack_1b8 [32];
  SWidget *local_198;
  FSharedReferencer<1> local_190 [2];
  TSharedRef<SWidget,1> local_180;
  TSharedRef<SWidget,1> local_170;
  FScopedWidgetSlotArguments local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  pFVar4 = SConstraintCanvas::AddSlot(param_1->Object,&local_158);
  this->Slot = (FSlot *)pFVar4->_padding_;
  local_198 = SNullWidget::NullWidget.Object;
  if ((UWidget *)this->_padding_ == (UWidget *)0x0) {
    local_180.Object = SNullWidget::NullWidget.Object;
    local_180.SharedReferenceCount.ReferenceController =
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
    pTVar5 = &local_180;
    bVar2 = true;
    bVar1 = false;
  }
  else {
    pTVar5 = UWidget::TakeWidget((UWidget *)this->_padding_,&local_170);
    bVar2 = false;
    bVar1 = true;
    local_198 = pTVar5->Object;
  }
  FVar3.ReferenceController = local_180.SharedReferenceCount.ReferenceController;
  local_190[0].ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
  if (local_190[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_190[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_190[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar4->_padding_ != &local_198) {
    pFVar4->_padding_ = (longlong)local_198;
    local_198 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar4->_padding_,local_190);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_190[0].ReferenceController);
  if (bVar1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_170.SharedReferenceCount.ReferenceController);
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar3.ReferenceController);
  }
  TPanelChildren<SConstraintCanvas::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_158);
  (**(code **)(this->_padding_ + 0x2b8))(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetAlignment @ 14691d560

TVector2<double> * __thiscall
UCanvasPanelSlot::GetAlignment(UCanvasPanelSlot *this,TVector2<double> *__return_storage_ptr__)

{
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FSlot *pFVar1;
  double dVar2;
  char cVar3;
  longlong *plVar4;
  double local_38;
  FMRSWRecursiveAccessDetector *pFStack_30;
  FReadAccessScope local_20;
  
  pFVar1 = this->Slot;
  if (pFVar1 == (FSlot *)0x0) {
    dVar2 = (this->LayoutData).Alignment.field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (this->LayoutData).Alignment.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    return __return_storage_ptr__;
  }
  this_00 = &(pFVar1->AlignmentAttr).Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FReadAccessScope *)&local_38);
  if ((*(int *)&(pFVar1->AlignmentAttr).Getter.field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(pFVar1->AlignmentAttr).Getter.field_0x8, plVar4 != (longlong *)0x0))
  {
    cVar3 = (**(code **)(*plVar4 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_20);
      if (*(int *)&(pFVar1->AlignmentAttr).Getter.field_0x10 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)&(pFVar1->AlignmentAttr).Getter.field_0x8;
      }
      (**(code **)(*plVar4 + 0x60))(plVar4,&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      (pFVar1->AlignmentAttr).Value.field0_0x0._s_0.X = local_38;
      (pFVar1->AlignmentAttr).Value.field0_0x0._s_0.Y = (double)pFStack_30;
      (__return_storage_ptr__->field0_0x0)._s_0.X = local_38;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)pFStack_30;
      return __return_storage_ptr__;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_38);
  dVar2 = (pFVar1->AlignmentAttr).Value.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pFVar1->AlignmentAttr).Value.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  return __return_storage_ptr__;
}

// GetAnchors @ 14691d7e0

FAnchors * __thiscall
UCanvasPanelSlot::GetAnchors(UCanvasPanelSlot *this,FAnchors *__return_storage_ptr__)

{
  FSlot *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  FReadAccessScope local_58;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  pFVar1 = this->Slot;
  if (pFVar1 != (FSlot *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(pFVar1->AnchorsAttr).Getter,&local_58);
    if (((*(int *)&(pFVar1->AnchorsAttr).Getter.field_0x10 == 0) ||
        (plVar7 = *(longlong **)&(pFVar1->AnchorsAttr).Getter.field_0x8, plVar7 == (longlong *)0x0))
       || (cVar6 = (**(code **)(*plVar7 + 0x38))(), cVar6 == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(pFVar1->AnchorsAttr).Getter,&local_58);
      if (*(int *)&(pFVar1->AnchorsAttr).Getter.field_0x10 == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)&(pFVar1->AnchorsAttr).Getter.field_0x8;
      }
      (**(code **)(*plVar7 + 0x60))(plVar7,&local_40);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      (pFVar1->AnchorsAttr).Value.Minimum.field0_0x0._s_0.X = local_40;
      (pFVar1->AnchorsAttr).Value.Minimum.field0_0x0._s_0.Y = dStack_38;
      (pFVar1->AnchorsAttr).Value.Maximum.field0_0x0._s_0.X = local_30;
      (pFVar1->AnchorsAttr).Value.Maximum.field0_0x0._s_0.Y = dStack_28;
    }
    dVar2 = (pFVar1->AnchorsAttr).Value.Minimum.field0_0x0._s_0.Y;
    dVar3 = (pFVar1->AnchorsAttr).Value.Maximum.field0_0x0._s_0.X;
    dVar4 = (pFVar1->AnchorsAttr).Value.Maximum.field0_0x0._s_0.Y;
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.X =
         (pFVar1->AnchorsAttr).Value.Minimum.field0_0x0._s_0.X;
    (__return_storage_ptr__->Minimum).field0_0x0._s_0.Y = dVar2;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.X = dVar3;
    (__return_storage_ptr__->Maximum).field0_0x0._s_0.Y = dVar4;
    return __return_storage_ptr__;
  }
  dVar2 = (this->LayoutData).Anchors.Minimum.field0_0x0._s_0.Y;
  dVar3 = (this->LayoutData).Anchors.Maximum.field0_0x0._s_0.X;
  dVar4 = (this->LayoutData).Anchors.Maximum.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Minimum).field0_0x0._s_0.X =
       (this->LayoutData).Anchors.Minimum.field0_0x0._s_0.X;
  (__return_storage_ptr__->Minimum).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->Maximum).field0_0x0._s_0.X = dVar3;
  (__return_storage_ptr__->Maximum).field0_0x0._s_0.Y = dVar4;
  return __return_storage_ptr__;
}

// GetAutoSize @ 14691da70

bool __thiscall UCanvasPanelSlot::GetAutoSize(UCanvasPanelSlot *this)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FSlot *pFVar1;
  char cVar2;
  bool bVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  pFVar1 = this->Slot;
  if (pFVar1 == (FSlot *)0x0) {
    return this->bAutoSize;
  }
  this_00 = &(pFVar1->AutoSizeAttr).Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
  if ((*(int *)&(pFVar1->AutoSizeAttr).Getter.field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(pFVar1->AutoSizeAttr).Getter.field_0x8, plVar4 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar4 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
      if (*(int *)&(pFVar1->AutoSizeAttr).Getter.field_0x10 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)&(pFVar1->AutoSizeAttr).Getter.field_0x8;
      }
      bVar3 = (bool)(**(code **)(*plVar4 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      (pFVar1->AutoSizeAttr).Value = bVar3;
      return bVar3;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (pFVar1->AutoSizeAttr).Value;
}

// GetLayout @ 14691e9f0

FAnchorData * __thiscall
UCanvasPanelSlot::GetLayout(UCanvasPanelSlot *this,FAnchorData *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = (this->LayoutData).Offsets.Top;
  fVar6 = (this->LayoutData).Offsets.Right;
  fVar7 = (this->LayoutData).Offsets.Bottom;
  dVar1 = (this->LayoutData).Anchors.Minimum.field0_0x0._s_0.X;
  dVar2 = (this->LayoutData).Anchors.Minimum.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Offsets).Left = (this->LayoutData).Offsets.Left;
  (__return_storage_ptr__->Offsets).Top = fVar5;
  (__return_storage_ptr__->Offsets).Right = fVar6;
  (__return_storage_ptr__->Offsets).Bottom = fVar7;
  dVar3 = (this->LayoutData).Anchors.Maximum.field0_0x0._s_0.X;
  dVar4 = (this->LayoutData).Anchors.Maximum.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Anchors).Minimum.field0_0x0._s_0.X = dVar1;
  (__return_storage_ptr__->Anchors).Minimum.field0_0x0._s_0.Y = dVar2;
  dVar1 = (this->LayoutData).Alignment.field0_0x0._s_0.X;
  dVar2 = (this->LayoutData).Alignment.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Anchors).Maximum.field0_0x0._s_0.X = dVar3;
  (__return_storage_ptr__->Anchors).Maximum.field0_0x0._s_0.Y = dVar4;
  (__return_storage_ptr__->Alignment).field0_0x0._s_0.X = dVar1;
  (__return_storage_ptr__->Alignment).field0_0x0._s_0.Y = dVar2;
  return __return_storage_ptr__;
}

// GetOffsets @ 146920170

FMargin * __thiscall
UCanvasPanelSlot::GetOffsets(UCanvasPanelSlot *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (this->Slot != (FSlot *)0x0) {
    SConstraintCanvas::FSlot::GetOffset(this->Slot,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  fVar1 = (this->LayoutData).Offsets.Top;
  fVar2 = (this->LayoutData).Offsets.Right;
  fVar3 = (this->LayoutData).Offsets.Bottom;
  __return_storage_ptr__->Left = (this->LayoutData).Offsets.Left;
  __return_storage_ptr__->Top = fVar1;
  __return_storage_ptr__->Right = fVar2;
  __return_storage_ptr__->Bottom = fVar3;
  return __return_storage_ptr__;
}

// GetPosition @ 146920d90

TVector2<double> * __thiscall
UCanvasPanelSlot::GetPosition(UCanvasPanelSlot *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  FMargin local_18;
  
  if (this->Slot != (FSlot *)0x0) {
    SConstraintCanvas::FSlot::GetOffset(this->Slot,&local_18);
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_18.Left;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_18.Top;
    return __return_storage_ptr__;
  }
  fVar1 = (this->LayoutData).Offsets.Top;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(this->LayoutData).Offsets.Left;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146921db0

UClass * __cdecl UCanvasPanelSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCanvasPanelSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"CanvasPanelSlot",
               &Z_Registration_Info_UClass_UCanvasPanelSlot.InnerSingleton,
               StaticRegisterNativesUCanvasPanelSlot,0x88,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UCanvasPanelSlot>,
               InternalVTableHelperCtorCaller<UCanvasPanelSlot>,local_res8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCanvasPanelSlot.InnerSingleton;
}

// GetSize @ 146924120

TVector2<double> * __thiscall
UCanvasPanelSlot::GetSize(UCanvasPanelSlot *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  FMargin local_18;
  
  if (this->Slot != (FSlot *)0x0) {
    SConstraintCanvas::FSlot::GetOffset(this->Slot,&local_18);
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_18.Right;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_18.Bottom;
    return __return_storage_ptr__;
  }
  fVar1 = (this->LayoutData).Offsets.Bottom;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(this->LayoutData).Offsets.Right;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// GetZOrder @ 146927b90

int __thiscall UCanvasPanelSlot::GetZOrder(UCanvasPanelSlot *this)

{
  if (this->Slot != (FSlot *)0x0) {
    return (int)this->Slot->ZOrder;
  }
  return this->ZOrder;
}

// ReleaseSlateResources @ 14693acf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCanvasPanelSlot::ReleaseSlateResources(UCanvasPanelSlot *this,bool param_1)

{
  UPanelSlot::ReleaseSlateResources((UPanelSlot *)this,param_1);
  this->Slot = (FSlot *)0x0;
  return;
}

// SetAlignment @ 146941b50

void __thiscall UCanvasPanelSlot::SetAlignment(UCanvasPanelSlot *this,TVector2<double> *param_1)

{
  FDestructionSentinel local_58;
  TVector2<double>_u_0 local_40;
  undefined1 local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_40._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_40._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  (this->LayoutData).Alignment.field0_0x0._s_0.X = local_40._s_0.X;
  (this->LayoutData).Alignment.field0_0x0._s_0.Y = local_40._s_0.Y;
  if (this->Slot != (FSlot *)0x0) {
    local_30 = 1;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SConstraintCanvas::FSlot::SetAlignment
              (this->Slot,(TAttribute<UE::Math::TVector2<double>_> *)&local_40._s_0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_58);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetAnchors @ 146941e20

void __thiscall UCanvasPanelSlot::SetAnchors(UCanvasPanelSlot *this,FAnchors *param_1)

{
  FDestructionSentinel local_68;
  TVector2<double>_u_0 local_50;
  double local_40;
  double dStack_38;
  undefined1 local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_50._s_0.X = (param_1->Minimum).field0_0x0._s_0.X;
  local_50._s_0.Y = (param_1->Minimum).field0_0x0._s_0.Y;
  local_40 = (param_1->Maximum).field0_0x0._s_0.X;
  dStack_38 = (param_1->Maximum).field0_0x0._s_0.Y;
  (this->LayoutData).Anchors.Minimum.field0_0x0._s_0.X = local_50._s_0.X;
  (this->LayoutData).Anchors.Minimum.field0_0x0._s_0.Y = local_50._s_0.Y;
  (this->LayoutData).Anchors.Maximum.field0_0x0._s_0.X = local_40;
  (this->LayoutData).Anchors.Maximum.field0_0x0._s_0.Y = dStack_38;
  if (this->Slot != (FSlot *)0x0) {
    local_30 = 1;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SConstraintCanvas::FSlot::SetAnchors(this->Slot,(TAttribute<FAnchors> *)&local_50._s_0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_68);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetAutoSize @ 146941f20

void __thiscall UCanvasPanelSlot::SetAutoSize(UCanvasPanelSlot *this,bool param_1)

{
  FSlot *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->bAutoSize = param_1;
  this_00 = this->Slot;
  if (this_00 != (FSlot *)0x0) {
    local_18 = 0;
    local_30[1] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[0] = param_1;
    FSlotBase::SetAttribute<bool,bool>
              ((FSlotBase *)this_00,&this_00->AutoSizeAttr,(TAttribute<bool> *)local_30,Layout);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetLayout @ 146942d40

void __thiscall UCanvasPanelSlot::SetLayout(UCanvasPanelSlot *this,FAnchorData *param_1)

{
  FSlot *this_00;
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  EInvalidateWidgetReason EVar7;
  bool bVar8;
  FDestructionSentinel local_88;
  TVector2<double>_u_0 local_70;
  double local_60;
  undefined1 auStack_58 [8];
  ForAnyElementType FStack_50;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType FStack_40;
  ulonglong local_38;
  
  fVar2 = (param_1->Offsets).Top;
  fVar3 = (param_1->Offsets).Right;
  fVar4 = (param_1->Offsets).Bottom;
  this_00 = this->Slot;
  (this->LayoutData).Offsets.Left = (param_1->Offsets).Left;
  (this->LayoutData).Offsets.Top = fVar2;
  (this->LayoutData).Offsets.Right = fVar3;
  (this->LayoutData).Offsets.Bottom = fVar4;
  dVar1 = (param_1->Anchors).Minimum.field0_0x0._s_0.Y;
  (this->LayoutData).Anchors.Minimum.field0_0x0._s_0.X =
       (param_1->Anchors).Minimum.field0_0x0._s_0.X;
  (this->LayoutData).Anchors.Minimum.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Anchors).Maximum.field0_0x0._s_0.Y;
  (this->LayoutData).Anchors.Maximum.field0_0x0._s_0.X =
       (param_1->Anchors).Maximum.field0_0x0._s_0.X;
  (this->LayoutData).Anchors.Maximum.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Alignment).field0_0x0._s_0.Y;
  (this->LayoutData).Alignment.field0_0x0._s_0.X = (param_1->Alignment).field0_0x0._s_0.X;
  (this->LayoutData).Alignment.field0_0x0._s_0.Y = dVar1;
  if (this_00 == (FSlot *)0x0) {
    return;
  }
  local_70._s_0.X = (double)*(undefined8 *)&(this->LayoutData).Offsets;
  local_70._s_0.Y = (double)*(undefined8 *)&(this->LayoutData).Offsets.Right;
  local_60 = (double)CONCAT71(local_60._1_7_,1);
  auStack_58 = (undefined1  [8])0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  bVar5 = TAttribute<FMargin>::IdenticalTo
                    (&this_00->OffsetAttr,(TAttribute<FMargin> *)&local_70._s_0);
  if (bVar5) goto LAB_146942e6c;
  bVar5 = TAttribute<FMargin>::IsBound(&this_00->OffsetAttr);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
             (FReadAccessScope *)&local_88);
  if ((local_48.AccessDetector.State._0_4_ == 0) ||
     (FStack_50.Data == (FScriptContainerElement *)0x0)) {
LAB_146942e16:
    bVar8 = false;
  }
  else {
    cVar6 = (**(code **)(*(longlong *)FStack_50.Data + 0x38))();
    bVar8 = true;
    if (cVar6 == '\0') goto LAB_146942e16;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_88);
  *(double *)&(this_00->OffsetAttr).Value = local_70._s_0.X;
  *(double *)&(this_00->OffsetAttr).Value.Right = local_70._s_0.Y;
  (this_00->OffsetAttr).bIsSet = local_60._0_1_;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this_00->OffsetAttr).Getter,
             (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_58);
  EVar7 = LayoutAndVolatility;
  if (bVar5 == bVar8) {
    EVar7 = Layout;
  }
  FSlotBase::Invalidate((FSlotBase *)this_00,EVar7);
LAB_146942e6c:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
             (FWriteAccessScope *)&local_88);
  if ((local_48.AccessDetector.State._0_4_ != 0) &&
     (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48.AccessDetector.State =
         (FMRSWRecursiveAccessDetector)
         ((ulonglong)local_48.AccessDetector.State & 0xffffffff00000000);
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_58);
  local_60 = (this->LayoutData).Anchors.Maximum.field0_0x0._s_0.X;
  auStack_58 = (undefined1  [8])(this->LayoutData).Anchors.Maximum.field0_0x0._s_0.Y;
  local_70._s_0.X = (this->LayoutData).Anchors.Minimum.field0_0x0._s_0.X;
  local_70._s_0.Y = (this->LayoutData).Anchors.Minimum.field0_0x0._s_0.Y;
  FStack_50.Data._0_1_ = 1;
  local_38 = 0;
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  SConstraintCanvas::FSlot::SetAnchors(this->Slot,(TAttribute<FAnchors> *)&local_70._s_0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_88);
  if (((int)local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
    local_38 = local_38 & 0xffffffff00000000;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  local_70._s_0.X = (this->LayoutData).Alignment.field0_0x0._s_0.X;
  local_70._s_0.Y = (this->LayoutData).Alignment.field0_0x0._s_0.Y;
  local_60 = (double)CONCAT71(local_60._1_7_,1);
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  auStack_58 = (undefined1  [8])0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  SConstraintCanvas::FSlot::SetAlignment
            (this->Slot,(TAttribute<UE::Math::TVector2<double>_> *)&local_70._s_0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_58,
             (FWriteAccessScope *)&local_88);
  if ((local_48.AccessDetector.State._0_4_ != 0) &&
     (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48.AccessDetector.State =
         (FMRSWRecursiveAccessDetector)
         ((ulonglong)local_48.AccessDetector.State & 0xffffffff00000000);
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_58);
  return;
}

// SetMaximum @ 146943530

void __thiscall UCanvasPanelSlot::SetMaximum(UCanvasPanelSlot *this,TVector2<double> *param_1)

{
  FSlot *this_00;
  double dVar1;
  FDestructionSentinel local_68;
  TVector2<double>_u_0 local_50;
  double local_40;
  double dStack_38;
  undefined1 local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  this_00 = this->Slot;
  (this->LayoutData).Anchors.Maximum.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->LayoutData).Anchors.Maximum.field0_0x0._s_0.Y = dVar1;
  if (this_00 != (FSlot *)0x0) {
    local_40 = (this->LayoutData).Anchors.Maximum.field0_0x0._s_0.X;
    dStack_38 = (this->LayoutData).Anchors.Maximum.field0_0x0._s_0.Y;
    local_30 = 1;
    local_50._s_0.X = (this->LayoutData).Anchors.Minimum.field0_0x0._s_0.X;
    local_50._s_0.Y = (this->LayoutData).Anchors.Minimum.field0_0x0._s_0.Y;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SConstraintCanvas::FSlot::SetAnchors(this_00,(TAttribute<FAnchors> *)&local_50._s_0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_68);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetMinimum @ 146943610

void __thiscall UCanvasPanelSlot::SetMinimum(UCanvasPanelSlot *this,TVector2<double> *param_1)

{
  FSlot *this_00;
  FDestructionSentinel local_68;
  TVector2<double>_u_0 local_50;
  double local_40;
  double dStack_38;
  undefined1 local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_50._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_50._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  this_00 = this->Slot;
  (this->LayoutData).Anchors.Minimum.field0_0x0._s_0.X = local_50._s_0.X;
  (this->LayoutData).Anchors.Minimum.field0_0x0._s_0.Y = local_50._s_0.Y;
  if (this_00 != (FSlot *)0x0) {
    local_40 = (this->LayoutData).Anchors.Maximum.field0_0x0._s_0.X;
    dStack_38 = (this->LayoutData).Anchors.Maximum.field0_0x0._s_0.Y;
    local_30 = 1;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SConstraintCanvas::FSlot::SetAnchors(this_00,(TAttribute<FAnchors> *)&local_50._s_0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_68);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetOffsets @ 146943840

void __thiscall UCanvasPanelSlot::SetOffsets(UCanvasPanelSlot *this,FMargin *param_1)

{
  FSlot *this_00;
  bool bVar1;
  char cVar2;
  EInvalidateWidgetReason EVar3;
  bool bVar4;
  FDestructionSentinel local_68;
  undefined1 local_50 [24];
  undefined1 local_38 [8];
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  local_50._0_4_ = param_1->Left;
  local_50._4_4_ = param_1->Top;
  local_50._8_4_ = param_1->Right;
  local_50._12_4_ = param_1->Bottom;
  this_00 = this->Slot;
  (this->LayoutData).Offsets.Left = (float)local_50._0_4_;
  (this->LayoutData).Offsets.Top = (float)local_50._4_4_;
  (this->LayoutData).Offsets.Right = (float)local_50._8_4_;
  (this->LayoutData).Offsets.Bottom = (float)local_50._12_4_;
  if (this_00 != (FSlot *)0x0) {
    local_28 = 0;
    local_50[0x10] = true;
    local_38 = (undefined1  [8])0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    bVar1 = TAttribute<FMargin>::IdenticalTo(&this_00->OffsetAttr,(TAttribute<FMargin> *)local_50);
    if (!bVar1) {
      bVar1 = TAttribute<FMargin>::IsBound(&this_00->OffsetAttr);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
                 (FReadAccessScope *)&local_68);
      if ((((int)local_28 == 0) || (FStack_30.Data == (FScriptContainerElement *)0x0)) ||
         (cVar2 = (**(code **)(*(longlong *)FStack_30.Data + 0x38))(), cVar2 == '\0')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_68);
      (this_00->OffsetAttr).Value.Left = (float)local_50._0_4_;
      (this_00->OffsetAttr).Value.Top = (float)local_50._4_4_;
      (this_00->OffsetAttr).Value.Right = (float)local_50._8_4_;
      (this_00->OffsetAttr).Value.Bottom = (float)local_50._12_4_;
      (this_00->OffsetAttr).bIsSet = local_50[0x10];
      TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                (&(this_00->OffsetAttr).Getter,
                 (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_38);
      EVar3 = LayoutAndVolatility;
      if (bVar1 == bVar4) {
        EVar3 = Layout;
      }
      FSlotBase::Invalidate((FSlotBase *)this_00,EVar3);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_68);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
    return;
  }
  return;
}

// SetPosition @ 146943db0

void __thiscall UCanvasPanelSlot::SetPosition(UCanvasPanelSlot *this,TVector2<double> *param_1)

{
  double dVar1;
  FSlot *this_00;
  bool bVar2;
  char cVar3;
  EInvalidateWidgetReason EVar4;
  bool bVar5;
  FDestructionSentinel local_68;
  undefined1 local_50 [24];
  undefined1 local_38 [8];
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  this_00 = this->Slot;
  (this->LayoutData).Offsets.Left = (float)(param_1->field0_0x0)._s_0.X;
  (this->LayoutData).Offsets.Top = (float)dVar1;
  if (this_00 != (FSlot *)0x0) {
    local_50._0_4_ = (this->LayoutData).Offsets.Left;
    local_50._4_4_ = (this->LayoutData).Offsets.Top;
    local_50._8_4_ = (this->LayoutData).Offsets.Right;
    local_50._12_4_ = (this->LayoutData).Offsets.Bottom;
    local_50[0x10] = true;
    local_28 = 0;
    local_38 = (undefined1  [8])0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    bVar2 = TAttribute<FMargin>::IdenticalTo(&this_00->OffsetAttr,(TAttribute<FMargin> *)local_50);
    if (!bVar2) {
      bVar2 = TAttribute<FMargin>::IsBound(&this_00->OffsetAttr);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
                 (FReadAccessScope *)&local_68);
      if ((((int)local_28 == 0) || (FStack_30.Data == (FScriptContainerElement *)0x0)) ||
         (cVar3 = (**(code **)(*(longlong *)FStack_30.Data + 0x38))(), cVar3 == '\0')) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_68);
      (this_00->OffsetAttr).Value.Left = (float)local_50._0_4_;
      (this_00->OffsetAttr).Value.Top = (float)local_50._4_4_;
      (this_00->OffsetAttr).Value.Right = (float)local_50._8_4_;
      (this_00->OffsetAttr).Value.Bottom = (float)local_50._12_4_;
      (this_00->OffsetAttr).bIsSet = local_50[0x10];
      TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                (&(this_00->OffsetAttr).Getter,
                 (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_38);
      EVar4 = LayoutAndVolatility;
      if (bVar2 == bVar5) {
        EVar4 = Layout;
      }
      FSlotBase::Invalidate((FSlotBase *)this_00,EVar4);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_68);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
    return;
  }
  return;
}

// SetSize @ 1469440f0

void __thiscall UCanvasPanelSlot::SetSize(UCanvasPanelSlot *this,TVector2<double> *param_1)

{
  double dVar1;
  FSlot *this_00;
  bool bVar2;
  char cVar3;
  EInvalidateWidgetReason EVar4;
  bool bVar5;
  FDestructionSentinel local_68;
  undefined1 local_50 [24];
  undefined1 local_38 [8];
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  this_00 = this->Slot;
  (this->LayoutData).Offsets.Right = (float)(param_1->field0_0x0)._s_0.X;
  (this->LayoutData).Offsets.Bottom = (float)dVar1;
  if (this_00 != (FSlot *)0x0) {
    local_50._0_4_ = (this->LayoutData).Offsets.Left;
    local_50._4_4_ = (this->LayoutData).Offsets.Top;
    local_50._8_4_ = (this->LayoutData).Offsets.Right;
    local_50._12_4_ = (this->LayoutData).Offsets.Bottom;
    local_50[0x10] = true;
    local_28 = 0;
    local_38 = (undefined1  [8])0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    bVar2 = TAttribute<FMargin>::IdenticalTo(&this_00->OffsetAttr,(TAttribute<FMargin> *)local_50);
    if (!bVar2) {
      bVar2 = TAttribute<FMargin>::IsBound(&this_00->OffsetAttr);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
                 (FReadAccessScope *)&local_68);
      if ((((int)local_28 == 0) || (FStack_30.Data == (FScriptContainerElement *)0x0)) ||
         (cVar3 = (**(code **)(*(longlong *)FStack_30.Data + 0x38))(), cVar3 == '\0')) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_68);
      (this_00->OffsetAttr).Value.Left = (float)local_50._0_4_;
      (this_00->OffsetAttr).Value.Top = (float)local_50._4_4_;
      (this_00->OffsetAttr).Value.Right = (float)local_50._8_4_;
      (this_00->OffsetAttr).Value.Bottom = (float)local_50._12_4_;
      (this_00->OffsetAttr).bIsSet = local_50[0x10];
      TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                (&(this_00->OffsetAttr).Getter,
                 (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_38);
      EVar4 = LayoutAndVolatility;
      if (bVar2 == bVar5) {
        EVar4 = Layout;
      }
      FSlotBase::Invalidate((FSlotBase *)this_00,EVar4);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_68);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
    return;
  }
  return;
}

// SetZOrder @ 146944c20

void __thiscall UCanvasPanelSlot::SetZOrder(UCanvasPanelSlot *this,int param_1)

{
  this->ZOrder = param_1;
  if (this->Slot != (FSlot *)0x0) {
    SConstraintCanvas::FSlot::SetZOrder(this->Slot,(float)param_1);
    return;
  }
  return;
}

// StaticRegisterNativesUCanvasPanelSlot @ 1469457b0

void __cdecl UCanvasPanelSlot::StaticRegisterNativesUCanvasPanelSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x12;
  local_18.DataPtr = Z_Construct_UClass_UCanvasPanelSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146947c40

void __thiscall UCanvasPanelSlot::SynchronizeProperties(UCanvasPanelSlot *this)

{
  TVector2<double>_u_0 local_28;
  double local_18;
  double dStack_10;
  
  local_28._s_0.X = (double)*(undefined8 *)&(this->LayoutData).Offsets;
  local_28._s_0.Y = (double)*(undefined8 *)&(this->LayoutData).Offsets.Right;
  SetOffsets(this,(FMargin *)&local_28._s_0);
  local_28._s_0.X = (this->LayoutData).Anchors.Minimum.field0_0x0._s_0.X;
  local_28._s_0.Y = (this->LayoutData).Anchors.Minimum.field0_0x0._s_0.Y;
  local_18 = (this->LayoutData).Anchors.Maximum.field0_0x0._s_0.X;
  dStack_10 = (this->LayoutData).Anchors.Maximum.field0_0x0._s_0.Y;
  SetAnchors(this,(FAnchors *)&local_28._s_0);
  local_28._s_0.X = (this->LayoutData).Alignment.field0_0x0._s_0.X;
  local_28._s_0.Y = (this->LayoutData).Alignment.field0_0x0._s_0.Y;
  SetAlignment(this,(TVector2<double> *)&local_28._s_0);
  SetAutoSize(this,this->bAutoSize);
  if (this->Slot != (FSlot *)0x0) {
    SConstraintCanvas::FSlot::SetZOrder(this->Slot,(float)this->ZOrder);
    return;
  }
  return;
}

// execGetAlignment @ 146951670

void __cdecl UCanvasPanelSlot::execGetAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  plVar3 = (longlong *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)&param_1[3].field_0x8;
  if (lVar1 == 0) {
    local_38.DestructionSentinel.AccessType = *(EAccessType *)&param_1[2].field_0x18;
    local_38.DestructionSentinel._4_4_ = *(undefined4 *)&param_1[2].field_0x1c;
    local_38.DestructionSentinel.Accessor._0_4_ = *(undefined4 *)&param_1[2].field_0x20;
    local_38.DestructionSentinel.Accessor._4_4_ = *(undefined4 *)&param_1[2].field_0x24;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0xa8),&local_38);
    if ((*(int *)(lVar1 + 0xb8) != 0) && (*(longlong **)(lVar1 + 0xb0) != (longlong *)0x0)) {
      cVar2 = (**(code **)(**(longlong **)(lVar1 + 0xb0) + 0x38))();
      if (cVar2 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_38);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0xa8),
                   &local_20);
        if (*(int *)(lVar1 + 0xb8) != 0) {
          plVar3 = *(longlong **)(lVar1 + 0xb0);
        }
        (**(code **)(*plVar3 + 0x60))(plVar3,&local_38);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_20);
        *(EAccessType *)(lVar1 + 0x90) = local_38.DestructionSentinel.AccessType;
        *(undefined4 *)(lVar1 + 0x94) = local_38.DestructionSentinel._4_4_;
        *(undefined4 *)(lVar1 + 0x98) = local_38.DestructionSentinel.Accessor._0_4_;
        *(undefined4 *)(lVar1 + 0x9c) = local_38.DestructionSentinel.Accessor._4_4_;
        goto LAB_14695173f;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    local_38.DestructionSentinel.AccessType = *(EAccessType *)(lVar1 + 0x90);
    local_38.DestructionSentinel._4_4_ = *(undefined4 *)(lVar1 + 0x94);
    local_38.DestructionSentinel.Accessor._0_4_ = *(undefined4 *)(lVar1 + 0x98);
    local_38.DestructionSentinel.Accessor._4_4_ = *(undefined4 *)(lVar1 + 0x9c);
  }
LAB_14695173f:
  *(EAccessType *)param_3 = local_38.DestructionSentinel.AccessType;
  *(undefined4 *)((longlong)param_3 + 4) = local_38.DestructionSentinel._4_4_;
  *(undefined4 *)((longlong)param_3 + 8) = local_38.DestructionSentinel.Accessor._0_4_;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_38.DestructionSentinel.Accessor._4_4_;
  return;
}

// execGetAnchors @ 146951760

void __cdecl UCanvasPanelSlot::execGetAnchors(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  FReadAccessScope local_58;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  plVar4 = (longlong *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)&param_1[3].field_0x8;
  if (lVar1 == 0) {
    uVar5 = *(undefined4 *)&param_1[1].field_0x20;
    uVar6 = *(undefined4 *)&param_1[1].field_0x24;
    uVar7 = *(undefined4 *)(param_1 + 2);
    uVar8 = *(undefined4 *)&param_1[2].field_0x4;
    uVar9 = *(undefined4 *)&param_1[2].field_0x8;
    uVar10 = *(undefined4 *)&param_1[2].field_0xc;
    uVar11 = *(undefined4 *)&param_1[2].field_0x10;
    uVar12 = *(undefined4 *)&param_1[2].field_0x14;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x78),&local_58);
    if (((*(int *)(lVar1 + 0x88) == 0) || (*(longlong **)(lVar1 + 0x80) == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x80) + 0x38))(), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    if (bVar2) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x78),&local_58)
      ;
      if (*(int *)(lVar1 + 0x88) != 0) {
        plVar4 = *(longlong **)(lVar1 + 0x80);
      }
      (**(code **)(*plVar4 + 0x60))(plVar4,&local_40);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      *(undefined8 *)(lVar1 + 0x50) = local_40;
      *(undefined8 *)(lVar1 + 0x58) = uStack_38;
      *(undefined8 *)(lVar1 + 0x60) = local_30;
      *(undefined8 *)(lVar1 + 0x68) = uStack_28;
    }
    uVar5 = *(undefined4 *)(lVar1 + 0x50);
    uVar6 = *(undefined4 *)(lVar1 + 0x54);
    uVar7 = *(undefined4 *)(lVar1 + 0x58);
    uVar8 = *(undefined4 *)(lVar1 + 0x5c);
    uVar9 = *(undefined4 *)(lVar1 + 0x60);
    uVar10 = *(undefined4 *)(lVar1 + 100);
    uVar11 = *(undefined4 *)(lVar1 + 0x68);
    uVar12 = *(undefined4 *)(lVar1 + 0x6c);
  }
  *(undefined4 *)param_3 = uVar5;
  *(undefined4 *)((longlong)param_3 + 4) = uVar6;
  *(undefined4 *)((longlong)param_3 + 8) = uVar7;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar8;
  *(undefined4 *)((longlong)param_3 + 0x10) = uVar9;
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar10;
  *(undefined4 *)((longlong)param_3 + 0x18) = uVar11;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar12;
  return;
}

// execGetAutoSize @ 146951890

void __cdecl UCanvasPanelSlot::execGetAutoSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = GetAutoSize((UCanvasPanelSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execGetLayout @ 146951ae0

void __cdecl UCanvasPanelSlot::execGetLayout(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[1].field_0x18;
  uVar2 = *(undefined8 *)&param_1[1].field_0x20;
  uVar3 = *(undefined8 *)(param_1 + 2);
  uVar4 = *(undefined8 *)&param_1[2].field_0x8;
  uVar5 = *(undefined8 *)&param_1[2].field_0x10;
  uVar6 = *(undefined8 *)&param_1[2].field_0x18;
  uVar7 = *(undefined8 *)&param_1[2].field_0x20;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x10;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x20) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar5;
  *(undefined8 *)((longlong)param_3 + 0x30) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar7;
  return;
}

// execGetOffsets @ 146952240

void __cdecl UCanvasPanelSlot::execGetOffsets(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  FMargin local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(FSlot **)&param_1[3].field_0x8 != (FSlot *)0x0) {
    SConstraintCanvas::FSlot::GetOffset(*(FSlot **)&param_1[3].field_0x8,&local_18);
    *(undefined8 *)param_3 = local_18._0_8_;
    *(undefined8 *)((longlong)param_3 + 8) = local_18._8_8_;
    return;
  }
  uVar1 = *(undefined8 *)&param_1[1].field_0x18;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x10;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetPosition @ 1469523b0

void __cdecl UCanvasPanelSlot::execGetPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  FMargin local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(FSlot **)&param_1[3].field_0x8 != (FSlot *)0x0) {
    SConstraintCanvas::FSlot::GetOffset(*(FSlot **)&param_1[3].field_0x8,&local_18);
    auVar1._8_4_ = SUB84((double)local_18.Top,0);
    auVar1._0_8_ = (double)local_18.Left;
    auVar1._12_4_ = (int)((ulonglong)(double)local_18.Top >> 0x20);
    *(undefined1 (*) [16])param_3 = auVar1;
    return;
  }
  auVar2._8_4_ = SUB84((double)*(float *)&param_1[1].field_0x14,0);
  auVar2._0_8_ = (double)*(float *)&param_1[1].field_0x10;
  auVar2._12_4_ = (int)((ulonglong)(double)*(float *)&param_1[1].field_0x14 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar2;
  return;
}

// execGetSize @ 146952430

void __cdecl UCanvasPanelSlot::execGetSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  FMargin local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(FSlot **)&param_1[3].field_0x8 != (FSlot *)0x0) {
    SConstraintCanvas::FSlot::GetOffset(*(FSlot **)&param_1[3].field_0x8,&local_18);
    auVar1._8_4_ = SUB84((double)local_18.Bottom,0);
    auVar1._0_8_ = (double)local_18.Right;
    auVar1._12_4_ = (int)((ulonglong)(double)local_18.Bottom >> 0x20);
    *(undefined1 (*) [16])param_3 = auVar1;
    return;
  }
  auVar2._8_4_ = SUB84((double)*(float *)&param_1[1].field_0x1c,0);
  auVar2._0_8_ = (double)*(float *)&param_1[1].field_0x18;
  auVar2._12_4_ = (int)((ulonglong)(double)*(float *)&param_1[1].field_0x1c >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar2;
  return;
}

// execGetZOrder @ 146953090

void __cdecl UCanvasPanelSlot::execGetZOrder(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[3].field_0x8 != 0) {
    *(int *)param_3 = (int)*(float *)(*(longlong *)&param_1[3].field_0x8 + 0xe0);
    return;
  }
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[3].field_0x4;
  return;
}

// execSetAlignment @ 146954630

void __cdecl UCanvasPanelSlot::execSetAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  local_18._s_0.X = local_28;
  local_18._s_0.Y = dStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetAlignment((UCanvasPanelSlot *)param_1,(TVector2<double> *)&local_18._s_0);
  return;
}

// execSetAnchors @ 1469547c0

void __cdecl UCanvasPanelSlot::execSetAnchors(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_48;
  double dStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  TVector2<double>_u_0 local_28;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_48 = 0.0;
  dStack_40 = 0.0;
  local_38 = 0;
  uStack_30 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  local_18 = local_38;
  uStack_10 = uStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetAnchors((UCanvasPanelSlot *)param_1,(FAnchors *)&local_28._s_0);
  return;
}

// execSetAutoSize @ 146954900

void __cdecl UCanvasPanelSlot::execSetAutoSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetAutoSize((UCanvasPanelSlot *)param_1,local_res10[0] != 0);
  return;
}

// execSetLayout @ 1469556c0

void __cdecl UCanvasPanelSlot::execSetLayout(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnchorData *pFVar2;
  FAnchorData local_48;
  
  local_48.Alignment.field0_0x0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  local_48.Anchors.Minimum.field0_0x0._s_0.X = 0.0;
  local_48.Anchors.Minimum.field0_0x0._s_0.Y = 0.0;
  local_48.Offsets.Left = 0.0;
  local_48.Offsets.Top = 0.0;
  local_48.Offsets.Right = 0.0;
  local_48.Offsets.Bottom = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48.Anchors.Maximum.field0_0x0._s_0.X = 0.0;
  local_48.Anchors.Maximum.field0_0x0._s_0.Y = 0.0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pFVar2 = &local_48;
  if ((FAnchorData *)param_2->MostRecentPropertyAddress != (FAnchorData *)0x0) {
    pFVar2 = (FAnchorData *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetLayout((UCanvasPanelSlot *)param_1,pFVar2);
  return;
}

// execSetMaximum @ 146955860

void __cdecl UCanvasPanelSlot::execSetMaximum(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlot *this;
  undefined8 local_78;
  undefined8 uStack_70;
  FDestructionSentinel local_68;
  TVector2<double>_u_0 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FSlot **)&param_1[3].field_0x8;
  *(undefined8 *)&param_1[2].field_0x8 = local_78;
  *(undefined8 *)&param_1[2].field_0x10 = uStack_70;
  if (this != (FSlot *)0x0) {
    local_40 = *(undefined8 *)&param_1[2].field_0x8;
    uStack_38 = *(undefined8 *)&param_1[2].field_0x10;
    local_50._s_0.X = (double)*(undefined8 *)&param_1[1].field_0x20;
    local_50._s_0.Y = (double)*(undefined8 *)(param_1 + 2);
    local_30 = 1;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SConstraintCanvas::FSlot::SetAnchors(this,(TAttribute<FAnchors> *)&local_50._s_0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_68);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// execSetMinimum @ 1469559a0

void __cdecl UCanvasPanelSlot::execSetMinimum(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlot *this;
  double local_78;
  double dStack_70;
  FDestructionSentinel local_68;
  TVector2<double>_u_0 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FSlot **)&param_1[3].field_0x8;
  *(double *)&param_1[1].field_0x20 = local_78;
  *(double *)(param_1 + 2) = dStack_70;
  if (this != (FSlot *)0x0) {
    local_40 = *(undefined8 *)&param_1[2].field_0x8;
    uStack_38 = *(undefined8 *)&param_1[2].field_0x10;
    local_30 = 1;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_50._s_0.X = local_78;
    local_50._s_0.Y = dStack_70;
    SConstraintCanvas::FSlot::SetAnchors(this,(TAttribute<FAnchors> *)&local_50._s_0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_68);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// execSetOffsets @ 146955ae0

void __cdecl UCanvasPanelSlot::execSetOffsets(UObject *param_1,FFrame *param_2,void *param_3)

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
  SetOffsets((UCanvasPanelSlot *)param_1,&local_18);
  return;
}

// execSetPosition @ 146955f60

void __cdecl UCanvasPanelSlot::execSetPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlotBase *this;
  bool bVar2;
  char cVar3;
  EInvalidateWidgetReason EVar4;
  bool bVar5;
  double local_78;
  double local_70;
  FDestructionSentinel local_68;
  undefined1 local_50 [16];
  bool local_40;
  undefined1 local_38 [8];
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FSlotBase **)&param_1[3].field_0x8;
  *(float *)&param_1[1].field_0x10 = (float)local_78;
  *(float *)&param_1[1].field_0x14 = (float)local_70;
  if (this != (FSlotBase *)0x0) {
    local_50._0_8_ = *(undefined8 *)&param_1[1].field_0x10;
    local_50._8_8_ = *(undefined8 *)&param_1[1].field_0x18;
    local_40 = true;
    local_28 = 0;
    local_38 = (undefined1  [8])0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    bVar2 = TAttribute<FMargin>::IdenticalTo
                      ((TAttribute<FMargin> *)(this + 1),(TAttribute<FMargin> *)local_50);
    if (!bVar2) {
      bVar2 = TAttribute<FMargin>::IsBound((TAttribute<FMargin> *)(this + 1));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
                 (FReadAccessScope *)&local_68);
      if ((((int)local_28 == 0) || (FStack_30.Data == (FScriptContainerElement *)0x0)) ||
         (cVar3 = (**(code **)(*(longlong *)FStack_30.Data + 0x38))(), cVar3 == '\0')) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_68);
      this[1]._padding_ = local_50._0_8_;
      this[1].Owner = (FChildren *)local_50._8_8_;
      *(bool *)&this[1].Widget.Object = local_40;
      TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &this[1].Widget.SharedReferenceCount,
                 (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_38);
      EVar4 = LayoutAndVolatility;
      if (bVar2 == bVar5) {
        EVar4 = Layout;
      }
      FSlotBase::Invalidate(this,EVar4);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_68);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
    return;
  }
  return;
}

// execSetSize @ 1469562b0

void __cdecl UCanvasPanelSlot::execSetSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlotBase *this;
  bool bVar2;
  char cVar3;
  EInvalidateWidgetReason EVar4;
  bool bVar5;
  double local_78;
  double local_70;
  FDestructionSentinel local_68;
  undefined1 local_50 [16];
  bool local_40;
  undefined1 local_38 [8];
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(FSlotBase **)&param_1[3].field_0x8;
  *(float *)&param_1[1].field_0x18 = (float)local_78;
  *(float *)&param_1[1].field_0x1c = (float)local_70;
  if (this != (FSlotBase *)0x0) {
    local_50._0_8_ = *(undefined8 *)&param_1[1].field_0x10;
    local_50._8_8_ = *(undefined8 *)&param_1[1].field_0x18;
    local_40 = true;
    local_28 = 0;
    local_38 = (undefined1  [8])0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    bVar2 = TAttribute<FMargin>::IdenticalTo
                      ((TAttribute<FMargin> *)(this + 1),(TAttribute<FMargin> *)local_50);
    if (!bVar2) {
      bVar2 = TAttribute<FMargin>::IsBound((TAttribute<FMargin> *)(this + 1));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
                 (FReadAccessScope *)&local_68);
      if ((((int)local_28 == 0) || (FStack_30.Data == (FScriptContainerElement *)0x0)) ||
         (cVar3 = (**(code **)(*(longlong *)FStack_30.Data + 0x38))(), cVar3 == '\0')) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_68);
      this[1]._padding_ = local_50._0_8_;
      this[1].Owner = (FChildren *)local_50._8_8_;
      *(bool *)&this[1].Widget.Object = local_40;
      TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &this[1].Widget.SharedReferenceCount,
                 (TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_38);
      EVar4 = LayoutAndVolatility;
      if (bVar2 == bVar5) {
        EVar4 = Layout;
      }
      FSlotBase::Invalidate(this,EVar4);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_68);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
    return;
  }
  return;
}

// execSetZOrder @ 1469574b0

void __cdecl UCanvasPanelSlot::execSetZOrder(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  *(int *)&param_1[3].field_0x4 = local_res8[0];
  if (*(FSlot **)&param_1[3].field_0x8 != (FSlot *)0x0) {
    SConstraintCanvas::FSlot::SetZOrder(*(FSlot **)&param_1[3].field_0x8,(float)local_res8[0]);
  }
  return;
}

