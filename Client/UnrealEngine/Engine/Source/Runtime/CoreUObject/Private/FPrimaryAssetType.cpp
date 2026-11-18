// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// StaticStruct @ 14211f440

UScriptStruct * __cdecl FPrimaryAssetType::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPrimaryAssetType.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FPrimaryAssetType.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPrimaryAssetType,(UObject *)pUVar1,
                         L"PrimaryAssetType");
  }
  return Z_Registration_Info_UScriptStruct_FPrimaryAssetType.OuterSingleton;
}

// ExportTextItem @ 142138d60

bool __thiscall
FPrimaryAssetType::ExportTextItem
          (FPrimaryAssetType *this,FString *param_1,FPrimaryAssetType *param_2,UObject *param_3,
          int param_4,UObject *param_5)

{
  ForAnyElementType FVar1;
  int iVar2;
  FString local_28;
  FString local_18;
  
  if ((param_4 & 1U) == 0) {
    ::FName::ToString(&this->Name,&local_28);
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
  }
  else {
    ::FName::ToString(&this->Name,&local_28);
    ::FString::ReplaceCharWithEscapedCharInline
              (&local_28,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
    FVar1.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::FString::PrintfImpl(&local_18,L"\"%s\"");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (FVar1.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar1.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return true;
}

// ImportTextItem @ 1421422e0

bool __thiscall
FPrimaryAssetType::ImportTextItem
          (FPrimaryAssetType *this,wchar_t **param_1,int param_2,UObject *param_3,
          FOutputDevice *param_4)

{
  wchar_t *pwVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  FName local_28;
  FString local_20;
  
  ::FString::FString(&local_20,L"");
  pwVar1 = FPropertyHelpers::ReadToken(*param_1,&local_20,true);
  if (pwVar1 == (wchar_t *)0x0) {
    bVar2 = false;
  }
  else {
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_20.Data.ArrayNum != 0) {
      FVar3.Data = local_20.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_28,(wchar_t *)FVar3.Data);
    bVar2 = true;
    this->Name = local_28;
    *param_1 = pwVar1;
  }
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// SerializeFromMismatchedTag @ 14214d710

bool __thiscall
FPrimaryAssetType::SerializeFromMismatchedTag
          (FPrimaryAssetType *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FName FVar1;
  bool bVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FName FVar4;
  ForAnyElementType FVar5;
  FName FVar6;
  FName local_res10;
  FString local_18;
  
  FVar1 = param_1->Type;
  FVar3 = FNameEntryId::FromValidEName((EName)&local_res10);
  FVar6.Number = 0;
  FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  if (FVar1 == FVar6) {
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
              (*(longlong **)(*(longlong *)param_2 + 8),&local_res10);
    this->Name = local_res10;
    bVar2 = true;
  }
  else {
    FVar1 = param_1->Type;
    FVar3 = FNameEntryId::FromValidEName((EName)&local_res10);
    FVar4.Number = 0;
    FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar3.Value);
    if (FVar1 == FVar4) {
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      ::operator<<(*(FArchive **)(*(longlong *)param_2 + 8),&local_18);
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar5.Data = local_18.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_res10,(wchar_t *)FVar5.Data);
      this->Name = local_res10;
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

