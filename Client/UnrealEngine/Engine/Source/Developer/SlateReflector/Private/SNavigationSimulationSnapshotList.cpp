// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 7

// ~SNavigationSimulationSnapshotList @ 142e14cc0

void __thiscall
SNavigationSimulationSnapshotList::~SNavigationSimulationSnapshotList
          (SNavigationSimulationSnapshotList *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnNavigateToSnapshotWidget);
  pvVar1 = *(void **)&(this->OnNavigateToSnapshotWidget).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNavigateToSnapshotWidget);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSnapshotWidgetSelected);
  pvVar1 = *(void **)&(this->OnSnapshotWidgetSelected).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSnapshotWidgetSelected);
  DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
            ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// Construct @ 142e414d0

void __thiscall
SNavigationSimulationSnapshotList::Construct
          (SNavigationSimulationSnapshotList *this,FArguments *param_1,
          TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy> *param_2,
          TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy> *param_3)

{
  TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::operator=
            (&this->OnSnapshotWidgetSelected,param_2);
  TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::operator=
            (&this->OnNavigateToSnapshotWidget,param_3);
  SNavigationSimulationListBase::Construct((SNavigationSimulationListBase *)this,param_1,Snapshot);
  return;
}

// HandleNavigateToWidgetImpl @ 142eb0fe0

void __thiscall
SNavigationSimulationSnapshotList::HandleNavigateToWidgetImpl
          (SNavigationSimulationSnapshotList *this,TWeakPtr<SWidget_const_,1> *param_1,
          ulong64 param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  FReadAccessScope local_28;
  
  if (param_2 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnNavigateToSnapshotWidget,&local_28);
    if ((*(int *)&(this->OnNavigateToSnapshotWidget).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->OnNavigateToSnapshotWidget).field_0x8,
       plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))(plVar3,param_2);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  pTVar4 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000142eb1067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      return;
    }
  }
  return;
}

// HandleSourceListSelectionChangedImpl @ 142eb6700

void __thiscall
SNavigationSimulationSnapshotList::HandleSourceListSelectionChangedImpl
          (SNavigationSimulationSnapshotList *this,
          TSharedPtr<FNavigationSimulationWidgetNode,1> *param_1)

{
  ulong64 uVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  if (param_1->Object != (FNavigationSimulationWidgetNode *)0x0) {
    uVar1 = (param_1->Object->NavigationSource).WidgetPtr;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnSnapshotWidgetSelected,&local_28);
    if ((*(int *)&(this->OnSnapshotWidgetSelected).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OnSnapshotWidgetSelected).field_0x8,
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,uVar1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnSnapshotWidgetSelected,&local_28);
  if ((*(int *)&(this->OnSnapshotWidgetSelected).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnSnapshotWidgetSelected).field_0x8, plVar2 != (longlong *)0x0)
     ) {
    (**(code **)(*plVar2 + 0x68))(plVar2,0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// PaintNodesWithOffset @ 142ee1750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SNavigationSimulationSnapshotList::PaintNodesWithOffset
          (SNavigationSimulationSnapshotList *this,FGeometry *param_1,
          FSlateWindowElementList *param_2,int param_3,TVector2<double> *param_4)

{
  int iVar1;
  ulonglong uVar2;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *pTVar3;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *pTVar4;
  TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [8];
  TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> local_120;
  code *local_110;
  ForAnyElementType **local_108;
  ForAnyElementType *local_100;
  FGeometry *local_f8;
  double local_f0;
  double dStack_e8;
  FOverlayBrushes local_d8;
  ForAnyElementType local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  SNavigationSimulationListBase::GetSelectedItems((SNavigationSimulationListBase *)this,&local_120);
  if (local_120.ArrayNum < 1) {
    pTVar5 = (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *)
             &this->_padding_;
  }
  else {
    pTVar5 = &local_120;
  }
  local_88.MaxBits = 0x80;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.NumBits = 0;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_68 = 0xffffffff;
  NavigationSimulationOverlay::FOverlayBrushes::FOverlayBrushes(&local_d8);
  iVar1 = (int)*(longlong *)&pTVar5->ArrayNum;
  pTVar3 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)(pTVar5->AllocatorInstance).Data;
  pTVar4 = pTVar3 + iVar1;
  while( true ) {
    if ((int)*(longlong *)&pTVar5->ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FNavigationSimulationWidgetNode,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_128);
    }
    if (pTVar3 == pTVar4) break;
    local_100 = &local_98;
    local_110 = UE::Core::Private::Function::
                TFunctionRefCaller<`FNavigationSimulationOverlay::PaintSnapshotNode'::__l6::<lambda_1>,TOptional<FPaintGeometry>,FNavigationSimulationWidgetInfo_const_&>
                ::Call;
    local_f0 = (param_4->field0_0x0)._s_0.X;
    dStack_e8 = (param_4->field0_0x0)._s_0.Y;
    local_108 = &local_100;
    local_f8 = param_1;
    NavigationSimulationOverlay::Paint
              (&local_d8,pTVar3,
               (TFunctionRef<TOptional<FPaintGeometry>___cdecl(FNavigationSimulationWidgetInfo_const_&)>
                *)&local_110,param_2,param_3 + 1);
    pTVar3 = pTVar3 + 1;
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  uVar2 = local_90 >> 0x20;
  local_90 = local_90 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0,&local_98,0,(int *)((longlong)&local_90 + 4));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_88.NumBits = 0;
  if (0x80 < (uint)local_88.MaxBits) {
    local_88.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
  }
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
            ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)local_120.AllocatorInstance.Data,
             local_120.ArrayNum);
  if ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)local_120.AllocatorInstance.Data !=
      (TSharedPtr<FNavigationSimulationWidgetNode,1> *)0x0) {
    FMemory::Free(local_120.AllocatorInstance.Data);
  }
  return param_3 + 1;
}

// PaintSimuationResult @ 142ee2ce0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SNavigationSimulationSnapshotList::PaintSimuationResult
          (SNavigationSimulationSnapshotList *this,FGeometry *param_1,FSlateRect *param_2,
          FSlateWindowElementList *param_3,int param_4)

{
  return param_4;
}

// SelectWidget @ 142f03350

void __thiscall
SNavigationSimulationSnapshotList::SelectWidget
          (SNavigationSimulationSnapshotList *this,TSharedPtr<SWidget,1> *param_1)

{
  return;
}

