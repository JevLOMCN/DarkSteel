// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1487da9c0

UScriptStruct * __cdecl FExternalToolDefinition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FExternalToolDefinition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FExternalToolDefinition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FExternalToolDefinition,(UObject *)pUVar1,
                         L"ExternalToolDefinition");
  }
  return Z_Registration_Info_UScriptStruct_FExternalToolDefinition.OuterSingleton;
}

// ~FExternalToolDefinition @ 14880c270

void __thiscall FExternalToolDefinition::~FExternalToolDefinition(FExternalToolDefinition *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ScriptDirectory).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ScriptExtension).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkingDirectory).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CommandLineOptions).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExecutablePath).FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ToolName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

