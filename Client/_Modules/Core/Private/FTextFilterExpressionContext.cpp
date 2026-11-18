// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// TestBasicStringExpression @ 14196fce0

bool __thiscall
TTextFilter<TextFilterTests::FTestFilterItem_const_*>::FTextFilterExpressionContext::
TestBasicStringExpression
          (FTextFilterExpressionContext *this,FTextFilterString *param_1,
          ETextFilterTextComparisonMode param_2)

{
  int iVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  int iVar8;
  undefined1 local_res8 [8];
  FTextFilterString local_48;
  
  iVar1 = (this->ItemBasicStrings).ArrayNum;
  pFVar5 = (this->ItemBasicStrings).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->ItemBasicStrings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar6) {
      return false;
    }
    ::FString::FString(&local_48.InternalString,(FString *)pFVar5);
    local_48.InternalStringAnsi.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.InternalStringAnsi.ArrayNum = 0;
    local_48.InternalStringAnsi.ArrayMax = 0;
    FTextFilterString::UppercaseInternalString(&local_48);
    iVar4 = (param_1->InternalString).Data.ArrayNum;
    iVar8 = 0;
    if (iVar4 == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(param_1->InternalString).Data.AllocatorInstance.Data;
      iVar8 = iVar4 + -1;
    }
    iVar4 = local_48.InternalString.Data.ArrayNum + -1;
    FVar2.Data = local_48.InternalString.Data.AllocatorInstance.Data;
    if (local_48.InternalString.Data.ArrayNum == 0) {
      iVar4 = 0;
      FVar2.Data = (FScriptContainerElement *)L"";
    }
    bVar3 = TextFilterInternal::CompareStrings<wchar_t>
                      ((wchar_t *)FVar2.Data,iVar4,pwVar7,iVar8,param_2,CaseSensitive);
    if (local_48.InternalStringAnsi.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.InternalStringAnsi.AllocatorInstance.Data);
    }
    if (local_48.InternalString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.InternalString.Data.AllocatorInstance.Data);
    }
    if (bVar3) break;
    pFVar5 = pFVar5 + 0x10;
  }
  return true;
}

// TestComplexExpression @ 14196ff10

bool __thiscall
TTextFilter<TextFilterTests::FTestFilterItem_const_*>::FTextFilterExpressionContext::
TestComplexExpression
          (FTextFilterExpressionContext *this,FName *param_1,FTextFilterString *param_2,
          ETextFilterComparisonOperation param_3,ETextFilterTextComparisonMode param_4)

{
  FTestFilterItem *pFVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  if (this->ItemPtr != (FTestFilterItem **)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->TestComplexExpressionDelegate,&local_28);
    if (((*(int *)&(this->TestComplexExpressionDelegate).field_0x10 != 0) &&
        (plVar4 = *(longlong **)&(this->TestComplexExpressionDelegate).field_0x8,
        plVar4 != (longlong *)0x0)) && (cVar2 = (**(code **)(*plVar4 + 0x38))(), cVar2 != '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      pFVar1 = *this->ItemPtr;
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

