// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 19

// SWidgetSwitcher @ 1429bbbf0

SWidgetSwitcher * __thiscall SWidgetSwitcher::SWidgetSwitcher(SWidgetSwitcher *this)

{
  TPanelChildren<FBasicLayoutWidgetSlot> *pTVar1;
  EWidgetUpdateFlags EVar2;
  code *pcVar3;
  bool bVar4;
  SWidgetSwitcher *pSVar5;
  EWidgetUpdateFlags EVar6;
  
  SPanel::SPanel((SPanel *)this);
  pTVar1 = &this->AllChildren;
  this->_padding_ = (longlong)&___7SWidgetSwitcher__6B_;
  (this->WidgetIndex).Value = 0;
  (this->WidgetIndex).bIsSet = false;
  *(undefined4 *)&(this->WidgetIndex).Getter.field_0x14 = 0;
  *(undefined8 *)&(this->WidgetIndex).Getter = 0;
  *(undefined8 *)&(this->WidgetIndex).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->WidgetIndex).Getter.field_0x10 = 0;
  pTVar1->_padding_ = (longlong)&___7FChildren__6B_;
  (this->AllChildren)._padding_ = (longlong)this;
  ::FName::FName((FName *)&(this->AllChildren)._padding_,"Children");
  *(undefined2 *)&(this->AllChildren)._padding_ = 0xdc00;
  pTVar1->_padding_ = (longlong)&___7__TPanelChildren_VFBasicLayoutWidgetSlot____6B_;
  (this->AllChildren).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllChildren).Children.ArrayNum = 0;
  (this->AllChildren).Children.ArrayMax = 0;
  (this->OneDynamicChild)._padding_ = (longlong)&___7FChildren__6B_;
  (this->OneDynamicChild)._padding_ = (longlong)this;
  ::FName::FName((FName *)&(this->OneDynamicChild)._padding_,"Children");
  *(undefined2 *)&(this->OneDynamicChild)._padding_ = 0xdc00;
  (this->OneDynamicChild)._padding_ =
       (longlong)&___7__TOneDynamicChild_VFBasicLayoutWidgetSlot____6B_;
  (this->OneDynamicChild).AllChildren = pTVar1;
  (this->OneDynamicChild).WidgetIndex = &this->WidgetIndex;
  if (pTVar1 == (TPanelChildren<FBasicLayoutWidgetSlot> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAllChildren",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x40b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar5 = (SWidgetSwitcher *)(*pcVar3)();
      return pSVar5;
    }
  }
  if ((this->OneDynamicChild).WidgetIndex == (TAttribute<int> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("WidgetIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x40c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pSVar5 = (SWidgetSwitcher *)(*pcVar3)();
      return pSVar5;
    }
  }
  (this->LastActiveWidget).Object = (SWidget *)0x0;
  (this->LastActiveWidget).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  EVar2 = (EWidgetUpdateFlags)this->_padding_;
  EVar6 = EVar2 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar6;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar2,EVar6);
  return this;
}

// ~SWidgetSwitcher @ 1429c04c0

void __thiscall SWidgetSwitcher::~SWidgetSwitcher(SWidgetSwitcher *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  
  this->_padding_ = (longlong)&___7SWidgetSwitcher__6B_;
  pTVar3 = (this->LastActiveWidget).WeakReferenceCount.ReferenceController;
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
  FChildren::~FChildren((FChildren *)&this->OneDynamicChild);
  DestructItems<TUniquePtr<FBasicLayoutWidgetSlot,TDefaultDelete<FBasicLayoutWidgetSlot>_>,int>
            ((TUniquePtr<FBasicLayoutWidgetSlot,TDefaultDelete<FBasicLayoutWidgetSlot>_> *)
             (this->AllChildren).Children.AllocatorInstance.Data,
             (this->AllChildren).Children.ArrayNum);
  pFVar4 = (this->AllChildren).Children.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FChildren::~FChildren((FChildren *)&this->AllChildren);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->WidgetIndex).Getter);
  pvVar5 = *(void **)&(this->WidgetIndex).Getter.field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->WidgetIndex).Getter);
  SPanel::~SPanel((SPanel *)this);
  return;
}

// operator() @ 1429c15b0

