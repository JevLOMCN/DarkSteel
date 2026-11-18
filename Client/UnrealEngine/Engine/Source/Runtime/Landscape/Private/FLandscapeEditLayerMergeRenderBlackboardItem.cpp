// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// StaticStruct @ 145ef0e70

UScriptStruct * __cdecl FLandscapeEditLayerMergeRenderBlackboardItem::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeEditLayerMergeRenderBlackboardItem.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UScriptStruct_FLandscapeEditLayerMergeRenderBlackboardItem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeEditLayerMergeRenderBlackboardItem,
                         (UObject *)pUVar1,L"LandscapeEditLayerMergeRenderBlackboardItem");
  }
  return Z_Registration_Info_UScriptStruct_FLandscapeEditLayerMergeRenderBlackboardItem.
         OuterSingleton;
}

// ~FLandscapeEditLayerMergeRenderBlackboardItem @ 145ef41f0

void __thiscall
FLandscapeEditLayerMergeRenderBlackboardItem::~FLandscapeEditLayerMergeRenderBlackboardItem
          (FLandscapeEditLayerMergeRenderBlackboardItem *this)

{
  return;
}

