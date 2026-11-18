// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 147672820

UScriptStruct * __cdecl FBlueprintDebugData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintDebugData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBlueprintDebugData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintDebugData,(UObject *)pUVar1,
                         L"BlueprintDebugData");
  }
  return Z_Registration_Info_UScriptStruct_FBlueprintDebugData.OuterSingleton;
}

// FBlueprintDebugData @ 147686e40

FBlueprintDebugData * __thiscall
FBlueprintDebugData::FBlueprintDebugData(FBlueprintDebugData *this,FBlueprintDebugData *param_1)

{
  return this;
}

// FBlueprintDebugData @ 147686e50

FBlueprintDebugData * __thiscall
FBlueprintDebugData::FBlueprintDebugData(FBlueprintDebugData *this,FBlueprintDebugData *param_1)

{
  return this;
}

// FBlueprintDebugData @ 147686e60

FBlueprintDebugData * __thiscall FBlueprintDebugData::FBlueprintDebugData(FBlueprintDebugData *this)

{
  return this;
}

// ~FBlueprintDebugData @ 14768a500

void __thiscall FBlueprintDebugData::~FBlueprintDebugData(FBlueprintDebugData *this)

{
  return;
}

// operator= @ 14768b0d0

FBlueprintDebugData * __thiscall
FBlueprintDebugData::operator=(FBlueprintDebugData *this,FBlueprintDebugData *param_1)

{
  return this;
}

// operator= @ 14768b0e0

FBlueprintDebugData * __thiscall
FBlueprintDebugData::operator=(FBlueprintDebugData *this,FBlueprintDebugData *param_1)

{
  return this;
}

