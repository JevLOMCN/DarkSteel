// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// StaticStruct @ 14d579b90

UScriptStruct * __cdecl FVector2dCameraVariableReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVector2dCameraVariableReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FVector2dCameraVariableReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVector2dCameraVariableReference,
                         (UObject *)pUVar1,L"Vector2dCameraVariableReference");
  }
  return Z_Registration_Info_UScriptStruct_FVector2dCameraVariableReference.OuterSingleton;
}

// GetValue @ 14d5ac380

TVector2<double> * __thiscall
FVector2dCameraVariableReference::GetValue
          (FVector2dCameraVariableReference *this,FCameraVariableTable *param_1)

{
  TVector2<double> *pTVar1;
  
  if ((this->VariableID).Value != 0xffffffff) {
    pTVar1 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector2<double>_>
                       (param_1,(FCameraVariableID)(this->VariableID).Value);
    return pTVar1;
  }
  return (TVector2<double> *)0x0;
}

