// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 2

// StaticStruct @ 14cb58c10

UScriptStruct * __cdecl FMeshElementSelectionParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMeshElementSelectionParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ModelingComponents();
    Z_Registration_Info_UScriptStruct_FMeshElementSelectionParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMeshElementSelectionParams,(UObject *)pUVar1,
                         L"MeshElementSelectionParams");
  }
  return Z_Registration_Info_UScriptStruct_FMeshElementSelectionParams.OuterSingleton;
}

// FMeshElementSelectionParams @ 14cb61c00

FMeshElementSelectionParams * __thiscall
FMeshElementSelectionParams::FMeshElementSelectionParams
          (FMeshElementSelectionParams *this,FMeshElementSelectionParams *param_1)

{
  UMaterialInstanceDynamic *pUVar1;
  
  TStaticArray<FString,3,4294967295>::TStaticArray<FString,3,4294967295>
            (&this->Identifiers,&param_1->Identifiers);
  this->DepthBias = param_1->DepthBias;
  this->LineThickness = param_1->LineThickness;
  this->PointSize = param_1->PointSize;
  (this->Color).field0_0x0 = (param_1->Color).field0_0x0;
  pUVar1 = (param_1->SelectionFillColor).field0_0x0.DebugPtr;
  (this->SelectionFillColor).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UMaterialInstanceDynamic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

