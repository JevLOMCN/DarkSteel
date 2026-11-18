// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// StaticStruct @ 14d57a300

UScriptStruct * __cdecl FTransform3fCameraVariableReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransform3fCameraVariableReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FTransform3fCameraVariableReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransform3fCameraVariableReference,
                         (UObject *)pUVar1,L"Transform3fCameraVariableReference");
  }
  return Z_Registration_Info_UScriptStruct_FTransform3fCameraVariableReference.OuterSingleton;
}

// GetValue @ 14d5ac300

TTransform<float> * __thiscall
FTransform3fCameraVariableReference::GetValue
          (FTransform3fCameraVariableReference *this,FCameraVariableTable *param_1)

{
  TTransform<float> *pTVar1;
  
  if ((this->VariableID).Value != 0xffffffff) {
    pTVar1 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TTransform<float>_>
                       (param_1,(FCameraVariableID)(this->VariableID).Value);
    return pTVar1;
  }
  return (TTransform<float> *)0x0;
}

