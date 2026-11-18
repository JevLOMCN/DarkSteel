// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// TestBasicStringExpression @ 141834010

bool __thiscall
FBasicStringFilterExpressionContext::TestBasicStringExpression
          (FBasicStringFilterExpressionContext *this,FTextFilterString *param_1,
          ETextFilterTextComparisonMode param_2)

{
  bool bVar1;
  FTextFilterString local_28;
  
  FTextFilterString::FTextFilterString(&local_28,&this->TestString);
  bVar1 = TextFilterUtils::TestBasicStringExpression(&local_28,param_1,param_2);
  if (local_28.InternalStringAnsi.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.InternalStringAnsi.AllocatorInstance.Data);
  }
  if (local_28.InternalString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.InternalString.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// TestComplexExpression @ 141834080

bool __thiscall
FBasicStringFilterExpressionContext::TestComplexExpression
          (FBasicStringFilterExpressionContext *this,FName *param_1,FTextFilterString *param_2,
          ETextFilterComparisonOperation param_3,ETextFilterTextComparisonMode param_4)

{
  return false;
}

