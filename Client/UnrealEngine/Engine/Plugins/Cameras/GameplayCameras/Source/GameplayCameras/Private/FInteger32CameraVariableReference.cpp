// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// StaticStruct @ 14d5791c0

UScriptStruct * __cdecl FInteger32CameraVariableReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInteger32CameraVariableReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FInteger32CameraVariableReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInteger32CameraVariableReference,
                         (UObject *)pUVar1,L"Integer32CameraVariableReference");
  }
  return Z_Registration_Info_UScriptStruct_FInteger32CameraVariableReference.OuterSingleton;
}

// GetValue @ 14d5ac0d0

int * __thiscall
FInteger32CameraVariableReference::GetValue
          (FInteger32CameraVariableReference *this,FCameraVariableTable *param_1)

{
  int *piVar1;
  
  if ((this->VariableID).Value != 0xffffffff) {
    piVar1 = UE::Cameras::FCameraVariableTable::FindValue<int>
                       (param_1,(FCameraVariableID)(this->VariableID).Value);
    return piVar1;
  }
  return (int *)0x0;
}

