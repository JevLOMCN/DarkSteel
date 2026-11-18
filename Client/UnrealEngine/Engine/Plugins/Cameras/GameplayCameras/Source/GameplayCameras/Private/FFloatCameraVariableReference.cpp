// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// StaticStruct @ 14d579260

UScriptStruct * __cdecl FFloatCameraVariableReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloatCameraVariableReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FFloatCameraVariableReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloatCameraVariableReference,(UObject *)pUVar1,
                         L"FloatCameraVariableReference");
  }
  return Z_Registration_Info_UScriptStruct_FFloatCameraVariableReference.OuterSingleton;
}

// GetValue @ 14d5ac070

float * __thiscall
FFloatCameraVariableReference::GetValue
          (FFloatCameraVariableReference *this,FCameraVariableTable *param_1)

{
  float *pfVar1;
  
  if ((this->VariableID).Value != 0xffffffff) {
    pfVar1 = UE::Cameras::FCameraVariableTable::FindValue<float>
                       (param_1,(FCameraVariableID)(this->VariableID).Value);
    return pfVar1;
  }
  return (float *)0x0;
}

