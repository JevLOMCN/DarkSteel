// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// StaticStruct @ 145ef72c0

UScriptStruct * __cdecl FLandscapeLayerBrush::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeLayerBrush.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UScriptStruct_FLandscapeLayerBrush.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeLayerBrush,(UObject *)pUVar1,
                         L"LandscapeLayerBrush");
  }
  return Z_Registration_Info_UScriptStruct_FLandscapeLayerBrush.OuterSingleton;
}

// ~FLandscapeLayerBrush @ 145f03f30

void __thiscall FLandscapeLayerBrush::~FLandscapeLayerBrush(FLandscapeLayerBrush *this)

{
  return;
}

