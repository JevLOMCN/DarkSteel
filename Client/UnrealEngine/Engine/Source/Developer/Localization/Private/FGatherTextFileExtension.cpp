// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 2

// StaticStruct @ 146b378a0

UScriptStruct * __cdecl FGatherTextFileExtension::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGatherTextFileExtension.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Localization();
    Z_Registration_Info_UScriptStruct_FGatherTextFileExtension.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextFileExtension,(UObject *)pUVar1,
                         L"GatherTextFileExtension");
  }
  return Z_Registration_Info_UScriptStruct_FGatherTextFileExtension.OuterSingleton;
}

// Validate @ 146b90db0

bool __thiscall
FGatherTextFileExtension::Validate(FGatherTextFileExtension *this,bool param_1,FText *param_2)

{
  FText *pFVar1;
  FText local_18;
  
  if ((this->Pattern).Data.ArrayNum < 2) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"LocalizationTargetTypes",L"FileExtensionEmptyError",
                        L"File extension not specified.");
    FText::operator=(param_2,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    return false;
  }
  return true;
}

