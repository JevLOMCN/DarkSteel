// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// StaticStruct @ 14d579c90

UScriptStruct * __cdecl FVector3dCameraVariableReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVector3dCameraVariableReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FVector3dCameraVariableReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVector3dCameraVariableReference,
                         (UObject *)pUVar1,L"Vector3dCameraVariableReference");
  }
  return Z_Registration_Info_UScriptStruct_FVector3dCameraVariableReference.OuterSingleton;
}

// GetValue @ 14d5ac490

TVector<double> * __thiscall
FVector3dCameraVariableReference::GetValue
          (FVector3dCameraVariableReference *this,FCameraVariableTable *param_1)

{
  TVector<double> *pTVar1;
  
  if ((this->VariableID).Value != 0xffffffff) {
    pTVar1 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector<double>_>
                       (param_1,(FCameraVariableID)(this->VariableID).Value);
    return pTVar1;
  }
  return (TVector<double> *)0x0;
}

