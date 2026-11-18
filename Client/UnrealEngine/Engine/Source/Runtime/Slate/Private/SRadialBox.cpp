// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 14

// SRadialBox @ 1428ba320

SRadialBox * __thiscall SRadialBox::SRadialBox(SRadialBox *this)

{
  TSlateAttribute<float,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *pTVar1;
  code *pcVar2;
  double _X;
  bool bVar3;
  int iVar4;
  SRadialBox *pSVar5;
  undefined1 local_res8 [8];
  
  SPanel::SPanel((SPanel *)this);
  this->_padding_ = (longlong)&___7SRadialBox__6B_;
  (this->Slots)._padding_ = (longlong)this;
  (this->Slots)._padding_ = (longlong)&___7FChildren__6B_;
  ::FName::FName((FName *)&(this->Slots)._padding_,"Children");
  _X = __real_4059000000000000;
  (this->Slots)._padding_ = (longlong)&___7__TPanelChildren_VFSlot_SRadialBox____6B_;
  pTVar1 = &this->PreferredWidth;
  *(undefined2 *)&(this->Slots)._padding_ = 0xdc00;
  (this->Slots).Children.ArrayNum = 0;
  (this->Slots).Children.ArrayMax = 0;
  *(undefined4 *)&pTVar1->field_0x0 = 0x42c80000;
  (this->Slots).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = _finite(_X);
  if (iVar4 == 0) {
    local_res8[0] = 0;
    `SlateAttributePrivate::
    TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::VerifyNan'::__l5::<lambda_1>::operator()(local_res8);
  }
  if ((pTVar1 < this) || (this + 1 <= pTVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pSVar5 = (SRadialBox *)(*pcVar2)();
      return pSVar5;
    }
  }
  return this;
}

// operator() @ 1428c6cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`SRadialBox::OnArrangeChildren'::__l2::<lambda_1>::operator()
          (void *this,FSlot *param_1,FArrangementData *param_2)

{
  FArrangedChildren *this_00;
  undefined1 auStackY_b8 [32];
  float local_88;
  float fStack_84;
  FSlateLayoutTransform local_80 [2];
  FArrangedWidget local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  this_00 = *(FArrangedChildren **)this;
  local_80[0].Scale = 1.0;
  fStack_84 = (float)(param_2->SlotSize).field0_0x0._s_0.Y;
  local_88 = (float)(param_2->SlotSize).field0_0x0._s_0.X;
  local_80[0].Translation.field0_0x0._0_4_ = (undefined4)(param_2->SlotOffset).field0_0x0._s_0.X;
  local_80[0].Translation.field0_0x0._4_4_ = (undefined4)(param_2->SlotOffset).field0_0x0._s_0.Y;
  FGeometry::MakeChild
            (*(FGeometry **)((longlong)this + 8),&local_68,
             (TSharedRef<SWidget,1> *)&param_1->field_0x10,(FDeprecateVector2DParameter *)&local_88,
             local_80);
  FArrangedChildren::AddWidget(this_00,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.Widget.SharedReferenceCount.ReferenceController);
  return;
}

// AddSlot @ 1428d1480

FScopedWidgetSlotArguments * __thiscall
SRadialBox::AddSlot(SRadialBox *this,FScopedWidgetSlotArguments *__return_storage_ptr__)

{
  FSlotBase *local_res8;
  
  local_res8 = ::operator_new(0x20);
  if (local_res8 == (FSlotBase *)0x0) {
    local_res8 = (FSlotBase *)0x0;
  }
  else {
    local_res8->_padding_ = 0;
    local_res8->Owner = (FChildren *)0x0;
    (local_res8->Widget).Object = (SWidget *)0x0;
    (local_res8->Widget).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FSlotBase::FSlotBase(local_res8);
    local_res8->_padding_ = (longlong)&___7FSlot_SRadialBox__6B_;
  }
  FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)__return_storage_ptr__,(FSlot *)&local_res8);
  __return_storage_ptr__->Children = &this->Slots;
  __return_storage_ptr__->Index = -1;
  *(undefined8 *)&__return_storage_ptr__->Added = 0;
  *(undefined8 *)&(__return_storage_ptr__->Added).field_0x28 = 0;
  return __return_storage_ptr__;
}

// ClearChildren @ 1428db0a0

void __thiscall SRadialBox::ClearChildren(SRadialBox *this)