void __thiscall
`SWidgetSwitcher::AddSlot'::__l7::<lambda_2>::operator()
          (void *this,FBasicLayoutWidgetSlot *param_1,int param_2)

{
  TAttribute<int> *this_00;
  longlong *plVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  int *piVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  FDestructionSentinel local_48;
  int local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1429c15e5;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    plVar1 = *(longlong **)this;
    if (plVar1 != (longlong *)0x0) {
      this_00 = (TAttribute<int> *)(plVar1 + 0x43);
      bVar6 = TAttribute<int>::IsBound(this_00);
      if ((!bVar6) && (piVar4 = TAttribute<int>::Get(this_00), param_2 <= *piVar4)) {
        piVar4 = TAttribute<int>::Get(this_00);
        local_30 = *piVar4 + 1;
        local_18 = 0;
        local_2c = 1;
        local_28 = (undefined1  [8])0x0;
        FStack_20.Data = (FScriptContainerElement *)0x0;
        this_00->Value = local_30;
        *(undefined1 *)((longlong)plVar1 + 0x21c) = 1;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(plVar1 + 0x44),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
                   (FWriteAccessScope *)&local_48);
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
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_28);
      }
      (**(code **)(*plVar1 + 0x248))(plVar1,param_2);
    }
  }
LAB_1429c15e5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// AddSlot @ 1429c5c70

FScopedWidgetSlotArguments * __thiscall
SWidgetSwitcher::AddSlot
          (SWidgetSwitcher *this,FScopedWidgetSlotArguments *__return_storage_ptr__,int param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  TSharedRef<SWidget,1> *pTVar5;
  FBasicLayoutWidgetSlot *pFVar6;
  FBasicLayoutWidgetSlot *pFVar7;
  FBasicLayoutWidgetSlot *local_res8;
  TSharedRef<SWidget,1> local_68;
  code *local_58 [2];
  undefined **local_48;
  SWidget *local_40;
  TReferenceControllerBase<1> *local_38;
  undefined8 local_30;
  
  pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_68);
  pTVar3 = (pTVar5->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar5->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_40 = pSVar4;
  local_38 = pTVar3;
  if ((param_1 < 0) || ((this->AllChildren).Children.ArrayNum <= param_1)) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`SWidgetSwitcher::AddSlot'::`5'::<lambda_1>,0,0>::_vftable_;
    pFVar7 = (FBasicLayoutWidgetSlot *)0x0;
    local_30 = 0;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`SWidgetSwitcher::AddSlot'::__l5::<lambda_1>,void,FBasicLayoutWidgetSlot_const_*,int>
                  ::Call;
    pFVar6 = ::operator_new(0x40);
    if (pFVar6 != (FBasicLayoutWidgetSlot *)0x0) {
      *(undefined8 *)pFVar6 = 0;
      *(undefined8 *)&pFVar6->field_0x8 = 0;
      *(undefined8 *)&pFVar6->field_0x10 = 0;
      *(undefined8 *)&pFVar6->field_0x18 = 0;
      *(undefined8 *)&pFVar6->field_0x20 = 0;
      *(undefined8 *)&pFVar6->field_0x28 = 0;
      *(undefined8 *)&pFVar6->field_0x30 = 0;
      *(undefined8 *)&pFVar6->field_0x38 = 0;
      pFVar7 = FBasicLayoutWidgetSlot::FBasicLayoutWidgetSlot(pFVar6);
    }
    local_res8 = pFVar7;
    TPanelChildren<FBasicLayoutWidgetSlot>::FScopedWidgetSlotArguments::FScopedWidgetSlotArguments
              (__return_storage_ptr__,(FBasicLayoutWidgetSlot *)&local_res8,&this->AllChildren,-1,
               (TFunction<void___cdecl(FBasicLayoutWidgetSlot_const_*,int)> *)local_58);
  }
  else {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`SWidgetSwitcher::AddSlot'::`7'::<lambda_2>,0,0>::_vftable_;
    pFVar7 = (FBasicLayoutWidgetSlot *)0x0;
    local_30 = 0;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`SWidgetSwitcher::AddSlot'::__l7::<lambda_2>,void,FBasicLayoutWidgetSlot_const_*,int>
                  ::Call;
    pFVar6 = ::operator_new(0x40);
    if (pFVar6 != (FBasicLayoutWidgetSlot *)0x0) {
      *(undefined8 *)pFVar6 = 0;
      *(undefined8 *)&pFVar6->field_0x8 = 0;
      *(undefined8 *)&pFVar6->field_0x10 = 0;
      *(undefined8 *)&pFVar6->field_0x18 = 0;
      *(undefined8 *)&pFVar6->field_0x20 = 0;
      *(undefined8 *)&pFVar6->field_0x28 = 0;
      *(undefined8 *)&pFVar6->field_0x30 = 0;
      *(undefined8 *)&pFVar6->field_0x38 = 0;
      pFVar7 = FBasicLayoutWidgetSlot::FBasicLayoutWidgetSlot(pFVar6);
    }
    local_res8 = pFVar7;
    TPanelChildren<FBasicLayoutWidgetSlot>::FScopedWidgetSlotArguments::FScopedWidgetSlotArguments
              (__return_storage_ptr__,(FBasicLayoutWidgetSlot *)&local_res8,&this->AllChildren,
               param_1,(TFunction<void___cdecl(FBasicLayoutWidgetSlot_const_*,int)> *)local_58);
  }
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
  return __return_storage_ptr__;
}

// ComputeDesiredSize @ 1429cf780

TVector2<double> * __thiscall
SWidgetSwitcher::ComputeDesiredSize
          (SWidgetSwitcher *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  FBasicLayoutWidgetSlot *pFVar8;
  FDeprecateSlateVector2D FVar9;
  
  piVar7 = TAttribute<int>::Get(&this->WidgetIndex);
  iVar2 = *piVar7;
  if ((-1 < iVar2) && (iVar2 < (this->AllChildren).Children.ArrayNum)) {
    pFVar8 = TPanelChildren<FBasicLayoutWidgetSlot>::operator[](&this->AllChildren,iVar2);
    if ((pFVar8 != (FBasicLayoutWidgetSlot *)0x0) &&
       ((TEnumAsByte<EVisibility::Private>)
        *(uchar *)&(*(SWidget **)&pFVar8->field_0x10)->VisibilityAttribute !=
        EVisibility::Collapsed.Value.Value)) {
      fVar3 = *(float *)&pFVar8->field_0x28;
      fVar4 = *(float *)&pFVar8->field_0x2c;
      fVar5 = *(float *)&pFVar8->field_0x30;
      fVar6 = *(float *)&pFVar8->field_0x34;
      FVar9 = SWidget::GetDesiredSize(*(SWidget **)&pFVar8->field_0x10);
      fVar1 = *(float *)((longlong)FVar9 + 4);
      (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(fVar5 + fVar3 + *(float *)FVar9);
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar6 + fVar4 + fVar1);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// ComputeVolatility @ 1429cffb0

bool __thiscall SWidgetSwitcher::ComputeVolatility(SWidgetSwitcher *this)

{
  longlong *plVar1;
  char cVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(this->WidgetIndex).Getter,
             &local_28);
  if ((*(int *)&(this->WidgetIndex).Getter.field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->WidgetIndex).Getter.field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return true;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return false;
}

// Construct @ 1429d9880

void __thiscall SWidgetSwitcher::Construct(SWidgetSwitcher *this,FArguments *param_1)

{
  TArray<TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::FSlotArguments,TSizedDefaultAllocator<32>_>
  local_18;
  
  local_18.AllocatorInstance.Data = (param_1->_Slots).AllocatorInstance.Data;
  (param_1->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = (param_1->_Slots).ArrayNum;
  local_18.ArrayMax = (param_1->_Slots).ArrayMax;
  (param_1->_Slots).ArrayNum = 0;
  (param_1->_Slots).ArrayMax = 0;
  TPanelChildren<FBasicLayoutWidgetSlot>::AddSlots(&this->AllChildren,&local_18);
  (this->WidgetIndex).Value = (param_1->_WidgetIndex).Value;
  (this->WidgetIndex).bIsSet = (param_1->_WidgetIndex).bIsSet;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->WidgetIndex).Getter,&(param_1->_WidgetIndex).Getter);
  return;
}

// GetActiveSlot @ 1429e8c30

FBasicLayoutWidgetSlot * __thiscall SWidgetSwitcher::GetActiveSlot(SWidgetSwitcher *this)

{
  int iVar1;
  int *piVar2;
  FBasicLayoutWidgetSlot *pFVar3;
  
  piVar2 = TAttribute<int>::Get(&this->WidgetIndex);
  iVar1 = *piVar2;
  if ((-1 < iVar1) && (iVar1 < (this->AllChildren).Children.ArrayNum)) {
    pFVar3 = TPanelChildren<FBasicLayoutWidgetSlot>::operator[](&this->AllChildren,iVar1);
    return pFVar3;
  }
  return (FBasicLayoutWidgetSlot *)0x0;
}

// GetActiveWidget @ 1429e8c70

TSharedPtr<SWidget,1> * __thiscall
SWidgetSwitcher::GetActiveWidget
          (SWidgetSwitcher *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  int *piVar3;
  FBasicLayoutWidgetSlot *pFVar4;
  
  piVar3 = TAttribute<int>::Get(&this->WidgetIndex);
  iVar1 = *piVar3;
  if (((-1 < iVar1) && (iVar1 < (this->AllChildren).Children.ArrayNum)) &&
     (pFVar4 = TPanelChildren<FBasicLayoutWidgetSlot>::operator[](&this->AllChildren,iVar1),
     pFVar4 != (FBasicLayoutWidgetSlot *)0x0)) {
    __return_storage_ptr__->Object = *(SWidget **)&pFVar4->field_0x10;
    pTVar2 = *(TReferenceControllerBase<1> **)&pFVar4->field_0x18;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      return __return_storage_ptr__;
    }
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildren @ 1429ea760

FChildren * __thiscall SWidgetSwitcher::GetChildren(SWidgetSwitcher *this)

{
  return (FChildren *)&this->OneDynamicChild;
}

// GetWidget @ 1429efe30

TSharedPtr<SWidget,1> * __thiscall
SWidgetSwitcher::GetWidget
          (SWidgetSwitcher *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FBasicLayoutWidgetSlot *pFVar2;
  
  if ((param_1 < 0) || ((this->AllChildren).Children.ArrayNum <= param_1)) {
    __return_storage_ptr__->Object = (SWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar2 = TPanelChildren<FBasicLayoutWidgetSlot>::operator[](&this->AllChildren,param_1);
    __return_storage_ptr__->Object = *(SWidget **)&pFVar2->field_0x10;
    pTVar1 = *(TReferenceControllerBase<1> **)&pFVar2->field_0x18;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetWidgetIndex @ 1429efee0

int __thiscall SWidgetSwitcher::GetWidgetIndex(SWidgetSwitcher *this,TSharedRef<SWidget,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = (this->AllChildren).Children.ArrayNum;
  uVar5 = 0;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(SWidget **)
           (*(longlong *)((this->AllChildren).Children.AllocatorInstance.Data + lVar6) + 0x10) ==
          param_1->Object) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        return uVar5;
      }
      iVar4 = (this->AllChildren).Children.ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < iVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return -1;
}

// OnArrangeChildren @ 1429f9270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SWidgetSwitcher::OnArrangeChildren
          (SWidgetSwitcher *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  int iVar1;
  SWidget *pSVar2;
  longlong lVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  int *piVar6;
  FBasicLayoutWidgetSlot *pFVar7;
  FSlateApplication *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  SWidget *pSVar10;
  bool bVar11;
  FDestructionSentinel local_58;
  TVector2<double>_u_0 local_40;
  undefined1 local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_40 = UE::Math::TVector2<double>::UnitVector.field0_0x0;
  local_30 = 1;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  piVar6 = TAttribute<int>::Get(&this->WidgetIndex);
  iVar1 = *piVar6;
  if (((-1 < iVar1) && (iVar1 < (this->AllChildren).Children.ArrayNum)) &&
     (pFVar7 = TPanelChildren<FBasicLayoutWidgetSlot>::operator[](&this->AllChildren,iVar1),
     pFVar7 != (FBasicLayoutWidgetSlot *)0x0)) {
    ArrangeSingleChild<FBasicLayoutWidgetSlot>
              (GSlateFlowDirection,param_1,param_2,pFVar7,
               (TAttribute<UE::Math::TVector2<double>_> *)&local_40._s_0);
    pSVar10 = (SWidget *)0x0;
    pTVar9 = (this->LastActiveWidget).WeakReferenceCount.ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar9->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          pTVar9 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1429f9354;
        }
        LOCK();
        aVar5 = pTVar9->SharedReferenceCount;
        bVar11 = aVar4 == aVar5;
        if (bVar11) {
          pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar5 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar5;
      } while (!bVar11);
      pSVar10 = (this->LastActiveWidget).Object;
    }
LAB_1429f9354:
    pSVar2 = *(SWidget **)&pFVar7->field_0x10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    if (pSVar2 != pSVar10) {
      TWeakPtr<SWidget,1>::operator=<SWidget>
                (&this->LastActiveWidget,(TSharedRef<SWidget,1> *)&pFVar7->field_0x10);
      pFVar8 = FSlateApplication::Get();
      pTVar9 = *(TReferenceControllerBase<1> **)&pFVar8->field_0x110;
      lVar3 = *(longlong *)&pFVar8->field_0x108;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(undefined1 *)(lVar3 + 0x90) = 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    }
  }
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
  return;
}

// OnSlotAdded @ 142a01800

void __thiscall SWidgetSwitcher::OnSlotAdded(SWidgetSwitcher *this,int param_1)

{
  return;
}

// OnSlotRemoved @ 142a01810

void __thiscall
SWidgetSwitcher::OnSlotRemoved
          (SWidgetSwitcher *this,int param_1,TSharedRef<SWidget,1> *param_2,bool param_3)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// RemoveSlot @ 142a05c30

int __thiscall SWidgetSwitcher::RemoveSlot(SWidgetSwitcher *this,TSharedRef<SWidget,1> *param_1)

{
  int *piVar1;
  TArray<TUniquePtr<FBasicLayoutWidgetSlot,TDefaultDelete<FBasicLayoutWidgetSlot>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  undefined8 *puVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  bool local_res8;
  SWidget *local_98;
  TReferenceControllerBase<1> *local_90;
  FDestructionSentinel local_88;
  FReadAccessScope local_70;
  int local_58;
  undefined1 local_54;
  undefined1 local_50 [8];
  ForAnyElementType FStack_48;
  ulonglong local_40;
  
  iVar12 = (this->AllChildren).Children.ArrayNum;
  uVar14 = 0;
  if (0 < iVar12) {
    pTVar2 = &(this->AllChildren).Children;
    uVar16 = uVar14;
    do {
      uVar15 = (uint)uVar16;
      uVar17 = ~uVar15 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar15 < iVar12) {
        uVar11 = uVar17;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        iVar12 = (*pcVar8)();
        return iVar12;
      }
      if (*(SWidget **)(*(longlong *)((pTVar2->AllocatorInstance).Data + uVar14) + 0x10) ==
          param_1->Object) {
        local_res8 = false;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &(this->WidgetIndex).Getter,&local_70);
        if (((*(int *)&(this->WidgetIndex).Getter.field_0x10 == 0) ||
            (plVar3 = *(longlong **)&(this->WidgetIndex).Getter.field_0x8, plVar3 == (longlong *)0x0
            )) || (cVar10 = (**(code **)(*plVar3 + 0x38))(), cVar10 == '\0')) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_70);
          puVar13 = (uint *)TAttribute<int>::Get(&this->WidgetIndex);
          uVar11 = *puVar13;
          local_res8 = uVar15 == uVar11;
          if (local_res8) {
            SWidget::Invalidate((SWidget *)this,ChildOrder);
          }
          if ((0 < (int)uVar11) && ((int)uVar15 <= (int)uVar11)) {
            local_54 = 1;
            local_58 = uVar11 - 1;
            local_40 = 0;
            (this->WidgetIndex).Value = local_58;
            local_50 = (undefined1  [8])0x0;
            FStack_48.Data = (FScriptContainerElement *)0x0;
            (this->WidgetIndex).bIsSet = true;
            TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->WidgetIndex).Getter,
                       (TDelegateBase<FNotThreadSafeDelegateMode> *)local_50);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_50,
                       (FWriteAccessScope *)&local_88);
            if (((int)local_40 != 0) && (FStack_48.Data != (FScriptContainerElement *)0x0)) {
              (*(code *)**(undefined8 **)FStack_48.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&FStack_48,0,0,0x10);
              local_40 = local_40 & 0xffffffff00000000;
            }
            if (local_88.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
            }
            if (FStack_48.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_48.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_50);
          }
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_70);
        }
        uVar11 = 0;
        if ((int)uVar15 < (this->AllChildren).Children.ArrayNum) {
          uVar11 = uVar17;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          iVar12 = (*pcVar8)();
          return iVar12;
        }
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        puVar5 = *(undefined8 **)(pFVar4 + (longlong)(int)uVar15 * 8);
        *(undefined8 *)(pFVar4 + (longlong)(int)uVar15 * 8) = 0;
        uVar11 = 0;
        if ((int)uVar15 < (this->AllChildren).Children.ArrayNum) {
          uVar11 = uVar17;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          iVar12 = (*pcVar8)();
          return iVar12;
        }
        pFVar6 = (pTVar2->AllocatorInstance).Data;
        pFVar4 = pFVar6 + (longlong)(int)uVar15 * 8;
        puVar7 = *(undefined8 **)(pFVar6 + (longlong)(int)uVar15 * 8);
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)(puVar7,1);
        }
        iVar12 = (this->AllChildren).Children.ArrayNum + ~uVar15;
        if (iVar12 != 0) {
          memmove(pFVar4,pFVar4 + 8,(longlong)iVar12 << 3);
        }
        piVar1 = &(this->AllChildren).Children.ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->AllChildren).Children.ArrayNum,
                   &(this->AllChildren).Children.ArrayMax);
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
        pcVar8 = *(code **)(this->_padding_ + 0x250);
        local_98 = param_1->Object;
        local_90 = (param_1->SharedReferenceCount).ReferenceController;
        if (local_90 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_90->SharedReferenceCount = (atomic<int>)((int)local_90->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar8)(this,uVar16,&local_98,local_res8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        return uVar15;
      }
      iVar12 = (this->AllChildren).Children.ArrayNum;
      uVar16 = (ulonglong)(uVar15 + 1);
      uVar14 = uVar14 + 8;
    } while ((int)(uVar15 + 1) < iVar12);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return -1;
}

// SetActiveWidgetIndex @ 142a07010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SWidgetSwitcher::SetActiveWidgetIndex(SWidgetSwitcher *this,int param_1)

{
  int iVar1;
  int *piVar2;
  FBasicLayoutWidgetSlot *pFVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  FString local_78;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  ForAnyElementType FStack_58;
  ulonglong local_50;
  void *local_48;
  FMRSWRecursiveAccessDetector *local_40;
  bool local_38;
  
  piVar2 = TAttribute<int>::Get(&this->WidgetIndex);
  if (*piVar2 != param_1) {
    SWidget::Invalidate((SWidget *)this,ChildOrder);
    piVar2 = TAttribute<int>::Get(&this->WidgetIndex);
    iVar1 = *piVar2;
    if (((iVar1 < 0) || ((this->AllChildren).Children.ArrayNum <= iVar1)) ||
       (pFVar3 = TPanelChildren<FBasicLayoutWidgetSlot>::operator[](&this->AllChildren,iVar1),
       pFVar3 == (FBasicLayoutWidgetSlot *)0x0)) {
      if (5 < (byte)LogSlate._0_1_) {
        if ((param_1 < 0) || ((this->AllChildren).Children.ArrayNum <= param_1)) {
          pTVar5 = (TReferenceControllerBase<1> *)0x0;
          pSVar4 = (SWidget *)0x0;
        }
        else {
          pFVar3 = TPanelChildren<FBasicLayoutWidgetSlot>::operator[](&this->AllChildren,param_1);
          pTVar5 = *(TReferenceControllerBase<1> **)&pFVar3->field_0x18;
          pSVar4 = *(SWidget **)&pFVar3->field_0x10;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        FReflectionMetaData::GetWidgetDebugInfo((FString *)local_68,pSVar4);
        FReflectionMetaData::GetWidgetDebugInfo((FString *)&local_48,(SWidget *)this);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
        if (local_48 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48);
        }
        if ((void *)CONCAT44(local_68._4_4_,local_68._0_4_) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(local_68._4_4_,local_68._0_4_));
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      }
    }
    else {
      pSVar4 = *(SWidget **)&pFVar3->field_0x10;
      SWidget::InvalidateChildRemovedFromTree((SWidget *)this,pSVar4);
      if (5 < (byte)LogSlate._0_1_) {
        FReflectionMetaData::GetWidgetDebugInfo((FString *)&local_48,pSVar4);
        if ((param_1 < 0) || ((this->AllChildren).Children.ArrayNum <= param_1)) {
          pTVar5 = (TReferenceControllerBase<1> *)0x0;
          pSVar4 = (SWidget *)0x0;
        }
        else {
          pFVar3 = TPanelChildren<FBasicLayoutWidgetSlot>::operator[](&this->AllChildren,param_1);
          pTVar5 = *(TReferenceControllerBase<1> **)&pFVar3->field_0x18;
          pSVar4 = *(SWidget **)&pFVar3->field_0x10;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        FReflectionMetaData::GetWidgetDebugInfo((FString *)local_68,pSVar4);
        FReflectionMetaData::GetWidgetDebugInfo(&local_78,(SWidget *)this);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if ((void *)CONCAT44(local_68._4_4_,local_68._0_4_) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(local_68._4_4_,local_68._0_4_));
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
        if (local_48 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48);
        }
      }
    }
    local_50 = 0;
    local_68[4] = 1;
    local_60 = (undefined1  [8])0x0;
    FStack_58.Data = (FScriptContainerElement *)0x0;
    (this->WidgetIndex).Value = param_1;
    (this->WidgetIndex).bIsSet = true;
    local_68._0_4_ = param_1;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->WidgetIndex).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
               (FWriteAccessScope *)&local_48);
    if (((int)local_50 != 0) && (FStack_58.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_58.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_58,0,0,0x10);
      local_50 = local_50 & 0xffffffff00000000;
    }
    if (local_38 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40,(FDestructionSentinel *)&local_48);
    }
    if (FStack_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_60);
  }
  return;
}

// Slot @ 142a0e490

FSlotArguments * __cdecl SWidgetSwitcher::Slot(FSlotArguments *__return_storage_ptr__)

{
  FBasicLayoutWidgetSlot *this;
  FBasicLayoutWidgetSlot *local_res8 [4];
  
  this = ::operator_new(0x40);
  local_res8[0] = (FBasicLayoutWidgetSlot *)0x0;
  if (this != (FBasicLayoutWidgetSlot *)0x0) {
    *(undefined8 *)this = 0;
    *(undefined8 *)&this->field_0x8 = 0;
    *(undefined8 *)&this->field_0x10 = 0;
    *(undefined8 *)&this->field_0x18 = 0;
    *(undefined8 *)&this->field_0x20 = 0;
    *(undefined8 *)&this->field_0x28 = 0;
    *(undefined8 *)&this->field_0x30 = 0;
    *(undefined8 *)&this->field_0x38 = 0;
    local_res8[0] = FBasicLayoutWidgetSlot::FBasicLayoutWidgetSlot(this);
  }
  TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::FSlotArguments::FSlotArguments
            (__return_storage_ptr__,(FBasicLayoutWidgetSlot *)local_res8);
  return __return_storage_ptr__;
}

// ValidatePathToChild @ 142a14f10

bool __thiscall SWidgetSwitcher::ValidatePathToChild(SWidgetSwitcher *this,SWidget *param_1)

{
  int iVar1;
  int *piVar2;
  FBasicLayoutWidgetSlot *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  
  piVar2 = TAttribute<int>::Get(&this->WidgetIndex);
  iVar1 = *piVar2;
  if ((-1 < iVar1) && (iVar1 < (this->AllChildren).Children.ArrayNum)) {
    pFVar3 = TPanelChildren<FBasicLayoutWidgetSlot>::operator[](&this->AllChildren,iVar1);
    if (pFVar3 != (FBasicLayoutWidgetSlot *)0x0) {
      pTVar4 = *(TReferenceControllerBase<1> **)&pFVar3->field_0x18;
      pSVar5 = *(SWidget **)&pFVar3->field_0x10;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_142a14f5f;
    }
  }
  pTVar4 = (TReferenceControllerBase<1> *)0x0;
  pSVar5 = (SWidget *)0x0;
LAB_142a14f5f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return param_1 == pSVar5;
}

