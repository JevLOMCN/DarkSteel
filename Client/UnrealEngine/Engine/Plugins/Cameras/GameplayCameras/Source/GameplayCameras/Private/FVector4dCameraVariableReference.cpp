// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// StaticStruct @ 14d579e20

UScriptStruct * __cdecl FVector4dCameraVariableReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVector4dCameraVariableReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FVector4dCameraVariableReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVector4dCameraVariableReference,
                         (UObject *)pUVar1,L"Vector4dCameraVariableReference");
  }
  return Z_Registration_Info_UScriptStruct_FVector4dCameraVariableReference.OuterSingleton;
}

// GetValue @ 14d5ac590

TVector4<double> * __thiscall
FVector4dCameraVariableReference::GetValue
          (FVector4dCameraVariableReference *this,FCameraVariableTable *param_1)

{
  TVector4<double> *pTVar1;
  
  if ((this->VariableID).Value != 0xffffffff) {
    pTVar1 = UE::Cameras::FCameraVariableTable::FindValue<UE::Math::TVector4<double>_>
                       (param_1,(FCameraVariableID)(this->VariableID).Value);
    return pTVar1;
  }
  return (TVector4<double> *)0x0;
}

