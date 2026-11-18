// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147510b00

UScriptStruct * __cdecl FAnimationCurveIdentifier::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimationCurveIdentifier.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimationCurveIdentifier.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimationCurveIdentifier,(UObject *)pUVar1,
                         L"AnimationCurveIdentifier");
  }
  return Z_Registration_Info_UScriptStruct_FAnimationCurveIdentifier.OuterSingleton;
}

// PostSerialize @ 147571f30

void __thiscall
FAnimationCurveIdentifier::PostSerialize(FAnimationCurveIdentifier *this,FArchive *param_1)

{
  return;
}

