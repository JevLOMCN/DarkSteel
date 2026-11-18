// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 2

// StaticStruct @ 146b37820

UScriptStruct * __cdecl FGatherTextIncludePath::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGatherTextIncludePath.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Localization();
    Z_Registration_Info_UScriptStruct_FGatherTextIncludePath.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGatherTextIncludePath,(UObject *)pUVar1,
                         L"GatherTextIncludePath");
  }
  return Z_Registration_Info_UScriptStruct_FGatherTextIncludePath.OuterSingleton;
}

// Validate @ 146b91160

bool __thiscall
FGatherTextIncludePath::Validate(FGatherTextIncludePath *this,bool param_1,FText *param_2)

{
  int iVar1;
  FText *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  FText local_18;
  
  if ((this->Pattern).Data.ArrayNum < 2) {
    pwVar4 = L"Include path not specified. Use \".\" to specify the root directory.";
    pwVar3 = L"IncludePathEmptyError";
  }
  else {
    iVar1 = ::FString::Find(&this->Pattern,L"*",1,IgnoreCase,FromStart,-1);
    if (iVar1 != -1) {
      return true;
    }
    pwVar4 = 
    L"Include path does not specify a wild card (\"*\"). Append \"*\" or only the file at the exact specified directory will be gathered from."
    ;
    pwVar3 = L"IncludePathNoWildcardError";
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText(&local_18,L"LocalizationTargetTypes",pwVar3,pwVar4)
  ;
  FText::operator=(param_2,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return false;
}

