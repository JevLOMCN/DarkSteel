// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 2

// StaticStruct @ 14e115e70

UScriptStruct * __cdecl FOptimusDeformerInstanceExecInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusDeformerInstanceExecInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusDeformerInstanceExecInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo,
                         (UObject *)pUVar1,L"OptimusDeformerInstanceExecInfo");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusDeformerInstanceExecInfo.OuterSingleton;
}

// FOptimusDeformerInstanceExecInfo @ 14e151b00

FOptimusDeformerInstanceExecInfo * __thiscall
FOptimusDeformerInstanceExecInfo::FOptimusDeformerInstanceExecInfo
          (FOptimusDeformerInstanceExecInfo *this)

{
  this->GraphType = Update;
  (this->GraphName).ComparisonIndex = 0;
  (this->GraphName).Number = 0;
  (this->ComputeGraph).field0_0x0.DebugPtr = (UComputeGraph *)0x0;
  (this->ComputeGraphInstance).DataProviders.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ComputeGraphInstance).DataProviders.ArrayNum = 0;
  (this->ComputeGraphInstance).DataProviders.ArrayMax = 0;
  (this->ComputeGraphInstance).GraphSortPriority = '\0';
  (this->ComputeGraphInstance).bEnableRenderCaptures = false;
  return this;
}

