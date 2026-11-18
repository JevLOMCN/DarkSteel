// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 3

// ~FTextFilterExpressionContext @ 14d83aa70

void __thiscall
TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FTextFilterExpressionContext::
~FTextFilterExpressionContext(FTextFilterExpressionContext *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FString,int>
            ((FString *)(this->ItemBasicStrings).AllocatorInstance.Data,
             (this->ItemBasicStrings).ArrayNum);
  pFVar1 = (this->ItemBasicStrings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->TestComplexExpressionDelegate);
  pvVar2 = *(void **)&(this->TestComplexExpressionDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TestComplexExpressionDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->TransformArrayDelegate);
  pvVar2 = *(void **)&(this->TransformArrayDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TransformArrayDelegate);
  this->_padding_ = (longlong)&___7ITextFilterExpressionContext__6B_;
  return;
}

// TestBasicStringExpression @ 14d88a1b0

bool __thiscall
TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FTextFilterExpressionContext::
TestBasicStringExpression
          (FTextFilterExpressionContext *this,FTextFilterString *param_1,
          ETextFilterTextComparisonMode param_2)

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FTextFilterString local_48;
  
  iVar1 = (this->ItemBasicStrings).ArrayNum;
  pFVar3 = (this->ItemBasicStrings).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ItemBasicStrings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) {
      return false;
    }
    FTextFilterString::FTextFilterString(&local_48,(FString *)pFVar3);
    bVar2 = TextFilterUtils::TestBasicStringExpression(&local_48,param_1,param_2);
    if (local_48.InternalStringAnsi.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.InternalStringAnsi.AllocatorInstance.Data);
    }
    if (local_48.InternalString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.InternalString.Data.AllocatorInstance.Data);
    }
    if (bVar2) break;
    pFVar3 = pFVar3 + 0x10;
  }
  return true;
}

// TestComplexExpression @ 14d88a270

bool __thiscall
TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FTextFilterExpressionContext::
TestComplexExpression
          (FTextFilterExpressionContext *this,FName *param_1,FTextFilterString *param_2,
          ETextFilterComparisonOperation param_3,ETextFilterTextComparisonMode param_4)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  FReadAccessScope local_48;
  FReadAccessScope local_30;
  
  if (this->ItemPtr != (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->TestComplexExpressionDelegate,&local_48);
    if (((*(int *)&(this->TestComplexExpressionDelegate).field_0x10 != 0) &&
        (plVar3 = *(longlong **)&(this->TestComplexExpressionDelegate).field_0x8,
        plVar3 != (longlong *)0x0)) && (cVar1 = (**(code **)(*plVar3 + 0x38))(), cVar1 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      local_48.DestructionSentinel.Accessor =
           (FMRSWRecursiveAccessDetector *)(this->ItemPtr->SharedReferenceCount).ReferenceController
      ;
      local_48.DestructionSentinel._0_8_ = this->ItemPtr->Object;
      if ((TReferenceControllerBase<1> *)local_48.DestructionSentinel.Accessor !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)local_48.DestructionSentinel.Accessor)->SharedReferenceCount
             = (atomic<int>)
               ((int)((TReferenceControllerBase<1> *)local_48.DestructionSentinel.Accessor)->
                     SharedReferenceCount + 1);
        UNLOCK();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->TestComplexExpressionDelegate,&local_30);
      if (*(int *)&(this->TestComplexExpressionDelegate).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->TestComplexExpressionDelegate).field_0x8;
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))(plVar3,&local_48,param_1,param_2,param_3,param_4);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return (bool)uVar2;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
  }
  return false;
}

