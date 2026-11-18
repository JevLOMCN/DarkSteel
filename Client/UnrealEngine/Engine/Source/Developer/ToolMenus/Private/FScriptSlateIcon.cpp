// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 5

// StaticStruct @ 142c2d120

UScriptStruct * __cdecl FScriptSlateIcon::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FScriptSlateIcon.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ToolMenus();
    Z_Registration_Info_UScriptStruct_FScriptSlateIcon.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FScriptSlateIcon,(UObject *)pUVar1,
                         L"ScriptSlateIcon");
  }
  return Z_Registration_Info_UScriptStruct_FScriptSlateIcon.OuterSingleton;
}

// FScriptSlateIcon @ 142c38000

FScriptSlateIcon * __thiscall
FScriptSlateIcon::FScriptSlateIcon(FScriptSlateIcon *this,FName param_1,FName param_2,FName param_3)

{
  this->StyleSetName = param_1;
  this->StyleName = param_2;
  this->SmallStyleName = param_3;
  return this;
}

// FScriptSlateIcon @ 142c38020

FScriptSlateIcon * __thiscall
FScriptSlateIcon::FScriptSlateIcon(FScriptSlateIcon *this,FName param_1,FName param_2)

{
  FString *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  this->StyleSetName = param_1;
  this->StyleName = param_2;
  local_res8 = param_2;
  ::FString::FString(&local_28,".Small");
  pFVar1 = ::FName::ToString(&local_res8,&local_18);
  ::FString::ConcatFF(&local_38,pFVar1,&local_28);
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar2.Data = local_38.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&this->SmallStyleName,(wchar_t *)FVar2.Data);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return this;
}

// FScriptSlateIcon @ 142c380d0

FScriptSlateIcon * __thiscall FScriptSlateIcon::FScriptSlateIcon(FScriptSlateIcon *this)

{
  (this->StyleSetName).ComparisonIndex = 0;
  (this->StyleSetName).Number = 0;
  (this->StyleName).ComparisonIndex = 0;
  (this->StyleName).Number = 0;
  (this->SmallStyleName).ComparisonIndex = 0;
  (this->SmallStyleName).Number = 0;
  return this;
}

// GetSlateIcon @ 142c5fad0

FSlateIcon * __thiscall
FScriptSlateIcon::GetSlateIcon(FScriptSlateIcon *this,FSlateIcon *__return_storage_ptr__)

{
  FName FVar1;
  
  FVar1 = this->SmallStyleName;
  if (FVar1 == (FName)0x0) {
    if ((this->StyleSetName == (FName)0x0) && (this->StyleName == (FName)0x0)) {
      FSlateIcon::FSlateIcon(__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    FVar1.ComparisonIndex.Value = 0;
    FVar1.Number = 0;
  }
  FSlateIcon::FSlateIcon(__return_storage_ptr__,this->StyleSetName,this->StyleName,FVar1,(FName)0x0)
  ;
  return __return_storage_ptr__;
}

