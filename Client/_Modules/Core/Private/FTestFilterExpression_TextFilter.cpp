// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// TestFilterExpressionImpl @ 141970330

bool __thiscall
TextFilterTests::FTestFilterExpression_TextFilter::TestFilterExpressionImpl
          (FTestFilterExpression_TextFilter *this,wchar_t *param_1,FTestFilterItem *param_2,
          FText *param_3)

{
  TTextFilter<TextFilterTests::FTestFilterItem_const_*> *pTVar1;
  bool bVar2;
  undefined1 uVar3;
  FText *pFVar4;
  undefined1 local_res8 [8];
  FText local_18;
  
  pTVar1 = this->TextFilter;
  pFVar4 = FText::FromString(&local_18,param_1);
  bVar2 = FTextFilterExpressionEvaluator::SetFilterText
                    (&pTVar1->TextFilterExpressionEvaluator,pFVar4);
  if (bVar2) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pTVar1->ChangedEvent);
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pTVar1 = this->TextFilter;
  local_18.TextData.Reference =
       (pTVar1->TextFilterExpressionEvaluator).FilterErrorText.TextData.Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = (pTVar1->TextFilterExpressionEvaluator).FilterErrorText.Flags;
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x0001419703ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(this->TextFilter->_padding_ + 0x10))(this->TextFilter,param_2);
  return (bool)uVar3;
}

