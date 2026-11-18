// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// TestFilterExpressionImpl @ 141970400

bool __thiscall
TextFilterTests::FTestFilterExpression_TextFilterExpressionEvaluator::TestFilterExpressionImpl
          (FTestFilterExpression_TextFilterExpressionEvaluator *this,wchar_t *param_1,
          FTestFilterItem *param_2,FText *param_3)

{
  FTextFilterExpressionEvaluator *pFVar1;
  undefined1 uVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  FText local_18;
  
  pFVar1 = this->TextFilterExpressionEvaluator;
  pFVar3 = FText::FromString(&local_18,param_1);
  FTextFilterExpressionEvaluator::SetFilterText(pFVar1,pFVar3);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar1 = this->TextFilterExpressionEvaluator;
  local_18.TextData.Reference = (pFVar1->FilterErrorText).TextData.Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = (pFVar1->FilterErrorText).Flags;
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar1 = this->TextFilterExpressionEvaluator;
  if (pFVar1->FilterType == Empty) {
    uVar2 = 1;
  }
  else if ((pFVar1->CompiledFilter).bIsSet == false) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,&pFVar1->CompiledFilter,param_2,0);
  }
  return (bool)uVar2;
}