{
  int *piVar1;
  TArray<TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  pTVar2 = &(this->Slots).Children;
  local_18.Data = (pTVar2->AllocatorInstance).Data;
  piVar1 = &(this->Slots).Children.ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_10._0_4_ = (this->Slots).Children.ArrayNum;
  local_10._4_4_ = (this->Slots).Children.ArrayMax;
  *piVar1 = 0;
  (this->Slots).Children.ArrayNum = 0;
  DestructItems<TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_>,int>
            ((TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_> *)
             (pTVar2->AllocatorInstance).Data,0);
  (this->Slots).Children.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  DestructItems<TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_>,int>
            ((TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_> *)local_18.Data,
             (int)local_10);
  uVar4 = local_10 >> 0x20;
  local_10 = local_10 & 0xffffffff00000000;
  iVar5 = 0;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_18,0,(int *)((longlong)&local_10 + 4));
    iVar5 = (int)local_10;
  }
  if (pTVar2 != (TArray<TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_>,TSizedDefaultAllocator<32>_>
                 *)&local_18) {
    DestructItems<TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_>,int>
              ((TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_> *)
               (pTVar2->AllocatorInstance).Data,(this->Slots).Children.ArrayNum);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = local_18.Data;
    (this->Slots).Children.ArrayNum = (int)local_10;
    *piVar1 = local_10._4_4_;
    local_10 = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
    iVar5 = 0;
  }
  DestructItems<TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_>,int>
            ((TUniquePtr<SRadialBox::FSlot,TDefaultDelete<SRadialBox::FSlot>_> *)local_18.Data,iVar5
            );
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// ComputeDesiredSize @ 1428e1100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector2<double> * __thiscall
SRadialBox::ComputeDesiredSize
          (SRadialBox *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  FChildArranger *this_00;
  undefined1 auStack_b8 [32];
  TVector2<double> *local_98;
  code *local_90;
  TVector2<double> **local_88;
  undefined1 local_78 [80];
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_88 = &local_98;
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`SRadialBox::ComputeDesiredSize'::__l2::<lambda_1>,void,SRadialBox::FSlot_const_&,SRadialBox::FChildArranger::FArrangementData_const_&>
             ::Call;
  local_98 = __return_storage_ptr__;
  this_00 = FChildArranger::FChildArranger
                      ((FChildArranger *)local_78,this,
                       (TFunctionRef<void___cdecl(SRadialBox::FSlot_const_&,SRadialBox::FChildArranger::FArrangementData_const_&)>
                        *)&local_90);
  FChildArranger::Arrange(this_00);
  local_20 = 0;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  TSparseArray<TSparseSetElement<TTuple<int,SRadialBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,SRadialBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,SRadialBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_78 + 0x10));
  return __return_storage_ptr__;
}

// Construct @ 1429003f0

void __thiscall SRadialBox::Construct(SRadialBox *this,FArguments *param_1)

{
  float fVar1;
  TArray<SRadialBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> local_18;
  
  SlateAttributePrivate::
  TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::Assign((TSlateAttributeBase<SWidget,float,TSlateAttributeInvalidationReason<1>,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
            *)&this->PreferredWidth,(SWidget *)this,&param_1->_PreferredWidth,None);
  this->bUseAllottedWidth = param_1->_UseAllottedWidth;
  this->StartingAngle = param_1->_StartingAngle;
  this->bDistributeItemsEvenly = param_1->_bDistributeItemsEvenly;
  this->bClockwiseOrder = param_1->_bClockwiseOrder;
  if (__real_322bcc77 <
      (float)((uint)param_1->_SectorCentralAngle & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar1 = FGenericPlatformMath::Fmod(param_1->_SectorCentralAngle,__real_43b40000);
    if (fVar1 < __real_322bcc77) {
      fVar1 = fVar1 + __real_43b40000;
    }
  }
  else {
    fVar1 = 0.0;
  }
  this->SectorCentralAngle = fVar1;
  this->AngleBetweenItems = param_1->_AngleBetweenItems;
  local_18.AllocatorInstance.Data = (param_1->_Slots).AllocatorInstance.Data;
  (param_1->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = (param_1->_Slots).ArrayNum;
  local_18.ArrayMax = (param_1->_Slots).ArrayMax;
  (param_1->_Slots).ArrayNum = 0;
  (param_1->_Slots).ArrayMax = 0;
  TPanelChildren<SRadialBox::FSlot>::AddSlots(&this->Slots,&local_18);
  return;
}

// GetChildren @ 14293e520

FChildren * __thiscall SRadialBox::GetChildren(SRadialBox *this)

{
  return (FChildren *)&this->Slots;
}

// InternalNormalizeAngle @ 142952310

float __thiscall SRadialBox::InternalNormalizeAngle(SRadialBox *this,float param_1)

{
  float fVar1;
  
  if ((float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    return 0.0;
  }
  fVar1 = FGenericPlatformMath::Fmod(param_1,__real_43b40000);
  if (fVar1 < __real_322bcc77) {
    fVar1 = fVar1 + __real_43b40000;
  }
  return fVar1;
}

// OnArrangeChildren @ 14295ed30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SRadialBox::OnArrangeChildren(SRadialBox *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  FChildArranger *this_00;
  undefined1 auStack_b8 [32];
  FArrangedChildren *local_98;
  FGeometry *local_90;
  code *local_88;
  FArrangedChildren **local_80;
  undefined1 local_78 [80];
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_80 = &local_98;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`SRadialBox::OnArrangeChildren'::__l2::<lambda_1>,void,SRadialBox::FSlot_const_&,SRadialBox::FChildArranger::FArrangementData_const_&>
             ::Call;
  local_98 = param_2;
  local_90 = param_1;
  this_00 = FChildArranger::FChildArranger
                      ((FChildArranger *)local_78,this,
                       (TFunctionRef<void___cdecl(SRadialBox::FSlot_const_&,SRadialBox::FChildArranger::FArrangementData_const_&)>
                        *)&local_88);
  FChildArranger::Arrange(this_00);
  local_20 = 0;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  TSparseArray<TSparseSetElement<TTuple<int,SRadialBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,SRadialBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,SRadialBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_78 + 0x10));
  return;
}

