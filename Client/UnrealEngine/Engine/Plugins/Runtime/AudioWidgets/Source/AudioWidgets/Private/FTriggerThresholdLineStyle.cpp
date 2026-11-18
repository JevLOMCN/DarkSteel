// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 2

// StaticStruct @ 14d890f60

UScriptStruct * __cdecl FTriggerThresholdLineStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTriggerThresholdLineStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UScriptStruct_FTriggerThresholdLineStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTriggerThresholdLineStyle,(UObject *)pUVar1,
                         L"TriggerThresholdLineStyle");
  }
  return Z_Registration_Info_UScriptStruct_FTriggerThresholdLineStyle.OuterSingleton;
}

// GetTypeName @ 14d9375d0

FName __thiscall FTriggerThresholdLineStyle::GetTypeName(FTriggerThresholdLineStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

