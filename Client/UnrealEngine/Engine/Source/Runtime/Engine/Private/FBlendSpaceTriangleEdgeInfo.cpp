// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147516a80

UScriptStruct * __cdecl FBlendSpaceTriangleEdgeInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlendSpaceTriangleEdgeInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBlendSpaceTriangleEdgeInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo,(UObject *)pUVar1,
                         L"BlendSpaceTriangleEdgeInfo");
  }
  return Z_Registration_Info_UScriptStruct_FBlendSpaceTriangleEdgeInfo.OuterSingleton;
}

// FBlendSpaceTriangleEdgeInfo @ 147531350

FBlendSpaceTriangleEdgeInfo * __thiscall
FBlendSpaceTriangleEdgeInfo::FBlendSpaceTriangleEdgeInfo(FBlendSpaceTriangleEdgeInfo *this)

{
  this->NeighbourTriangleIndex = -1;
  this->AdjacentPerimeterTriangleIndices[0] = -1;
  (this->Normal).field0_0x0._s_0.X = 0.0;
  (this->Normal).field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)(this->AdjacentPerimeterTriangleIndices + 1) = 0xffffffffffffffff;
  this->AdjacentPerimeterVertexIndices[1] = -1;
  return this;
}

