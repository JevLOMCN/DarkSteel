// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 4

// TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> @ 14d834790

TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> * __thiscall
TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
          (TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this,
          TDelegate<void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pTVar4;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  ulonglong local_48;
  FDestructionSentinel local_40;
  FReadAccessScope local_28;
  
  this->_padding_ =
       (longlong)&___7__TTextFilter_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00____6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->TextFilterExpressionContext)._padding_ =
       (longlong)
       &
       ___7FTextFilterExpressionContext___TTextFilter_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00____6B_
  ;
  local_48 = 0;
  local_58 = (undefined1  [8])0x0;
  local_50.Data = (FScriptContainerElement *)0x0;
  TDelegate<void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
            (&(this->TextFilterExpressionContext).TransformArrayDelegate,param_1);
  TDelegate<bool___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FName_const_&,FTextFilterString_const_&,enum_ETextFilterComparisonOperation,enum_ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
  ::
  TDelegate<bool___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FName_const_&,FTextFilterString_const_&,enum_ETextFilterComparisonOperation,enum_ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
            (&(this->TextFilterExpressionContext).TestComplexExpressionDelegate,
             (TDelegate<bool___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FName_const_&,FTextFilterString_const_&,ETextFilterComparisonOperation,ETextFilterTextComparisonMode),FDefaultDelegateUserPolicy>
              *)local_58);
  (this->TextFilterExpressionContext).ItemPtr =
       (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)0x0;
  (this->TextFilterExpressionContext).ItemBasicStrings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TextFilterExpressionContext).ItemBasicStrings.ArrayNum = 0;
  (this->TextFilterExpressionContext).ItemBasicStrings.ArrayMax = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if (((int)local_48 != 0) && (local_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
    local_48 = local_48 & 0xffffffff00000000;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  FTextFilterExpressionEvaluator::FTextFilterExpressionEvaluator
            (&this->TextFilterExpressionEvaluator,BasicString);
  *(undefined8 *)&this->ChangedEvent = 0;
  *(undefined8 *)&(this->ChangedEvent).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedEvent).field_0x10 = 0;
  *(undefined8 *)&(this->ChangedEvent).field_0x18 = 2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
  if (((*(int *)&param_1->field_0x10 == 0) || (*(longlong **)&param_1->field_0x8 == (longlong *)0x0)
      ) || (cVar2 = (**(code **)(**(longlong **)&param_1->field_0x8 + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InTransformDelegate.IsBound()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TextFilter.h"
                       ,0x27,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)(*pcVar1)();
      return pTVar4;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return this;
}

// ~TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> @ 14d838d00

void __thiscall
TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
~TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
          (TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedEvent).field_0x8,*(int *)&(this->ChangedEvent).field_0x10);
  pvVar3 = *(void **)&(this->ChangedEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedEvent);
  FTextFilterExpressionEvaluator::~FTextFilterExpressionEvaluator
            (&this->TextFilterExpressionEvaluator);
  FTextFilterExpressionContext::~FTextFilterExpressionContext(&this->TextFilterExpressionContext);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  this->_padding_ =
       (longlong)&___7__IFilter_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00____6B_;
  return;
}

// OnChanged @ 14d873a70

FChangedEvent * __thiscall
TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::OnChanged
          (TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this)

{
  return &this->ChangedEvent;
}

// PassesFilter @ 14d87df80

bool __thiscall
TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::PassesFilter
          (TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this,
          TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FTreeNode *pFVar4;
  FScriptContainerElement *pFVar5;
  ETextFilterExpressionType EVar6;
  bool bVar7;
  longlong *plVar8;
  FTreeNode *local_58;
  TReferenceControllerBase<1> *local_50;
  FReadAccessScope local_48;
  
  EVar6 = FTextFilterExpressionEvaluator::GetFilterType(&this->TextFilterExpressionEvaluator);
  if (EVar6 != Empty) {
    (this->TextFilterExpressionContext).ItemPtr = param_1;
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar4 = param_1->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->TextFilterExpressionContext).TransformArrayDelegate,&local_48);
    plVar8 = (longlong *)0x0;
    if (*(int *)&(this->TextFilterExpressionContext).TransformArrayDelegate.field_0x10 != 0) {
      plVar8 = *(longlong **)&(this->TextFilterExpressionContext).TransformArrayDelegate.field_0x8;
    }
    local_58 = pFVar4;
    local_50 = pTVar3;
    (**(code **)(*plVar8 + 0x60))(plVar8,&local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    bVar7 = FTextFilterExpressionEvaluator::TestTextFilter
                      (&this->TextFilterExpressionEvaluator,
                       (ITextFilterExpressionContext *)&this->TextFilterExpressionContext);
    piVar1 = &(this->TextFilterExpressionContext).ItemBasicStrings.ArrayMax;
    (this->TextFilterExpressionContext).ItemPtr =
         (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)0x0;
    pFVar5 = (this->TextFilterExpressionContext).ItemBasicStrings.AllocatorInstance.Data;
    iVar2 = (this->TextFilterExpressionContext).ItemBasicStrings.ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FString,int>((FString *)pFVar5,iVar2);
      (this->TextFilterExpressionContext).ItemBasicStrings.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->TextFilterExpressionContext).ItemBasicStrings.AllocatorInstance,
                   0,piVar1);
      }
    }
    else {
      DestructItems<FString,int>((FString *)pFVar5,iVar2);
      (this->TextFilterExpressionContext).ItemBasicStrings.ArrayNum = 0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return bVar7;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

