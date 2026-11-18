// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 6

// SelectWidget @ 142de0260

void __thiscall
SNavigationSimulationLiveList::SelectWidget
          (SNavigationSimulationLiveList *this,TSharedPtr<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<SWidget_const_,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  SNavigationSimulationListBase::SelectLiveWidget((SNavigationSimulationListBase *)this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// PaintSimuationResult @ 142de02a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SNavigationSimulationLiveList::PaintSimuationResult
          (SNavigationSimulationLiveList *this,FGeometry *param_1,FSlateRect *param_2,
          FSlateWindowElementList *param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *pTVar3;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *pTVar4;
  TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> local_100;
  ForAnyElementType *local_f0;
  code *local_e8;
  ForAnyElementType **local_e0;
  FOverlayBrushes local_d8;
  ForAnyElementType local_98;
  undefined8 local_90;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  SNavigationSimulationListBase::GetSelectedItems((SNavigationSimulationListBase *)this,&local_100);
  if (local_100.ArrayNum < 1) {
    pTVar5 = (TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *)
             &this->_padding_;
  }
  else {
    pTVar5 = &local_100;
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
      operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    if (pTVar3 == pTVar4) break;
    local_f0 = &local_98;
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FNavigationSimulationOverlay::PaintLiveNode'::__l6::<lambda_1>,TOptional<FPaintGeometry>,FNavigationSimulationWidgetInfo_const_&>
               ::Call;
    local_e0 = &local_f0;
    NavigationSimulationOverlay::Paint
              (&local_d8,pTVar3,
               (TFunctionRef<TOptional<FPaintGeometry>___cdecl(FNavigationSimulationWidgetInfo_const_&)>
                *)&local_e8,param_3,param_4 + 1);
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
            ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)local_100.AllocatorInstance.Data,
             local_100.ArrayNum);
  if ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)local_100.AllocatorInstance.Data !=
      (TSharedPtr<FNavigationSimulationWidgetNode,1> *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  return param_4 + 1;
}

// HandleSourceListSelectionChangedImpl @ 142de0470

void __thiscall
SNavigationSimulationLiveList::HandleSourceListSelectionChangedImpl
          (SNavigationSimulationLiveList *this,
          TSharedPtr<FNavigationSimulationWidgetNode,1> *param_1)

{
  TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy> *this_00;
  FNavigationSimulationWidgetNode *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  bool bVar5;
  TWeakPtr<SWidget_const_,1> local_18;
  
  pFVar1 = param_1->Object;
  this_00 = &this->OnLiveWidgetSelected;
  if (pFVar1 == (FNavigationSimulationWidgetNode *)0x0) {
    local_18.Object = (SWidget *)0x0;
    local_18.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
              (this_00,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return;
  }
  pTVar2 = (pFVar1->NavigationSource).WidgetLive.WeakReferenceCount.ReferenceController;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    local_18.Object = (SWidget *)0x0;
  }
  else {
    aVar3 = pTVar2->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        local_18.Object = (SWidget *)0x0;
        local_18.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>::
        ExecuteIfBound(this_00,&local_18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return;
      }
      LOCK();
      aVar4 = pTVar2->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar5);
    local_18.Object = (pFVar1->NavigationSource).WidgetLive.Object;
    LOCK();
    pTVar2->WeakReferenceCount = (atomic<int>)((int)pTVar2->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_18.WeakReferenceCount.ReferenceController = pTVar2;
  TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
            (this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// HandleNavigateToWidgetImpl @ 142de0530

void __thiscall
SNavigationSimulationLiveList::HandleNavigateToWidgetImpl
          (SNavigationSimulationLiveList *this,TWeakPtr<SWidget_const_,1> *param_1,ulong64 param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  SWidget *pSVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  TWeakPtr<SWidget_const_,1> local_18;
  
  pTVar5 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142de0560;
      }
      LOCK();
      aVar4 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar4;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar6);
    pSVar3 = param_1->Object;
    if (pSVar3 != (SWidget *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
      local_18.Object = pSVar3;
      local_18.WeakReferenceCount.ReferenceController = pTVar5;
      TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (&this->OnNavigateToLiveWidget,&local_18);
    }
  }
LAB_142de0560:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar5 = (param_1->WeakReferenceCount).ReferenceController;
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
  return;
}

// ~SNavigationSimulationLiveList @ 142e14c00

void __thiscall
SNavigationSimulationLiveList::~SNavigationSimulationLiveList(SNavigationSimulationLiveList *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnNavigateToLiveWidget);
  pvVar1 = *(void **)&(this->OnNavigateToLiveWidget).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNavigateToLiveWidget);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnLiveWidgetSelected);
  pvVar1 = *(void **)&(this->OnLiveWidgetSelected).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLiveWidgetSelected);
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

// Construct @ 142e41470

void __thiscall
SNavigationSimulationLiveList::Construct
          (SNavigationSimulationLiveList *this,FArguments *param_1,
          TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy> *param_2,
          TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy> *param_3)

{
  TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>::operator=
            (&this->OnLiveWidgetSelected,param_2);
  TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>::operator=
            (&this->OnNavigateToLiveWidget,param_3);
  SNavigationSimulationListBase::Construct((SNavigationSimulationListBase *)this,param_1,Live);
  return;
}

