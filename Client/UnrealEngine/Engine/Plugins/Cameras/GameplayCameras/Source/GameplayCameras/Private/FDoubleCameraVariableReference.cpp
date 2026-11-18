// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// StaticStruct @ 14d579a10

UScriptStruct * __cdecl FDoubleCameraVariableReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDoubleCameraVariableReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FDoubleCameraVariableReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDoubleCameraVariableReference,(UObject *)pUVar1,
                         L"DoubleCameraVariableReference");
  }
  return Z_Registration_Info_UScriptStruct_FDoubleCameraVariableReference.OuterSingleton;
}

// GetValue @ 14d5ac000

double * __thiscall
FDoubleCameraVariableReference::GetValue
          (FDoubleCameraVariableReference *this,FCameraVariableTable *param_1)

{
  double *pdVar1;
  
  if ((this->VariableID).Value != 0xffffffff) {
    pdVar1 = UE::Cameras::FCameraVariableTable::FindValue<double>
                       (param_1,(FCameraVariableID)(this->VariableID).Value);
    return pdVar1;
  }
  return (double *)0x0;
}

