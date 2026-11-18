// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// StaticStruct @ 14d579020

UScriptStruct * __cdecl FBooleanCameraVariableReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBooleanCameraVariableReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FBooleanCameraVariableReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBooleanCameraVariableReference,(UObject *)pUVar1
                         ,L"BooleanCameraVariableReference");
  }
  return Z_Registration_Info_UScriptStruct_FBooleanCameraVariableReference.OuterSingleton;
}

// GetValue @ 14d5abe10

bool * __thiscall
FBooleanCameraVariableReference::GetValue
          (FBooleanCameraVariableReference *this,FCameraVariableTable *param_1)

{
  bool *pbVar1;
  
  if ((this->VariableID).Value != 0xffffffff) {
    pbVar1 = UE::Cameras::FCameraVariableTable::FindValue<bool>
                       (param_1,(FCameraVariableID)(this->VariableID).Value);
    return pbVar1;
  }
  return (bool *)0x0;
}

