// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// StaticStruct @ 149722c90

UScriptStruct * __cdecl FPCGPerExecutionCacheData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGPerExecutionCacheData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGPerExecutionCacheData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGPerExecutionCacheData,(UObject *)pUVar1,
                         L"PCGPerExecutionCacheData");
  }
  return Z_Registration_Info_UScriptStruct_FPCGPerExecutionCacheData.OuterSingleton;
}

// AddStructReferencedObjects @ 149722cd0

void __thiscall
FPCGPerExecutionCacheData::AddStructReferencedObjects
          (FPCGPerExecutionCacheData *this,FReferenceCollector *param_1)

{
  return;
}

// ~FPCGPerExecutionCacheData @ 149725d60

void __thiscall
FPCGPerExecutionCacheData::~FPCGPerExecutionCacheData(FPCGPerExecutionCacheData *this)

{
  return;
}

