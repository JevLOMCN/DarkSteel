// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// StaticStruct @ 149722d10

UScriptStruct * __cdecl FPCGPerExecutionCachePCGData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGPerExecutionCachePCGData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGPerExecutionCachePCGData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGPerExecutionCachePCGData,(UObject *)pUVar1,
                         L"PCGPerExecutionCachePCGData");
  }
  return Z_Registration_Info_UScriptStruct_FPCGPerExecutionCachePCGData.OuterSingleton;
}

// AddStructReferencedObjects @ 149cabf10

void __thiscall
FPCGPerExecutionCachePCGData::AddStructReferencedObjects
          (FPCGPerExecutionCachePCGData *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000149cabf23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Data,0,0);
  return;
}

