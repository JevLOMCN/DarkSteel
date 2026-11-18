// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// StaticStruct @ 14e11f110

UScriptStruct * __cdecl FOptimusValidatedName::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusValidatedName.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusValidatedName.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusValidatedName,(UObject *)pUVar1,
                         L"OptimusValidatedName");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusValidatedName.OuterSingleton;
}

// IsValid @ 14e1f0d70

bool __cdecl FOptimusValidatedName::IsValid(FString *param_1,FText *param_2,FText *param_3)

{
  bool bVar1;
  FString local_18;
  
  ::FString::FString(&local_18,InvalidCharacters);
  bVar1 = ::FName::IsValidXName(param_1,&local_18,param_2,param_3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// SerializeFromMismatchedTag @ 14e21ba70

bool __thiscall
FOptimusValidatedName::SerializeFromMismatchedTag
          (FOptimusValidatedName *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FName FVar1;
  bool bVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FName *pFVar4;
  FName FVar5;
  int iVar6;
  FName FVar7;
  FName local_res10;
  FString local_18;
  
  FVar1 = param_1->Type;
  FVar3 = FNameEntryId::FromValidEName((EName)&local_res10);
  FVar7.Number = 0;
  FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  if (FVar1 == FVar7) {
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
              (*(longlong **)(*(longlong *)param_2 + 8),this);
    bVar2 = true;
  }
  else {
    FVar1 = param_1->Type;
    FVar3 = FNameEntryId::FromValidEName((EName)&local_res10);
    FVar5.Number = 0;
    FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar3.Value);
    if (FVar1 == FVar5) {
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      ::operator<<(*(FArchive **)(*(longlong *)param_2 + 8),&local_18);
      iVar6 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      pFVar4 = ::FName::FName(&local_res10,iVar6,(wchar_t *)local_18.Data.AllocatorInstance.Data,
                              FNAME_Add);
      this->Name = *pFVar4;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

