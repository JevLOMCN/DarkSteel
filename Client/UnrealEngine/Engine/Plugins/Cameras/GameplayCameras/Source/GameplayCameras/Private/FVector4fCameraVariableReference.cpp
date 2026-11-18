// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// StaticStruct @ 14d579cd0

UScriptStruct * __cdecl FVector4fCameraVariableReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVector4fCameraVariableReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FVector4fCameraVariableReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVector4fCameraVariableReference,
                         (UObject *)pUVar1,L"Vector4fCameraVariableReference");
  }
  return Z_Registration_Info_UScriptStruct_FVector4fCameraVariableReference.OuterSingleton;
}

// GetValue @ 14d5ac610

TVector4<float> * __thiscall
FVector4fCameraVariableReference::GetValue
          (FVector4fCameraVariableReference *this,FCameraVariableTable *param_1)

{
  TVector4<float> *pTVar1;
  
  if ((this->VariableID).Value != 0xffffffff) {
    pTVar1 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector4<float>_>
                       (param_1,(FCameraVariableID)(this->VariableID).Value);
    return pTVar1;
  }
  return (TVector4<float> *)0x0;
}

