// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 2

// StaticStruct @ 14e118740

UScriptStruct * __cdecl FOptimusConstantIdentifier::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusConstantIdentifier.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusConstantIdentifier.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusConstantIdentifier,(UObject *)pUVar1,
                         L"OptimusConstantIdentifier");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusConstantIdentifier.OuterSingleton;
}

// FOptimusConstantIdentifier @ 14e150f50

FOptimusConstantIdentifier * __thiscall
FOptimusConstantIdentifier::FOptimusConstantIdentifier
          (FOptimusConstantIdentifier *this,UOptimusNode *param_1,FName *param_2,FName *param_3)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FName local_res8;
  FString local_18;
  
  (this->NodePath).ComparisonIndex = 0;
  (this->NodePath).Number = 0;
  (this->GroupName).ComparisonIndex = 0;
  (this->GroupName).Number = 0;
  (this->ConstantName).ComparisonIndex = 0;
  (this->ConstantName).Number = 0;
  pFVar1 = UOptimusNode::GetNodePath(param_1,&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar2);
  this->NodePath = local_res8;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->GroupName = *param_2;
  this->ConstantName = *param_3;
  return this;
}

