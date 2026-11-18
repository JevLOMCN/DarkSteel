// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 2

// StaticStruct @ 14e10ee60

UScriptStruct * __cdecl FOptimusFunctionGraphIdentifier::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusFunctionGraphIdentifier.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusFunctionGraphIdentifier.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusFunctionGraphIdentifier,(UObject *)pUVar1
                         ,L"OptimusFunctionGraphIdentifier");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusFunctionGraphIdentifier.OuterSingleton;
}

// Resolve @ 14e219b40

UOptimusFunctionNodeGraph * __thiscall
FOptimusFunctionGraphIdentifier::Resolve(FOptimusFunctionGraphIdentifier *this)

{
  UOptimusDeformer *this_00;
  UOptimusFunctionNodeGraph *pUVar1;
  FGuid local_18;
  
  this_00 = (this->Asset).field0_0x0.DebugPtr;
  if (this_00 != (UOptimusDeformer *)0x0) {
    local_18.A = (this->Guid).A;
    local_18.B = (this->Guid).B;
    local_18.C = (this->Guid).C;
    local_18.D = (this->Guid).D;
    pUVar1 = UOptimusDeformer::FindFunctionByGuid(this_00,&local_18);
    return pUVar1;
  }
  return (UOptimusFunctionNodeGraph *)0x0;
}

