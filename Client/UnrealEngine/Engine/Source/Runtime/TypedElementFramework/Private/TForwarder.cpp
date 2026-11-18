// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 1

// operator() @ 142ce7730

void __thiscall
`UE::Editor::DataStorage::Queries::Private::
TForwarder<UE::Editor::DataStorage::Queries::IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>_>
::
ForEachRow<``UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l125::<lambda_15>::operator()'::__l2::<lambda_1>,FTestColumnString,FTestColumnInt_const_>'
::__l4::<lambda_1>::operator()(void *this,FTestColumnString **param_1,FTestColumnInt **param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString local_18;
  
  *param_2 = *param_2 + 1;
  pFVar1 = &(*param_1)->TestString;
  *param_1 = (FTestColumnString *)(pFVar1 + 1);
  ::FString::PrintfImpl(&local_18,L"Test: %i");
  if (pFVar1 != &local_18) {
    pFVar2 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&(pFVar1->Data).AllocatorInstance)->
             AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&(pFVar1->Data).AllocatorInstance)->
    AllocatorInstance).Data = local_18.Data.AllocatorInstance.Data;
    (pFVar1->Data).ArrayNum = local_18.Data.ArrayNum;
    (pFVar1->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

