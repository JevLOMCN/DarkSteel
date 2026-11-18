// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147266900

UScriptStruct * __cdecl FDataLayerInstanceNames::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataLayerInstanceNames.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FDataLayerInstanceNames.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataLayerInstanceNames,(UObject *)pUVar1,
                         L"DataLayerInstanceNames");
  }
  return Z_Registration_Info_UScriptStruct_FDataLayerInstanceNames.OuterSingleton;
}

// GetExternalDataLayer @ 148acd480

FName __thiscall FDataLayerInstanceNames::GetExternalDataLayer(FDataLayerInstanceNames *this)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FName in_RDX;
  
  if (this->bIsFirstDataLayerExternal != false) {
    if ((this->DataLayers).ArrayNum == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsFirstDataLayerExternal || !DataLayers.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\WorldPartition\\DataLayer\\DataLayerInstanceNames.h"
                         ,0x24,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar3 = (FName)(*pcVar1)();
        return FVar3;
      }
    }
    if (this->bIsFirstDataLayerExternal != false) {
      if ((this->DataLayers).ArrayNum < 1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          FVar3 = (FName)(*pcVar1)();
          return FVar3;
        }
      }
      *(undefined8 *)in_RDX = *(undefined8 *)(this->DataLayers).AllocatorInstance.Data;
      return in_RDX;
    }
  }
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

