// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// ~TTextFilter<TextFilterTests::FTestFilterItem_const_*> @ 14191b060

void __thiscall
TTextFilter<TextFilterTests::FTestFilterItem_const_*>::
~TTextFilter<TextFilterTests::FTestFilterItem_const_*>
          (TTextFilter<TextFilterTests::FTestFilterItem_const_*> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
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
  DestructItems<FString,int>
            ((FString *)(this->TextFilterExpressionContext).ItemBasicStrings.AllocatorInstance.Data,
             (this->TextFilterExpressionContext).ItemBasicStrings.ArrayNum);
  pFVar4 = (this->TextFilterExpressionContext).ItemBasicStrings.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->TextFilterExpressionContext).TestComplexExpressionDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->TextFilterExpressionContext).TransformArrayDelegate);
  (this->TextFilterExpressionContext)._padding_ = (longlong)&___7ITextFilterExpressionContext__6B_;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  this->_padding_ = (longlong)&___7__IFilter_PEBUFTestFilterItem_TextFilterTests____6B_;
  return;
}

// OnChanged @ 141957520

FChangedEvent * __thiscall
TTextFilter<TextFilterTests::FTestFilterItem_const_*>::OnChanged
          (TTextFilter<TextFilterTests::FTestFilterItem_const_*> *this)

{
  return &this->ChangedEvent;
}

// PassesFilter @ 14195a350

bool __thiscall
TTextFilter<TextFilterTests::FTestFilterItem_const_*>::PassesFilter
          (TTextFilter<TextFilterTests::FTestFilterItem_const_*> *this,FTestFilterItem *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 uVar4;
  longlong *plVar5;
  FTestFilterItem *local_res10;
  FReadAccessScope local_38;
  
  if ((this->TextFilterExpressionEvaluator).FilterType != Empty) {
    (this->TextFilterExpressionContext).ItemPtr = &local_res10;
    local_res10 = param_1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->TextFilterExpressionContext).TransformArrayDelegate,&local_38);
    plVar5 = (longlong *)0x0;
    if (*(int *)&(this->TextFilterExpressionContext).TransformArrayDelegate.field_0x10 != 0) {
      plVar5 = *(longlong **)&(this->TextFilterExpressionContext).TransformArrayDelegate.field_0x8;
    }
    (**(code **)(*plVar5 + 0x60))(plVar5,param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    if ((this->TextFilterExpressionEvaluator).FilterType == Empty) {
      uVar4 = 1;
    }
    else if ((this->TextFilterExpressionEvaluator).CompiledFilter.bIsSet == false) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)((this->TextFilterExpressionEvaluator)._padding_ + 0x10))
                        (&this->TextFilterExpressionEvaluator,
                         &(this->TextFilterExpressionEvaluator).CompiledFilter,
                         &this->TextFilterExpressionContext,0);
    }
    piVar1 = &(this->TextFilterExpressionContext).ItemBasicStrings.ArrayMax;
    (this->TextFilterExpressionContext).ItemPtr = (FTestFilterItem **)0x0;
    pFVar3 = (this->TextFilterExpressionContext).ItemBasicStrings.AllocatorInstance.Data;
    iVar2 = (this->TextFilterExpressionContext).ItemBasicStrings.ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FString,int>((FString *)pFVar3,iVar2);
      (this->TextFilterExpressionContext).ItemBasicStrings.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->TextFilterExpressionContext).ItemBasicStrings.AllocatorInstance,
                   0,piVar1);
      }
    }
    else {
      DestructItems<FString,int>((FString *)pFVar3,iVar2);
      (this->TextFilterExpressionContext).ItemBasicStrings.ArrayNum = 0;
    }
    return (bool)uVar4;
  }
  return true;
}

