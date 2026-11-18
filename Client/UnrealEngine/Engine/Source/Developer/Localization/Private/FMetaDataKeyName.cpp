// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 2

// StaticStruct @ 146b38240

UScriptStruct * __cdecl FMetaDataKeyName::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetaDataKeyName.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Localization();
    Z_Registration_Info_UScriptStruct_FMetaDataKeyName.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetaDataKeyName,(UObject *)pUVar1,
                         L"MetaDataKeyName");
  }
  return Z_Registration_Info_UScriptStruct_FMetaDataKeyName.OuterSingleton;
}

// Validate @ 146b91910

bool __thiscall FMetaDataKeyName::Validate(FMetaDataKeyName *this,bool param_1,FText *param_2)

{
  FText *pFVar1;
  FText local_18;
  
  if ((this->Name).Data.ArrayNum < 2) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"LocalizationTargetTypes",L"MetaDataKeyNameEmptyError",
                        L"Meta data key not specified.");
    FText::operator=(param_2,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    return false;
  }
  return true;
}

