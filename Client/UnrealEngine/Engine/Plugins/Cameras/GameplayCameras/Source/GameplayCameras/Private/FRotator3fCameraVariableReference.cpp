// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// StaticStruct @ 14d579f90

UScriptStruct * __cdecl FRotator3fCameraVariableReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRotator3fCameraVariableReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FRotator3fCameraVariableReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRotator3fCameraVariableReference,
                         (UObject *)pUVar1,L"Rotator3fCameraVariableReference");
  }
  return Z_Registration_Info_UScriptStruct_FRotator3fCameraVariableReference.OuterSingleton;
}

// GetValue @ 14d5ac1d0

TRotator<float> * __thiscall
FRotator3fCameraVariableReference::GetValue
          (FRotator3fCameraVariableReference *this,FCameraVariableTable *param_1)

{
  TRotator<float> *pTVar1;
  
  if ((this->VariableID).Value != 0xffffffff) {
    pTVar1 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TRotator<float>_>
                       (param_1,(FCameraVariableID)(this->VariableID).Value);
    return pTVar1;
  }
  return (TRotator<float> *)0x0;
}

