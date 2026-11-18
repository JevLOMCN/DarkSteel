// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// StaticStruct @ 1499015e0

UScriptStruct * __cdecl FEnumSelector::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEnumSelector.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FEnumSelector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEnumSelector,(UObject *)pUVar1,L"EnumSelector");
  }
  return Z_Registration_Info_UScriptStruct_FEnumSelector.OuterSingleton;
}

// GetCultureInvariantDisplayName @ 1499f4510

FString * __thiscall
FEnumSelector::GetCultureInvariantDisplayName(FEnumSelector *this,FString *__return_storage_ptr__)

{
  UEnum *this_00;
  FText *pFVar1;
  FText local_38;
  FText local_28;
  FText local_18;
  
  this_00 = (this->Class).field0_0x0.DebugPtr;
  if (this_00 == (UEnum *)0x0) {
    pFVar1 = FText::FText(&local_18);
    FText::FText(&local_38,pFVar1);
    local_28.TextData.Reference = local_18.TextData.Reference;
  }
  else {
    pFVar1 = UEnum::GetDisplayNameTextByValue(this_00,&local_28,this->Value);
    FText::FText(&local_38,pFVar1);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  FText::BuildSourceString(&local_38,__return_storage_ptr__);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetDisplayName @ 1499f56e0

FText * __thiscall FEnumSelector::GetDisplayName(FEnumSelector *this,FText *__return_storage_ptr__)

{
  UEnum *this_00;
  FText *pFVar1;
  FText local_28;
  FText local_18;
  
  this_00 = (this->Class).field0_0x0.DebugPtr;
  if (this_00 == (UEnum *)0x0) {
    pFVar1 = FText::FText(&local_18);
    FText::FText(__return_storage_ptr__,pFVar1);
    local_28.TextData.Reference = local_18.TextData.Reference;
  }
  else {
    pFVar1 = UEnum::GetDisplayNameTextByValue(this_00,&local_28,this->Value);
    FText::FText(__return_storage_ptr__,pFVar1);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

