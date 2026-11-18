// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// StaticStruct @ 14d579a90

UScriptStruct * __cdecl FVector2fCameraVariableReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVector2fCameraVariableReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FVector2fCameraVariableReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVector2fCameraVariableReference,
                         (UObject *)pUVar1,L"Vector2fCameraVariableReference");
  }
  return Z_Registration_Info_UScriptStruct_FVector2fCameraVariableReference.OuterSingleton;
}

// GetValue @ 14d5ac410

TVector2<float> * __thiscall
FVector2fCameraVariableReference::GetValue
          (FVector2fCameraVariableReference *this,FCameraVariableTable *param_1)

{
  TVector2<float> *pTVar1;
  
  if ((this->VariableID).Value != 0xffffffff) {
    pTVar1 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector2<float>_>
                       (param_1,(FCameraVariableID)(this->VariableID).Value);
    return pTVar1;
  }
  return (TVector2<float> *)0x0;
}

