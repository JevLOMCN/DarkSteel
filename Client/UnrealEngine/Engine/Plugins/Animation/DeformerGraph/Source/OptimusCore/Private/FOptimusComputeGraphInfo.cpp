// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 2

// StaticStruct @ 14e11b780

UScriptStruct * __cdecl FOptimusComputeGraphInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusComputeGraphInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusComputeGraphInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusComputeGraphInfo,(UObject *)pUVar1,
                         L"OptimusComputeGraphInfo");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusComputeGraphInfo.OuterSingleton;
}

// FOptimusComputeGraphInfo @ 14e150ec0

FOptimusComputeGraphInfo * __thiscall
FOptimusComputeGraphInfo::FOptimusComputeGraphInfo
          (FOptimusComputeGraphInfo *this,FOptimusComputeGraphInfo *param_1)

{
  UOptimusComputeGraph *pUVar1;
  
  this->GraphType = param_1->GraphType;
  this->GraphName = param_1->GraphName;
  pUVar1 = (param_1->ComputeGraph).field0_0x0.DebugPtr;
  (this->ComputeGraph).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UOptimusComputeGraph *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

