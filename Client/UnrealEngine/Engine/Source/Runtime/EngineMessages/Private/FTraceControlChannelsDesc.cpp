// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineMessages
// Functions: 2

// StaticStruct @ 14463ad70

UScriptStruct * __cdecl FTraceControlChannelsDesc::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTraceControlChannelsDesc.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EngineMessages();
    Z_Registration_Info_UScriptStruct_FTraceControlChannelsDesc.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTraceControlChannelsDesc,(UObject *)pUVar1,
                         L"TraceControlChannelsDesc");
  }
  return Z_Registration_Info_UScriptStruct_FTraceControlChannelsDesc.OuterSingleton;
}

// ~FTraceControlChannelsDesc @ 14463b3b0

void __thiscall
FTraceControlChannelsDesc::~FTraceControlChannelsDesc(FTraceControlChannelsDesc *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ReadOnlyIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->Descriptions).AllocatorInstance.Data,(this->Descriptions).ArrayNum);
  pFVar1 = (this->Descriptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Ids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->Channels).AllocatorInstance.Data,(this->Channels).ArrayNum);
  pFVar1 = (this->Channels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

