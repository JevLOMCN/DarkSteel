// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// ~FTextFilterExpressionContext @ 14890e160

void __thiscall
TTextFilter<FAutoCompleteCommand_const_&>::FTextFilterExpressionContext::
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

// TestBasicStringExpression @ 148983a20

bool __thiscall
TTextFilter<FAutoCompleteCommand_const_&>::FTextFilterExpressionContext::TestBasicStringExpression
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

// TestComplexExpression @ 148983ae0

bool __thiscall
TTextFilter<FAutoCompleteCommand_const_&>::FTextFilterExpressionContext::TestComplexExpression
          (FTextFilterExpressionContext *this,FName *param_1,FTextFilterString *param_2,
          ETextFilterComparisonOperation param_3,ETextFilterTextComparisonMode param_4)

{
  FAutoCompleteCommand *pFVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  if (this->ItemPtr != (FAutoCompleteCommand *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->TestComplexExpressionDelegate,&local_28);
    if (((*(int *)&(this->TestComplexExpressionDelegate).field_0x10 != 0) &&
        (plVar4 = *(longlong **)&(this->TestComplexExpressionDelegate).field_0x8,
        plVar4 != (longlong *)0x0)) && (cVar2 = (**(code **)(*plVar4 + 0x38))(), cVar2 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      pFVar1 = this->ItemPtr;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->TestComplexExpressionDelegate,&local_28);
      if (*(int *)&(this->TestComplexExpressionDelegate).field_0x10 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)&(this->TestComplexExpressionDelegate).field_0x8;
      }
      uVar3 = (**(code **)(*plVar4 + 0x60))(plVar4,pFVar1,param_1,param_2,param_3,param_4);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return (bool)uVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  return false;
}

