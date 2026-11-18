// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// StaticStruct @ 14a898b50

UScriptStruct * __cdecl FPoseSearchColumnNullInputValue::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchColumnNullInputValue.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchColumnNullInputValue.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchColumnNullInputValue,(UObject *)pUVar1
                         ,L"PoseSearchColumnNullInputValue");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchColumnNullInputValue.OuterSingleton;
}

// GetDisplayName @ 14a8baba0

void __thiscall
FPoseSearchColumnNullInputValue::GetDisplayName
          (FPoseSearchColumnNullInputValue *this,FText *param_1)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::FromString(&local_18,"FPoseSearchColumn");
  FText::operator=(param_1,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

