// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SessionMessages
// Functions: 2

// StaticStruct @ 148ce7d20

UScriptStruct * __cdecl FSessionServicePong::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSessionServicePong.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_SessionMessages();
    Z_Registration_Info_UScriptStruct_FSessionServicePong.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSessionServicePong,(UObject *)pUVar1,
                         L"SessionServicePong");
  }
  return Z_Registration_Info_UScriptStruct_FSessionServicePong.OuterSingleton;
}

// ~FSessionServicePong @ 148ce8330

void __thiscall FSessionServicePong::~FSessionServicePong(FSessionServicePong *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->SessionOwner).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SessionName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlatformName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InstanceName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeviceName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BuildDate).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

