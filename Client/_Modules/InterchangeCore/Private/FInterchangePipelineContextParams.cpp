// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 2

// StaticStruct @ 14e321660

UScriptStruct * __cdecl FInterchangePipelineContextParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInterchangePipelineContextParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeCore();
    Z_Registration_Info_UScriptStruct_FInterchangePipelineContextParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInterchangePipelineContextParams,
                         (UObject *)pUVar1,L"InterchangePipelineContextParams");
  }
  return Z_Registration_Info_UScriptStruct_FInterchangePipelineContextParams.OuterSingleton;
}

// operator= @ 14e405610

FInterchangePipelineContextParams * __thiscall
FInterchangePipelineContextParams::operator=
          (FInterchangePipelineContextParams *this,FInterchangePipelineContextParams *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  UInterchangeBaseNodeContainer *pUVar3;
  
  this->ContextType = param_1->ContextType;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->ImportObjectType).field0_0x0.DebugPtr, pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ImportObjectType).field0_0x0 = (param_1->ImportObjectType).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->ReimportAsset).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  (this->ReimportAsset).field0_0x0 = (param_1->ReimportAsset).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 = (param_1->BaseNodeContainer).field0_0x0.DebugPtr,
     pUVar3 != (UInterchangeBaseNodeContainer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->BaseNodeContainer).field0_0x0 = (param_1->BaseNodeContainer).field0_0x0;
  return this;
}

