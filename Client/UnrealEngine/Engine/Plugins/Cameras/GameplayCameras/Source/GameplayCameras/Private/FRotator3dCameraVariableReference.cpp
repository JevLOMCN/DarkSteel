// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// StaticStruct @ 14d57a0b0

UScriptStruct * __cdecl FRotator3dCameraVariableReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRotator3dCameraVariableReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FRotator3dCameraVariableReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRotator3dCameraVariableReference,
                         (UObject *)pUVar1,L"Rotator3dCameraVariableReference");
  }
  return Z_Registration_Info_UScriptStruct_FRotator3dCameraVariableReference.OuterSingleton;
}

// GetValue @ 14d5ac150

TRotator<double> * __thiscall
FRotator3dCameraVariableReference::GetValue
          (FRotator3dCameraVariableReference *this,FCameraVariableTable *param_1)

{
  TRotator<double> *pTVar1;
  
  if ((this->VariableID).Value != 0xffffffff) {
    pTVar1 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TRotator<double>_>
                       (param_1,(FCameraVariableID)(this->VariableID).Value);
    return pTVar1;
  }
  return (TRotator<double> *)0x0;
}