// RemoveSlot @ 142989cd0

int __thiscall SRadialBox::RemoveSlot(SRadialBox *this,TSharedRef<SWidget,1> *param_1)

{
  int iVar1;
  
  iVar1 = TPanelChildren<SRadialBox::FSlot>::Remove(&this->Slots,param_1);
  return iVar1;
}

// SetSectorCentralAngle @ 142999280

void __thiscall SRadialBox::SetSectorCentralAngle(SRadialBox *this,float param_1)

{
  float fVar1;
  
  if ((float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    this->SectorCentralAngle = 0.0;
    return;
  }
  fVar1 = FGenericPlatformMath::Fmod(param_1,__real_43b40000);
  if (fVar1 < __real_322bcc77) {
    fVar1 = fVar1 + __real_43b40000;
  }
  this->SectorCentralAngle = fVar1;
  return;
}

// SetUseAllottedWidth @ 14299ef50

void __thiscall SRadialBox::SetUseAllottedWidth(SRadialBox *this,bool param_1)

{
  this->bUseAllottedWidth = param_1;
  return;
}

// Slot @ 1429a19b0

FSlotArguments * __cdecl SRadialBox::Slot(FSlotArguments *__return_storage_ptr__)

{
  FSlotBase *local_res8;
  
  local_res8 = ::operator_new(0x20);
  if (local_res8 == (FSlotBase *)0x0) {
    local_res8 = (FSlotBase *)0x0;
  }
  else {
    local_res8->_padding_ = 0;
    local_res8->Owner = (FChildren *)0x0;
    (local_res8->Widget).Object = (SWidget *)0x0;
    (local_res8->Widget).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FSlotBase::FSlotBase(local_res8);
    local_res8->_padding_ = (longlong)&___7FSlot_SRadialBox__6B_;
  }
  FSlot::FSlotArguments::FSlotArguments(__return_storage_ptr__,(FSlot *)&local_res8);
  return __return_storage_ptr__;
}

// Tick @ 1429a9ee0

void __thiscall SRadialBox::Tick(SRadialBox *this,FGeometry *param_1,double param_2,float param_3)

{
  FDeprecateSlateVector2D FVar1;
  TSlateAttribute<float,1,TSlateAttributeComparePredicate<TEqualTo<void>_>_> local_res8;
  
  if (this->bUseAllottedWidth != false) {
    FVar1 = param_1->Size;
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
              ((FSlateAttributeImpl *)&this->PreferredWidth,(SWidget *)this,Member);
    local_res8 = FVar1._0_4_;
    if ((float)local_res8 != (float)this->PreferredWidth) {
      this->PreferredWidth = local_res8;
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)&this->PreferredWidth,(SWidget *)this,Member,Layout);
    }
  }
  return;
}

